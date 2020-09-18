#include<math.h>
#include<stdio.h>

float add(float a, float b)
{
	return (a+b);
}
float sub(float a, float b)
{
	return (a-b);
}
float mult(float a, float b)
{
	return (a*b);
}
float division(float a, float b)
{
	return (a/b);
}
float squareroot(float a)
{
	return sqrt(a);
}
float power(float a, float b)
{
	return pow(a, b);
}
float square(float a)
{
	return pow(a, 2);
}
float cube(float a)
{
	return pow(a, 3);
}
float inverse(float a)
{
	return pow(a, -1);
}
float yroot(float a, float b)
{
	return pow(a, (1/b));
}
float cuberoot(float a)
{
	return pow(a, (1/3));
}
float tenpow(float a)
{
	return pow(10, a);
}
float factorial(float a)
{
	float result = 1;
	for(int i = 1; i <= a; i++) 
	{
		result = result * i;
	}
	return result;
}
float percent(float a, float b)
{
	return (a * b) / 100;
}
float logten(float a)
{
	return log10(a);
}
int modulus(int a, int b)
{
	return (a % b);
}
float trigosin(float a)
{
	return sin(a * 3.14159 / 180);
}
float trigocos(float a)
{
	return cos(a * 3.14159 / 180);
}
float trigotan(float a)
{
	return tan(a * 3.14159 / 180);
}
float trigocosec(float a)
{
	return 1 / (sin(a * 3.14159 / 180));
}
float trigocot(float a)
{
	return 1 / (tan(a * 3.14159 / 180));
}
float trigosec(float a)
{
	return 1 / (cos(a * 3.14159 / 180));
}
void quadroots(float a, float b, float c)
{
    	float root1, root2, imaginary;
    	float discriminant;

	/* Calculate discriminant */
	discriminant = (b * b) - (4 * a * c);

	/* Compute roots of quadratic equation based on the nature of discriminant */
	switch(discriminant > 0)
    	{
		case 1:
	        	/* If discriminant is positive */
        		root1 = (-b + sqrt(discriminant)) / (2 * a);
            		root2 = (-b - sqrt(discriminant)) / (2 * a);
            		printf("Two distinct and real roots exists: %.2f and %.2f", 
            		root1, root2);
            		break;

        	case 0:
           		/* If discriminant is not positive */
            		switch(discriminant < 0)
            		{
                		case 1:
                    		/* If discriminant is negative */
                    		root1 = root2 = -b / (2 * a);
                    		imaginary = sqrt(-discriminant) / (2 * a);
                    		printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f", 
                            	root1, imaginary, root2, imaginary);
                    		break;

                		case 0:
                    		/* If discriminant is zero */
                    		root1 = root2 = -b / (2 * a);
                    		printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
                    		break;
           		}
	}

}
void matrixMultiplication(int m, int n, int p, int q, int first[10][10], int second[10][10])
{
	int multiply[10][10];
	int sum;
	
    	for ( int c = 0 ; c < m ; c++ )
    	{
      		for ( int d = 0 ; d < q ; d++ )
      		{
        		for ( int k = 0 ; k < p ; k++ )
        		{
          			sum = sum + first[c][k]*second[k][d];
        		}
        		multiply[c][d] = sum;
        		sum = 0;
      		}
    	}
    	
    	printf("Product of entered matrices:-\n");
 
    	for ( int c = 0 ; c < m ; c++ )
    	{
      		for ( int d = 0 ; d < q ; d++ )
        		printf("%d\t", multiply[c][d]);
		printf("\n");
    	}
}
void matrixAddition(int m, int n, int first[10][10], int second[10][10])
{
	int sum[10][10];	
	
    	for (int i = 0; i < m; i++)
    	{
        	for (int j = 0; j < n; j++) 
        	{
            		sum[i][j] = first[i][j] + second[i][j];
        	}

   		printf("\nSum of two matrices: \n");
    		for (int i = 0; i < m; i++)
    		{
        		for (int j = 0; j < n; j++) 
        		{
            			printf("%d   ", sum[i][j]);
            			if (j == m - 1) 
            			{
                			printf("\n\n");
            			}
        		}
        	}
        }
}
int gcd(int x, int y) {
    int r = 0, a, b;
    a = (x > y) ? x : y; // a is greater number
    b = (x < y) ? x : y; // b is smaller number
 
    r = b;
    while (a % b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return r;
}
int lcm(int x, int y) {
    int a;
    a = (x > y) ? x : y; // a is greater number
    while (1) {
        if (a % x == 0 && a % y == 0)
            return a;
        ++a;
    }
}
