#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("�п�J�n�[�ѱK����r: ");
    char charPassWord[50];
    int i ;
    gets(charPassWord);

    if(charPassWord[0]=='+')
    {
        for(i=1; i<strlen(charPassWord); i++)
            if(i%2==0)
            {
                charPassWord[i]+=2;
            }
            else
            {
                charPassWord[i]+=1;
            }
    }
    if(charPassWord[0]=='-')
    {
        for(i=1; i<strlen(charPassWord);i++)
            if(i%2==0)
            {
                charPassWord[i]-=2;
            }
            else
            {
                charPassWord[i]-=1;
            }
    }
    printf("%s",charPassWord);
    system("PAUSE");
    return 0;
}
