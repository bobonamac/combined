/*
combines the contents of three .csv files
and, in the future, orders the lines by date
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


//function prototypes
void getline2(FILE * in);

/*************************************/

// Mike: how di I create an array of file names
// and how do I cycle the pointer names? *fp1-2-3

int main(void)
{
	// Open two files to be merged
	FILE *fp1 = fopen("glucose.csv", "r");
	FILE *fp2 = fopen("ketone.csv", "r");
	FILE *fp3 = fopen("weight.csv", "r");

	// Open file to store the results
	FILE *out = fopen("combined.csv", "w");
	char c;

	// Mike: did we decide that this was unnecessary?
	// Check for problems opening/creating file
	if (out == NULL) {
		exit(0);
	}
	if (fp1 == NULL || fp2 == NULL || fp3 == NULL) {
		puts("Could not open input file/files");
		exit(0);
	}

	// Copy over file 1
	// getline2(fp1);
	while ((c = fgetc(fp1)) != EOF) {
		fputc(c, out);
	}
	// Copy over file 2
	// getline2(fp2);
	while ((c = fgetc(fp2)) != EOF) {
		fputc(c, out);
	}
	// Copy over file 3
	// getline2(fp3);
	while ((c = fgetc(fp3)) != EOF) {
		fputc(c, out);
	}

	printf("Merged data into combined.csv\n"); 
  
  // Mike: Again, how do I cycle the pointer names?
  	fclose(fp1); 
	fclose(fp2); 
	fclose(fp3);
	fclose(out);
	return 0; 
}
// Mike: how did we end up with the name getline2?
void getline2(FILE * in) {
	while (fgetc(in) != '\n') {
		// fputc(c, out);
	}
}
