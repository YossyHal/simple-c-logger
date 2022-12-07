# Simple C/C++ Logger

## Usage

The default is to output logs with log level `INFO` or higher.

```
$ gcc hello.c && ./a.out
info
warn
error
critical
```

Set log level `TRACE`.

```
$ gcc hello.c -DLOG_LEVEL=LOG_LEVEL_TRACE && ./a.out
trace
debug
info
warn
error
critical
```

## Usage C++

Same as C lang usage.

```
$ g++ hello.cpp -DLOG_LEVEL=LOG_LEVEL_DEBUG && ./a.out
debug
info
warn
error
critical
```
