// task 1

//#include <iostream>
//using namespace std;
//
//class Student {
//private:
//    string name;
//    double gpa;
//
//public:
//    void setName(string n) {
//        if (n == "") {
//            cout << "Error: Name cannot be blank" << endl;
//        }
//        else {
//            name = n;
//        }
//    }
//
//    void setGPA(double g) {
//        if (g < 0.0 || g > 4.0) {
//            cout << "Error: Invalid GPA" << endl;
//        }
//        else {
//            gpa = g;
//        }
//    }
//
//    void display() {
//        cout << "\n--- Student Info ---" << endl;
//        cout << "Name: " << name << endl;
//        cout << "GPA: " << gpa << endl;
//    }
//};
//
//int main() {
//    Student s1;
//
//    s1.setName("Awais");
//    s1.setGPA(3.2);
//
//    s1.display();
//
//    // Invalid cases
//    s1.setName("");
//    s1.setGPA(5.0);
//
//    return 0;
//}

// task 2

//#include <iostream>
//using namespace std;
//
//class Transaction {
//private:
//    double amount;
//    static int totalTransactions;
//
//public:
//    Transaction(double a) {
//        amount = a;
//        totalTransactions++;
//    }
//
//    static int getTotalCount() {
//        return totalTransactions;
//    }
//};
//
//// Static variable initialize
//int Transaction::totalTransactions = 0;
//
//int main() {

//    cout << "Transactions before objects: "
//        << Transaction::getTotalCount() << endl;
//
//    Transaction t1(100);
//    Transaction t2(200);
//    Transaction t3(300);
//
//    // After creating objects
//    cout << "Transactions after objects: "
//        << Transaction::getTotalCount() << endl;
//
//    return 0;
//}

// task 3

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    static double interestRate;

public:
    BankAccount() {
        balance = 0;
    }

    static void setInterestRate(double rate) {
        interestRate = rate;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
        else {
            cout << "Invalid deposit amount" << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Not enough balance" << endl;
        }
        else {
            balance -= amount;
        }
    }

    void show() {
        cout << "\n--- Account Info ---" << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << endl;
    }
};

double BankAccount::interestRate = 0;

int main() {
    BankAccount acc1;

    BankAccount::setInterestRate(5.0);

    acc1.deposit(1500);
    acc1.withdraw(500);
    acc1.withdraw(2000); // invalid

    acc1.show();

    return 0;
}