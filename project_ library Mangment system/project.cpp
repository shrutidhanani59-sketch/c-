#include <iostream>
#include <string>
using namespace std;

const int MAX_ITEMS = 100;


class LibraryItem {
private:
    string title;
    string author;
    string dueDate;

public:
    
    LibraryItem(string t = "", string a = "", string d = "")
        : title(t), author(a), dueDate(d) {}

   
    string getTitle() { return title; }
    string getAuthor() { return author; }
    string getDueDate() { return dueDate; }

    
    void setTitle(string newTitle) {
        if (newTitle.empty())
            throw runtime_error("Title cannot be empty!");
        title = newTitle;
    }

    void setAuthor(string newAuthor) {
        if (newAuthor.empty())
            throw runtime_error("Author cannot be empty!");
        author = newAuthor;
    }

    void setDueDate(string newDueDate) {
        dueDate = newDueDate;
    }

    // Pure virtual functions
    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {}
};

class Book : public LibraryItem {
private:
    string isbn;

public:
    Book(string t, string a, string d, string i)
        : LibraryItem(t, a, d) {
        if (i.length() < 5)
            throw runtime_error("Invalid ISBN format!");
        isbn = i;
    }

    void checkOut() override {
        cout << "Book checked out: " << getTitle() << endl;
    }

    void returnItem() override {
        cout << "Book returned: " << getTitle() << endl;
    }

    void displayDetails() override {
        cout << "[Book] "
             << "Title: " << getTitle()
             << ", Author: " << getAuthor()
             << ", Due Date: " << getDueDate()
             << ", ISBN: " << isbn << endl;
    }
};


class DVD : public LibraryItem {
private:
    int duration; 

public:
    DVD(string t, string a, string d, int dur)
        : LibraryItem(t, a, d) {
        if (dur <= 0)
            throw runtime_error("Invalid DVD duration!");
        duration = dur;
    }

    void checkOut() override {
        cout << "DVD checked out: " << getTitle() << endl;
    }

    void returnItem() override {
        cout << "DVD returned: " << getTitle() << endl;
    }

    void displayDetails() override {
        cout << "[DVD] "
             << "Title: " << getTitle()
             << ", Author: " << getAuthor()
             << ", Due Date: " << getDueDate()
             << ", Duration: " << duration << " mins" << endl;
    }
};

class Magazine : public LibraryItem {
private:
    int issueNumber;

public:
    Magazine(string t, string a, string d, int issue)
        : LibraryItem(t, a, d) {
        if (issue <= 0)
            throw runtime_error("Invalid issue number!");
        issueNumber = issue;
    }

    void checkOut() override {
        cout << "Magazine checked out: " << getTitle() << endl;
    }

    void returnItem() override {
        cout << "Magazine returned: " << getTitle() << endl;
    }

    void displayDetails() override {
        cout << "[Magazine] "
             << "Title: " << getTitle()
             << ", Author: " << getAuthor()
             << ", Due Date: " << getDueDate()
             << ", Issue: " << issueNumber << endl;
    }
};


int main() {
    LibraryItem* libraryItems[MAX_ITEMS];
    int itemCount = 0;
    int choice;

    do {
        cout << "\n===== Library Menu =====\n";
        cout << "1. Add Book\n";
        cout << "2. Add DVD\n";
        cout << "3. Add Magazine\n";
        cout << "4. Display All Items\n";
        cout << "5. Check Out Item\n";
        cout << "6. Return Item\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        try {
            if (choice == 1) {
                string title, author, dueDate, isbn;
                cout << "Enter title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter due date: ";
                getline(cin, dueDate);
                cout << "Enter ISBN: ";
                getline(cin, isbn);

                libraryItems[itemCount++] =
                    new Book(title, author, dueDate, isbn);
            }
            else if (choice == 2) {
                string title, author, dueDate;
                int duration;

                cout << "Enter title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter due date: ";
                getline(cin, dueDate);
                cout << "Enter duration (mins): ";
                cin >> duration;

                libraryItems[itemCount++] =
                    new DVD(title, author, dueDate, duration);
            }
            else if (choice == 3) {
                string title, author, dueDate;
                int issue;

                cout << "Enter title: ";
                cin.ignore();
                getline(cin, title);
                cout << "Enter author: ";
                getline(cin, author);
                cout << "Enter due date: ";
                getline(cin, dueDate);
                cout << "Enter issue number: ";
                cin >> issue;

                libraryItems[itemCount++] =
                    new Magazine(title, author, dueDate, issue);
            }
            else if (choice == 4) {
                for (int i = 0; i < itemCount; i++) {
                    libraryItems[i]->displayDetails();
                }
            }
            else if (choice == 5) {
                int index;
                cout << "Enter item index: ";
                cin >> index;
                if (index >= 0 && index < itemCount)
                    libraryItems[index]->checkOut();
                else
                    throw runtime_error("Invalid item index!");
            }
            else if (choice == 6) {
                int index;
                cout << "Enter item index: ";
                cin >> index;
                if (index >= 0 && index < itemCount)
                    libraryItems[index]->returnItem();
                else
                    throw runtime_error("Invalid item index!");
            }

        } catch (exception &e) {
            cout << "Error: " << e.what() << endl;
        }

    } while (choice != 7);

    
    for (int i = 0; i < itemCount; i++) {
        delete libraryItems[i];
    }

    cout << "Program exited.\n";
    return 0;
}