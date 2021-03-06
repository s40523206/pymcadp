#ifndef DEBUG_H_INCLUDED
#define DEBUG_H_INCLUDED

#include <iostream>

#include "plugin.h"

#ifndef DEBUG_STREAM
#define DEBUG_STREAM std::cerr
#endif // DEBUG_STREAM

#ifdef __PRETTY_FUNCTION__
#define DBG_WHAT __PRETTY_FUNCTION__
#else
#define DBG_WHAT __func__
#endif

#ifdef DEBUG
#define DBG DEBUG_STREAM << "\033[1;33m[" << PLUGIN_NAME << "] \033[1;31m" << __FILE__ << ":" << __LINE__ << "  \033[1;32m" << DBG_WHAT << "\033[0m" << "  "
#else // DEBUG
#define DBG if(true) {} else DEBUG_STREAM
#endif // DEBUG

#endif // DEBUG_H_INCLUDED

