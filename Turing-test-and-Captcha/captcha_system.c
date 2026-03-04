#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int captcha;
    int user_input;

    srand(time(0));

    captcha = rand() % 9000 + 1000;

    printf("CAPTCHA VERIFICATION SYSTEM\n");
    printf("---------------------------\n");

    printf("Enter the following CAPTCHA code: %d\n", captcha);

    printf("Input CAPTCHA: ");
    scanf("%d", &user_input);

    if(user_input == captcha)
    {
        printf("Verification Successful!\n");
        printf("User is verified as Human.\n");
    }
    else
    {
        printf("Verification Failed!\n");
        printf("Bot suspected.\n");
    }

    return 0;
}
