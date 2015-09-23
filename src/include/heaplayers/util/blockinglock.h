// -*- C++ -*-

#ifndef BLOCKINGLOCK_H_
#define BLOCKINGLOCK_H_

#if defined(_WIN32)
#include "winlock.h"
#else
#include "posixlock.h"
#endif

namespace HL {

  class BlockingLock :
#if defined(_WIN32)
  public WinLockType {};
#else
  public PosixLockType {};
#endif

}

#endif
