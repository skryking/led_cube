
int c1 = 2;
int c2 = 3;
int c3 = 4;
int c4 = 5;
int c5 = 6;
int c6 = 7;
int c7 = 8;
int c8 = 9;
int c9 = 10;
int r1 = 11;
int r2 = 12;
int r3 = 13;
float w = .5;
int t = 2;

void setup() {
  for(int x = 2; x <= 13; x++){
    pinMode(x, OUTPUT);
  }

}


void loop() {
  single_run_1_27(100 * w, 1 * t);
  vertical_run_1_27(100 * w, 1 * t);
  rows_horizontal(50 * w, 1 * t);
  rows_horizontal_2(50 * w, 1 * t);
  layers_vertical(25 * w, 2 * t);
  layers_horizontal(25 * w, 2 * t);
}



//Turn on an LED
void turnon(int c, int r){
  digitalWrite(c, HIGH);
  if(r == r1){
    digitalWrite(r1, LOW);
    digitalWrite(r2, HIGH);
    digitalWrite(r3, HIGH);
  }
  if(r == r2){
    digitalWrite(r1, HIGH);
    digitalWrite(r2, LOW);
    digitalWrite(r3, HIGH);
  }
  if(r == r3){
    digitalWrite(r1, HIGH);
    digitalWrite(r2, HIGH);
    digitalWrite(r3, LOW);
  }
}


//Turn off all LED's
void turnoff(){
  digitalWrite(c1, LOW);
  digitalWrite(c2, LOW);
  digitalWrite(c3, LOW);
  digitalWrite(c4, LOW);
  digitalWrite(c5, LOW);
  digitalWrite(c6, LOW);
  digitalWrite(c7, LOW);
  digitalWrite(c8, LOW);
  digitalWrite(c9, LOW);
  digitalWrite(r1, LOW);
  digitalWrite(r2, LOW);
  digitalWrite(r3, LOW);
}

// flash led on and then off
void flash(int c, int r, int d){
  turnon(c, r);
  delay(d);
  turnoff(); 
}

//Patterns
//Single run 1-27
void single_run_1_27(int s, int c){
  for(int i = 0; i < c; i++){
    //row1
    flash(c1, r1, s);
    flash(c2, r1, s);
    flash(c3, r1, s);
    flash(c4, r1, s);
    flash(c5, r1, s);
    flash(c6, r1, s);
    flash(c7, r1, s);
    flash(c8, r1, s);
    flash(c9, r1, s);

    //row2
    flash(c1, r2, s);
    flash(c2, r2, s);
    flash(c3, r2, s);
    flash(c4, r2, s);
    flash(c5, r2, s);
    flash(c6, r2, s);
    flash(c7, r2, s);
    flash(c8, r2, s);
    flash(c9, r2, s);

    //row3
    flash(c1, r3, s);
    flash(c2, r3, s);
    flash(c3, r3, s);
    flash(c4, r3, s);
    flash(c5, r3, s);
    flash(c6, r3, s);
    flash(c7, r3, s);
    flash(c8, r3, s);
    flash(c9, r3, s);
  }
}

//vertical run 1-27
void vertical_run_1_27(int s, int c){
  for(int i = 0; i < c; i++){
    //col1
    flash(c1, r1, s);
    flash(c1, r2, s);
    flash(c1, r3, s);

    //col2
    flash(c2, r1, s);
    flash(c2, r2, s);
    flash(c2, r3, s);

    //col3
    flash(c3, r1, s);
    flash(c3, r2, s);
    flash(c3, r3, s);

    //col4
    flash(c4, r1, s);
    flash(c4, r2, s);
    flash(c4, r3, s);

    //col5
    flash(c5, r1, s);
    flash(c5, r2, s);
    flash(c5, r3, s);

    //col6
    flash(c6, r1, s);
    flash(c6, r2, s);
    flash(c6, r3, s);

    //col7
    flash(c7, r1, s);
    flash(c7, r2, s);
    flash(c7, r3, s);

    //col8
    flash(c8, r1, s);
    flash(c8, r2, s);
    flash(c8, r3, s);

    //col9
    flash(c9, r1, s);
    flash(c9, r2, s);
    flash(c9, r3, s);
  }
}

