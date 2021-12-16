#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int num;
    scanf("%d",&num);
    
    char names[100][num];
    
    for(int i =0;i<num;i++){
        scanf("%s",names[i]);
        int temp;
        temp = strlen(names[i]);
        
        for (int j=0;j<temp;j++){
            if(j%2==0){
                printf("%c",names[i][j]);
            }
            
        printf(" ");

        }
            
        for (int k=0;k<temp;k++){
            if(k%2!=0){
                printf("%c",names[i][k]);
            }
            
        }
        
        printf("\n");
    
    }
       
    return 0;
    
}
