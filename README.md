# RecursiveString
## Aim 

- Recursivly defined string data structure.
- String functions that are functionally pure.
- Demostration of creating functional programs in a traditionally imperative language.

Haskell and the functional programming paradigm influenced this project.

## Implemented Features

- `int length(string *str);` - Returns the lengeth of the string
- `string *constructString(char *impString);` - Creates a new `string` from a traditional `C` string
- `string *stringMap(char (*mapFunc) (void *arg), string *str);` - Returns a new string where `mapFunc` is applied on each char of the `str` string.
  - Map functions in functional programming are known as functors
- `void *stringPrintLn(string *str);` & `void *stringPrint(string *str)` - Recursivly prints the string, `stringPrintLn` will print a new line terminated string

## To-Do

- Filter Function: Returns a string satisfies the conditions of a boolean function

  - Example:

    ```c
    // checks if capital letter or not
    bool isCap(char letter);
    string str = constructString("HeLlO World");
    string newStr = filterString(isCap, str);
    // newStr = HLOW
    ```
