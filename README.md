
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
You can also print some rainbow text or moving rainbow text with the following script. 
```python
from rainbow import print_rainbow, animate_rainbow

#for the animeted you can do this or uncomment some comments to print it directly. set background to "-b" to make the background rainbow.
x = []
x.append(animate_rainbow("hullo there my good friend ",background=""))
print("\n")
for i in range(len(x[0])):
    print(x[0][i],end="\r")
    time.sleep(0.08)
#you van also print it directly by printing it instead of returning it.
print(print_rainbow("hullo there my good friend ",background="-b")
```
So this is it :).
