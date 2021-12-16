// #include<stdio.h>

// int main(){
//     FILE *ptr;
//     int num;
//     printf("Enter the integer you need the table of\n");
//     scanf("%d", &num);
//     ptr = fopen("table.txt", "w");
//     for(int i=0; i<10; i++){
//         fprintf(ptr, "%d X %d = %d\n", num, i+1, num*(i+1));
//     }
//     fclose(ptr);
//     printf("Successfully generated table of %d to table.txt\n", num);
//     return 0;
// }

#include<stdio.h> 

int main(){
    FILE *ptr;
    ptr = fopen("mul.txt","w");
    int n;
    int arr[10];
    printf("Enter the number n \n");
    scanf("%d",&n);

    for(int i = 0;i<10;i++){
        arr[i] = n*(i+1);

        fprintf(ptr,"%d x %d = %d \n",n,(i+1),arr[i]);
        // fputc("done with the line \n",ptr);->wrong

    }

    fclose(ptr);
    return 0;
}

/*
fscanf cannot be used in loops so instead make use of fgetc
fprintf can be used any where
fgetc can be used ony for scanning single character 
fputc is used only for one letter character
in fputc the format will be first ('c',ptr)
rest other (ptr,.........)*/