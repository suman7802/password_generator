#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand((unsigned int)time(0));
    printf("\nWelcome in password generator\n");
    while (1)
    {
        int pass, size, status;
        printf("Enter the length for password (8-34): ");
        scanf("%d", &size);
        if (size >= 8 && size <= 34)
        {
            printf("YOUR password is : ");
            for (int i = 0; i < size; i++)
            {
                pass = rand() % 126;
                if (pass > 33 && pass <= 126)
                {
                    printf("%c", pass);
                }
                else
                {
                    i--;
                }
            }
            printf("\nPress 1 to CONTINUE and any char/num to STOP!\n");
            scanf("%d", &status);
            if (status ==  1)
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else
        {
            printf("Invalid input!\n");
        }
    }
    return 0;
}