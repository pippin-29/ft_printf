# ft_printf
A basic recode of the function printf, written in c.

This function received 100% Grades at 42 School,
It does not include the bonus part of the project, which would include padding, precision, etc.

Flags Handled Include c(character), s(string), p(pointer address), x(lc hex), X(uc hex),
u(unsigned integer), i(integer), d(decimal base integer), %(percent symbol).

The main function finds the first and subsequent occurrences of the percent symbol,
Iterates past the % and replaces the format specifier input with the required parameter,
Each parameter input replaces each format specifier in sequence/order from first to last.

This is achieved through three macros in the <stdarg.h> library,


va_start(va_list ap, last) (last being the argument which precedes the argument (...)

va_arg(va_list ap, type)      Types are as follows;

  character -- int |
  integer -- int |
  unsigned integer -- unsigned int |
  hexadecimal -- unsigned int |
  string -- char * |
  pointer address -- unsigned long long |
  
  Each call to va_arg will modify variable ap, so that the next call will return the next argument.

va_end(va_list ap)
  This macro must match the "va_start" macro.



These functions allow the use of a variable number of arguments/parameters within a function,

va_list ap; -- Must be declared prior to its use in the first macro "va_start" which will
initialise the variable.

It is my understanding each argument must be processed individually and in order.






