#include <stdio.h>
#include <string.h>
int i, j, k, h, a, b, n, t, d;
char p;
char dizi[100];

int main()
{
    printf("bosluk ve turkce karakter kullanmadan metin gir: ");
    scanf("%s", dizi);

    d = strlen(dizi);

    for(t=0;d>t;t++)
    {
        p=dizi[t];

        printf("\n\n\n");

        switch(p)
        {
            case 'a':                  n=9;
    a=1;
    
    for(i=1;i<=n;i++)
    {

        for(j=n+1;j>=i;j--)
        {
            printf(" ");
        }
        
        if(a==i)
        {
            printf("*\n");
        
            continue;
        
            a++;
        }
        
        
        for(k=i;k==i;k++)
        {
            printf("*");
        }
        if(i!=5)
        {
            for(h=0;((i-1)*2)-1>=h;h++)
            {
            printf(" ");
            }
        }
        
        else 
        {
            for(h=0;((i-1)*2)-1>=h;h++)
            {
            printf("*");
            }
        }
        for(k=i;k==i;k++)
        {
            printf("*");
        }
    printf("\n");
    }
                break;

            case 'b':n=9;
    
    for(i=1;n>=i;i++)
    {
        for(k=i;i==k;k++)
        {
            printf("* ");
        }

        if(i==1||i==5||i==9)
        {
            for(k=1;3>=k;k++)
            {
                printf("* ");
            }
        }

        else
        {
            for(j=1;j<=6;j++)
            {
                printf(" ");
            }

            for(a=1;a==1;a++)
            {
                printf("*");
            }

        }

        printf("\n");
    }

            break;


            case 'c':
    n=9;
    
    for(i=1;i<=n;i++)
    {
        for(j=i;j==i;j++)
        {
            printf("* ");
        }

        if(i==1||i==9)
        {
            for(k=1;k<=7;k++)
            {
                printf("* ");
            }

        }

        printf("\n");
    }

            break;

            case 'd':for(i=1;i<=9;i++)
    {
        for(k=i;k==i;k++)
        {
            printf("* ");
        }

        if(i==1||i==9)
        {
            for(j=1;j<=4;j++)
            {
                printf("* ");
            }
        }

        else
        {
            for(j=1;j<=8;j++)
            {
                printf(" ");
            }
        
            for(j=i;j==i;j++)
            {
                printf("*");
            }
        
        }
        
        printf("\n");
    }

        break;

        case 'e':for(i=1;i<=9;i++)
    {
        for(j=i;j==i;j++)
        {
            printf("* ");
        }
        
        if(i==1||i==5||i==9)
        {
            for(k=1;k<=5;k++)
            {
                printf("* ");
            }
        }
        printf("\n");
    }
        break;

        case 'f': for(i=1;i<=9;i++)
    {
        if(i==1||i==9)
        {
            for(j=i;j==i;j++)
            {
                printf(" ");
            }
        }
       
       for(j=i;i==j;j++)
        {
            printf("* ");
        }
        
        if(i==1||i==9)
        {
            for(k=1;k<=7;k++)
            {
                printf("* ");
            }
        }

        else if(i==6||i==7||i==8)
        {
            for(n=1;n<=14;n++)
            {
                printf(" ");
            }
            for(a=i;i==a;a++)
            {
                printf("*");
            }

        }
        else if(i==5)
        {
            for(k=1;k<=6;k++)
            {
                printf(" ");
            }

            for(n=1;n<=5;n++)
            {
                printf("* ");
            }

        }
        printf("\n");
    }
           break;

        case 'g':for(i=1;i<=9;i++)
    {
        if(i==1||i==9)
        {
            for(j=i;j==i;j++)
            {
                printf(" ");
            }
        }
       
       for(j=i;i==j;j++)
        {
            printf("* ");
        }
        
        if(i==1||i==9)
        {
            for(k=1;k<=7;k++)
            {
                printf("* ");
            }
        }

        else if(i==6||i==7||i==8)
        {
            for(n=1;n<=14;n++)
            {
                printf(" ");
            }

            for(a=i;i==a;a++)
            {
                printf("*");
            }

        }

        else if(i==5)
        {
            for(k=1;k<=6;k++)
            {
                printf(" ");
            }

            for(n=1;n<=5;n++)
            {
                printf("* ");
            }

        
        }
        printf("\n");
    }
    break;



            case 'h':
    for(i=1;i<=9;i++)
    {
        for(j=i;j==i;j++)
        {
            printf("* ");
        }

        if(i==5)
        {
            for(k=1;k<=5;k++)
            {
                printf("* ");
            }
        
        }

        else if(i!=5)
        {
            for(k=1;k<=8;k++)
            {
                printf(" ");
            }
        
            for(j=i;j==i;j++)
            {
                printf("*");
            }
        
        }

        printf("\n");
    }
        break;

        case 'i':for(i=1;i<=9;i++)
    {
        
        if(i!=2)
        {
            for(j=1;j<=4;j++)
            {
                printf(" ");
            }

            for(k=i;k==i;k++)
            {
                printf("*");
            }
        }
        
        printf("\n");
    }
            break;

            case 'j': for(i=1;i<=9;i++)
    {   
       n=9;

        if(i==7||i==8)
        {
            printf("*");
            n=n-1;
        }
       
        else if(i==9)
        {
            n=0;
            printf(" ");
            for(j=1;j<=3;j++)
            {
                printf("* ");
            }

        }

        for(j=1;j<=n;j++)
        {
            printf(" ");
        }

        for(k=i;k==i;k++)
        {
            printf("*");
        }
    
        printf("\n");
    }    
    break;

    case 'k':for(i=1;i<=9;i++)
    {
        printf("*");
        if(i==5||i==4||i==3||i==2||i==1)
        {
            for(n=5;n>i;n--)
            {
                printf(" ");
            }
        }

        else
        {
            for(k=6;k<=i;k++)
            {
                printf(" ");
            }
        }

        printf("*");

        printf("\n");
    }

        break;

        case 'l':for(i=1;i<=9;i++)
    {
        printf("*");

        if(i==9)
        {
            for(k=1;k<=3;k++)
            {
                printf(" *");
            }
        }        
        printf("\n");
    }   
    break;

    case 'm':for(i=1;i<=9;i++)
    {
        printf("*");

        for(k=1;k<=i;k++)
        {
            printf(" ");
        }   

        printf("*");

        for(n=18;i*2<=n;n--)
        {
            printf(" ");
        }

        printf("*");

        for(k=1;k<=i;k++)
        {
            printf(" ");
        }   

        printf("*");
        printf("\n");
    }

        break;

        case 'n':for(i=1;i<=9;i++)
    {
        printf("*");

        for(k=1;i>=k;k++)
        {
            printf(" ");
        }
        
           printf("*");

        for(n=9;i<=n;n--)
        {
            printf(" ");
        }

         printf("*");

        printf("\n");
    }

            break;

            case 'o':for(i=1;i<=9;i++)
    {
        if(i==1||i==2||i==3)
        {
            for(k=3;i<=k;k--)
            {
                printf(" ");
            }
        }
        
        if(i==1)   printf(" * * ");
       
        if(i==2||i==3)
        {
            printf("*");
            
            for(k=-3;k<i*2;k++)
            {
                printf(" ");
            }
        }
        if(i==4||i==5||i==6)
        {
            printf("*");
            
            for(k=0;k<=10;k++)
            {
                printf(" ");
            }
        }
        if(i==7||i==8||i==9)
        {
            for(k=6;i>k;k++)
            {
                printf(" ");
            }
        }

          if(i!=9) printf("*");

          if(i==9)  printf(" *");
          
          if(i==7||i==8)
        {
            for(k=22;i*2<=k;k--)
            {
                printf(" ");
            }
        
            printf("*");
        }
        if(i==9)   printf(" * * ");
        
        printf("\n");
        
    }

            break;

            case 'p':for(i=1;i<=9;i++)
    {
        printf("*");

        if(i==1)
        {
            for(k=1;k<=4;k++)
            {
                printf(" *");
            }
        }
        if(i==2||i==3||4==i)
        {
            for(k=1;k<=8;k++)
            {
                printf(" ");
            }
            printf("*");
        }

        if(i==5)
        {
            for(k=1;k<=4;k++)
            {
                printf(" *");
            }
        }

        printf("\n");
    }
            break;

            case 'r':for(i=1;i<=9;i++)
    {
        printf("*");

        if(i==1||i==5)
        {
            for(k=1;k<=4;k++)
            {
                printf(" *");
            }
        }

        if(i==2||i==3||i==4)
        {
            for(n=1;n<=8;n++)
            {
                printf(" ");
            }

            printf("*");
        }

       if(i==6||i==7||i==8||i==9)
       {
            for(j=2;i>=j;j++)
            {
                printf(" ");
            }
            printf("*");
       }
        printf("\n");
    }   

        break;

        case 's': for(i=1;i<=9;i++)
    {
        if(i==2||i==3||i==4)
        {
            printf("*");
        }

        if(i==1||i==5||i==9)
        {
            for(k=1;k<=4;k++)
            {
                printf(" *");
            }
        }
        if(i==6||i==7||i==8)
        {
        for(j=1;j<=8;j++)
        {
            printf(" ");
        }
        printf("*");
        }

        printf("\n");
    }
            break;

            case 't': for(i=1;i<=9;i++)
    {
        if(i==1)
        {
            for(k=1;k<=9;k++)
            {
                printf("* ");
            }
        }

        else
        {
            for(k=1;k<=8;k++)
            {
                printf(" ");
            }
            printf("*");
        
        }
        printf("\n");
    }
        break;

        case 'u':for(i=1;i<=9;i++)
    {
        if(i!=9)  
        {
        
        printf("*");
        for(k=1;k<=15;k++)
        {
            printf(" ");
        }
        printf("*");
        
        }

        else
        {
            for(k=1;k<=8;k++)
            {
                printf(" *");
            }

        }
        
        printf("\n");
    }
        break;

        case 'v':for(i=1;i<=9;i++)
{
    
    if(i!=9)
    {
        for(k=1;k<i;k++)
        {
            printf(" ");
        }
        printf("*");

        for(j=16;i*2<=j;j--)
        {
            printf(" ");
        }
        printf("*");

    }
    
    else 
    {
        for(k=1;k<=8;k++)
        {
            printf(" ");
        }
    
        printf("*");
    }
    
    printf("\n");
}
        break;

        case 'y':for(i=1;i<=9;i++)
    {
        if(i==5||i==4||i==3||i==2||i==1)
        {
            for(k=1;k<i;k++)
            {
                printf(" ");
            }
            printf("*");

            for(j=10;(i*2)-1<j;j--)
            {
                printf(" ");
            }
            printf("*");
        }

        else
        {
            for(k=1;k<=5;k++)
            {
                printf(" ");
            }

            printf("*");

        }
    
        printf("\n");
    }

        break;
        
        case 'z':for(i=1;i<=9;i++)
    {
        if(i==1||i==9)
        {
            for(k=1;k<=8;k++)
            {
                printf("* ");
            }
            }
        else
        {
            for(j=17;i*2<j;j--)
            {
                printf(" ");
            }
            printf("*");
        }
        printf("\n");
    }
            break;
            
            default:     printf("gecersiz karekter girdiniz");
            return 1;
            break;

}


}
}

