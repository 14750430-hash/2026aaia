//week11-1 好玩得程式設計 打死地鼠
//week10-2 好玩得程式設計 地鼠會冒出來
void setup(){
  size(300, 300); // 視窗大小
}
int [][] a = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} }; // 2D陣列(Java)
void mousePressed(){ // mouse按下去時, 檢查有沒有地鼠在這一格
  int i = mouseY / 100, j = mouseX / 100; //左手i對應Y, 右手j對應X
  if (a[i][j] > 0) { // 地鼠的頭, 還在地面上
    a[i][j] = -120; // 負的代表死掉了
  }
}
void draw(){
  background(#67EA5C); // 綠色背景
  if (frameCount%60==0){
    int i = int(random(3)), j = int(random(3)); // 亂數挑i, j
    a[i][j] = 60;
  }
  for (int i=0; i<3; i++){ // 右手j 對應 x座標
    for (int j=0; j<3; j++){ // 右手j 對應 x座標
      int x = j*100 + 50, y = i*100 + 50; // 算出座標
      if (a[i][j] < 0) { // 被打死的可憐小地鼠
        fill(255, 0, 0); // 紅色的血
        a[i][j]++; // 數字從-120變大, 最後會變成0就是死掉
      }else if (a[i][j] > 0){
        fill(#715931, a[i][j]*4); // 會變色、半透明的地鼠
        a[i][j]--; // 數字再變小
      } else fill(#67EA5C); //綠色的洞
      ellipse(x, y, 80, 80); // 地鼠的洞
    }
  }
}
