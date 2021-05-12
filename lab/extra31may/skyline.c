#include <stdio.h>

//Assumption: Our skyline is max 20 units

typedef struct building{
	int start; 
	int width; 
	int height; 
}BUILDING; 

int read(FILE * building_file, BUILDING * building)
{
	int x = fscanf(building_file, "%d %d %d", &building->start, &building->width, &building->height); 
	return x; 
}

void print(int * skyline)
{
	int max = -1; 
	for (int i = 0; i < 20; i++ )
	{
		if (skyline[i]> max)
		{
			max = skyline[i]; 
		}
	}

	for (int i = max; i> 0; i--)
	{
		for (int j = 0; j < 20; j++)
		{
			if(skyline[j] >= i)
			{
				printf("x");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}

int main(int argc, char * argv [])
{

	if(argc != 2)
	{
		printf("Please enter: \n");
		printf("%s\n", argv[0]);
		printf("Building File Name\n");
		return 0; 
	}

	//Initialize Variables
	int skyline[20] = {0}; 
	char * building_file_name = argv[1]; 
	BUILDING building; 
	FILE * building_file; 

	//Open file for reading 
	printf("Read from building file started...\n");
	if(!(building_file = fopen(building_file_name, "r")))
	{
		printf("Cannot open file. \n");
		return 0;
	}

	//Read from file
	while(read(building_file, &building) > 0)//read a line
	{
		//Manage Skyline
		for(int i = building.start; i < building.start + building.width; i++)
		{
			if(skyline[i] < building.height)
			{
				skyline[i] = building.height; 
			}
		} 
	}
	
	fclose(building_file); 

	for(int i = 0; i < 20; i++)
	{
		printf("%d ", skyline[i]);
	}
	
	printf("\n\n\n");
	print(skyline); 
	printf("\n\n\n");
	return 0; 
}

