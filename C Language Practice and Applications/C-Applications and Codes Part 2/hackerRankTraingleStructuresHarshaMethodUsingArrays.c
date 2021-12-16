#include<stdio.h> 
#include<math.h>

typedef struct triangle{

    int a;
    int b;
    int c;

}tri;

void areasort(int n, tri arr[n]){

    float area[n];

    for(int i =0;i<n;i++){
        fflush(stdin);
        float k =(float)(arr[i].a + arr[i].b +arr[i].c)/2;
        float result = sqrt(k*(k-arr[i].a)*(k-arr[i].b)*(k-arr[i].c));
        area[i] = result;
    }

    for(int i =0;i<n-1;i++){
        for(int j =i+1;j<n;j++){
            if(area[i]>area[j]){
                int temp;
                temp = area[i];// may or maynot coded then also we get
                area[i] = area[j];//correct
                area[j] = temp;

                tri temp1;
                temp1 = arr[i];
                arr[i] = arr[j];
                arr[j] = temp1;
            }
        }
    }
}

int main(){
    int n;

    printf("Enter the number of triangles\n");
    scanf("%d",&n);

    tri arr[n];

    for(int i =0;i<n;i++){
        printf("Enter the side 'a' of trinagle %d\n",i+1);
        scanf("%d",&arr[i].a);

        printf("Enter the side 'b' of trinagle %d\n",i+1);
        scanf("%d",&arr[i].b);

        printf("Enter the side 'c' of trinagle %d\n",i+1);
        scanf("%d",&arr[i].c);
    }

    areasort(n,arr);

    for(int i =0;i<n;i++){
        printf("%d %d %d\n",arr[i].a,arr[i].b,arr[i].c);
    }

    return 0;
}
