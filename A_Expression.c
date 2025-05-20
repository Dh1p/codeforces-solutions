/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);

    int result[6];

    result[0] = a+b+c;
    result[1] = a*b*c;
    result[2] = (a+b)*c;
    result[3] = (a*b)+c;
    result[4] = a+(b*c);
    result[5] = a*(b+c);

    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<6; j++)
        {
            if(result[i]<result[j])
            {
                int temp = result[i];
                result[i] = result[j];
                result[j] = temp;
            }
        }
    }

    printf("%d\n",result[0]);
    return 0;
}