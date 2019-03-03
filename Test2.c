#include <stdio.h>
#include <conio.h>
#include <stdlib.h>	
int v1=0,v2;
float a,b,c,d=0,result;
char name[] = "test2.txt";

int main() {
	printf("Enter 1 number: ");
	scanf("%e",&a);
	printf("Enter 2 number: ");
	scanf("%e",&b);
	printf("Enter 3 number: ");
	scanf("%e",&c);
	FILE *test;
	long pos=ftell(test);
	
	if ((test = fopen(name, "r")) == NULL)					
  {
	test=fopen(name, "a");
	fseek(test,0,SEEK_END);
    	while (d==0) {
		printf("Enter the number you are going to divide: ");
		scanf("%e",&d);
		if(d==0){
		printf("It is impossible to divide by zero!\n");
		}
	}
	result = (a+b+c) / d;
	printf("Result = ");
	printf("%.1f",result);
	
	fprintf(test, "Result: ");
	fprintf(test, "%3.2f", result);
	fprintf(test, "\n");
	fclose(test);
	printf ("\nResult write on \"test2.txt\"");
    
  }
  
    else					
	{
	if(pos!=0) { 											
	  printf ("File contains number\n");
	  printf ("Amount divided by this number? Yes or No(enter \"1\" or \"2\"): ");
	  scanf("%d",&v2);
	if (v2==2) {											
	test=fopen(name, "a");
	fseek(test,0,SEEK_END);
    	while (d==0) {
		printf("Enter the number you are going to divide: ");
		scanf("%e",&d);
		if(d==0){
		printf("It is impossible to divide by zero!\n");
		}
	}
	result = (a+b+c) / d;
	printf("Result = ");
	printf("%.1f",result);
	
	fprintf(test, "Result: ");
	fprintf(test, "%3.2f", result);
	fprintf(test, "\n");
	fclose(test);
	printf ("\nResult write on \"test2.txt\"");
 	}	

	if (v2==1) {											
	FILE *file;
    file = fopen("test2.txt", "r+");
	char c;
    char output[4];
    unsigned char counter = 0;
    
	fseek(file, 0L, SEEK_END);
    long size = ftell(file); 

	fseek(file, size - 4, SEEK_SET); 
    while (!feof(file)) { 
        c = fgetc(file);
		output[counter] = c;
		counter++;        
    }	    
    float outFloat = atof(output);
    printf("This number: ");
    printf("%.2f\n", outFloat);
    result = (a+b+c) / outFloat;
	printf("Result = ");
	printf("%.1f",result);
	printf ("\nResult write on \"test2.txt\"");
	fclose(file);
    getch();
	  }
	}
			
	else {											
	test=fopen(name, "a");
	fseek(test,0,SEEK_END);
    	while (d==0) {
		printf("Enter the number you are going to divide: ");
		scanf("%e",&d);
		if(d==0){
		printf("It is impossible to divide by zero!\n");
		}
	}
	result = (a+b+c) / d;
	printf("Result = ");
	printf("%.1f",result);
	
	fprintf(test, "Result: ");
	fprintf(test, "%3.2f", result);
	fprintf(test, "\n");
	fclose(test);
	printf ("\nResult write on \"test2.txt\"");
    }
}
	return 0;
}
