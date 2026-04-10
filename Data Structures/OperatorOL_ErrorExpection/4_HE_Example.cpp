#include <iostream>
#include <string>
using namespace std;

int main() {
    try
    {
        int choice;
        cout << "Enter 1 for int exception, 2 for string exception: ";
        cin >> choice;

        if (choice == 1) throw 404;
        else if (choice == 2) throw string("File not found!"); //throw"File not found"; çalışmaz çünkü fırlatılan şeyin türü const char* olur
        else throw runtime_error("Invalid choice");

    }
    // CATCH BLOĞU
    catch(const int e) // fırlatılan burda yakalanır
    {
        cerr << "Error (int): Exception code " << e << endl;
    }
    catch(const string e) // fırlatılan string burda yakalanır
    {
        cerr << "Error (string): " << e << endl;
    }
    catch(...) // eğer onların dışında herhangi bir hata fırlatılırsa o da burda yakalanır
    {
        cerr << "ERROR: Unknown exception occurred!" << endl;
    }

    cout << "Program continues..." << endl;

    return 0;
}