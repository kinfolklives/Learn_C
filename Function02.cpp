// 내가 만든 파일을 참조할 때 !

#include"under/FunctionOther.cpp" // 위치 및 파일명을 써준다. cpp는 실무에선 쓰지 말것(.h), "" 는 내가 만든 파일 참조할때 
extern int funcOutside();         // extern 은 생략가능 
// int funcOutside();

int i = 5;
int main(){                      // function call
    int i = funcOutside();
    cout << "return value: " << i << endl;
    cout << "Scope resolution operator: " << ::i << endl;    // :: 앞에 아무것도 없을때는 전역변수일때, ::는 특정한 범위의 변수 가져올때 사용
    return 0;
}
