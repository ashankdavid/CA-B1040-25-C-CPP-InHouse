#include<stdio.h>

void function(){
    int x = 10;
    static int y = 10;
    printf("%d %d\n", x, y);
    x++;
    y++;
}

void main(){
    function();
    function();
    function();
    function();
    function();
    function();
}