# Smart-Waste-Management-System
A hybrid IoT and Deep Learning solution designed to optimize waste collection and improve recycling accuracy. This project combines real-time bin monitoring with automated image-based classification.

🌟 Overview

Traditional waste management often suffers from inefficient collection routes and poor sorting. Our system addresses this with a two-pronged approach:

IoT Monitoring: Real-time fill-level detection using Arduino.

AI Sorting: A custom CNN model that identifies waste categories (Plastic, Glass, Paper, etc.).

🚀 Key Features

Predictive Analytics: Uses a Random Forest model to predict if a bin needs emptying with 89% accuracy.

Custom AI Vision: A custom-built CNN reaching 70% accuracy for waste type identification.

Real-Time Alerts: Automated distance sensing with a 5-second telemetry loop.

Smart Hardware: Integrated Ultrasonic and IR sensors for object detection and capacity tracking.

🛠️ Hardware Setup

Microcontroller: Arduino Board

Distance Sensing: Ultrasonic Sensor (Trig: Pin 9, Echo: Pin 10)

Object Detection: Infrared (IR) Sensor (Pin 7)

Fill Level Logic

The system averages 5 readings for stability. The capacity is calculated as:
Fill % = ((Bin Height - Distance) / Bin Height) * 100

📊 Performance Metrics

Bin Status Prediction (Random Forest)

Metric

Value

Accuracy

89%

ROC-AUC

0.96

Image Classification (Custom CNN)

Class

F1-Score

Cardboard

0.81

Paper

0.75

Plastic

0.72

Glass

0.67

Metal

0.61

Trash

0.44

💻 How It Works

Detection: IR sensor identifies a user/object approaching the bin.

Vision: A camera captures an image of the waste item.

Classification: The Custom CNN classifies the material for sorting guidance.

Monitoring: Ultrasonic sensors update the fill level.

Logistics: If the fill level > 80%, the system flags the bin for collection using the Random Forest model.

📚 References

TrashNet: Yang, M., & Thung, G. (2016). Classification of Trash for Recyclability Status.

IoT Research: Anagnostopoulos, T., et al. (2017). Challenges and Opportunities of Waste Management in IoT-Enabled Smart Cities.

RF Methodology: Breiman, L. (2001). Random Forests.

🤝 Contributing

Contributions are welcome! If you have suggestions for improving the AI accuracy or hardware efficiency, please fork the repo and submit a pull request.

📄 License

This project is licensed under the MIT License - see the LICENSE file for details.
