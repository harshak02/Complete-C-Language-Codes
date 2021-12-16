 #include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    float ar[n];

    for(int i=0;i<n;i++){
        fflush(stdin);
        float p =(float)(tr[i].a+tr[i].b+tr[i].c)/2;
        float k=sqrt(p*(p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c));
        ar[i] = k;
    }

    for(int i =0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(ar[i]>ar[j]){
                float temp;
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;

                triangle temp1;
                temp1 = tr[i];
                tr[i] = tr[j];
                tr[j] = temp1;

            }
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}

