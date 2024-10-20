#include <stdio.h>

int main() {
   int key,n,temp=0;
   
//For taking the size of an array
   printf("Enter the size of array: ");
   scanf("%d",&n);
   
//declaration of array
int arr[n];

//Taking input in array through loops

printf("Enter element\n");
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

//Printing of array
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}

//Asking for element to searching
printf("\nEnter key to search: ");
scanf("%d",&key);

//Searching Algo
for(int i=0;i<n;i++){
    if(arr[i]==key){
      printf("Key found at position %d",i);//key found
    }
}
    return 0;
}
