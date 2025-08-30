---
layout: default
title: "LeetCode Solutions"
description: "A collection of my LeetCode solutions with code in C, C++, Java, and Python"
---

# 🧩 My LeetCode Solutions

Welcome! This site contains my personal solutions to [LeetCode](https://leetcode.com) problems.  
Each solution is categorized by topic (e.g., Arrays, Strings) and linked directly to the solution page.

---

## 📊 Repository Stats
- **Total Problems Solved:** {{ site.data.leetcode_stats.total }}
- **Languages Used:** {{ site.data.leetcode_stats.languages | join: ", " }}
- **Last Updated:** {{ site.data.leetcode_stats.last_updated }}

---

## 📂 Categories

### Arrays
<ul>
  {% assign array_pages = site.pages | where_exp: "p", "p.path contains 'arrays/' and p.path contains '.md'" %}
  {% for page in array_pages %}
    <li>
      <a href="{{ page.url | relative_url }}">
        {{ page.title | default: page.name | replace: "_", " " | replace: ".md", "" }}
      </a>
    </li>
  {% endfor %}
</ul>

### Strings
<ul>
  {% assign string_pages = site.pages | where_exp: "p", "p.path contains 'strings/' and p.path contains '.md'" %}
  {% for page in string_pages %}
    <li>
      <a href="{{ page.url | relative_url }}">
        {{ page.title | default: page.name | replace: "_", " " | replace: ".md", "" }}
      </a>
    </li>
  {% endfor %}
</ul>

---

## 🔗 Quick Links
- [GitHub Repo](https://github.com/vaibhav-rm/Leetcode-Solutions)
- [About Me](https://github.com/vaibhav-rm)
