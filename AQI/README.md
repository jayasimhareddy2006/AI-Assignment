# AQI Monitoring using a Simple Reflex Agent

By  
SE24UCS004 - A. Jayasimha Reddy  
SE24UCSE035 - C. Manish Chandra Reddy  
SE24UCSE034 - M. Chanakya Mohan Reddy  
SE24UCSE062 - M. Likith  
## Introduction

Air pollution is a serious environmental problem that affects human health and the ecosystem. The Air Quality Index (AQI) is a numerical scale used to indicate the level of air pollution and its potential impact on health.

This project implements an **AI-based Simple Reflex Agent** that monitors air quality using environmental sensor data. The agent reads pollutant values from a dataset and determines the AQI category using predefined condition–action rules.

The system demonstrates how AI agents can be used to monitor environmental conditions and provide health advisories.



## Example Environment

The system uses **Hyderabad city locations** as the example environment. Sensor readings from different areas are provided in a dataset.

Pollutants considered in this project:

- PM2.5
- PM10
- NO2

These pollutants are major contributors to air pollution and AQI calculations.



## Agent Design

The AQI monitoring system works using a **Simple Reflex Agent** model.

Flow of the agent:

Start Agent  
↓  
Read sensor data from file  
↓  
Apply reflex rule  
(AQI = max(PM2.5, PM10, NO2))  
↓  
Determine AQI category  
↓  
Display AQI value and health advisory  
↓  
End

The agent reacts to the **current environmental state only**, without storing past information.



## Components of the Agent

### Sensors
Environmental sensors measure pollution levels such as:

- PM2.5
- PM10
- NO2

These readings are stored in a dataset file (`sensor_data.csv`).

### Actuators
The agent performs the following actions:

- Displays pollutant values
- Calculates AQI
- Determines AQI category
- Displays health advisory



## AQI Classification

AQI values are categorized as follows:

| AQI Range | Category |
|----------|----------|
| 0 – 50 | Good |
| 51 – 100 | Moderate |
| 101 – 150 | Unhealthy for Sensitive Groups |
| 151 – 200 | Unhealthy |
| 201 – 300 | Very Unhealthy |
| Above 300 | Hazardous |



## Architecture

Environmental Sensors  
↓  
Input Data File (sensor_data.csv)  
↓  
AQI Reflex Agent (Python Program)  
↓  
AQI Calculation  
↓  
AQI Category Determination  
↓  
Health Advisory Output



