#include <stdio.h>
void increment(int  *var)
{
    /* Although we are performing the increment on variable
     * var, however the var is a pointer that holds the address
     * of variable num, which means the increment is actually done
     * on the address where value of num is stored.
     */
    *var = *var+1;
}
int main()
{
     int num=20;
     /* This way of calling the function is known as call by
      * reference. Instead of passing the variable num, we are
      * passing the address of variable num
      */
     increment(&num);
     printf("Value of num is: %d", num);
   return 0;
}