#!/usr/bin/sh
export VOLK_GENERIC=1
export GR_DONT_LOAD_PREFS=1
export srcdir=/home/crazyt/sources/gr-lora/python
export PATH=/home/crazyt/sources/gr-lora/cmake/python:$PATH
export LD_LIBRARY_PATH=/home/crazyt/sources/gr-lora/cmake/lib:$LD_LIBRARY_PATH
export PYTHONPATH=/home/crazyt/sources/gr-lora/cmake/swig:$PYTHONPATH
/usr/bin/python3 /home/crazyt/sources/gr-lora/python/qa_decode.py 
