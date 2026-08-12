import { formatSongTitle, getSongDurationInMinutes } from "./spotifyUtils.js";

const songs = [
  { title: "tum hi ho",          seconds: 261 },
  { title: "kesariya",           seconds: 294 },
  { title: "raataan lambiyan",   seconds: 228 },
];

const container = document.getElementById("song-list");

songs.forEach(song => {
  const title    = formatSongTitle(song.title);
  const duration = getSongDurationInMinutes(song.seconds);

  console.log(`${title} — ${duration}`);

  const card = document.createElement("div");
  card.style.cssText = "background:#282828;border-radius:10px;padding:14px 18px;margin:10px 0;max-width:400px;display:flex;justify-content:space-between;align-items:center;";
  card.innerHTML = `<span style="font-size:16px;font-weight:bold;color:#fff;">🎵 ${title}</span>
                    <span style="color:#1DB954;font-weight:bold;">${duration}</span>`;
  container.appendChild(card);
});
