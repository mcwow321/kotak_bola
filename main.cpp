#include <raylib.h>
int main(){
    const float W_H = 400;
    const float W_W = 800;
    InitWindow(W_W, W_H, "Hello World");
    float kotak_w = 100;
    float kotak_h = 100;
    float l_k_w = W_W / 2 - kotak_w / 2; // l = lokasi, k = kotak, w = width // ini x
    float l_k_h = W_H / 2 - kotak_h / 2;// l = lokasi, k = kotak, w = height. ini y
    
    float bola_w = 100;
    float bola_h = 100;
    float l_b_w = W_W / 2 - bola_w / 2; // l = lokasi, k = kotak, w = width // ini x
    float l_b_h = W_H / 2 - bola_h / 2;// l = lokasi, k = kotak, w = height. ini y
    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(WHITE);
        DrawRectangle(l_k_w, l_k_h, kotak_w, kotak_h, BLACK);
        DrawCircle(l_b_w, l_b_h, 20, RED);
        if(IsKeyDown(KEY_W)){
            l_k_h -= 0.1;
        }
        if(IsKeyDown(KEY_S)){
            l_k_h += 0.1;
        }
        if(IsKeyDown(KEY_A)){
            l_k_w -= 0.1;
        }
        if(IsKeyDown(KEY_D)){
            l_k_w += 0.1;
        }
        if (IsKeyDown(KEY_UP))
        {
            l_b_h -= 0.1;
        }
        if (IsKeyDown(KEY_DOWN))
        {
            l_b_h += 0.1;
        }
        if (IsKeyDown(KEY_LEFT))
        {
            l_b_w -= 0.1;
        }
        if (IsKeyDown(KEY_RIGHT))
        {
            l_b_w += 0.1;
        }
        EndDrawing();
    }
    CloseWindow();
}