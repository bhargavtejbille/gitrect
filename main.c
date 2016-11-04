#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <string.h>
 int main()
 {
    FILE *fp;
    char boy[50],girl[50],p[7]={"*flames"},q[7];
    int o,b,c,i,j,k,u,v,x,y,z;
    printf("do u want to know ur relation ship \n then enter your name with out spaces: ");
    gets(boy);
    printf("\n enter ur partner name :");
    gets(girl);
    x=strlen(boy);
    printf(" \n %d ",x);
    y=strlen(girl);
    z=x+y;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            if(boy[i] ==girl[j])
            {
                z=z-2;
                girl[j]="* ";
                break;
            }
        }
    }
     printf("\n %d \n",z);
for(i=6;i>1;i--)
{
    o=z-i;
    if(o<=0||o>0)
        o=abs(o);
    else
        o=i;
    if(o<=i)
    {
        p[o]="*";
        b=1;
        for(j=o+1;j<=i;j++)
        {

            q[b]=p[j];
            b++;
        }
        for(k=1;k<o;k++)
        {
            q[b]=p[k];
            b++;
        }
        for(u=1;u<i;u++)
        {
            p[u]=q[u];
            p[i]="*";
        }
    }
    else
      {
          c=z%i;
          if(c<=i)
          {
              p[c]="*";
               b=1;
              for(j=c+1;j<=i;j++)
              {
                  q[b]=p[j];
                  b++;
              }
              for(k=1;k<c;k++)
              {
                  q[b]=p[k];
                  b++;
              }
              for(u=1;u<i;u++)
              {
                  p[u]=q[u];
                  p[i]="*";
              }
          }
          else if(c>i)
            {
                c=z/i;
                p[c]="*";
                for(v=c+1;v<=i;v++)
                {
                    b=1;

                    q[b]=p[j];
                    b++;
                }
                for(u=1;u<i;u++)
                {
                    p[u]=q[u];
                    p[i]="*";
                }
            }
            else
              {
                  p[i]="*";
                  for(j=i+1;j<=i;j++)
                  {
                      b=1;
                      q[b]=p[j];
                      b++;
                  }
                  for(k=1;k<i;k++)
                  {
                      q[b]=p[k];
                      b++;
                  }
                  for(u=1;u<i;u++)
                  {
                      p[u]=q[u];
                      p[i]="*";
                  }
              }
      }
}
printf("%c",p[i]);
fopen("bhargav.txt","a");
fprintf(fp,"\n");
for(i=0;i<=x;i++)
    putc(boy[i],fp);
fprintf(fp,"\t");
for(i=0;i<=y;i++)
    putc(girl[i],fp);
fprintf(fp,"-%s",p[i]);
fclose(fp);
getch();
return 0;
}





