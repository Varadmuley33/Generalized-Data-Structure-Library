# 📌 Generalized Data Structure Library

## 📖 Overview
This project is a self-developed **Generalized Data Structure Library** implemented using **C++ and Object-Oriented Programming concepts**.  

The purpose of this project is not to solve a real-world application problem, but to **demonstrate a strong understanding of core data structures by implementing them from scratch**, without using any built-in libraries or STL.

It reflects the ability to design, build, and manage fundamental data structures manually using low-level logic and dynamic memory handling.

---

## 🎯 Objective
The main objective of this project is:

- To implement core data structures without relying on inbuilt libraries  
- To demonstrate deep understanding of **memory management, pointers, and data structure behavior**  
- To showcase problem-solving and coding ability through manual implementation  
- To build a reusable and generalized library using templates  

---

## 🧠 Key Concepts Used

- C++ Templates (Generic Programming)
- Object-Oriented Programming (OOP)
- Dynamic Memory Allocation
- Pointer Manipulation
- Modular Design
- Menu-Driven Interface

---

## 🧩 Implemented Data Structures

The library currently includes the following linked list implementations:

### 1. Singly Linear Linked List
- Forward traversal only  
- Dynamic node insertion and deletion  

### 2. Singly Circular Linked List
- Last node points to first  
- Efficient circular traversal  

### 3. Doubly Linear Linked List
- Bidirectional traversal  
- Uses `prev` and `next` pointers  

### 4. Doubly Circular Linked List
- Combines circular and doubly linked properties  
- Fully connected node structure  

---

## ⚙️ Supported Operations

Each data structure supports:

- Insert (First, Last, At Position)  
- Delete (First, Last, At Position)  
- Display  
- Count  

All operations are implemented manually using pointer logic.

---

## 💡 Design Highlights

- **Generic Implementation**  
  The use of templates allows the same data structure to work with different data types (e.g., int, float, char)

- **From Scratch Implementation**  
  No STL or predefined data structures are used — everything is manually implemented

- **Menu-Driven Interface**  
  Interactive CLI-based navigation for testing all operations

- **Modular Class Design**  
  Separate classes for node structure and list functionality

---

## ▶️ How to Run

1. Compile the code:
   ```bash
   g++ program.cpp -o program
