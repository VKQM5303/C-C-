#include <stdio.h>
#include <string.h>
int main(void)
{
  	char str[100], ch;
  	int i, l, j;
  	printf("Enter any string : ");
  	gets(str);

  	printf("Enter the character to remove: ");
  	scanf("%c", &ch);
	l = strlen(str);	
  	for(i = 0; i < l; i++)
	{
		if(str[i] == ch)
		{
			for(j = i; j < l; j++)
			{
				str[j] = str[j + 1];
			}
			l--;
			i--;	
		} 
	}	
	printf("String after Removing All Occurrences: %s", str);
  	return 0;
}