## CSV(Coma Seperated Values) parser

Training or testing data comes in csv files(one of the other formats). This repository is an effort to come up with a very light weight, small library to parse the csv files and get to and get the stored data with as little effort as possible from the point of view of the implementer the ML algorithms.

### Build Environment

- [Visual C++ build tools](https://aka.ms/buildtools)
> The installer optionally installs Windows SDK 8.1 and Windows SDK 10. Install both of them'.
- [.Net desktop build tools](https://docs.microsoft.com/en-us/visualstudio/install/workload-component-id-vs-build-tools?view=vs-2019#net-desktop-build-tools)


_Dependencies_

*String*. It is a small and very purpose specific C++ String class implementation. You can clone it from here... [string.git](https://github.com/sohail/String.git) and you clone it in **./lib** folder. 

**To build example application**, I do this in [VSC](https://code.visualstudio.com/) terminal...

```

./pre-build.bat

build.cmd

```

**project.xml** will try to build an application in folder **Example-Application** and then copy it outside of the **Example-Application** folder





