#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

/*You have a 2d array.Please write a program for finding column's number
with maximal average of elements. *

int main(){
	int i,j, col, sum;
	int arr[2][4] = {
		{10, 11, 12, 13},
		{14, 15, 16, 17}
	};

	float average, max;

	for(j =0;j<4;j++){
		sum=0;
		for(i =0; i<2; i++){
			sum += arr[i][j];
		}

		average = sum/2;

		if(average> max){
			max=average;
			col = j+1;
		}
		}
	printf("Column's number with maximal average of elements: %d", col);
	return 0;
}
*/


/*You have a 2d array.Please write a program for finding row's number
with maximal average of elements. */

int main() {
	int i, j, row;
	int arr[2][4] = {
	{10, 11, 12, 13},
	{14, 15, 16, 17}
	};

	int sum;
	float max, avg;

	for (i = 0; i < 2; i++) {
		sum = 0;
		for (j = 0; j < 4; j++) {
			sum += arr[i][j];

			avg = sum / 4;
			if (avg > max) {
				max = avg;
				row = i + 1;
			}
		}
	}

	printf("Row with maximal average of elements: %d", row);

	return 0;
}


/*calculate the value of F(n) recursive *
int F(int n){
	if(n<=1){
		return 1;
	} else{
		return F(n-1)*(n+8);
	}
}

int main(){
	int n;
	printf("Enter a natural number: ");
	scanf("%d", &n);
	printf("F(n) is %d", F(n));

	return 0;
}
*/
/*calculate the value of F(n) iterative *

int main (){
	int n,i,f;
	printf("Enter a natural number: ");
	scanf("%d", &n);

	i=1;
	while (i<n){
		f= i*(n+8);
		i++;
	}

	printf("F(n) is %d", f);
	return 0;
}


/*User enters x and n=1..3(number of action,
using switch construction, calculate *

int main(){

	int n,x, res;

	printf("Enter a number for x: ");
	scanf("%d", &x);
	printf("Enter a number for n(1 to 3): ");
	scanf("%d", &n);

	switch(n){
		case 1:
			res = -5*x*x-4;
			break;
		case 2:
			res = 8*x+2;
			break;
		case 3:
			res = 15-3*x;
			break;
	}

	printf("Result: %d", res);
	return 0;
}

*/


/*Write a program to write an 1D array to a file *

int main(){

	FILE *f;

	char arr[12] = "Hi";
	f = fopen("text.txt", "wb");
	fwrite(arr,sizeof(char), sizeof(arr), f);
	fclose(f);


	return 0;
}

*/

/*Create function using reference and use it inside of main
void circle_length (int *a) *


void circle_length (int *a, double radius){

	double pi = 3.14;
	*a = 2*pi*radius;

}

int main(){
	double radius;
	int a;

	printf("Enter the radius: ");
	scanf("%lf", &radius);

	circle_length(&a, radius);

	printf("Circle length: %d", a);


	return 0;
}


*/

/* Using dynamic memory allocation create array os students structure
(size of array is 5). Sort it according to finalexamgrade in ascending order.
output *

struct Students {
	char first_name[10];
	char last_name[10];
	int age;
	int midtermExamGrade;
	int finalExamGrade;
};

int compare(const void *a,const void *b){
	int l = ((struct Students *)a) -> finalExamGrade;
	int r = ((struct Students *)b) -> finalExamGrade;
	return (l-r);
}

int main(){

	struct Students *ptr;
	int n, i;
	printf("How many students? : ");
	scanf("%d", &n);
	ptr = (struct Students*) malloc(n*sizeof(struct Students));


	for (i = 0; i<n; i++){
		printf("Enter first name: ");
		scanf("%s", (ptr+i)->first_name);
		printf("Enter last name: ");
		scanf("%s", (ptr+i)->last_name);
		printf("Enter age: ");
		scanf("%d", &(ptr+i)->age);
		printf("Enter midterm exam grade: ");
		scanf("%d", &(ptr+i)->midtermExamGrade);
		printf("Enter final exam grade: ");
		scanf("%d", &(ptr+i)->finalExamGrade);
	}

	printf("\nBefore sorting\n");
	for (i = 0; i< n; i++){
		printf("First name: %s\nLast name: %s\nAge: %d\nMidterm grade: %d\nFinal grade: %d\n", (ptr+i)->first_name, (ptr+i)->last_name, (ptr+i)->age, (ptr+i)->midtermExamGrade, (ptr+i)->finalExamGrade);
	}

	printf("\nAfter\n");
	qsort(ptr,n,sizeof(struct Students), compare);

	for (i = 0; i< n; i++){
		printf("First name: %s\nLast name: %s\nAge: %d\nMidterm grade: %d\nFinal grade: %d\n", (ptr+i)->first_name, (ptr+i)->last_name, (ptr+i)->age, (ptr+i)->midtermExamGrade, (ptr+i)->finalExamGrade);
	}


	return 0;
}


*/

/*Write program to add two monetary amounts using structs*


struct weight {
	int grams;
	int kilograms;
} w1, w2, w3;


int main(){

	printf("Enter first weight in grams: ");
	scanf("%d", &w1.grams);
	printf("Enter first weight in kilograms: ");
	scanf("%d", &w1.kilograms);

	printf("Enter second weight in grams: ");
	scanf("%d", &w2.grams);
	printf("Enter second weight in kilograms: ");
	scanf("%d", &w2.kilograms);

	w3.grams = w1.grams + w2.grams;
	w3.kilograms = w1.kilograms + w2.kilograms;

	if (w3.grams>=1000){
		w3.grams = w3.grams - 1000;
		w3.kilograms = w3.kilograms+1;
	}

	printf("Weight in grams: %d\nWeight in kilograms: %d", w3.grams,w3.kilograms);


	return 0;
}



/*Write a program to calculate difference between two weight using structures*

struct weight {
	int grams;
	int kilograms;
} w1, w2, w3;


int main(){

	printf("Enter first weight in grams: ");
	scanf("%d", &w1.grams);
	printf("Enter first weight in kilograms: ");
	scanf("%d", &w1.kilograms);

	printf("Enter second weight in grams: ");
	scanf("%d", &w2.grams);
	printf("Enter second weight in kilograms: ");
	scanf("%d", &w2.kilograms);

	w3.grams = w1.grams - w2.grams;
	w3.kilograms = w1.kilograms - w2.kilograms;

	/*if (w3.grams>=1000){
		w3.grams = w3.grams - 1000;
		w3.kilograms = w3.kilograms+1;
	}*

	printf("Weight in grams: %d\nWeight in kilograms: %d", w3.grams,w3.kilograms);


	return 0;
}
*/





























