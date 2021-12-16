#include<stdio.h> 
#include<math.h>

typedef struct triangle{

    int a;
    int b;
    int c;

}tri;

void areasort(int n, tri *ptr){

    float area[n];

    for(int i =0;i<n;i++){
        fflush(stdin);
        float k =(float)((*(ptr+i)).a + (*(ptr+i)).b + (*(ptr+i)).c)/2;
        float result = sqrt(k*(k-(*(ptr+i)).a)*(k-(*(ptr+i)).b)*(k-(*(ptr+i)).c));
        area[i] = result;
    }

    for(int i =0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            if(area[i]>area[j]){
                int temp;
                temp = area[i];
                area[i] = area[j];
                area[j] = temp;

                tri temp1;
                temp1 = *(ptr+i);
                *(ptr+i) = *(ptr+j);
                *(ptr+j) = temp1;
            }
        }
    }
}

int main(){
    int n;

    printf("Enter the number of triangles\n");
    scanf("%d",&n);

    tri arr[n];
    tri *ptr = arr;

    for(int i =0;i<n;i++){
        printf("Enter the side 'a' of trinagle %d\n",i+1);
        scanf("%d",&(*(ptr+i)).a);

        printf("Enter the side 'b' of trinagle %d\n",i+1);
        scanf("%d",&(*(ptr+i)).b);

        printf("Enter the side 'c' of trinagle %d\n",i+1);
        scanf("%d",&(*(ptr+i)).c);
    }

    areasort(n,ptr);

    for(int i =0;i<n;i++){
        printf("%d %d %d\n",(*(ptr+i)).a,(*(ptr+i)).b,(*(ptr+i)).c);
    }

    return 0;
}
