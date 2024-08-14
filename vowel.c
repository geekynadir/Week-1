#include<stdio.h>
int main(){
	char c;
	printf("Enter any charecter value\n");
	scanf("%c",&c);
	if(c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
		printf("The chareter is vowel \n");
	}else{
		printf("The charecter is consonent\n");
	}
}
