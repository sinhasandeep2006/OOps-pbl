[<img src="LLM" align="right" width="25%" padding-right="350">]()

# `OOPS-PBL.GIT`

#### <code>❯ REPLACE-ME</code>

<p align="left">
	<img src="https://img.shields.io/github/license/sinhasandeep2006/OOps-pbl.git?style=for-the-badge&logo=opensourceinitiative&logoColor=white&color=0080ff" alt="license">
	<img src="https://img.shields.io/github/last-commit/sinhasandeep2006/OOps-pbl.git?style=for-the-badge&logo=git&logoColor=white&color=0080ff" alt="last-commit">
	<img src="https://img.shields.io/github/languages/top/sinhasandeep2006/OOps-pbl.git?style=for-the-badge&color=0080ff" alt="repo-top-language">
	<img src="https://img.shields.io/github/languages/count/sinhasandeep2006/OOps-pbl.git?style=for-the-badge&color=0080ff" alt="repo-language-count">
</p>
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

<details closed><summary>.</summary>

| File | Summary |
| --- | --- |
| [ATM.cpp](https://github.com/sinhasandeep2006/OOps-pbl.git/blob/main/ATM.cpp) | <code>❯ REPLACE-ME</code> |

</details>

<details closed><summary>output</summary>

| File | Summary |
| --- | --- |
| [users.txt](https://github.com/sinhasandeep2006/OOps-pbl.git/blob/main/output/users.txt) | <code>❯ REPLACE-ME</code> |

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

## 🤝 Contributing

Contributions are welcome! Here are several ways you can contribute:

- **[Report Issues](https://github.com/sinhasandeep2006/OOps-pbl.git/issues)**: Submit bugs found or log feature requests for the `OOps-pbl.git` project.
- **[Submit Pull Requests](https://github.com/sinhasandeep2006/OOps-pbl.git/blob/main/CONTRIBUTING.md)**: Review open PRs, and submit your own PRs.
- **[Join the Discussions](https://github.com/sinhasandeep2006/OOps-pbl.git/discussions)**: Share your insights, provide feedback, or ask questions.

<details closed>

<br>
<p align="left">
   <a href="https://github.com{/sinhasandeep2006/OOps-pbl.git/}graphs/contributors">
      <img src="https://contrib.rocks/image?repo=sinhasandeep2006/OOps-pbl.git">
   </a>
</p>
</details>

---

## 🙌 Acknowledgments

- List any resources, contributors, inspiration, etc. here.

---