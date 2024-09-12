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
  else {
    let workoutPlan = "";
    let plan = "";

    if (age >= 10 && age <= 20) {
      plan = "Workout plan for 10 to 20 years old: ";
      workoutPlan = `
Monday: Biceps and triceps
1. Biceps:
A) Barbell Bicep Curls: 2-3 sets of 8-12 reps.
B) Dumbbell Biceps Curl: 2-3 sets of 8-12 reps.
C) Dumbbell Hammer Curls:  2-3 sets of 8-12 reps.
D) Concentration Curl:  2-3 sets of 8-12 reps.

2. Triceps:
A) Dumbbell Triceps Extensions: 3-4 sets of 8-12 reps.
B) Dumbbell Triceps Kickbacks: 3-4 sets of 10-15 reps.
C) Standing Overhead Triceps Extensions
3-4 sets of 8-12 reps.


Tuesday: Legs & Cardio
Legs:
1. Squats (with Barbell or Dumbbells)
2. Lunges (with Dumbbells)
3. Romanian Deadlifts (with Barbell or Dumbbells)
4. Step-Ups (with Dumbbells)
5. Calf Raises (with Dumbbells)
6. Bodyweight Glute Bridges

Cardio:
1. Jumping Jacks
2. High Knees
3. Burpees
4. Mountain Climbers
5. Bodyweight Squats
6. Shadow Boxing


Wednesday:  Shoulders
1.  Dumbbell Shoulder Press (Seated or Standing)
2. Barbell Overhead Press
3. Lateral Raises (with Dumbbells)
4. Front Raises (with Dumbbells)
5. Bent-Over Lateral Raises (with Dumbbells)
6. Upright Rows (with Barbells or Dumbbells)


Thursday: Chest
1. Push-Ups
A) Wide-Grip Push-Ups: 3-4 sets of 8-12 reps
B) Close-Grip Push-Ups: 3-4 sets of 8-12 reps
C) Regular Push-Ups: 3-4 sets of 8-12 reps


Friday:  Abs
(4 sets of 8-12 reps.)
1. Dumbbell or Barbell Russian Twists
2. Planks
3. Plank with Knee to Elbow
4. Bicycle Crunches
5. Decline Push-Ups
6. Flying Legs Raise


Saturday:  Back and Traps
Back:
1. Barbell Bent-Over Rows:  3-4 sets of 8-12 reps.
2. Dumbbell Rows:  3-4 sets of 8-12 reps.
3. Dumbbell Pullovers:  3-4 sets of 8-12 reps.
Traps: 
1.  Barbell Shrugs:  4- 6 sets of 8-12 reps
2. Dumbbell Shrugs:  3-4 sets of 8-12 reps
3. Dumbbell High Pulls:  3 - 4 sets of 20 - 25 reps
      `;
    } else if (age >= 20 && age <= 40) {
      plan = "Workout plan for 20 to 40 years old: ";
      workoutPlan = `
Monday: Biceps and triceps
1. Biceps:
A) Barbell Bicep Curls: 2-3 sets of 8-12 reps.
B) Dumbbell Biceps Curl: 2-3 sets of 8-12 reps.
C) Dumbbell Hammer Curls:  2-3 sets of 8-12 reps.
D) Concentration Curl:  2-3 sets of 8-12 reps.

2. Triceps:
A) Dumbbell Triceps Extensions: 3-4 sets of 8-12 reps.
B) Dumbbell Triceps Kickbacks: 3-4 sets of 10-15 reps.
C) Standing Overhead Triceps Extensions: 3-4 sets of 8-12 reps.


Tuesday: Legs & Cardio
Legs:
1. Squats (with Barbell or Dumbbells)
2. Lunges (with Dumbbells)
3. Romanian Deadlifts (with Barbell or Dumbbells)
4. Step-Ups (with Dumbbells)
5. Calf Raises (with Dumbbells)

Cardio:
1. Jumping Jacks
2. High Knees
3. Burpees
4. Mountain Climbers
5. Bodyweight Squats


Wednesday:  Shoulders
1.  Dumbbell Shoulder Press (Seated or Standing)
2. Barbell Overhead Press
3. Lateral Raises (with Dumbbells)
4. Front Raises (with Dumbbells)
5. Bent-Over Lateral Raises (with Dumbbells)


Thursday: Chest
1. Push-Ups
A) Wide-Grip Push-Ups: 3-4 sets of 8-12 reps
B) Close-Grip Push-Ups: 3-4 sets of 8-12 reps
C) Regular Push-Ups: 3-4 sets of 8-12 reps


Friday:  Abs (4 sets of 8-12 reps.)
1. Dumbbell or Barbell Russian Twists
2. Planks
3. Plank with Knee to Elbow
4. Bicycle Crunches
5. Decline Push-Ups


Saturday: Back and Traps
Back:
1. Barbell Bent-Over Rows:  3-4 sets of 8-12 reps.
2. Dumbbell Rows:  3-4 sets of 8-12 reps.
3. Dumbbell Pullovers:  3-4 sets of 8-12 reps.

Traps: 
1.  Barbell Shrugs:  4- 6 sets of 8-12 reps
2. Dumbbell Shrugs:  3-4 sets of 8-12 reps
3. Dumbbell High Pulls:  3 - 4 sets of 20 - 25 reps
      `;
    } else if (age >= 40 && age <= 60) {
      plan = "Workout plan for 40 to 60 years old: ";
      workoutPlan = `
Monday: Biceps and triceps
1. Biceps:
A) Barbell Bicep Curls: 2-3 sets of 8-12 reps.
B) Dumbbell Biceps Curl: 2-3 sets of 8-12 reps.
C) Dumbbell Hammer Curls:  2-3 sets of 8-12 reps.
D) Concentration Curl:  2-3 sets of 8-12 reps.

2. Triceps:
A) Dumbbell Triceps Extensions: 3-4 sets of 8-12 reps.
B) Dumbbell Triceps Kickbacks: 3-4 sets of 10-15 reps.
C) Standing Overhead Triceps Extensions: 3-4 sets of 8-12 reps.


Tuesday: Legs & Cardio
Legs:
1. Squats (with Barbell or Dumbbells)
2. Lunges (with Dumbbells)
3. Romanian Deadlifts (with Barbell or Dumbbells)
4. Calf Raises (with Dumbbells)


Cardio:
1. Jumping Jacks
2. High Knees
3. Burpees
4. Mountain Climbers
5. Bodyweight Squats


Wednesday:  Shoulders
1.  Dumbbell Shoulder Press (Seated or Standing)
2. Barbell Overhead Press
3. Lateral Raises (with Dumbbells)
4. Front Raises (with Dumbbells)
5. Bent-Over Lateral Raises (with Dumbbells)
6. Upright Rows (with Barbells or Dumbbells)


Thursday: Chest
1. Push-Ups
A) Wide-Grip Push-Ups: 3-4 sets of 8-12 reps
B) Close-Grip Push-Ups: 3-4 sets of 8-12 reps
C) Regular Push-Ups: 3-4 sets of 8-12 reps


Friday:  Abs (4 sets of 8-12 reps.)
1. Dumbbell or Barbell Russian Twists
2. Planks
3. Plank with Knee to Elbow
4. Bicycle Crunches
5. Decline Push-Ups


Saturday: Back and Traps
Back:
1. Barbell Bent-Over Rows:  3-4 sets of 8-12 reps.
2. Dumbbell Rows:  3-4 sets of 8-12 reps.
3. Dumbbell Pullovers:  3-4 sets of 8-12 reps.

Traps: 
1. Barbell Shrugs:  4- 6 sets of 8-12 reps
2. Dumbbell Shrugs:  3-4 sets of 8-12 reps
3. Dumbbell High Pulls:  3 - 4 sets of 20 - 25 reps
      `;
    } else if (age >= 60 && age <= 80) {
      plan = "Workout plan for 60 to 80 years old: ";
      workoutPlan =
        "Workout plan for 60 to 80 years old: " +
        `
       Monday: Biceps and triceps
1. Biceps:
A) Barbell Bicep Curls: 2-3 sets of 8-12 reps.
B) Dumbbell Biceps Curl: 2-3 sets of 8-12 reps.
C) Dumbbell Hammer Curls:  2-3 sets of 8-12 reps

2. Triceps:
A) Dumbbell Triceps Extensions: 3-4 sets of 8-12 reps.
B) Dumbbell Triceps Kickbacks: 3-4 sets of 10-15 reps.
C) Standing Overhead Triceps Extensions: 3-4 sets of 8-12 reps.


Tuesday: Legs & Cardio
Legs:
1. Squats (with Barbell or Dumbbells)
4. Step-Ups (with Dumbbells)
5. Calf Raises (with Dumbbells)


Cardio:
1. High Knees
2. Bodyweight Squats
3. Shadow Boxing


Wednesday:  Shoulders
1. Dumbbell Shoulder Press (Seated or Standing)
2. Barbell Overhead Press
3. Lateral Raises (with Dumbbells)


Thursday: Chest
1. Push-Ups
A) Wide-Grip Push-Ups: 3-4 sets of 8-12 reps
B) Regular Push-Ups: 3-4 sets of 8-12 reps


Friday:  Abs (4 sets of 8-12 reps.)
1. Bicycle Crunches
2. Flying Legs Raise


Saturday: Back and Traps
Back:
1. Dumbbell Rows:  3-4 sets of 8-12 reps.
2. Dumbbell Pullovers:  3-4 sets of 8-12 reps.

Traps: 
1. Barbell Shrugs:  4- 6 sets of 8-12 reps
2. Dumbbell Shrugs:  3-4 sets of 8-12 reps
3. Dumbbell High Pulls:  3 - 4 sets of 20 - 25 reps
      `;
    } else {
      // Invalid input, no workout plan
      plan = "Invalid input. Please provide valid age!!.";
    }

    // Display the workout plan
    document.getElementById("workout-plan").innerText = workoutPlan;
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
