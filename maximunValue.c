#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {9,2,11,13,3,4,35,7};
    int max = INT_MIN; // sabse chhota number
    for(int i=0; i<8;i++){
        if(max<arr[i]){
            max = arr[i];
    }
    }
    printf("%d",max);
    return 0;
}
