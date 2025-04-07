# Bank Account Management System

This project is a simple **Bank Account Management System** implemented in C++. It provides essential functionality for managing user accounts, including creating accounts, logging in, checking balances, depositing and withdrawing money, transferring funds, and deleting accounts.

## Features

1. **Create Account**: 
   - Allows users to create a new account by providing a unique account number, password, and initial balance.

2. **Login**:
   - Users can log in with their account number and password to access their account details.

3. **Check Balance**:
   - Displays the current balance of the logged-in user.

4. **Deposit Money**:
   - Users can deposit money into their account.

5. **Withdraw Money**:
   - Users can withdraw money from their account, ensuring sufficient balance.

6. **Transfer Money**:
   - Facilitates fund transfer between two accounts.

7. **Delete Account**:
   - Users can delete their account by providing valid credentials.

## File Structure

The application uses a text file named `Account.txt` to store account information. Each record in the file contains:
- Account Number
- Password
- User Name
- Balance

## How It Works

1. The application stores data in the following format:
   ```
   AccountNo : Password : UserName : Balance
   ```

2. All operations, such as account creation, login, and fund transfer, interact with this file to ensure data persistence.

## Prerequisites

- A C++ compiler (e.g., GCC, MinGW, or Visual Studio).

## Setup Instructions

1. Clone or download this repository to your local machine.
2. Open the source code in your preferred C++ IDE or text editor.
3. Compile the program using your C++ compiler.
4. Run the program to start managing bank accounts.

## How to Use

1. **Launch the Program**: 
   Run the compiled executable to start the system.

2. **Select an Option**: 
   Use the menu to choose actions like creating an account, logging in, or deleting an account.

3. **Follow the Prompts**: 
   Enter the required details as prompted.

4. **Logout**: 
   After completing your transactions, choose to log out.

## Example File Content

The `Account.txt` file after multiple operations might look like:
```
1001 : pass123 : Alice : 5000
1002 : pass456 : Bob : 3000
1003 : pass789 : Charlie : 2000
```
