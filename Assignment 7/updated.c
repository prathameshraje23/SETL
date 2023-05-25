#include <stdio.h> 
#include <string.h> 
   
// Driver code 
int main() 
{   
    char temp[100];  
    char str[] = "hello";    
    snprintf(temp, sizeof(temp), "%s", str);
    // Used --> snprintf (buffer, buffer_size, format, source)    
    printf("%s", temp);     
    return 0; 
} 
