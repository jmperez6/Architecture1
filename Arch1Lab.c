#include <stdio.h>

main(){
  Exercise1_10();
  Exercise1_11();
  Exercise1_15();
  Exercise1_20();
  Exercise1_X(50.00);
  


}




Exercise1_10(){
  int c;

  while((c=getchar()) != EOF){
    if(c == '\t'){
      putchar('\t');
    }
    else if(c == '\b'){
      putchar('\b');
    }
    else if(c == '\\'){
      putchar('\\');
    }
    else{
      putchar(c);
    }
  }

}

Exercise1_11(){
  printf("You would printf the result of the word count program with a word you know and check the output.")


}

Exercise1_15(){
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower;
  while (fahr <= upper) {
    celsius = ConvertToCelsius(fahr);
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;
  }
}

ConvertToCelsius(int fahr){
  return 5 * (fahr-32) / 9;
}


Exercise1_20(){
  int c;

  while((c=getchar()) != EOF){
    if(c == '\t'){
      for(int i = 0; i<4; i++){ /* Assuming a tab is equal to 4 spaces*/
	putchar(' ')
      }
    }
    else{
      putchar(c)
    }
  }
}


Exercise1_X(double C){
  for(double i = C/5; i<C; i+=i){
    R = (i + 273.15) * 9/5;
    printf("%lf", i);
    printf(" Celsius to Rankine is: %lf", R);
  }
}
