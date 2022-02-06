package com.company;

public class Main {

    public static void main(String[] args) {
	    Mammal elephant=new Mammal(4,200, 5,"Jason","elephant");
		elephant.whoAmI();
	    elephant.eat();
	    System.out.println("------------");
	    Mammal tiger=new Mammal(4,100, 10,"Tib","tiger");
	    tiger.whoAmI();
	    tiger.walk();
	    Carnivorous tig=new Tiger(4,100, 10,"Tib","tiger");
	    tig.hunt();
		System.out.println("------------");
		Bird sparrow=new Bird(24,1,"Jack","sparrow");
		sparrow.whoAmI();
		sparrow.fly();
		System.out.println("------------");
		Bird owl=new Bird(60,7,"Sleepy","owl");
		owl.whoAmI();
		owl.sleep();
		Carnivorous owl2=new Owl(60,7,"Sleepy","owl");
		owl2.hunt();
		System.out.println("------------");
		Fish shark=new Fish(520000,25, "Bruce", "shark");
		shark.whoAmI();
		shark.swim();
		Carnivorous shark2=new Shark(60,7,"Sleepy","owl");
		shark2.hunt();
		System.out.println("------------");
		Fish crucian=new Fish(3000, 10,"Nemo","crucian");
		crucian.whoAmI();
		crucian.swim();
    }
}
