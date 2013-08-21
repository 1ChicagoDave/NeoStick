
#include <Adafruit_NeoPixel.h>



#define PIN 5  // Pin NeoWheel is on
Adafruit_NeoPixel strip = Adafruit_NeoPixel(16, PIN, NEO_GRB + NEO_KHZ800);

int B;

int zone1[2] = {
  0,1};
int zone2[2] = {
  2,3};
int zone3[2] = {
  4,5};
int zone4[2] = {
  6,7};

uint32_t RED = (strip.Color(B,0,0));
uint32_t BLUE = (strip.Color(0,0,B));
uint32_t quarter;

const int topRightA[2] = {
  1, 0};
const int bottomRightA[2]={
  3,2};
const int bottomLeftA[2]={
  4,5};
const int topLeftA[2]={
  6,7};

const int topRightB[2] = {
  0,1};
const int bottomRightB[2]={
  2,3};
const int bottomLeftB[2]={
  5,4};
const int topLeftB[2]={
  7,6};



void setup(void) 
{
  randomSeed(analogRead(0));
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'
}

void loop()
{

  // setQuarter();
  WipeOne(random(40));
  WipeOne(random(40));
  WipeOne(random(40));
  WipeOne(random(40));
  WipeOne(random(10));
  WipeOne(random(10));
  WipeOne(random(40));
  WipeOne(random(50));
  WipeOne(random(80));
  WipeOne(random(80));


  spinUpRed(zone1);
  spinDownRed(zone2);

  spinUpBlue(zone1);
  spinDownBlue(zone2);

  spinDownRed(zone4);
  spinDownRed(zone3);

  spinDownBlue(zone4);
  spinDownBlue(zone3);


  spinUpBlue(zone1);
  spinDownBlue(zone1);
  spinUpBlue(zone3);
  spinDownBlue(zone3);

  spinUpRed(zone2);
  spinDownRed(zone2);
  spinUpRed(zone4);
  spinDownRed(zone4);

  spinDownBlue(zone1);
  spinDownBlue(zone4);




  spinUpRed(zone1);
  spinDownRed(zone1);
  spinUpRed(zone1);
  spinDownRed(zone1); 
  spinUpRed(zone1);
  spinDownRed(zone1);

  spinUpRed(zone3);
  spinDownRed(zone3);
  spinUpBlue(zone2);
  spinDownBlue(zone2); 

  spinUpBlue(zone4);
  spinDownBlue(zone4);  
  spinUpBlue(zone4);
  spinDownBlue(zone4);  
  spinUpBlue(zone4);
  spinDownBlue(zone4);  

  spinUpBlue(zone2);
  spinDownBlue(zone2); 
  spinUpRed(zone3);
  spinDownRed(zone3);



  spinUpRed(zone3);
  spinUpRed(zone1);
  spinDownRed(zone3);

  spinDownBlue(zone3);
  spinDownBlue(zone1);
  spinDownBlue(zone3);

  spinUpBlue(zone2);  
  spinUpBlue(zone4);  
  spinDownBlue(zone2);

  spinDownRed(zone4);
  spinDownRed(zone2);
  spinDownRed(zone4);



  spinDownRed(zone1);
  spinDownBlue(zone2);

  spinDownRed(zone1);
  spinDownBlue(zone2);

  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone2);

  spinDownBlue(zone2);
  spinDownRed(zone3);
  spinDownBlue(zone2);
  spinDownBlue(zone4);

  spinDownBlue(zone4);  
  spinDownRed(zone3);  
  spinDownBlue(zone4);
  spinDownBlue(zone2);

  spinUpRed(zone3);
  spinUpRed(zone1);
  spinDownRed(zone3);

  spinDownBlue(zone3);
  spinDownBlue(zone1);
  spinDownBlue(zone3);

  spinUpBlue(zone2);  
  spinUpBlue(zone4);  
  spinDownBlue(zone2);

  spinDownRed(zone4);
  spinDownRed(zone2);
  spinDownRed(zone4);



  spinDownRed(zone1);
  spinDownBlue(zone2);

  spinDownRed(zone1);
  spinDownBlue(zone2);

  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone2);

  spinDownBlue(zone2);
  spinDownRed(zone3);
  spinDownBlue(zone2);
  spinDownBlue(zone4);

  spinDownBlue(zone4);  
  spinDownRed(zone3);  
  spinDownBlue(zone4);
  spinDownBlue(zone2);






  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone4);  
  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone4);

  spinDownRed(zone1);
  spinDownBlue(zone2);
  spinDownRed(zone1);
  spinDownBlue(zone2);   
  spinDownRed(zone1);
  spinDownBlue(zone2);
  spinDownRed(zone1);
  spinDownBlue(zone2);
  spinDownRed(zone1);
  spinDownBlue(zone2);
  spinDownRed(zone1);
  spinDownBlue(zone2);

  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone4);
  spinDownRed(zone3);
  spinDownBlue(zone4);

  spinDownRed(zone1);
  spinDownBlue(zone2);
  spinDownRed(zone1);
  spinDownBlue(zone2);
  spinDownRed(zone1);
  spinDownBlue(zone2);
  spinDownRed(zone1);
  spinDownBlue(zone2);

  randomBlue(zone1);
  randomBlue(zone2);
  randomBlue(zone1);
  randomBlue(zone2);
  randomBlue(zone1);
  randomBlue(zone2);

  randomRed(zone4);
  randomRed(zone3);
  randomRed(zone4);
  randomRed(zone3);
  randomRed(zone4);
  randomRed(zone3);




  spinUpBlue(zone1);
  spinUpBlue(zone2);
  spinUpBlue(zone3);
  spinUpBlue(zone4);
  spinDownRed(zone4);
  spinDownRed(zone3);
  spinDownRed(zone2);
  spinDownRed(zone1);

  spinUpRed(zone4);
  spinUpRed(zone3);
  spinUpRed(zone2);
  spinUpRed(zone1);
  spinDownBlue(zone1);
  spinDownBlue(zone2);
  spinDownBlue(zone3);
  spinDownBlue(zone4);    

  spinUpBlue(zone1);
  spinUpBlue(zone2);
  spinUpBlue(zone3);
  spinUpBlue(zone4);
  spinDownRed(zone4);
  spinDownRed(zone3);
  spinDownRed(zone2);
  spinDownRed(zone1);

  spinUpRed(zone4);
  spinUpRed(zone3);
  spinUpRed(zone2);
  spinUpRed(zone1);
  spinDownBlue(zone1);
  spinDownBlue(zone2);
  spinDownBlue(zone3);
  spinDownBlue(zone4); 

  spinUpBlue(zone1);
  spinUpBlue(zone2);
  spinUpBlue(zone3);
  spinUpBlue(zone4);
  spinDownRed(zone4);
  spinDownRed(zone3);
  spinDownRed(zone2);
  spinDownRed(zone1);

  spinUpRed(zone4);
  spinUpRed(zone3);
  spinUpRed(zone2);
  spinUpRed(zone1);
  spinDownBlue(zone1);
  spinDownBlue(zone2);
  spinDownBlue(zone3);
  spinDownBlue(zone4);    



  /* 
   setQuarter();
   clearAll();
   blueWipeLeft(random(15));
   setQuarter();
   
   clearAll();
   blueWipeLeft(random(15));
   setQuarter();
   clearAll();
   redWipeRight(random(15));
   setQuarter();
   clearAll();
   blueWipeLeft(random(15));
   setQuarter();
   clearAll();
   redWipeRight(random(25));
   setQuarter();
   clearAll();
   blueWipeLeft(random(10));
   setQuarter();
   clearAll();
   redWipeRight(1);
   
   setQuarter();
   clearAll();
   redWipeLeft(random(15));
   setQuarter();
   clearAll();
   redWipeLeft(random(10));
   setQuarter();
   clearAll();
   blueWipeRight(random(15));
   setQuarter();
   clearAll();
   redWipeLeft(5);
   setQuarter();
   clearAll();
   blueWipeRight(random(20));
   setQuarter();
   clearAll();
   redWipeLeft(random(25));
   setQuarter();
   clearAll();
   blueWipeRight(random(15));
   */
}

