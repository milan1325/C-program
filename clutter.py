import os

def createfoleder(folder):
    if not os.path.exists(folder):
        os.makedirs(folder)


files =  os.listdir()
files.remove("clutter.py")
createfoleder("exeFile")
# print(files)

exeExt = [".exe"]
exeFiles = [file for file in files if os.path.splitext(file)[1].lower() in exeExt]

for exeFile in exeFiles:
    os.replace(exeFile,f"exeFile/{exeFile}")