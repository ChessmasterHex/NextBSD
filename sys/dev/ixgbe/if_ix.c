#include "opt_iflib.h"

#ifdef IFLIB
#include <dev/ixgbe/iflib_if_ix.c>
#else
#include <dev/ixgbe/legacy_if_ix.c>
#endif
