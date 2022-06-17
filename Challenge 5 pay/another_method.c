#include <stdio.h>
#include <stdlib.h>
#define PayPerHour 12
#define OverTimePay 18
#define WorkingHours 40
#define Tax_300 0.15
#define Tax_150 0.20
#define Tax_450 0.25

int main(){
    unsigned int workingHours = 0; 
    unsigned int payPerHour = 0;
    unsigned int totalPay = 0;
    double tax = 0; double tax1 = 0; double tax2 = 0; double tax3 = 0;
    double taxPercent = 0;
    printf("Total Number of Working Hours in a Week = ");
    scanf("%d", &workingHours);
    if(workingHours <= 40){
       totalPay = workingHours * PayPerHour;
    }
    if(workingHours > 40){
        unsigned int totalPay1 = WorkingHours * PayPerHour;
        unsigned int workingHours2 = workingHours - WorkingHours;
        unsigned int totalPay2 = workingHours2 * OverTimePay;
        totalPay = totalPay1 + totalPay2;  
    }
    
    if(totalPay <= 300){
        tax = Tax_300 * totalPay;
    }
    else if(totalPay > 300 && totalPay <= 450){
        tax1 = Tax_300 * 300;
        //printf("tax1 = %.0lf\n", tax1);
        double Pay2 = totalPay - 300;

        tax2 = Tax_150 * Pay2;
        //printf("tax2 = %.0lf\n", tax2);
        tax = tax1 + tax2;
    }
    else if(totalPay > 450){
        tax1 = Tax_300 * 300;
        //printf("tax1 = %.0lf\n", tax1);
        tax2 = Tax_150 * 150;
        //printf("tax2 = %.0lf\n", tax2);
        double Pay3 = totalPay - 450;
        tax3 = Tax_450 * Pay3;
        //printf("tax3 = %.0lf\n", tax3);
        tax = tax1 + tax2 + tax3;
    }
    printf("Total pay for %d working hours is %d dollars\n", workingHours,totalPay);
    printf("Total tax for %d dollar pay is %.0lf dollars\n", totalPay, tax);
    return 0;
}