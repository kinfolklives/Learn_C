#include"under/FunctionOther03.cpp"
extern int sum(int first, int second);

int sum(int first, int second);
int main(){
    // int first = 100, second = 200, third = 300, result;
    int first, second, third, result;
    cout << "input first: ";
    cin >> first;

    cout << "input second: ";
    cin >> second;

    cout << "input third: ";
    cin >> third;

    result = sum(first, second);
    cout << "Total value is:" << result << endl;
    cout << "Total value is:" << sum(second, third) << endl;
    return 0;
}

