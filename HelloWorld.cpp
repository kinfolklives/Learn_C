#include <iostream>  //import 와 유사, <> : 표준라이브러리 , " " : 내가 만든 것

//short comment
/* 
long comment
*/

using namespace std;
int main()
{
    cout<<"Hello World!\n";
    return 0;
}

/*
\n 을 삭제하고 실행하면 줄바꿈없이 실행된다. 

1. 삭제전 : 
[/home/rapa01/Documents/Develop/Learning_C] ./a.out
Hello World! 

2. 삭제후 : 
[/home/rapa01/Documents/Develop/Learning_C] ./a.out
Hello World![/home/rapa01/Documents/Develop/Learning_C]_

*/