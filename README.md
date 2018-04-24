**__CSV(Coma Seperated Values)__**

Training or testing data comes in csv files(one of the other formats). This repository is an effort to come up with a very light, small library to parse the csv files and get to and get the stored data with as little effort as possible on the part of the implementor of the ML algorithms. 

_Dependencies_

*String*. It is a small and very purpose specific C++ String class implementation. You can clone it from here...[string.git](https://github.com/sohail/String.git)

_Example Application_

```
#include "functions/cooked_read.hh"
#include "CSV/parser.hh"

int main(int argc, char* argv[])
{
    cc_tokenizer::String<char> csv = cooked_read<char>("data.csv");
    cc_tokenizer::csv_parser<cc_tokenizer::String<char>, char> parser(csv);

    try 
    {
	while (parser.go_to_next_line() != cc_tokenizer::string_character_traits<char>::eof())
	{
	    while (1)
	    {
	        cc_tokenizer::string_character_traits<char>::int_type ret = parser.go_to_next_token();

		if (parser.get_current_token().size())
		{
		    std::cout<<parser.get_current_token().c_str()<<" ";
		}

		if (ret == cc_tokenizer::string_character_traits<char>::eof())
		{
		    break;
		}
	    }

            std::cout<<"\n"; 
	}
    }
    catch (ala_exception& e)
    {
        std::cout<<e.what()<<std::endl;
    }
    
    return 0;
}

```

Also, an example application is provided in the folder with the same name. 

