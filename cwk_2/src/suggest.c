#include <stdio.h>

#include "information.h"

//Selects a recipe based on the users profile.

void suggest(profile user, int difficulty){
    switch (difficulty)
    {
        case 1 :
        printf("You wanted something easy...\n");
        if (user.dessert==true){
          printf("You're feeling like a dessert...\n");
            if (user.vegan==true || user.dairy==false || user.eggs==false){
                if (user.hot==true){
                    printf("My recommendation would be dark chocolate chip cookies. Use coconut oil instead of butter.\n");
                }
                else{
                    printf("I'd suggest an Eton mess, use coconut yoghurt and fresh raspberries.\n");
                }
            }
            else{
                if (user.vegan==true || user.dairy==false || user.eggs==false){
                if (user.hot==true){
                    printf("A quick recommendation would be a steamed pudding, you can cook this in a microwave using cling film if you really don't want to wait that long.\n");
                }
                else{
                    printf("I'd suggest an ice-cream sundae. There's a lot of fruits you can use in this from bananas to mangos.\n");
                }
            }
        }
        }
        if (user.lunch==true){
          printf("You wanted something for lunch...\n");
            if(user.meat==true){
                if(user.spicy==true){
                    printf("If you want a quick and easy lunch, I'd suggest a sandwich. I'd also recommend using salami instead of the standard wafer ham or chicken.\n");
                      if (user.gluten==false){
                        printf("Because of your allergies, you could either use a gluten free substitute or just scrap the bread, cut the meat into pieces and have a salad.\n");
                      }
                }
                else{
                    printf("You can't get easier than a sandwich, mix things and add something different like avocado or use a tortilla wrap instead of bread.\n");
                    if (user.gluten==false){
                      printf("Because of your allergies, have an open sandwich and treat it like a salad, I would recommend attempting to make your own vinaigrette if you have any fancy oil.\n ");
                    }
                }
            }
        else{
            if(user.vegan==true){
                if(user.spicy==true){
                    printf("If you have left over rice, I'd recommend a mixed vegetable stir fry, just remember that things like cabbage take longer to cook, so put it in the pan first.\nThe secret here lies in the sauce.\n");
                }
                else{
                    printf("I'd recommend a couscous salad, couscous cooks in under ten minutes by just adding boiling water making this an easy dish\nPersonally I use tomatoes and raisins, but this is a dish to experiment with.");
                    if (user.nuts!=false){
                      printf("I don't add them, but I know nuts are usually included in this dish.\n ");
                    }
                    if (user.gluten==false){
                      printf("It should be known that couscous usually contains gluten, therefore you may want to use a different form of pasta and use bell peppers and tomatoes.\n ");
                    }
                }
            }
            else{
                if(user.fish==true){
                    if(user.spicy==true){
                    printf("A jacket potato's really easy, although if you decide to cook it in the oven, it'll take a long time.\nI'd personally recommend tuna with lots of pepper, and Tabasco sauce.\n");
                    if (user.eggs!=false){
                      printf("Between not watching my weight and liking the taste, I mix stupid amounts of mayonnaise with my tuna, I'd also recommend that.\n ");
                    }
                }
                else{
                  printf("A jacket potato's really easy, although if you decide to cook it in the oven, it'll take a long time.\nI usually use baked beans and mushrooms as a filling.\n");
                  if (user.eggs!=false){
                    printf("Tuna mayonnaise is also a favourite of mine.\n ");
                  }
                }
                }
                else{if(user.spicy==true){
                  printf("If you have left over rice, I'd recommend a stir fry, just remember that things like cabbage take longer to cook, so put it in the pan first.\nThis lunch works fine with or without substitute meats.\n");
                }
                else{
                    printf("A cheesy potato really fills me up and can be cooked in the microwave, baked beans are optional, I usually don't eat them but make an exception for this meal.\n");
                    if (user.dairy!=false){
                      printf("I'm personally against adding massive heaps of grated cheese to food as it overtakes the flavour of what you're eating, this situation is different.\n ");
                    }
                }
                }
            }
        }
        }
        if (user.dinner==true){
          printf("Something apropriate for dinner...\n");
            if(user.meat==true){
                if(user.spicy==true){
                    printf("I think chilli con carne would be a great dinner. Please be careful when adding crushed chilli, as a heavy hand is punished.\n");
                }
                else{
                    printf("If you want to impress, chicken risotto looks impressive, but is an easy dish that only requires and single pot.\n");
                    if (user.dairy==true){
                      printf("When looking for recipes, please replace any type of cream with cream of mushroom soup instead, you'll get a richer risotto as a result.\n ");
                    }
                }
            }
        else{
            if(user.vegan==true){
                if(user.spicy==true){
                    printf("Sweet potato quesadillas are quite filling, it's basically a grilled tortilla sandwich.\nThe sauce you decide to use will play a big factor in the end result.\n");
                    if (user.gluten==false){
                      printf("Needless to say, please don't use flour tortillas.\n ");
                    }
                }
                else{
                    printf("You should try a soba noodle salad. Make sure to cool them with running cold water before adding to the salad.\n");
                    if (user.gluten==false){
                      printf("Soba is a buckwheat noodle and therefore use mung bean noodles instead, it should also be noted that traditional soy sauce also contains gluten.\n ");
                    }
                }
            }
            else{
                if(user.fish==true){
                    if(user.spicy==true){
                    printf("Cod and chips, make your own stake cut chips by shallow frying them in oil.\nIf the thought of frying raw potato sounds like a recipe for a fire, use frozen chips.\n");
                    if (user.gluten==false){
                      printf("Needless to say, please don't use flour tortillas.\n ");
                    }
                }
                else{
                    printf("I'd recommend a tuna pasta bake, it could also serve as lunch for the next day if you make extra.\n");
                }
                }
                else{
                  if(user.spicy==true){
                    printf("I'd recommend mac and cheese, you'd have to look up some recipes and decide what sounds good for you, as I know of some unusually hot recipes out there.\n");
                    if (user.dairy==false){
                      printf("Some of these recipes are also vegan and not too difficult.\n ");
                    }
                }
                else{
                    printf("If you're willing to take a little extra time I'd recommend mac and cheese. While it's not the fastest meal, it's not very complex, just don't leave it in the oven for too long.\n");
                    if (user.dairy==false){
                      printf("Of course I'm talking about the vegan version of the meal.\n It's still called mac and cheese though.");
                    }
                }
                }
            }
        }
        }
        break;

        case 2 :
        printf("You can manage yourself in the kitchen...\n"); //remove in final ver.
        if (user.dessert==true){
          printf("A good dessert...\n");
            if (user.vegan==true || user.dairy==false || user.eggs==false){
                if (user.hot==true){
                    printf("I'd suggest an apple pie. If you prepare the apples yourself, you can add a lot of spices to it than usual, giving a boost of flavour.\n");
                }
                else{
                    printf("A bit of a tricky one to pull off due to careful measurements, but I'd recommend you try a strawberry sorbet.\n");
                }
            }
            else{
                if (user.vegan==true || user.dairy==false || user.eggs==false){
                if (user.hot==true){
                    printf("I'd personally recommend a jam roly-poly. Try mixing different types of jam to get an interesting flavour.\n");
                }
                else{
                    printf("This one's a little tricky but I'd recommend trying your hand at a tiramisu. it contains coffee, so don't eat it before bed!\n");
                }
            }
        }
        }
        if (user.lunch==true){
          printf("Something sutiable for your next lunch...\n");
            if(user.meat==true){
                if(user.spicy==true){
                    printf("I'd suggest a spicy Spanish omelette with chorizo, I'm rather fond of an omelette for lunch.\n");
                    if (user.eggs==false){
                      printf("Look up gram flour or semolina to make this without needing eggs.\n ");
                    }
                }
                else{
                    printf("I'd recommend a ham and mushroom omelette, although feel free to change what you put in it.\n ");
                    if (user.dairy!=false){
                      printf("I'd also like to recommend loading it up with cheese.\n");
                    }
                    if (user.eggs==false){
                      printf("They say you can't make an omelette without breaking some eggs. They're wrong, there's substitutes.");
                    }
                }
            }
        else{
            if(user.vegan==true){
                if(user.spicy==true){
                    printf("So without eggs it's technically not an omelette, but I'd recommend a spicy potato and onion one. Things like rice flour or semolina and water can replace the egg.\n");
                }
                else{
                    printf("Using either gram flour, rice flour or semolina, it is possible to create a mushroom and spinach omelette, treat yourself.\n");
                }
            }
            else{
                if(user.fish==true){
                    if(user.spicy==true){
                    printf("I think a spicy tuna and bell pepper omelette would make a great lunch.\n");
                    if (user.eggs==false){
                      printf("Some people would argue this next tip would mean it's not actually an omelette: use something like rice flour or semolina instead of egg.\n");
                    }
                }
                else{
                    printf("I'd recommend an omelette, something like anchovies and tomatoes would go down good\n");
                    if (user.eggs==false){
                      printf("You don't need to break eggs to make an omelette, use rice flour or gram flour.\n");
                    }
                }
                }
                else{if(user.spicy==true){
                   printf("I'd recommend trying your hand at a black bean burger. Spice it with chilli sauce, cumin, garlic and chilli powder.\n");
                }
                else{
                    printf("I would recommend a veggie burger, but the question is would you make your own or buy one? Would you also make a salad or chips to go with it?\n");
                }
                }
            }
        }
        }
        if (user.dinner==true){
          printf("You made it clear that a dinner is what you want...\n");
            if(user.meat==true){
                if(user.spicy==true){
                    printf("I'd recommend a smoky BBQ chicken skewers with either rice or salad. Remember to marinate the chicken before cooking it.\n");
                }
                else{
                    printf("My suggestion would be a beef stew. While the method of cooking has been trivialised by using a slow cooker, figuring out the right vegetables and herbs to add is were the challenge comes from.\n");
                }
            }
        else{
            if(user.vegan==true){
                if(user.spicy==true){
                    printf("I'd suggest a Mediterranean tofu and vegetable pastie. I'd suggest making your own puff pasty for this, but pre-made sheets also work just fine. \nMediterranean vegetables include olives, mushrooms, red pepper and spinach.\n");
                }
                else{
                    printf("My recommendation is a roast vegetable socca. By using gram flour, water and oil you can make a pizza base like flat bread known as socca. Good topping choices include sun-dried tomatoes and yellow peppers.\n");
                }
            }
            else{
                if(user.fish==true){
                    if(user.spicy==true){
                    printf("I'd recommend a white fish curry. Serve it with basmati rice and make as mild or spicy as you want. The size you decide to cut the fish in the dish will make quite the difference.\n");
                    if (user.gluten!=false){
                      printf("I'd also recommend naan bread with either the rice or salad.\n");
                    }
                }
                else{
                    printf("I'd recommend a seared tuna steak. Use Cajun seasoning and cook until blackened (or as much as you want to it be cooked). I'd pair the steaks with either a salad or a bed of rice.\n");
                }
                }
                else{if(user.spicy==true){
                    printf("My suggestion is a chickpea curry. Remember to cook the onions first for flavour and the chickpeas last. Make this as spicy as you can manage.\n");
                }
                else{
                    printf("I'd suggest trying a vegetable paella. This dish can use most vegetables like onions, courgettes, carrot and peas so it offers a lot of variation.\n");
                }
                }
            }
        }
        }
        break;

        case 3 :
        printf("No holds barred now...\n"); //remove in final ver.
        if (user.dessert==true){
          printf("You can make any desset with your skills...\n");
            if (user.vegan==true || user.dairy==false || user.eggs==false){
                if (user.hot==true){
                    printf("I'd recommend brownies. Vegetable oil can be replaced by coconut oil to give your brownies an exotic twist.\n");
                }
                else{
                    printf("This is an interesting suggestion, a cheesecake. The crust is made out of melted coconut oil and rolled oats and the top is coconut milk, almond milk and banana.\n");
                }
            }
            else{
                if (user.vegan==true || user.dairy==false || user.eggs==false){
                if (user.hot==true){
                    printf("My recommendation is a chocolate molten cake. Please be careful with the hot filling, as it can burn you. \n");
                }
                else{
                    printf("I'd recommend a berry trifle. This takes some time to chill, so make sure you prepare it well in advance.\n");
                }
            }
        }
        }
        if (user.lunch==true){
          printf("Something a masterchief would cook for lunch...\n");
            if(user.meat==true){
                if(user.spicy==true){
                    printf("My recommendation would be a quiche. As this recipe takes around one hour from start to finish, my advice would be to start cooking before you want to eat.\n");
                    if (user.eggs==false){
                      printf("Look up gram flour or semolina to make this without needing eggs.\n ");
                    }
                }
                else{
                    printf("While it takes longer to cook that other lunches, I'd recommend a quiche. Any kind of cake tin or small roasting tray can be used to cook it, as long as you use grease-proof paper.\n");
                    if (user.eggs==false){
                      printf("You can replace eggs in the recipes with gram flour, rice flour or semolina mixed with water.\n ");
                    }
                }
            }
        else{
            if(user.vegan==true){
                if(user.spicy==true){
                    printf("If you're up for some baking, than you should try your hand with chilli cornbread. Talking of hands, make sure you wash your hands before touching your face after handling chilli.\n");
                    if (user.gluten==false){
                      printf("Remember to check the gluten content of the flour you decide to use for this.\n");
                    }
                }
                else{
                    printf("I'd suggest a courgette and carrot spaghetti. While this originally uses a tomato based sauce, if you think about replacing the carrots with something else, you can consider an oil based sauce instead.\n");
                }
            }
            else{
                if(user.fish==true){
                    if(user.spicy==true){
                    printf("I bit of more expensive option, but I'd recommend red pepper salmon with pasta. While salmon fillets are not the cheapest, the red pepper sauce that will top the fsh and pasta is quite unique.\n");
                }
                else{
                    printf("I'd recommend a smoked mackerel and mushroom risotto. The mackerel really adds a lot to the flavour to the risotto, any kind of fish will work.\n");
                }
                }
                else{if(user.spicy==true){
                    printf("My suggestion would be a spinach lasagne. Spinach is only a guideline here, feel free to experiment with different vegetables.\n");
                    if (user.dairy!=false){
                      printf("You could also replace boring cheddar with more interesting cheeses to dramatically change the flavour.\n");
                    }
                }
                else{
                    printf("I'd suggest a spinach, courgette and leek quiche. This will take around an hour to cook, so plan in advance!\n");
                    if (user.eggs==false){
                      printf("You can use gram flour or semolina with water instead of eggs.\n ");
                    }
                }
                }
            }
        }
        }
        if (user.dinner==true){
          printf("A dinner worthy of your skills...\n");
            if(user.meat==true){
                if(user.spicy==true){
                    printf("It's a bit tricky, but I'd suggest Cajun blackened chicken. While this chicken is pan fried or grilled, you may have to finish it in the oven to prevent burning.\n");
                }
                else{
                    printf("If you think you're a good cook, I'd suggest you'd try a lasagne. Mincemeat is great of students on a budget as it's cheap and can be used it many different dishes.\n");
                    if (user.dairy!=false){
                      printf("You could also replace conventional cheeses with more interesting ones to dramatically change the flavour.\n");
                    }
                }
            }
        else{
            if(user.vegan==true){
                if(user.spicy==true){
                    printf("If you want to try something familiar but with a difference, try a one pot pasta. In this recipe you need to cook both the pasta and the sauce at the time.\n The real skill here is ensuring that the bottom of your pan is intact after cooking this dish.\n");
                }
                else{
                    printf("If you're feeling experimental, than try a risotto. It's a dish that can take most ingredients, therefore it's possiable to come up with some very impressive combinations. I personally enjoy mushroom, brocoli and spinach.\n");
                }
            }
            else{
                if(user.fish==true){
                    if(user.spicy==true){
                    printf("With your skills as a cook, I'd recommend trying a curried bean burger. The added complexity of making the burger pays off when you try it, bringing, chilli powder, carrots, parsnip and curry power into the equation.\n");
                }
                else{
                    printf("If your looking for a challenge, I'd recommend trying a barbecued tuna teriyaki. Tuna steak can get dry very quickly, but due to the method of cooking, it's hard to determine with the tuna's cooked all the way through.\n The final result is well worth it though.\n");
                }
                }
                else{if(user.spicy==true){
                    printf("I'd recommend a korma. When done right it's rich and flavourful. With your skills as a good it should be a worthy task. Serve with naan and rice.\n");
                }
                else{
                    printf("I'm you have the cooking skills, I'd recommend trying to make a nut roast. Not only are there lots of variations to attempt, there are also issues with moisture and consistency to also consider.\n");
                    if (user.nuts==false){
                      printf("It ruins the name a bit, but replace the nuts with seeds, like sunflower or pumpkin seeds.\n");
                    }
                }
                }
            }
        }
        }
        break;
    }

    if (user.breakfast==true){
      printf("While breakfast is important, it's not exactly rich when it comes to options, toast, cereal and fruit are all options, with options like eggs bacon and sausages also being on the plate if you have alot of time\nWhile I get up early to cook a breakfast. what I recommend you do is think about how much time and money you're wiling to commit to breakfast every day and use that as a basis for your decision.\n");
    }
    printf("\n");
  return;
}
