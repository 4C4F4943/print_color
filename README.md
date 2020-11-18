<pre>
        \ \
         \ \  ___,.,
  _,..--=";"*^^     5
 *         {         %
 {          }         }
  }          }        %
  %          { ___,,.-"%
   %_,..--==""^        %
   L                   &
   V  Microsloth        L
   [                    J
   J                    J
   ;                    L
  #                     %
  P                     $
  P                     L
  P                    K
   L                  J
    L                P
sdm  "=e,_________,s"
</pre>

# Print color
Have you ever felt the need to clutter you're terminal with colors in cpp. Well i defenitly have and here is the result a piece of code that can print out colored text to the terminal. I does it in a pretty standard way where in cpp you have: 

```C++
#include<iostream>
using namespace std;
int main()
{
int INDEX_OF_COLOR_YOU_WANT = 6;
string txt = "I don't know what i am doing";
string color_codes[] = {"30","31","32","33","34","35","36","37"};
string res = "\033[1;"+color_codes[INDEX_OF_COLOR_YOU_WANT]+"m"+txt+ "\033[0m\n";

cout<<res;
}
```
this is what the whole thing is based on but if you want text with a background color(which is also a funtion) then you change the 1 for a 7:
```C++
#include<iostream>
using namespace std;
int main()
{
int INDEX_OF_COLOR_YOU_WANT = 6;
string txt = "I don't know what i am doing";
string color_codes[] = {"30","31","32","33","34","35","36","37"};
string res = "\033[7;"+color_codes[INDEX_OF_COLOR_YOU_WANT]+"m"+txt+ "\033[0m\n";
                   ^
                   |
cout<<res;
}
```
So this is it :).
I got the ascii art from <a href="https://www.asciiart.eu">ascii archive</a>. Also no hate to microsoft just like linux.
