#include<stdio.h>
#include<math.h>
int main(){
	int a,b,HCF,LCM;
	printf("Enter two numbers \n");
	scanf("%d %d",&a,&b);
	int max;
	if(a>b) 	max=a;
	else   max=b;
	int i;
	for(i=max;i>=1;i--){
		if(a%i==0 && b%i==0){
			HCF=i;
			break;
		}
		
	}
		printf("The HCF of the two numbers is %d\n",HCF);
		LCM=(a*b)/HCF;
		printf("The LCM of the two numbers is %d\n",LCM);
		
}
