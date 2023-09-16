/*A. Petya and Strings
time limit per test2 seconds
memory limit per test256 megabytes
inputstandard input
outputstandard output
Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
  */
#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000];
    char b[1000];
    gets(a);
    gets(b);
    for (int i=0;i<strlen(a);i++){
        if(a[i]<97){
            a[i]+=32;
        }
        if(b[i]<97){
            b[i]+=32;
        }
    }
    int x=strcmp(a,b);
    printf("%d",x);
    return 0;
}
