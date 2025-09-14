## C function for copying data to new on disk destinations

## works with asci and binary data
- 1. Opens src file for reading 
- 2. Opens dest file for writing ( overwrites  the content if the file already exsists
- 3. Copies src file data and write it inside dest file
- 4. closes files descriptors and returns control to the program
