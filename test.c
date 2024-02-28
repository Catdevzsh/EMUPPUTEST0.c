#include <stdio.h>
// Define game variables
const int SCREEN_WIDTH = 256;
const int SCREEN_HEIGHT = 192;
char screen[SCREEN_WIDTH][SCREEN_HEIGHT];
// Set the background color
void setBackgroundColor(int color) {
screen[0][0] = color; // Background color
}
// Draw a sprite
void drawSprite(int x, int y, char sprite) {
screen[x][y] = sprite; // Sprite value
}
// Output the screen contents to the console
void outputScreen() {
for (int i = 0; i < SCREEN_WIDTH; i++) {
for (int j = 0; j < SCREEN_HEIGHT; j++) {
printf("%c", screen[i][j]); // Print each pixel value
}
}
