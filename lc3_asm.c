#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "lc3_asm.h"
/* 


on first pass create map of all labels and directives and their values
on second pass change labels and directives with values and create binary

skip everything in a line after ;

	handle LABELS

	handle directives:
		.ORIG    - each program begins at memory address x3000
		.STRINGZ - init memory with ASCII values, 0 terminated 
		.FILL		 - value for memory location
		.END     - end assembly process 
		.BLKW 	 - block of words

	handle numbers starting with:
		#	- number in decimal notation 
		x - number in hex notation

	handle hex numbers

	handle negative numbers

	handle ASCII chars

*/



int main(int argc, char* argv[]){
    char* path = "";
    char* point = "";

    // get path to .asm file
    if(argc != 2){
        printf("lc3_asm [path_to_asm_file]\n");
        exit(2);
    }

    path = argv[1];

    // check if path ends with .asm
    if((point = strrchr(path,'.')) != NULL ){
        if(strcmp(point,".asm") != 0) {
          printf(".asm file not provided!\n");
          exit(2);
      }
    }

    return 0;
}
