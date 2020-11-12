/*
SYNTAX: 

if(boolean_expression){
    // execute if the boolean expression is true
} else {
    // execute if the boolean expression is false
}
*/

#include<iostream>
using namespace std;

int funcBool();

int main(){
    int first = funcBool();
    cout << "Exact value of first is: " << first << endl;
    return 0; 
}

int funcBool(){
    int first = 100;
    if (first == 10){   cout << "Value of first is 10" << endl;
    } else if (first ==30) {cout << "Value of first is 30" << endl;
    } else {cout << "Value of first is not matching" << endl;
    }
    return first;
    }


