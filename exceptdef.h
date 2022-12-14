//
// Created by gy gao on 10/11/22.
//

#ifndef MYTINYSTL_EXCEPTDEF_H
#define MYTINYSTL_EXCEPTDEF_H

#include <stdexcept>
#include <cassert>

namespace mystl
{
#define MYSTL_DEBUG(expr) \
        assert(expr)

#define THROW_LENGTH_ERROR_IF(expr, what) \
    if ((expr) throw std::length_error(what))

#define THROW_OUT_OF_RANGE_IF(expr, what) \
    if ((expr) throw out_of_range(what))

#define THROW_RUNTIME_ERROR_IF(expr, what) \
    if((expr) throw runtime_error(what))
}

#endif //MYTINYSTL_EXCEPTDEF_H
