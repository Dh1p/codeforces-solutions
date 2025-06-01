// /**
//  *     DHIP
// **/
     
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);//টেস্ট কেস ইনপুট

    for(int i=0; i<t; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];

        for(int i=0; i<n; i++)//ভ্যালু ইনপুট
        {
            scanf("%d",&a[i]);
        }

        for(int i=0; i<n; i++)
        {
            if(a[i]==1)//যদি ১ থাকে, তাহলে তার সাথে ১ যোগ করে ২ করা হয়েছে(আবার যদি ২ করার কারণে পাশাপাশি ২টা ২ আসে, তার জন্যে পরের ধাপে সমাধান করা হয়েছে)।
            {
                a[i]++;
            }  
        }

        for(int i=0; i<n-1; i++)
        {
            if(a[i+1]%a[i]==0)
            {
                a[i+1]++;
            }
        }

        for(int i=0; i<n; i++)
        {
            printf("%d ",a[i]);
        }
        printf("\n");
    }
    return 0;
}
     