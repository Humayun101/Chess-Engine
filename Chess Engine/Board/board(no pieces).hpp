#ifndef board_hpp
#define board_hpp

#include<iostream>
#include<cassert>
#include<stack>
#include<string>
#include<array>

static constexpr int BOARD_AERA = 8;

 namespace chess{

enum piecetype {KING, QUEEN, ROOK, KNIGHT, BISHOP, PAWN, NOT, NOT1};
enum piececolor {BLACK, WHITE, GREY, ASSIGNED};
enum movesval {OutOfBound, Illegal, PieceMismatch, LegalMove, BlockedPath, RuleViolation};
enum boxstate {FILLED, EMPTY};


struct Vec2i {
int x; 
int y;
};
struct ChessPiece{
    piecetype type;
    piececolor color;
    Vec2i position; 
};
struct ChessMove
{
        Vec2i from;
        Vec2i to;
};
struct Cell
{
    boxstate state;
    ChessPiece *piece;
};

}
#endif







