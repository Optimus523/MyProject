#include <stdio.h>

int main()
{
    int x;

    for (x = 2; x <= 16; x*= 2)
    {
        if (x == 4)
        {
            continue;
        }
        
        printf("%d\t", x);
    }
    
    
}