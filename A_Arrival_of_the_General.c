/**
 *     DHIP
**/
     
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=1; i<=n; i++)
    {
        scanf("%d",&a[i]);
    }

    int min = a[1];
    int min_index;

    for(int i=1; i<=n; i++)
    {
        if(a[i] <= min)
        {
            min = a[i];
            min_index = i;
            //printf("%d ",a[i]);
        }
    }

    int max = a[1];
    int max_index;
    for(int i=1; i<=n; i++)
    {
        if(a[i] >= max)
        {
            max = a[i];
            max_index = i;
            //printf(" MAX %d ",max_index);
        }
    }

    for(int i=1; i<=n; i++)
    {
        if(a[i] == a[max_index])
        {
            max_index = i;
            break;
            //printf(" MAX %d ",max_index);
        }
    }

    if(max_index>min_index)
    {
        max_index--;
    }

    //printf("%d %d\n",min_index, max_index);

    int max_value = 0;
    int min_value = 0;
    while(min_index!=n || max_index !=1)
    {
        if(min_index== n && max_index == 1)
        {
            break;
        }
        else if(min_index!=n && max_index !=1)
        {
            max_value++;
            min_value++;
            min_index++;
            max_index--;
           // printf("1->max%d min%d\n",max_value, min_value);
            //printf("1->maxINDEX%d minINDEX%d\n",max_index, min_index);
        }
        else if(max_index==1 && min_index!=n)
        {
            min_value++;
            min_index++;
            //printf("2->%d\n", min_value);
           // printf("2->minINDEX%d\n",min_index);
        }
        else if(min_index==n && max_index !=1)
        {
            max_value++;
            max_index--;
            //printf("3->%d\n",max_value);
            //printf("3->maxINDEX%d\n",max_index);
        }
    }

    int sum = min_value + max_value;
    printf("%d\n",sum);
    return 0;
}