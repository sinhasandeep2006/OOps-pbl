[<img src="LLM" align="right" width="25%" padding-right="350">]()

# `OOPS-PBL.GIT`

<p align="left">
		<em>Built with the tools and technologies:</em>
</p>
<p>
<em>C++ </em>  <em>Class</em> <em>Graph </em>
	</p>

<br>

##### 🔗 Table of Contents

- [📍 Overview](#-overview)
- [👾 Features](#-features)
- [📂 Repository Structure](#-repository-structure)
- [🧩 Modules](#-modules)
- [🚀 Getting Started](#-getting-started)
    - [🔖 Prerequisites](#-prerequisites)
    - [📦 Installation](#-installation)
    - [🤖 Usage](#-usage)
    - [🧪 Tests](#-tests)
- [📌 Project Roadmap](#-project-roadmap)
- [🤝 Contributing](#-contributing)
- [🎗 License](#-license)
- [🙌 Acknowledgments](#-acknowledgments)

---

## 📍 Overview

<code>❯ The ATM System is a console-based C++ application that simulates basic ATM functionality for both users and administrators. It allows users to log in to their accounts, perform banking operations like balance inquiries, deposits, withdrawals, and PIN changes. The system also includes an admin panel where administrators can add new users to the system. User data is saved to and loaded from a file to maintain account persistence between program runs</code>

---

## 👾 Features

### User Management
- Admins can add new users with an account number, PIN, and an initial balance.
- User data, including account number, PIN, and balance, is stored persistently in a text file (`users.txt`).

### Admin Panel
- Admins can log in using pre-defined keys (`sandeep`, `admin01`, `404`).
- Once logged in, admins can add new users to the system.

### User Panel
- **Balance Inquiry:** Users can check their current balance.
- **Withdrawals:** Users can withdraw money, with error handling for insufficient funds.
- **Deposits:** Users can deposit money into their accounts.
- **PIN Change:** Users can change their account PIN.

### Data Persistence
- User details (account number, PIN, and balance) are saved to and loaded from a file (`users.txt`), ensuring data is retained even after the program is closed.

### Security Features
- Admin access is protected by an admin key system.
- Users need to provide correct account numbers and PINs to log in.

### Console-Based Navigation
- Simple menu-based navigation for both users and administrators.
- Separate menus for user operations and administrative tasks.

### Error Handling
- The system checks for sufficient balance during withdrawals.
- Users are prevented from logging in with incorrect credentials or reusing existing account numbers.


---

## 📂 Repository Structure

```sh
└── OOps-pbl.git/
    ├── ATM.cpp
    ├── README.md
    └── output
        ├── ATM.exe
        └── users.txt
```

---

## 🧩 Modules

<details closed><summary>ATM.cpp</summary>

| File        | Summary                                                                 |
| ----------- | ----------------------------------------------------------------------- |
| [ATM.cpp](https://github.com/sinhasandeep2006/OOps-pbl.git/blob/main/ATM.cpp) | Contains the main code for the ATM system, including user and admin functionalities. The program handles user operations such as login, balance inquiry, deposits, withdrawals, and PIN changes. It also contains the admin panel for adding new users and persists user data in a text file. |

</details>

<details closed><summary>output</summary>

| File         | Summary                                                                 |
| ------------ | ----------------------------------------------------------------------- |
| [users.txt](https://github.com/sinhasandeep2006/OOps-pbl.git/blob/main/output/users.txt) | Stores the account details (account number, PIN, and balance) of all users. This file is updated every time the program is run to maintain data persistence between sessions. |

</details>


---

## 🚀 Getting Started

### 🔖 Prerequisites

**CPP**: `version x.y.z`

### 📦 Installation

Build the project from source:

1. Clone the OOps-pbl.git repository:
```sh
❯ git clone https://github.com/sinhasandeep2006/OOps-pbl.git
```

2. Navigate to the project directory:
```sh
❯ cd OOps-pbl.git
```

3. Install the required dependencies:
```sh
❯ g++ -o myapp main.cpp
```

### 🤖 Usage

To run the project, execute the following command:

```sh
❯ ./myapp
```

### 🧪 Tests

Execute the test suite using the following command:

```sh
❯ googletest
```

---

## 📌 Project Roadmap

- [X] **`Task 1`**: <strike>Implement feature one.</strike>
- [X] **`Task 2`**:<strike> Implement feature two.</strike>
- [X] **`Task 3`**: <strike>Implement feature three.</strike>


---

## 🙌 Acknowledgments

- Thanks to Our sir (Aman sir) who guided me through learning C++ and object-oriented programming.
- Special thanks to the creators of the C++ Standard Library and resources like [cplusplus.com](https://www.cplusplus.com/) for providing helpful documentation.
- A shoutout to the open-source community for sharing valuable examples and tutorials that inspired some features in this project.

---

## 🕎 Members
```sh
        Group 7
        - Surbhi Ambarbar 35618002723
        - Sandeep Sinha   35618002723
        - Arsh            35718002723
        - Tanvi Gupta     35818002723
        - Parth Arora     35918002723
```