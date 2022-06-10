#include <stdio.h>
#include <stdlib.h>
/**
 * main - checks for memory allocation
 *
 * Return - Always 0 (for success)
 *
 * 1. Dynamic memory allocation is a technique to allocate memory at runtime, 
 *    unlike in static memory allocation where memory is automatically allocated 
 *    at compile time
 * 2. Also, allocated memory can be freed even before the end of the program to 
 *    make space for other memory usage
 * 3. Pointers are employed here to store the address of the allocated memory
 *
 * 4. Four functions are used in dynamic memory allocation
 *    i)malloc(size_t size): this takes the size of memory to be allocated
 *      and returns a void pointer to the allocatd memory. 
 *    ii)calloc(size_t n, size_t size): calloc takes the size of memory and the number of blocks 
 *       to be allocated. It allocates n blocks of size size. By default, zeros are assigned 
 *       to the newly allocated memory. It also returns a void pointer to the allocated memory
 *    iii)realloc(void *, size_t size): It is used to reallocate(increase or decrease) an
 *        already allocated memory. It takes the pointer of the already allocated memory and the 
 *        size of the new memory. Data stored in the previous address won't be cleared
 *        Note:realloc() without the pointer is malloc. realloc() without the size is free()
 *    iv)Dynamically allocated memory needs to be freed by the programmer. They can be freed at any
 *       section of the program when necessary. The syntax is free(*ptr);
 * 5. All of the various dynamic memory allocation functions return void pointers. These need to be
 *    typecasted to the desired datatype you want to store in the memory
 * 6. Check should always be done to be sure the memory was successfully created
 *
 */

int main(void)
{
	/*DECLARING VARIOUS POINTERS AND VARIABLES */
	float *mallocPtr = NULL;
        int *callocPtr = NULL;
	int numEntity, i = 0;

	/*ASKING THE USER OR THE NUMBER OF ENTITIES THEY WANT TO STORE THEIR DATA */
	printf("Please enter the number of employees you want to store their age and retirement tips\n");
	scanf("%d", &numEntity);

	/*CALLING MALLOC AND CHECKING TO BE SURE MEMORY WAS ALLOCATED */
	mallocPtr = (float*) malloc(numEntity * sizeof(float));
	if (mallocPtr == NULL)
	{
		printf("Failled to allocated memory\n");
		exit(1);
	}
	
	/* CALLING CALLOC AND CHECKING TO BE SURE MEMORY WAS ALLOCATED */
	callocPtr = (int*) calloc(numEntity, sizeof(int));
	if (callocPtr == NULL)
	{
		printf("Failled to allocate memory\n");
		exit(1);
	}
	
	/* TAKING THE DETAILS FROM THE USER USING THE MEMORY POINTERS*/
	while (i < numEntity)
	{
		printf("Enter the age of employee %d\n", i + 1);
		scanf("%d", (callocPtr + i));
		printf("Enter the retirement tip of the employee\n");
		scanf("%f", (mallocPtr + i));
		i++;
	}

	/*USE REALLOC TO EXPAND THE ALLOCATED MEMORY OF ALL THE POINTERS BY ONE*/
	mallocPtr = (float*) realloc(mallocPtr, (numEntity + 1) * sizeof(float));
	callocPtr = (int*) realloc(callocPtr, (numEntity + 1) * sizeof(int));
 
	/*TAKING THE DEATAILS OF THE ADDED ENTITY */
	printf("Please enter the age of the new employee\n");
	scanf("%d", (callocPtr + i));/*IN THE LAST LOOP, iTH INDEX WAS POINTED TO THE ADDRESS NEXT TO THE LAST VALUE, DETAILS OF THE NEW ENTITY WI
				       WILL THEREFORE BE INSERTED TO THE iTH INDEX */
	printf("Please add the retirement tip of the new employee\n");
	scanf("%f", (mallocPtr + i));

	/*USING A LOOP TO DISPLAY THE VALUES*/
	printf("\t\tHere is the results\n");
	for (i = 0; i <= numEntity; i++)
	{
		printf("Age: %d\nTip: GHS%f\n", *(callocPtr + i), *(mallocPtr + i));
	}
	
	/*VERY IMPORTANT; FREEING THE ADDRESSES*/
	free(mallocPtr);
	free(callocPtr);

	return (0);
}
	

