#include <stdio.h>  
int main() { 
    int marks[5],i,sum=0; 
     
    for(i=0;i<=4;i=i+1) { 
        printf("Enter marks of student-%d :",i+1); 
        scanf("%d",&marks[i]); 
    } 
 
    for(i=0,sum;i<=4;i=i+1) { 
        sum=sum+marks[i]; 
    } 
    printf("\nSum of mark's of all student's is %d",sum); 
} 