#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct triangle
{
	int a;
	int b;
	int c;
}triangle;
void sort_by_area(triangle* tr, int n) {
	float p;
    float *area = (float*)malloc(n*sizeof(int));
    float temparea;
	triangle temp;
    int isSorted = 0;
    for(int x=0;x<n;x++){
    p=(((tr+x)->a)+((tr+x)->b)+((tr+x)->c))/2.0;
    *(area+x)=sqrt(p*(p-((tr+x)->a))*(p-((tr+x)->b))*(p-((tr+x)->c)));
    }
    for (int i = 0; i < n-1; i++) // For number of pass
    {
        //printf("Working on pass number %d\n", i+1);
        isSorted = 1;
        for (int j = 0; j <n-1-i ; j++) // For comparison in each pass
        {
            if((*(area+j))>(*(area+j+1))){
                temparea = *(area+j);
                *(area+j) = *(area+j+1);
                *(area+j+1) = temparea;   
				temp.a = (tr+j)->a;
				temp.b = (tr+j)->b;
				temp.c = (tr+j)->c;
                (tr+j)->a = (tr+j+1)->a;
				(tr+j)->b = (tr+j+1)->b;
				(tr+j)->c = (tr+j+1)->c;
                (tr+j+1)->a= temp.a;
				(tr+j+1)->b= temp.b;
				(tr+j+1)->c= temp.c;
                isSorted = 0;
            }
        } 
        if(isSorted){
            return;
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