//horizontal rows
void rows_horizontal(int s, int c){
  for(int x = 0; x < c; x++){
    //first row 
    for (int i = 0; i < s; i++){
      flash(c1, r1, 1);
      flash(c2, r1, 1);
      flash(c3, r1, 1);
    }

    //second row 
    for (int i = 0; i < s; i++){
      flash(c4, r1, 1);
      flash(c5, r1, 1);
      flash(c6, r1, 1);
    }

    //third row 
    for (int i = 0; i < s; i++){ 
      flash(c7, r1, 1);
      flash(c8, r1, 1);
      flash(c9, r1, 1);
    }

    //fourth row 
    for (int i = 0; i < s; i++){
      flash(c1, r2, 1);
      flash(c2, r2, 1);
      flash(c3, r2, 1);
    }

    //fifth row 
    for (int i = 0; i < s; i++){
      flash(c4, r2, 1);
      flash(c5, r2, 1);
      flash(c6, r2, 1);
    }

    //sixth row 
    for (int i = 0; i < s; i++){ 
      flash(c7, r2, 1);
      flash(c8, r2, 1);
      flash(c9, r2, 1);
    }

    //seventh row 
    for (int i = 0; i < s; i++){
      flash(c1, r3, 1);
      flash(c2, r3, 1);
      flash(c3, r3, 1);
    }

    //eighth row
    for (int i = 0; i < s; i++){ 
      flash(c4, r3, 1);
      flash(c5, r3, 1);
      flash(c6, r3, 1);
    }

    //nineth row
    for (int i = 0; i < s; i++){ 
      flash(c7, r3, 1);
      flash(c8, r3, 1);
      flash(c9, r3, 1);
    }

    //eighth row
    for (int i = 0; i < s; i++){ 
      flash(c4, r3, 1);
      flash(c5, r3, 1);
      flash(c6, r3, 1);
    }

    //seventh row 
    for (int i = 0; i < s; i++){
      flash(c1, r3, 1);
      flash(c2, r3, 1);
      flash(c3, r3, 1);
    }

    //sixth row 
    for (int i = 0; i < s; i++){ 
      flash(c7, r2, 1);
      flash(c8, r2, 1);
      flash(c9, r2, 1);
    }

    //fifth row 
    for (int i = 0; i < s; i++){
      flash(c4, r2, 1);
      flash(c5, r2, 1);
      flash(c6, r2, 1);
    }

    //fourth row 
    for (int i = 0; i < s; i++){
      flash(c1, r2, 1);
      flash(c2, r2, 1);
      flash(c3, r2, 1);
    }

    //third row 
    for (int i = 0; i < s; i++){ 
      flash(c7, r1, 1);
      flash(c8, r1, 1);
      flash(c9, r1, 1);
    }

    //second row 
    for (int i = 0; i < s; i++){
      flash(c4, r1, 1);
      flash(c5, r1, 1);
      flash(c6, r1, 1);
    }

    //first row 
    for (int i = 0; i < s; i++){
      flash(c1, r1, 1);
      flash(c2, r1, 1);
      flash(c3, r1, 1);
    }
  }
}

//horizontal rows the other way
void rows_horizontal_2(int s, int c){
  for(int x = 0; x < c; x++){
    //first row 
    for (int i = 0; i < s; i++){
      flash(c1, r1, 1);
      flash(c4, r1, 1);
      flash(c7, r1, 1);
    }

    //second row 
    for (int i = 0; i < s; i++){
      flash(c2, r1, 1);
      flash(c5, r1, 1);
      flash(c8, r1, 1);
    }

    //third row 
    for (int i = 0; i < s; i++){ 
      flash(c3, r1, 1);
      flash(c6, r1, 1);
      flash(c9, r1, 1);
    }

    //fourth row 
    for (int i = 0; i < s; i++){
      flash(c1, r2, 1);
      flash(c4, r2, 1);
      flash(c7, r2, 1);
    }

    //fifth row 
    for (int i = 0; i < s; i++){
      flash(c2, r2, 1);
      flash(c5, r2, 1);
      flash(c8, r2, 1);
    }

    //sixth row 
    for (int i = 0; i < s; i++){ 
      flash(c3, r2, 1);
      flash(c6, r2, 1);
      flash(c9, r2, 1);
    }

    //seventh row 
    for (int i = 0; i < s; i++){
      flash(c1, r3, 1);
      flash(c4, r3, 1);
      flash(c7, r3, 1);
    }

    //eighth row
    for (int i = 0; i < s; i++){ 
      flash(c2, r3, 1);
      flash(c5, r3, 1);
      flash(c8, r3, 1);
    }

    //nineth row
    for (int i = 0; i < s; i++){ 
      flash(c3, r3, 1);
      flash(c6, r3, 1);
      flash(c9, r3, 1);
    }

    //eighth row
    for (int i = 0; i < s; i++){ 
      flash(c2, r3, 1);
      flash(c5, r3, 1);
      flash(c8, r3, 1);
    }

    //seventh row 
    for (int i = 0; i < s; i++){
      flash(c1, r3, 1);
      flash(c4, r3, 1);
      flash(c7, r3, 1);
    }

    //sixth row 
    for (int i = 0; i < s; i++){ 
      flash(c3, r2, 1);
      flash(c6, r2, 1);
      flash(c9, r2, 1);
    }

    //fifth row 
    for (int i = 0; i < s; i++){
      flash(c2, r2, 1);
      flash(c5, r2, 1);
      flash(c8, r2, 1);
    }

    //fourth row 
    for (int i = 0; i < s; i++){
      flash(c1, r2, 1);
      flash(c4, r2, 1);
      flash(c7, r2, 1);
    }

    //third row 
    for (int i = 0; i < s; i++){ 
      flash(c3, r1, 1);
      flash(c6, r1, 1);
      flash(c9, r1, 1);
    }

    //second row 
    for (int i = 0; i < s; i++){
      flash(c2, r1, 1);
      flash(c5, r1, 1);
      flash(c8, r1, 1);
    }

    //first row 
    for (int i = 0; i < s; i++){
      flash(c1, r1, 1);
      flash(c4, r1, 1);
      flash(c7, r1, 1);
    }
  }
}

