#include <cs50.h>
#include <stdio.h>

int main(void)
{
 //   char x = '#';
 //   char y = ' ';
    int h;
    
    // gets user input and checks if valid
    while ((h < 0) || (h > 23))
    {
        printf("Please enter a number between 0 and 23 for the pyramid's height: ");
        h = GetInt();
        if ((h < 0) || (h > 23))
            printf("INVALID NUMBER!\n");
    }
    
    
    // creates pyramid
    for (int i = 0; i < h; i++)
        {
        for (int j = 0; j <= (h - i) - 2; j++)
            {
                printf("%c",' ');
            }
            for (int k = 0; k <= (i + 1); k++)
                {
                    printf("%c",'#');
                }
                        printf("\n"); 
        }
}
