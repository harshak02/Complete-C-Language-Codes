#include<stdio.h> 

int main(){
    
    FILE *ptr;
    ptr = fopen("getc.txt","r");
    char c;

    // while(c!=EOF){

    //     fflush(stdin);
    //     c = fgetc(ptr);
    //     printf("The letter in word is %c\n",c);

    // }

    while(c!=EOF){
        fflush(stdin);//char c there means no need to use fflush(stdin) also
        c = fgetc(ptr);
        printf("%c",c);
    }

    // while(c!=EOF){
        
    //     fflush(stdin);// combo of while and EOF pls dont use fscanf
    //     instead use char c = fgetc(ptr);
    //     fscanf(ptr,"%c",&c);//dont use if we are reapeting;
    //     printf("%c",c);

    // }

    // while(c!=EOF){

    //     fflush(stdin);// combo of while and EOF pls dont use fscanf
    //     instead use char c = fgetc(ptr);
    //     fscanf(ptr,"%c",&c);
    //     printf("The letter in word is %c\n",c);// dont use if we are reapeting;

    // }

    fclose(ptr);

    return 0;
}
