#include<stdio.h>
int main(){
	int year;
	printf("Enter any year\n");
	scanf("%d", &year);
	
	if(year%4==0 && year%100!=0  || year%400==0) {
		printf("The entered year is leap year");
	}
	else{
		printf("The year is not a leap year");
	}
}
