#include<stdio.h>
#include<stdlib.h>

typedef struct boxes{
    int l;
    int w;
    int h;
}b;

int volume(b b1){
    int result;
    result = b1.h*b1.l*b1.w;

    return result;

}

int main(){

    int n;
    int result;
    printf("Enter the value of n \n");
    scanf("%d",&n);

    // b boxes[n];
    // b *ptr;
    // ptr =&boxes[n];
    b *boxes =malloc(n * sizeof(boxes));

    for(int i =0;i<n;i++){
        printf("The value of the height of %d box is \n",i+1);
        scanf("%d",&boxes[i].h);

        printf("The value of the width of %d box is \n",i+1);
        scanf("%d",&boxes[i].w);

        printf("The value of the lenght of %d box is \n",i+1);
        scanf("%d",&boxes[i].l);
    }

    for(int j =0;j<n;j++){

        result = volume(boxes[j]);

        if(boxes[j].h<41){
            printf("%d \n",result);
        }

    }
    
    return 0;

    free(boxes);
}