#include<stdio.h> 
#include<string.h>

void arrange(int n,char names[n][100]){

    int len[n];
    for(int i=0;i<n;i++){
        len[i] = strlen(names[i]);
    }

    char temp[100];
    int temp1;

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){

            if(len[i]<len[j]){// here i is in top and j is bottom

                // temp1 = len[i];
                // len[i] = len[j];
                // len[j] = temp1;

                strcpy(temp,names[i]);
                strcpy(names[i],names[j]);
                strcpy(names[j],temp);

            }

            if(len[i]=len[j]){

                if(strcmp(names[i],names[j])>0){

                    // temp1 = len[i];
                    // len[i] = len[j];
                    // len[j] = temp1;

                    strcpy(temp,names[i]);
                    strcpy(names[i],names[j]);
                    strcpy(names[j],temp);
                }

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

    arrange(n,names);

    for(int i =0;i<n;i++){

        printf("The %d name after sorting is %s\n",i+1,names[i]);
    }

    return 0;
}
