#include<iostream>
using namespace std;

int funcFor();
int main(){
    funcFor();
    return 0;
}
int funcFor(){
    for(int first = 10; first < 20; first = first +1){
        cout << "value of first: " << first << endl;
        if (first > 16){
            break;
        }
    }

    // cout << "Final value first: " << first; // Error
    return 0;
}

