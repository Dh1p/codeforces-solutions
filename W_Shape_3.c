#include<stdio.h>

void Starprint(int n)
{
    int space, star;
    

    //1st pyramid block
    star=1, space=n-1;
    for(int i=0; i<n; i++)//for lines
    {
        for(int j=0; j<space; j++) //for spaces
        {
            printf(" "); //space print
        }

        for(int j=0; j<star; j++)//for stars
        {
            printf("*"); //print star
        }

        printf("\n"); //after printing space and star for one line, need new line
        space--;
        star+=2; // star increasing by 2 as the sequence is 1 3 5 7... 
    }

    //second pyramid block
    star=n+(n-1), space=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=space; j++)
        {
            if(j>0)
            {
                printf(" ");
            }
        }

        for(int j=0; j<star; j++)
        {
            printf("*");
        }
        printf("\n");
        space++;
        star-=2;
    }
}


int main()
{
    int n;
    scanf("%d",&n);
    Starprint(n);
    return 0;
}