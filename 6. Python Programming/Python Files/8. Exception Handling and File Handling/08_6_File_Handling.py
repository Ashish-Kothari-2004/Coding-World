# Python File Open: 
# syntax:
# f = open(filename, mode)

# 1. r: open an existing file for a read operation.
# 2. w: open an existing file for a write operation. If the file already contains some data, then it will be overridden but if the file is not present then it creates the file as well.
# 3. a:  open an existing file for append operation. It won’t override existing data.
# 4. r+:  To read and write data into the file. The previous data in the file will be overridden.
# 5. w+: To write and read data. It will override existing data.
# 6. a+: To append and read data from the file. It won’t override existing data.

f = open("file1.txt", "r")
print(f.read())


