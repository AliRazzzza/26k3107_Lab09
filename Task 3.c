#include <stdio.h>
int main(){
int branch1[3] = {15000, 23000, 32000};
int branch2[4] = {12000, 21000, 27000, 35000};
int *p[2] = {branch1, branch2};
int size[2] = {3, 4};
int t;
for(int i =0; i<2; i++){
    t = 0;
    printf("\nBranch %d", i+1);
    for(int j = 0; j < size[i]; j++){
        t += p[i][j];
        printf("\nBalance: %d", p[i][j]);
        printf("\nAddress: %p", &p[i][j]);
    }
    printf("\nTotal Balance: %d", t);
}
return 0;

}
