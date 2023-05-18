<div align="center">
  
# Installation
  
</div> 

## Installation of the development environment

Installe Qt with this link : https://www.qt.io/download-open-source

## Opening and compilation of the project

### Compile with Qt IDE
Open the file "Qt_Self-AssessmentQuiz.pro" with Qt and compile the project.

### Compile manually
 - Add the path to your QMake bin folder to the Windows PATH environment variable by using the following steps:
     - In the Windows search bar, search Edit environment.
     - Choose the Path variable in your User variables and then select Edit.
     - Select New and add the Mingw-w64 destination folder path, and type the path : C:\Qt\6.5.0\mingw_64\bin
     - Select OK to save the updated PATH. You will need to reopen any console windows for the new PATH location to be available.
     
 - Install chocolaty with this link https://chocolatey.org/install or open powershell as administrator and run this command: 
```bash
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

 - Open your terminal and go to the current directory (Qt_Self-AssessmentQuiz). 
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


<div align="center"> 
  
  
# Presentation

## Here is the interface with the question and the possible answers as well as the percentage of correct answer
  
![1](https://github.com/YassineProDev/Qt_Self-AssessmentQuiz/assets/120946916/9fdbe32e-623d-4695-83a9-2643fec219ce)

## if your answer is correct you will get the message "correct".
  
![2](https://github.com/YassineProDev/Qt_Self-AssessmentQuiz/assets/120946916/3e60bdad-6004-430d-9edd-35891db02874)

## If your answer is wrong the correct answer will be given.

![3](https://github.com/YassineProDev/Qt_Self-AssessmentQuiz/assets/120946916/c94b90ac-d7cb-4aec-9916-28540dfcce42)

</div>
