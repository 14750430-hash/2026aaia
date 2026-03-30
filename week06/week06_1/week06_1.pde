//week06-1 好玩的程式設計 ....File-Preference 設大字行
//修改自 week05-2 好玩的程式設計 兩層for(迴圈)配合 if...else if...else
void setup(){  
  size(800, 500); //視窗大小 800 x 500
}
int [][] a = new int[10][16]; //Java 的陣列寫法, 跟C/C++不同
void mousePressed(){
  int i = mouseY/50, j = mouseX/50;
  a[i][j] = 1;
}
void draw() {
  for(int i=0; i<10; i++){ // 上週是 for y 現在改成 for i 左手i
    for(int j=0; j<16; j++){ // 上週是 for x 現在改成 for j 右手j
      if (a[i][j]==1 ) fill(#5DFF1F); // 若陣列有值, 設綠色
      else fill(255); // 沒有值, 設白色
      rect( j*50, i*50, 50, 50); // 畫四邊形
    }
  }
  /*很多行的註解 用斜線星
  for(int y=0; y<500; y+=50){ //外面 for 迴圈 y 座標
    for(int x=0; x<800; x+=50){ //裡面 for 迴圈 x 座標
      if (x < mouseX && mouseX < x+50) fill(#5DFF1F);
      else if (y < mouseY && mouseY < y+50) fill(#5DFF1F);
      else fill(255); // 裡面有3行判斷 決定填充色彩
      rect(x, y, 50, 50);
    }
  }收尾的地方, 是星斜線*/
}
