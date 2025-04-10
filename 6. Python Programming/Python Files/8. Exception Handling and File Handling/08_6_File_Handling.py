# Python File Open: 
# syntax:
# f = open(filename, mode)

# 1. r: open an existing file for a read operation.
# 2. w: open an existing file for a write operation. If the file already contains some data, then it will be overridden but if the file is not present then it creates the file as well.
# 3. a:  open an existing file for append operation. It won’t override existing data.
# 4. r+:  To read and write data into the file. The previous data in the file will be overridden.
# 5. w+: To write and read data. It will override existing data.
# 6. a+: To append and read data from the file. It won’t override existing data.

# A. Methods for read operation
# open(): This function is used to open a file and associates it with a file object. It takes two primary arguments: the file path and the mode of operation (e.g., read, write, append).
# read(): Reads the entire content of the file as a single string. 
# readline(): Reads a single line from the file, including the newline character.
# readlines(): Reads all lines from the file and returns them as a list of strings.

# B. Methods for write operation
# write(): Writes a string to the file.
# writelines(): Writes a list of strings to the file.

# C. Closing the file. 
# close(): Closes the file, releasing the resources associated with it. It's crucial to close files after use to prevent data loss and resource leaks.

# D. Moving the file pointer:
# seek(): Moves the file pointer to a specific position within the file, measured in bytes from the beginning.
# tell(): Returns the current position of the file pointer.

# E. Other operations:
# truncate(): Reduces the size of the file by removing data from the end. 
# shutil.copy(): Copies the content of source file to destination file. 

f = open("file1.txt", "r")
print(f.read())


