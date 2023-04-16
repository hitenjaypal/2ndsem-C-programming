#include <stdio.h>
int main() {
    char c;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}

// #include<stdio.h>

// int main() 
// {
//    int i,c=0,n;
//    int a=0;
//    int b=1;
//    printf("Enter a number to generate fibonacci series for first n terms\n");
//    scanf("%d",&n);

//    printf("Fibonacci series for first %d terms:-\n",n);
//    for(i=0;i<n;i++)
//    {
//        printf("%d ",c);
//        a=b;
//        b=c;
//        c=a+b;
//    }
// return 0;
// }