#include <stdio.h>
int main(){

int transactions[2][3] = {
        {120000, 150000, 180000},
        {200000, 170000, 220000}
    };
int (*p)[3] = transactions;
int t;
for(int i = 0; i < 2; i++){
    t = 0;
    printf("\nBranch %d", i + 1);
    for(int j = 0; j < 3; j++){
        
        printf("\nMonth %d: %d", j + 1, *(*(p + i) + j));
        t = t + (*(p + i))[j];
    }
    printf("\nTotal Transaction: %d", t);
}
    return 0;

}
