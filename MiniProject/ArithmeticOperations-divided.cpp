#include<iostream>
using namespace std;

int Calculation();
int Add(int, int);
int Sub(int, int);
int Mul(int, int);
int Div(int, int);

int main(){
    int i = Calculation();
    return 0;
    }


int Add(int f, int s){
    int add = f + s;
    return add;
}

int Sub(int f, int s){
    int sub =  f - s;
    return sub;
}

int Mul(int f, int s){
    int mul = f * s;
    return mul;
}

int Div(int f, int s){
    int div = f / s;
    return div;
}

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