#include<iostream>
using namespace std;

int main(){
    int f, s;
    char ans;

    while(ans != 'N'){
    cout << "Input: first = ";
    cin >> f;

    cout << "Input: second = ";
    cin >> s;

    int add = f + s;
    int sub =  f - s;
    int mul = f * s;
    int div = f / s;

    cout << "-----------------------------------" << endl;
    cout << " + Addition Result: " << add << endl;
    cout << " + Subtraction Result: " << sub << endl; 
    cout << " + Multiple Result: "  << mul << endl;
    cout << " + Division Result: " << div << endl;
    cout << "-----------------------------------" << endl;
    
    cout << " Do You Want to Continue the Calculation?";
    cin >> ans;
    }

    return 0;
}