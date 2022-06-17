#include <stdio.h>
#include <stdlib.h>

int main(){
    unsigned int workingHours = 0; 
    unsigned int payPerHour = 0;
    unsigned int totalPay = 0;
    double tax = 0; double tax1 = 0; double tax2 = 0; double tax3 = 0;
    double taxPercent = 0;
    printf("Total Number of Working Hours in a Week = ");
    scanf("%d", &workingHours);
    if(workingHours <= 40){
       payPerHour = 12;
       totalPay = workingHours * payPerHour;
    }
    if(workingHours > 40){
        unsigned int workingHours1 = 40;
        unsigned int payPerHour1 = 12;
        unsigned int totalPay1 = workingHours1 * payPerHour1;
        unsigned int workingHours2 = workingHours - 40;
        unsigned int payPerHour2 = 18;
        unsigned int totalPay2 = workingHours2 * payPerHour2;
        totalPay = totalPay1 + totalPay2;  
    }
    
    if(totalPay <= 300){
        taxPercent = 15.0 / 100.0;
        tax = taxPercent * totalPay;
    }
    else if(totalPay > 300 && totalPay <= 450){
        double taxPercent1 = 15.0 / 100.0;
        tax1 = taxPercent1 * 300;
        //printf("tax1 = %.0lf\n", tax1);
        double tax2 = 0;
        double Pay2 = totalPay - 300;
        double taxPercent2 = 20.0 / 100.0;
        tax2 = taxPercent2 * Pay2;
        //printf("tax2 = %.0lf\n", tax2);
        tax = tax1 + tax2;
    }
    else if(totalPay > 450){
        double taxPercent1 = 15.0 / 100.0;
        tax1 = taxPercent1 * 300;
        //printf("tax1 = %.0lf\n", tax1);
        double tax2 = 0;
        double taxPercent2 = 20.0 / 100.0;
        tax2 = taxPercent2 * 150;
        //printf("tax2 = %.0lf\n", tax2);
        double Pay3 = totalPay - 450;
        double taxPercent3 = 25.0 / 100.0;
        tax3 = taxPercent3 * Pay3;
        //printf("tax3 = %.0lf\n", tax3);
        tax = tax1 + tax2 + tax3;
    }
    printf("Total pay for %d working hours is %d dollars\n", workingHours,totalPay);
    printf("Total tax for %d dollar pay is %.0lf dollars\n", totalPay, tax);
    return 0;
}