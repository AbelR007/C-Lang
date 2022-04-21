// Making a "CUBE" of variable length
// ============================================================================
#include<stdio.h>

// Design function
// void designbox(int no)
// {
//     printf("+");
//     for (int dsg=1; dsg <= (2*no); dsg++)
//         printf("-");
//     printf("+\n");
// }

// Cube function
void cube(int side)
{
    int r,c;
    int len = side, bre = side, ht = side;
    int tlen = len+(len/2)-1, tht = ht + (ht/2)-1;
    printf("CUBE :\n\n");
    // designbox(tlen);
    for (r=1;r<=tht;r++)
    {
        // printf("|");
        for (c=1; c<=tlen; c++)
        {
            //
            if (
                (r==1&&c>len/2)||(r==len&&c>len/2) || (c==tlen&&r<=ht)||(c==len/2&&r<=ht)  ||// sada
                (c==1&&r>ht/2)||(c==ht&&r>ht/2) || (r==tht&&c<=ht)||(r==ht/2&&c<=len)  ||
                (r+c==(len/2)+1)||(r+c==tlen+1&&(c<=bre/2||c>=bre)) || (r+c==(tlen+ht))
            )
                printf(" *");
            else
                printf("  ");
            // printf("|");
        }
        // printf("|");
        printf("\n");
    }
    // designbox(tlen);
}

void cuboid(int len, int bre, int ht)
{
    int r,c;
    int tlen = len+(len/2), tht = ht + (ht/2);
    int dlen = tlen-len, dht = tht - ht;
    printf("CUBOID :\n\n");
    // designbox(tlen);
    for (r=1;r<=tht;r++)
    {
        // printf("|");
        for (c=1; c<=tlen; c++)
        {
            //
            // printf("%d",ht);
            if
            (
                (r==1&&c>dlen)||(r==ht&&c>dlen) || (c==tlen&&r<ht)||(c==dlen&&r<=ht)// sada
                || (c==1&&r>dht)||(r==dht+1&&c<=len) || (r==tht&&c<=len)||(c==len&&r>dht)
                //|| (r+c==(len/2)+1)//||(r+c==tlen+1&&(c<=bre/2||c>=bre)) || (r+c==(tlen+ht))
            )
                // printf("%2d",c);
                printf(" *");
            else
                printf("  ");
            // printf("|");
        }
        // printf("|");
        printf("\n");
    }

    // designbox(tlen);
}


// Main function
void main()
{
    int no = 20;
    cube(15);
    cuboid(10,10,5);
}
// ============================================================================
// Code by Abel Roy //
