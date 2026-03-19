#include<stdio.h>
void main(){
    int arr[5] = {3,5,2,7,1};
    for(int i=0; i<5; i++){ // traditional for loop
        printf("%d", arr[i]);
    }

    // For Each Loop - advanced for
    // Mostly used for collections like arrays
    // for(int i : arr){  // we will use this in C++
    //     printf("%d", arr[i]);
    // }
}