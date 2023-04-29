//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>

int main()
{
	char str[10];
	scanf("%s", str);

	for(int i=0;i<str.length();i++)
	{
		if(str[i]==str[str.length()-i-1])
		{
		    Printf("pallindrome");
		}
	}
	Printf("not pallindrome");
	
	return 0;
}
