#include <stdio.h>

typedef struct student_data{
	char name[25]; 
	char id[5]; 
	int exams[3]; 
	int hws[3]; 
	char grade; 
}STUDENT_DATA; 

typedef enum bool {
	FALSE, 
	TRUE
}BOOL; 

//Function Prototypes (Declaration)
BOOL read_from_text_file(FILE * text_file, STUDENT_DATA * a_student); 
BOOL write_into_binary_file(FILE * binary_file, STUDENT_DATA * a_student); 

BOOL read_from_binary_file(FILE * binary_file, STUDENT_DATA * a_student); 
BOOL write_into_text_file(FILE * text_file, STUDENT_DATA * a_student); 

void main(int argc, char * argv[])
{
	//Error Check 
	if(argc != 4)
	{
		printf("Enter: \n"); 
		printf("%s ", argv[0]); 
		printf("\"Source Text File Name\" "); 
		printf("\"Destination Text File Name\" "); 
		printf("\"Destination Binary File Name\" \n"); 
		return; 
	}

	//Initialize variables 
	char * src_text_file_name = argv[1]; 
	char * dst_text_file_name = argv[2];
	char * binary_file_name = argv[3];

	STUDENT_DATA a_student;   

	FILE * text_file; 
	FILE * binary_file; 

	//Read from text file and write to binary file
	printf("\nRead From Text File and Write Into Binary File Started...\n"); 
	if (!(text_file = fopen(src_text_file_name, "r")))
	{
		printf("\nCannot open %s\n", src_text_file_name); 
		return; 
	}

	if (!(binary_file = fopen(binary_file_name, "wb")))
	{
		printf("\nCannot open %s\n", binary_file_name); 
		return; 
	}

	while (read_from_text_file(text_file, &a_student))
	{
		write_into_binary_file(binary_file, &a_student); 
	}

	fclose(text_file); 
	fclose(binary_file); 
	printf("\nRead From Text File and Write Into Binary File Complete!\n");

	//Read from binary file and write to text file 
	printf("\nRead From Binary File and Write Into Text File Started...\n"); 
	if(!(binary_file = fopen(binary_file_name, "rb")))
	{
		printf("\nCannot open %s\n", binary_file_name);
		return; 
	}

	if(!(text_file = fopen(dst_text_file_name, "w")))
	{
		printf("\nCannot open %s\n", dst_text_file_name); 
		return; 
	}

	while(read_from_binary_file(binary_file, &a_student))
	{
		write_into_text_file(text_file,&a_student); 
	}

	fclose(text_file); 
	fclose(binary_file); 
	printf("\nRead From Binary File and Write Into Text File Complete!\n");
}; 

BOOL read_from_text_file(FILE * text_file, STUDENT_DATA * a_student)
{
	char buffer[100]; 
	int amount_read; 

	fgets(buffer, sizeof(buffer), text_file); 

	amount_read = sscanf(buffer, "%s %s %d %d %d %d %d %d %c", a_student->name, a_student->id, 
															&a_student->exams[0], &a_student->exams[1], &a_student->exams[2], 
															&a_student->hws[0], &a_student->hws[1], &a_student->hws[2], 
															&a_student->grade
															); 

	if(amount_read == 9) return TRUE; 
	else 				 return FALSE; 

}; 


BOOL write_into_binary_file(FILE * binary_file, STUDENT_DATA * a_student)
{
	int amount_written; 
	amount_written = fwrite(a_student, sizeof(STUDENT_DATA), 1, binary_file); 
	if (amount_written != 1) return FALSE; 
	else 					 return TRUE; 
}; 

BOOL read_from_binary_file(FILE * binary_file, STUDENT_DATA * a_student)
{
	char buffer[100]; 
	int amount_read; 
	amount_read = fread(a_student, sizeof(STUDENT_DATA), 1, binary_file); 

	if(amount_read == 1) return TRUE; 
	else return FALSE; 
};

BOOL write_into_text_file(FILE * text_file, STUDENT_DATA * a_student)
{
	int amount_written; 

	amount_written = fprintf(text_file, "%-25s %-5s %3d %3d %3d %3d %3d %3d %c\n",a_student->name, a_student->id, 
															a_student->exams[0], a_student->exams[1], a_student->exams[2], 
															a_student->hws[0], a_student->hws[1], a_student->hws[2], 
															a_student->grade
															); 

	if(amount_written < 0) return FALSE; 
	else return TRUE; 
};

