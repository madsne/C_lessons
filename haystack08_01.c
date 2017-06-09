// haystack08_01.c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strstrstr(const char *haystack, const char *needle)
{
	// int position = -1;
	// int anfang = 0;
	// int i = 0;

	// while((haystack[i] != '\0')  && (needle[anfang] != '\0'))
	// {
	// 	if(needle[anfang] != haystack[i])
	// 	{
	// 		i++;
	// 	}
	// 	else if(needle[anfang] == haystack[i])
	// 	{
	// 		anfang ++;
	// 		i ++;
	// 		position = i - anfang;
	// 	}
	// }
	// return position;

	for(int j = 0; haystack[j] != '\0'; j++ ) 
	{
		int i= 0;
		while ( needle[i] != '\0' && haystack[j] != '\0' && needle[i] == haystack[j] ) 
		{
			i++;
			j++;
		}
		if( needle[i] == '\0' )
			return j-i ; // reached end of needle without mismatch
	}
	return -1;
}



int main()
{
	// int hlen = 32;
	// int nlen = 8;
	char haystack[40];
	char needle[40];

	// char *haystack = 	malloc(hlen * sizeof(char));
	// char *needle =		malloc(nlen * sizeof(char));



	printf("Haystack: \n");
	scanf("%s", haystack);

	printf("Und nun Needle: \n");
	scanf("%s", needle);

	int anfang = strstrstr(haystack, needle);
	if(anfang < 0)
		printf("Needle not in Haystack\n");
	else 
		printf("Needle in Haystack. Starts at position %d\n", anfang);
return 0;
}