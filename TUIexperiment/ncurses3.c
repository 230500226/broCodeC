#include <stdio.h>
#include <ncurses/ncurses.h>

int main(){

    initscr();

    //use ctrl c to exit
    cbreak();    

    //enable raw input (short cut keys like ctrl c without cbreak enabled will showup as ^C)
    //raw();

    //disables display of user input (but still accepts the input)
    //noecho();  

    int height, width, start_y, start_x;
    height = 10;
    width = 20;
    start_y = start_x = 1;

    WINDOW * win = newwin(height, width, start_y, start_x);
    refresh();


    char c = 'f';
    char space = ' ';

            //box(win, left right, top bottom);
    box(win, (int)c, 0);
    int left, right, top, bottom, tlcor, trcor, blcor, brcor;
    left = right = top = bottom = tlcor = trcor = blcor = brcor = 101;
        blcor = brcor = bottom = (int)space;
    wborder(win, left, right, top, bottom, tlcor, trcor, blcor, brcor);

        mvwprintw(win, 1 ,1 , "this is box");
            wrefresh(win);

    getch();

    //deallocates memory and ends ncurses
    endwin();

return 0;}