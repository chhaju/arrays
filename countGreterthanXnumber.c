#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int x=4;
    for(int i=0; i<7; i++){
        if(x < arr[i]){
            printf("%d ",arr[i]); 
          }
         }
    return 0;
}