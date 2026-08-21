/**
 * ╔══════════════════════════════════════════════════════════════════╗
 * ║  M1-A1  ·  Section B  ·  Task 1 — Restaurant Profile Card      ║
 * ╚══════════════════════════════════════════════════════════════════╝
 *
 * Requirements:
 *  ✔ Declare variables for name, cuisine, rating, isOpen using const/let
 *  ✔ Template literal → formatted profile string
 *  ✔ Ternary operator → 'Open Now' or 'Closed'
 *  ✔ JSON.stringify() → serialize and log separately
 *
 * Run:  node sectionB-task1.js
 */

// ── 1. Variable Declarations ──────────────────────────────────────────────
// Restaurant details never change during the session → const
const restaurantName = "Spice Garden";
const cuisineType    = "Indian";
const averageRating  = 4.5;

// Open status can change in real-time → let
let isOpen = true;

// ── 2. Ternary operator + Template Literal ────────────────────────────────
const status  = isOpen ? "Open Now" : "Closed";
const profile = `${restaurantName} | ${cuisineType} | Rating: ${averageRating} | ${status}`;

console.log("=".repeat(50));
console.log("  RESTAURANT PROFILE CARD");
console.log("=".repeat(50));
console.log(profile);
// Expected: Spice Garden | Indian | Rating: 4.5 | Open Now

// ── 3. JSON.stringify() ───────────────────────────────────────────────────
const restaurantObj = {
  name:    restaurantName,
  cuisine: cuisineType,
  rating:  averageRating,
  isOpen:  isOpen,
  status:  status,
};

console.log("\n--- JSON Serialized ---");
console.log(JSON.stringify(restaurantObj, null, 2));
/*
{
  "name": "Spice Garden",
  "cuisine": "Indian",
  "rating": 4.5,
  "isOpen": true,
  "status": "Open Now"
}
*/

// ── 4. Demonstrate with CLOSED restaurant ────────────────────────────────
isOpen = false;
const closedProfile = `${restaurantName} | ${cuisineType} | Rating: ${averageRating} | ${isOpen ? "Open Now" : "Closed"}`;
console.log("\n--- Profile when Closed ---");
console.log(closedProfile);
// Expected: Spice Garden | Indian | Rating: 4.5 | Closed
console.log("=".repeat(50));
