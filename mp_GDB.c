#include <conio.h>
#include <graphics.h>
#include <stdio.h>

void drawGrass(){
setcolor(2);
line(630,500,630,420);
line(630,500,615,420);
line(630,500,645,420);

line(580,500,580,420);
line(580,500,565,420);
line(580,500,595,420);

line(530,500,530,420);
line(530,500,515,420);
line(530,500,545,420);

line(480,500,480,420);
line(480,500,465,420);
line(480,500,495,420);

line(430,500,430,420);
line(430,500,445,420);
line(430,500,415,420);

line(380,500,380,420);
line(380,500,395,420);
line(380,500,365,420);

line(330,500,330,420);
line(330,500,345,420);
line(330,500,315,420);

line(280,500,280,420);
line(280,500,295,420);
line(280,500,265,420);

line(230,500,230,420);
line(230,500,245,420);
line(230,500,215,420);

line(180,500,180,420);
line(180,500,195,420);
line(180,500,165,420);

line(130,500,130,420);
line(130,500,145,420);
line(130,500,115,420);

line(80,500,80,420);
line(80,500,95,420);
line(80,500,65,420);

line(30,500,30,420);
line(30,500,45,420);
line(30,500,15,420);   
setcolor(15);
}
  
createScene(){
     // Set the Background Color to blue
    setfillstyle(SOLID_FILL, CYAN);
    floodfill(100, 100, 15);

    // Set Circle Balloon Color
    // With Red
    setfillstyle(SOLID_FILL, RED);

    // Creating Balloon
    circle(475, 180, 90);
    floodfill(452, 102, 15);

  //Balloon Text
  settextstyle(7, 0, 1);
   outtextxy(395, 178, "Merry Christmas");
    // Set The Rope Color
    // With White
    setfillstyle(SOLID_FILL, WHITE);

    // Right Side Right Rope
    line(562, 200, 520, 400);

    // Right Side Left Rope
    line(562, 200, 510, 400);

    // Connect the two right side ropes
    // for coloring purpose
    line(510, 400, 520, 400);
    floodfill(515, 398, 15);

    // Left side left rope
    line(387, 200, 430, 400);

    // Left side right rope

    line(387, 200, 440, 400);

    // Connect the two left side ropes
    // for coloring purpose
    line(430, 400, 440, 400);
    floodfill(435, 398, 15);

    // Set Container One Part
    // With Brown
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(420, 400, 530, 500);
    floodfill(452, 402, 15);

    // Set Container Another
    // Part With Yellow
    //setfillstyle(XHATCH_FILL, YELLOW);

    // Dividing Container For
    // Decorating Purpose
    line(420, 430, 530, 430);
    floodfill(452, 498, 15);

 //GRASS
drawGrass();

//Grass end
}

//Checks Input

checkInput(int count){
    char c;

   while(1){
	if(kbhit()){
	    c = getch();
	    if(!count){
	    outtextxy(100, 100, "Press U to go up");
	    if(c == 'u' || c=='U')
	    {

		return 0;
	       // more code here..
	    }
	    }

	    else  if(count){
		// outtextxy(100, 100, "Press L to go left");

	    if(c == 'l' || c=='L')
	    {

	   cleardevice();
		return 1;
	       // more code here..
	    }
	    }

	    else{
		  outtextxy(100, 100, "Press U to go up");
	    }
	}
    }
}



