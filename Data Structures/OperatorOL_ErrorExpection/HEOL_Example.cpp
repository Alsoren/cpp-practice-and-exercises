#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNum;
    double ballance;
public:
    BankAccount() {
        this->accountNum = 0;
        this->ballance = 0;
    }

    BankAccount(int accountNum, double ballance) {
        this->accountNum = accountNum;
        this->ballance = ballance;
    }

    void printAcc() {
        cout << "Account Number: " << accountNum << endl;
        cout << "Ballance: " << ballance << endl;
    }

    // '+' operator overloading
    BankAccount operator+(const BankAccount& other) {
        if ((this->ballance + other.ballance) < 0)
        {
            throw out_of_range("Ballances are cant be negative!");
        }
        
        return BankAccount(0, this->ballance + other.ballance);
    }
};

int main() {
    BankAccount c1 = {13, -2500.50};
    BankAccount c2 = {17, 200.50};
    BankAccount c3;

    try
    {
        c3 = c1 + c2; // operator+ çağrılır -> c1.operator+(c2)
        c3.printAcc();
    }
    catch(const out_of_range& e)
    {
        cerr <<"Error: "<<e.what() << endl;
    }
    

    return 0;
}
