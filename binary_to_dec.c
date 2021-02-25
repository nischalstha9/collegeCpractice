#include <stdio.h>

int main()
{
    long long int binary;
    int number, decimal, power = 0, i, p_calc_val = 1;
    printf("Enter binary:\n");
    scanf("%lld", &binary);
    while (binary > 0)
    {
        number = binary % 10;
        if (number == 1)
        {
            if (power == 0)
            {
                decimal += 1;
            }
            else if (power == 1)
            {
                decimal += 2;
            }
            else if (power > 1)
            {
                for (i = 1; i <= power; i++)
                {
                    p_calc_val *= 2;
                }
                decimal += p_calc_val;
                p_calc_val = 1;
            }
        }
        power++;
        binary /= 10;
    }
    printf("DECIMAL ==> %d", decimal);
    return 0;
}
