/*
SYNTAX:

while(condition){
    statement(s);
}

*/

#include<iostream>
using namespace std;

int funcWhile();

int main(){
    funcWhile();
    return 0;
}

int funcWhile(){
    int first = 10;
    while(first < 20){
        cout << "value of first: " << first << endl;
        ++first;
    }
    return 0;
}

/*
python 에서는 
i = i + 1 
i += 1

C++ 에서는 ++i

break >> for, while 에서만 쓴다, 
: break 는 자신의 블럭에서만 걸린다 
*/