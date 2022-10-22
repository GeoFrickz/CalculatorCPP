#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

const double PI = 3.1415926535;
double x, y, s, ss;
double rad, deg, srad, sdeg;
long long int a, b, c;
long long int m, n, o, p;
char ub, ua;
char va[10];
char tempa, tempb;
char w[5] = "yes";

int main()
{
	while (strcmp(w, "yes") == 0)
	{
		printf("Choose the type of calculator you wish to use! (0 to exit program)\n");
		printf("1. Standard and Scientific Calculator\n");
		printf("2. Trigonometry Calculator\n");
		printf("3. Converter\n");
		
		printf("\n");
		printf("Enter the number of the calculator type : "); scanf("%lld", &m); getchar();
		printf("\n\n");
		
		switch(m)
		{
			case 0:
				break;
			case 1:
				printf("Choose the operator you wish to use! (0 to exit program)\n");
				printf("1.  (+)       2.  (-)       3.  (*)       4.  (/)       5.  (mod)\n");
				printf("6.  (x!)      7.  (x*10^y)   8.  (1/x)     9.  (|x|)     10. (x^2)\n");
				printf("11. (sqrt(x)) 12. (x^y)     13. (10^x)    14. ((a)log(x))  15. (ln(x))\n");
				
				printf("\n");
				printf("Enter the number of the operator : "); scanf("%lld", &n); getchar();
				printf("\n\n");
				
				switch(n)
				{
					case 0:
						break;
						
					case 1:
						printf("Enter the first number  : "); scanf("%lf", &x); getchar();
						printf("Enter the second number : "); scanf("%lf", &y); getchar();
						s = x+y;
						printf("Result: %.2lf\n", s);
						break;
						
					case 2:
						printf("Enter the first number  : "); scanf("%lf", &x); getchar();
						printf("Enter the second number : "); scanf("%lf", &y); getchar();
						s = x-y;
						printf("Result: %.2lf\n", s);
						break;
						
					case 3:
						printf("Enter the first number  : "); scanf("%lf", &x); getchar();
						printf("Enter the second number : "); scanf("%lf", &y); getchar();
						s = x*y;
						printf("Result: %.2lf\n", s);
						break;
						
					case 4:
						printf("Enter the first number  : "); scanf("%lf", &x); getchar();
						printf("Enter the second number : "); scanf("%lf", &y); getchar();
						if (y==0)
						{
							printf("Undefined\n");
							break;
						}
						s = x/y;
						printf("Result: %.2lf\n", s);
						break;
						
					case 5:
						printf("Enter the first number  : "); scanf("%lld", &a); getchar();
						printf("Enter the second number : "); scanf("%lld", &b); getchar();
						c = a%b;
						printf("Result: %lld\n", c);
						break;
						
					case 6:
						printf("Enter a whole number : "); scanf("%lld", &a); getchar();
						for (int i=a-1; i>0; i--)
						{
							a = a*i;
						}
						printf("Result: %lld\n", a);
						break;
						
					case 7:
						printf("Enter the number    : "); scanf("%lf", &x); getchar();
						printf("Enter the exponent  : "); scanf("%lf", &y); getchar();
						s = x*(pow(10.0, y));
						printf("Result: %.2lf\n", s);
						break;
						
					case 8:
						printf("Enter the number : "); scanf("%lf", &x); getchar();
						s = 1/x;
						printf("Result: %.2lf\n", s);
						break;
						
					case 9:
						printf("Enter the number : "); scanf("%lf", &x); getchar();
						
						(x<0) ? printf("Result: %.2lf\n", x*(-1)) : printf("Result: %.2lf\n", x);
						break;
						
					case 10:
						printf("Enter the number : "); scanf("%lf", &x); getchar();
						s = x*x;
						printf("Result: %.2lf\n", s);
						break;
						
					case 11:
						printf("Enter the number : "); scanf("%lf", &x); getchar();
						s = sqrt(x);
						printf("Result: %.2lf\n", s);
						break;
						
					case 12:
						printf("Enter the first number  : "); scanf("%lf", &x); getchar();
						printf("Enter the second number : "); scanf("%lf", &y); getchar();
						s = x;
						for (int i=1; i<y; i++)
						{
							s = s*x;
						}
						printf("Result: %.2lf\n", s);
						break;
					
					case 13:
						printf("Enter the exponent  : "); scanf("%lf", &y); getchar();
						s = pow(10.0, y);
						printf("Result: %.2lf\n", s);
						break;
					
					case 14:
						printf("Enter the number : "); scanf("%lf", &x); getchar();
						printf("Enter the base : "); scanf("%lf", &y); getchar();
						s = log(y)(x);
						printf("Result: %.2lf\n", s);
						break;
						
					case 15:
						printf("Enter the number : "); scanf("%lf", &x); getchar();
						s = log(x);
						printf("Result: %.2lf\n", s);
						break;
						
					default:
						printf("Invalid input\n");
						break;
				}
				break;
			case 2:
				printf("Choose the function you wish to use! (0 to exit program)\n");
				printf("1. (sin) 2. (cos) 3. (tan) 4. (csc) 5. (sec)\n");
				printf("6. (cot) 7. (arcsin) 8. (arccos) 9. (arctan)\n");
				
				printf("\n");
				printf("Enter the number of the function : "); scanf("%lld", &o); getchar();
				printf("\n\n");
				
				switch(o)
				{
					case 1:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						deg = x*0.0174532925;
						srad = sin(x);
						sdeg = sin(deg);
						
						printf("Result if input was in radians: %.2lf\n", srad);
						printf("Result if input was in degrees: %.2lf\n", sdeg);		
						break;
						
					case 2:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						deg = x*0.0174532925;
						srad = cos(x);
						sdeg = cos(deg);
						
						printf("Result if input was in radians: %.2lf\n", srad);
						printf("Result if input was in degrees: %.2lf\n", sdeg);		
						break;
						
					case 3:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						deg = x*0.0174532925;
						srad = tan(x);
						sdeg = tan(deg);
						
						printf("Result if input was in radians: %.2lf\n", srad);
						printf("Result if input was in degrees: %.2lf\n", sdeg);		
						break;
						
					case 4:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						deg = x*0.0174532925;
						srad = 1/sin(x);
						sdeg = 1/sin(deg);
						
						printf("Result if input was in radians: %.2lf\n", srad);
						printf("Result if input was in degrees: %.2lf\n", sdeg);		
						break;
						
					case 5:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						deg = x*0.0174532925;
						srad = 1/cos(x);
						sdeg = 1/cos(deg);
						
						printf("Result if input was in radians: %.2lf\n", srad);
						printf("Result if input was in degrees: %.2lf\n", sdeg);		
						break;
					
					case 6:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						deg = x*0.0174532925;
						srad = 1/tan(x);
						sdeg = 1/tan(deg);
						
						printf("Result if input was in radians: %.2lf\n", srad);
						printf("Result if input was in degrees: %.2lf\n", sdeg);		
						break;
						
					case 7:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						srad = asin(x);
						sdeg = srad*57.2957795;
						printf("Result in radians: %.2lf\n", srad);
						printf("Result in degrees: %.2lf\n", sdeg);
						break;
						
					case 8:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						srad = acos(x);
						sdeg = srad*57.2957795;
						printf("Result in radians: %.2lf\n", srad);
						printf("Result in degrees: %.2lf\n", sdeg);
						break;
						
					case 9:
						printf("Enter the value : "); scanf("%lf", &x); getchar();
						srad = atan(x);
						sdeg = srad*57.2957795;
						printf("Result in radians: %.2lf\n", srad);
						printf("Result in degrees: %.2lf\n", sdeg);
						break;
						
					default:
						printf("Invalid input\n");
						break;
				}
				break;
				
			case 3:
				printf("Choose the converter you wish to use! (0 to exit program)\n");
				printf("1. Mass converter (from kg)\n");
				printf("2. Length converter (from km)\n");
				printf("3. Angle converter\n");
				printf("4. Temperature converter\n");
				
				printf("\n");
				printf("Enter the number of the converter : "); scanf("%lld", &p); getchar();
				printf("\n\n");
				
				switch(p)
				{
					case 1:
						printf("Enter the initial mass : "); scanf("%lf", &x); getchar();
						printf("Enter the wanted unit (k for kilogram, h for hectogram, etc): "); scanf("%c", &ua); getchar();
						
	
						if (ua == 'h')
						{
							s = x*10.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'D')
						{
							s = x*100.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'g')
						{
							s = x*1000.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'd')
						{
							s = x*10000.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'c')
						{
							s = x*100000.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'm')
						{
							s = x*1000000.0;
							printf("Result: %.2lf\n", s);
						}
						else
						{
							printf("Invalid input\n");
						}
						break;
					
					case 2:
						printf("Enter the initial length : "); scanf("%lf", &x); getchar();
						printf("Enter the wanted unit (k for kilometer, h for hectometer, M for meter, m for milimeter, etc): "); scanf("%c", &ua); getchar();
						
	
						if (ua == 'h')
						{
							s = x*10.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'D')
						{
							s = x*100.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'M')
						{
							s = x*1000.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'd')
						{
							s = x*10000.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'c')
						{
							s = x*100000.0;
							printf("Result: %.2lf\n", s);
						}
						else if (ua == 'm')
						{
							s = x*1000000.0;
							printf("Result: %.2lf\n", s);
						}
						else
						{
							printf("Invalid input\n");
						}
						break;
					
					case 3:
						printf("Enter initial angle type (degree/radian): "); scanf("%s", &va); getchar();
						if (strcmp(va, "degree") == 1 && strcmp(va, "radian") == 1)
						{
							printf("Invalid input\n");
							break;
						}
						printf("Enter initial value : "); scanf("%lf", &x); getchar();
						
						if (strcmp(va, "degree") == 0)
						{
							s = 0.01745329*x;
							printf("Result: %.5lf\n", s);
						}
						else if (strcmp(va, "radian") == 0)
						{
							s = 57.2957795*x;
							printf("Result: %.5lf\n", s);
						}
						break;
					
					case 4:
						printf("Enter initial temperature type (C/R/F/K) : "); scanf("%c", &tempa); getchar();
						printf("Enter initial value : "); scanf("%lf", &x); getchar();
						printf("Enter wanted temperature type (C/R/F/K) : "); scanf("%c", &tempb); getchar();
						
						if (tempa == 'C')
						{
							if (tempb == 'R')
							{
								s = x*4.0/5.0;
								printf("Result: %.2lf\n", s);
							}
							else if (tempb == 'F')
							{
								s = x*9.0/5.0+32.0;
								printf("Result: %.2lf\n", s);
							}
							else if (tempb == 'K')
							{
								s = x+273.0;
								printf("Result: %.2lf\n", s);
							}
						}
						else if (tempa == 'R')
						{
							ss = x*5.0/4.0;
							if (tempb == 'C')
							{
								printf("Result: %.2lf\n", ss);
							}
							else if (tempb == 'F')
							{
								s = ss*9.0/5.0+32.0;
								printf("Result: %.2lf\n", s);
							}
							else if (tempb == 'K')
							{
								s = ss+273.0;
								printf("Result: %.2lf\n", s);
							}
						}
						else if (tempa == 'F')
						{
							ss = (x-32.0)*5.0/9.0;
							if (tempb == 'C')
							{
								printf("Result: %.2lf\n", ss);
							}
							else if (tempb == 'R')
							{
								s = ss*4.0/5.0;
								printf("Result: %.2lf\n", s);
							}
							else if (tempb == 'K')
							{
								s = ss+273.0;
								printf("Result: %.2lf\n", s);
							}
						}
						else if (tempa == 'K')
						{
							ss = x-273.0;
							if (tempb == 'C')
							{
								printf("Result: %.2lf\n", ss);
							}
							else if (tempb == 'R')
							{
								s = ss*4.0/5.0;
								printf("Result: %.2lf\n", s);
							}
							else if (tempb == 'F')
							{
								s = ss*9.0/5.0+32.0;
								printf("Result: %.2lf\n", s);
							}
						}
						else
						{
							printf("Invalid input\n");
						}
						break;
					
					default:
						printf("Invalid input\n");
						break;
				}
				break;
			
			default:
				printf("Invalid input\n");
				break;
				
		}
		printf("Do you wish to continue (yes/no) : "); scanf("%s", &w); getchar();
		if (strcmp(w, "yes") == 0)
		{
			printf("\n\n\n\n");
		}
		else if (strcmp(w, "no") == 0)
		{
			printf("\n");
			continue;
		}
		else
		{
			printf("Invalid input\n");
		}
	
	}
	
	system("pause");
	return 0;
}

