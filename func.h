// ========================================================================= //
//                                                                           //
// FIZ Interpreter                                                           //
// Author: Denis Luchkin-Zhou                                                //
//                                                                           //
// ========================================================================= //
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

#ifndef FUNC_H
#define FUNC_H

// Maximum number of function definitions the interpreter allow
#define MAX_FUNCTIONS 1000

// Function metadata
typedef struct {
  char *name;                 // Function name
  char *argv[MAX_ARGUMENTS];  // Argument name list
  int  argc;                  // Number of arguments
  struct TREE_NODE *body;     // Body of the function (expr)
} Func;

// Function table
Func functions[MAX_FUNCTIONS];
int  numFuncs;

// Find a function and return it's metadata
Func * find_function(char *name);

// Define a function
void def_function(char *name, char *argv[], int argc, AstNode *body);

// Call a function
int call_function(char *name, char *argv[], int argc);





#endif