/**
 * c program to convert centimeter into kilometer
 */
 
 #include,stdio.h>
 int main()
 {
 	float cm,km;
 	
 	/* input length in centimeter from user */
 	printf("enter length in centimeter:");
 	scanf("%f",&cm);
 	/*convert centimeter into kilometer */
 	km=cm/100000.0;
 	printf("length in kilometer=%.2f km",km);
 	return 0;
 	
 }
  
  
