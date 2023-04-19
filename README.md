# Simple Color Library C

A simple and small library for handling colors in C / C++.\
May not work with the default windows terminal.\
BUT you can use the "Terminal" app in the Microsoft Store.\
Should compile fine with ```gcc test.c -o test color.c```.

## Usage
``` C
colorPrint("Example 1", RED); 
colorPrint("Example 2", GREEN + BOLD); 
colorPrint("Example 2", BLUE + UNDERLINE); 
```
For more examples you can check ```examples.c```

## Colors
The colors this library suports are:
- Black
- Red
- Green
- Yellow
- Blue
- Magenta
- Cyan
- White

## Types
The types this library suports are:
- Normal
- Bold
- Underline
- Inverse
