#include "ArgParse.hpp"
#include "LoginField.hpp"

const std::string AppId   = "103806206443210";

int main(int, char**);

int main(int argc, char* argv[])
{
   ArgParse parse = ArgParse(argc, argv);
   parse.ParseArgs();
   
   return 0;
}
