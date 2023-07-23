#ifndef __TEST_FILE_MACROS_H__
#define __TEST_FILE_MACROS_H__

#include <string>
#include <iostream>
#include <fstream>
#include <stdexcept>

namespace Slum {
    class TestFileProcessor
    {
    private:
        std::string fn;
        std::fstream fp;
    public:
        TestFileProcessor(std::string fn, std::ios_base::openmode mode);
        ~TestFileProcessor();

        int write_as_char(char* arr, const unsigned int elems);

        int read_as_char(char* arr, const unsigned int elems);

        int write_as_bin(char* arr, const unsigned int bytes);

        int read_as_bin(char* arr, const unsigned int bytes);
    };

} // namespace Slum

#endif
