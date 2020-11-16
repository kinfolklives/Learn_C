#include<iostream>
#include<cstring> 

using namespace std;

struct MainCharacter{
    char title[50];
    char display[10];
    int position(int x, int y);
    char survival[10];
};

struct Opposite{
    char title[50];
    char display[10];
    int position(int x, int y); 
    int survival;
    int power;
};

struct Opposites{
    struct Opposite OppositeList[10];
    void print_oppoistelist() {
        for (int i = 0; i<5; i++){
        cout << "Opposite's title: " << OppositeList[i].title << endl;
    }
    };
};


int main(){
    int x, y, p ;
    struct MainCharacter Main01;
    strcpy(Main01.title, "Choi");
    strcpy(Main01.display, "@");
    strcpy(Main01.survival, "0");

    // strcpy(Main01.position(4,3));

    cout << "Maincharacter01's title: " << Main01.title << endl;
    cout << "Maincharacter01's display: " << Main01.display << endl;
    // cout << "MainCharacter01's position: " << p << endl;
    
   
    if( Main01.survival == '0'){
        cout << "MainCharacter01's survived" << endl;
    }else{cout << "MainCharacter01's not survived" << endl; }; 
    
    cout << "----------- Opposite characters --------------"<< endl;
    struct Opposites Opposite;
    strcpy(Opposite.OppositeList[0].title, "Opp01");
    strcpy(Opposite.OppositeList[1].title, "Opp02");
    strcpy(Opposite.OppositeList[2].title, "Opp03");
    strcpy(Opposite.OppositeList[3].title, "Opp04");
    strcpy(Opposite.OppositeList[4].title, "Opp05");
  
    Opposite.print_oppoistelist();
    
    return 0;
};