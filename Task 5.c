#include <stdio.h>

int deposit(int bal, int amt){
    return bal + amt;

}

int withdraw(int bal, int amt){
    if(bal >= amt){
        return bal - amt;
    }
    else{
        printf("Insufficient balance\n");
        return bal;
    }
}
int main(){
    int balance = 25000;
    int amount, choice;
    printf("Enter amount to deposit/withdraw: ");
    scanf("%d", &amount);

    int (*p)(int, int);
    printf("Enter choice (Withdraw or deposit): ");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            p = withdraw;
            balance = p(balance, amount);
            printf("Balance after withdrawal: %d\n", balance);
            break;
        case 2:
            p = deposit;
            balance = p(balance, amount);
            printf("Balance after deposit: %d\n", balance);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
