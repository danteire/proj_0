set files=src\glad.c src\main.c
set libs=C:\Users\Dante\Desktop\proj_0\lib\SDL2main.lib C:\Users\Dante\Desktop\proj_0\lib\SDL2.lib C:\Users\Dante\Desktop\proj_0\lib\freetype.lib

CL /Zi /I C:\Users\Dante\Desktop\proj_0\include %files% /link %libs% /OUT:mojagra.exe