#include <string.h>

#include <stdlib.h>

#include "employee.h"

int main(void)
{

    // defined  in  employeeSearchOne.c

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);

    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char *nameToFind);

    // defined  in  employeeTable.c

    extern Employee EmployeeTable[];

    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    // Declaration

    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045);

    // Example  not  found

    if (matchPtr != NULL)

        printf("Employee  ID  1045  is  in  record  %ld\n", matchPtr - EmployeeTable);

    else

        printf("Employee  ID  is  NOT  found  in  the record\n");

    // Example  found

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony  Bobcat");

    if (matchPtr != NULL)

        printf("Employee  Tony  Bobcat  is  in record  %ld\n", matchPtr - EmployeeTable);

    else

        printf("Employee  Tony  Bobcat  is  NOT  found  in  the  record\n");

    // Phone Number Search
    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-5565");
    printf("Testing not found with phone number: \"909-555-5565\"");

    if (matchPtr != NULL)

        printf("Employee  with phone number '909-555-5565'  is  in record  %ld\n", matchPtr - EmployeeTable);

    else

        printf("Employee with phone '909-555-5565'  is  NOT  found  in  the  record\n");

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    printf("Testing found with phone number: \"909-555-1235\"");

    if (matchPtr != NULL)

        printf("Employee  with phone number '909-555-1235'  is  in record  %ld\n", matchPtr - EmployeeTable);

    else

        printf("Employee with phone '909-555-1235'  is  NOT  found  in  the  record\n");

    return EXIT_SUCCESS;
}