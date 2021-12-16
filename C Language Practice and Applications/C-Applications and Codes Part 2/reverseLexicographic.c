#include<stdio.h>
#include<string.h>

void group(int n,char name[n][25]); 

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);

    char name[n][25];

    for(int i=0;i<n;i++){
        printf("The %d string in the array is \n",i+1);
        scanf("%s",name[i]);
    }

    group(n,name);

    for(int i=0;i<n;i++){
        printf("The value of the %d string in the sorted array is %s\n",i+1,name[i]);
    }

    return 0;
}

void group(int n,char name[n][25]){
    int count[n];

    for(int i=0;i<n;i++){
        count[i] = strlen(name[i]);
    }

    char temp[10];

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
                
                if(strcmp(name[i],name[j])>0){
                    strcpy(temp,name[j]);
                    strcpy(name[j],name[i]);
                    strcpy(name[i],temp);

                }

        }
            
    }

    for(int i=0;i<n/2;i++){
        strcpy(temp,name[i]);
        strcpy(name[i],name[n-i-1]);
        strcpy(name[n-i-1],temp);
    }
}
