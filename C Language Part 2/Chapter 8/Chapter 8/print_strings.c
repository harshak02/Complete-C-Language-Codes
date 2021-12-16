#include <stdio.h>

int main()
{
    // char str[] = {'H', 'a', 'r', 'r', 'y', '\0'};
    char str [] = "harry";
    char *ptr = str;
    int n;

    // while (*ptr != '\0')
    // {
    //     printf("%c", *ptr);
    //     ptr++; 
        // this *ptr is mainly used in STL list and while loop in strings

        // int j = 0;
        // while(j<6){
        //     if(*ptr!='\0'){
        //         printf("%c",*(ptr+j));
        //         j++;
        //     }
        // }

        //     }

        for(int i =0;i<6;i++){

            if(*ptr!='\0'){
                printf("%c",*(ptr+i));
                }

            }

        return 0;
    }



    //if we use pointre in the string problems then use in the whole code as *ptr;

    // but if we use in the structures and file i/o then use as ptr in the whole code;