/*
void setQuarter()
 {
 
 switch (random(1,4))
 {
 case 1:
 quarter = topRight[i];
 break;
 
 case 2:
 quarter = bottomRight[i];
 break;
 
 case 3:
 quarter = bottomLeft[i];
 break;
 
 case 4:
 quarter = topLeft[i];
 break;
 }  //end switch case 
 }  // end setQuarter
 
 */
void clearAll()
{
  colorWipe(strip.Color(0, 0, 0), 0); //set All Blue
  strip.show();
}


void randomRed(int zone[])
{
  strip.setPixelColor(zone[1], strip.Color(0,0,0));
  strip.setPixelColor(zone[0], strip.Color(0,0,0));
  strip.show();
  delay(10) 
    ;
  strip.setPixelColor(zone[0], strip.Color(random(100),0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[1], strip.Color(random(255),0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(random(255),0,0));
  strip.show();
  delay(10) ;
}    // end void spinUpRed()

void randomBlue(int zone[])
{
  strip.setPixelColor(zone[1], strip.Color(0,0,0));
  strip.setPixelColor(zone[0], strip.Color(0,0,0));
  strip.show();
  delay(10) 
    ;
  strip.setPixelColor(zone[0], strip.Color(0,0,random(100)));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[1], strip.Color(0,0,random(255)));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(0,0,random(255)));
  strip.show();
  delay(10) ;
}    // end void spinUpRed()



