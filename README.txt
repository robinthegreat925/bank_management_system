# Bank Management System in C

A simple command-line **Bank Management System** written in C.  
Manage accounts, deposit and withdraw money, create and delete accounts — all from your terminal.

---

## Features

- Create new bank accounts with unique IDs and names
- View all existing accounts with balances
- Deposit money into an account
- Withdraw money with balance checks to prevent overdrafts
- Delete accounts
- Persistent data storage using a text file (`2new_new_accounts.txt`)

---

## Getting Started

### Prerequisites

- GCC or any C compiler
- A terminal or command prompt

### Compile

```bash
gcc main.c bank.c -o bank_system
