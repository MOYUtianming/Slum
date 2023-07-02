#include "test_file_processor.h"
namespace Slum {

    TestFileProcessor::TestFileProcessor(std::string fn, std::ios_base::openmode mode)
    {
        try
        {
            fp.open(fn, mode);
            if(!fp.is_open()) {
                throw std::invalid_argument("open file failed!");
            }
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    TestFileProcessor::~TestFileProcessor()
    {
        if(fp.is_open()) {
            fp.close();
        }
    }

    int TestFileProcessor::write_as_char(char* arr, const unsigned int elems) {
        unsigned int r_elems = elems;
        if(arr[elems - 1] == '\0') {
            r_elems -= 1;
        }
        for(unsigned int i = 0; i < r_elems; i++) {
            fp << arr[i];
        }
        return 0;
    }
    int TestFileProcessor::read_as_char(char* arr, const unsigned int elems) {
        fp.getline(arr, elems);
        return 0;
    }
    int TestFileProcessor::write_as_bin(char* arr, const unsigned int bytes) {
        fp.write(arr, bytes);
        return bytes;
    }
    int TestFileProcessor::read_as_bin(char* arr, const unsigned int bytes) {
        fp.read(arr, bytes);
        return 0;
    }
}
