int get_time(long long angle) {
    int hours, minutes, time;
    hours = (angle / 6 / 60) ;
    minutes = angle / 6 - hours * 60; 
    time = hours * 100 + minutes;
    return time; // Not implementation
}