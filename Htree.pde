void setup() {
  size(600,900);
  background(255);
  stroke(0);
  noLoop();
}

void draw() {
  drawHtree(200,300,300,10);
}

void drawHtree(int l, int x, int y, int n) {
  if (n == 0) {
    return;
  }
  line(x-l/2,y-l/2,x-l/2,y+l/2);
  line(x+l/2,y-l/2,x+l/2,y+l/2);
  line(x-l/2,y,x+l/2,y);
  drawHtree(l/2,x-l/2,y-l/2,n-1);
  drawHtree(l/2,x-l/2,y+l/2,n-1);
  drawHtree(l/2,x+l/2,y-l/2,n-1);
  drawHtree(l/2,x+l/2,y+l/2,n-1);
}
