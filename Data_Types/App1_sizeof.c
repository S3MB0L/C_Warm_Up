#include <stdio.h>
#include <float.h>
main()
{
    printf("char            %d\n", sizeof(char));
    printf("unsigned char   %d\n", sizeof(unsigned char));
    printf("signed char     %d\n", sizeof(signed char));
    printf("int             %d\n", sizeof(int));
    printf("unsigned int    %d\n", sizeof(unsigned int));
    printf("short           %d\n", sizeof(short));
    printf("short int       %d\n", sizeof(short int));
    printf("unsigned short  %d\n", sizeof(unsigned short));
    printf("long            %d\n", sizeof(long));
    printf("long int        %d\n", sizeof(long int));
    printf("long long int   %d\n", sizeof(long long int));
    printf("signed long int %d\n", sizeof(signed long int));
    printf("u long long int %d\n", sizeof(unsigned long long int));
    printf("unsigned long   %d\n", sizeof(unsigned long));
    printf("float           %d\n", sizeof(float));
    printf("max float       %E\n", FLT_MAX);
    printf("min float       %E\n", FLT_MIN);
    printf("double          %d\n", sizeof(double));
    printf("long double     %d\n", sizeof(long double));
    printf("int[10]         %d\n", sizeof(int[10]));
    int integer_array[10];
    printf("number of array elements %d\n",sizeof(integer_array)/sizeof(int));

}
