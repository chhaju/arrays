#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int sumEven = 0; // 1+3+5+7=16
    int sumOdd = 0; //2+4+6=12
    for(int i=0; i<7; i++){
        if(i%2==0){
            sumEven += arr[i];
        }
        else{
            sumOdd += arr[i];
        }
    }
    printf("%d",sumEven-sumOdd); //16-12=4
    return 0;
}