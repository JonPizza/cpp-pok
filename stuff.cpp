#include <iostream>
using namespace std;

int main() {
  int num;
  float answer;
  cout << "Enter an int: ";
  cin >> num;
  cout << endl << "Thanks for the number!" << endl;
  cout << "Now, you need to tell me wat exactly 1/2 of your number was: ";
  cin >> answer;
  if (answer == (num/2) {
    cout << "Good Job!" << endl; 
  } else {
    cout << "WRONG!" << endl; 
  }
  return 0;
}
