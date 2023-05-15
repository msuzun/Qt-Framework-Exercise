# Creating Project Files
Project files contain all the information required by qmake to build your application, library, or plugin. 
Generally, you use a series of declarations to specify the resources in the project, but support for simple programming constructs enables you to describe different build processes for different platforms and environments.

## Project File Elements
The project file format used by qmake can be used to support both simple and fairly complex build systems. 
Simple project files use a straightforward declarative style, defining standard variables to indicate the source and header files that are used in the project. 
Complex projects may use control flow structures to fine-tune the build process.

### Variables
In a project file, variables are used to hold lists of strings. In the simplest projects, these variables inform qmake about the configuration options to use, or supply filenames and paths to use in the build process.
qmake looks for certain variables in each project file, and it uses the contents of these to determine what it should write to a Makefile.
For example, the lists of values in the HEADERS and SOURCES variables are used to tell qmake about header and source files in the same directory as the project file.
Variables can also be used internally to store temporary lists of values, and existing lists of values can be overwritten or extended with new values.

![image](https://github.com/msuzun/Qt-Framework-Exercise/assets/23638210/1dae9271-3601-45b0-b4a0-7a9765f9a5ee)

### General Configuration
The CONFIG variable specifies the options and features that the project should be configured with.
The project can be built in release mode or debug mode, or both. If debug and release are both specified, the last one takes effect. 
If you specify the debug_and_release option to build both the debug and release versions of a project, the Makefile that qmake generates includes a rule that builds both versions. 

![image](https://github.com/msuzun/Qt-Framework-Exercise/assets/23638210/2e4237b3-c352-4419-8b8e-46170eeef152)

> https://doc.qt.io/qt-6/qmake-project-files.html

