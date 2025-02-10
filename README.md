# CPP Module 01 - Memory, References, Pointers

An introduction to memory allocation, references, pointers, and file manipulation in C++.

## 📚 Exercises

### Ex00: BraiiiiiiinnnzzzZ
Introduction to memory allocation and class instantiation.
```
Files:
├── Zombie.cpp
├── Zombie.hpp
├── newZombie.cpp
├── randomChump.cpp
└── main.cpp
```

### Ex01: Moar brainz!
Dynamic allocation of multiple objects.
```
Files:
├── Zombie.cpp
├── Zombie.hpp
├── zombieHorde.cpp
└── main.cpp
```

### Ex02: HI THIS IS BRAIN
Pointers and references demonstration.
```
Files:
└── main.cpp
```

### Ex03: Unnecessary violence
Class interactions and weapon references.
```
Files:
├── HumanA.cpp
├── HumanA.hpp
├── HumanB.cpp
├── HumanB.hpp
├── Weapon.cpp
├── Weapon.hpp
└── main.cpp
```

### Ex04: Sed is for losers
File manipulation and string replacement.
```
Files:
├── Sed.cpp
├── Sed.hpp
└── main.cpp
```

### Ex05: Harl 2.0
Pointer to member functions.
```
Files:
├── Harl.cpp
├── Harl.hpp
└── main.cpp
```

### Ex06: Harl filter
Switch statement and logging levels.
```
Files:
├── Harl.cpp
├── Harl.hpp
└── main.cpp
```

## 🛠️ Compilation

Each exercise includes a Makefile with standard rules:
```bash
make        # Compile
make clean  # Remove objects
make fclean # Remove objects and binary
make re     # Recompile
```

## 📋 Exercise Details

### Ex00: Zombie Class
- Stack vs Heap allocation
- Manual memory management
```cpp
Zombie* newZombie(string name);
void randomChump(string name);
```

### Ex01: Zombie Horde
- Array allocation
- Multiple object management
```cpp
Zombie* zombieHorde(int N, string name);
```

### Ex02: Brain
- Understanding references vs pointers
- Memory addresses and strings

### Ex03: Weapon Class
- Reference members
- Class composition
- Const references

### Ex04: File Replace
- File streams
- String manipulation
- Error handling

### Ex05: Harl
- Member function pointers
- Command pattern
```cpp
void complain(string level);
```

### Ex06: Harl Filter
- Switch statements
- Logging levels
- Program flow control

## ⚠️ Requirements

- Compile with C++ and flags: -Wall -Wextra -Werror
- Must compile with -std=c++98
- No external libraries
- Orthodox Canonical Form when required

## 🎯 Learning Objectives

1. Memory Management
   - Stack vs Heap
   - New and Delete operators
   - Arrays and allocation

2. References and Pointers
   - Reference syntax
   - Pointer manipulation
   - Member pointers

3. File Operations
   - File streams
   - Reading and writing
   - Error handling

4. Class Design
   - Composition
   - Member functions
   - Access specifiers

## 🧪 Testing Guidelines

### Ex00 & Ex01
```bash
# Test memory leaks
valgrind ./zombie
# Test multiple zombies
# Verify proper destruction
```

### Ex03
```bash
# Test both HumanA and HumanB
# Verify weapon changes
# Check reference behavior
```

### Ex04
```bash
# Test with various file sizes
# Test with missing files
# Test with empty strings
```

### Ex05 & Ex06
```bash
# Test all debug levels
# Test invalid levels
# Test filtering system
```

## 📝 Style Guide

- Use meaningful variable names
- Proper indentation
- Clear class structure
- Consistent naming conventions
- Header guards
- Separate implementation from declaration

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