void spinUpRed(int zone[])
{
  strip.setPixelColor(zone[1], strip.Color(0,0,0));
  strip.setPixelColor(zone[0], strip.Color(0,0,0));
  strip.show();
  delay(10) 
    ;
  strip.setPixelColor(zone[0], strip.Color(100,0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[1], strip.Color(255,0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(255,0,0));
  strip.show();
  delay(10) ;
}    // end void spinUpRed()


void spinUpBlue(int zone[])
{
  strip.setPixelColor(zone[1], strip.Color(0,0,0));
  strip.setPixelColor(zone[0], strip.Color(0,0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(0,0,100));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[1], strip.Color(0,0,255));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(0,0,255));
  strip.show();
  delay(10) ;
}    // end void spinUpRed()


void spinDownRed(int zone[])
{
  strip.setPixelColor(zone[0], strip.Color(255,0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[1], strip.Color(110,0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(110,0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[1], strip.Color(0,0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(0,0,0));
  strip.show();
  delay(10) ;

}    // end void spinDownRed()


void spinDownBlue(int zone[])
{
  strip.setPixelColor(zone[0], strip.Color(0,0,255));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[1], strip.Color(0,0,110));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(0,0,110));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[1], strip.Color(0,0,0));
  strip.show();
  delay(10) ;
  strip.setPixelColor(zone[0], strip.Color(0,0,0));
  strip.show();
  delay(10) ;

}    // end void spinDownRed()

void WipeOne(uint8_t wait) 
{
  for(uint16_t i=0; i<2; i++) 
  {
    strip.setPixelColor(topRightA[i], strip.Color(random(255),0,0));
    strip.setPixelColor(topLeftA[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(bottomLeftA[i], strip.Color(random(255),0,0));
    strip.setPixelColor(bottomRightA[i], strip.Color(0,0,random(255)));    
    strip.show();
    delay(wait);
  }

  //   colorWipe(strip.Color(0, 0, 0), 0); //set All clear
  strip.show();
  delay(wait);

  for(uint16_t i=0; i<2; i++) 
  {
    strip.setPixelColor(topRightA[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(topLeftA[i],  strip.Color(random(255),0,0));
    strip.setPixelColor(bottomLeftA[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(bottomRightA[i],  strip.Color(random(255),0,0));    
    strip.show();
    delay(wait);
  }
  colorWipe(strip.Color(0, 0, 0), 0); //set All clear
  strip.show();
  delay(wait);

  for(uint16_t i=0; i<2; i++) 
  {
    strip.setPixelColor(topRightA[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(topLeftA[i],  strip.Color(random(255),0,0));
    strip.setPixelColor(bottomLeftA[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(bottomRightA[i],  strip.Color(random(255),0,0));    
    strip.show();
    delay(wait);
  }


  for(uint16_t i=0; i<2; i++) 
  {
    strip.setPixelColor(topRightB[i], strip.Color(random(255),0,0));
    strip.setPixelColor(topLeftB[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(bottomLeftB[i], strip.Color(random(255),0,0));
    strip.setPixelColor(bottomRightB[i], strip.Color(0,0,random(255)));    
    strip.show();
    delay(wait);
  }

  //   colorWipe(strip.Color(0, 0, 0), 0); //set All clear
  strip.show();
  delay(wait);

  for(uint16_t i=0; i<2; i++) 
  {
    strip.setPixelColor(topRightB[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(topLeftB[i],  strip.Color(random(255),0,0));
    strip.setPixelColor(bottomLeftB[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(bottomRightB[i],  strip.Color(random(255),0,0));    
    strip.show();
    delay(wait);
  }
  colorWipe(strip.Color(0, 0, 0), 0); //set All clear
  strip.show();
  delay(wait);

  for(uint16_t i=0; i<2; i++) 
  {
    strip.setPixelColor(topRightB[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(topLeftB[i],  strip.Color(random(255),0,0));
    strip.setPixelColor(bottomLeftB[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(bottomRightB[i],  strip.Color(random(255),0,0));    
    strip.show();
    delay(wait);
  }





  //  colorWipe(strip.Color(0, 0, 0), 0); //set All Blue
  strip.show();
  delay(wait);

  for(uint16_t i=0; i<2; i++) 
  {
    strip.setPixelColor(topLeftA[i], strip.Color(random(255),0,0));
    strip.setPixelColor(topRightA[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(bottomLeftA[i], strip.Color(random(255),0,0));
    strip.setPixelColor(bottomRightA[i], strip.Color(0,0,random(255)));    
    strip.show();
    delay(wait);
  }


  colorWipe(strip.Color(0, 0, 0), 0); //set All Blue
  strip.show();
  delay(wait);

  for(uint16_t i=0; i<2; i++) 
  {
    strip.setPixelColor(topLeftA[i], strip.Color(random(255),0,0));
    strip.setPixelColor(topRightA[i], strip.Color(0,0,random(255)));
    strip.setPixelColor(bottomRightA[i], strip.Color(random(255),0,0));
    strip.setPixelColor(bottomLeftA[i], strip.Color(0,0,random(255)));    
    strip.show();
    delay(wait);
  }
}


/*
void fadeDown(uint32_t c, uint8_t wait)
 {
 for (B=255; B>0; B--)
 {
 for(i<4; i<0; i++) 
 {
 strip.setPixelColor(quarter, c);
 strip.show();
 delay(wait);
 }
 }
 
 }
 
 void fadeDownLeft(uint32_t c, uint8_t wait)
 {
 for (B=255; B>0; B--)
 {
 for( i=8; i<16; i++) 
 {
 strip.setPixelColor(i, c);
 strip.show();
 delay(wait);
 }
 }
 }
 
 void fadeUpRight(uint32_t c, uint8_t wait)
 {
 for (B=0; B<255; B++)
 {
 for( i=0; i<8; i++) 
 {
 strip.setPixelColor(i, c);
 strip.show();
 delay(wait);
 }
 }
 }
 
 void fadeUpLeft(uint32_t c, uint8_t wait)
 {
 for (B=0; B<255; B++)
 {
 for( i=8; i<16; i++) 
 {
 strip.setPixelColor(i, c);
 strip.show();
 delay(wait);
 }
 }
 }
 
 void blueWipeRight( uint8_t wait) 
 {
 for( i<4; i=0; i--) 
 {
 strip.setPixelColor(quarter, 0,0,random(255));
 strip.show();
 delay(wait);
 }
 }
 
 void redWipeLeft( uint8_t wait) 
 {
 for( i<4; i=0; i--) 
 {
 strip.setPixelColor(quarter, random(255),0,0);
 strip.show();
 delay(wait);
 }
 }
 
 void blueWipeLeft( uint8_t wait) 
 {
 for( i<4; i=0; i--) 
 {
 strip.setPixelColor(quarter, 0,0,random(255));
 strip.show();
 delay(wait);
 }
 }
 
 void redWipeRight( uint8_t wait) 
 {
 for( i<4; i=0; i--) 
 {
 strip.setPixelColor(quarter, random(255),0,0);
 strip.show();
 delay(wait);
 }
 }
 */

void colorWipe(uint32_t c, uint8_t wait) {
  for( uint16_t i=0; i<strip.numPixels(); i++) {
    strip.setPixelColor(i, c);
    strip.show();
    delay(wait);
  }
}






