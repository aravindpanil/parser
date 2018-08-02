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
 
 ## SCANNER CLASS IN JAVA
  
  The scanner class breaks up the entire input into tokens seperated by delimiters. The default delimiter is whitespace. **The scanner methods next() and its children work by skipping the delimiter and returning the next token. It will not consume the delimiter after the token.**
   
  **Note - An important feature of java is that it considers whitespace, tab, newline and EOF as delimiter for the scanner class**
   
   **This means that when a next() or nextInt() or nextFloat() is used, it will leave the newline after pressing enter in the input in the input stream. This can cause problems with multiple input as shown in the following code**
    
  ```
  int a  = sc.nextInt();

  /*Here we type an integer and press enter. The integer is consumed by nextInt but the enter or newline is left in the input stream.*/
   
  String s = sc.nextLine();
  /*This will not capture any input because newline will consume the enter from previous input. Then it stops taking input*/

```
The solution is to add an extra sc.newLine() after sc.nextInt() so that it will consume the newline.