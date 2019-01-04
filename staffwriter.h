#ifndef STAFFWRITER_H
#define STAFFWRITER_H
#include "staff.h"

class StaffWriter
{
public:
    StaffWriter();
    StaffWriter(Staff s);

    void setStaff(Staff s);
    bool writeToFile() const;

private:
    Staff staff;
};

#endif // STAFFWRITER_H
