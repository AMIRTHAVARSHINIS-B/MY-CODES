#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int update(int *a,int *b) ;

int update(int *a,int *b) {
    int x=*a,y=*b; 
     
     *a = x+ y;
     * b= abs(x-y);
     
     
     
     
      
}

int main() {
    int a, b;
    int * pa = &a;
    int *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
