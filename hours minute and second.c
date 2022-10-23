#include<stdio.h>
// convert a given integer (in seconds) to hours, minutes and seconds.
int main () {
    int hours, minutes, seconds, sec;

    printf("Type your Seconds : ");
    scanf("%d" , &seconds);

    hours   = seconds / 3600;
    seconds = seconds % 3600;

    minutes = seconds / 60;
    seconds = seconds % 60;

    seconds = seconds % 60;


printf("There are HH:MM:SS %d:%d:%d\n\n" , hours, minutes, seconds);

}