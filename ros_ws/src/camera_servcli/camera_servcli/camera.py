

import requests
import json

class CameraWebService():
    def __init__(self):
        self.main_url = "http://nova.astrometry.net/"
        data = {'request-json': json.dumps({"apikey": "pcnjeiosxtccosfp"}),}
        self.session = self.response_get(
            self.send_data_request("api/login", data), ["session"], "string")


    def send_basic_request(self, url):
        response = requests.post(self.main_url + url)
        return response

    def send_data_request(self, url, data):
        response = requests.post(self.main_url + url, data=data)
        return response

    def send_file_request(self, url, data, files):
        response = requests.post(self.main_url + url, files=files, data=data)
        return response
    
    def response_get(self, response, params=[], mode=""):
        json_data = json.loads(response.text)
        for param in params:
            if mode == "string":
                params[params.index(param)] = str(json_data.get(param))
            else:
                params[params.index(param)] = json_data.get(param)
        if len(params) > 1:
            return params[0], params[1]
        else:
            return params[0]

    def upload_image(self, file_name):
        data = {
                'request-json': json.dumps({"publicly_visible": "y", "allow_modifications": "d", "session": self.session, "allow_commercial_use": "d"}),
        }
        f = open('/home/ubuntu/ROS-observatory/ros_ws/src/camera_servcli/camera_servcli/file_name.png', 'rb')
        files = {'file': ('/home/ubuntu/ROS-observatory/ros_ws/src/camera_servcli/camera_servcli/file_name.png', f)}
        subid = self.response_get(
            self.send_file_request("api/upload", data, files), ["subid"])
        return subid

    def submission_status(self, subid):
        print("Waiting submition...")
        processing_finished, jobid = self.response_get(self.send_basic_request("api/submissions/" + str(subid)), ["processing_finished","jobs"], "string")
        while processing_finished == "None":
            processing_finished, jobid = self.response_get(self.send_basic_request("api/submissions/" + str(subid)), ["processing_finished","jobs"], "string")
        while str(jobid) == "[None]":
            jobid = self.response_get(self.send_basic_request("api/submissions/" + str(subid)), ["jobs"])
        print("Submitted.")
        return jobid[0]


    def job_status(self, jobid):
        print("Starting job...")
        job_status = self.response_get(
            self.send_basic_request("api/jobs/" + str(jobid)), ["status"])
        while job_status != "success":
            job_status = self.response_get(
                self.send_basic_request("api/jobs/" + str(jobid)), ["status"])
        print("Job finished.")

    def get_image_info(self, jobid):
        tags, objects = self.response_get(
            self.send_basic_request("api/jobs/" + str(jobid) + "/info/"),  ["tags", "objects_in_field"], "string")
        return tags, objects
    
    def download_image(self, jobid, image_name):
        url = "http://nova.astrometry.net/annotated_display/"+ str(jobid)
        response = requests.get(url)
        if response.status_code == 200:
            with open("/home/ubuntu/ROS-observatory/ros_ws/src/camera_servcli/camera_servcli/" + str(image_name) + ".jpeg", 'wb') as f:
                f.write(response.content)
    def analyze_image_pipeline(self, file_name):
        subid = self.upload_image(file_name + ".png")
        jobid = self.submission_status(str(subid))
        self.job_status(str(jobid))
        tags, objects = self.get_image_info(str(jobid))
        self.download_image(jobid, "image_name")
        print("Image downloaded.")
        return tags, objects



    
