#include<iostream>
using namespace std;

int funcInput(), funcLoop(), funcWhile();
// int funcLoop();

int main(){
    funcInput();
    funcLoop();
    funcWhile();
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

int funcWhile(){
    int i = 2;
    while(i < 5){
        cout << "Loop - " << i << endl;
        ++i;
    }
    return 0;
}