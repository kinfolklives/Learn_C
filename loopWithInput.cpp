#include<iostream> 
using namespace std;

int funcInput(), funcLoop(), funcWhile();
// int funcLoop();

int main(){
    funcInput();
    funcLoop();
    // funcWhile();
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
    int i, s;
    cout << "Input first : ";
    cin >> i;
    cout << "Input second: ";
    cin >> s;
    for(int j =i; j < s; j = j + 1){
        cout << "Loop - " << j << endl;
    }
    return 0;
}

int funcWhile(){
    int i;
    cout << "Input: ";
    cin >> i;
    while(i < 5){
        cout << "Loop - " << i << endl;
        ++i;
    }
    return 0;
}