#include <iostream>
using namespace std;

int main() {
  int num;
  int a = 1;
  int b = 1;
  
  cout << "Enter a number to get its Nth Fibonacci sequence total: ";
  cin >> num;
  cout << "Fibonnaci total for " << num << " is: ";

  for (int i = 3; i <= num; i++){
    int total = a + b;
    b = a;
    a = total;
    if(i == num)
      cout << total << endl; 
  }
  return 0;
}