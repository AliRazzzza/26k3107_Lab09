#include <stdio.h>
int calculateTotal(int *p, int size){
    int t;
     t = 0;
    for(int i = 0; i < size; i++){
        t = t + *(p + i);
    }
    return t;
}

int main(){
    int branch1[3] = {15000, 23000, 32000};
    int branch2[4] = {12000, 21000, 27000, 35000};
    int t1, t2;
    t1 = calculateTotal(branch1, 3);
    t2 = calculateTotal(branch2, 4);
    printf("Total sales for branch 1: %d\n", t1);
    printf("Total sales for branch 2: %d\n", t2);
    return 0;
}
