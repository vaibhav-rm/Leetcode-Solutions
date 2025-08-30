---
layout: default
title: "LeetCode Solutions"
description: "A collection of my LeetCode solutions with code in C, C++, Java, and Python"
---

# 🧩 My LeetCode Solutions

Welcome! This site contains my personal solutions to [LeetCode](https://leetcode.com) problems.  
Each solution is categorized by topic (e.g., Arrays, Strings) and linked directly to the source file.

---

## 📊 Repository Stats
- **Total Problems Solved:** {{ site.data.leetcode_stats.total }}
- **Languages Used:** {{ site.data.leetcode_stats.languages | join: ", " }}
- **Last Updated:** {{ site.data.leetcode_stats.last_updated }}

---

## 📂 Categories

### Arrays
<ul>
  {% assign array_files = site.static_files | where_exp: "f", "f.path contains '/arrays/'" %}
  {% for file in array_files %}
    <li>
      <a href="{{ file.path | relative_url }}">
        {{ file.name | replace: "_", " " | replace: ".cpp", "" | replace: ".c", "" | replace: ".py", "" | replace: ".java", "" }}
      </a>
    </li>
  {% endfor %}
</ul>

### Strings
<ul>
  {% assign string_files = site.static_files | where_exp: "f", "f.path contains '/strings/'" %}
  {% for file in string_files %}
    <li>
      <a href="{{ file.path | relative_url }}">
        {{ file.name | replace: "_", " " | replace: ".cpp", "" | replace: ".c", "" | replace: ".py", "" | replace: ".java", "" }}
      </a>
    </li>
  {% endfor %}
</ul>

---

## 🔗 Quick Links
- [GitHub Repo](https://github.com/vaibhav-rm/Leetcode-Solutions)
- [About Me](https://github.com/vaibhav-rm)
