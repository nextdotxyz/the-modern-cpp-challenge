# Objective

Suppose you have a snapshot of the list of all processes in a system. The information for each process includes name, identifier, status (which can be either running or suspended), account name (under which the process runs), memory size in bytes, and platform (which can be either 32-bit or 64-bit). Your task is to write a function that takes such a list of processes and prints them to the console alphabetically, in tabular format. All columns must be left-aligned, except for the memory column which must be right-aligned. The value of the memory size must be displayed in KB. The following is an example of the output of this function:


```markup
chrome.exe      1044   Running    marius.bancila    25180  32-bit
chrome.exe      10100  Running    marius.bancila   227756  32-bit
cmd.exe         512    Running    SYSTEM               48  64-bit
explorer.exe    7108   Running    marius.bancila    29529  64-bit
skype.exe       22456  Suspended  marius.bancila      656  64-bit
```

# Implementation