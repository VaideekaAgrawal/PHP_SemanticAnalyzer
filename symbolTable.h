#ifndef SYMBOLTABLE_H
#define SYMBOLTABLE_H

#include <stdio.h>

typedef enum {
    INT_TYPE,
    FLOAT_TYPE,
    CHAR_TYPE,
    STRING_TYPE,
    VOID_TYPE,
    FUNC_TYPE // Renamed from FUNCTION_TYPE to avoid conflict
} DataType;

typedef struct {
    char name[50];
    DataType type;
    int scope;
} SymbolEntry;

void insertSymbol(const char *name, DataType type, int scope);
int searchSymbol(const char *name, int scope);
void printSymbolTable();
void clearSymbolTable();

#endif /* SYMBOLTABLE_H */

