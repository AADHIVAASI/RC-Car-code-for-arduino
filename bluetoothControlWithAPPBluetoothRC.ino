// BY Vibheesh Velayudha//
// This code allows you to control any microcontroller based robot having bi directional wheel placement with an android app wirelessely, The bluetooth moduel HC05 having 4 pins. 
// TX(MODULE)-------> RX(UNO)
// RX(MODULE)-------->TX(UNO)
// PIN9(UNO)-------->INA(CONTROLLER)
//PIN6(UNO)--------->INA(CONTROLLER)
//PIN5(UNO)--------->INB(CONTROLLER)
//PIN3(UNO)--------->INB(CONTROLLER)
//5V(BLUETOOTH)----->5V ON UNO
//GND(BLUETOOTH)---->GND ON UNO
//5V(CONTROLLER)---->5V ON UNO
//GND(CONTROLLER)--->GND ON UNO
int m1=9; //INa from motor controller to uno pin 9
int m2=6; // INa from motor controller to uno pin 6
int m3=3; // INb from motor controller to uno pin 3
int m4=5; // INb from motor controller to uno pin 5

int vel=0;
char d;
void setup() {
  pinMode(m1, OUTPUT);
  pinMode(m2, OUTPUT);
  pinMode(m3, OUTPUT);
  pinMode(m4, OUTPUT);
  Serial.begin(9600);

}
void back(){
  analogWrite(m1, vel);
  analogWrite(m2, 0);
analogWrite(m3, vel);
analogWrite(m4, 0);
}

void forward(){
  analogWrite(m1, 0);
  analogWrite(m2, vel);
analogWrite(m3, 0);
analogWrite(m4, vel);
}

void right()
{
analogWrite(m1, vel);
analogWrite(m2, 0);
analogWrite(m3, 0);
analogWrite(m4, vel);
}

void left(){
  analogWrite(m1, 0);
  analogWrite(m2, vel);
  analogWrite(m3, vel);
  analogWrite(m4, 0);
}

void robostop(){
  analogWrite(m1, 0);
  analogWrite(m2, 0);
  analogWrite(m3, 0);
  analogWrite(m4, 0);
}
void backright(){
  analogWrite(m1, vel);
  analogWrite(m2, 0);
  analogWrite(m3, 0);
  analogWrite(m4, 0);
}
void backleft(){
  analogWrite(m1, 0);
  analogWrite(m2, 0);
  analogWrite(m3, vel);
  analogWrite(m4, 0);
}

void loop(){

  if(Serial.available()>0)
  {
    d=Serial.read();
    Serial.println(d);
    {
    if (d=='F')
    {
        
     forward();
     Serial.println("forward");
    }
    if(d=='L')
    {
     
       
      left();
      Serial.println("left");
    }
    if(d=='R')
    {
       
      right();
      Serial.println("right");
     
    }
    if(d=='B')
    {
    back();
    
      Serial.println("Backward");
    }
    if(d=='G')
    {
      
      analogWrite(m1,LOW);
      analogWrite(m2,vel);
      analogWrite(m3,LOW);
      analogWrite(m4,LOW);
      Serial.println("front left");
    }
    if(d=='I')
    {
      
      analogWrite(m1,LOW);
      analogWrite(m2,LOW);
      analogWrite(m3,LOW);
      analogWrite(m4,vel);
    Serial.println("front right");
    }
      
    
    if(d=='S')
    {
      robostop();
    
      Serial.println("stop");
      
    }
  
  if(d=='H')
  {
   
    backleft();
    Serial.println("backleft");
  }
  
  if(d=='J')
  {
    
    
    backright();
    Serial.println("backright");
  }
  
  
    if(d=='W');
   { 

   }
if(d=='w');
{
}

if(d=='U')
{
  
}

  
if(d=='u')
{
}
if (d=='X')
{
}

if (d=='x')
{
}



if(d=='0')
{
vel=0;
}
    


if(d=='1')
{
 vel=51;
}


if (d=='2')
 {
  vel=76.5;
 }
 
 
 if (d=='3')
    { 
      vel=102;
    }
 
 
 if (d=='4')
    {
      vel=127.5;
    }
    
    
 if (d=='5')
    {
      vel=153;
    }
    
    
 if(d=='6')
    {
      vel=178.5;
    }
 
 
 if (d=='7')
    {
      vel=204 ;
    }
    
    
    
 if (d== '8')
    {
      vel=229.5;
    }
 
 
 
 if (d=='9')
    {
      vel=255;
    }
  }
  }

  
}
