#include<math.h>
int get_years(int seconds) {
    int k, years;
    k = seconds / 32140800;
    years = 1970 + k;
    return years; // Not implementation
}

int get_month(int seconds) {
    int years, month;
    years = (seconds / 32140800) * 32140800;
    month = (seconds - years) / 2678400;
    return month; // Not implementation
}

int get_day(int seconds) {
    int years, month, day;
    years = (seconds / 32140800) * 32140800;
    month = ((seconds - years) / 2678400) * 2678400;
    day = (seconds - years - month) / 86400;
    return day; // Not implementation
}

int get_hours(int seconds) {
    int years, month, day, hours;
    years = (seconds / 32140800) * 32140800;
    month = ((seconds - years) / 2678400) * 2678400;
    day = ((seconds - years - month) / 86400) * 86400;
    hours = (seconds - years - month - day) / 3600;
    return hours; // Not implementation
}

int get_minutes(int seconds) {
    int years, month, day, hours, minutes;
    years = (seconds / 32140800) * 32140800;
    month = ((seconds - years) / 2678400) * 2678400;
    day = ((seconds - years - month) / 86400) * 86400;
    hours = ((seconds - years - month - day) / 3600) * 3600;
    minutes = (seconds - years - month - day - hours) / 60;
    return minutes; // Not implementation
}

int get_seconds(int seconds) {
     int years, month, day, hours, minutes, second;
    years = (seconds / 32140800) * 32140800;
    month = ((seconds - years) / 2678400) * 2678400;
    day = ((seconds - years - month) / 86400) * 86400;
    hours = ((seconds - years - month - day) / 3600) * 3600;
    minutes = ((seconds - years - month - day - hours) / 60) * 60;
    second = seconds - years - month - day - hours - minutes;
    return second; // Not implementation
}


int get_magical_value(int seconds) {
    int value, value1, value2, value3;
    int year = get_years(seconds);
    int month = get_month(seconds);
    int day = get_day(seconds);
    int hours = get_hours(seconds);
    int minutes = get_minutes(seconds);
    int second = get_seconds(seconds);
    //(\frac{год + месяц}{1 + день + секунды})^2 + \frac{минуты + \frac{минуты}{1 + часы}}{1 + часы}
    value1 = pow(((year + month)/(1 + day + second)), 2);
    value2 = ((minutes)/(1 + hours));
    value3 = ((minutes + value2)/(1 + hours));
    value = value1 + value3;
    return value;  // Not implementation
}