//Move hot air jhoola up
int moveUp(int count){
    int i;
    for( i=1; i<=80; i++){

     //bg color
   // setfillstyle(SOLID_FILL, BLUE);
    //floodfill(100, 100, 15);

    // Set Circle Balloon Color
    // With Red
    setfillstyle(SOLID_FILL, RED);

    // Creating Balloon
    circle(475, 180-i, 90);
    floodfill(452, 102-i, 15);

  //Balloon Text
  settextstyle(7, 0, 1);
   outtextxy(395, 178-i, "Merry Christmas");
    // Set The Rope Color
    // With White
    setfillstyle(SOLID_FILL, WHITE);

    // Right Side Right Rope
    line(562, 200-i, 520, 400-i);

    // Right Side Left Rope
    line(562, 200-i, 510, 400-i);

    // Connect the two right side ropes
    // for coloring purpose
    line(510, 400-i, 520, 400-i);
    floodfill(515, 398-i, 15);

    // Left side left rope
    line(387, 200-i, 430, 400-i);

    // Left side right rope

    line(387, 200-i, 440, 400-i);

    // Connect the two left side ropes
    // for coloring purpose
    line(430, 400-i, 440, 400-i);
    floodfill(435, 398-i, 15);

    // Set Container One Part
    // With Brown
   // setfillstyle(XHATCH_FILL, YELLOW);
    rectangle(420, 400-i, 530, 500-i);
    setfillstyle(SOLID_FILL, BROWN);
    floodfill(452, 402-i, 15);

    // Set Container Another
    // Part With Yellow


    setfillstyle(SOLID_FILL, BROWN);
    // Dividing Container For
    // Decorating Purpose
    line(420, 430-i, 530, 430-i);
    //floodfill(452, 498-i, 15-i);

   //grass
drawGrass();

    if(i<79){
	cleardevice();
    }
     delay(10);
     count++;
}
return count;
}


moveLeft(int count){
    int i;

    // Set the Background Color to blue
    //setfillstyle(SOLID_FILL, BLUE);
   // floodfill(100, 100, 15);
    for(i=1; i<=400; i++){
	//bg color
    //  setfillstyle(SOLID_FILL, BLUE);
   // floodfill(100, 100, 15);

    // Set Circle Balloon Color
    // With Red
    setfillstyle(SOLID_FILL, RED);

    // Creating Balloon
    circle(475-i, 180-count, 90);
    floodfill(452-i, 102-count, 15);

  //Balloon Text
  settextstyle(7, 0, 1);
   outtextxy(395-i, 178-count, "Merry Christmas");
    // Set The Rope Color
    // With White
    setfillstyle(SOLID_FILL, WHITE);

    // Right Side Right Rope
    line(562-i, 200-count, 520-i, 400-count);

    // Right Side Left Rope
    line(562-i, 200-count, 510-i, 400-count);

    // Connect the two right side ropes
    // for coloring purpose
    line(510-i, 400-count, 520-i, 400-count);
    floodfill(515-i, 398-count, 15);

    // Left side left rope
    line(387-i, 200-count, 430-i, 400-count);

    // Left side right rope

    line(387-i, 200-count, 440-i, 400-count);

    // Connect the two left side ropes
    // for coloring purpose
    line(430-i, 400-count, 440-i, 400-count);
    floodfill(435-i, 398-count, 15);

    // Set Container One Part
    // With Brown
    setfillstyle(SOLID_FILL, BROWN);
    rectangle(420-i, 400-count, 530-i, 500-count);
    floodfill(452-i, 402-count, 15);

    // Set Container Another
    // Part With Yellow
   // setfillstyle(XHATCH_FILL, YELLOW);

    // Dividing Container For
    // Decorating Purpose
    line(420-i, 430-count, 530-i, 430-count);
    floodfill(452-i, 498-count, 15);

       //grass
      drawGrass();

    delay(10);
    if(i<399){
    cleardevice();
    }
    }

}

// Driver Code
void main()
{
    int key, count=0;
    int gd = DETECT, gm;

    // Initialize of gdriver with
    // DETECT macros
    initgraph(&gd, &gm, "C:\\turboc3\\bgi");

  createScene();
    setcolor(15);
  outtextxy(100, 100, "Press U to go up");
  key=  checkInput(count);
  if(key==0){
    count =  moveUp(count);
  }

  outtextxy(100, 100, "Press L to go left");
  key=checkInput(count);
  if(key==1){
 moveLeft(count);
  }

    // Hold the screen
     settextstyle(10,0,5);
    outtextxy(200,200,"Thank You!");
    settextstyle(7,0,1);
     outtextxy(200, 300, "Made By Siddhesh and Kush");
    getch();

    // Close the initialized gdriver
    closegraph();
}