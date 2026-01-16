#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int Sondan_Karakter_Bul(char charDizi[], char aranan)
{
    int i = 0, len = 0, uygun = 0;

    while (charDizi[i] != '\0')
    {
        i++;
        len++;
    }

    for (i = len - 1; i >= 0; i--)
    {
        if (charDizi[i] == aranan)
        {
            uygun = 1;
            break;
        }
    }
    if (uygun == 1)
    {
        return len - i;
    }
    else
    {
        return -1;
    }
}

int main()
{
    printf("%d", Sondan_Karakter_Bul("Temeli", 'a'));
}
