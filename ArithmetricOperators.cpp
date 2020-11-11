#include <iostream>  //import 와 유사
using namespace std;

int main(){
    int first = 21, second = 10, result;

    result = first % second;
    cout << "first % second of result is: " << result << endl;  // 나머지 출력 > 1

    result = first++;                                           // result = first; first = first + 1
    cout << "first++ of result is: " << result << endl;         // result = first + 1 = 22, 그러나 보여지는 것: 21 (저장된 값 22)

    result = first--;                                           // result = first; first = first - 1 
    cout << "first-- of result is: " << result << endl;         // 보여지는것은: 22 / 저장된 값: 21

    result = ++first;                                           // ####### 추천!!! 
    cout << "++first of result is: " << result << endl;         // 보여지는 것과 실제가 같다 : 22

    first = 21;
    result -= first;                                            // result = result - first
    cout << "-= Operator, Value of result: " << result << endl; // 마지막 result 값에서 first 를 뺀값 >> 1

    result *= first;                                            // result = result * first 
    cout << "*= Operator, Value of result: " << result << endl; // 마지막 result 값에서 first 를 곱한값 >> 21 

    result /= first;                                             // result = result / first 
    cout << "/= Operator, Value of result: " << result << endl; // 마지막 result 값에서 first 를 나눈 몫 >> 1

    return 0;
}

/*
증감연산자
++ : 변수에 +1  (전위연산자)            >> 변수 += 1 과 같은 뜻!
-- : 변수에 -1  (후위연산자) --- 추천!  >> 변수 -= 1 과 같은 뜻!

*/