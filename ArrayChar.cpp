#include<iostream>
using namespace std;

int main(){
    char greeting[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout << "Greeting medssage: " << greeting << endl;
    char worldwithoutnull[5] = {'W', 'o', 'r', 'l', 'd'};
    cout << "World without null message: " << worldwithoutnull << endl;

    short count = 0;
    while(worldwithoutnull[count] != NULL){
        cout << "with null["<<count<<"]:"<< worldwithoutnull[count] <<endl;
        count++;
    }

    return 0;
}

/* 
"\0" 이 없으면 그 전 hello 까지 같이 출력, 

char worldwithoutnull[5] = {'W', 'o', 'r', 'l', 'd'};
    cout << "World without null message: " << worldwithoutnull << endl;
만 작성한 파일은 "World" 만 출력

    */