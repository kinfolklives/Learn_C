#include"under/namespaceOther.cpp" //프로그래밍규모가 커지면 분할, 상속해서 사용하게 되므로 namespace 사용하게 됨.
using namespace std;
using namespace first_space;

int main(){                           // in the case of the same function names, 
    func();                           // inside first_space   because of "using namespace first_space"
    second_space::func();             // inside second_space , specified by :: (scope resolution)
    return 0;
}

/*
[ namespace 참조 할 때 ]

방법 1.
#include"under/namespaceOther.cpp"
using namespace std; 
using namespace first_space;

int main(){
    func();
    second_space::func();
    return 0;
}

방법 2.
#include"under/namespaceOther.cpp"
int main(){
    first_space::func();
    second_space::func();
    return 0;
}
*/