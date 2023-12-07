#ifndef lib_h
#define lib_h

#include <Windows.h>
#include <iostream>


void setcursor(bool visible, DWORD size); 
void gotoxy(int x, int y);

void show_border(int x, int y);
#endif