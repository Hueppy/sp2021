#include <stdio.h>
#include <stdlib.h>

void starline(int n){
    printf("starline\n");
    int counter = 0;
    if(n <= 0){
        printf("");
    }else{
        while (counter < n)
        {
            printf("*");
            counter +=1;
        }
    }
}

void leftpyramid(int n){
    printf("\n\nleft pyramid\n");
    if (n <= 0)
    {
        printf("");
    }else{
        for(int i = 1; i <= n; i++){
            for(int j = 0; j < i; j++){
                printf("*");
            }
            printf("\n");
        }
    }
}

void fullpyramid(int n){
    printf("\n\npyramid\n");
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= 2*n-1; j++)
        {
            if(j >= n-(i-1) && j <= n+(i-1)){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    starline(n);
    leftpyramid(n);
    fullpyramid(n);
    return EXIT_SUCCESS;
}