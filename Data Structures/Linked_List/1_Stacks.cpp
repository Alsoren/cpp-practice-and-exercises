#include <iostream>
#include <stack>
using namespace std;

int main() {
  // Create a stack of strings called cars
  stack<string> cars;

  cout << cars.empty() << endl; // Check if the stack is empty

  // Add elements to the stack
  cars.push("Volvo");
  cars.push("BMW");
  cars.push("Ford");
  cars.push("Mazda");
  
  // Remove the last/latest added element (Mazda)
  cars.pop();
  
  // LIFO (Last In, First Out) – “Son Giren İlk Çıkar” Mantığı

  // Access the top element (Now Ford)
  cout << cars.top();
  return 0;
}
