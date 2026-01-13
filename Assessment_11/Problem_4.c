#include <stdio.h>

void find_2digit_odd_sum7() {
    int num;
    int *pnum = &num;
    for (*pnum = 11; *pnum <= 99; (*pnum)++) {
        if (*pnum % 2 != 0) {              
            int tens, units, sum;
            int *pt = &tens, *pu = &units, *ps = &sum;
            *pt = (*pnum) / 10;            
            *pu = (*pnum) % 10;            
            *ps = *pt + *pu;               
            if (*ps == 7) {
                printf("%d ", *pnum);
            }
        }
    }
}

int main() {
    find_2digit_odd_sum7();
    return 0;
}
