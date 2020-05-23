
from pprint import pprint
import requests
import json

class WeatherStation():
    def __init__(self):
        self.url = "http://api.openweathermap.org/data/2.5/weather?lat=41.638575&lon=2.253381&APPID=1aba1b010540ae656788058cd4cc7559&units=metric"

    def send_request(self):
        response = requests.get(self.url)
        return response

    def get_weather(self):
        response = self.send_request()
        json_data = json.loads(response.text)

        weather_info = []

        weather_info.append(str(json_data.get("weather")[0].get("main")))
        weather_info.append(str(json_data.get("weather")[0].get("description")))
        weather_info.append(str(json_data.get("main").get("temp")))
        weather_info.append(str(json_data.get("main").get("pressure")))
        weather_info.append(str(json_data.get("main").get("humidity")))
        weather_info.append(str(json_data.get("wind").get("speed")))
        weather_info.append(str(json_data.get("wind").get("deg")))
        weather_info.append(str(json_data.get("coord")))
        weather_info.append(str(json_data.get("name")))

        return weather_info

''' test
def main():
    w = WeatherStation()
    print(w.get_weather())

if __name__ == "__main__":
    main()
'''