#include<stdio.h>
#include<string.h>
int main()
{
    char day[30] ="morning";
    if(strcmp(day,"morning")==0){
    printf("Good morning ");
    }
    else if(strcmp(day,"afternoon")==0){
    printf("Good afternoon! ");
    }
    else if(strcmp(day,"evening")==0){
    printf(" Good evening!");
    }
    else if(strcmp(day,"night")==0){
    printf(" Good night! ");
    }
    else {
    printf(" Good day!");
    }
 }