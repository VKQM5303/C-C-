#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define str_size 100
int main(void)
{
    char str[str_size];
    int i, wrd, l;
       printf("Input the string: ");
       fgets(str, sizeof str, stdin);	
    i = 0;
    wrd = 1;
    while(str[i] != '\0')
    {
        if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
        {
            wrd++;
        }
        i++;
    }
    printf("Total number of words in the string is : %d\n", wrd - 1);
    
    l = strlen(str);
    printf("Reversed string: ");
    for(i = l; i >= 0; i--)
        {
            printf("%c", str[i]);
        }
    return 0;
}