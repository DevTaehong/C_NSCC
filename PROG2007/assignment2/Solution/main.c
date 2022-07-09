#include <stdio.h>

double convert (double *h, double *m, double *s){
    double save = *h;
    double remain;

    *h = (double)((int)*h);

    remain = save-*h;
    remain *= 60.0;
    *m = (double)((int)remain);

    remain = remain-*m;
    remain *= 60.0;
    *s = (double)((int)remain);

    return save;
}

int main (int ac, char**av){
    double hours=6.37;
    double minutes=0.0;
    double seconds=0.0;
    double ret;

    ret = convert (&hours, &minutes, &seconds);
    printf ("%.3lf hours is %.0lf hours, %.0lf minutes, %.0lf seconds",
        ret, hours, minutes, seconds);
}

