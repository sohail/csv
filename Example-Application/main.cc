// Example-Application/main.cc
// Written by, Sohail Qayum Malik 

#include "main.hh"

int main(int argc, char* argv[])
{
    cc_tokenizer::String<char> csv = cooked_read<char>("Example-Application/data.csv");
    cc_tokenizer::csv_parser<cc_tokenizer::String<char>, char> parser(csv);
			
#ifdef	CSV_EXAMPLE_APPLICATION	
    cc_tokenizer::string_character_traits<char>::int_type i, j;
    try
    {   
		std::cout<<"Total number of lines: "<<parser.get_total_number_of_lines()<<std::endl; 
		parser.remove_line_by_number(2);
		std::cout<<"Total number of lines: "<<parser.get_total_number_of_lines()<<std::endl; 
		parser.remove_line_by_number(4);
		std::cout<<"Total number of lines: "<<parser.get_total_number_of_lines()<<std::endl; 
		parser.remove_line_by_number(2);
		std::cout<<"Total number of lines: "<<parser.get_total_number_of_lines()<<std::endl; 
		parser.remove_line_by_number(1);
		std::cout<<"Total number of lines: "<<parser.get_total_number_of_lines()<<std::endl;

		while (parser.go_to_next_line() != cc_tokenizer::string_character_traits<char>::eof())
		{
			if (parser.get_current_line().size())
			{
				std::cout<<parser.get_current_line_number()<<" ) "<<parser.get_current_line().size()<<" -- "<<parser.get_current_line().c_str()<<std::endl;
			
				std::cout<<"Total number of tokens -> "<<parser.get_total_number_of_tokens()<<std::endl;

				while (parser.go_to_next_token() != cc_tokenizer::string_character_traits<char>::eof())
				{
					if (parser.get_current_token().size())
					{
						std::cout<<parser.get_current_token_number()<<") "<<parser.get_current_token().c_str()<<std::endl;
					}
					else
					{
						std::cout<<"TOKEN IS EMPTY"<<std::endl;
					}
				}
			}
			else
			{
				std::cout<<"LINE IS EMPTY"<<std::endl;
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
