#include<stdio.h>
void checkPrimeNubmer();
int main(){
    int n, flag;
    printf("enter a positive integer: ");
    scanf("%d",&n);
    //n is passed tothe checkprimeNumber() function
    //the returned value is assigned to the flag variable
    flag=checkprimeNumber(n);
    if(flag==1)
        printf("%d is not a prime number.",n);
    else
        printf("%d is a prime number.",n);
    return 0;
}
//int is returned from the function
int checkprimeNumber(int n){
    //0 and 1 are not prime numbers
    if(n==0||n==1)
    return 1;

    int i;
    for(i==2; i<=n/2; ++i){
        if(n%i==0)
        return i;
        }

        return 0;

}
