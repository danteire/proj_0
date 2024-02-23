#include <stdio.h>
#include <stdbool.h>
#include <glad/glad.h>
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>



int main(int argc, char **argv) {
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK,SDL_GL_CONTEXT_PROFILE_CORE);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION,3);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION,3);

    if(SDL_Init(SDL_INIT_VIDEO) < 0){
        printf("SDL ERR:\tCOULD NOT INIT\nERR_CODE:%s",SDL_GetError());
        exit(1);
    }

    SDL_Window *window = SDL_CreateWindow(
            "MojaGra",
            SDL_WINDOWPOS_CENTERED,
            SDL_WINDOWPOS_CENTERED,
            800,
            600,
            SDL_WINDOW_OPENGL
            );
    if(!window){
        printf("WINDOW ERR:\tCOULD NOT INIT\nERR_CODE:%s",SDL_GetError());
        exit(1);
    }
    SDL_GL_CreateContext(window);
    if(!gladLoadGLLoader((GLADloadproc)SDL_GL_GetProcAddress)){
        printf("GL ERR:\tCOULD NOT LOAD\nERR_CODE:%s",SDL_GetError());
    }

    printf("OpenGL dziala :)\n");
    printf("Vendor :\t%s\n",glGetString(GL_VENDOR));
    printf("Renderer :\t%s\n",glGetString(GL_RENDERER));
    printf("Version :\t%s\n",glGetString(GL_VERSION));

    bool should_quit = false;
    while (!should_quit)
    {
        /* code */
        SDL_Event event;
        while (SDL_PollEvent(&event))
        {
            if(event.type == SDL_QUIT){
                should_quit = true;
                break;
            }
        }
        
    }
    
    return 0;
}
