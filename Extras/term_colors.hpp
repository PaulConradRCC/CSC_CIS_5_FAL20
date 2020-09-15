#ifndef TERM_COLORS_HPP
#define TERM_COLORS_HPP

#include <string>

namespace TERM {
  const std::string RESET = "\e[0m";							/* Normal Text */
  const std::string BLACK = "\e[30m";              			/* Black */
  const std::string RED = "\e[31m";              				/* Red */
  const std::string GREEN = "\e[32m";              			/* Green */
  const std::string YELLOW = "\e[33m";             			/* Yellow */
  const std::string BLUE = "\e[34m";              			/* Blue */
  const std::string MAGENTA = "\e[35m";            			/* Magenta */
  const std::string CYAN = "\e[36m";              			/* Cyan */
  const std::string WHITE = "\e[37m";              			/* White */
  const std::string BOLDBLACK = "\e[1m\e[30m";   			/* Bold Black */
  const std::string BOLDRED = "\e[1m\e[31m";     			/* Bold Red */
  const std::string BOLDGREEN = "\e[1m\e[32m";   			/* Bold Green */
  const std::string BOLDYELLOW = "\e[1m\e[33m";  			/* Bold Yellow */
  const std::string BOLDBLUE = "\e[1m\e[34m";    			/* Bold Blue */
  const std::string BOLDMAGENTA = "\e[1m\e[35m"; 			/* Bold Magenta */
  const std::string BOLDCYAN = "\e[1m\e[36m";    			/* Bold Cyan */
  const std::string BOLDWHITE = "\e[1m\e[37m";   			/* Bold White */
  const std::string ULBOLDBLACK = "\e[4m\e[1m\e[30m";     /* Underlined Bold Black */
  const std::string ULBOLDRED = "\e[4m\e[1m\e[31m";       /* Underlined Bold Red */
  const std::string ULBOLDGREEN = "\e[4m\e[1m\e[32m";     /* Underlined Bold Green */
  const std::string ULBOLDYELLOW = "\e[4m\e[1m\e[33m";    /* Underlined Bold Yellow */
  const std::string ULBOLDBLUE = "\e[4m\e[1m\e[34m";      /* Underlined Bold Blue */
  const std::string ULBOLDMAGENTA = "\e[4m\e[1m\e[35m";   /* Underlined Bold Magenta */
  const std::string ULBOLDCYAN = "\e[4m\e[1m\e[36m";      /* Underlined Bold Cyan */
  const std::string ULBOLDWHITE = "\e[4m\e[1m\e[37m";     /* Underlined Bold White */
  const std::string CLEAR = "\e[2J";  						/* clear screen escape code */

  const std::string MYSTERY = "\e[38;2;144;238;144m";
};

#endif
