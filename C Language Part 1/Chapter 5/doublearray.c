#include<stdio.h> 

int main(){
    int n_students=3;
    int n_subjects=5;
    int marks[3][5];
    int *ptr = *marks;// this is crct
    
    for(int i=0;i<n_students;i++){
        for(int j=0;j<n_subjects;j++){
            printf("The value of the %d student in %d subject is \n",i+1,j+1);
            scanf("%d",ptr);//Only crct for double array pointers
            //scanf("%d",ptr+i+j);//only ptr is used in scanf (strictly)
            //scanf("%d",ptr);//this is also not accpeted here coz i and j are not given equal imp
            ptr++;//this is crct// should only used in this loop itself
            // scanf("%d",&marks[i][j]);//use & pakka for arrays
            
        }

    }

   
    for(int i=0;i<n_students;i++){
        for(int j=0;j<n_subjects;j++){

            printf("The value of marks of %d student in %d subject is %d \n",i+1,j+1,marks[i][j]);

        }
    }
    return 0;


}

//if inside the scanf is array is mentioned exactly an element the use
//the & opearator
//whenever if pointer is involved in the scanf  dont use & any time
