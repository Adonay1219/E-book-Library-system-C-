#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Class to store e-book information
class EBook {
public:
    int id;
    string title;
    string author;
    string subject;

    // Input e-book details
    void input() {
        cout << "Enter Book ID: ";
        cin >> id;
        cin.ignore();
        cout << "Enter Title: ";
        getline(cin, title);
        cout << "Enter Author: ";
        getline(cin, author);
        cout << "Enter Subject: ";
        getline(cin, subject);
    }

    // Display e-book details
    void display() {
        cout << "\nBook ID: " << id;
        cout << "\nTitle: " << title;
        cout << "\nAuthor: " << author;
        cout << "\nSubject: " << subject << endl;
    }
};

// Class to manage library operations
class Library {
public:
    // Add new e-book
    void addBook() {
        EBook b;
        ofstream file("ebooks.txt", ios::app); // Append to file
        b.input();
        file << b.id << "|" << b.title << "|" << b.author << "|" << b.subject << endl;
        file.close();
        cout << "\nE-Book added successfully!\n";
    }

    // View all e-books
    void viewBooks() {
        EBook b;
        ifstream file("ebooks.txt");
        string line;
        cout << "\n--- List of E-Books ---\n";
        while (getline(file, line)) {
            size_t pos = 0;

            pos = line.find("|");
            b.id = stoi(line.substr(0, pos));
            line.erase(0, pos + 1);

            pos = line.find("|");
            b.title = line.substr(0, pos);
            line.erase(0, pos + 1);

            pos = line.find("|");
            b.author = line.substr(0, pos);
            line.erase(0, pos + 1);

            b.subject = line;

            b.display();
        }
        file.close();
    }

    // Search an e-book by ID
    void searchBook() {
        int searchId;
        cout << "Enter Book ID to search: ";
        cin >> searchId;

        EBook b;
        bool found = false;
        ifstream file("ebooks.txt");
        string line;

        while (getline(file, line)) {
            size_t pos = 0;

            pos = line.find("|");
            b.id = stoi(line.substr(0, pos));
            line.erase(0, pos + 1);

            pos = line.find("|");
            b.title = line.substr(0, pos);
            line.erase(0, pos + 1);

            pos = line.find("|");
            b.author = line.substr(0, pos);
            line.erase(0, pos + 1);

            b.subject = line;

            if (b.id == searchId) {
                cout << "\nE-Book Found:\n";
                b.display();
                found = true;
                break;
            }
        }

        if (!found)
            cout << "\nE-Book not found.\n";

        file.close();
    }
};

// Class for user registration and login
class User {
public:
    string username;
    string password;

    // Register a new user
    void registerUser() {
        cout << "Enter username: ";
        cin >> username;
        cout << "Enter password: ";
        cin >> password;

        ofstream file("users.txt", ios::app); // Save to file
        file << username << "|" << password << endl;
        file.close();

        cout << "\nUser registered successfully!\n";
    }

    // Login existing user
    bool login() {
        string uname, pass;
        cout << "Username: ";
        cin >> uname;
        cout << "Password: ";
        cin >> pass;

        ifstream file("users.txt");
        string line;
        while (getline(file, line)) {
            size_t pos = line.find("|");
            string storedUser = line.substr(0, pos);
            string storedPass = line.substr(pos + 1);

            if (uname == storedUser && pass == storedPass) {
                cout << "\nLogin successful! Welcome, " << uname << "!\n";
                return true;
            }
        }

        cout << "\nLogin failed! Check your username or password.\n";
        return false;
    }
};

int main() {
    Library lib;
    User u;
    int choice;

    cout << "===== Welcome to Mekelle University Digital Library =====\n";

    do {
        cout << "\n1. Register User\n2. Login\n3. Exit\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            u.registerUser();
            break;
        case 2:
            if (u.login()) {
                int menu;
                do {
                    cout << "\n--- Digital Library Menu ---\n";
                    cout << "1. Add E-Book\n2. View All E-Books\n3. Search E-Book\n4. Logout\nEnter choice: ";
                    cin >> menu;

                    switch (menu) {
                    case 1:
                        lib.addBook();
                        break;
                    case 2:
                        lib.viewBooks();
                        break;
                    case 3:
                        lib.searchBook();
                        break;
                    case 4:
                        cout << "Logging out...\n";
                        break;
                    default:
                        cout << "Invalid choice. Try again.\n";
                    }
                } while (menu != 4);
            }
            break;
        case 3:
            cout << "Exiting system...\n";
            break;
        default:
            cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 3);

    return 0;
}

