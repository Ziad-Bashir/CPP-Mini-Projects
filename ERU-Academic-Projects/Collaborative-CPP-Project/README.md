![Status](https://img.shields.io/badge/status-In_Progress-orange)
![Language](https://img.shields.io/badge/language-C%2B%2B-blue)
![License](https://img.shields.io/badge/license-MIT-green)



# 🍔 Restaurant Billing Engine (Collaborative Project)

A highly structured C++ console application developed as a joint software engineering effort. This project simulates a dynamic restaurant ordering and billing system, focusing heavily on modular programming and formatted console output.

> 🏆 **Technical Defense & Evaluation:** Successfully defended the system's architecture, logic, and C++ implementation in a rigorous academic review, achieving a perfect **10/10** evaluation for technical comprehension and code clarity.

## 🤝 Collaborative Effort
This project was developed in collaboration with a team of peers. My primary focus during the development and technical defense was ensuring the structural integrity of the code, managing the logic flow between functions, and validating the parallel data structures used for the billing process.

## ⚙️ Technical Highlights & Logic

The system is built with a strong emphasis on clean code and maintainability:

* **Modular Architecture:** The logic is strictly decoupled into single-responsibility functions (`showMenu`, `calculateItemTotal`, `printBill`) rather than writing monolithic code inside the `main()` function.
* **Precision Output Formatting:** Extensively utilized the `<iomanip>` library (`setw`, `left`) to engineer a clean, tabular, and highly readable UI for the final receipt directly within the console.
* **Parallel Array Synchronization:** Managed product names, static prices, and dynamic user quantities across synchronized parallel arrays to calculate the final grand total accurately.
* **Robust Input Handling:** Implemented an infinite `while(true)` control loop with built-in validation to handle invalid user choices (`continue`) and safe exit points (`break`).

## 🚀 How to Use

1. Run the application in any standard C++ compiler.
2. The system will display the interactive restaurant menu.
3. Enter the number corresponding to your desired item, followed by the quantity.
4. The system updates your cart in the background. 
5. Select the **Finish Order** option to break the loop and generate a precisely formatted final bill detailing the items, quantities, sub-totals, and the Grand Total.

## 🚧 Work in Progress: Scaling the System

As indicated by the `In Progress` badge, I am actively expanding this project far beyond its original academic scope. I am utilizing this codebase as a practical sandbox to apply the new, advanced C++ concepts and problem-solving techniques I am currently learning. The ultimate goal is to scale this foundational engine into a much larger, more dynamic, and robust software application.

---
*Built with logic and teamwork. Part of my journey in establishing a solid software engineering foundation.*
