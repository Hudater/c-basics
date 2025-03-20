#include <stdio.h>

// Thanks to zed_0xff for this elegant solution: `https://stackoverflow.com/a/3068412`
// Some other fun reads at: `https://stackoverflow.com/questions/3068397/finding-the-length-of-an-integer-in-c`
int get_int_len(int value)
{
    int l = 1;
    while (value > 9)
    {
        l++;
        value /= 10;
    }
    return l;
}

int main()
{
    int input_num, i, total_dig;

    printf("Enter a +ve number to find sum of it's individual digits: ");
    scanf("%d", &input_num);
    if (input_num >= 0)
    {
        total_dig = get_int_len(input_num);
        // printf("%d", total_dig);
        for (i = 0; i < total_dig; i++)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        printf("Non negative number entered, exiting...\n");
        return 1;
    }
    return 0;
}
