# otus-cpp-basic
Reinitialized existing Git repository in C:/Users/ASUS/Desktop/otus-cpp-basic/.git/
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
* main
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git diff
diff --git a/otus.js b/otus.js
deleted file mode 100644
index e69de29..0000000
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
* main
  test1
  test2
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git chekout test1
git: 'chekout' is not a git command. See 'git --help'.

The most similar command is
        checkout
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git checkout test1
Switched to branch 'test1'
D       otus.js
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch infa
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
  infa
  main
* test1
  test2
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch -d infa
Deleted branch infa (was b5ba508).
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
  main
* test1
  test2
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch -m infa
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
* infa
  main
  test2
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git checkout test2
Switched to branch 'test2'
D       otus.js
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
  infa
  main
* test2
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch chekout
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
  chekout
  infa
  main
* test2
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch -d chekout
Deleted branch chekout (was b5ba508).
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
  infa
  main
* test2
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch -m run 
PS C:\Users\ASUS\Desktop\otus-cpp-basic> git branch
  infa
  main
* run
PS C:\Users\ASUS\Desktop\otus-cpp-basic> 
