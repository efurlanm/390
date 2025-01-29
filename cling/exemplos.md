# Cling - Exemplos

Começando com exemplos de mensagems de erro:


```c++
erro
```

    [1minput_line_9:2:2: [0m[0;1;31merror: [0m[1muse of undeclared identifier 'erro'[0m
     erro
    [0;1;32m ^
    [0m


    Interpreter Error: 



```c++
std:string s("hi");
```

    [1minput_line_7:2:6: [0m[0;1;31merror: [0m[1munknown type name 'string'; did you mean 'std::string'?[0m
     std:string s("hi");
    [0;1;32m     ^~~~~~
    [0m[0;32m     std::string
    [0m[1m/anaconda3/envs/cling/bin/../lib/gcc/x86_64-conda_cos6-linux-gnu/7.3.0/../../../../x86_64-conda_cos6-linux-gnu/include/c++/7.3.0/bits/stringfwd.h:74:33: [0m[0;1;30mnote: [0m'std::string' declared here[0m
      typedef basic_string<char>    string;   
    [0;1;32m                                ^
    [0m


    Interpreter Error: 


Usando a linha de comando como uma calculadora:


```c++
1 + 1
```




    2




```c++
3.14 * 2
```




    6.2800000



Colocando ponto e vírgula no final, não mostra o resultado:


```c++
1 + 1 ;
```


```c++
int c = 10 ;
c ;
```

Sem a vírgula, mostra:


```c++
int f = 10 ;
f
```




    10




```c++
auto i = 20.0 ;
i
```




    20.000000



Float:


```c++
float f1 = 3.14 / 5
```


```c++
float f2 = (float) 4 / 5;
```


```c++
f2
```




    0.800000f



Não precisa do #include <math.h> :


```c++
cos(3.14)
```




    -0.99999873




```c++
pow(2, 3)
```




    8.0000000



C++ Hello World


```c++
#include <iostream>
using namespace std;
cout<<"Hello World\n";
```

    Hello World


Expressões Lambda e funções:


```c++
auto func = [](int a, int b) -> int { return a+b; };
func(1,2)
```




    3



Loopings


```c++
#include <iostream>
using namespace std;
int a[] = {1,2,3};
for (int& x: a){ x += 10; };
for (int& x: a){ cout << x << ","; };
```

    11,12,13,

Meta-comandos:


```c++
.help
```

    
     Cling (C/C++ interpreter) meta commands usage
     All commands must be preceded by a '.', except
     for the evaluation statement { }
     ==============================================================================
     Syntax: .Command [arg0 arg1 ... argN]
    
       .L <filename>		- Load the given file or library
    
       .(x|X) <filename>[args]	- Same as .L and runs a function with
    				  signature: ret_type filename(args)
    
       .> <filename>		- Redirect command to a given file
          '>' or '1>'		- Redirects the stdout stream only
          '2>'			- Redirects the stderr stream only
          '&>' (or '2>&1')		- Redirects both stdout and stderr
          '>>'			- Appends to the given file
    
       .undo [n]			- Unloads the last 'n' inputs lines
    
       .U <filename>		- Unloads the given file
    
       .I [path]			- Shows the include path. If a path is given -
    				  adds the path to the include paths
    
       .O <level>			- Sets the optimization level (0-3)
    				  (not yet implemented)
    
       .class <name>		- Prints out class <name> in a CINT-like style
    
       .files 			- Prints out some CINT-like file statistics
    
       .fileEx 			- Prints out some file statistics
    
       .g 				- Prints out information about global variable
    				  'name' - if no name is given, print them all
    
       .@ 				- Cancels and ignores the multiline input
    
       .rawInput [0|1]		- Toggle wrapping and printing the
    				  execution results of the input
    
       .dynamicExtensions [0|1]	- Toggles the use of the dynamic scopes and the
    				  late binding
    
       .printDebug [0|1]		- Toggles the printing of input's corresponding
    				  state changes
    
       .storeState <filename>	- Store the interpreter's state to a given file
    
       .compareState <filename>	- Compare the interpreter's state with the one
    				  saved in a given file
    
       .stats [name]		- Show stats for internal data structures
    				  'ast'  abstract syntax tree stats
    				  'asttree [filter]'  abstract syntax tree layout
    				  'decl' dump ast declarations
    				  'undo' show undo stack
    
       .help			- Shows this information
    
       .q				- Exit the program
    



```c++

```
