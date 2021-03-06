/*
 * Copyright (c) 2017 - 2018, Intel Corporation
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included
 * in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
 * OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 */

#include "runtime/program/create.inl"
#include "unit_tests/fixtures/program_fixture.inl"
#include "unit_tests/mocks/mock_program.h"

namespace OCLRT {

template OCLRT::MockProgram *Program::create<MockProgram>(cl_context, cl_uint, const char **, const size_t *, cl_int &);
template OCLRT::MockProgram *Program::create<MockProgram>(cl_context, cl_uint, const cl_device_id *, const size_t *, const unsigned char **, cl_int *, cl_int &);
template OCLRT::MockProgram *Program::create<MockProgram>(const char *, Context *, Device &, cl_int *);
template void ProgramFixture::CreateProgramFromBinary<Program>(cl_context, cl_device_id *, const std::string &, const std::string &);
template void ProgramFixture::CreateProgramFromBinary<Program>(cl_context, cl_device_id *, const std::string &, cl_int &, const std::string &);
template void ProgramFixture::CreateProgramFromBinary<MockProgram>(cl_context, cl_device_id *, const std::string &, const std::string &);
template void ProgramFixture::CreateProgramFromBinary<MockProgram>(cl_context, cl_device_id *, const std::string &, cl_int &, const std::string &);
}
