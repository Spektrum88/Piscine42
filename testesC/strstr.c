#include <stdio.h>
char* my_strstr(char *haystack, const char *needle) {
    if (haystack == NULL || needle == NULL) {
        return NULL;
    }

    for ( ; *haystack; haystack++) {
        // Is the needle at this point in the haystack?
        const char *h, *n;
        for (h = haystack, n = needle; *h && *n && (*h == *n); ++h, ++n) {
            // Match is progressing
        }
        if (*n == '\0') {
            // Found match!
            return haystack;
        }
        // Didn't match here.  Try again further along haystack.
    }
    return NULL;
}

const char* my_strstr(const char *haystack, const char *needle) {
    return my_strstr(const_cast<char *>(haystack), needle);
}

int main() {
    const char *str = "This is a strstr test";
    const char *search = "strstr";

    const char *result = my_strstr(str, search);

    if (result)
        printf("original: %s\n item: %s\n found: %s\n", str, search, result);
    return 0;
}
