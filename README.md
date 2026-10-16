Digital Library (E-Book) Management System
C++ Project – Mekelle University 
________________________________________
1. Introduction
•	In modern academic environments, managing digital learning resources efficiently is a shared responsibility that requires both technical and organizational solutions. At Mekelle University Library, students and academic staff often experience difficulties when searching for and organizing e-books. These challenges increase manual workload, slow down access to learning materials, and reduce overall system reliability.
•	As a group-based Software Engineering assignment, this project was developed collaboratively to address these challenges. The team designed and implemented a Digital Library (E-Book) Management System using C++. Throughout the project, team members worked together to analyze the problem, design the system, implement features, and document the solution. The system applies Object-Oriented Programming (OOP) principles and file handling techniques to manage e-book records and user authentication in a clear and structured manner.
2. Problem Statement	
+	The current approach to handling digital library resources has several limitations:
•	E-books are not stored in a well-structured manner
•	Searching for specific resources is inefficient
•	There is no user authentication mechanism
•	Manual management increases workload and error risk
•	As a result, users experience poor accessibility and unnecessary delays when trying to find relevant digital materials.


+	This system solves these problems by introducing: 

Centralized storage of e-books :
•	Easy search and view functionality 
•	Login system for users 
•	Simple file-based management for librarians

3. Objectives
General Objective:
•	Develop a simple C++ Digital Library System that manages e-books efficiently.
Specific Objectives: 
•	Allow users to register and log in securely.
•	Store e-book information permanently using files.
•	Enable users to search and view available e-books. Add new e-books.
•	Apply core object-oriented programming concepts in practice.
4. Scope of the System
Included Features
•	User registration and login
•	Adding, viewing, and searching e-books
•	File-based data storage for persistence
Excluded Features
•	Role-based access control (e.g., admin or librarian roles)
•	Graphical User Interface (GUI)
•	Network or online access
•	Opening or reading actual e-book files
5. System Requirements
Hardware Requirements
•	A computer with at least 2 GB of RAM
Software Requirements
•	A C++ compiler such as GCC or MinGW
•	Any C++ development environment (Code::Blocks, Dev C++, Visual Studio, etc.)
6. Class Design Overview
The system is designed using multiple classes, each with a clear responsibility:
EBook Class
•	Attributes: ID, Title, Author, Subject
•	Purpose: Stores and displays information related to an e-book

Library Class
•	Attribute: Emp_id ,position
•	Purpose: Manages the collection of e-books, including adding, viewing, and searching records
User Class

•	Attributes: user_id, user_type, department
•	Purpose: Handles user registration and login authentication
+	This structure helps maintain clean, modular, and reusable code.
7. Functional Requirements
•	The system shall allow new users to register
•	The system shall authenticate registered users during login
•	The system shall allow users to add new e-book records
•	The system shall support searching e-books by ID
•	The system shall display all stored e-books
8. Non-Functional Requirements
•	The system shall be easy to use for beginners
•	Data shall be stored persistently using files
•	The system shall respond quickly to user input	
•	The system shall be reliable for small-scale academic use
9. Advantages
•	Provides basic security through a login system
•	Organizes digital book records efficiently
•	Simple design suitable for learning and practice
10. Limitations
•	The system uses a console-based interface only
•	User passwords are not encrypted
•	There is no separation of user roles


11. Future Enhancements
Based on team discussions and reflection during development, several improvements can be made in future versions of the system:
•	Introduce role-based access (Admin, Librarian, Student)
•	Develop a graphical user interface using frameworks such as Qt
•	Implement password encryption to enhance security
•	Add support for opening and reading PDF or EPUB files
•	Extend the system for network or online access
•	These enhancements were identified collaboratively and represent potential directions for further team-based development.
12. Conclusion	

This group project demonstrates how Software Engineering principles and C++ programming concepts can be applied collaboratively to solve a real-world problem in an academic setting. By working as a team, the project members successfully analyzed user needs, designed an object-oriented solution, and implemented a functional Digital Library Management System using file handling techniques.
The project not only strengthened technical skills in C++ and OOP but also improved teamwork, communication, and problem-solving abilities. With additional enhancements and continued collaboration, the system has the potential to evolve into a more advanced and fully featured digital library platform.

# Front-End Prototype

The `prototype/` directory contains the HTML front-end prototype created for the Digital Library (E-Book) Management System. The `prototype/library.html` file presents an initial design of the system's user interface.

This front-end prototype is part of the broader digital library project and is separate from the current C++ console-based implementation. It serves as a visual prototype for a potential graphical interface and does not imply that the HTML interface is integrated with the C++ program.

# Prototype File
- "prototype/library.html" — HTML front-end prototype of the digital library system.

13. How to Run the System
Step 1. Open your preferred C++ IDE
Step 2. Create a new source file named DigitalLibrary.cpp
Step 3. Copy and paste the provided source code into the file
Step 4. Compile and run the program
Step 5. Register a new user and log in to access the system features

14. Sample Output
===== Welcome to Mekelle University Digital Library =====
1. Register User
2. Login
3. Exit
Enter your choice: 1
Enter username: mehratab
Enter password: 12345


User registered successfully! [cite: 232, 233, 234, 235, 236, 237, 238, 239]

... (Login process) ...
Login successful! Welcome, mebrihit! [cite: 246]
--- Digital Library Menu ---
1. Add E-Book
2. View All E-Books
3. Search E-Book
4. Logout
Enter choice: 1
Enter Book ID: 101
Enter Title: Programming in C++
Enter Author: Bjarne Stroustrup
Enter Subject: Programming
E-Book added successfully! [cite: 247, 248, 249, 250, 251, 252, 253, 254, 255, 256, 257] 
