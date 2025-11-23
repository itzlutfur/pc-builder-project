```markdown
# PC Builder Project

Simple command-line C++ tool to help research and assemble custom PC builds.  
This repository contains the source code, tests, and minimal build instructions.

Author: itzlutfur  
Language: C++ (100%)

## What I did:
- Implemented DSA fundamentals including linkedlist, stack, queue, and structure.
- The project was developed with a command-line interface (CLI).
- The build configuration can be exported to a TXT file.
- The component list and PC build details are stored using a dynamic linked list.

## Features
- Component catalog (CPU, GPU, RAM, Motherboard, PSU, Case, Storage)
- Compatibility validation with clear diagnostics
- Budget-based suggestion helper
- Import/export of builds (.txt format)

Quick single-command build (example):
g++ -std=c++17 -O2 -Iinclude -o pc-builder src/main.cpp src/models/*.cpp src/engine/*.cpp src/io/*.cpp

## Where to look
- src/ — implementation (models, engine, io)
- read.md — this file

```
