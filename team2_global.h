#ifndef TEAM2_GLOBAL_H
#define TEAM2_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TEAM2_LIBRARY)
#  define TEAM2SHARED_EXPORT Q_DECL_EXPORT
#else
#  define TEAM2SHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // TEAM2_GLOBAL_H
