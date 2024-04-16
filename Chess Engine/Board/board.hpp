#pragma once 
#include<iostream>
#include<fstream>
#include<string>
#include"Pawn.h"
#include"Rook.h"
#include"Bishop.h"
#include"King.h"
#include"Knight.h"
#include"Queen.h"
#include"EmptyCell.h"
#include<vector>
#include<iterator>


class board
{
char player = 'W';
bool makemove(int x1, int y1, int x2, int y2);
void printboard();
void w_file(string filename);

public:
    	Board();
        ~Board();

        char pieceIdentity(int i, int j, char c);
        bool hasMoved(int i, int j, char c);

        bool doMove()
        void setBoard(int x, int y, char p)

        bool playgame();
        friend void showVector(vector <string> g );
        void r_file(string filename);

        Piece* boardMove[8][8]; 

}