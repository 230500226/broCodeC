#include <stdio.h>
#include <ncurses/ncurses.h>

int main(int argc, char **argv){

    initscr();
    
    // A_NORMAL();
    // A_STANDOUT();
    // A_REVERSE();
    // A_BLINK();
    // A_DIM();
    // A_BOLD();
    // A_PROTECT();
    // A_INVIS();
    // A_ALTCHARSET();
    // A_CHARTEXT();

    attron(A_INVIS);
        printw("this is text ipson lms almsdf lmsd");
    attroff(A_INVIS);

    // COLOR_PAIR(N);
    // COLOR_BLACK
    // COLOR_RED
    // COLOR_GREEN
    // COLOR_YELLOW
    // COLOR_BLUE
    // COLOR_MAGENTA
    // COLOR_CYAN
    // COLOR_WHITE

    getch();
    endwin();
return 0;}