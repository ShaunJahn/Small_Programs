#include "staff.h"

const QStringList Staff::categories = QStringList() << "Permanent" << "Part-time" << "Contract";

Staff::Staff()
{
}

Staff::Staff(QString n, QDate d, QString t): name(n), birthDate(d)
{
    type = Staff::StaffType(categories.indexOf(t));
}

void Staff::setName(QString n)
{
    name = n;
}

void Staff::setDate(QDate d)
{
    birthDate = d;
}

void Staff::setType(QString t)
{
    type = Staff::StaffType(categories.indexOf(t));
}

QString Staff::getName() const
{
    return name;
}

QDate Staff::getDate() const
{
    return birthDate;
}

QString Staff::getType() const
{
    return categories.at(type);
}
