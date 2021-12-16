#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char s[100];
    scanf("%s",s);

    int a,b,c,d,e,f,g,h,k,j;
    a=0;
    b=0;
    c=0;
    d=0;
    e=0;
    f=0;
    g=0;
    h=0;
    k=0;
    j=0;
    
    
    int l =strlen(s);
    for(int i=0;i<l;i++){
        
        
            if(s[i]=='0'){
               a++; 
            }
            
            if(s[i]=='1'){
               b++; 
            }
            
            if(s[i]=='2'){
               c++; 
            }
            
            if(s[i]=='3'){
               d++; 
            }
            
            if(s[i]=='4'){
               e++; 
            }
            
            if(s[i]=='5'){
               f++; 
            }
            
            if(s[i]=='6'){
               g++; 
            }
            
            if(s[i]=='7'){
               h++; 
            }
            
            if(s[i]=='8'){
               k++; 
            }
            
            if(s[i]=='9'){
               j++; 
            }
            
            
        } 
    
    printf("%d %d %d %d %d %d %d %d %d %d",a,b,c,d,e,f,g,h,k,j);
    return 0;
}
