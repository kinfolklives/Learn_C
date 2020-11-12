/*
SYNTAX : 

return_type function_name(parameter list){
    body of the function
    return value;    >> return type 과 value type 일치! 
}
*/

#include <iostream>
using namespace std;

int funcInside();          // function declaration

int main(){
    int i = funcInside();  // function call
    cout << "return value: " << i << endl;
    return 0;
}

int funcInside(){          // function definition
    cout << "int funcInside()" << endl;
    return 8;
}