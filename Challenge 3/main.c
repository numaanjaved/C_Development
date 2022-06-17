#include <stdio.h>
int main(){
    long long int minutes = 0; double minutes_per_hour = 60; 
    double hours_per_day = 24; double days_per_year = 365;
    double minutes_per_day = minutes_per_hour * hours_per_day;
    double minutes_per_year = minutes_per_day * days_per_year; 
    printf("Enter the Number of Minutes you want to convert : ");
    scanf("%lld", &minutes);
    double years = minutes / minutes_per_year;
    double days = minutes / minutes_per_day;
    printf("The time you entered is %lld minutes and is approximately %lf years and approximately %lf days", minutes, years, days);
    return 0;
}