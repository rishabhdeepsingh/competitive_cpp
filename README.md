# competitive_cpp

[![GitHub stars](https://img.shields.io/github/stars/rishabhdeepsingh/competitive_cpp?style=flat)](https://github.com/rishabhdeepsingh/competitive_cpp/stargazers) ![GitHub branch checks state](https://img.shields.io/github/checks-status/rishabhdeepsingh/competitive_cpp/main?style=flat) ![GitHub issues](https://img.shields.io/github/issues/rishabhdeepsingh/competitive_cpp?style=flat) [![CodeFactor](https://www.codefactor.io/repository/github/rishabhdeepsingh/competitive_cpp/badge/main)](https://www.codefactor.io/repository/github/rishabhdeepsingh/competitive_cpp/overview/main)

Data structure and algorithms tested and usable using bazel

## Building

```
bazel build //...
```

## Testing 🧪

to run all the tests
```
bazel test //...
```

If you want to run a specific `cc_test`
```
 bazel test test/strings:string_utils_test
```

## Contributions

Contributions are always welcomed, Please raise a CL if you want to add an algorithm or data structure. 
Also don't forget to add the test cases, documentation if required.

We are using [Google style guides](https://google.github.io/styleguide/cppguide.html) for formatting and code structure.

