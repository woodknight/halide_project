#include "bar_interface.h"
#include "foo.h"
#include "HalideBuffer.h"

using namespace Halide::Runtime;

void bar_interface(unsigned char *input, unsigned char *output)
{
    Buffer<uint8_t> input_buffer(input, 100, 100);
    Buffer<uint8_t> output_buffer(output, 100, 100);
    foo(input_buffer, output_buffer);
}
