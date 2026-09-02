
#include <stdio.h>

int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 65 && c <= 90)
    {
        printf("ALPHABET\n");
        printf("UPPERCASE\n");
    }
    else if (c >= 97 && c <= 122)
    {
        printf("ALPHABET\n");
        printf("LOWERCASE\n");
    }
    else if (c >= 48 && c <= 57)
    {
        printf("DIGIT\n");
    }
    else if (c == 32)
    {
        printf("SPACE\n");
    }
	else if(c==9){
        printf("tab\n");

	}
	else if(c==10)
	{
        printf("new line\n");

	}
	else if(c==13)
	{
       printf("carriage return\n");

	}	
    else
    {
        printf("OTHER\n");
    }

    return 0;
}

