#ifndef DATASETCATALOG_GLOBAL_H
#define DATASETCATALOG_GLOBAL_H

#include <QtCore/qglobal.h>

#include <QString>
#include <QFile>
#include <QSettings>
#include <QtGui/QStandardItemModel>

#pragma warning(disable : 4996)

#if defined(DATASETCATALOG_LIBRARY)
#define DATASETCATALOG_EXPORT Q_DECL_EXPORT
#else
#define DATASETCATALOG_EXPORT Q_DECL_IMPORT
#endif

#endif // DATASETCATALOG_GLOBAL_H
