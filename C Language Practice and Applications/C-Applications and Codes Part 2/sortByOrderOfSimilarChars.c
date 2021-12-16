#include<stdio.h>
#include<string.h>

void order(int n,char name[n][25]);

int main(){
    int n;

    printf("Enter the value of no. of strings in array\n");
    scanf("%d",&n);

    char name[n][25];

    for(int i=0;i<n;i++){
        printf("Enter the value of %d string is \n",i+1);
        scanf("%s",name[i]);
    }

    order(n,name);

    for(int i =0;i<n;i++){
        printf("The value of the %d element in the sorted array is %s\n",i+1,name[i]);
    }


    return 0;
}

void order(int n,char name[n][25]){
    int countmax[n];

    for(int p=0;p<n;p++){
        countmax[p]=0;
    }

    for(int i =0;i<n;i++){
        while(name[i][25]!='\0'){
            for(int j=0;j<26;j++){
                int count[26];
                    
                // ascii values of 'a'=97,'z'=122 a-z = 97-122

                for(int k=97;k<=122;k++){
                    if(name[i][j]==k){
                        count[j]++;
                    }
                }

                for(int l=0;l<26;l++){
                    if(countmax[i]<count[l]);

                    countmax[i]=count[l];
                }

            }
        }
    }  

    char temp[10];

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
           if(countmax[i]<countmax[j]){
            strcpy(temp,name[i]);
            strcpy(name[i],name[j]);
            strcpy(name[j],temp);
            }
        }
    }

}



