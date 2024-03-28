#include <iostream>
#include <string>
using namespace std;


class Employee {
protected:
    string name;
    string role;

public:
    \
    void setName(const string& n) {
        name = n;
    }

    void setRole(const string& r) {
        role = r;
    }

    
    string getName() const {
        return name;
    }

    string getRole() const {
        return role;
    }
};

// Intermediate class EmployeeDetails with additional information
class EmployeeDetails : public Employee {
protected:
    int experience;

public:
    // Setter method
    void setExperience(int exp) {
        experience = exp;
    }

    // Getter method
    int getExperience() const {
        return experience;
    }
};

// Derived class CompanyInfo with company-specific details
class CompanyInfo : public EmployeeDetails {
protected:
    string companyName;
    string address;

public:
    // Setter methods
    void setCompanyName(const string& cn) {
        companyName = cn;
    }

    void setAddress(const string& add) {
        address = add;
    }

    // Getter methods
    string getCompanyName() const {
        return companyName;
    }

    string getAddress() const {
        return address;
    }

    // Method to get input from user
    void getInput() {
        cout << "Enter Employee Name: ";
        getline(cin, name);

        cout << "Enter Employee Role: ";
        getline(cin, role);

        cout << "Enter Employee Experience (in years): ";
        cin >> experience;

        cin.ignore(); // Ignore newline character in input buffer

        cout << "Enter Company Name: ";
        getline(cin, companyName);

        cout << "Enter Company Address: ";
        getline(cin, address);
    }

    // Print method to display employee information
    void printEmployeeInfo() const {
        cout << "\nEmployee Information:" << endl;
        cout << "Employee Name: " << getName() << endl;
        cout << "Employee Role: " << getRole() << endl;
        cout << "Experience: " << getExperience() << " years" << endl;
        cout << "Company Name: " << companyName << endl;
        cout << "Address: " << address << endl;
    }
};

int main() {
    // Create an object of the CompanyInfo class
    CompanyInfo employee;

    // Get input from the user
    employee.getInput();

    // Print employee information
    employee.printEmployeeInfo();

}
