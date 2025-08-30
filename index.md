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

## 📂 Problems

<ul>
{% for problem in site.problems %}
  <li>
    <a href="{{ problem.url | relative_url }}">{{ problem.title }}</a>
  </li>
{% endfor %}
</ul>


<!-- ### Arrays
<ul>
  {% assign array_pages = site.pages | where_exp: "p", "p.path contains '_problems/'" %}
  {% for page in array_pages %}
      <li>
        <a href="{{ page.url | relative_url }}">{{ page.title }}</a>
      </li>
  {% endfor %}
</ul> -->

<!-- ### Strings
<ul>
  {% assign string_pages = site.pages | where_exp: "p", "p.path contains '_problems/'" %}
  {% for page in string_pages %}
    {% if page.title contains "String" %}
      <li>
        <a href="{{ page.url | relative_url }}">{{ page.title }}</a>
      </li>
    {% endif %}
  {% endfor %}
</ul> -->

---

## 🔗 Quick Links
- [GitHub Repo](https://github.com/vaibhav-rm/Leetcode-Solutions)
- [About Me](https://github.com/vaibhav-rm)
