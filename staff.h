#ifndef STAFF_H
#define STAFF_H

#include <QStringList>
#include <QDate>

class Staff
{
public:
    enum StaffType {Permanent, PartTime, Contract};

    Staff();
    Staff(QString n, QDate d, QString t);

    void setName(QString n);
    void setDate(QDate d);
    void setType(QString t);

    QString getName() const;
    QDate getDate() const;
    QString getType() const;

private:
    static const QStringList categories;

    QString name;
    QDate birthDate;
    StaffType type;
};

#endif // STAFF_H
