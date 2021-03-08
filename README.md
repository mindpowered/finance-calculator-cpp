
financecalculator
=================
Financial calculations such as Net Present Value, Present Value, Future Value

![Build Status](https://mindpowered.dev/assets/images/github-badges/build-passing.svg)

Contents
========

* [Source Code and Documentation](#source-code-and-documentation)
* [Requirements](#requirements)
* [Installation](#installation)
* [Support](#support)
* [Licensing](#licensing)

# Source Code and Documentation
- Source Code: [https://github.com/mindpowered/finance-calculator-cpp](https://github.com/mindpowered/finance-calculator-cpp)
- Documentation: [https://mindpowered.github.io/finance-calculator-cpp](https://mindpowered.github.io/finance-calculator-cpp)

# Requirements
- Bazel - https://www.bazel.build/
- Haxe 4.1.1
- Neko
- hxcpp - https://lib.haxe.org/p/hxcpp/
- g++


Third-party dependencies may have additional requirements.

# Installation
Add rules to WORKSPACE file ...

```
load("@bazel_tools//tools/build_defs/repo:git.bzl", "git_repository")

git_repository(
  name = 'maglev',
  remote = 'https://github.com/mindpowered/maglev-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'haxecpp',
  remote = 'https://github.com/mindpowered/haxecpp-cpp.git',
  branch = 'master',
)
git_repository(
  name = 'financecalculator',
  remote = 'https://github.com/mindpowered/finance-calculator-cpp.git',
  branch = 'master',
)
```

Reference dependency in BUILD file ...

```
    deps = [
        ...
        "@financecalculator//:financecalculator"
        ...
    ],
```


# Support
We are here to support using this package. If it doesn't do what you're looking for, isn't working, or you just need help, please [Contact us][contact].

There is also a public [Issue Tracker][bugs] available for this package.

# Licensing
This package is released under the MIT License.



[bugs]: https://github.com/mindpowered/finance-calculator-cpp/issues
[contact]: https://mindpowered.dev/support/?ref=finance-calculator-cpp/
[licensing]: https://mindpowered.dev/?ref=finance-calculator-cpp
[purchase]: https://mindpowered.dev/purchase/
