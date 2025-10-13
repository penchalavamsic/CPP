#include <iostream>
using namespace std;

class Employee {
private:
    string name;
    int empID;
protected:
    float salary;
public:
    Employee(string n, int id) {
        name = n;
        empID = id;
    }
    float getSalary() {
        cin >> salary;
        return salary;
    }
    string getName() {
        return name;
    }
    int getID() {
        return empID;
    }
    virtual void display() { // virtual for proper polymorphism
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getID() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
    virtual ~Employee() { // virtual destructor
        cout << "Employee deleted" << endl;
    }
};

class FullTimeEmployee : public Employee {
public:
    float basicPay;
    float bonus;
    FullTimeEmployee(string n, int id, float bp, float b) : Employee(n, id) {
        basicPay = bp;
        bonus = b;
    }
    void calculateSalary() {
        salary = basicPay + bonus;
    }
    void displayDetails() {
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getID() << endl;
        cout << "Basic Pay: " << basicPay << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << salary << endl;
    }
    ~FullTimeEmployee() {
        cout << "Full Time Employee deleted" << endl;
    }
};

class PartTimeEmployee : public Employee {
public:
    int hoursWorked;
    float hourlyRate;
    PartTimeEmployee(string n, int id, int hw, float hr) : Employee(n, id) {
        hoursWorked = hw;
        hourlyRate = hr;
    }
    void calculateSalary() {
        salary = hoursWorked * hourlyRate;
    }
    void displayDetails() {
        cout << "Name: " << getName() << endl;
        cout << "ID: " << getID() << endl;
        cout << "Hours Worked: " << hoursWorked << endl;
        cout << "Hourly Rate: " << hourlyRate << endl;
        cout << "Total Salary: " << salary << endl;
    }
    ~PartTimeEmployee() {
        cout << "Part Time Employee deleted" << endl;
    }
};

int main() {
    Employee* employees[100]; // fixed size
    int ch;
    int count = 0;
    do {
        cout << "\n========= Employment Management System =========\n";
        cout << "1. Add Full-Time Employee\n";
        cout << "2. Add Part-Time Employee\n";
        cout << "3. Display All Employees\n";
        cout << "4. Search Employee by ID\n";
        cout << "5. Delete Employee by ID\n";
        cout << "6. Exit Program\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
        case 1: {
            string name;
            int id;
            float basicPay, bonus;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Basic Pay: ";
            cin >> basicPay;
            cout << "Enter Bonus: ";
            cin >> bonus;
            employees[count] = new FullTimeEmployee(name, id, basicPay, bonus);
            count++; // increment count
            break;
        }
        case 2: {
            string name;
            int id;
            int hoursWorked;
            float hourlyRate;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter ID: ";
            cin >> id;
            cout << "Enter Hours Worked: ";
            cin >> hoursWorked;
            cout << "Enter Hourly Rate: ";
            cin >> hourlyRate;
            employees[count] = new PartTimeEmployee(name, id, hoursWorked, hourlyRate);
            count++; // increment count
            break;
        }
        case 3: {
            for (int i = 0; i < count; i++) {
                employees[i]->display();
            }
            break;
        }
        case 4: {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            bool found = false;
            for (int i = 0; i < count; i++) {
                if (employees[i]->getID() == id) {
                    employees[i]->display();
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Employee not found\n";
            }
            break;
        }
        case 5: {
            int id;
            cout << "Enter ID: ";
            cin >> id;
            bool deleted = false;
            for (int i = 0; i < count; i++) {
                if (employees[i]->getID() == id) {
                    delete employees[i];
                    // shift array left
                    for (int j = i; j < count - 1; j++) {
                        employees[j] = employees[j + 1];
                    }
                    count--;
                    deleted = true;
                    break;
                }
            }
            if (deleted)
                cout << "Employee deleted\n";
            else
                cout << "Employee not found\n";
            break;
        }
        case 6:
            cout << "Exit program\n";
            break;
        default:
            cout << "Invalid choice\n";
            break;
        }
    } while (ch != 6);

    for (int i = 0; i < count; i++) {
        delete employees[i];
    }

    return 0;
}
