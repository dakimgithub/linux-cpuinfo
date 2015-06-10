#ifndef CPUINFO_H
#define CPUINFO_H

#include <QObject>

class CpuInfo : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString data READ getData)
public:
    explicit CpuInfo(QObject *parent = 0);

    QString getData() const
    {
        return m_data;
    }

private:
    QString m_data;

};

#endif // CPUINFO_H
