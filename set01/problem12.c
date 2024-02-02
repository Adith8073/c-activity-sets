#include <stdio.h>

struct complex_number
{
    float real, imaginary;
};
typedef struct complex_number Complex;





int get_n()
{
    int n;
    printf("Enter the number of complex numbers: ");
    scanf("%d", &n);
    return n;
}

Complex input_complex()
{
    Complex c;
    printf("Enter real part: ");
    scanf("%f", &c.real);
    printf("Enter imaginary part: ");
    scanf("%f", &c.imaginary);
    return c;
}

void input_n_complex(int n, Complex c[n])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter Complex Number %d:\n", i + 1);
        c[i] = input_complex();
    }
}

Complex add(Complex a, Complex b)
{
    Complex result;
    result.real = a.real + b.real;
    result.imaginary = a.imaginary + b.imaginary;
    return result;
}

Complex add_n_complex(int n, Complex c[n])
{
    Complex sum = {0, 0};
    for (int i = 0; i < n; i++)
    {
        sum = add(sum, c[i]);
    }
    return sum;
}

void output(int n, Complex c[n], Complex result)
{
    printf("Complex Numbers Entered:\n");
    for (int i = 0; i < n; i++)
    {
        printf("Complex Number %d: %.2f + %.2fi\n", i + 1, c[i].real, c[i].imaginary);
    }

    printf("Sum of %d Complex Numbers: %.2f + %.2fi\n", n, result.real, result.imaginary);
}


int main()
{
    int n = get_n();
    Complex numbers[n];
    input_n_complex(n, numbers);

    Complex sum = add_n_complex(n, numbers);

    output(n, numbers, sum);

    return 0;
}