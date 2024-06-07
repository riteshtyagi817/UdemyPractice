#include<stdio.h>

struct S
{
	union Student
	{
		char letterGrade;
		int roundedGrade;
		float exactGrade;

	}variable2;


};



int main()
{
	struct S s1;

	union Student variable1;
	variable1.letterGrade = 'A';
	variable1.roundedGrade = 12;
	variable1.exactGrade = 23.43;
	
	printf("Example Output\n");

		
	printf("Union record1 values example\n");
	printf("The size of first union variable is %zd\n", sizeof(variable1));
	
	printf("Letter Grade : %c\n", variable1.letterGrade);
	printf("Rounded Grade : %i\n", variable1.roundedGrade);
	printf("Exact Grade : %.2f\n",variable1.exactGrade);

	printf("Union record2 values example\n");
		
	s1.variable2.letterGrade = 'B';
	printf("Letter Grade : %c\n", s1.variable2.letterGrade);
	s1.variable2.roundedGrade = 65;
	printf("Rounded Grade : %i\n", s1.variable2.roundedGrade);
	s1.variable2.exactGrade = 65.67;
	printf("Exact Grade : %.2f\n",s1.variable2.exactGrade);





	return 0;
}
