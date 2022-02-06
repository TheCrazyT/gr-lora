GR_PYTHON_CHECK_MODULE_RAW(
    "pygccxml"
    "import pygccxml"
    PYGCCXML_FOUND
    )
include(GrPybind)

########################################################################
# Python Bindings
########################################################################

list(APPEND lora_python_files
    decode_python.cc 
    encode_python.cc
    demod_python.cc 
    mod_python.cc
    python_bindings.cc)

GR_PYBIND_MAKE_OOT(lora 
   ../.. 
   gr::lora
   "${lora_python_files}")

install(TARGETS lora_python DESTINATION ${GR_PYTHON_DIR}/gnuradio/lora COMPONENT pythonapi)
