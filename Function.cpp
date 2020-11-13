/*
SYNTAX : 

return_type function_name(parameter list){
    body of the function
    return value;    >> return type 과 value type 일치! 
}
*/

#include <iostream>
using namespace std;

#include"under/NameSpaceUsingOthers.cpp"       // third_space 참조
using namespace third_space;                   // third_space 참조

int funcInside();          // function declaration

int main(){
    int i = funcInside();  // function call
    cout << "return value: " << i << endl;

    third_space::func();                     // third_space 참조
    funcOutside();                           // third_space 참조
    
    return 0;
}

int funcInside(){          // function definition
    cout << "int funcInside()" << endl;
    return 8;
}


