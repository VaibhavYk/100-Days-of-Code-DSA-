#include <stdio.h>
#include <string.h>
#include <ctype.h>  // for tolower()

int main() {
    char s[1001];  // assuming max length ≤ 1000
    
    // Read the input string
    // fgets reads the newline too, scanf("%s") stops at space
    // Here we use fgets for safety (can handle spaces if needed)
    fgets(s, sizeof(s), stdin);
    
    // Remove trailing newline if present
    int len = strlen(s);
    if (len > 0 && s[len-1] == '\n') {
        s[len-1] = '\0';
        len--;
    }
    
    // Two pointers
    int left = 0;
    int right = len - 1;
    
    int isPalindrome = 1;  // flag
    
    // Compare characters from both ends
    while (left < right) {
        // Optional: ignore case (uncomment if needed)
        // char leftChar = tolower(s[left]);
        // char rightChar = tolower(s[right]);
        
        // Use original characters (case-sensitive)
        char leftChar = s[left];
        char rightChar = s[right];
        
        if (leftChar != rightChar) {
            isPalindrome = 0;
            break;
        }
        
        left++;
        right--;
    }
    
    // Output result
    if (isPalindrome) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    return 0;
}
