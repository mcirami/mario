#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char x = '#';
    char y = ' ';
    int h;
    
    // gets user input and checks if valid
    do
    {
        printf("Please enter a number between 0 and 23 for the pyramid's height: ");
        h = GetInt();
        if ((h < 0) || (h > 23))
            printf("INVALID NUMBER!\n");
    }
    while ((h < 0) || (h > 23));
    
    // creates pyramid
    for (int n = 0; n < h; n++)
        {
        for (int w = 2; w <= (h - n); w++)
            {
                printf("%c",y);
            }
            for (int z = 1; z <= (n + 2); z++)
                {
                    printf("%c",x);
                }
                        printf("\n"); 
        }
}
