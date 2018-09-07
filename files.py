# This file can create more than one file at a time
print "Enter file names :"
n = map(str,raw_input().split()) #file name
dir = raw_input("Enter the relative path from current folder") #directory name
# print n
for i in (n):
    temp = str("./") + str(dir) + str(i) + ".cpp"
    print temp, "created"
    f = open(temp, "w+")
    f.write("#include <bits/stdc++.h>\n#define llint long long int\nusing namespace std;\n\nint main()\n{\n\n}")
'''
    //The following is already written in the files
    #include <bits/stdc++.h>
    #define llint long long int
    using namespace std;

    int main()
    {

    }
'''
