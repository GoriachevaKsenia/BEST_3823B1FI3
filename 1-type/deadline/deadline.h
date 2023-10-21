#include<math.h>
int get_score(short score, int start, int stop, int now) {
    double get_score, time_score;
    for (;now <= start;)
    {
        get_score = score;
        goto here;
    }
    for (;(start < now) & (now < stop);)
    {
        time_score = floor((((double)(score) / 2) / ((double)(stop - start))) * 100);
        get_score = round((double)(score) - (double)(now - start) * (time_score / 100));
        goto here;
    }
    for (;now >= stop;)
    {
        get_score = ceil((double)(score) / 2);
        goto here;
    }
    here: return get_score; // Not implementation
}
