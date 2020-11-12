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
	

	return 0;
}