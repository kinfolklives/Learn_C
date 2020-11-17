#include<iostream>
using namespace std;

int main(){
    int row, column;
    char char_row = '~', char_column = '!';

    cout << "Enter Row and Column: " << endl << "Row: "; 
    cin >> row;
    cout << "Column: ";
    cin >> column; 
    
    char **ptr_matrix = new char * [row];
    
    for (int i =0; i<row; i++)
        ptr_matrix[i] = new char[column];

    cout << "Matrix Size: " << row*column << endl;

    // 입력 
    for (int i = 0; i < row; i++)
     for (int j = 0; j < column; j++){
        ptr_matrix[i][j] = ' ';
        if(j == 2){
            ptr_matrix[i][j] = char_column;
        }
        if(i == 0|| j == 0 || i == row-1 || j == column-1){
            ptr_matrix[i][j] = char_row;
        }
    }

    //출력 - ptr_matrix[i][j] 의 값을 출력
    for (int i = 0; i < row; i++){
     for (int j = 0; j < column; j++){
        cout << ptr_matrix[i][j] << ' '; // 한글자일때는 ' '(single) 쓸것  
    }
        cout << endl; // for 문 밖에서 줄바꿈 해주기. 
    }

    delete[] ptr_matrix;
    return 0;
    
}

/* 
1. int **p;   함수를 선언한다 (2차원, 값이 두개 필요)
2. p = new int * [ ];   값을 지정 
3. int **p = new int * [];   
*/