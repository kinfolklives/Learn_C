#include<curses.h>

int main(){
    WINDOW *w;
    w= initscr();
    curs_set(0);   // invisible cursor
    // start main
    printw("Hello Ncurse!");

    getch();    // wait keyboard  >> char ch; cin>> ch; 와 같은 의미 

    // end main
    endwin();
    return 0;
}


//to_string(23) : 23이라는　숫자를　string으로　변환
// y(line) , x(column)  순서　유념！
// 여러개　：string , 한개：　char
//str_var.c_str() : c_str() - convert string into const