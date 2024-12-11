#include<stdio.h> 
#include<stdlib.h> 
int main()
{
int n= 4,i,j,k;

int A [4][4]={{1, 2, 3, 4},{5, 6, 7, 8},{9, 10, 11, 12},{13, 14, 15, 16}}; 

printf("Original matrix:\n");

for (i = 0 ; i<n; i++) {
 
 for ( j = 0 ;j<n; j++) {

 printf("%d\t ", A [i][j]); 
} 
printf("\n");
} 


for(i = 1 ; i<n; i++) {

for (j=0; j<i+1; j++) { 
k=A[i][j];
A[i][j]= A[j][i];
A[j][i] =k;
}
} 

printf ("afrte chainge: \n");

for (i = 0 ; i<n; i++) {
for ( j = 0 ;j<n; j++) {
printf("%d\t", A[i][j]);
} 
printf("\n");
} 
return 0;
} 
