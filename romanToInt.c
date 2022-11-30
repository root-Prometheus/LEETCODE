#include <stdio.h>
int romanToInt(char * s){
    int i,toplam,y,x;
    i = 0;
    y = 0;
    x = 0;
    toplam = 0;
    while (s[i] != '\0')
        i++;
    int d[i + 1];
    while (s[y] != '\0'){
        if (s[y] == 'I'){
            d[y] = 1;
        }
        else if (s[y] == 'V'){
            d[y] = 5;
        }
        else if (s[y] == 'X'){
           d[y] = 10;
        }
        else if (s[y] == 'L'){
           d[y] = 50;
        }
        else if (s[y] == 'C'){
           d[y] = 100;
        }
        else if (s[y] == 'D'){
            d[y] = 500;
        }
        else if (s[y] == 'M'){
           d[y] = 1000;
        }
        y++;
    }
    d[y] = '\0';
    y = 0;
    while (d[y] != '\0'){
        if (d[y] < d[y + 1]){
            d[y] = d[y + 1] - d[y];
            d[y + 1] = 1001;
            x++;
        }
        toplam = toplam + d[y];
        y++;
    }
    x = x * 1001;
    toplam = toplam - x;
    return toplam;
}
int main()
{
    char s[] = "MCMXCIV";
    printf("\n %d ",romanToInt(s));

    return 0;
}
