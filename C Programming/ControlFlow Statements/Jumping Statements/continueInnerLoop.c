#include<stdio.h>
void main(){
    for(int i=1; i<=3; i++){
        for(int j=1; j<=3; j++){
            if(i==2 && j==2){
                continue;
            }
            printf("%d %d\n", i,j);
        }
    }
}