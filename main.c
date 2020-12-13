#include <stdio.h>
void ucgenust(int n)
{
    int i,j;
    int bosluksayisi;
    bosluksayisi=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=bosluksayisi;j++)
        {
            printf(" ");
        }

        for(j=1;j<=2*i-1;j++)
        {
            printf("C");
        }
        bosluksayisi--;
        printf("\n");
    }

}
void ucgenalt (int n)
{
    int i,j;
    int bosluksayisi=1;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=bosluksayisi;j++)
        {
            printf(" ");
        }
        bosluksayisi++;
        for(j=1;j<=2*(n-i)-1;j++)
        {
            printf("+");
        }
        printf("\n");
    }
}
int main() {
    int satir;
    printf("Lutfen satir sayisini giriniz\n");
    scanf("%d",&satir);
    ucgenust(satir);
    ucgenalt(satir);
    return 0;
}
