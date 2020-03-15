Os Jupyter Notebooks deste repositório utilizam o Xeus-Cling: https://github.com/jupyter-xeus/xeus-cling.

Cling é um interpretador interativo C++ implementado como uma extensão do LLVM e do Clang, desenvolvido pelo CERN como parte do projeto ROOT:

- https://root.cern.ch/cling
- https://github.com/root-project/cling

Clang é um *front end* para C++ e outros: https://clang.llvm.org/.

LLVM (https://llvm.org/) é uma infraestrutura para compiladores, com mais de 120 contribuidores ativos incluindo NVidia, Apple, ARM, AMD, Intel, Qualcomm, e outros. O projeto iniciou em 2000 na Universidade de Illinois em Urbana-Champaign. A Apple usa no SDK para o macOS e iOS. A Sony usa no SDK do PlayStation 4. O Clang é utilizado no FreeBSD, OpenMandriva, Firefox, e Chrome.

CERN é a Organização Européia para a Pesquina Nuclear, maior laboratório de física de partículas do mundo, também conhecido pelo acelerador de partículas LHC.

ROOT é um conjunto de ferramentas para processamento de *big data*, análise estatística, visualização, e armazenamento.

## Instalação

    $ conda create -n cling
    $ conda activate cling
    $ conda install -c conda-forge xeus-cling notebook

O Cling fica disponível no menu do Jupyter Notebook. Ao criar um novo *notebook* com *New*, é possível selecionar C++.
