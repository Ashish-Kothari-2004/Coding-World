function plan() {
  let age = parseInt(document.getElementById("age").value);
  let weight = parseInt(document.getElementById("weight").value);
  let level = document.getElementById("level").value;
  let height = parseInt(document.getElementById("height").value);
  let gender;

  if (document.getElementById("male").checked) {
    gender = document.getElementById("male").value;
  } else if (document.getElementById("female").checked) {
    gender = document.getElementById("female").value;
  }

  if (isNaN(age) || age < 10 || age > 100) {
    alert("Please enter a valid age.");
    return false;
  }

  if (isNaN(weight) || weight < 50 || weight > 100) {
    alert("Please enter a valid weight.");
    return false;
  }

  if (level.trim() === "") {
    alert("Please enter a level.");
    return false;
  }

  if (isNaN(height) || height < 100 || height > 200) {
    alert("Please enter a valid height.");
    return false;
  }

  if (gender === "") {
    alert("Please select a gender.");
    return false;
  } 
  
  else {
    let dietPlan = "";
    let plan = "";

    if (age >= 10 && age <= 20) {
      plan = "Diet plan for 10 to 20 years old: ";
      dietPlan = `
Breakfast: 
1. One grapefruit
2. One poached eggs (or fried in a non-stick pan)
3. One slice 100% whole wheat toast

Snack: 
1. One banana

Lunch: 
1. Large garden salad (3 cups mixed greens with 1 cup cherry tomatoes, 1/4 avocado, topped with 2 tablespoons balsamic vinaigrette)

Snack: 
1. 1 cup (about 10) baby carrots
2. 3 tablespoons hummus

Dinner: 
1. cup steamed broccoli
2. cup of brown rice

Snack: 
1. Onr pitted Medjool dates
  `;
    } else if (age >= 20 && age <= 40) {
      plan = "Diet plan for 20 to 40 years old: ";
      dietPlan = `
Breakfast: 
1. One grapefruit
2. Two poached eggs (or fried in a non-stick pan)
3. One slice 100% whole wheat toast

Snack: 
One banana
1. One cup plain yogurt with 1 tablespoon honey

Lunch: 
1. 6 ounces grilled chicken breast
2. Large garden salad (3 cups mixed greens with 1 cup cherry tomatoes, 1/4 avocado, topped with 2 tablespoons balsamic vinaigrette)

Snack: 
1. One cup (about 10) baby carrots
2. 3 tablespoons hummus
3. 1/2 piece of pita bread

Dinner: 
1. cup steamed broccoli
2. cup of brown rice
3. Halibut (4-ounce portion)

Snack: 
1. Two pitted Medjool dates
2. One ounce 70% dark chocolate
  `;
    } else if (age >= 40 && age <= 60) {
      plan = "Diet plan for 40 to 60 years old: ";
      dietPlan = `
Breakfast:
1. One whole-wheat English muffin with 2 tablespoons peanut butter
2. One orange

Snack: 
1. One 7-ounce container 2% plain Greek yogurt with 1/2 cup blueberries

Lunch: 
1. Turkey sandwich (6 ounces of turkey breast meat, large tomato slice, green lettuce, 1/4 avocado, and 2 teaspoons honey mustard on two slices of whole wheat bread)

Snack: 
1 cup (about 30) grapes

Dinner:
1. 5-ounce sirloin steak
2. One roasted sweet potato
3. One cup cooked spinach (made with 2 teaspoons olive oil)
4. One cup green beans

Snack:
1. One cup plain popcorn
2. One ounce 70% dark chocolate
  `;
    } else if (age >= 60 && age <= 80) {
      plan = "Diet plan for 60 to 80 years old: ";
      dietPlan = `
Breakfast: 
1. Overnight Oats (one mashed banana, 2 tablespoons chia seeds, 1/2 cup oats, 1 cup almond milk, 1 teaspoon cinnamon)

Snack: 
1. One fresh pear
2. One ounce (22) almonds

Lunch:
1. One fried egg
2. One slice whole wheat bread
3. 1/2 avocado, mashed
4. One medium apple

Snack:
1. 3 tablespoons hummus
2. One cup baby carrots
3. One cup cherry tomatoes

Dinner:
1. One whole wheat english muffin
2. One slice tomato, two leaves lettuce, one slice onion
3. 5-ounce turkey burger
4. 2 tablespoons ketchup

Snack: 
1. One cup of ice cream
2. One cup fresh raspberries
  `;
    } else {
      // Invalid input, no diet plan
      plan = "Invalid input. Please provide valid age!!.";
    }

    // Display the diet plan
    document.getElementById("diet-plan").innerText = dietPlan;
    document.getElementById("plan").innerText = plan;

    // Log user input
    console.log("Age:", age);
    console.log("Weight:", weight);
    console.log("Level:", level);
    console.log("Height:", height);
    console.log("Gender:", gender);

    const elementToScroll = document.getElementById("plan");
    elementToScroll.scrollIntoView();


  }
}
