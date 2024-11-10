
# Ultrasonic Flow Classification Project

This project aims to develop a classification model for ultrasonic flow data using TensorFlow 2.0, with the objective of deploying the model on an ESP32 microcontroller. The model classifies flow data captured by ultrasonic sensors, which could be useful in applications like fluid flow measurement and monitoring.

## Project Structure

- **Project_Regression_TFLite_Ultrasonic_Flow.ipynb**: Jupyter notebook containing code for data loading, preprocessing, model training, and conversion to TensorFlow Lite format.
- **ultasonic_flowClassifyModel.h5**: Saved Keras model file, used for training and evaluation.
- **ultasonic_flowClassifyModel.tflite**: TensorFlow Lite version of the trained model, optimized for deployment on embedded devices like the ESP32.
- **Proj_Ultrasonic_flow_Classify**: Contains the ESP32 deployment code, including a header file (`ultasonic_flow_model_esp32.h`) and an Arduino sketch file (`Proj_Ultrasonic_flow_Classify.ino`) for running the model on the ESP32.
- **screenshots**: Visual documentation of the model’s training process, accuracy, and output when deployed.

## Notebook Overview

The Jupyter notebook walks through the following steps:

1. **Imports and Setup**: Includes TensorFlow, Pandas, and other libraries for data handling, visualization, and model creation.
2. **Data Loading**: Loads ultrasonic flow data from external files (e.g., `Meter D`). The `read_data` function parses the data for training and testing.
3. **Preprocessing**: The notebook utilizes scaling and other preprocessing techniques to prepare the data for model training.
4. **Model Definition**: Constructs a classification model using Keras with layers like `Dense`, `Dropout`, and `Activation`.
5. **Training and Evaluation**: Trains the model and evaluates its performance.
6. **Model Conversion**: Converts the trained model to TensorFlow Lite format to facilitate deployment on an ESP32.

## Hardware Deployment

The folder `Proj_Ultrasonic_flow_Classify` contains code to load and run the TensorFlow Lite model on an ESP32 microcontroller. The `.ino` file provides the necessary configuration and handling for integrating the model with ultrasonic sensors.

The deployed model has a test accuracy of _91.33%_

## Screenshots

The screenshots in the project provide visual insight into the training process, model accuracy, and deployment outcomes on the ESP32.

## Requirements

- Python 3.7 / 3.8
- TensorFlow 2.0+
- Additional libraries: pandas, numpy, matplotlib, sklearn

## Usage

1. **Train the Model**: Run the notebook to train the ultrasonic flow classification model and convert it to TensorFlow Lite format.
2. **Deploy on ESP32**: Use the code in `Proj_Ultrasonic_flow_Classify` to deploy the `.tflite` model on an ESP32 for real-time flow classification.

---

This project provides a comprehensive approach to ultrasonic flow classification, with a machine learning model trained in Python and deployed on an embedded device.
