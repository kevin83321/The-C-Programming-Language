# 2.1 Variable Name
> 

# 2.2 Data Types and Sizes
> char : a single byte, capable of holding one character in ther local character set. </br>
> int : an integer, typically reflecting the natural size of integers on the host machine. 16 or 32 bits </br>
> float : single-precision floating point </br>
> double : double-precision floating point </br>
> </br>
> short int : 16 bits </br>
> long int : 32 bits c
> length : short <= int <= long

# 2.3 Constants
> int constant is like 1234 </br>
> long constant is like 12345678L </br>
> double constant is like 123.4 or 1e4 or 1e-4 </br>
> leading 0 means octal </br>
> - decimal 31 -> 037 in octal and 0x1f or 0x1F in hex </br>
> leading 0x means hexadecimal </br>
> '\ooo', where ooo is one to three octal digits 0...7 </br>
> '\xhh', where hh is one or more hexadecimal digits (0...9, a...f, A...F)</br>

## 2.3.1 Escape Sequence set
> - \a : alert (bell) character </br>
> - \b : backspace </br>
> - \f : formfeed </br>
> - \n : newline </br>
> - \r : carriage return </br>
> - \t : horizontal tab </br>
> - \v : vertical tab </br>
> - \\ : backslash </br>
> - \? : question mark </br>
> - \' : single quote </br>
> - \" : double quote </br>
> - \ooo : octal number </br>
> - \xhh : hexadecimal number </br>

# 2.5 Arithmetic Operators
> - \+ </br>
> - \- </br>
> - \* </br>
> - / </br>
> - % : modulus </br>

# 2.6 Relation and Logical operators
> precedence lower than arthimetic operators </br>
> - \> : greater than</br>
> - \>= : greater than equal</br>
> - <  : less than</br>
> - <= : less than equal</br>
> - == : equals, which precedence lower previous 4 operators </br>
> - != : not equals, which precedence lower previous 4 operators but higher than assignment</br>
> - && : and </br>
> - || : or, which precedence lower than && </br>
