#include<stdio.h>
#include<limits.h>
int main(){
    int arr[8] = {9,2,11,13,3,4,35,7};
    int max = INT_MIN; //sabse chhota number
    int smax = INT_MIN;
    //for(int i=0; i<8;i++){
    //   if(max<arr[i]){
    //       max = arr[i];
    //    }
    //}
    //max = 4;
    //for(int i=0; i<8;i++){
    //    if(arr[i]!=max && smax<arr[i]){
    //        smax = arr[i];
    //   }
    //}
    for(int i=0; i<8;i++){
       if(max<arr[i]){
        smax = max; //smax is now previous max
           max = arr[i]; //max is now a new max
       }
       else if(smax<arr[i] && max!=arr[i]){
        smax = arr[i];
       }
    }
    printf("%d",smax);2;
    return 0;
}