#include <stdio.h>

void main()
{
    int opt;
    printf("Enter task number you want to do:\n");
    printf("1. Convert Celcius to Farenheit.\n");
    printf("2. Calculate Area and Perimeter of circle.\n");
    printf("3. Convert Decimal to Hexadecimal and Octal.\n");
    printf("4. Print remainder when divided by 3.\n");
    printf("5. Find Sum or Difference according to their size.\n");
    printf("6. Calculate Simple Interest.\n");
    printf("7. Calculate Percentage.\n");
    scanf("%d", &opt);
    printf("=========================================================\n");
    //Here we used ternary operator to decide task to do on basis of user input
    //Syntax is <condition>?<task if true>:<task if false>;
    opt == 1 ? cel_to_far() : opt == 2 ? area_per_circle() : opt == 3 ? dec_oct_hex() : opt == 4 ? rem_of_3() : opt == 5 ? sum_or_diff() : opt == 6 ? simple_interest() : opt == 7 ? percentage() : main();
}

int cel_to_far()
{
    float celcius;
    printf("Enter the temperature in Celcius\n");
    scanf("%f", &celcius);
    printf("The temperature in Farenheit is: %.2f", 1.8 * celcius + 32); //derived(9/5) of formula to 1.8 for ease calculation
    return 0;
}

int area_per_circle()
{
    float radius;
    printf("Enter the radius of circle\n");
    scanf("%f", &radius);
    printf("The area of circle is %.3f sq. unit.\n", 3.1415926535897932384626433832 * radius * radius); //that long floating value is Pi converted to float
    printf("The perimeter of circle is %.3f unit.", 2 * 3.1415926535897932384626433832 * radius);
    return 0;
}

int dec_oct_hex()
{
    int decimal;
    printf("Enter Decimal Number:\n");
    scanf("%d", &decimal);
    printf("The Octal equivalent of %d is %o.\n", decimal, decimal);       //Here %o prints the decimal value in octal representation according to documentation
    printf("The Hexadecimal equivalent of %d is %x.\n", decimal, decimal); //Here %x prints the decimal value in hexadecimal representation according to documentation
    return 0;
}

int rem_of_3()
{
    //Here we did long long to modify integer to hold long data values
    long long int a;
    printf("enter any integer:\n");
    scanf("%lld", &a);
    printf("the rem_of_3 is %lld", a % 3); //%lld is used because we declared "a" as long long int above
    return 0;
}

int sum_or_diff()
{
    long long int a, b;
    printf("enter value of a:\n");
    scanf("%lld", &a);
    printf("enter value of b:\n");
    scanf("%lld", &b);
    a > b ? printf("num a is greater, so sum is %lld", a + b) : printf("num a is smaller, so difference is %lld", a - b);
    return 0;
}

int simple_interest()
{
    float P, T, R;
    printf("Enter Principal Amount:\n");
    scanf("%f", &P);
    printf("Enter Time in Years:\n");
    scanf("%f", &T);
    printf("Enter Rate of Interest:\n");
    scanf("%f", &R);
    printf("The simple interest is Rs. %.2f", (P * T * R) / 100); //.2%f strips digits after floating point
    return 0;
}

int percentage()
{
    float math, eng, sci, nep, com;
    printf("Enter Marks in Maths:\n");
    scanf("%f", &math);
    printf("Enter Marks in English:\n");
    scanf("%f", &eng);
    printf("Enter Marks in Science:\n");
    scanf("%f", &sci);
    printf("Enter Marks in Nepali:\n");
    scanf("%f", &nep);
    printf("Enter Marks in Computer:\n");
    scanf("%f", &com);
    printf("Your percentage is %.2f.", (math + sci + eng + nep + com) * 0.2); //0.2 represents 100/500 which is total full marks
    return 0;
}
