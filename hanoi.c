#include <stdio.h>
#define TOWER1 1
#define TOWER2 3
 
void hanoi(int, int, int);
 
main()
{
    int n;
    scanf("%d", &n);
    hanoi(n, TOWER1, TOWER2);
    return 0;
}
 
void hanoi(int a, int n1, int n2)
{
     if (a == 1)
        printf("%d %d %d\n", a, n1, n2);
     else {
        int x, na;
                         
        for (x = 1; x <= 3; x++) {
             if ((x != n1) && (x != n2)) {
                 na = x;
             }
        }
        hanoi(a-1, n1, na);
        printf("%d %d %d\n", a, n1, n2);
        hanoi(a-1, na, n2);
    }
}
