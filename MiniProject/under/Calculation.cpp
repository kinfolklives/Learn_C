
#include<iostream>
using namespace std;

#include"Addition.cpp"
#include"Subtraction.cpp"
#include"Multiple.cpp"
#include"Division.cpp"

int Add(int, int);
int Sub(int, int);
int Mul(int, int);
int Div(int, int);

int Calculation(){

    char ans;
    int f, s, result;
    
    while(ans != 'N'){
    cout << "Input: first = ";
    cin >> f;

    cout << "Input: second = ";
    cin >> s;

    cout << "-----------------------------------" << endl;
    cout << " + Addition Result: " << Add(f,s) << endl;
    cout << " + Subtraction Result: " << Sub(f,s) << endl; 
    cout << " + Multiple Result: "  << Mul(f,s) << endl;
    cout << " + Division Result: " << Div(f,s) << endl;
    cout << "-----------------------------------" << endl;

    cout << " Do You Want to Continue the Calculation?";
    cin >> ans;
    }

    return 0;
}