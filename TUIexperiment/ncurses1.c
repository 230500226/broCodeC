#include <stdio.h>
#include <ncurses/ncurses.h>

int main(){

    //initalize the screen
    //sets up mem and clears screen
    initscr();

    int y, x;
    y=x=10;

    //moves cursor to specified location
    move(y, x);

    //prints a string (const char *) to a window
    printw("Hello world");

    //refreshes the screen to match memory
    refresh();

    //wait for user input, returns int val of char
    int c = getch();

    //refreshes the screen to match memory
    refresh();
    //clears the screen
    clear();
    
    // move(0,0);
    // printw("%d",c);
    // mvprint does the same as above

    mvprintw(0,0, "%d", c);

    getch();



    //deallocates memory and ends ncurses
    endwin();

return 0;}