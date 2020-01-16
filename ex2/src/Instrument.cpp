#include "Instrument.h"

using namespace llvm;

namespace instrument {

/*
 * Implement your instrumentation for dynamic symbolic execution engine
 */
bool Instrument::runOnFunction(Function &F) {
  /* Add your code here */
  return true;
}

char Instrument::ID = 1;
static RegisterPass<Instrument>
    X("Instrument", "Instrumentations for Dynamic Symbolic Execution", false,
      false);

} // namespace instrument
