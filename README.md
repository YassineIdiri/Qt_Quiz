<div align="center">
  
# Installation
  
</div> 

## Installation of the development environment

Installe Qt with this link : https://www.qt.io/download-open-source

## Opening and compilation of the project

### Compile with Qt IDE
Open the file Qt_Self-AssessmentQuiz.pro with Qt and compile the project.

### Compilemanually
 - Add the path to your QMake bin folder to the Windows PATH environment variable by using the following steps:
     - In the Windows search bar, search Edit environment.
     - Choose the Path variable in your User variables and then select Edit.
     - Select New and add the Mingw-w64 destination folder path, and type the path : C:\Qt\6.5.0\mingw_64\bin
     - Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available.
     - 
 - Install chocolaty with this link https://chocolatey.org/install or open powershell as administrator and run this command: 
```bash
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

 - open your terminal and go to the current directory (Qt_Self-AssessmentQuiz). 
 - Type the command
```bash
qmake
```
 - Type the command
```bash
make
```
- Type the command
```bash
.\Self-AssessmentQuiz.exe
```
 - If it doesn't work type
```bash
.\release\Self-AssessmentQuiz.exe
```
