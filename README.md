# Measurement-and-Biomedical-Instrumentations-Project
A biomedical instrumentation project to design and build an Electromyography (EMG) data acquisition system to capture and analyze electrical signals from the biceps brachii muscle during contraction and relaxation states.

# About The Project
Electromyography (EMG) is a diagnostic technique used to assess the electrical activity produced by skeletal muscles. This project focuses on designing an EMG data acquisition system to capture these neuromuscular signals from the biceps brachii muscle. The system is designed to differentiate between two fundamental muscle states, contraction and relaxation.

The core of the system is a custom-built EMG circuit that acquires, amplifies, and filters the faint bioelectrical signals from the muscle. An Arduino Uno is used for analog-to-digital conversion and to interface with a computer for data visualization and analysis. The goal is to create a functional prototype that can accurately measure and interpret muscle activity, serving as a foundation for applications in diagnostics, medical rehabilitation, and prosthetic control systems.

# Key Features
1. Signal Acquisition: Captures low-amplitude EMG signals (0-10 mVpp) from the biceps brachii using surface electrodes.
2. Multi-Stage Signal Conditioning: Implements a complete analog signal processing pipeline, including:
   a. Differential amplification using an INA106 IC.
   b. Two stages of inverting amplifiers for signal gain.
   c. High-Pass and Low-Pass filters to isolate the relevant EMG frequency band (2–106.5 Hz).
   d. A clamper circuit to shift the signal to a desired DC level.
3. Digital Conversion: Utilizes an Arduino Uno as an Analog-to-Digital Converter (ADC) to digitize the processed EMG signal for analysis.
4. State Differentiation: The system can successfully distinguish between muscle contraction and relaxation based on the amplitude of the measured signal.

# System Architecture
The EMG system is composed of several key stages, from signal capture at the skin's surface to digital data processing.
1. Signal Source: The biceps brachii muscle generates electrical potentials during contraction and relaxation.
2. Transducer: Surface electrodes are placed on the skin over the muscle to detect these electrical signals.
3. EMG Circuit: This is the core of the system and includes:
   a. Acquisition Stage: An INA106 IC provides an initial differential gain of 10.
   b. Amplification & Filtering: The signal is passed through a series of amplifiers and filters to boost its amplitude and remove unwanted noise and DC offset.
4. Analog-to-Digital Conversion: An Arduino Uno reads the final analog signal and converts it into digital values.
5. Data Processing: The digital data is sent to a computer via serial communication for visualization and calculation of the peak-to-peak voltage (Vpp).

# Methodology & Workflow
1. Initialization: The system is powered on, and the Arduino is initialized to begin reading data from its analog input pin.
2. Electrode Placement: Surface electrodes are attached to the subject's biceps brachii muscle.
3. Signal Capture & Conditioning:
   a. As the subject contracts and relaxes their muscle, the electrodes pick up the EMG signals.
   b. The signal is then passed through the complete EMG circuit for amplification and filtering
4. Data Acquisition (ADC): The Arduino continuously reads the conditioned analog signal.
5. Analysis: The collected ADC values are processed to calculate the peak-to-peak voltage (Vpp) for each muscle state using the formula: Vpp = (ADC_max - ADC_min) * (5.0 / 1024.0)

# Results
The system was tested by measuring the EMG signal during both muscle relaxation and full contraction.


<img width="337" height="86" alt="image" src="https://github.com/user-attachments/assets/c32d63c0-9826-4990-9de7-45c8b8b7d48a" />


<img width="906" height="371" alt="image" src="https://github.com/user-attachments/assets/bc9ff17f-4c34-4f67-8ec8-fe12977690bc" />







