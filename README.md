# My personal repository and course notes

The Jupyter Notebooks in this repository use Xeus-Cling

* https://github.com/jupyter-xeus/xeus-cling.

Cling is an interactive C ++ interpreter implemented as an extension of LLVM and Clang, developed by CERN as part of the ROOT project

* https://root.cern.ch/cling
* https://github.com/root-project/cling

Clang is a * front end * for C ++ and others

* https://clang.llvm.org/

LLVM (https://llvm.org/) is an infrastructure for compilers, with more than 120 active contributors including NVidia, Apple, ARM, AMD, Intel, Qualcomm, and others. The project started in 2000 at the University of Illinois at Urbana-Champaign. Apple uses in the SDK for macOS and iOS. Sony uses it in the PlayStation 4 SDK. LLVM Clang is used in FreeBSD, OpenMandriva, Firefox, and Chrome

CERN is the European Organization for Nuclear Research, the largest particle physics laboratory in the world, also known for the LHC particle accelerator

ROOT is a set of tools for big data processing, statistical analysis, visualization, and storage.

Installation

    $ conda create -n cling
    $ conda activate cling
    $ conda install -c conda-forge xeus-cling notebook

Cling becomes available in the Jupyter Notebook menu. When creating a new notepad with New, you can select C++
