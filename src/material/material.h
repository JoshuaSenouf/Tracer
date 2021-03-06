#ifndef MATERIAL_H
#define MATERIAL_H

#include <string>

#include "embree_helper.h"


struct Material
{
    Material();

    virtual bool Evaluate() = 0;
    virtual bool Sample() = 0;
    virtual bool Pdf() = 0;

    std::string _name;
};

#endif // MATERIAL_H
