#include <iostream>

#include "llvm/IR/InstrTypes.h"
#include "llvm/IR/Instruction.h"

#include "SymbolicInterpreter.h"

extern SymbolicInterpreter SI;

/*
 * Implement your transfer functions.
 */
extern "C" void __DSE_Alloca__(int R, int *Ptr) { /* Add your code here */ }

extern "C" void __DSE_Store__(int *X) { /* Add your code here */ }

extern "C" void __DSE_Load__(int Y, int *X) { /* Add your code here */ }

extern "C" void __DSE_ICmp__(int R, int Op) { /* Add your code here */ }

extern "C" void __DSE_BinOp__(int R, int Op) { /* Add your code here */ }
