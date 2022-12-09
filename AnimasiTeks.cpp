#include <ncurses/ncurses.h>
#include <windows.h>
using namespace std;

int main(){
	initscr();
	
	start_color();
	init_pair(1, COLOR_BLACK, COLOR_YELLOW);
	init_pair(2, COLOR_RED, COLOR_CYAN);
	
	attron (COLOR_PAIR(1));
	mvprintw(1,1, "Mukti");
	refresh();
	Sleep(1000);
	attroff (COLOR_PAIR(1));
	
	attron (COLOR_PAIR(2));
	mvprintw(2,1, "Prabowo");
	refresh();
	Sleep(1000);
	attroff (COLOR_PAIR(2));
	
	getch();
	endwin();
}

