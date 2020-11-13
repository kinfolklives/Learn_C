#include"under/namespaceOther.cpp"
// using namespace first_space;
// using namespace second_space;

int main(){                           // in the case of the same function names, 
    first_space::func();                           // inside first_space   because of "using namespace first_space"
    second_space::func();             // inside second_space , specified by :: (scope resolution)
    return 0;
}