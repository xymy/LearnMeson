project(
    'myapp',
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
    cpp_args += ['-DSIMPLELIB_SHARED']
endif

simplelib_proj = subproject('simplelib')
simplelib_dep = simplelib_proj.get_variable('simplelib_dep')

executable(
    'myapp',
    'src/myapp.cpp',
    dependencies : simplelib_dep,
    cpp_args : cpp_args,
)
