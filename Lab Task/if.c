#include <stdio.h>
int main(){

float sales,basic=10000,Da,bonus,commission,gross;
printf("Enetr a amount:");
scanf("%f",&sales);
Da = 0.65 * basic;
if(sales>=100000){
    bonus = 10000;
    commission = 0.10*sales;
    }else{
    bonus = 2000;
    commission = 0.05*sales;
}
gross= basic +Da+ bonus +commission;
printf("Gross salary= %.2f\n",gross);

  return 0;
} 
