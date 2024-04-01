#include<stdio.h>
int main(){
    int arr[4] = {8,4,3,4};
    int pro = 1;
    for(int i=0;i<4;i++){
        pro = pro * arr[i];
    }
    printf("%d",pro);
    return 0;
}
