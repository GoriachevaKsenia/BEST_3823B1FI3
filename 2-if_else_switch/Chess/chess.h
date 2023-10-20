int chess_rook(char a, int b, char c, int d){
    if (((a == 'A') || (a == 'B') || (a == 'C') || (a == 'D') || (a == 'E') || (a == 'F') || (a == 'G') || (a == 'H')) & ((c == 'A') || (c == 'B') || (c == 'C') || (c == 'D') || (c == 'E') || (c == 'F') || (c == 'G') || (c == 'H')) & (b <= 8) & (d <= 8))
    {
        if (((a != c) & (b == d)) || ((a == c) & (b != d)))
        return 1;
        else
        return 0;
    }
} 