// Flash memory access

/*
  Author: Martin Eden
  Last mod.: 2024-12-18
*/

#pragma once

#include <me_BaseTypes.h>
#include <me_MemorySegment.h>

namespace me_ProgramMemory
{
  // Read byte from program memory
  TBool GetByte(
    TUint_1 * Byte,
    TAddress Address
  );

  // TOperation: Get byte
  TBool Op_GetByte(TAddress Data, TAddress Addr);
}

/*
  2024-12-09
  2024-12-12
  2024-12-13
  2024-12-15
  2024-12-18
*/