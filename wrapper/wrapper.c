#define NK_IMPLEMENTATION
#define NK_INCLUDE_FIXED_TYPES
#define NK_INCLUDE_DEFAULT_ALLOCATOR
#define NK_INCLUDE_STANDARD_IO
#define NK_INCLUDE_VERTEX_BUFFER_OUTPUT
#define NK_INCLUDE_FONT_BAKING
#define NK_INCLUDE_DEFAULT_FONT

#include "nuklear.h"
#include "wrapper.h"

struct nk_context* nk_create_context(void) {
    struct nk_context *ctx = malloc(sizeof *ctx);
    return ctx;
}

void nk_delete_context(struct nk_context* ctx) {
    free(ctx);
    ctx = NULL;
}

struct nk_user_font* nk_create_user_font(void) {
    struct nk_user_font *ufont = malloc(sizeof *ufont);
    return ufont;
}

void nk_delete_user_font(struct nk_user_font* ufont) {
    free(ufont);
    ufont = NULL;
}
