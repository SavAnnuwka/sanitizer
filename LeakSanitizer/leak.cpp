

 //
 //LeakSanitizer is a memory leak detector which is integrated into AddressSanitizer. The tool is supported on x86_64 Linux and OS X.
 //LeakSanitizer is enabled by default in ASan builds of x86_64 Linux, and can be enabled with ASAN_OPTIONS=detect_leaks=1 on x86_64 OS X.

//#include <stdlib.h>
#include <cstdlib>
//detect_leaks=1
 void *p;

 void goo() {
     p = malloc(7);
     p = 0; // The memory is leaked here.

 }
 int main() {
     goo();
     return 0;
}


