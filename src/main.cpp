#include "foo.h"

#include "Halide.h"
#include "HalideBuffer.h"

using namespace Halide::Runtime;



int main()
{

    Buffer<int8_t> input(100, 100, 3);
    Buffer<int8_t> output(100, 100, 3);

    foo(input, output);

    Pipeline 
}