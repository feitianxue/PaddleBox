/* Copyright (c) 2016 PaddlePaddle Authors. All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License. */

#pragma once

#if defined(_MSC_VER)
#include <BaseTsd.h>
typedef SSIZE_T ssize_t;
#endif
#include <Python.h>

#include <fstream>
#include <vector>

#include "pybind11/numpy.h"
#include "pybind11/pybind11.h"
#include "pybind11/stl.h"

namespace paddle {
namespace pybind {

void BindProgramDesc(pybind11::module* m);
void BindBlockDesc(pybind11::module* m);
void BindVarDsec(pybind11::module* m);
void BindOpDesc(pybind11::module* m);
void BindProcessMeshDesc(pybind11::module* m);
void BindJitProperty(pybind11::module* m);

}  // namespace pybind
}  // namespace paddle
