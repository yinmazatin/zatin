/**********
 * 4x4 keyboard matrix
 * Connect 
 * Row 1 to Arduino pin 2
Row 2 to Arduino pin 3
Row 3 to Arduino pin 4
Row 4 to Arduino pin 5
Column A to Arduino pin 8
Column B to Arduino pin 9
Column C to Arduino pin 10
Column D to Arduino pin 11

Key identification (with connector at the top)
0 1 2 3 
4 5 6 7
8 9 10 11
12  13  14  15
Connector
1   2   3   4   A   B   C   D
Rows link keys from left to right, column link keys from top to botto
 */

 
 int rowCounter = 0;
 int columnCounter = 0;
 int foundColumn = 0;
 boolean foundCol = false;
 int keyValue = 0;
 int noKey = 0;
 boolean readKey = false;
 int debounce = 300;// set this to the lowest value that gives the best result
 const int row1 = 2;
 const int row2 = 3;
 const int row3 = 4;
 const int row4 = 5;
 const int colA = 8;
 const int colB = 9;
 const int colC = 10;
 const int colD = 11;
 const int ledPin = 13;// onboard LED
 
 
void setup() {
  Serial.begin(9600);
  pinMode(row1,OUTPUT);
  pinMode(row2,OUTPUT);
  pinMode(row3,OUTPUT);
  pinMode(row4,OUTPUT);
  pinMode(colA,INPUT_PULLUP);
  pinMode(colB,INPUT_PULLUP);
  pinMode(colC,INPUT_PULLUP);
  pinMode(colD,INPUT_PULLUP);
  pinMode(ledPin,OUTPUT);
  digitalWrite(ledPin,LOW);// turn LED off
}
void loop()
{
 
 
}


