/* ala_exception/ala_exception.hh
   Written by, Sohail Qayum Malik[sqm@hackers.pk] */

#include <exception>
#include "../String/src/String.hh"

/* Custom Exception Types, http://www.drdobbs.com/custom-exception-types/184401913 */
/* Module21a C AND C++ EXCEPTION HANDLINE, http://www.tenouk.com/Module21a.html */

#ifndef	ALA_EXCEPTION_HH
#define	ALA_EXCEPTION_HH

class ala_exception : public std::exception {

   cc_tokenizer::String<char> msg;

   public:

      const char* what() throw () {

	     return msg.c_str();
      }

      ala_exception(cc_tokenizer::String<char> m) : msg(m) {	      
      }	      

      ~ala_exception() throw() {
      }	      
};

#endif
