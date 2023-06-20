#include <stdio.h>
#include <ncurses/ncurses.h>

int main(){

    //initalize the screen
    //sets up mem and clears screen
    initscr();

    //prints a string (const char *) to a window
    printw("Hello world");

    //refreshes the screen to match memory
    refresh();

    //wait for user input, returns int val of char
    int c = getch();

    printw("%d",c);

    getch();

    //deallocates memory and ends ncurses
    endwin();

return 0;}