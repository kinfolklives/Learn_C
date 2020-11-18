// 화면에 글자를 디스플레이할때
#include<curses.h>

int main(){
    WINDOW *w;
    w= initscr();
    curs_set(0);   // invisible cursor

}