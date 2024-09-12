/*
Static import in java -> static import concept is introduced in 1.5 version. With the help of static import, we can
                         access the static members of a class directly without class name or any object.
                         According to SUN microSystem, it will improve the code readability and enhance coding.
                         But according to the programming experts, it will lead to confusion and not good for programming.
                         If there is no specific requirement then we should not go for static import.

Advantage of static import:
If user wants to access any static member of class then less coding is required.

Disadvantage of static import:
Static import makes the program unreadable and unmaintainable if you are reusing this feature.

*/

import static java.lang.System.out;
public class _12_8_Static_import {
    public static void main(String[] args) {
        out.println(23);
    }
}
