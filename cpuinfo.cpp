#include <QFile>
#include <QTextStream>
#include <QString>
#include "cpuinfo.h"

CpuInfo::CpuInfo(QObject *parent) :
    QObject(parent)
{
    QFile cpuInfoFile("/proc/cpuinfo");
    if (cpuInfoFile.open(QIODevice::ReadOnly))
    {
        QTextStream textStream(&cpuInfoFile);
        m_data = textStream.readAll();
        cpuInfoFile.close();
    }
}

