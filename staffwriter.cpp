#include "staffwriter.h"
#include <QFile>
#include <QTextStream>

StaffWriter::StaffWriter()
{
}

StaffWriter::StaffWriter(Staff s): staff(s)
{
}

void StaffWriter::setStaff(Staff s)
{
    staff = s;
}

bool StaffWriter::writeToFile() const
{
    QFile file("staffFile.txt");
    if (!file.open(QIODevice::Append))
        return false;

    QTextStream toFile(&file);

    toFile << "Name: " << staff.getName() << "; ";
    toFile << "Birthdate: " << staff.getDate().toString() << "; ";
    toFile << "Type: " << staff.getType() << '\n';
    file.close();

    return true;
}
