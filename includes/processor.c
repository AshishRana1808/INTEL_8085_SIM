#include "processor.h"

short int init8085( MICRO8085* mod ) {
    mod->A = 0;
    mod->B = 0;
    mod->C = 0;
    mod->D = 0;
    mod->E = 0;
    mod->H = 0;
    mod->L = 0;
    mod->FLAG = 0;
    mod->PC = 0;
    mod->SP = 0;
    mod->MEM[MAX_MEMORY_8085-1] = 0;
    for ( int i=0; i<MAX_MEMORY_8085; i++ ) {
        mod->MEM[i] = '0';
    }

    return 0;
}