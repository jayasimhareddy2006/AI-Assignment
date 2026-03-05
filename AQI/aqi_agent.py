import csv

def get_aqi_category(aqi):

    if aqi <= 50:
        return "Good"
    elif aqi <= 100:
        return "Moderate"
    elif aqi <= 150:
        return "Unhealthy for Sensitive Groups"
    elif aqi <= 200:
        return "Unhealthy"
    elif aqi <= 300:
        return "Very Unhealthy"
    else:
        return "Hazardous"


with open("sensor_data.csv") as file:

    reader = csv.DictReader(file)

    for row in reader:

        location = row["location"]

        pm25 = float(row["PM2.5"])
        pm10 = float(row["PM10"])
        no2 = float(row["NO2"])

        aqi = max(pm25, pm10, no2)

        category = get_aqi_category(aqi)

        print("----------------------------")
        print("Location:", location)
        print("AQI Value:", aqi)
        print("AQI Category:", category)
