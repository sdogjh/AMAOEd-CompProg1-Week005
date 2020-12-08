#include <iostream>
using namespace std;

int main()
{
 string name;
  string password; 
  string address;
cout << "Enter your name: ";
 getline(cin, name);
cout << "Enter your password: ";
 getline(cin, password);
 cout << "Enter your address: ";
getline(cin, address);
 cout << "Hi, I am " << name << ". I live at " << address << ".";
return 0;
}
