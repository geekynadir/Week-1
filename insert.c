  #include<stdio.h>
    int main(){
	int n,i;
	printf("Enter the size of the Array\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the values of the Array\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("The array elements are\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]); 
 }
     int val;
      printf("\nEnter the Value to be inserted \n");
      scanf("%d",&val);
      int ind;
      printf("Enter the index number \n");
      scanf("%d",&ind);
      
      for(i=n;i>=ind;i--){
      	arr[i+1]=arr[i];
      	if(i==ind)
      	arr[i]=val;
	  }
	   n+=1;
	 
 	    printf("\nThe NEW Array elements are\n");
	    for(i=0;i<n;i++){
		printf("%d ",arr[i]); 
 }
   
}
