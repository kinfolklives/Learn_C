#include<iostream>
#include<cstring> 

using namespace std;

# define ROWS 15
# define COLS 60

// 주인공 정보
struct MainCharacter{
    int x;
    int y;
    int survival;   // 1: survived
    char display;
};

// 상대의 정보
struct Opposite{
    int x;
    int y;
    int survival;
    char display;
    int power;
};

// 초기값 설정
struct MainCharacter mainChar = {10, 10, 1, '@'};
struct Opposite opposite[5] = {
    {1,1,1,'&'},
    {10,20,1,'#'},
    {7,40,1,'%'},
    {16,18,1,'&'},
    {37,14,1,'#'},
};

void DisplayInfo();

int main(){
    DisplayInfo();
    return 0;
}

void DisplayInfo(){
    cout << "[주인공]" <<endl;
    cout << "위치: " << mainChar.x << "," << mainChar.y << endl;
    cout << "표시: " << mainChar.display << endl;

    int i = 0;
    for (i = 0; i<5; i++){
        cout << "[상대 "<<i<<"]" << endl;
        cout << "위치: " << opposite[i].x << "," << opposite[i].y << endl;
        cout << "표시: " << opposite[i].display << endl;
    }
}

