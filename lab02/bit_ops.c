#include <stdio.h>
#include "bit_ops.h"

/* Returns the Nth bit of X. Assumes 0 <= N <= 31. */
unsigned get_bit(unsigned x, unsigned n) {
    /* YOUR CODE HERE */
    while(n){
    x=x/2;
    n--;
    }
    x=x&0x00000001;
    return x; /* UPDATE WITH THE CORRECT RETURN VALUE*/
}

/* Set the nth bit of the value of x to v. Assumes 0 <= N <= 31, and V is 0 or 1 */
void set_bit(unsigned *x, unsigned n, unsigned v) {
    /* YOUR CODE HERE */
    int temp=*x;
    int lower=temp<<(31-n);
    lower=lower>>(31-n);
    int mid=v;
    mid=mid<<n;
    int upper=temp>>(n);
    upper=upper<<(n);
    *x=lower+mid+upper;
    return ;
}

/* Flips the Nth bit in X. Assumes 0 <= N <= 31.*/
void flip_bit(unsigned *x, unsigned n) {

    /* YOUR CODE HERE */
    int bit_mask= 1;
    while(n){
    bit_mask=bit_mask*2;
    n--;
    }
    *x=(*x)^bit_mask;
    return ;
    
}

