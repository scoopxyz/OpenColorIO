// SPDX-License-Identifier: BSD-3-Clause
// Copyright Contributors to the OpenColorIO Project.

#include "PyTransform.h"

namespace OCIO_NAMESPACE
{

void bindPyLogTransform(py::module & m)
{
    LogTransformRcPtr DEFAULT = LogTransform::Create();

    auto cls = py::class_<LogTransform, 
                          LogTransformRcPtr /* holder */, 
                          Transform /* base */>(m, "LogTransform", DS(LogTransform))
        .def(py::init(&LogTransform::Create), DS(LogTransform, Create))

        .def(py::init([](double base, TransformDirection dir) 
            {
                LogTransformRcPtr p = LogTransform::Create();
                p->setBase(base);
                p->setDirection(dir);
                p->validate();
                return p;
            }),
             DS(LogTransform, LogTransform),
             "base"_a = DEFAULT->getBase(),
             "direction"_a = DEFAULT->getDirection())

        .def("getFormatMetadata", 
             (FormatMetadata & (LogTransform::*)()) &LogTransform::getFormatMetadata,
             DS(LogTransform, getFormatMetadata),
             py::return_value_policy::reference_internal)
        .def("getFormatMetadata", 
             (const FormatMetadata & (LogTransform::*)() const) &LogTransform::getFormatMetadata,
             DS(LogTransform, getFormatMetadata),
             py::return_value_policy::reference_internal)
        .def("equals", &LogTransform::equals, DS(LogTransform, equals), "other"_a)
        .def("getBase", &LogTransform::getBase, DS(LogTransform, getBase))
        .def("setBase", &LogTransform::setBase, DS(LogTransform, setBase), "base"_a);

    defStr(cls);
}

} // namespace OCIO_NAMESPACE
