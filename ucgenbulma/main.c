#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c ;//a,b,c üçgenin kenar uzunlukları
    printf("a degerini giriniz: ");
    scanf("%d",&a);
    printf("b degerini giriniz: ");
    scanf("%d",&b);
    printf("c degerini giriniz: ");
    scanf("%d",&c);
    if (a==b)
    {
        if (b==c)
        {
            printf("bu bir eskenar ucgen");
        }
        else
        {
            printf("bu bir ikizkenar ucgen");
        }

    }
    else if (a==c)
       printf("bu bir ikizkenar ucgen");
    else if (b==c)
        printf("bu bir ikizkenar ucgen");
    else
        printf("bu bir cesitkenar ucgen");
    return 0;
}
