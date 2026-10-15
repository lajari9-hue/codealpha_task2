# codealpha_task2
 C++ Login &amp; Registration System
 # 🔐 C++ Login & Registration System

A simple **Login and Registration System** developed using C++. This project demonstrates file handling, functions, input validation, duplicate username checking, and basic user authentication.

## 🚀 Features

- User registration
- Username validation
- Password validation
- Duplicate username detection
- File-based user storage
- Login authentication
- Invalid input handling
- Menu-driven interface
- Success and error messages

## 🛠️ Technologies Used

- **C++**
- File Handling
- Functions
- Loops
- Conditional Statements
- String Handling

## 📁 Project Structure
cpp-login-registration-system/
│
├── src/
│   └── login_registration.cpp
│
├── data/
│   └── users.txt
│
├── .gitignore
├── README.md
└── LICENSE

## ⚙️ How to Run

### 1. Clone the repository


git clone https://github.com/YOUR-USERNAME/cpp-login-registration-system.git
```

open the project

Open the project folder in **VS Code** or another C++ IDE.

3. Compile the program

Open the **Terminal** and run:

```bash
g++ src/login_registration.cpp -o login
```

4. Run the program

On Windows:

```bash
.\login.exe
```

On Linux/macOS:

```bash
./login
```

> **Note:** Run the program from the project root folder so that the `data/users.txt` path works correctly.

## 💻 Program Menu

```text
====================================
       LOGIN & REGISTRATION SYSTEM
====================================
1. Register
2. Login
3. Exit
====================================
Enter your choice:
```

## 📝 Registration

The registration system:

1. Takes a username.
2. Checks username length.
3. Checks whether the username already exists.
4. Takes a password.
5. Validates the password length.
6. Stores the credentials in the user data file.

Example:

```text
========== REGISTRATION ==========
Enter username: student01
Enter password: abc12345
Registration successful!
```

## 🔑 Login

The login system reads the stored credentials and compares them with the entered username and password.

Example:

```text
============== LOGIN ==============
Enter username: student01
Enter password: abc12345

Login successful!
Welcome, student01!
```

## ❌ Invalid Login

```text
============== LOGIN ==============
Enter username: student01
Enter password: wrong123

Login failed!
Invalid username or password.
```

## 🔒 Security Note

This project is created for educational purposes.

The current version demonstrates file-based authentication and does not use password hashing. Real-world applications should never store passwords in plain text. A production system should use secure password hashing and a proper database.

## 🔮 Future Improvements

- Password hashing
- Database integration
- Forgot password functionality
- Password reset
- User profile
- Admin login
- Login attempt limits
- Graphical User Interface (GUI)
- Better authentication and security

## 🎯 Learning Objectives

This project helped demonstrate:

- C++ functions
- File input/output
- String manipulation
- Loops
- Conditional statements
- Input validation
- Basic authentication logic
- Project organization

## 👨‍💻 Author

LAJARI CHAUDHARI

BCA Student | C++ Developer | Aspiring Software Developer

---

⭐ If you find this project useful, consider giving the repository a star!
