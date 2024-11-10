#include <stdio.h>
#include <string.h>


FILE* parseAsm(FILE* asmfile, const char * filename ) {

    // * generating a newfilename from the filename
    size_t len = strlen(filename);
    char newfilename[len+4];
    strcpy(newfilename, filename);
    strcat(newfilename, ".obj");

    // * checking if the file already exists and giving intimidation
    FILE* opcfile = fopen( newfilename, "r");
    if ( opcfile != NULL ) {
        printf("File %s, already exists! Overwriting the file.\n", newfilename);
    }
    opcfile = fopen( newfilename, "w" );

    // * reading the file and generating the opcode
    char buffer[81];
    char instr[20];
    while( fgets( buffer, sizeof(buffer) , asmfile ) != NULL ) {
        
        // identify instruction and generate opcode
        for ( int i=0; i<81; i++ ) {
            // if there are spaces ignore all of them
            if ( buffer[i]==';' ) {
                break; // rest of the buffer is just a comment so 
            }
            else if ( buffer[i]==' ' ) {
                continue;
            }
            else if ( ( buffer[i]>='A' && buffer[i]<='Z' ) || ( buffer[i]>='a' && buffer[i]<='z' ) ) {
                //
            }
        }
    }
}
