#include<iostream>
using namespace std;

int FuncChar();

int main(){
    int i = FuncChar();
    return 0;
}

int FuncChar(){
    char ch;
    
    cout << "Input : ";
    cin >> ch;
    
    if(ch == 'N'){  // ' ' single quote 
        cout << "Press " << ch << " Character!" << endl;
    }

    cout << "Input : ";
    cin >> ch;
    cout << int(ch) << " Press " << ch << " Character!" << endl;

    cout << "Input : ";
    cin >> ch;
    cout << int(ch) << " Press " << ch << " Character!" << endl;
    return 0;
}