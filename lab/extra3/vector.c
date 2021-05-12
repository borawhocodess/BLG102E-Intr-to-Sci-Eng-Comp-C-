#include <stdio.h>
#include <math.h>

typedef struct {
	
	int x, y; 
} Vector; 

void printVector(Vector * vec)
{
	printf("%di + %dj\n", vec->x, vec->y); 
}

Vector add(Vector * v1, Vector * v2)
{
	Vector v; 
	v.x = v1->x + v2->x; //<1, 2> + <2, 3> = <1+2, 2+3>
	v.y = v1->y + v2->y; 

	return v; 
}

Vector subtract(Vector * v1, Vector * v2)
{
	Vector v; 
	v.x = v1->x - v2->x; //<1, 2> - <2, 3> = <1-2, 2-3>
	v.y = v1->y - v2->y; 

	return v; 
}

double magnitudeOfVector(Vector * vec)
{
	double magnitude = 0; 
	magnitude = sqrt(((vec->x)*(vec->x)) + ((vec->y)*(vec->y))); 
	return magnitude; 
}

double angleOfVector(Vector * vec)
{
	double h = vec->y*1.0 / vec->x*1.0; 
	return atan(h); 
}

double angleBetweenVectors(Vector * vec1, Vector * vec2)
{
	double angle1 = angleOfVector(vec1); 
	double angle2 = angleOfVector(vec2); 
	return fabs(angle1 - angle2); 
}

double dotProduct(Vector * vec1, Vector * vec2)
{
	double result = magnitudeOfVector(vec1)*magnitudeOfVector(vec2)*cos(angleBetweenVectors(vec1, vec2)); 
	return result; 
}

double dotProduct2(Vector * vec1, Vector * vec2)
{
	double result = vec1->x*vec2->x + vec1->y*vec2->y; 
	return result; 
}

int main()
{
	Vector vec1 , vec2, res; 

	vec1.x = 2; 
	vec1.y = 2; 

	vec2.x = 3; 
	vec2.y = 5;  

	printVector(&vec1); 
	printVector(&vec2);
	printf("\n\n"); 

	printf("The addition of the two vectors: \n"); 
	res = add(&vec1, &vec2); 
	printVector(&res);
	printf("\n\n");

	printf("The subtraction of the two vectors: \n"); 
	res = subtract(&vec1, &vec2); 
	printVector(&res);
	printf("\n\n"); 

	printf("Angle of Vector 1 WRT Origin: %f\n", angleOfVector(&vec1)); 
	printf("Angle of Vector 2 WRT Origin: %f\n", angleOfVector(&vec2));
	printf("\n\n"); 

	printf("Angle between Vector 1 and Vector 2: %f\n", angleBetweenVectors(&vec1, &vec2)); 
	printf("\n\n"); 

	printf("Magnitude of Vector 1: %f\n", magnitudeOfVector(&vec1)); 
	printf("Magnitude of Vector 2: %f\n", magnitudeOfVector(&vec2)); 
	printf("\n\n"); 

	printf("Vector1 * Vector 2 = %f\n", dotProduct(&vec1, &vec2)); 	
	printf("Vector1 * Vector 2 = %f\n", dotProduct2(&vec1, &vec2)); 	
	
	return 0; 
}
















