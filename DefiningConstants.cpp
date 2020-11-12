// # define indentifier value      : 상수선언 방법 1
// const type variable = value;    : 상수선언 방법 2

# include <iostream>  
using namespace std;

# define LENGTH 10       // 상수선언 방법 1
# define NEWLINE '\n'
int main(){
    const int WIDTH = 5; // 상수선언 방법 2
    // LENGTH = 20;      // 상수 선언 했으므로 에러  --> 주석처리
    // WIDTH = 10;       // 상수 선언 했으므로 에러  --> 주석처리 
    int area;
    area = LENGTH * WIDTH;
    cout << area;
    cout << NEWLINE;
    return 0;
} 