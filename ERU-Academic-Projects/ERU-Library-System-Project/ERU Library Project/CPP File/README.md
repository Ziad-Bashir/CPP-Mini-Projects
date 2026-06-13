# 📚 ERU Library Management System

A C++ console application designed to simulate a basic library management system. This project is a practical implementation of core programming concepts, emphasizing structured logic, memory state tracking, and user input handling.

This repository serves as a deliberate step in building an ironclad software engineering foundation, focusing on mastering core logic and syntax before moving into complex frameworks.

## ⚙️ Technical Highlights & Logic

This system avoids external databases to strictly practice raw C++ data manipulation. Key concepts implemented include:

* **Parallel Arrays for State Management:** Utilized two parallel arrays (`string bookTitles[100]` and `bool isAvailable[100]`) to synchronize the book inventory with its real-time borrowing status.
* **Control Flow & Menu Routing:** Implemented a continuous execution cycle using a `do-while` loop, managed by a `switch-case` structure for efficient menu navigation.
* **Linear Search Algorithm:** Engineered a precise search mechanism to iterate through the array, verify book existence, and toggle the boolean availability state seamlessly.
* **Advanced Input Handling:** Handled potential buffer issues gracefully using `cin.ignore()` and `getline()` to ensure multi-word book titles are captured without memory leaks or input skipping.

## 🚀 How to Use

1. Run the application in any standard C++ compiler (e.g., GCC, MSVC).
2. Use the interactive numerical menu to:
   * **[1] Add Book:** Input a new title into the system (automatically marked as available).
   * **[2] Display Books:** View the complete inventory and check the real-time status of each book `(Available)` or `(Borrowed)`.
   * **[3] Borrow Book:** Search for a specific title to borrow. The system validates the input and updates the availability state dynamically.
   * **[4] Exit:** Safely terminate the application.

---
*Developed by Ziad Bashir | Egyptian Russian University (ERU)*
