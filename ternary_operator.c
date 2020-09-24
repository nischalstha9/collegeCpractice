#include <stdio.h>
void
max ()
{
 int a, b, c, d, e;
 printf ("Enter 5 numbers seperated by ,:");
 scanf ("%d,%d,%d,%d,%d", &a, &b, &c, &d, &e);
 printf ("Highest is %d", (a > b) && (a > c) && (a > d) && (a > e) ? a : (b > c) && (b > d) && (b > e) ? b : (c > d) && (c > e) ? c : (d > e) ? d : e);
}


int main()
{
	swap();

	return 0;
}

int swap(){
    int a, b;
    printf("Enter value of a and  b seperated by , :");
    scanf("%d,%d", &a, &b);
    a = a*b;
    b = a/b;
    a = a/b;
    printf("Swapped Values: \n a = %d, b = %d", a, b);
}

int year_to_month(){
    float year;
    printf("Enter how many years:\n");
    scanf("%f", &year);
    printf("\nMonths = %.0f\n Days = %.0f", year*12, year*365);
}
