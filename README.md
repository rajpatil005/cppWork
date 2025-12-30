# C++ DSA Practice

This repository contains my **structured practice of Data Structures and Algorithms (DSA) using C++**.  
All data structures are implemented **from scratch** to strengthen core concepts and prepare for coding interviews.

---

## 📌 Purpose
- Deep dive and revision of DSA concepts
- Practice clean and efficient C++ implementations
- Build strong problem-solving foundations
- Maintain a single reference repo for DSA in C++

---

## 🛠 Language
- **C++** (C++14 / C++17)
- STL is avoided where core implementations are written manually

---

## 📂 Repository Structure

cpp-dsa-practice/
│
├── README.md
│
├── basics/
│   ├── input_output.cpp
│   ├── pointers.cpp
│   └── time_complexity.md
│
├── arrays/
│   ├── array_basics.cpp
│   ├── prefix_sum.cpp
│   └── problems.md
│
├── linked_list/
│   ├── singly/
│   │   ├── ll_basic.cpp
│   │   └── ll_operations.cpp
│   ├── doubly/
│   └── circular/
│
├── stack/
│   ├── stack_using_array.cpp
│   ├── stack_using_linked_list.cpp   ← your code here
│   └── README.md
│
├── queue/
│   ├── queue_using_array.cpp
│   ├── circular_queue.cpp
│   ├── deque.cpp
│   └── README.md
│
├── recursion/
│   ├── basics.cpp
│   └── problems.md
│
├── sorting/
│   ├── bubble_sort.cpp
│   ├── merge_sort.cpp
│   └── quick_sort.cpp
│
├── searching/
│   ├── linear_search.cpp
│   └── binary_search.cpp
│
├── trees/
│   ├── binary_tree.cpp
│   ├── bst.cpp
│   └── traversal.cpp
│
├── graphs/
│   ├── bfs.cpp
│   ├── dfs.cpp
│   └── shortest_path.cpp
│
├── dp/
│   ├── fibonacci.cpp
│   ├── knapsack.cpp
│   └── README.md
│
└── notes/
    ├── patterns.md
    ├── complexity.md
    └── interview_tips.md

Each folder contains:
- Concept implementations
- Well-named `.cpp` files
- Edge case handling
- Time & space complexity comments

---

## 📚 Topics Covered
- Arrays
- Linked List (Singly, Doubly, Circular)
- Stack (Array & Linked List)
- Queue (Simple, Circular, Deque)
- Recursion
- Sorting Algorithms
- Searching Algorithms
- Trees & Binary Search Trees
- Graphs (BFS, DFS)
- Dynamic Programming

---

## 🧱 Example: Stack
- Stack using Linked List
- Stack using Array
- Operations:
  - push
  - pop
  - peek
  - isEmpty
- Time Complexity:
  - Push / Pop / Peek → **O(1)**

---

## ✨ Coding Principles
- One concept per file
- Meaningful variable and file names
- Clean, readable C++ code
- Proper memory management
- Interview-oriented implementations

---

## 🚀 How to Run
Compile and run any file individually:

```bash
g++ filename.cpp
./a.out
