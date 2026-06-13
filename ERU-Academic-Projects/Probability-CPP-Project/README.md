# 📊 Probability & Statistics Engine

A purely logic-driven C++ console application designed to automate complex statistical computations. This engine takes raw numerical data and programmatically transforms it into structured frequency distributions and plotting coordinates.

This project sits at the intersection of mathematical theory and software engineering, demonstrating how core C++ structures can be utilized to solve real-world computational data problems without relying on high-level Python libraries.

## ⚙️ Technical Highlights & Logic

* **Algorithmic Data Binning:** Implemented nested iteration (nested `for` loops) to dynamically sort and count raw data points into continuous class intervals based on strict threshold conditions.
* **Mathematical Computing:** Utilized the `<cmath>` library (specifically the `ceil()` function) to accurately calculate the dynamic class width `(w)` based on the maximum, minimum, and overall range of the dataset.
* **Parallel Array Data Structures:** Managed lower bounds, upper bounds, mid-points, and frequencies using synchronized parallel arrays to maintain data integrity across calculations.
* **Frequency Polygon Generation:** Engineered a custom logic block to calculate the exact `(X, Y)` graphical coordinates for a frequency polygon, algorithmically generating the anchor points `(Y=0)` on the X-axis for mathematically accurate plotting.

## 🚀 How to Use

1. Compile and run the application.
2. The system will prompt you to enter the raw numerical dataset.
3. The engine automatically processes the data to find the Minimum, Maximum, and Range.
4. It generates and prints a cleanly formatted tabular **Frequency Distribution** displaying the Class Ranges, Mid-Points, and calculated Frequencies.
5. Finally, the engine outputs the exact **(X, Y) Coordinates** needed to plot a Frequency Polygon graph.

---
*Building a robust programming foundation by bridging mathematical concepts with C++ logic.*
