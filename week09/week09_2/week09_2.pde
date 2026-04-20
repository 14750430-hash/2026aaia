//week09-2 好玩得程式設計(互動氣球)
PImage img; // 宣告變數(圖)
void setup(){ // 設定的函式(做1次)
  size(600, 500); // 設定視窗大小
  img = loadImage("balloon.png"); //讀入圖片
}

void draw(){ // 畫圖的函式
  background(#FFFFF2); // 背景:淡黃色
  image(img, mouseX-96/2, mouseY-132, 96, 132); 
} // 這裡的座標,有稍微改一下, 讓手拿氣球下面綁起來的地方
