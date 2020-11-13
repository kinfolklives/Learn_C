#include<iostream>
using namespace std;

int main(){
    int array_number[10];
    auto count = 0;
    for(int i = 0; i<10; i++){
        count += 5;  // count = count + 5 >> 5씩 증가 
        array_number[i] = i + count;
    }

    cout << "\tElement"<< "\t" << "Value" << endl;
    for(int j = 0; j < 10; j++){
        cout << "\t" << j << "\t" << array_number[j] << endl;
    }
return 0;
}
