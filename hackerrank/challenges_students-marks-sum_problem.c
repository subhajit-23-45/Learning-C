// You are given an array of integers, , denoting the marks scored by students in a class.

// The alternating elements , ,  and so on denote the marks of boys.
// Similarly, , ,  and so on denote the marks of girls.
// The array name, , works as a pointer which stores the base address of that array. In other words,  contains the address where  is stored in the memory.

// For example, let  and  stores 0x7fff9575c05f. Then, 0x7fff9575c05f is the memory address of

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  int sum = 0,i=0;
    for( i=(gender=='g'?1:0);i<number_of_students;i=i+2)
   {
    sum += *(marks+i);
   }
  
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;
  
    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));
 
    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }
    
    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);
 
    return 0;
}