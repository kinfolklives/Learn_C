

#include"under/FunctionOther.cpp" 
extern int funcOutside();         


int i = 5;
int main(){               
    int i = funcOutside();
    cout << "return value: " << i << endl;
    cout << "Scope resolution operator: " << ::i << endl;
    return 0;
}
