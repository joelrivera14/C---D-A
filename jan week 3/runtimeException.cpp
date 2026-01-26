#include <iostream>
#include <string>

class RuntimeException
{
    RuntimeException(const std::string &err) { errorMsg = err; }
    std::string getErrorMsg() const { return errorMsg; }

private:
    std::string errorMsg;
};