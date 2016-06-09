/**********************************************************
 *                                                        *
 *                 main.cpp                               *
 *                                                        *
 *                  Written by                            *
 *                  Nick Moore                            *
 *                                                        *
 *********************************************************/

#include "organize.h"
#define TEST 1

int main(int argc, char* argv[]){
#ifdef TEST
  return Organize::test();
#else
  return Organize::main(argc, argv);
#endif
}
