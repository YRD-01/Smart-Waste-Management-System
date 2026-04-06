# Smart Waste Management System

A hybrid IoT and Deep Learning solution designed to optimize waste collection and improve recycling accuracy. This project integrates real-time bin monitoring with automated image-based waste classification.

---

## Overview

Traditional waste management systems often suffer from inefficient collection scheduling and poor waste segregation. This project addresses these challenges through a dual-approach system:

* **IoT Monitoring:** Real-time fill-level detection using an Arduino-based sensor system.
* **AI-Based Sorting:** A custom Convolutional Neural Network (CNN) model for classifying waste into categories such as plastic, glass, paper, metal, and others.

---

## Key Features

* **Predictive Analytics:** A Random Forest model predicts whether a bin requires emptying with an accuracy of 89%.
* **AI-Based Vision System:** A custom CNN model achieves 70% accuracy in classifying waste types.
* **Real-Time Monitoring:** Ultrasonic sensing with a 5-second telemetry loop for continuous data updates.
* **Integrated Hardware System:** Combines ultrasonic and infrared sensors for fill-level measurement and object detection.

---

## Hardware Setup

* **Microcontroller:** Arduino Board
* **Distance Measurement:** Ultrasonic Sensor

  * Trigger Pin: 9
  * Echo Pin: 10
* **Object Detection:** Infrared (IR) Sensor

  * Output Pin: 7

---

## Fill Level Calculation

To ensure stable readings, the system averages multiple sensor measurements. The fill level is calculated as:

Fill (%) = ((Bin Height - Distance) / Bin Height) × 100

---

## Performance Metrics

### Bin Status Prediction (Random Forest)

| Metric   | Value |
| -------- | ----- |
| Accuracy | 89%   |
| ROC-AUC  | 0.96  |

### Image Classification (Custom CNN)

| Class     | F1-Score |
| --------- | -------- |
| Cardboard | 0.81     |
| Paper     | 0.75     |
| Plastic   | 0.72     |
| Glass     | 0.67     |
| Metal     | 0.61     |
| Trash     | 0.44     |

---

## System Workflow

1. **Detection:** The IR sensor detects the presence of a user or object near the bin.
2. **Image Capture:** A camera captures an image of the waste item.
3. **Classification:** The CNN model classifies the waste type.
4. **Monitoring:** The ultrasonic sensor measures the bin fill level.
5. **Decision Making:** If the fill level exceeds 80%, the system flags the bin for collection using the Random Forest model.

---

## References

1. Yang, M., & Thung, G. (2016). *Classification of Trash for Recyclability Status*. Stanford University.
2. Anagnostopoulos, T., et al. (2017). *Challenges and Opportunities of Waste Management in IoT-Enabled Smart Cities*.
3. Breiman, L. (2001). *Random Forests*. Machine Learning Journal.

---

## Contributing

Contributions are welcome. Suggestions for improving model accuracy, hardware efficiency, or system integration can be submitted via pull requests.

---

## License

This project is licensed under the MIT License. Refer to the LICENSE file for details.
