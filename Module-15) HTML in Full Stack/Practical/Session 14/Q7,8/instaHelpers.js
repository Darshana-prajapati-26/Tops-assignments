/*
  Q7 & Q8:
  In a file called instaHelpers.js, declare a default export function formatFollowers(count)
  that returns '1.2K' for 1200, '2.5M' for 2500000, etc. Import this default export in
  profile.js and use it to display the formatted follower count for three different users.
*/

// Default export
export default function formatFollowers(count) {
  if (count >= 1_000_000) return (count / 1_000_000).toFixed(1) + "M";
  if (count >= 1000)      return (count / 1000).toFixed(1) + "K";
  return count.toString();
}
