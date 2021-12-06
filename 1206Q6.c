#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char sen[99999];
    gets(sen);
    for (int i = 0; i < strlen(sen); i++)
    {
        if (islower(sen[i]))
        {
            sen[i]=sen[i]-32;
        }

        else if (isupper(sen[i]))
        {
            sen[i]=sen[i]+32;
        }
    }
    puts(sen);
}
