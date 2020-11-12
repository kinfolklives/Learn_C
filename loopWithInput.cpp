#include<iostream>
using namespace std;

int funcInput(), funcLoop();
// int funcLoop();

int main(){
    funcInput();
    funcLoop();
    return 0;
}

int funcInput(){
    int first, second;
    cout << "Input first: ";
    cin >> first;
    cout << "Input second: ";
    cin >> second;
    cout << "first = " << first  << endl;
    cout << "second = " << second  << endl;
    return 0;
}

int funcLoop(){
    for(int i = 2; i < 5; i = i + 1){
        cout << "Loop - " << i << endl;
        if (i > 3){
            break;
        }
    }
    return 0;
}