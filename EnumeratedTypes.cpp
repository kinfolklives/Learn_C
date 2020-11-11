
// syntax : enum enum-name { list of names } var-list;

#include <iostream>  
using namespace std;

int main(){
enum color { Monday, Tuesday, Friday=4, Saturday } enumRed;
enumRed = color::Monday;
cout << "Monday : " << enumRed << "\t";
cout << "Tuesday : " << color::Tuesday << endl;
cout << "Friday : " << color::Friday << "\t";
cout << "Saturday : " << color::Saturday << endl;
return 0;
}