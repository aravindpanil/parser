# parser
Practice repo for input and output

## Newline error

Whenever we use scanf for an integer or a float,it automatically ignores the whitespace and newline. However, there is an exception with character. 
Hence with the following code
```
scanf("%d",&a);
scanf("%c",&chr);
```
chr will **contain the newline from the previous enter key pressed** after scanning a. To prevent this, there are two suggested methods. 
 
 ### 1. MAKING SCANF CONSUME THE SPACE
 This method utilizes the code 
 ```
 scanf(" %c",&chr);
 ```
 This makes the scanf consume any trailing whitespace or newline from the previous input.
  
   ### 2. USING GETCHAR
    
This method is preferrable as the same can be used when the same problem arises with fgets().
Here we simply use a getchar after the scanf to consume the newline. 
```
scanf("%d",&a);
getchar();
scanf("%c",&chr);
```
 
 ## FGETS OVER SCANF
  
  fgets() is the preferred method to read input especially character and string. Integer and float takes processing after reading the input with fgets. Hence it is less convenient. The main advantage of fgets is that it won't cause a buffer overflow unlike scanf and gets(which should never be used). 
  ```
  char str[100];
  fgets(str,100,stdin);
  ```
  The above code will ensure there are no trailing characters to mess up the input statements that follow. fgets() also deals with lines with whitespace comfortably which scanf does not. To get the character simply follow the above code with 
  ```
  char t = str[0];
  ```
  It is not recommended to use dynamic allocation for fgets as it is an expensive process. Using a sufficiently large buffer for text is good enough and simple. 
