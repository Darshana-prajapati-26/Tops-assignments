/*
  Q4 & Q5:
  Write two functions in a file called spotifyUtils.js: formatSongTitle(title) that
  capitalizes every word, and getSongDurationInMinutes(seconds) that converts seconds to
  'mm:ss' format. Export both as named exports and import them into a main.js file to
  format and display the details of a sample song.
*/

// Named export: capitalize every word in a title
export function formatSongTitle(title) {
  return title
    .split(" ")
    .map(word => word.charAt(0).toUpperCase() + word.slice(1).toLowerCase())
    .join(" ");
}

// Named export: convert total seconds → 'mm:ss'
export function getSongDurationInMinutes(seconds) {
  const mins = Math.floor(seconds / 60);
  const secs = seconds % 60;
  return `${String(mins).padStart(2, "0")}:${String(secs).padStart(2, "0")}`;
}
