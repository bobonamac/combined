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

// Mike: how do I create an array of file names
// and how do I cycle the pointer names? *fp1-2-3

int main(void)
{
	char[]* filenames = [
		"glucose.csv",
		"ketone.csv",
		"weight.csv"
	]; 

	// Open file to store the results
	FILE *out = fopen("combined.csv", "w");
	char c;

	// Mike: did we decide that this was unnecessary?
	// Check for problems opening/creating file
	if (out == NULL) {
		exit(0);
	}
	for all filenames {
		copyFile(filename, out);
	}
	fclose(out);
	return 0; 
}
// Mike: how did we end up with the name getline2?
void getline2(FILE * in) {
	while (fgetc(in) != '\n') {
		// fputc(c, out);
	}
}

void copyFile(filename, out) {
	// Open two files to be merged
	FILE *fp1 = fopen(filename, "r");

	char c;

	if (fp1 == NULL) {
		puts("Could not open input file/files");
		exit(0);
	}

	// Copy over file 1
	// getline2(fp1);
	while ((c = fgetc(fp1)) != EOF) {
		fputc(c, out);
	}

	printf("Merged data into combined.csv\n"); 
  
  	fclose(fp1); 
	return 0; 

}