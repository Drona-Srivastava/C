#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t); //number of inputs
    for(int a0 = 0; a0 < t; a0++){
        int n;
        scanf("%d",&n); //the max number
        int sum = 0;
        int three = (n - 1) / 3;
        int five = (n - 1) / 5;
        int fifteen = (n - 1) / 15;
        sum = (3 * three * (three + 1) / 2) + (5 * five * (five + 1) / 2) - (15 * fifteen * (fifteen + 1) / 2);
        printf("%d\n",sum);
    }
    return 0;
}