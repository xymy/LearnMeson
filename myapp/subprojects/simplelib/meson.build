project(
    'simplelib',
    'cpp',
    version : '1.0',
    license : 'MIT',
    default_options : [
        'buildtype=release',
        'cpp_std=c++17',
    ],
    meson_version : '>=0.61',
)

cpp_args = []

if get_option('default_library') == 'shared'
    cpp_args += ['-DSIMPLELIB_SHARED', '-DSIMPLELIB_SHARED_BUILDING']
endif

simplelib_inc = include_directories('include')

simplelib_lib = library(
    'simplelib',
    'src/simplelib.cpp',
    include_directories : simplelib_inc,
    cpp_args : cpp_args,
)

simplelib_dep = declare_dependency(
    include_directories : simplelib_inc,
    link_with : simplelib_lib,
)
