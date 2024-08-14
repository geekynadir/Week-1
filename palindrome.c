#include<stdio.h>
int main(){
             int a,b=0,r, ori;
             printf("Enter any number\n");
             scanf("%d",&a);
             ori=a;
             printf("The Entered number is %d\n",a);
             while(a!=0){
                r=a%10;
                b=b*10+r;
                a=a/10;
             }
             if(ori == b){
                          printf("The entered number is palindrome ");
             }
             else{
                          printf("The number is not palindrome ");
             }

}
