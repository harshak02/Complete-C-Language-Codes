#include<stdio.h> 
#include<string.h>

void lex(int n, char names[n][100]){

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){

            if(strcmp(names[i],names[j])>0){
                char temp[100];
                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);
            }
        }
    }
}

int main(){
    int n;

    printf("Enter the number of names\n");
    scanf("%d",&n);

    char names[n][100];

    for(int i =0;i<n;i++){
        printf("Enter the name%d :\n",i+1);
        scanf("%s",names[i]);
    }

    lex(n,names);

    for(int i =0;i<n;i++){

        printf("The name%d in the sorted array is %s\n",i+1,names[i]);
    }

    return 0;
}
