import requests

def get_weather(city_name, api_key):
    base_url = "https://api.openweathermap.org/data/2.5/weather"
    params = {
        'q': city_name,
        'appid': api_key,
        'units': 'metric'  # Use 'imperial' for Fahrenheit
    }

    response = requests.get(base_url, params=params)
    
    if response.status_code == 200:
        data = response.json()
        main = data['main']
        weather = data['weather'][0]
        wind = data['wind']

        print(f"\nWeather in {city_name.title()}:")
        print(f"Temperature: {main['temp']}°C")
        print(f"Condition: {weather['description'].title()}")
        print(f"Humidity: {main['humidity']}%")
        print(f"Wind Speed: {wind['speed']} m/s")
    else:
        print("City not found. Please check the name or try again.")

# ----------------------
if __name__ == "__main__":
    api_key = input("Enter your OpenWeatherMap API key: ")
    city_name = input("Enter city name: ")
    get_weather(city_name, api_key)
