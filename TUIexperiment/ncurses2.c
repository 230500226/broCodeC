#include <stdio.h>
#include <ncurses/ncurses.h>

int main(){

    //initalize the screen
    //sets up mem and clears screen
    initscr();

    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 10;

    WINDOW * win = newwin(height, width, start_y, start_x);
    refresh();

    box(win, 0, 0);
        mvwprintw(win, 1 ,1 , "this is box");
            wrefresh(win);

    getch();

    //deallocates memory and ends ncurses
    endwin();

return 0;}