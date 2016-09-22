/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, development version     *
*                (c) 2006-2016 INRIA, USTL, UJF, CNRS, MGH                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                               SOFA :: Plugins                               *
*                                                                             *
* Authors: The SOFA Team and external contributors (see Authors.txt)          *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/

/// @author M Nesme @date 2016

#include "Binding_DataFileNameVector.h"
#include "Binding_Data.h"

using namespace sofa::helper;
using namespace sofa::core::objectmodel;




extern "C" PyObject * DataFileNameVector_addPath(PyObject *self, PyObject *args)
{
    char *path;
    if (!PyArg_ParseTuple(args, "s",&path))
        Py_RETURN_NONE;

    DataFileNameVector* data = down_cast<DataFileNameVector>( ((PyPtr<BaseData>*)self)->object );

    data->addPath(path);

    Py_RETURN_NONE;
}


SP_CLASS_ATTRS_BEGIN(DataFileNameVector)
SP_CLASS_ATTRS_END



SP_CLASS_METHODS_BEGIN(DataFileNameVector)
SP_CLASS_METHOD(DataFileNameVector,addPath)
SP_CLASS_METHODS_END



SP_CLASS_TYPE_PTR_ATTR(DataFileNameVector,DataFileNameVector,Data)
