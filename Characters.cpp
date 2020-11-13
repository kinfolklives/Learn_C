#include<iostream>
using namespace std;

int FuncChar();

int main(){
    int i = FuncChar();
    return 0;
}

int FuncChar(){
    char ch;  // 선언 할 때, 컴퓨터가 공간을 확보한다. 
              // 오버플로우 : 지정한 공간보다 초과
    
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