# CoverMe

A fixed version of CoverMe for Ubuntu 20.04 using LLVM-10 and C++14

# Setup

* Install the Python2 dependencies and required packages.

* Edit `BVA_FILE` and `BVA_FUNC` according to the file location and function to be tested.

* Then run the following command in the project root directory:

```shell
make
```

# Credits

Repo is based on the implementation of CoverMe tool described in the paper:

Fu, Zhoulai, and Zhendong Su. "Achieving high coverage for floating-point code via unconstrained programming." ACM PLDI'17.
