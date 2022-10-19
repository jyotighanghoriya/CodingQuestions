# Read entire text from a file.
f = open("test.txt", "r")
print(f.read())
print("==================================================================")

#Read First Five characters from a file
f = open("test.txt", "r")
print(f.read(5))
print("-----------------------------------------------------------------------")


#Read First five lines from a file
f = open("test.txt", "r")
for x in range(5):
    print(f.readline())