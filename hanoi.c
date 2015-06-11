/*
 * Copyright (C) 2014-2015 Pavel Dolgov
 *
 * See the LICENSE file for terms of use.
 */

#include <stdio.h>

#define TOWER1 1
#define TOWER2 3

void hanoi(int a, int n1, int n2) {
     if (a == 1) { // end of recursion
        printf("%d %d %d\n", a, n1, n2);
     } else {
        int x, na;
        for (x = TOWER1; x <= TOWER2; x++) {
             if ((x != n1) && (x != n2)) {
                 na = x;
                 break;
             }
        }
        hanoi(a - 1, n1, na); // recursion
        printf("%d %d %d\n", a, n1, n2);
        hanoi(a - 1, na, n2); // recursion
    }
}

int main() {
    int n;
    scanf("%d", &n);
    hanoi(n, TOWER1, TOWER2);
}
