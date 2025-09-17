# 🏏 Player Management System in C

A mini project written in C to manage cricket players efficiently.

## 📌 Problem Statement
- Manage cricket player details: Jersey No, Name, Runs, Wickets, Matches.
- Operations supported:
  - Add, Remove, Search, Update
  - Show All Players
  - Sort Players by Runs/Wickets
  - Display Top 3 Players (Runs/Wickets)

## ⚙️ Features
- Dynamic memory allocation (`malloc`, `calloc`, `realloc`, `free`)
- Uses `struct Player` to store details
- Supports partial name search with `strstr`
- Sorting using Bubble Sort
- Beginner-friendly C implementation

## 📂 Files
- `miniproject.c` → Main source code
- `problem statement.txt` → Requirement document
- `quick summary.txt` → Overview & presentation notes

## 🚀 How to Run
```bash
gcc miniproject.c -o player_mgmt
./player_mgmt
