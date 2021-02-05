#include <iostream>
using namespace std;

int main() {
  int count = 0;
  string password;
   // Get user input from the keyboard
cout << "\n Enter You Password please: \n\n";
  while (count < 4){
     // Type a number and press enter
    cin >> password;
    if (password == "password")
    {
        cout << "\n Welcome ! \n";
        return 0;
    }else{
        cout << "The Password You Typed is incorrect : \n";
        count++;
    }
    if(count == 3){
        cout << "\n Access Denied ! \n";
    }

    //return 0;
  }
  return 0;
}
