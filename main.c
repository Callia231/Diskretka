#include <stdio.h>
#include <stdlib.h>
int main()
{
    signed i,p,r,m,j,n,perevod=0;

    FILE *f;
    f = fopen("E:\\FILE\\ssss.txt","w");
    scanf ("%d",&p);
        fprintf (f,"%d     ",2);
        for (i=3;i<p;i+=2)
        {
            r=i;
            while (r!=0)
            {
              m=sqrt (r);
              for (j=2;j<=m;j++)
              {
                n=r%j;
                if (n==0)
                {
                    r=0;
                    j=m+1;
                }
              }
              if (r!=0)
              {
              perevod++;
              if (perevod==10)
               {
               fprintf(f,"[%d]\n",r);
               perevod = 0;
               }
              else
              fprintf (f,"[%d]     ",r);
              }
              r=0;

            }
        }
    fclose(f);
    return 0;
}
