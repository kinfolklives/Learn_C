#include"under/NameSpaceUsingOthers.cpp"
using namespace third_space;

int main(){
    third_space::func();
    funcOutside();   // namespace 밖에 있는 함수이므로, ::(scope resolution) 없이 
    return 0;
}
