#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define max 127

int main() 
{
    char c,a[max],s[max];
    scanf("%c", &c);
    scanf("%s\n", &a);
    scanf("%[^\n]%*c", &s);
    
    printf("%c\n", c);
    printf("%s\n", a);
    printf("%s\n", s);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
