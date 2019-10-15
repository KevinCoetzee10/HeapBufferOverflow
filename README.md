# HeapBufferOverflow
An example of a program vulnerable to heap buffer overflows.
A program that tests for a static password ("SecretPassword"). It is, however, possible to overflow the buffer holding the user-entered password in order to overwrite the value of the variable holding the log-in status. Access can thus be gained without having the correct password.
