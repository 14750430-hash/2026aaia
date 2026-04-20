//week09-3 好玩得程式設計(氣球會變大)
//修改自week09-2 好玩得程式設計 (互動氣球)
PImage img; // 宣告變數(圖)
void setup(){ // 設定的函式(做1次)
  size(600, 500); // 設定視窗大小
  img = loadImage("balloon.png"); //讀入圖片
} //要在手動把圖檔拉進程式裡
float x, y, s = 0.1; //一開始的氣球比較小
void draw(){ // 畫圖的函式
  background(#FFFFF2); // 畫背景:淡黃色
  ///image(img, mouseX-96/2, mouseY-132, 96, 132); 
  if (mousePressed){ //如果mouse壓下去
    s = s*1.02; //氣球會變大
  image(img, mouseX-96/2*s, mouseY-132*s, 96*s, 132*s); //放開mouse時氣球就變小了
  } // 座標, 有稍微修改, 讓手拿氣球下面綁的地方
}
