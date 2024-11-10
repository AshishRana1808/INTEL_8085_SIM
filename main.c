#include <stdio.h>
#include "includes/processor.h"
#include "includes/asmparser.h"
#include "includes/helpmanual.h"

int main(const int argc, const char * argv[] )
{
    MICRO8085 obj;
    init8085( &obj );

    if ( argc < 2 ) {
        printf( "%s\n", a );
        return 0;
    }

    FILE *asmfile = fopen(argv[1], "r");
    if ( asmfile == NULL ) {
        perror("ERROR: FILE DOES NOT EXIST.\n");
        return 1;
    }

    // if file is readable then take it and generate the equivalent opcode/machinecode
    // and implement it in the processor
    FILE* opcode = parseAsm( asmfile , argv[1] ); // return value not decided yet


    
    return 0;
}
