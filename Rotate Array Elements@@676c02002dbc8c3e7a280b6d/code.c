#include <stdio.h>
int main(){

int n;
scanf("%d", &n);
int arr[n];
int k;
for (int i=0 ; i<n ; i++ ){
    scanf ("%d", &arr[i]);

}
scanf("%d",&k);
for (int i=n-k ; i <n  ;   i++)
{
    printf("%d \n",arr[i]); 
}
for (int i=0; i<n-k ; i++)
{

     printf("%d \n",arr[i]); 
}




}