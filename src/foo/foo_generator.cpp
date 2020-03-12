#include "Halide.h"

namespace
{
using namespace Halide;

class Foo : public Generator<Foo>
{
public:
    Input<Buffer<uint8_t>> input{"input", 2};
    Output<Buffer<uint8_t>> output{"output", 2};

    void generate()
    {
        Var x, y;
        output(x, y) = input(x, y);
    }
};

} // namespace

HALIDE_REGISTER_GENERATOR(Foo, foo)
