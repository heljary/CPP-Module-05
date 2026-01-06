# C++ Module 05 - ex00: Mommy, when I grow up...

This exercise introduces the core mechanism of **Exception Handling** in C++. It simulates the smallest cog in a vast bureaucratic machine: The **Bureaucrat**.

## 📌 Project Overview

The goal is to create a class `Bureaucrat` that mimics a strict office hierarchy. The key challenge is to manage errors (like invalid grades) using `try`, `catch`, and `throw`, rather than standard `if/else` checks or return values.

## 🏢 The Rules of the Bureaucrat

A Bureaucrat is defined by two main attributes:

1.  **Name (`const std::string`):**
    * A constant name given at creation.
    * Once instantiated, the name **cannot** be changed.
2.  **Grade (`int`):**
    * Represents the rank of the bureaucrat.
    * **Range:** `1` (Highest) to `150` (Lowest).
    * **Logic:**
        * **Grade 1:** The Boss (Maximum power).
        * **Grade 150:** The Intern (Minimum power).

### Promotion & Demotion Logic
The grading system works in reverse of standard numbers:
* **Incrementing (Promotion):** Decreases the numeric value (e.g., `3` → `2`).
* **Decrementing (Demotion):** Increases the numeric value (e.g., `3` → `4`).

---

## ⚠️ Exception Handling

The class must ensure the grade **never** exceeds the limits (1-150). If an invalid grade is detected during construction or modification, an **Exception** must be thrown.

The `Bureaucrat` class implements two nested exception classes inheriting from `std::exception`:

### 1. `Bureaucrat::GradeTooHighException`
* **Thrown when:**
    * Trying to create a Bureaucrat with grade `< 1` (e.g., 0).
    * Trying to **increment** a Bureaucrat who is already at **Grade 1**.

### 2. `Bureaucrat::GradeTooLowException`
* **Thrown when:**
    * Trying to create a Bureaucrat with grade `> 150` (e.g., 200).
    * Trying to **decrement** a Bureaucrat who is already at **Grade 150**.

---

## 💻 Implementation Details

The class adheres to the **Orthodox Canonical Form (OCF)**:
* **Default Constructor:** Creates a default bureaucrat.
* **Parameterized Constructor:** Creates a bureaucrat with a name and grade.
* **Copy Constructor:** Creates a deep copy.
* **Assignment Operator:** Copies grade only (since name is const).
* **Destructor:** Cleans up resources.

**Helper Functions:**
* `getName()`: Returns the name.
* `getGrade()`: Returns the grade.
* `incrementGrade()`: Promotes the bureaucrat.
* `decrementGrade()`: Demotes the bureaucrat.
* **Overload `<<`**: Prints format: `<name>, bureaucrat grade <grade>.`

---

## 🧪 Usage Examples

To test the class, you must wrap operations in `try-catch` blocks.

### 1. Standard Success Case
```cpp
try {
    Bureaucrat bob("Bob", 2);
    std::cout << bob << std::endl; // Output: Bob, bureaucrat grade 2.

    bob.incrementGrade();          // Bob becomes Grade 1
    std::cout << bob << std::endl; // Output: Bob, bureaucrat grade 1.
}
catch (std::exception &e) {
    std::cout << "Error: " << e.what() << std::endl;
}
