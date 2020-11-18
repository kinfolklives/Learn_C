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

int main(){
    char char_row;
    char char_column;

    DisplayInfo();
    Input_Row_Column();
    Input(char_row, char_column, **ptr_matrix);
    Output(**ptr_matrix);

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

void Input_Row_Column(){

    char char_row = '*', char_column = '!';

    char **ptr_matrix = new char * [ROWS];

    for (int i =0; i<ROWS; i++)
        ptr_matrix[i] = new char[COLS];

    cout << "Matrix Size: " << ROWS*COLS << endl;
}

void Input(char char_row, char char_column, char **ptr_matrix){
    // 입력
    for (int i = 0; i < ROWS; i++)
     for (int j = 0; j < COLS; j++){
        ptr_matrix[i][j] = ' ';
        if(j == 2){
            ptr_matrix[i][j] = char_column;
        }
        if(i == 0|| j == 0 || i == ROWS-1 || j == COLS-1){
            ptr_matrix[i][j] = char_row;
        }
    }
    delete[] ptr_matrix;
}

void Output(char **ptr_matrix){
    //출력 - ptr_matrix[i][j] 의 값을 출력
    for (int i = 0; i < ROWS; i++){
     for (int j = 0; j < COLS; j++){
        cout << ptr_matrix[i][j] << ' '; // 한글자일때는 ' '(single) 쓸것
    }
        cout << endl; // for 문 밖에서 줄바꿈 해주기.
    }
}