#ifndef QAUTOUPDATERGUI_H
#define QAUTOUPDATERGUI_H

#include <QtCore/qglobal.h>

#if defined(QT_BUILD_AUTOUPDATERGUI_LIB)
#	define Q_AUTOUPDATERGUI_EXPORT Q_DECL_EXPORT
#else
#	define Q_AUTOUPDATERGUI_EXPORT Q_DECL_IMPORT
#endif

#endif // QAUTOUPDATERGUI_H
