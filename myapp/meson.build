project(
    'myapp',
    'cpp',
    version : '1.0',
    license : 'MIT',
    default_options : [
        'buildtype=release',
        'cpp_std=c++17',
        'default_library=static',
    ],
    meson_version : '>=0.61',
)

simplelib_proj = subproject('simplelib')
simplelib_dep = simplelib_proj.get_variable('simplelib_dep')

executable('myapp', 'src/myapp.cpp', dependencies : simplelib_dep)
