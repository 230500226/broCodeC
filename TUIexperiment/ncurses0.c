#include <stdio.h>
#include <ncurses/ncurses.h>

int main(){

    //initalize the screen
    //sets up mem and clears screen
    initscr();

    //refreshes the screen to match memory
    refresh();

    //wait for user input, returns int val of char
    getch();

    //deallocates memory and ends ncurses
    endwin();

return 0;}