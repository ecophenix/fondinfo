#include "slitherlink.h"

using namespace std;

Slitherlink::Slitherlink()
{
    cols_ = 11;
    rows_ = 11;
    board_ = {
        {'+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+'},
        {' ', ' ', ' ', '3', ' ', '2', ' ', '2', ' ', ' ', ' '},
        {'+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+'},
        {' ', ' ', ' ', '0', ' ', ' ', ' ', ' ', ' ', '2', ' '},
        {'+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+'},
        {' ', ' ', ' ', '2', ' ', ' ', ' ', ' ', ' ', '1', ' '},
        {'+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+'},
        {' ', ' ', ' ', '0', ' ', ' ', ' ', ' ', ' ', '2', ' '},
        {'+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+'},
        {' ', ' ', ' ', '2', ' ', ' ', ' ', '2', ' ', ' ', ' '},
        {'+', ' ', '+', ' ', '+', ' ', '+', ' ', '+', ' ', '+'} };

}

void Slitherlink::play_at(int x, int y)
{
    /* ADD YOUR CODE HERE */
}

std::string Slitherlink::get_val(int x, int y) const
{
    // conversion from char to string
    // char val = '5';  /* just for example ... */
    // string txt = string(1, val);

    /* ADD YOUR CODE HERE */
    return string(1, board_[y][x]);
}

bool Slitherlink::finished() const
{
    // conversion from char to int
    // char val = '5';  /* just for example ... */
    // int num = val - '0';

    /* ADD YOUR CODE HERE */
    return false;
}



//typedef std::complex<int> Coord;

//std::vector<Coord> moves = {{0, -1}, {1, 0}, {0, 1}, {-1, 0}};

//int Slitherlink::count_loop(Coord pos, Coord dir,
//                            Coord stop, int lines) const {
//    if (pos == stop && lines > 0) return lines;
//    for (auto move : moves) {
//        if (move != -dir && check_line(pos + move)) {
//            return count_loop(pos + 2 * move, move,
//                              stop, lines + 1);  // tail recursion
//        }
//    }
//}

//int Slitherlink::count_loop_iter(Coord pos, Coord dir,
//                                 Coord stop, int lines) const {
//    while (pos != stop || lines == 0) {
//        for (auto move : moves) {
//            if (move != -dir && check_line(pos + move)) {
//                pos += 2 * move; dir = move; lines += 1;
//                break;
//            }
//        }
//    }
//    return lines;
//}
