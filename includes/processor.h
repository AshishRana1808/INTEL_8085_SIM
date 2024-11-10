#ifndef __PROCESSOR_H__
#define __PROCESSOR_H__ 

#define MAX_MEMORY_8085 65536 // 64kB memory

struct _8085_ARCHITECTURE_
{
    unsigned short int A; // A -> accumulator 
    unsigned short int B, C; // B -> 8 bit C -> 8 bit
    unsigned short int D, E; // D -> 8 bit E -> 8 bit
    unsigned short int H, L; // H -> 8 bit L -> 8 bit
    unsigned short int SP; // SP -> stack pointer 16 bit
    unsigned short int PC; // PC -> program counter 16 bit
    unsigned short int FLAG; // D7-S S6-Z D4-AC D2-P D0-CY
    unsigned char MEM[MAX_MEMORY_8085];
};
typedef struct _8085_ARCHITECTURE_ MICRO8085;

short int init8085( MICRO8085* mod );

#endif
