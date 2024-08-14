#include<stdio.h>
int main(){
	int a,n;
	printf("enter the range \n");
	scanf("%d %d",&a, &n);
	int i,j;
	for( i=a;i<=n;i++){
		int count=0;
		for( j=2;j<i;j++){
			if(i%j==0){
				count++;
				break;
			}
		}
		if(count==0){
			printf("%d  ",i);
		}
	}
}
