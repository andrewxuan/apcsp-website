#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int studentmain(void) {

  //regarding printing
  FILE *f = fopen("output.txt", "w");
  if (f == NULL)
  {
    printf("Error opening file!\n");
    exit(1);
  }

  //print text
  const char *text = "PROGRAM OUTPUT";
  fprintf(f, "%s\n", text);  

  //text filler variables
  const char *a,*b,*c,*d = "";

	int navy = 0;//game mode
	int game = 0;
  //Init and generate PseudoRNG, determines ending
  srand(time(NULL));
  int luck = rand() % 6;//luck from 0-5

  printf("TIP: For best GUI, please expand the console widthwise until this line is one straight line.\n\nWelcome to Commander II. Please select a game mode. \n1-Storymode \n2-Battlemode\n");
  text = "TIP: For best GUI, please expand the console widthwise until this line is one straight line.\n\nWelcome to Commander II. Please select a game mode. \n1-Storymode \n2-Battlemode\n";
  fprintf(f, "%s\n", text);

	scanf("%d",&navy);
  fprintf(f, "%d\n", navy);
  
	if(navy!=1&&navy!=2){
		printf("You did not select a game mode. Thanks for playing. ");
    text = "You did not select a game mode. Thanks for playing. ";
    fprintf(f, "%s\n", text);
    return 0;
	}
	if(navy==1){
		printf("You selected storymode. Welcome. You have been placed in command of the USS San Francisco. \n\n");
    text = "You selected storymode. Welcome. You have been placed in command of the USS San Francisco. \n\n";
    fprintf(f, "%s\n", text);
	
	game=1;
	while(game==1){
		printf("**********************************************************************\n9°17'51.4\"S 159°55'14.1\"E \nSailing due west, off the north coast of Guadalcanal \nSector X-Ray Tango\n12 November 1942 22:35\n**********************************************************************\n");

    printf("\n<It's such a cold day. So foggy, too. >");
		printf("\nCaptain! An unidentified ship has been spotted! She's 5 degrees off the port side, distance 10 nautical miles, sailing due north!");
		printf("\nPress 1 to continue.");

    text = "**********************************************************************\n9°17'51.4\"S 159°55'14.1\"E \nSailing due west, off the north coast of Guadalcanal \nSector X-Ray Tango\n12 November 1942 22:35\n**********************************************************************\n\n<It's such a cold day. So foggy, too. >\nCaptain! An unidentified ship has been spotted! She's 5 degrees off the port side, distance 10 nautical miles, sailing due north!\nPress 1 to continue.";
    fprintf(f, "%s\n", text);


    int s=0;//selection
    scanf("%d",&s);
    fprintf(f, "%d\n",s);

    //"1F1O"--no longer a fork. 
    if(s==1){
      printf("\n<Who would be here at this time? >");
      printf("\nCaptain, the ship has been identified. She's IJN Hiei, a Kongo-class battleship of the Imperial Japanese Navy!  ");
		  printf("\nWhat's your order?\n1:Retreat! Full port rudder!\n2:General Quarters!");

      text="\n<Who would be here at this time? >\nCaptain, the ship has been identified. She's IJN Hiei, a Kongo-class battleship of the Imperial Japanese Navy!  \nWhat's your order?\n1:Retreat! Full port rudder!\n2:General Quarters!";
      fprintf(f, "%s\n",text);

      s=0;
      scanf("%d",&s);
      fprintf(f, "%d\n",s);
      //2F1O
      if(s==1){
        printf("\n**The USS San Francisco retreats, radioing the position of the Japanese battleship to the fleet. ");
        text = "\n**The USS San Francisco retreats, radioing the position of the Japanese battleship to the fleet.";
        fprintf(f, "%s\n",text);

        if(luck<4){
          printf("The next day, during what would be known as the 1st Naval Battle of Guadalcanal, a shell from a Japanese battleship  hits the bridge of the USS San Francisco, killing everyone on the bridge including you. After the battle, you are honored as a naval war hero.  **");
          text = "The next day, during what would be known as the 1st Naval Battle of Guadalcanal, a shell from a Japanese battleship  hits the bridge of the USS San Francisco, killing everyone on the bridge including you. After the battle, you are honored as a naval war hero.  **";
          fprintf(f, "%s\n",text);
          return 0;
        }
        if(luck>=4){
          printf("The next day, during what would be known as the 1st Naval Battle of Guadalcanal, a shell from a Japanese battleship  hits the bridge of the USS San Francisco, killing everyone on the bridge. At that moment, you were at the forward fire control room and so survived the battle. After the battle, you are promoted and later lead a very successful naval career.  **");
          text = "The next day, during what would be known as the 1st Naval Battle of Guadalcanal, a shell from a Japanese battleship  hits the bridge of the USS San Francisco, killing everyone on the bridge. At that moment, you were at the forward fire control room and so survived the battle. After the battle, you are promoted and later lead a very successful naval career.  **";
          fprintf(f, "%s\n",text);
          return 0;
        }
      }
      //2F2O
      if(s==2){

        //potential "reward" for not being a chicken and running from battle. Boosts luck by 0-1 points. 
        int luckmod = rand() % 2;
        luck = luck+luckmod;

        printf("\n<Do we have what it takes to sink her? >");
        printf("\nCaptain, we are now at general quarters. However, the fire control team need to calibrate the ship's direction finder before we can fire. Which angle  would be the closest to the angle needed to hit Hiei?  ");
		    printf("\n1:5 degrees to port!\n2:5 degrees to starboard!");

        text="\n<Do we have what it takes to sink her? >\nCaptain, we are now at general quarters. However, the fire control team need to calibrate the ship's direction finder before we can fire. Which angle  would be the closest to the angle needed to hit Hiei?  \n1:5 degrees to port!\n2:5 degrees to starboard!";
        fprintf(f,"%s\n",text);

        s=0;
        scanf("%d",&s);
        fprintf(f,"%d\n",s);

        //3F1O
        if(s==1){
          if(luck<3){
          printf("\n**The massive turrets turn to aim at 5 degrees to port, right at Hiei. You listen as six 8 inch American batteries of freedom emit an earsplitting sound, sending tons of steel and explosives at the Japanese battleship. Through binoculars, you watch as the shells fly out only to splash behind the enemy warship. You realize that you forgot to lead the ship: since they were moving this entire time. You then watch as eight flashes of light appear from the enemy warship. Before you can react, a shell from the Japanese battleship hits the bridge of the USS San Francisco--where you are--killing everyone on the bridge including you. Your failure ended up killing yourself and all the other bridge officers of the ship.  **");
          text = "\n**The massive turrets turn to aim at 5 degrees to port, right at Hiei. You listen as six 8 inch American batteries of freedom emit an earsplitting sound, sending tons of steel and explosives at the Japanese battleship. Through binoculars, you watch as the shells fly out only to splash behind the enemy warship. You realize that you forgot to lead the ship: since they were moving this entire time. You then watch as eight flashes of light appear from the enemy warship. Before you can react, a shell from the Japanese battleship hits the bridge of the USS San Francisco--where you are--killing everyone on the bridge including you. Your failure ended up killing yourself and all the other bridge officers of the ship.  **";
          fprintf(f,"%s\n",text);
          return 0;
          }
          if(luck>=3){
          printf("\n**The massive turrets turn to aim at 5 degrees to port, right at Hiei. You listen as six 8 inch American batteries of freedom emit an earsplitting sound, sending tons of steel and explosives at the Japanese battleship. Through binoculars, you watch as the shells fly out only to splash behind the enemy warship. You realize that you forgot to lead the ship: since they were moving this entire time. You then watch as eight flashes of light appear from the enemy warship. Before you can react, a shell from the Japanese battleship hits the bridge of the USS San Francisco--where you are--killing everyone on the bridge and sending you flying back into a wall, where you lose consciousness. When you regain consciousness, you watch as the enemy ship slips under the waters. Your failure ended up killing all the other bridge officers of the ship, but the courageous acts of your crew saved everyone else.  **");
          text = "\n**The massive turrets turn to aim at 5 degrees to port, right at Hiei. You listen as six 8 inch American batteries of freedom emit an earsplitting sound, sending tons of steel and explosives at the Japanese battleship. Through binoculars, you watch as the shells fly out only to splash behind the enemy warship. You realize that you forgot to lead the ship: since they were moving this entire time. You then watch as eight flashes of light appear from the enemy warship. Before you can react, a shell from the Japanese battleship hits the bridge of the USS San Francisco--where you are--killing everyone on the bridge and sending you flying back into a wall, where you lose consciousness. When you regain consciousness, you watch as the enemy ship slips under the waters. Your failure ended up killing all the other bridge officers of the ship, but the courageous acts of your crew saved everyone else.  **";
          fprintf(f,"%s\n",text);
          return 0;
          }
        }
        //3F2O
        if(s==2){
          if(luck<3){
          printf("\n**The massive turrets turn to aim at 5 degrees to starboard, ahead of Hiei. You listen as six 8 inch American batteries of freedom emit an earsplitting sound, sending tons of steel and explosives at the Japanese battleship. Through binoculars, you watch as the shells fly out, striking the enemy warship and causing small bursts of orange flame to appear on the enemy warship. Congratulations, you hit the enemy hard. However, you then watch as eight flashes of light appear from the enemy warship. Before you can react, a shell from the Japanese battleship hits the bridge of the USS San Francisco--where you are--killing everyone on the bridge including you. The battle will continue--but without you. **");
          text="\n**The massive turrets turn to aim at 5 degrees to starboard, ahead of Hiei. You listen as six 8 inch American batteries of freedom emit an earsplitting sound, sending tons of steel and explosives at the Japanese battleship. Through binoculars, you watch as the shells fly out, striking the enemy warship and causing small bursts of orange flame to appear on the enemy warship. Congratulations, you hit the enemy hard. However, you then watch as eight flashes of light appear from the enemy warship. Before you can react, a shell from the Japanese battleship hits the bridge of the USS San Francisco--where you are--killing everyone on the bridge including you. The battle will continue--but without you. **";
          fprintf(f,"%s\n",text);
          return 0;
          }
          if(luck>=3){
          printf("\n**The massive turrets turn to aim at 5 degrees to starboard, ahead of Hiei. You listen as six 8 inch American batteries of freedom emit an earsplitting sound, sending tons of steel and explosives at the Japanese battleship. Through binoculars, you watch as the shells fly out, striking the enemy warship and causing small bursts of orange flame to appear on the enemy warship. Congratulations, you hit the enemy hard. Interestingly, you then watch as a giant fireball rips through the enemy ship, splitting the battleship into two. It seems that you hit one of their ammunition magazines, causing it to explode. The battle has been won--thanks to your amazing tactical instincts. ");
          text="\n**The massive turrets turn to aim at 5 degrees to starboard, ahead of Hiei. You listen as six 8 inch American batteries of freedom emit an earsplitting sound, sending tons of steel and explosives at the Japanese battleship. Through binoculars, you watch as the shells fly out, striking the enemy warship and causing small bursts of orange flame to appear on the enemy warship. Congratulations, you hit the enemy hard. Interestingly, you then watch as a giant fireball rips through the enemy ship, splitting the battleship into two. It seems that you hit one of their ammunition magazines, causing it to explode. The battle has been won--thanks to your amazing tactical instincts. ";
          fprintf(f,"%s\n",text);
          return 0;
          }
        }
      }
    }
		game=0;
	}
  }
	if(navy==2){
		printf("You selected battlemode. Welcome. You have been placed in command of the USS San Diego. You are about to engage in a practice battle with an \"enemy\" warship--a target ship. You get a variety of weapons to fire at the target ship, and to make things abstracted, the ship's modules, integrity and battle-readiness will be measured in hitpoints. The enemy ship will also fire back at you, though--so you must be efficient. Good luck. \n\n");

    text = "You selected battlemode. Welcome. You have been placed in command of the USS San Diego. You are about to engage in a practice battle with an \"enemy\" warship--a target ship. You get a variety of weapons to fire at the target ship, and to make things abstracted, the ship's modules, integrity and battle-readiness will be measured in hitpoints. The enemy ship will also fire back at you, though--so you must be efficient. Good luck. \n\n";
    fscanf(f,"%s\n",text);

    int go = 1;
    int shiphp=100;
    int enemyhp=100;
    while(go==1){
      int armament = 0;
      printf("What to fire?\n1: 14x 5 inch (127mm) Main Batteries\n2: 4x 21inch (533mm) Torpedoes\n");
      text = "What to fire?\n1: 14x 5 inch (127mm) Main Batteries\n2: 4x 21inch (533mm) Torpedoes\n";
      fprintf(f,"%s\n",text);


      scanf("%d",&armament);
      fprintf(f,"%d\n",armament);

      if(armament==1){
        int dmg = rand()%21;//randnum from 0-20
        enemyhp = enemyhp - dmg;
        printf("Your broadside salvo did %d damage! You have %d hp left and the enemy ship has %d hp left. \n\n",dmg,shiphp,enemyhp);
        a="Your broadside salvo did ";
        b=" damage! You have";
        c=" hp left and the enemy ship has ";
        d=" hp left. \n\n";
        fprintf(f,"%s%d%s%d%s%d%s",a,dmg,b,shiphp,c,enemyhp,d);
      }
      else if(armament==2){
        int dmg = rand()%51;//randnum from 0-50
        enemyhp = enemyhp - dmg;
        printf("Your torpedo salvo did %d damage! You have %d hp left and the enemy ship has %d hp left. \n\n",dmg,shiphp,enemyhp);
        a="Your torpedo salvo did ";
        b=" damage! You have ";
        c=" hp left and the enemy ship has ";
        d=" hp left. \n\n";
        fprintf(f,"%s%d%s%d%s%d%s",a,dmg,b,shiphp,c,enemyhp,d);
      }
      else{
        printf("Invalid armament. In your confusion, the enemy has fired at you. \n");
        text="Invalid armament. In your confusion, the enemy has fired at you. \n";
        fprintf(f,"%s\n",text);
      }

      if(shiphp<=0||enemyhp<=0){
        go=0;
      }

      int enemydmg = rand()%20;
      shiphp = shiphp - enemydmg;
      printf("You were hit for %d damage! You have %d hp left and the enemy ship has %d hp left. \n**********************************************************************\n",enemydmg,shiphp,enemyhp);

        a="You were hit for ";
        b=" damage! You have";
        c=" hp left and the enemy ship has ";
        d=" hp left. \n**********************************************************************\n";
        fprintf(f,"%s%d%s%d%s%d%s",a,enemydmg,b,shiphp,c,enemyhp,d);

    }
    if(shiphp<=0){
      printf("You were sunk. Better luck next time!");
      text="You were sunk. Better luck next time!";
      fprintf(f,"%s\n",text);
    }
    else if(enemyhp<=0){
      printf("You sunk the enemy! High command commends you on your achievement!");
      text="You sunk the enemy! High command commends you on your achievement!";
      fprintf(f,"%s\n",text);
    }    
  }


  return 0;
}
