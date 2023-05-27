#include "vga/text/terminal.h"

void kernel_early_main() {
    init_terminal();
}

void kernel_main() {

    printf("Please commit\n");
    
/*
 ____  _  _  ____   __     ____  _  _        ____  ____      _  
/ ___)/ )( \(    \ /  \   (  _ \( \/ )   ___(  _ \(  __)    / ) 
\___ \) \/ ( ) D ((  O )   )   // \/ \  (___))   / ) _)    / /  
(____/\____/(____/ \__/   (__\_)\_)(_/      (__\_)(__)    (_/   
*/
    
    printf_color("\\
 ____  _  _  ____   __     ____  _  _        ____  ____      _  \n\
/ ___)/ )( \\(    \\ /  \\   (  _ \\( \\/ )   ___(  _ \\(  __)    / ) \n\
\\___ \\) \\/ ( ) D ((  O )   )   // \\/ \\  (___))   / ) _)    / /  \n\
(____/\\____/(____/ \\__/   (__\\_)\\_)(_/      (__\\_)(__)    (_/   \n\
", VGA_COLOR_MAGENTA, VGA_COLOR_BLACK);

    printf_color("<3", VGA_COLOR_WHITE, VGA_COLOR_BLACK);
}

void kernel_end() {
    __asm__ ("hlt");
}
