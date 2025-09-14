## C function for copying data to new on disk destinations

## works with  binary data too !
1. Opens src file for reading 
2. Opens dest file for writing (overwrites content if the file already exsists)
3.  Copies src file data and writes it inside dest file
4 . closes files descriptors and returns control to the program
