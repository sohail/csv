## CSV(Comma Separated Values) parser

Training or testing data comes in csv files(one of the other formats). This repository is an effort to come up with a very light weight, small library to parse the csv files and get to and get the stored data with as little effort as possible from the point of view of the implementer of the ML algorithms.

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

### CSV Format

A whole *.csv file is a table. A table has rows(records) and each row(or record) is a set of columns(attributes, features or cells) and each cell is separated from other cells in the same record(or row) by a comma.

The number of cells(attributes or features) in each row is exactly as same as the any other of the rows. If in any row(a record) the number of cells(features or attributes) is not exactly as the same as the other rows then it's an error.

Optionally, the very first row may contain labels(a set string literal used as field names or column names) assigned to the values in the corresponding column. This parser does'nt treat the lines of names specially, for it a token(value) 