// Layers from bottom to top and then back down
void layers_vertical(int s, int c){
  //layer 1
  for(int i = 0; i < c; i++){
    for(int x = 0; x < s; x++){
      flash(c1, r1, 1);
      flash(c2, r1, 1);
      flash(c3, r1, 1);
      flash(c4, r1, 1);
      flash(c5, r1, 1);
      flash(c6, r1, 1);
      flash(c7, r1, 1);
      flash(c8, r1, 1);
      flash(c9, r1, 1);
    }

    //layer 2
    for(int x = 0; x < s; x++){
      flash(c1, r2, 1);
      flash(c2, r2, 1);
      flash(c3, r2, 1);
      flash(c4, r2, 1);
      flash(c5, r2, 1);
      flash(c6, r2, 1);
      flash(c7, r2, 1);
      flash(c8, r2, 1);
      flash(c9, r2, 1);
    }

    //layer 1
    for(int x = 0; x < s; x++){
      flash(c1, r3, 1);
      flash(c2, r3, 1);
      flash(c3, r3, 1);
      flash(c4, r3, 1);
      flash(c5, r3, 1);
      flash(c6, r3, 1);
      flash(c7, r3, 1);
      flash(c8, r3, 1);
      flash(c9, r3, 1);
    }

    //layer 2
    for(int x = 0; x < s; x++){
      flash(c1, r2, 1);
      flash(c2, r2, 1);
      flash(c3, r2, 1);
      flash(c4, r2, 1);
      flash(c5, r2, 1);
      flash(c6, r2, 1);
      flash(c7, r2, 1);
      flash(c8, r2, 1);
      flash(c9, r2, 1);
    }

    //layer 1
    for(int x = 0; x < s; x++){
      flash(c1, r1, 1);
      flash(c2, r1, 1);
      flash(c3, r1, 1);
      flash(c4, r1, 1);
      flash(c5, r1, 1);
      flash(c6, r1, 1);
      flash(c7, r1, 1);
      flash(c8, r1, 1);
      flash(c9, r1, 1);
    }
  }
}

// Layers from left to right and then back down
void layers_horizontal(int s, int c){
  //layer 1
  for(int i = 0; i < c; i++){
    for(int x = 0; x < s; x++){
      flash(c1, r1, 1);
      flash(c1, r2, 1);
      flash(c1, r3, 1);
      flash(c4, r1, 1);
      flash(c4, r2, 1);
      flash(c4, r3, 1);
      flash(c7, r1, 1);
      flash(c7, r2, 1);
      flash(c7, r3, 1);
    }

    //layer 2
    for(int x = 0; x < s; x++){
      flash(c2, r1, 1);
      flash(c2, r2, 1);
      flash(c2, r3, 1);
      flash(c5, r1, 1);
      flash(c5, r2, 1);
      flash(c5, r3, 1);
      flash(c8, r1, 1);
      flash(c8, r2, 1);
      flash(c8, r3, 1);
    }

    //layer 3
    for(int x = 0; x < s; x++){
      flash(c3, r1, 1);
      flash(c3, r2, 1);
      flash(c3, r3, 1);
      flash(c6, r1, 1);
      flash(c6, r2, 1);
      flash(c6, r3, 1);
      flash(c9, r1, 1);
      flash(c9, r2, 1);
      flash(c9, r3, 1);
    }

    //layer 2
    for(int x = 0; x < s; x++){
      flash(c2, r1, 1);
      flash(c2, r2, 1);
      flash(c2, r3, 1);
      flash(c5, r1, 1);
      flash(c5, r2, 1);
      flash(c5, r3, 1);
      flash(c8, r1, 1);
      flash(c8, r2, 1);
      flash(c8, r3, 1);
    }

    //layer 1
    for(int x = 0; x < s; x++){
      flash(c1, r1, 1);
      flash(c1, r2, 1);
      flash(c1, r3, 1);
      flash(c4, r1, 1);
      flash(c4, r2, 1);
      flash(c4, r3, 1);
      flash(c7, r1, 1);
      flash(c7, r2, 1);
      flash(c7, r3, 1);
    }
  }
}

