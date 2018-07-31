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
 
