#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	char str1[61],str2[61],str3[62],str4[61];
	scanf("%s %s %s %S",&str1,&str2,&str3,&str4);

/* Find day, same character from [A-G] and same position from frist two lines */
	int i;
	char * weekdays[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
	for (i = 0; str1[i]&&str2[i]; i++)
	{
		if (str1[i]==str2[i] && str1[i]>='A' && str1[i]<='G' )
		{
			printf("%s\n", weekdays[str1[i]-'A']);
		}
	}

 /* Find hour, picking up from DAY, same character and position, [A-N|0-9] */
    int j;
    for (j = i+1; str1[j]&&str2[j]; j++)
    {
    	if (str1[j]==str2[j])
    	{
    		if (/* condition */)
    		{
    			/* code */
    		}
    	}
    }
	return 0;
}