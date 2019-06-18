#include <stdio.h>
#include <stdlib.h>

int n = 0;
int t1 = 0;
int t2 = 1;
int tn;
int rs=1;

int main() {
    printf("digite um número: \n");
    scanf("%i", &n);
    getchar();
    system("clear");
    while (n >= 1) {
        printf("%i°= %i\n",rs, tn);
        tn = t1 + t2;
        t2=t1;
        t1=tn;
        rs++;
        n--;
    }
}
