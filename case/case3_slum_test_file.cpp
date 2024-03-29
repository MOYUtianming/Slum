#include "test_file_processor.h"
#include <fstream>
#include <iostream>
int test0_open_error_file()
{
    std::string err_fn = "hello world!";
    Slum::TestFileProcessor tfp(err_fn, std::ios_base::in | std::ios_base::binary);
    return 0;
}

int test1_write_str()
{
    std::string str_fn = "./_output/case3/str.log";
    Slum::TestFileProcessor tfp(str_fn, std::ios_base::out);
    char buf[] = "hello world!";
    tfp.write_as_char(buf, sizeof(buf));
    return 0;
}

int test2_write_bin()
{
    std::string str_fn = "./_output/case3/bin.bin";
    Slum::TestFileProcessor tfp(str_fn, std::ios_base::out | std::ios_base::binary);
    char buf[] = "hello world!";
    tfp.write_as_bin(buf, sizeof(buf));
    return 0;

}

int test3_read_str()
{
    std::string str_fn = "./_output/case3/str.log";
    Slum::TestFileProcessor tfp(str_fn, std::ios_base::in);
    char buf[1024];
    tfp.read_as_char(buf, sizeof(buf));
    std::cout << buf << std::endl;
    return 0;
}

int test4_read_bin()
{
    std::string str_fn = "./_output/case3/bin.bin";
    Slum::TestFileProcessor tfp(str_fn, std::ios_base::in | std::ios_base::binary);
    char buf[1024];
    tfp.read_as_bin(buf, sizeof(buf));
    std::cout << buf << std::endl;
    return 0;
}

int main()
{
    test0_open_error_file();
    test1_write_str();
    test2_write_bin();
    test3_read_str();
    test4_read_bin();
    return 0;
}
