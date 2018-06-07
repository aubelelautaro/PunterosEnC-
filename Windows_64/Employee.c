#include <stdio.h>
#include <stdlib.h>
#include "ArrayList.h"
#include "Employee.h"


int employee_compare(void* pEmployeeA,void* pEmployeeB)
{
    int retorno;

    Employee* empleado1 = (Employee*)pEmployeeA;
    Employee* empleado2 = (Employee*)pEmployeeB;

    retorno = strcmp(empleado1->name,empleado2->name);

    return retorno;
}


void employee_print(Employee* this)
{
    printf("%d  -  %s  -  %s\n",this->id, this->name, this->lastName);
}


Employee* employee_new(void)
{

    Employee* returnAux = NULL;

    return returnAux;

}

void employee_delete(Employee* this)
{


}

int employee_setId(Employee* this, int id)
{

    return 0;

}

int employee_getId(Employee* this)
{

    return 0;

}


