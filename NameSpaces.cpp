#include<iostream>
using namespace std;

namespace first_space{
    void func(){
        cout << "Inside first_space" << endl;
    }
}

namespace second_space {
    void func(){
        cout << "Inside second_space" << endl;
    }
}

using namespace first_space;
int main(){                           // in the case of the same function names, 
    func();                           // inside first_space   because of "using namespace first_space"
    second_space::func();             // inside second_space , specified by :: (scope resolution)
    return 0;
}