<div align="center">
  
# Installation
  
</div> 

## Installation of the development environment

Installe Qt with this link : https://www.qt.io/download-open-source

## Opening and compilation of the project

Open the file Qt_Self-AssessmentQuiz.pro with Qt and compile the project.

If you want to compile manually follow this step :
- Add qmake at the windows path (create a new systme variable and type the path of cmake : normally it's C:\Qt\6.5.0\mingw_64\bin)
- install chocolaty (https://chocolatey.org/install) , run this command in powershell with administrator right : 
```bash
Set-ExecutionPolicy Bypass -Scope Process -Force; [System.Net.ServicePointManager]::SecurityProtocol = [System.Net.ServicePointManager]::SecurityProtocol -bor 3072; iex ((New-Object System.Net.WebClient).DownloadString('https://community.chocolatey.org/install.ps1'))
```

Open your terminale and go to the directory
```bash
qmake
```
```bash
make
```
then do
```bash
.\Self-AssessmentQuiz.exe
```
if it not work do
```bash
.\release\Self-AssessmentQuiz.exe
```
