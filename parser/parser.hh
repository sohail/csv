/* parser/parser.hh
   Written by, Sohail Qayum Malik[sqm@hackers.pk] */

/* A general purpose parser interface */

#include "../String/src/String.hh"

#ifndef		CCTOKENIZER_PARSER_HH
#define		CCTOKENIZER_PARSER_HH

namespace cc_tokenizer 
{
    template<class T, typename E>
    class parser 
    {
        public:
            /* Pure virtual methods */
	  
            /* Treat the content as a set of lines(the definition of the line is provided by the implementer of this interface) */
            virtual T get_current_line(void) = 0;      
            virtual T get_line_by_number(typename cc_tokenizer::string_character_traits<E>::int_type) = 0; 
            virtual typename cc_tokenizer::string_character_traits<E>::int_type get_total_number_of_lines(void) = 0;      
            virtual typename cc_tokenizer::string_character_traits<E>::int_type go_to_next_line(void) = 0;
	    virtual typename cc_tokenizer::string_character_traits<E>::int_type remove_line_by_number(typename cc_tokenizer::string_character_traits<E>::int_type) = 0;
	   	  
            /* Treat line as a delimited set of tokens(an ordinary character literal or multicharacter literal). Where the definition of the delimiter is provided by the implementer of this interface */
	    virtual typename cc_tokenizer::string_character_traits<E>::int_type go_to_next_token(void) = 0;
	    virtual T get_current_token(void) = 0;
	    virtual typename cc_tokenizer::string_character_traits<E>::int_type get_total_number_of_tokens(void) = 0;
	    virtual T get_token_by_number(typename cc_tokenizer::string_character_traits<E>::int_type) = 0;
    };
}

#endif
