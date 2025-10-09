// Smart Inventory System
/*1.Title: Smart Inventory System with Dynamic Memory
and Inheritance

Problem Statement:
Design a program to manage an inventory system for a store.
Each item in the store belongs to a specific category (like Electronics or Groceries), but the
data must be stored and managed without using virtual functions.
You must handle object relationships, memory allocation, and cleanup properly.

Objectives:
Implement:
● Encapsulation (private/protected members)
● Parameterized Constructors & Destructors
● Inheritance (Base → Derived classes)
● Dynamic allocation using pointers (new / delete)
● Pointer-to-object relationships (no virtual keyword)

Requirements:
1. Base Class: Item
○ Private members:
■ string name
■ int id

■ float price
○ Protected member:
■ int quantity
○ Public functions:
■ Parameterized constructor to initialize all members.
■ void display() — prints item details.
■ float getTotalValue() — returns price * quantity.
■ Destructor — prints when the item object is destroyed.

2. Derived Class 1: Electronics
○ Additional data members:
■ int warrantyYears
■ float powerUsage
○ Constructor should call base class constructor using initializer list.
○ void displayDetails() — prints both base and derived details.
○ Destructor prints a message for cleanup.

3. Derived Class 2: Grocery
○ Additional data members:
■ string expiryDate
■ float weight

○ Constructor and destructor similar to Electronics.
○ Function void displayDetails() to show all info.

4. Main Function Logic:
○ Ask user how many total items are in inventory.
○ Dynamically create an array of pointers to Electronics and Grocery
objects.
○ For each item, ask the user for category and input details.
○ Display all item details and total inventory value.
○ Properly delete all dynamically allocated memory at the end. */
#include <iostream>
using namespace std;

// Base Class: Item
class Item {
private:
    string name;
    int id;
    float price;

protected:
    int quantity;

public:
    Item(string n, int i, float p, int q) : name(n), id(i), price(p), quantity(q) {}

    string getName() { return name; }
    int getId() { return id; }
    float getPrice() { return price; }

    void display() {
        cout << "\n--- Item Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Price: " << price << endl;
        cout << "Quantity: " << quantity << endl;
    }

    float getTotalValue() { return price * quantity; }

    ~Item() { cout << "Item '" << name << "' cleaned.\n"; }
};

// Derived Class: Electronics
class Electronics : public Item {
private:
    int warrantyYears;
    float powerUsage;

public:
    Electronics(string n, int i, float p, int q, int w, float pu) 
        : Item(n, i, p, q), warrantyYears(w), powerUsage(pu) {}

    void displayDetails() {
        display();
        cout << "Warranty Years: " << warrantyYears << endl;
        cout << "Power Usage (Watts): " << powerUsage << endl;
    }

    ~Electronics() { cout << "Electronics item cleaned.\n"; }
};

// Derived Class: Grocery
class Grocery : public Item {
private:
    string expiryDate;
    float weight;

public:
    Grocery(string n, int i, float p, int q, string ed, float w) 
        : Item(n, i, p, q), expiryDate(ed), weight(w) {}

    void displayDetails() {
        display();
        cout << "Expiry Date: " << expiryDate << endl;
        cout << "Weight (kg): " << weight << endl;
    }

    ~Grocery() { cout << "Grocery item cleaned.\n"; }
};

// Main function
int main() {
    int totalItems;
    cout << "Enter number of inventory items: ";
    cin >> totalItems;

    Item** inventory = new Item*[totalItems]; // array of pointers
    int* itemType = new int[totalItems];      // to track type (1=Electronics, 2=Grocery)

    float totalValue = 0;

    for (int i = 0; i < totalItems; i++) {
        cout << "\nEnter category for item " << i + 1 << " (1-Electronics, 2-Grocery): ";
        int choice;
        cin >> choice;
        itemType[i] = choice;

        if (choice == 1) {
            string name;
            int id, quantity, warranty;
            float price, power;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter warranty (years): ";
            cin >> warranty;
            cout << "Enter power usage (Watts): ";
            cin >> power;

            inventory[i] = new Electronics(name, id, price, quantity, warranty, power);
        }
        else if (choice == 2) {
            string name, expiry;
            int id, quantity;
            float price, weight;

            cout << "Enter name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter quantity: ";
            cin >> quantity;
            cout << "Enter expiry date: ";
            cin >> expiry;
            cout << "Enter weight (kg): ";
            cin >> weight;

            inventory[i] = new Grocery(name, id, price, quantity, expiry, weight);
        }
        else {
            cout << "Invalid choice! Skipping this item.\n";
            inventory[i] = nullptr;
            itemType[i] = 0;
        }
    }

    cout << "\n*** Inventory Details ***\n";
    for (int i = 0; i < totalItems; i++) {
        if (inventory[i] != nullptr) {
            if (itemType[i] == 1)
                ((Electronics*)inventory[i])->displayDetails();
            else if (itemType[i] == 2)
                ((Grocery*)inventory[i])->displayDetails();

            totalValue += inventory[i]->getTotalValue();
            cout << "------------------------------\n";
        }
    }

    cout << "Total Inventory Value: " << totalValue << endl;

    // Cleanup memory
    for (int i = 0; i < totalItems; i++)
        delete inventory[i];

    delete[] inventory;
    delete[] itemType;

    cout << "\nAll items cleaned successfully.\n";
    return 0;
}
