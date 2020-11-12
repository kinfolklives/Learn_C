#include <iostream>
using namespace std;

#include"under/FunctionOther.cpp"
extern int funcOutside();        // possible remove keyword 'extern'

int i = 5
int main(){                      // function call
    int i = funcOutside();
    cout << "return value: " << i << endl;
    cout << "Scope resolution operator: " << ::i << endl;
    return 0;
}
