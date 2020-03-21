
/***********************************Factorial Function************************************************/

void factorial(int n) 
{ 
    int result=1;
    if (n == 0)
	{
        printf("0! is one 1 \n");
	}		
    for (int i = 1; i <= n; i++)	
    {
	    result *=i;

    }	
	    printf("Factorial of %d is %d ",n,result); 

}
/************************************Power Function***************************************************/
 
void power(int base, int exponent)
{
int result=1;
for(exponent; exponent>0; exponent--)
{
  result = result * base; 
}
printf("%d",result);
}
/************************************SquareRoot Function**********************************************/

void SquareRoot(int n)
{
	    float temp, sqrt;
		sqrt = n / 2;
        temp = 0;
    while(sqrt != temp)
	{
        
        temp = sqrt;  
        sqrt = ( n/temp + temp) / 2;
    }

        printf("The square root of '%d' is '%f'", n, sqrt);	
}
/************************************CubeRoot Function*************************************************/

void cubeRoot(double n) 
{
   double i, precision = 0.000001;
   
   for(i = 1; (i*i*i) <= n; ++i);         //Integer part

   for(--i; (i*i*i) < n; i += precision);  //Fractional part
   
      printf("Cube Root is   %f", i);

}
/*******************************************************************************************************/