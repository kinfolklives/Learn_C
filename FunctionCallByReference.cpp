#include<iostream>
using namespace std;

void swapByReference(int &x, int &y){
    /* same void swap(intx, int y) */
}

int main(){
    int first = 100, second =200;

    cout << "Before swap - first, second: " << first << "," << second << endl;
    cout << "Before swap by refer - first, second: " << first << ", "<< second << endl;
    swapByReference(first, second); 
    cout << "After swap by refer - first, second: " << first << ", " << second << endl;

    cout << "Size of first " << sizeof(first) << endl;
    cout << "Size of second " << sizeof(second) << endl;

    return 0;
}

void swap(int x, int y){
    int temp; temp = x; x=y; y=temp;
}
