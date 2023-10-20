int reverse(int number) {
    int a, b, c, d, numberrev;
    a = number / 1000;
    b = (number % 1000) / 100;
    c = (number % 100) / 10;
    d = number % 10;
    numberrev = d * 1000 + c * 100 + b * 10 + a;
    return numberrev; // Not implementation
}

double decomposition(int number) {
    double a, b, c, d, h;
    a = (number / 1000) * 1000;
    b = ((number % 1000) / 100) * 100;
    c = ((number % 100) / 10) * 10;
    d = number % 10;
    h = 4.0 / ( (1.0 / a) + (1.0 / b) + (1.0 / c) + (1.0 / d));
    return h; // Not implementation
}

int append(int number, int start, int end) {
    int startap, numberap, starnumend;
    startap = start * 100000;  
    numberap = number * 10;
    if (startap > 0)
    starnumend = startap + numberap + end;
    else
    starnumend = startap - numberap - end;
    return starnumend; // Not implementation
}
