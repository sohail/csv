// Example-Application/main.cc
// Written by, Sohail Qayum Malik[sqm@hackers.pk]

#include "main.hh"

int main(int argc, char* argv[])
{
    cc_tokenizer::String<char> csv = cooked_read<char>("data.csv");
    cc_tokenizer::csv_parser<cc_tokenizer::String<char>, char> parser(csv);

#ifdef	CSV_EXAMPLE_APPLICATION
    cc_tokenizer::string_character_traits<char>::int_type i, j;
    try
    {
        std::cout<<"Original text to parse..."<<std::endl;
	std::cout<<csv.c_str();

	std::cout<<"Remove this line which is the 2nd line... "<<parser.get_line_by_number(2).c_str()<<std::endl; 

        parser.remove_line_by_number(2);

	std::cout<<"Rest of the text one line at a time..."<<std::endl;

        for (i = 0; i < parser.get_total_number_of_lines(); i++)
	{
            cc_tokenizer::String<char> line = parser.get_line_by_number(i + 1);

	    for (j = 0; j < parser.get_total_number_of_tokens(); j++)
	    {
		cc_tokenizer::String<char> token = parser.get_token_by_number(j + 1);
		if (token.size())
		{
		    std::cout<<token.c_str()<<" ";
		}
	    }

            if (line.size()) 
	    {
	        std::cout<<"\n";
	    }
	}
    }
    catch (ala_exception& e)
    {
        std::cout<<e.what()<<std::endl;
    }
#endif

#ifdef 	CSV_EXAMPLE_APPLICATION_FUTURE_PRIVATE_METHODS
    try 
    {
        std::cout<<"Total number of lines = "<<parser.get_total_number_of_lines()<<std::endl;  
        
	while (parser.go_to_next_line() != cc_tokenizer::string_character_traits<char>::eof())
	{
	    std::cout<<"Total number of tokens = "<<parser.get_total_number_of_tokens()<<std::endl;
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

            if (parser.get_current_line().size())
	    {
                std::cout<<"\n";
	    }
	}
    }
    catch (ala_exception& e)
    {
        std::cout<<e.what()<<std::endl;
    }
#endif    
    
    return 0;
}
