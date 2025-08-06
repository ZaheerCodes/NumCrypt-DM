# 🔐 NumCrypt

**NumCrypt** is a console-based mini project that lets you explore number systems and basic encryption using ASCII. Built as part of a first-semester university assignment, this tool converts between **binary**, **decimal**, **octal**, and **hexadecimal** systems and lets you encrypt and decrypt text messages by converting characters to ASCII and encoding them into your chosen number base.


## 🚀 Features

- ✅ **Integer-based number system conversions** between binary, decimal, octal, and hexadecimal.
- 💪 Supports up to **63-bit binary numbers** in base conversions (Max: `7FFF FFFF FFFF FFFF` in Hex).
- 🔐 **ASCII-based encryption** using base conversions (Binary, Octal, Decimal, Hex).
- 🔓 **Decryption** of encoded messages by identifying characters from encoded groups.
- ✉️ **No character limit for encryption/decryption text.
- 🚫 **Strict input validation** prevents invalid characters or digits in base-specific input.
- 🔄 **Decimal-centered conversion logic** to support any-base to any-base conversion without adding any new function/logic.
- 🧠 **No built-in functions** by adding custom built versions of `stringLength`, `reverseString`, `stringToInt`, and `intToString`.


## 🧩 Project Structure

The project has **three main sections**:

### 1. Encryption
- Input any text message.
- Choose a number base (Binary, Octal, Decimal, or Hexadecimal).
- Each character is:
  - Converted to its ASCII value.
  - Transformed from decimal to the selected base.
- Output: space-separated encrypted values for each character.

### 2. Decryption
- Paste an encrypted string (space-separated or continuous).
- Specify the base used during encryption.
- The system:
  - Segments the input into valid parts.
  - Converts each part to decimal and then to ASCII.
- Output: the original message is displayed.

### 3. Base Conversion
- Select a number system and enter a valid value.
- The system converts it to the other three number systems.
- Supports up to 63-bit binary numbers.


## 🔧 Technical Design

- **Central Conversion Logic:**
  - `fromDecimal(base, value)` converts a decimal integer to the selected base.
  - `toDecimal(base, value)` converts a number in any base to its decimal form.
  - This avoids redundant functions for base-to-base conversion by always passing through decimal.
  
- **No Built-in Functions Challenge:**
    
    Developed the following custom functions instead.
  - `stringLength()` – manually calculates the length of a string.
  - `reverseString()` – reverses a string without using built-in methods.
  - `stringToInt()` – converts numeric string to integer.
  - `intToString()` – converts integer to string.


## 📦 Limitations & Notes

- Only **integer values** are supported for base conversions.
- No support for negative numbers or floating-point values.
- Focused on logic building without reliance on library functions.
- No GUI — purely console-driven interaction.
- Ideal for **learning** and **demonstrating** how number systems and ASCII encoding work.


## 🧠 Motivation

This was my **first mini-project** created during the **first month** of my **first semester** at university. The goal was to practice core programming concepts like:
- Number system logic
- ASCII manipulation
- String handling
- Input validation
- Avoiding built-in shortcuts

Despite the early-stage experience, the logic is robust and cleanly structured.

---
