#include<iostream>
using namespace std;

#include<string>
int main(){
    string str1 = "Hello", str2 = "World" , str3;
    // int i = 3 
    int len;
    str3 = str1;   // copy str1 into str3
    cout << "str3: " << str3 << endl;
    // str3 : Hello
    // str3 = str1 + i;    // 타입이 다르면 concatenation 불가 
    str3 = str1 + str2 ;
    cout << "str1 + str2 : " << str3 << endl;
    // str1 + str2 : HelloWorld
    len = str3.size();  // total length of str3 after concatenation
    cout << "str3.size(): " << len << endl;
    // str3.size() : 10
    return 0;

}