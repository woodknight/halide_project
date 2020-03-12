#include "bar_interface.h"

int main()
{
    unsigned char *input = new unsigned char[100 * 100];
    unsigned char *output = new unsigned char[100 * 100];

    bar_interface(input, output);
}