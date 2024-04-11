/*
ABC company Ltd. is interested to computerize the pay calculation of their employee in the form of Basic Pay, Dearness Allowance (DA) and House Rent Allowance (HRA). DA and HRA are calculated as certain % of Basic pay(For example, DA is 80% of Basic Pay, and HRA is 30% of Basic pay). They have the deduction in the salary as PF which is 12% of Basic pay. Propose a computerized solution for the above said problem using C to calculate the gross pay of an employee of this company. If basic pay is negative then print “invalid entry”.
*/
#include <stdio.h>
int main()
{
    float bp,da,ha,pf,bpn;
    scanf("%f",&bp);
    if (bp<0)
    {
        printf("invalid entry");
    }
    else
    {
        da = (bp*80)/100;
        ha = (bp*30)/100;
        pf = (bp*12)/100;
        bpn = bp + da + ha - pf;
        printf("Rs %0.2f",bpn);
    }
}