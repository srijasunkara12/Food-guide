#include<stdio.h>
#include<stdlib.h>

// function to display a recipe
void displayRecipe(const char* recipeName, const char* ingredients[], int numIngredients, const char* instructions[], int numInstructions) {
    printf("Recipe: %s\n\n", recipeName);

    printf("Ingredients:\n");
    for (int i = 0; i < numIngredients; i++) {
        printf("- %s\n", ingredients[i]);
    }

    printf("\nInstructions:\n");
    for (int i = 0; i < numInstructions; i++) {
        printf("%d. %s\n", i + 1, instructions[i]);
        
    }
    for (int i = 0; i < 40; i++)
    {
         printf("* ");
    }
     printf("*\n\n\n\n\n");
}
// chickenpasta 
void chickenpasta(){
   const char* recipeName = "Chicken Pasta";
    const char* ingredients[] = {
        "250g pasta",
        "2 chicken breasts",
        "2 tablespoons olive oil",
        "1 onion, chopped",
        "2 cloves of garlic, minced",
        "1 can diced tomatoes",
        "1 teaspoon dried oregano",
        "Salt and pepper to taste",
        "Grated Parmesan cheese (optional)"
    };
  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
        "Cook the pasta according to package instructions. Drain and set aside.",
        "Heat the olive oil in a large skillet over medium heat.",
        "Add the chopped onion and minced garlic. Sauté until the onion is translucent.",
        "Add the chicken breasts to the skillet and cook until they are no longer pink in the center.",
        "Remove the chicken from the skillet and shred it using two forks.",
        "Return the shredded chicken to the skillet.",
        "Add the diced tomatoes, dried oregano, salt, and pepper. Stir to combine.",
        "Simmer the sauce for about 10 minutes.",
        "Serve the sauce over the cooked pasta.",
        "Sprinkle with grated Parmesan cheese, if desired.\n\n\n\n\n"  
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
//chickenbiryani
void chickenbiryani(){
   const char* recipeName = "Chicken Biryani";
        const char* ingredients[] = {
        "2 cups basmati rice",
        "500 grams chicken, cut into pieces",
        "1 cup plain yogurt",
        "2 onions, thinly sliced",
        "4 cloves of garlic, minced",
        "1-inch piece of ginger, grated",
        "2 tomatoes, chopped",
        "2 green chilies, slit lengthwise",
        "1 teaspoon turmeric powder",
        "2 teaspoons red chili powder",
        "1 teaspoon cumin powder",
        "1 teaspoon coriander powder",
        "1 teaspoon garam masala",
        "1/2 cup chopped coriander leaves (cilantro)",
        "1/2 cup chopped mint leaves",
        "4 cups water",
        "4 tablespoons ghee (clarified butter) or vegetable oil",
        "1/2 cup plain yogurt",
        "1 tablespoon ginger-garlic paste",
        "1 teaspoon red chili powder",
        "1/2 teaspoon turmeric powder",
        "1/2 teaspoon cumin powder",
        "1/2 teaspoon coriander powder",
        "Salt to taste"

    };
    
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
         "Rinse the basmati rice under running water until the water runs clear. Soak the rice in water for 30 minutes, then drain and set aside.",
         "In a bowl, combine all the ingredients for the marinade. Add the chicken pieces and mix well to coat them evenly. Allow the chicken to marinate for at least 30 minutes.",
         "Heat 2 tablespoons of ghee or oil in a large pan over medium heat. Add the sliced onions and cook until golden brown and caramelized. Remove half of the onions from the pan and set aside for garnishing.",
         "In the same pan, add the minced garlic and grated ginger. Sauté for a minute until fragrant. Then, add the chopped tomatoes and green chilies. Cook until the tomatoes are soft and mashed.",
         "Add the marinated chicken to the pan and cook for 5-6 minutes until the chicken is partially cooked.",
         "Add the turmeric powder, red chili powder, cumin powder, coriander powder, and salt. Mix well to coat the chicken with the spices. Cook for another 2-3 minutes.",
         "Meanwhile, in a large pot, bring 4 cups of water to a boil. Add the soaked and drained rice to the boiling water. Cook the rice until it is 70% cooked (it should still have a slight bite to it). Drain the rice and set it aside.",
         "Preheat your oven to 180°C (350°F).",
         "In a large oven-safe dish, spread a layer of half-cooked rice at the bottom. Top it with a layer of the cooked chicken masala. Sprinkle a handful of chopped coriander leaves and mint leaves. Repeat the layers until all the rice and chicken masala are used. Finish with a final layer of rice on top.",
         "Drizzle the remaining 2 tablespoons of ghee or oil over the top layer of rice. Cover the dish tightly with foil or a lid to trap the steam.",
         "Place the biryani dish in the preheated oven and bake for 20-25 minutes until the rice is fully cooked and the flavors have melded together.",
         "Remove the biryani from the oven and let it rest for 5-10 minutes. Garnish with the caramelized onions that were set aside earlier.",
         "Serve the chicken biryani hot with raita (yogurt sauce) and enjoy!\n\n\n\n\n"
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}
//panipuri
void panipuri(){
   const char* recipeName = "Panipuri";
        const char* ingredients[] = {
    "1 cup semolina",
    "water as required",
    "3 teaspoon cumin powder",
    "5 green chilli",
    "1/2 teaspoon baking soda",
    "refined oil as required",
    "black salt as required",
    "4 tablespoon crushed jaggery",
    "1 cup boiled chick peas",
    "tamrind chutney as required",
    "1 cup tamarind paste",
    "3 teaspoon roasted cumin powder",
    "1 cup coriander leaves",
    "1 cup wheat flour",
    "salt as required",
    "1/2 cup mint leaves",
    "3 tablespoon boondi",
    "4 boiled,mashed potato",
    "green chutney as required",
    "black pepper as required",

    };
    
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
         "Knead the dough:To make this easy Pani Puri recipe at home, take a bowl and add semolina, wheat flour, baking soda along with a little salt and water as required and prepare a stiff dough. Adding semolina will make the puris crispy. Then, cover it with a muslin cloth, let it remain aside for about half an hour.",
         "Roll out puris:After half an hour, knead the flour again and roll out a few small-sized balls from the prepared dough. Next, place the balls on a flat surface and with the help of wheat flour, flatten and make them thin enough to give them the appearance of very small, round puris. You can alternately roll out a large puri and cut small discs with a round cookie cutter or small bowl.",
         "Deep fry the puris:Now, place a pan on medium flame and pour refined oil. Once the oil is sufficiently hot, fry the prepared round-shaped puris. Fry 3-4 at a time while making sure each one puffs all right. Also, keep the flame medium as excess heat might burn the puris.",
         " Cool these fried puris:Once well-cooked, take them out immediately and place them on a paper towel in order to get rid of extra oil. Let them cool and keep aside. Your next step would be to prepare pani for the puris.",
         "Prepared the pani:So first, take out a blender, put green chillies, coriander along with mint leaves and blend until smooth. Once done, transfer the chilli-mint paste to a jug and stir in tamarind paste, 4 cups of water, boondi, black salt, crushed jaggery, roasted and raw cumin seeds. Mix the mixture thoroughly.",
         "Sieve to remove any impurities:Then, make the prepared pani go through a sieve in order to remove the coarse particles. Once done, put it in the refrigerator to chill. Now all that remains is to prepare the stuffing for the puris. For that, take a bowl and combine mashed potato along with chickpeas. Add salt and pepper according to your taste.",
         "Serve Pani Puri with chickpeas, tamarind chutney and the fresh pani:Lastly, take the puris and make a small hole in each using your thumb. Stuff the chickpea-potato mixture in equal portions. Add a layer of green and tamarind chutney in them and serve alongside chilled mint pani. Enjoy this street food recipe with your loved ones.",
         "Serve the Panipuri with onions and enjoy!\n\n\n\n\n"
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void kitkatmilkshake (){
   const char* recipeName = "Kit Kat milkshake with icecream";
        const char* ingredients[] = {
            "2 kit kat",
            "2 tablespoon sugar",
            "4 tablespoon chocolate sauce",
            "1 cup whipped cream",
            "600 ml milk",
            "1 teaspoon coffee",
            "chocolate chips as required",
            "2 scoops chocolate icecream",

    };
    
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
         "Blend KitKat and milk:To begin with this easy recipe, take a blender and add in milk, KitKat pieces, 1 tablespoon sugar,2 tablespoon chocolate syrup, blend it all together. Blend it again after adding 2 scoops of chocolate ice cream.",
         "Prepare the whipped cream:Put the shake in a refrigerator for 15 mins.Next, take a large bowl and add whipped cream, coffee powder and sugar, whisk the whipped cream. ", 
         "Serve chilled:Pour the cold shake into the serving glasses and drizzle the chocolate syrup. Next, using a piping cone add the whipped cream and sprinkle chocolate chips. Enjoy!\n\n\n\n\n"
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void vegetablemanchuria(){
const char* recipeName = "Vegetable Manchuria ";
   const char* ingredients[] = {
    "tablespoon shredded cabbage",
    "2 tablespoon cauliflower",
    "1 1/2 teaspoon green chilli",
    "1/2 teaspoon garlic paste",
    "2 tablespoon green beans",
    "salt as required",
    "2 teaspoon light soya sauce",
    "3 tablespoon all purpose flour",
    "5 tablespoon water",
    "1/2 tablespoon red bell pepper",
    "1/4 tablespoon capsicum (green pepper)",
    "1 tablespoon tomato ketchup",
    "1 teaspoon white vinegar",
    "2 tablespoon chopped,grated carrot",
    "4 tablespoon paneer",
    "1/2 teaspoon ginger paste",
    "3 tablespoon coriander leaves",
    "2 teaspoon soy sauce",
    "1/2 teaspoon white pepper powder",
    "2 tablespoon corn starch",
    "1 cup vegetable oil",
    "1 tablespoon onion",
    "1/4 piece yellow bell pepper",
    "4 cloves garlic",
    "1/2 tablespoon red chilli sauce",
    "1/2 tablespoon broth powder",
     };
    
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);
    const char* instructions[] = {

         "Clean the veggies:Soak the veggies in lukewarm water with a pinch of salt, this will wash off all the adulterants from the vegetables.",

         "Make Manchurian mixture:Once the vegetables are washed, take a chopping board and finely chop the vegetables. Take a large bowl and squeeze out the excess water from cabbage and carrots. Now, take another bowl and mix paneer, cabbage, carrot, cauliflower, 1 tsp green chilli, ginger-garlic paste, 1 tsp coriander leaves, green beans, dark soy sauce, salt to taste, white pepper powder and 2 tsp light soy sauce. Mix all the ingredients well. Then, add all-purpose flour and corn starch and knead a soft dough or mixture to make Manchurian balls.",

         "Prepare the Manchurian balls:Take some mixture from the bowl and shape it into a bite-sized ball. Repeat to make more such balls. Then, heat 1 cup of vegetable oil on medium flame and heat the oil. When the oil is hot enough, deep fry the Manchurian balls till they turn golden brown and keep them aside.",

         " Prepare the Manchurian gravy:Now, put another pan over medium flame and heat oil in it. When the oil is hot enough, add 1 tbsp garlic in it along with ½ tsp green chilli and saute for a few seconds. Then, add onion, 1 tbsp mixed bell peppers, 1 tbsp coriander leaves. Cook for a minute and then add tomato ketchup, chilli sauce and cook for another minute. Now, add white vinegar, water and broth powder to the pan and stir well. Cook for another minute.",

         "Add Manchurian balls:Finally, add ½ tsp dark soy sauce and the fried Manchurian balls in it. Stir well.",

         " Serve hot:Sprinkle some coriander leaves and serve hot with fried rice, steamed rice or Hakka noodles. Do try this recipe, rate it and let us know how it turned out to be!\n\n\n\n\n"
          
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void rasmalai() {
const char* recipeName = "Rasmalai";
const char* ingredients[] = {
"1 liter full-fat milk",
"1/4 cup lemon juice",
"1 cup sugar",
"4 cups water",
"4-5 strands saffron",
"1/2 teaspoon cardamom powder",
"2 tablespoons chopped almonds",
"2 tablespoons chopped pistachios"
};

int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

const char* instructions[] = {
    "Boil the milk: In a heavy-bottomed pan, heat the milk over medium heat until it comes to a boil. Stir occasionally to prevent it from sticking to the bottom.",
    "Curdle the milk: Reduce the heat to low and add the lemon juice gradually while stirring the milk. The milk will curdle and separate into solids (paneer) and whey. Turn off the heat.",
    "Strain and rinse: Line a strainer or colander with a muslin cloth or cheesecloth. Pour the curdled milk through the strainer to separate the paneer from the whey. Rinse the paneer under cold water to remove the lemon flavor.",
    "Press and drain: Gather the edges of the cloth and squeeze out any excess water from the paneer. Hang the cloth with the paneer for about 30 minutes to drain any remaining whey.",
    "Knead the paneer: Transfer the drained paneer to a clean surface and knead it with the heel of your hand until it becomes smooth and soft. Divide the paneer into small equal-sized portions and shape them into flattened discs.",
    "Prepare the sugar syrup: In a wide pot, combine the sugar and water and bring it to a boil over medium heat. Stir until the sugar dissolves completely. Add the saffron strands and cardamom powder to the syrup.",
    "Cook the paneer discs: Gently slide the paneer discs into the boiling sugar syrup. Cover the pot with a lid and cook for about 15-20 minutes on low heat. The paneer discs will absorb the syrup and become soft and spongy.",
    "Garnish and chill: Remove the cooked paneer discs from the syrup and place them on a serving dish. Garnish with chopped almonds and pistachios. Let the rasmalai cool to room temperature and then refrigerate for a few hours before serving.",
    "Serve chilled: Serve the chilled rasmalai as a delightful sweet dessert. Enjoy the rich flavors and creamy texture of this traditional Indian sweet.\n\n\n\n\n"
};

int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void koreanFriedChicken() {
const char* recipeName = "Korean Fried Chicken";
const char* ingredients[] = {
"1 kg chicken wings or drumsticks",
"1 cup all-purpose flour",
"1 cup cornstarch",
"1 teaspoon baking powder",
"1 teaspoon salt",
"1/2 teaspoon black pepper",
"1/2 teaspoon garlic powder",
"1/2 teaspoon ginger powder",
"1 cup cold water",
"Vegetable oil for frying",
"1/2 cup gochujang (Korean chili paste)",
"1/4 cup soy sauce",
"1/4 cup rice vinegar",
"3 tablespoons honey",
"2 tablespoons brown sugar",
"2 cloves garlic, minced",
"1 teaspoon sesame oil",
"Toasted sesame seeds for garnish",
"Chopped green onions for garnish"
};                                                                                                                                                                        int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

const char* instructions[] = {
    "In a large bowl, combine the all-purpose flour, cornstarch, baking powder, salt, black pepper, garlic powder, and ginger powder.",
    "Add the cold water to the dry ingredients and whisk until you have a smooth batter. The consistency should be similar to pancake batter.",
    "Heat vegetable oil in a deep frying pan or pot to about 175°C (350°F).",
    "Dip each chicken wing or drumstick into the batter, allowing any excess batter to drip off. Carefully place the coated chicken into the hot oil.",
    "Fry the chicken in batches for about 10-12 minutes until they are golden brown and crispy. Remove from the oil and place them on a paper towel-lined plate to drain excess oil.",
    "In a separate saucepan, combine gochujang, soy sauce, rice vinegar, honey, brown sugar, minced garlic, and sesame oil. Cook over medium heat, stirring occasionally, until the sauce thickens and coats the back of a spoon.",
    "Place the fried chicken in a large bowl and pour the sauce over the top. Toss the chicken in the sauce until each piece is well coated.",
    "Garnish with toasted sesame seeds and chopped green onions.",
    "Serve the Korean fried chicken hot as an appetizer or main dish. Enjoy the crispy and flavorful chicken with your favorite dipping sauce or alongside steamed rice.\n\n\n\n\n"
};

int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void masalaDosa() {
const char* recipeName = "Masala Dosa";
const char* ingredients[] = {
"1 cup rice",
"1/2 cup urad dal (split black lentils)",
"1/4 cup chana dal (split chickpeas)",
"1/4 cup poha (flattened rice)",
"1/4 teaspoon fenugreek seeds",
"Salt to taste",
"Oil or ghee for cooking dosa",
"1 onion, finely chopped",
"2-3 green chilies, finely chopped",
"1/4 teaspoon mustard seeds",
"1/4 teaspoon cumin seeds",
"A pinch of asafoetida (hing)",
"1/2 teaspoon turmeric powder",
"1/2 teaspoon red chili powder",
"2-3 boiled and mashed potatoes",
"A handful of fresh coriander leaves, chopped",
"Coconut chutney and sambar for serving"
};

int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

const char* instructions[] = {
    "Soak the rice, urad dal, chana dal, and fenugreek seeds together in water for about 6-8 hours or overnight.",
    "Drain the soaked ingredients and rinse them thoroughly.",
    "In a blender, grind the soaked ingredients along with poha, adding water gradually, until you get a smooth batter of pouring consistency. The batter should not be too thick or too thin.",
    "Add salt to the batter and mix well. Allow the batter to ferment overnight or for at least 8-10 hours. The fermentation process helps in making the dosas light and crispy.",
    "Once the batter is fermented, heat a griddle or non-stick tawa on medium heat.",
    "Take a ladleful of the dosa batter and pour it in the center of the griddle.",
    "Spread the batter in a circular motion to make a thin dosa. You can make it as large or small as you prefer.",
    "Drizzle a little oil or ghee around the edges of the dosa and on top.",
    "Cook the dosa on medium heat until the bottom side turns golden brown and crispy.",
    "Flip the dosa and cook the other side for a minute or two.",
    "Remove the dosa from the griddle and keep it aside. Repeat the process with the remaining batter to make more dosas.",
    "In a separate pan, heat some oil. Add mustard seeds and cumin seeds. Let them splutter.",
    "Add asafoetida, chopped onions, and green chilies. Sauté until the onions turn translucent.",
    "Add turmeric powder and red chili powder. Mix well.",
    "Add the boiled and mashed potatoes to the pan. Mix everything together and cook for a couple of minutes.",
    "Sprinkle chopped coriander leaves and mix well. Remove from heat.",
    "To serve, place a dosa on a plate. Spoon a portion of the potato masala onto one side of the dosa.",
    "Fold the dosa over the masala to make a half-moon shape.",
    "Serve hot with coconut chutney and sambar. Enjoy the delicious masala dosa!\n\n\n\n\n"
};

int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);   }

void chocolateBrownie() {
    const char* recipeName = "Chocolate Brownie";
    const char* ingredients[] = {
        "1 cup butter",
        "2 cups sugar",
        "4 eggs",
        "1 teaspoon vanilla extract",
        "1 cup all-purpose flour",
        "1/2 cup cocoa powder",
        "1/4 teaspoon salt",
        "1/2 teaspoon baking powder",
        "1 cup chocolate chips"
    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
        "Preheat the oven to 350°F (175°C).",
        "Grease a 9x9 inch baking pan.",
        "In a microwave-safe bowl, melt the butter.",
        "In a large mixing bowl, combine the melted butter and sugar. Mix well.",
        "Add the eggs, one at a time, to the butter-sugar mixture. Stir well after each addition.",
        "Stir in the vanilla extract.",
        "In a separate bowl, whisk together the all-purpose flour, cocoa powder, salt, and baking powder.",
        "Gradually add the dry ingredients to the butter-sugar mixture, stirring well after each addition.",
        "Fold in the chocolate chips.",
        "Pour the batter into the greased baking pan.",
        "Bake in the preheated oven for 25-30 minutes, or until a toothpick inserted into the center comes out with moist crumbs.",
        "Remove from the oven and let it cool in the pan for a few minutes.",
        "Transfer the brownies to a wire rack and let them cool completely before cutting into squares.\n\n\n\n\n"
    };

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void pongal() {
    const char* recipeName = "Pongal";
    const char* ingredients[] = {
        "1 cup raw rice",
        "1/4 cup split yellow moong dal",
        "2 tablespoons ghee",
        "1/2 teaspoon cumin seeds",
        "1/2 teaspoon black peppercorns",
        "1/4 teaspoon grated ginger",
        "A pinch of asafoetida (hing)",
        "8-10 cashew nuts",
        "10-12 curry leaves",
        "Salt to taste",
        "Water as needed"
    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
        "Wash the rice and dal together, and soak them in water for 15-20 minutes.",
        "In a pressure cooker, heat ghee on medium heat.",
        "Add cumin seeds, black peppercorns, grated ginger, and asafoetida. Sauté for a minute.",
        "Add cashew nuts and curry leaves. Sauté until the cashews turn golden brown.",
        "Drain the soaked rice and dal, and add them to the pressure cooker.",
        "Add salt and water (usually 4 cups of water for 1 cup of rice-dal mixture). Mix well.",
        "Close the pressure cooker and cook on medium heat for 3-4 whistles, or until the rice and dal are well cooked and mashed.",
        "Once the pressure releases, open the cooker and give the pongal a good mix.",
        "Adjust the consistency by adding more water if needed. The pongal should be creamy and soft.",
        "Serve hot with sambar, coconut chutney, or ghee. Enjoy the delicious pongal!\n\n\n\n\n"
    };

    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void gulabJamun(){
const char* recipeName = "Gulab Jamun";
const char* ingredients[] = {
"1 cup milk powder",
"1/4 cup all-purpose flour",
"1/4 teaspoon baking powder",
"1/8 teaspoon cardamom powder",
"2 tablespoons ghee (clarified butter)",
"3 tablespoons milk",
"1 cup sugar",
"1 cup water",
"1 tablespoon rose water",
"Oil or ghee for frying"
};
int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

const char* instructions[] = {
     "In a mixing bowl, combine the milk powder, all-purpose flour, baking powder, and cardamom powder.",
     "Add the ghee and mix well to form a crumbly mixture.",
     "Gradually add the milk and knead the mixture into a soft dough. Add more milk if needed.",
     "Cover the dough and let it rest for 15-20 minutes.",
     "In a separate saucepan, combine the sugar and water. Bring it to a boil, stirring until the sugar is completely dissolved. Simmer for 5 minutes to form a syrup. Remove from heat and stir in the rose water. Set aside.",
     "Heat oil or ghee in a deep pan or kadai over medium heat.",
     "Divide the dough into small portions and shape them into smooth balls, without any cracks.",
     "Carefully drop the dough balls into the hot oil or ghee, frying them in batches. Stir gently to ensure even browning.",
     "Fry the gulab jamuns until they turn golden brown, then remove them from the oil and drain on a paper towel.",
     "Once all the gulab jamuns are fried, soak them in the prepared sugar syrup for at least 30 minutes to 1 hour, allowing them to absorb the syrup and become soft and spongy.",
     "Garnish with chopped nuts, such as pistachios or almonds, if desired.",
     "Serve the gulab jamuns warm or at room temperature, and enjoy!\n\n\n\n\n"
};

int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void fishFry(){
  const char* recipeName = "Fish Fry";
  const char* ingredients[] = {
    "4 fish fillets (any white fish like tilapia or cod)",
    "1/2 cup all-purpose flour",
    "2 tablespoons rice flour",
    "1 teaspoon red chili powder",
    "1/2 teaspoon turmeric powder",
    "1 teaspoon cumin powder",
    "1 teaspoon coriander powder",
    "1/2 teaspoon garlic powder",
    "1/2 teaspoon ginger powder",
    "Salt to taste",
    "Oil for frying"
  };
  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

  const char* instructions[] = {
    "Rinse the fish fillets and pat them dry with a paper towel.",
    "In a shallow bowl, combine the all-purpose flour, rice flour, red chili powder, turmeric powder, cumin powder, coriander powder, garlic powder, ginger powder, and salt. Mix well.",
    "Coat each fish fillet with the flour mixture, ensuring it is evenly coated on all sides. Gently shake off any excess flour.",
    "Heat oil in a frying pan or skillet over medium heat.",
    "Once the oil is hot, carefully place the coated fish fillets in the pan. Fry them for about 3-4 minutes on each side, or until they turn golden brown and crispy.",
    "Remove the fish fillets from the pan and drain them on a paper towel to remove any excess oil.",
    "Serve the fish fry hot with lemon wedges and your favorite dipping sauce or chutney.\n\n\n\n\n",
  };
  int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

  displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void doubleKaMeetha(){
  const char* recipeName = "Double Ka Meetha";
  const char* ingredients[] = {
    "8 slices of bread",
    "1 cup milk",
    "1/2 cup sugar",
    "2 tablespoons ghee",
    "1/4 teaspoon cardamom powder",
    "1/4 cup chopped nuts (cashews, almonds, pistachios)",
    "1 tablespoon raisins",
    "Saffron strands for garnish"
  };
  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

  const char* instructions[] = {
    "In a saucepan, heat the milk and sugar together until the sugar dissolves. Remove from heat and set aside.",
    "Heat ghee in a frying pan over medium heat.",
    "Cut each bread slice into triangles or desired shapes.",
    "Fry the bread slices in the ghee until they turn golden brown and crisp on both sides. Remove from the pan and drain on a paper towel to remove excess oil.",
    "In a separate pan, heat a tablespoon of ghee and add the chopped nuts and raisins. Saute them until the nuts turn golden brown and the raisins plump up. Remove from heat and set aside.",
    "In a deep serving dish, arrange a layer of fried bread slices.",
    "Pour the prepared sweetened milk over the bread slices, ensuring they are soaked well. Sprinkle cardamom powder over the milk-soaked bread.",
    "Add a layer of fried nuts and raisins over the bread slices.",
    "Repeat the layers with the remaining bread slices, sweetened milk, nuts, and raisins.",
    "Garnish the top with a few strands of saffron.",
    "Cover the dish and let it sit for at least 1-2 hours, allowing the bread to absorb the flavors and become soft.",
    "Serve the double ka meetha warm or chilled as desired, and enjoy!\n\n\n\n\n"
  };
  int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

  displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void muttonPaya(){
  const char* recipeName = "Mutton Paya";
  const char* ingredients[] = {
    "4 mutton paya (goat trotters)",
    "2 tablespoons ghee",
    "2 onions, finely chopped",
    "2 tomatoes, pureed",
    "2 teaspoons ginger-garlic paste",
    "1 teaspoon red chili powder",
    "1/2 teaspoon turmeric powder",
    "1 teaspoon coriander powder",
    "1/2 teaspoon cumin powder",
    "1/2 teaspoon garam masala",
    "Salt to taste",
    "Fresh coriander leaves for garnish",
    "Ginger slices for garnish",
    "Lemon wedges for serving"
  };
  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

  const char* instructions[] = {
    "Clean the mutton paya thoroughly, removing any dirt or impurities. Wash them well under running water.",
    "In a pressure cooker, heat ghee over medium heat.",
    "Add the chopped onions and sauté until they turn golden brown.",
    "Add the ginger-garlic paste and cook for a minute until the raw aroma disappears.",
    "Add the tomato puree and cook until the oil separates from the masala.",
    "Add the red chili powder, turmeric powder, coriander powder, cumin powder, and salt. Mix well.",
    "Add the mutton paya to the pressure cooker and mix them with the masala.",
    "Pour enough water to cover the paya, close the pressure cooker lid, and cook for about 10-12 whistles or until the paya is tender and cooked.",
    "Allow the pressure to release naturally before opening the cooker.",
    "Place the pressure cooker back on the stove over low heat.",
    "Add garam masala and simmer the paya for another 10-15 minutes, allowing the flavors to blend together.",
    "Garnish with fresh coriander leaves and ginger slices.",
    "Serve the mutton paya hot with naan, rice, or roti, and lemon wedges on the side.",
    "Enjoy!\n\n\n\n\n"
  };
  int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

  displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void coffee() {
  const char* recipeName = "Coffee";
  const char* ingredients[] = {
    "1 cup water",
    "2 tablespoons ground coffee",
    "Sugar or sweetener",
    "Milk"
  };

  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

  const char* instructions[] = {
    "Boil water in a pot or kettle.",
    "Add ground coffee to a coffee filter or a French press.",
    "Pour the boiling water over the coffee grounds. Let it steep for about 4-5 minutes.",
    "If using a coffee filter, allow the brewed coffee to drip into a coffee pot or cup.",
    "If using a French press, slowly press down the plunger to separate the coffee grounds from the liquid.",
    "If desired, add sugar or sweetener to taste.",
    "If desired, heat milk separately and add it to the coffee for a creamy texture.",
    "Stir well and serve hot.",
    "Enjoy your delicious cup of coffee!\n\n\n\n\n"
  };

  int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

  displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void chickenSandwich() {
  const char* recipeName = "Chicken Sandwich";
  const char* ingredients[] = {
    "2 slices of bread",
    "100 grams cooked chicken breast, sliced",
    "Lettuce leaves",
    "Tomato slices",
    "Cucumber slices",
    "Mayonnaise",
    "Mustard",
    "Salt and pepper to taste"
  };

  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

  const char* instructions[] = {
    "Place the bread slices on a clean surface.",
    "Spread a layer of mayonnaise on one side of each bread slice.",
    "Place the lettuce leaves on one bread slice, followed by tomato slices and cucumber slices.",
    "Season the sliced chicken breast with salt and pepper, and place it on top of the vegetables.",
    "Spread mustard on the other bread slice and place it on top of the chicken to close the sandwich.",
    "Press the sandwich gently to hold it together.",
    "You can serve the sandwich as is or grill it for a warm and crispy texture.",
    "If grilling, preheat a pan or grill pan over medium heat. Place the sandwich in the pan and cook for a few minutes on each side until golden brown and the cheese has melted (if using).",
    "Remove the sandwich from the pan and let it cool slightly.",
    "Cut the sandwich diagonally into halves or quarters for serving.",
    "Enjoy your delicious chicken sandwich!\n\n\n\n\n"
  };

  int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

  displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void chickenBurger() {
  const char* recipeName = "Chicken Burger";
  const char* ingredients[] = {
    "1 chicken breast",
    "1 burger bun",
    "Lettuce leaves",
    "Tomato slices",
    "Onion slices",
    "Pickles",
    "Mayonnaise",
    "Ketchup",
    "Mustard",
    "Salt and pepper to taste",
    "Cheese slices (optional)",
    "Oil for grilling"
  };

  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

  const char* instructions[] = {
    "Preheat a grill or grill pan over medium heat.",
    "Season the chicken breast with salt and pepper.",
    "Place the chicken breast on the grill and cook for about 6-8 minutes per side, or until fully cooked.",
    "Once cooked, remove the chicken from the grill and let it rest for a few minutes.",
    "Slice the burger bun in half horizontally.",
    "Spread mayonnaise, ketchup, and mustard on the bottom half of the bun.",
    "Layer lettuce leaves, tomato slices, onion slices, and pickles on top of the sauce.",
    "If using cheese, place a slice on top of the vegetables.",
    "Slice the cooked chicken breast and place it on top of the cheese or vegetables.",
    "Cover the burger with the top half of the bun.",
    "Optional: Heat a pan with a little oil over medium heat.",
    "Place the assembled burger in the pan and cook for a few minutes on each side until the bun is toasted and the cheese has melted (if using).",
    "Remove the burger from the pan and let it cool slightly.",
    "Serve the chicken burger with additional condiments or toppings as desired.",
    "Enjoy your delicious chicken burger!\n\n\n\n\n"
  };

  int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

  displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void mysorepak(){
   const char* recipeName = "Mysore Pak";
        const char* ingredients[] = {
   "1 cup besan (gram flour)",
   "1 cup ghee (clarified butter)",
   "1 cup sugar",
   "1/4 cup water",
   "A pinch of cardamom powder",
   "Chopped nuts (optional)"  

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
         "Grease a square or rectangular tray or plate with ghee and set it aside.",
         "Heat a heavy-bottomed pan or kadai on medium heat and add ghee to it. Allow the ghee to melt completely.",
         "Reduce the heat to low and add besan to the melted ghee. Mix well to combine and ensure there are no lumps. Keep stirring continuously to prevent the besan from sticking to the bottom of the pan and burning. Cook the besan in ghee on low heat for about 15-20 minutes until it turns aromatic and changes color slightly to a light golden brown.",
         "In a separate saucepan, combine sugar and water. Heat the mixture over medium heat and stir until the sugar dissolves completely. Bring the mixture to a boil and continue boiling until it reaches a one-string consistency. ",
         "To check the consistency, take a small amount of the syrup between your thumb and forefinger, then gently separate them. If a single thread is formed, the syrup has reached the right consistency. If not, continue boiling for a little longer and check again.",
         "Once the sugar syrup reaches the desired consistency, add it slowly to the cooked besan and ghee mixture while stirring continuously. Be careful as the mixture may splutter.",
         "Keep stirring the mixture vigorously to incorporate the sugar syrup evenly into the besan mixture. Add the cardamom powder and continue stirring until the mixture starts to thicken and leaves the sides of the pan. This process will take about 5-10 minutes.",
         "At this stage, turn off the heat and immediately transfer the mixture to the greased tray or plate. Spread it evenly and smoothen the top with the back of a spoon. If desired, sprinkle chopped nuts on top and gently press them into the mixture.",
         "Allow the Mysore Pak to cool completely at room temperature for a couple of hours. Once cooled, cut it into square or diamond-shaped pieces.",
         "Mysore Pak is ready to be served. Store it in an airtight container at room temperature for up to a week.\n\n\n\n\n"
    };
    
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void samosa(){
   const char* recipeName = "Samosa";
        const char* ingredients[] = {
    "2 cup all purpose flour",
    "1 teaspoon cumin seeds",
    "1 teaspoon crushed ginger",
    "1 teaspoon raisins",
    "5 boiled potato",
    "1 teaspoon coriander powder",
    "1 teaspoon red chilli powder",
    "1 teaspoon kasoori methi leaves",
    "1 teaspoon carom seeds",
    "1/4 cup water",
    "2 cup refined oil",
    "1/2 teaspoon coriander seeds",
    "1 teaspoon green chilli",
    "1 teaspoon cashews",
    "1 teaspoon cumin powder",
    "1/2 teaspoon garam masala powder",
    "salt as required",
    "1 teaspoon coriander leaves",
    "2 tablespoon ghee",
    "1 handful raw peanuts",

    };
    
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
         "Saute cumin seeds for potato filling:To make delicious samosas at home, first, make the filling. Put a pan on medium flame and add 2 tsp oil in it. Once the oil is hot enough, add cumin seeds and allow them to crackle.",
         "Add spices and boiled potatoes and cook for a while:Now, add whole coriander seeds, ginger and green chilli. Saute for a minute and then add chopped cashews and raisins, peanuts if you like them, boiled and mashed potatoes, cumin powder, coriander powder, garam masala powder, red chilli powder, salt to taste, kasoori methi leaves, coriander leaves. Mix well and saute for 2 minutes. Your stuffing is ready!",
         "Prepare the dough for the Samosa:Now, to prepare the dough, take a mixing bowl and combine all-purpose flour along with carom seeds and salt. Mix and then add ghee and start kneading by adding a little water at a time. Ensure that you add water gradually and make a firm dough. A soft dough will not make your samosas crispy. Cover the dough with a damp muslin cloth and keep aside for about half an hour.",
         "Roll the dough in small puris and cut into half:Once done, roll out few small-sized balls from the dough. Flatten them further with the help of your palms and then with a rolling pin. Give them a round shape and cut in half. Now dip your hands in water, fold the edges of the semi-circle in order to give it a cone shape.",
         " Fill the semi-circle with potato filling and deep fry:Take the filling with the help of a spoon and stuff it in the cone. Seal the ends properly by pressing the edges lightly with your fingers. Then, heat oil in a pan and deep fry the samosas on low heat until they turn golden brown and crispy. Serve with tomato ketchup and green chutney. Enjoy it as a tea-time snack!\n\n\n\n\n"
        
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void puliyogare(){
   const char* recipeName = "Puliyogare";
        const char* ingredients[] = {
   "1 cup rice (preferably short-grain rice)",
   "1 small lemon-sized ball of tamarind",
   "3 tablespoons oil",
   "1 teaspoon mustard seeds",
   "1 teaspoon chana dal (split Bengal gram)",
   "1 teaspoon urad dal (split black gram)",
   "1/4 teaspoon asafoetida (hing)",
   "1/4 teaspoon turmeric powder",
   "1/4 cup peanuts",
   "2-3 dried red chilies",
   "1 tablespoon jaggery (optional)",
   "Salt to taste",
   "Curry leaves (a sprig)",
   "Coriander leaves (garnish)", 

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
         "Cook the rice according to the instructions on the packet. Once cooked, spread the rice on a large plate or tray and let it cool completely.",
         "Soak the tamarind in warm water for about 15 minutes. Squeeze out the pulp from the tamarind, removing any seeds or fibers. Set the tamarind pulp aside.",
         "In a dry pan, roast all the ingredients mentioned under Puliyogare Spice Mix except turmeric powder and asafoetida. Roast them on medium heat until they turn fragrant and start to change color slightly.",
         "Be careful not to burn them. Once roasted, let them cool and grind them into a fine powder. Add turmeric powder and asafoetida to the ground spice mix. Set it aside.",
         "Heat oil in a pan or kadai over medium heat. Add mustard seeds and let them splutter. Then add chana dal, urad dal, peanuts, dried red chilies, and curry leaves. Sauté them until the dals turn golden brown.",
         "Add the tamarind pulp to the pan and mix well. Cook the tamarind pulp on low heat for 5-7 minutes until the raw smell disappears.",
         "Add the prepared Puliyogare Spice Mix to the pan and mix well with the tamarind pulp. Cook for another 2-3 minutes, stirring continuously.",
         "Add jaggery (if using) and salt to taste. Mix well until the jaggery melts and blends into the mixture.",
         "Turn off the heat and add the cooled cooked rice to the pan. Gently mix the rice with the tamarind-spice mixture until all the rice grains are coated evenly.",
         "Garnish with chopped coriander leaves.\n\n\n\n\n"

    };
    
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

   displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void masalatea(){
   const char* recipeName = "Masala Tea";
        const char* ingredients[] = {
   "2 cups water",
   "2 cups milk",
   "2 teaspoons black tea leaves or 2 tea bags",
   "2-3 teaspoons sugar (adjust to taste)",
   "2-3 green cardamom pods, lightly crushed",
   "1-inch piece of cinnamon stick",
   "2-3 cloves",
   "1 small piece of fresh ginger, peeled and grated",
   "A pinch of ground black pepper (optional)",
   "A pinch of ground nutmeg (optional)",

    };

    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
         "In a saucepan, add water and bring it to a boil.",
         "Once the water boils, add the tea leaves or tea bags, crushed cardamom pods, cinnamon stick, cloves, and grated ginger to the saucepan. If you like, you can also add a pinch of ground black pepper and ground nutmeg for added flavor.",
         "Let the mixture simmer for about 2-3 minutes on medium heat to allow the flavors of the spices to infuse into the tea.",
         "Add milk to the saucepan and continue simmering for another 3-4 minutes until the tea becomes a rich golden color and the flavors blend well.",
         "At this stage, add sugar to the tea and stir well until it dissolves completely. Adjust the amount of sugar according to your taste preferences.",
         "Turn off the heat and strain the tea using a fine mesh strainer into teacups or a teapot.",
         "Masala tea is now ready to be served. Enjoy it hot and aromatic.\n\n\n\n\n"

    };
    
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void pizza(){
   const char* recipeName = "Pizza";
        const char* ingredients[] = {
   "2 cup all purpose flour",
   "100 ml tomato ketchup",
   "1 tomato",
   "2 onion",
   "1 teaspoon chilli flakes",
   "1 teaspoon baking powder",
   "1 teaspoon sugar",
   "100 gm processed cheese",
   "4 mushroom",
   "1/2 capsicum (green pepper)",
   "1 teaspoon oregano",
   "1/2 cup mozzarella",
   "1 tablespoon dry yeast",
   "water as required",

    };
    
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
         "Prepare the pizza dough:Take a dough kneading plate and add all-purpose flour to it. Next, add salt and baking powder in it and sieve the flour once. Then, make a well in the centre and add 1 teaspoon of oil to it. On the other hand, take a little warm water and mix the yeast in it along with 1 teaspoon of sugar. Mix well and keep aside for 10-15 minutes. The yeast will rise in the meantime. Once the yeast has risen, add it to the flour knead the dough nicely using some water. Keep this dough aside for 4-6 hours. Then knead the dough once again. Now, the pizza dough is ready.",
         "Prepare the pizza dough:Take a dough kneading plate and add all-purpose flour to it. Next, add salt and baking powder in it and sieve the flour once. Then, make a well in the centre and add 1 teaspoon of oil to it. On the other hand, take a little warm water and mix the yeast in it along with 1 teaspoon of sugar. Mix well and keep aside for 10-15 minutes. The yeast will rise in the meantime. Once the yeast has risen, add it to the flour knead the dough nicely using some water. Keep this dough aside for 4-6 hours. Then knead the dough once again. Now, the pizza dough is ready.",
         "Chop all the vegetables for the pizza:Now, wash the capsicum and slice it thinly in a bowl. Then, peel the onions and cut thin slices of it as well in another bowl. And finally, cut tomatoes and mushrooms in the same manner. However, make sure that those tomatoes have less juice in them. Once all the veggies are done, Now, grate the processed and mozzarella cheese in separate bowls.",
         "Spread the sauce and veggies on the base:Then, take the fresh pizza base and apply tomato ketchup all over. Spread half the processed cheese all over the base and evenly put the veggies all across the base. Once you have put all the veggies, put a thick layer of mozzarella cheese.",
         "Bake the pizza at 250 degree Celsius for 10 minutes:Put this pizza base in a baking tray and place it inside the oven. Let the pizza bake 10 minutes at 250 degree Celsius. Once done, take out the baking tray and slice the pizza. Sprinkle oregano and chilli flakes as per your taste and serve hot. (Note: Make sure that the oven is preheated at 250 degree Celsius for 5 minutes at least.)",
         "Serve the pizza with sauce and red chilli power and enjoy!\n\n\n\n\n"
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void chocolateChipCookies(){
   const char* recipeName = "Chocolate Chip Cookies";
    const char* ingredients[] = {
        "2 1/4 cups all-purpose flour",
        "1 teaspoon baking soda",
        "1/2 teaspoon salt",
        "1 cup unsalted butter, softened",
        "3/4 cup granulated sugar",
        "3/4 cup packed brown sugar",
        "1 teaspoon vanilla extract",
        "2 large eggs",
        "2 cups semisweet chocolate chips",
        "1 cup chopped nuts (optional)"
    };
  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
        "Preheat the oven to 375°F (190°C).",
        "In a small bowl, combine the flour, baking soda, and salt. Set aside.",
        "In a large bowl, cream together the softened butter, granulated sugar, and brown sugar until smooth.",
        "Beat in the vanilla extract and eggs, one at a time, until well blended.",
        "Gradually add the dry ingredients to the wet ingredients and mix until just combined.",
        "Stir in the chocolate chips and nuts (if using).",
        "Drop rounded tablespoons of dough onto ungreased baking sheets.",
        "Bake for 9 to 11 minutes, or until golden brown around the edges.",
        "Allow the cookies to cool on the baking sheets for a few minutes before transferring them to wire racks to cool completely.",
        "Enjoy the delicious homemade chocolate chip cookies!\n\n\n\n\n"
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void eggcurry(){
    const char* recipeName = "Egg Curry";
     const char* ingredients[] = {
        "4 to 5 boiled eggs",
        "2 tablespoons oil",
        "1 teaspoon ghee",
        "2 cups onions",
        "1 cup tomatoes,1 cup green chillies",
        "1 teaspoon ginger garlic paste",
        "1/2 teaspoon salt",
        "1 to 1.5 cups water",
        "1 tablespoon coriander leaves",
        "1/4 kasuri methi",
        "1/2 teaspoon sugar",
        "4 tablespoons cream",
        "1 teaspoon red chilli powder",
        "1 teaspoon garam masala",
        "1/8 teaspoon turmeric powder",
     };
 int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);
  
    const char* instructions[] = {
        "Fine chop or puree the onions. If you prefer to puree the onions, first boil diced onions in 2 cups of water for 4 mins until transparent. Drain the water and puree them in a blender.",
        "Refer notes below to boil eggs perfectly. Wipe dry the boiled eggs or air dry until moist free. Prick each egg with a fork 2 to 3 times. We do this so the eggs don't splatter oil and burst in the pan while frying.",
        "Heat 1 teaspoon ghee or oil in a nonstick pan & Fry the eggs until golden & slightly blistered. Remove the eggs to a plate & optionally sprinkle 2 to 3 pinches each of chilli powder & garam masala.",
        "Heat 2 tbsp oil and add bay leaf, cardamoms and cinnamon.",
        "When they begin to sizzle, add onions & green chilli. Saute onions until golden and the raw smell has almost gone.",
        "Add ginger garlic paste and saute until the raw smell goes off, for about a minute.",
        "Then add tomatoes and saute well until the mixture turns mushy",
        "Next add red chili powder, garam masala, coriander powder, turmeric and salt. Saute everything well until a nice aroma comes out & the mixture leaves the sides of the pan.",
        "Pour water 1 to 1/4 cups water and mix well. Cover and cook until the curry thickens and you see traces of oil over the curry.",
        "Taste test and adjust salt. If required add sugar. Add the fried eggs and kasuri methi. Mix and simmer for a while. Sprinkle chopped coriander leaves. Serve punjabi egg curry with roti or naan or plain rice.",
        "Optional Pour 3 to 4 tbsps cream or Blend together 10 cashews with half cup water to smooth milk. Pour it to the curry. Cook covered for 2 to 3 mins until the curry turns thick.\n\n\n\n\n",
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void paneerbuttermasala(){
    const char* recipeName = "Paneer Butter Masala";
     const char* ingredients[] = {
        "FOR PANEER BUTTER MASALA:",
          "1.5  to 2 tablespoon Butter",
          "1.5 teaspoon ginger garlic paste",
          "1/2 cup water",
          "200 to 300 grams paneer",
          "1 teaspoon kasuri methi",
          "3 tablespoon cream",
          "2 table spoon coriander leaves",

        "FOR GRAVY OR SAUCE:",
          "1 tablespoon oil",
          "2 green cardomoms",
          "1 cup onions",
          "2 cup tomatoes",
          "3/4 teaspoon salt",
          "3/4 teaspoon sugar",
          "12 to 14 cashew nuts",
          "1 teaspoon red chilli powder",
          "1 teaspoon garam masala",
          "1 teaspoon coriander powder",
          "1 cup water",
     };
  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);
  
    const char* instructions[] = {
        "Heat oil in a pan. Add green cardamoms & onions. Stir fry until they turn transparent to light pink. (If you do not have ginger garlic paste for this recipe, you may add chopped ginger and garlic along with onions)",
        "Next add tomatoes & salt. Saute for 3 minutes. Cover and cook till the onion & tomatoes turn soft & completely mushy.",
        "Add garam masala, coriander powder, cashew nuts, red chili powder & sugar",
        "Stir fry this till the onion tomato masala turns aromatic. This takes 2 to 3 minutes.",
        "Turn off the stove & cool this completely.",
        "Transfer to a blender & pour water. Blend to a really silky smooth puree. If it is not smooth, filter it through a strainer to another bowl. Set this aside.",
        "Heat butter in the same pan. Optional - When the butter melts, add cinnamon, cloves, green cardamoms & bay leaf:",
        "Reduce the flame to low, saute ginger garlic paste for a minute until it smells aromatic.",
        "Stir in the blended onion tomato puree. Taste test your puree & optionally you may add more red chili powder for a deeper color",
        "Pour more water & mix well. Bring it to a rolling boil.",
        "Pour more water & mix well, Bring it to a rolling boil,Reduce the heat to medium and cook covered until the gravy cooks down to a thicker consistency. Keep stirring every few minutes.",
        "You know the gravy is done when it turns thick and traces of fat is visible on the gravy. Taste test and add more salt or garam masala if needed.",
        "Lower the flame completely, add cubed paneer. Take kasuri methi to your palm and crush it in between your palms Sprinkle it",
        "Mix & cook covered on a low heat for 2 minutes. Turn off and pour cream (save some for gamish) & stir.",
        "Transfer paneer butter masala to a serving bowl. Garnish with more cream & chopped coriander leaves. Serve this with butter naan or jeera rice.\n\n\n\n\n",
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void vegetableStirFry() {
    const char* recipeName = "Vegetable Stir-Fry";
    const char* ingredients[] = {
        "2 tablespoons vegetable oil",
        "2 cups mixed vegetables (e.g., bell peppers, broccoli, carrots, snap peas)",
        "1 small onion, sliced",
        "2 cloves of garlic, minced",
        "1 tablespoon soy sauce",
        "1 tablespoon oyster sauce",
        "1/2 teaspoon sesame oil",
        "Salt and pepper to taste"
    };
    int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
        "Heat the vegetable oil in a large skillet or wok over high heat.",
        "Add the sliced onion and minced garlic. Stir-fry for 1-2 minutes until fragrant.",
        "Add the mixed vegetables to the skillet and stir-fry for 3-4 minutes until they are crisp-tender.",
        "In a small bowl, whisk together the soy sauce, oyster sauce, sesame oil, salt, and pepper.",
        "Pour the sauce mixture over the vegetables and stir to coat evenly.",
        "Continue stir-frying for an additional 1-2 minutes until the sauce thickens slightly and coats the vegetables.",
        "Remove from heat and serve the vegetable stir-fry as a side dish or over cooked rice.",
        "Enjoy your delicious vegetable stir-fry!.\n\n\n\n\n",
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void frenchfries(){
   const char* recipeName = "French Fries";
    const char* ingredients[] = {
        "3 Russet Potatoes (or Idaho or Maris piper)",
        "1 ½ cupsOil (peanut, canola or vegetable oil)",
        "¾ teaspoonGarlic Powder",
        "¾ teaspoonOnion Powder",
        "½ teaspoonPaprika (or 1/4 teaspoon red chili powder)",
        "¼ teaspoonSalt (adjust to taste)",
        "1 teaspoonOregano",
        "½ teaspoonRed Chilli Flakes (optional)",
        "¼ teaspoonBlack Pepper (ground, optional)",
    };
  int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

    const char* instructions[] = {
       "Once you are done with the rinsing process, it's time to fry them",
       "Take a medium-sized pan and add your preferred cooking oil. Heat the oil till you can see small bubbles on the side",
       "Now, add the sliced potatoes to the pan.",
       "Make sure you don't overcrowd the pan so that they are not stacked on top of each other.",
       "Fry them for 5-6 minutes or until they are light golden in colour.",
       "Take them out and allow them to cool down to normal room temperature.",
       "Return the fries into the pan and fry them for 2-3 minutes or until crispy and dark golden brown in colour.",
       "Place fries on paper towel to absorb excess oil, if any.",
       "Sprinkle salt over the fries.",
       "Fries will be crispy on the outside and soft on the inside.\n\n\n\n\n",
    };
    int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

    displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void chickenNoodlesRecipe() {
const char* recipeName = "Chicken Noodles";
const char* ingredients[] = {
"200g chicken breast, thinly sliced",
"200g noodles",
"2 tablespoons vegetable oil",
"1 onion, thinly sliced",
"2 cloves garlic, minced",
"1 carrot, julienned",
"1 bell pepper, thinly sliced",
"1 cup cabbage, shredded",
"2 tablespoons soy sauce",
"1 tablespoon oyster sauce",
"1 teaspoon sesame oil",
"Salt and pepper to taste",
"Spring onions for garnishing"
};

int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

const char* instructions[] = {
"Cook the noodles according to package instructions. Drain and set aside.",
"In a large pan or wok, heat vegetable oil over high heat.",
"Add the chicken slices and stir-fry until cooked through. Remove from the pan and set aside.",
"In the same pan, add more oil if needed and sauté the onion and garlic until fragrant and translucent.",
"Add the carrot, bell pepper, and cabbage. Stir-fry for a few minutes until the vegetables are tender-crisp.",
"Return the cooked chicken to the pan.",
"Add the cooked noodles to the pan and toss everything together.",
"In a small bowl, mix together soy sauce, oyster sauce, sesame oil, salt, and pepper.",
"Pour the sauce mixture over the noodles and vegetables. Stir-fry for a few more minutes until everything is well-coated and heated through.",
"Garnish with spring onions.",
"Serve hot and enjoy your delicious chicken noodles!\n\n\n\n\n"
};

int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

void kulfiRecipe() {
const char* recipeName = "Kulfi";
const char* ingredients[] = {
"2 cups full-fat milk",
"1/2 cup condensed milk",
"1/4 cup sugar",
"1/4 cup chopped nuts (such as pistachios, almonds)",
"1/2 teaspoon cardamom powder",
"A pinch of saffron strands",
"1 tablespoon rose water (optional)"
};

int numIngredients = sizeof(ingredients) / sizeof(ingredients[0]);

const char* instructions[] = {
"In a thick-bottomed pan, heat the milk over medium heat.",
"Stir occasionally to prevent sticking and burning.",
"Bring the milk to a boil and then reduce the heat to low.",
"Simmer the milk, stirring frequently, until it reduces to about half its original volume.",
"Add condensed milk, sugar, chopped nuts, cardamom powder, and saffron strands to the pan.",
"Continue to cook the mixture on low heat, stirring continuously, until it thickens to a custard-like consistency.",
"Remove the pan from heat and let the mixture cool down.",
"Stir in rose water (if using) into the cooled mixture.",
"Pour the kulfi mixture into kulfi molds or small airtight containers.",
"Cover the molds with aluminum foil or lids to prevent freezer burn.",
"Place the molds in the freezer and let the kulfi set for at least 6 hours or overnight.",
"Once the kulfi is completely frozen, remove from the molds by running them under warm water for a few seconds.",
"Serve the delicious kulfi on a plate or in a bowl.",
"Enjoy the rich and creamy kulfi!\n\n\n\n\n"
};

int numInstructions = sizeof(instructions) / sizeof(instructions[0]);

displayRecipe(recipeName, ingredients, numIngredients, instructions, numInstructions);
}

//total recipe list 
//displays all the recipies
void recipelist(){
    printf("1.chicken pasta          \t");
    printf("2.chicken biryani        \t");
    printf("3.Panipuri               \n");
    printf("4.Masala tea             \t");
    printf("5.Puliyogare             \t");
    printf("6.Mysorepak              \n");
    printf("7.Chicken Burger         \t");
    printf("8.Chicken Sandwich       \t");
    printf("9.Coffee                 \n");
    printf("10.MuttonPaya            \t");
    printf("11.DoubleKaMeetha        \t");
    printf("12.FishFry               \n");
    printf("13.Gulab Jamun           \t");
    printf("14.Pongal                \t");
    printf("15.Chocolate Brownie     \n");
    printf("16.Masala Dosa           \t");
    printf("17.Korean FriedChicken   \t");
    printf("18.Rasmalai              \n");
    printf("19.Vegetable Manchuria   \t");
    printf("20.Kitkat Milkshake      \t");
    printf("21.Samosa                \n");
    printf("22.Pizza                 \t");
    printf("23.Frenchfries           \t");
    printf("24.Chocolate Chip Cookies\n");
    printf("25.Vegetable StirFry     \t");
    printf("26.Paneer Butter Masala  \t");
    printf("27.Eggcurry              \n");
    printf("28.chicken Noodles       \t");
    printf("29.Kulfi                 \n");

   
}
//veg recipe list
//displays veg rcipies
void vegrecipelist(){
    printf("1.Panipuri               \t");
    printf("2.Puliyogare             \n");
    printf("3.Masala Dosa           \t");
    printf("4.Vegetable Manchuria   \n");
    printf("5.Samosa                \t");
    printf("6.Pizza                 \n");
    printf("7.Frenchfries           \t");
    printf("8.Vegetable StirFry     \n");
    printf("9.Paneer Butter Masala  \t");
}
//function to select a recipe among veg recipies 
//functions runs using taken input from the user and switchcase statements
void vegrecipeselect(){

  printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE\n");
    int b;
    scanf("%d",&b);
    system("clear");
    switch (b)
    {
    
    case 1: panipuri();
              break;
    case 2: puliyogare();
              break;
    case 3:  masalaDosa();
              break;
    case 4:  vegetablemanchuria();
              break;
   case 5:  samosa();
              break;
    case 6:  pizza();
              break;
    case 7:  frenchfries();
              break;
    case 8:  vegetableStirFry();
              break;
    case 9:  paneerbuttermasala();
              break;
   default:  printf("NOT CORRECT INPUT !!");
              break;                                                           

    }


}
//function to display nonveg recipies
void nonvegrecipe(){
      printf("1.chicken pasta          \t");
      printf("2.chicken biryani        \t");
      printf("3.Chicken Burger         \n");
      printf("4.Chicken Sandwich       \t");
      printf("5.MuttonPaya            \t");
      printf("6.FishFry               \n");
      printf("7.Korean FriedChicken   \t");
      printf("8.Eggcurry              \t");
      printf("9.Chicken Noodles       \n");


}
void nonvegselect()
{
  printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE\n");
    int b;
    scanf("%d",&b);
    system("clear");
    switch (b)
    {
    case 1:  chickenpasta();
              break;
    case 2:  chickenbiryani();
              break;
    
    case 3:  chickenBurger();
              break;
    case 4:  chickenSandwich();
              break;
   
    case 5:  muttonPaya();
              break;
    
    case 6:  fishFry();
              break;
   
    case 7:  koreanFriedChicken();
              break;
    
    case 8:  eggcurry();
              break;
    case 9:  chickenNoodlesRecipe();
              break; 
    
    default:  printf("NOT CORRECT INPUT !!");
              break;                                                           

    }
}
    void desertsrecipe(){
    
    printf("1.Mysorepak              \t");
    printf("2.Coffee                 \t");
    printf("3.DoubleKaMeetha         \n");
    printf("4.Gulab Jamun            \t");
    printf("5.Pongal                 \t");
    printf("6.Chocolate Brownie      \n");
    printf("7.Rasmalai              \t");
    printf("8.Kitkat Milkshake      \t");
    printf("9.Chocolate Chip Cookies\t");
    printf("10.Kulfi                 \n");
    printf("11.Masala Tea            \n");
}
void desertsselect(){

  printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE\n");
    int b;
    scanf("%d",&b);
    system("clear");
    switch (b)
    {
    
   case 1:  mysorepak();
              break;
   case 2:  coffee();
              break;
   case 3:  doubleKaMeetha();
              break;
   case 4:  gulabJamun();
              break;
    case 5:  pongal();
              break;
    case 6:  chocolateBrownie();
              break;
    case 7:  rasmalai();
              break;
    case 8:  kitkatmilkshake ();
              break;
   case 9: chocolateChipCookies();
              break;
   case 10:  kulfiRecipe();
              break;
   case 11:  masalatea();
              break;

    default:  printf("NOT CORRECT INPUT !!");
              break;                                                           

    }

}
void recipeselect(){
    printf("ENTER THE NUMBER OF THE RECIPE YOU WANT TO MAKE\n");
    int b;
    scanf("%d",&b);
    system("clear");
    switch (b)
    {
    case 1:  chickenpasta();
              break;
    case 2:  chickenbiryani();
              break;
    case 3: panipuri();
              break;
    case 4: masalatea();
              break;   
    case 5: puliyogare();
              break;
    case 6:  mysorepak();
              break;
    case 7:  chickenBurger();
              break;
    case 8:  chickenSandwich();
              break;
    case 9:  coffee();
              break;
    case 10:  muttonPaya();
              break;
    case 11:  doubleKaMeetha();
              break;
    case 12:  fishFry();
              break;
    case 13:  gulabJamun();
              break;
    case 14:  pongal();
              break;
    case 15:  chocolateBrownie();
              break;
    case 16:  masalaDosa();
              break;
    case 17:  koreanFriedChicken();
              break;
    case 18:  rasmalai();
              break;
    case 19:  vegetablemanchuria();
              break;
    case 20:  kitkatmilkshake ();
              break;
    case 21:  samosa();
              break;
    case 22:  pizza();
              break;
    case 23:  frenchfries();
              break;
    case 24: chocolateChipCookies();
              break;
    case 25:  vegetableStirFry();
              break;
    case 26:  paneerbuttermasala();
              break;
    case 27:  eggcurry();
              break;
    case 28:  chickenNoodlesRecipe();
              break; 
    case 29:  kulfiRecipe();
              break;
    default:  printf("NOT CORRECT INPUT !!");
              break;                                                           

    }
}
int main() {
    int a;
    printf("\t\t---------------------------\n");
    printf("\t\tHELLO WELCOME TO FOOD GUIDE\n");
    printf("\t\t---------------------------\n");
//do while loop to take initial input from the menu 
do{

printf("                          1.RECIPIES\n");
printf("                          2.VEG RECIPES\n");
printf("                          3.NON-VEG RECIPES\n");
printf("                          4.DESERTS\n");
printf("                          5.Exit\n");
printf("ENTER 1 : CHECK FOOD RECIPIES\t\tENTER 2: CHECK VEG RECIPES\nENTER 3 :CHECK NON-VEG RECIPES\t\tENTER 4 :CHECK DESERTS\nENTER 5: EXIT\n");

scanf("%d",&a);
fflush(stdin); // clears the buffer from scan function
system("clear"); // clears the previous code from the console
if (a==1)
{
    printf("HERE ARE SOME RECIPIES :\n");
    recipelist(); //function call
    recipeselect();
    for (int i = 0; i < 40; i++)
    {
         printf("* ");
    }
    printf("*\n\n\n\n\n");
   
}
if (a==2)
  {  printf("VEG RECIPES :\n");
     vegrecipelist();
     vegrecipeselect();
     for (int i = 0; i < 40; i++)
    {
         printf("* ");
    }
     printf("*\n\n\n\n\n");
  }
if (a==3)
{
    printf("NON-VEG RECIPES :\n");
    nonvegrecipe();
    nonvegselect();
    for (int i = 0; i < 40; i++)
    {
         printf("* ");
    }
     printf("*\n\n\n\n\n");
    
}
if (a==4)
{
    printf("DESERTS :\n");
    desertsrecipe();
    desertsselect();
    for (int i = 0; i < 40; i++)
    {
         printf("* ");
    }
     printf("*\n\n\n\n\n");
    
}

if(a==5){
  printf("***THANKS FOR USING FOOD GUIDE***");
}
  
      }while(a!=5);//loop will terminiate if a=5 which means exit 


    return 0;
}
