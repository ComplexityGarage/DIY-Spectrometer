# DIY-Spectrometer
# Authors 
- Bartosz Wojcik i Mikolaj Smoczynski
# Description of the project 
This project presents a low-cost spectrometer builit using an Arduino microcontroller and a compact optical setup. The objective was to measure the visible light spectrum (380-780nm) using accesible components  and demonstrate that a functional spectrometer can be constructed with minimal resources.

The system uses a fragment of a CD as a reflective diffraction granting and a light sensor mounted on a servo motor. The servo rotates the sensor across the first diffraction order, allowing intensity measurements at diffrent angles. The angular position is then converted into wavelength using a calibration model.


# Science and tech used

The device operates based on the diffraction grating equation:

d · sin(θ) = m · λ

where:

d — grating spacing (for a CD ≈ 1.6 µm),

θ — diffraction angle,

m — diffraction order (m = 1),

λ — wavelength of light.

Since the zero-order reflection angle was not directly measured, a linear calibration approach was applied using the assumptions:

58° ≈ 380 nm (violet)

114° ≈ 780 nm (red)

This produced a linear wavelength–angle relationship:

λ(θ) = 380 + (θ − 58) · 7.143

Hardware

Arduino microcontroller

Grove Light Sensor (LM358-based analog sensor)

Servo motor

CD fragment as diffraction grating

Narrow slit (~0.3 mm width)

Software

Arduino IDE

Serial data acquisition

Signal averaging (100 samples per angle)

# State of the Art 


Professional spectrometers use precision diffraction gratings with known groove densities, calibrated optical paths, collimators, and highly sensitive photodiodes or CCD arrays. They achieve wavelength accuracies on the order of fractions of a nanometer.

In contrast, this project represents a low‑cost educational implementation. A CD is not an ideal laboratory grating, and the system lacks precise angular referencing and optical collimation. The expected wavelength uncertainty is approximately ±10–20 nm.

Despite these limitations, the device successfully reproduces the structure of the visible spectrum and demonstrates clear intensity variation across wavelengths, with a maximum observed in the green–yellow region (~550–600 nm).

![](/workspaces/DIY-Spectrometer/IMG_0508.jpeg)
![](/workspaces/DIY-Spectrometer/IMG_0510.jpeg)
![](/workspaces/DIY-Spectrometer/IMG_0511.jpeg)
![](/workspaces/DIY-Spectrometer/IMG_0512.jpeg)

This makes the project suitable for educational demonstrations, introductory optics experiments, and proof‑of‑concept prototyping.


# What next?
Future development will focus on four key areas:

Optics: Replacing the CD with a DVD or laboratory diffraction grating, while adding a collimator and a precision slit to increase resolution and eliminate linear approximation errors.

Electronics: Transitioning from an analog sensor to a high-sensitivity photodiode or CCD/CMOS array for simultaneous spectrum acquisition.

Software: Implementing automated data logging (CSV), real-time plotting, and advanced analysis tools like peak detection and noise filtering.

Applications: Refining the device into a low-cost, open-source spectrometer for physics labs and educational outreach.


# Sources 
Fundamentals of diffraction grating theory (standard optics textbooks)

Hecht, E. Optics

Arduino official documentation

Grove Light Sensor (LM358) documentation

General specifications of CD groove spacing (~1.6 μm)
