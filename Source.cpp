#include <stdio.h>
//#include <random.h>


/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}

double getAverage(int myArray[],int n);
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=myArray[i];
	}
	return sum/n;
}
int subtractAllValues(int myArray[],int n);
{
  int sub=0;
  for(int i=0;i<n;i++)
  {
    sub-=myArray[i];
  }
	return sub;
}


void printGroupMemberNames() {
	printf("sreylaut Chhom\n ");
	printf("Dane Saret\n ");
	printf("Name3\n ");
	printf("That's it!\n");
}

