​#​include​ ​"​main.h​" 
 ​/*​* 
 ​ * swap_int - swap variable values 
 ​ * @a: pointer 1 
 ​ * @b: pointer 2 
 ​ * Return: void 
 ​*/ 
  
 ​void​ ​swap_int​(​int​ *a, ​int​ *b) 
 ​{ 
 ​        *a += *b; 
 ​        *b = *a - *b; 
 ​        *a = *a - *b; 
 ​}

task 2: 2-strlen.c

 ​#​include​ ​"​main.h​" 
  
 ​/*​* 
 ​ * _strlen - find the length of a string 
 ​ * @s: pointer to the string to check 
 ​ * Return: void 
 ​*/ 
  
  
 ​int​ ​_strlen​(​char​ *s) 
 ​{ 
 ​        ​int​ i = ​0​; 
  
 ​        ​while​ (s[i]) 
 ​                i++; 
  
 ​        ​return​ (i); 
 ​}
