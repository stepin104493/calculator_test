#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"calcheader.h"

int main() 
{
	int choice, i, a, b, res;
	float x, y, z, result;
	int m, n, p, q, c, d, k, sum = 0;
  	int first[10][10], second[10][10];
	do 
	{
		printf("\nSelect your operation (0 to exit):\n");
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
		printf("5. Square root\n6. X ^ Y\n7. X ^ 2\n8. X ^ 3\n");
		printf("9. 1 / X\n10. X ^ (1 / Y)\n11. X ^ (1 / 3)\n");
		printf("12. 10 ^ X\n13. X!\n14. %\n15. log10(x)\n16. Modulus\n");
		printf("17. Sin(X)\n18. Cos(X)\n19. Tan(X)\n20. Cosec(X)\n");
		printf("21. Cot(X)\n22. Sec(X)\n");
		printf("23. GCD \n24. LCM\n");
		printf("25. Roots of Quadratic Equation\n26. Matrix Addition\n27. Matrix Multiplication\n");
		printf("Choice: ");
		scanf("%d", &choice);
		if(choice == 0) exit(0);
		switch(choice)
		{	
			case 1:
				printf("Enter X: ");
				scanf("%f", &x)	;
				printf("\nEnter Y: ");
				scanf("%f", &y);
				result = add(x, y);
				printf("\nResult: %f", result);
				break;
			case 2:
				printf("Enter X: ");
				scanf("%f", &x);	
				printf("\nEnter Y: ");
				scanf("%f", &y);
				result = sub(x, y);
				printf("\nResult: %f", result);
				break;
			case 3:
				printf("Enter X: ");
				scanf("%f", &x);
				printf("\nEnter Y: ");
				scanf("%f", &y);
				result = mult(x, y);
				printf("\nResult: %f", result);
				break;
			case 4:
				printf("Enter X: ");
				scanf("%f", &x);
				printf("\nEnter Y: ");
				scanf("%f", &y);
				result = division(x, y);
				printf("\nResult: %f", result);
				break;
			case 5:
				printf("Enter X: ");
				scanf("%f", &x);
				result = squareroot(x);
				printf("\nResult: %f", result);
				break;
			case 6:
				printf("Enter X: ");
				scanf("%f", &x);
				printf("\nEnter Y: ");
				scanf("%f", &y);
				result = power(x, y);
				printf("\nResult: %f", result);
				break;
			case 7:
				printf("Enter X: ");
				scanf("%f", &x);
				result = square(x);
				printf("\nResult: %f", result);
				break;
			case 8:
				printf("Enter X: ");
				scanf("%f", &x);
				result = cube(x);
				printf("\nResult: %f", result);
				break;
			case 9:
				printf("Enter X: ");
				scanf("%f", &x);
				result = inverse(x);
				printf("\nResult: %f", result);
				break;
			case 10:
				printf("Enter X: ");
				scanf("%f", &x);
				printf("\nEnter Y: ");
				scanf("%f", &y);
				result = yroot(x, y);
				printf("\nResult: %f", result);
				break;
			case 11:
				printf("Enter X: ");
				scanf("%f", &x);
				y = 3;
				result = cuberoot(x);
				printf("\nResult: %f", result);
				break;
			case 12:
				printf("Enter X: ");
				scanf("%f", &x);
				result = tenpow(x);
				printf("\nResult: %f", result);
				break;
			case 13:
				printf("Enter X: ");
				scanf("%f", &x);
				result = factorial(x);	
				printf("\nResult: %.f", result);
				break;
			case 14:
				printf("Enter X: ");
				scanf("%f", &x);
				printf("\nEnter Y: ");
				scanf("%f", &y);
				result = percent(x, y);
				printf("\nResult: %.2f", result);
				break;
			case 15:
				printf("Enter X: ");
				scanf("%f", &x);
				result = logten(x);
				printf("\nResult: %.2f", result);
				break;
			case 16:
				printf("Enter X: ");
				scanf("%d", &a);
				printf("\nEnter Y: ");
				scanf("%d", &b);
				res = modulus(a, b);
				printf("\nResult: %d", res);
				break;
			case 17:
				printf("Enter X: ");
				scanf("%f", &x);
				result = trigosin(x);
				printf("\nResult: %.2f", result);
				break;
			case 18:
				printf("Enter X: ");
				scanf("%f", &x);
				result = trigocos(x);
				printf("\nResult: %.2f", result);
				break;
			case 19:
				printf("Enter X: ");
				scanf("%f", &x);
				result = trigotan(x);
				printf("\nResult: %.2f", result);
				break;
			case 20:
				printf("Enter X: ");	
				scanf("%f", &x);
				result = trigocosec(x);
				printf("\nResult: %.2f", result);
				break;
			case 21:
				printf("Enter X: ");
				scanf("%f", &x);
				result = trigocot(x);
				printf("\nResult: %.2f", result);
				break;
			case 22:
				printf("Enter X: ");
				scanf("%f", &x);
				result = trigosec(x);
				printf("\nResult: %.2f", result);
				break;
			case 23:printf("Enter X: ");
				scanf("%d", &a);
				printf("\nEnter Y: ");
				scanf("%d", &b);
				res = gcd(a, b);
				printf("\nResult: %d", res);
				break;
			case 24:
				printf("Enter X: ");
				scanf("%d", &a);
				printf("\nEnter Y: ");
				scanf("%d", &b);
				res = lcm(a, b);
				printf("\nResult: %d", res);
				break;
			case 25:
				printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    				scanf("%f %f %f", &x, &y, &z);
    				quadroots(x, y, z);
    				break;	
    			case 26:
    				printf("Enter the number of rows and columns of matrices\n");
  				scanf("%d%d", &m, &n);
  				printf("Enter the elements of first matrix\n");
 				for (  c = 0 ; c < m ; c++ )
    					for ( d = 0 ; d < n ; d++ )
      						scanf("%d", &first[c][d]);
  				printf("Enter the elements of second matrix\n");
    					for ( c = 0 ; c < m ; c++ )
      						for ( d = 0 ; d < n ; d++ )
        						scanf("%d", &second[c][d]);
        			
        			matrixAddition(m, n, first, second);
				break;
    			case 27:
    				printf("Enter the number of rows and columns of first matrix\n");
  				scanf("%d%d", &m, &n);
  				printf("Enter the elements of first matrix\n");
 				for (  c = 0 ; c < m ; c++ )
    					for ( d = 0 ; d < n ; d++ )
      						scanf("%d", &first[c][d]);
  				printf("Enter the number of rows and columns of second matrix\n");
  				scanf("%d%d", &p, &q);
  				if ( n != p )
    					printf("Matrices with entered orders can't be multiplied with each other.\n");
  				else
  				{
    					printf("Enter the elements of second matrix\n");
    					for ( c = 0 ; c < p ; c++ )
      						for ( d = 0 ; d < q ; d++ )
        						scanf("%d", &second[c][d]);
        			}
        			
        			matrixMultiplication(m, n, p, q, first, second);
				break;
			default:
				printf("\nInvalid Choice!");
		}
	printf("\nPress 1 to Continue or 0 to Exit\n");
	scanf("%d", &choice);
	} while(choice);
	return 0;
}
