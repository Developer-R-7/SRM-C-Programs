#include <stdio.h>

int main()
{

    char op;
    double first, second;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &op);
    printf("Enter two operands: ");
    scanf("%lf %lf", &first, &second);

    // Arithmetic Operators
    switch (op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf\n", first, second, first + second);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf\n", first, second, first - second);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf\n", first, second, first * second);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf\n", first, second, first / second);
        break;
    default:
        printf("Error! operator is not correct");
    }
    
    
    // Increment and decrement Operators
    int a = 10, b = 100;
    float c = 10.5, d = 100.5;

    printf("++a = %d \n", ++a);
    printf("--b = %d \n", --b);
    printf("++c = %f \n", ++c);
    printf("--d = %f \n", --d);
    
    
    // Assignment Operators
    int e = 5, f;
    
    f = e;
    printf("f = %d\n", f);
    f += e;
    printf("f = %d\n", f);
    
    
    // Relational Operators
    int g = 5, h = 5, i = 10;

    printf("%d == %d is %d \n", g, h, g == h);
    printf("%d > %d is %d \n", g, h, g > h);
    printf("%d != %d is %d \n", g, i, g != i);
    
    
    // Logicial Operators
    int j = 5, k = 5, l = 10, result;

    result = (j == k) && (l > k);
    
    result = (j == k) || (l < k);
    printf("(j == k) || (l < k) is %d \n", result);
    
    result = !(j != k);
    printf("!(j != k) is %d \n", result);
    
    
    // sizeof Operators
    int w;
    float x;
    double y;
    char z;
    printf("Size of int= %lu bytes\n",sizeof(w));
    printf("Size of float= %lu bytes\n",sizeof(x));
    printf("Size of double= %lu bytes\n",sizeof(y));
    printf("Size of char= %lu byte\n",sizeof(z));
    
    // Bitwise Operators
    int o = 12, p = 25;
    printf("Output = %d\n", o&p);
    printf("Output = %d\n", o|p);
    printf("Output = %d\n", o^p);
    printf("Output = %d\n", ~o);
    
    return 0;
    
}
