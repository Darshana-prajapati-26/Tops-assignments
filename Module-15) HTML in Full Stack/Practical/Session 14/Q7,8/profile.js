// Import the default export (any name can be used for default imports)
import formatFollowers from "./instaHelpers.js";

const users = [
  { username: "@virat.kohli",   followers: 260000000 },
  { username: "@priyachopra",   followers: 86500000  },
  { username: "@local_creator", followers: 1350      },
];

const container = document.getElementById("profiles");

users.forEach(user => {
  const formatted = formatFollowers(user.followers);
  console.log(`${user.username}: ${formatted} followers`);

  const card = document.createElement("div");
  card.style.cssText = "background:#fff;border:1px solid #ddd;border-radius:10px;padding:14px 18px;margin:10px 0;max-width:360px;display:flex;justify-content:space-between;align-items:center;font-size:15px;";
  card.innerHTML = `<span>📸 <strong>${user.username}</strong></span>
                    <span style="color:#e91e63;font-weight:bold;">❤️ ${formatted}</span>`;
  container.appendChild(card);
});
