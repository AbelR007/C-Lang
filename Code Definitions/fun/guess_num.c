// Guesses the number in terminal [Simple version]
// =================================================================
# include<stdio.h>
# include<conio.h>
void main()
{
    int num, que = 1
    int rng[3] = {1, 500, 1000}
    int index = rng[2]
    for (que=1
         que <= 10
         que + +)
    {
        int input
        // clrscr()
        printf("Q%d) Is your number bigger than %d?\n", que, rng[1])
        scanf("%d", & input)
        / *
        0 = "n" = False
        1 = "y" = True
        2 = "f" = Found
        * /
        if (input != 0)
        {
            rng[0] = rng[1]
            if (input == 2)
            {
                printf("Your number is %d, found in %d questions",
                       rng[1], que)
                break
            }
        }
        else
        rng[2] = rng[1]
        rng[1] = (rng[0] + rng[2]) / 2
        if ((rng[0] - rng[1]) == 1)
        {
            printf("Your number is %d", rng[1])
            break
        }
    }
}
// =============================================================================
// Code by Abel Roy //
