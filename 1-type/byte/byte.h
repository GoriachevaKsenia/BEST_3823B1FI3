unsigned char max_byte(unsigned short number) {
    unsigned short a, b;
    a = number & 255;
    number = number - a;
    b = number / 256;
    if (a > b)
    return a;
    else
    return b; // Not implementation
}
