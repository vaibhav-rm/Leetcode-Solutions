---
layout: default
title: "LeetCode Solutions"
---

# 🧩 My LeetCode Solutions

This page lists all my uploaded problem solutions automatically.

---

## Arrays
<ul>
  {% assign array_files = site.static_files | where_exp: "f", "f.path contains '/arrays/'" %}
  {% for file in array_files %}
    <li><a href="{{ file.path | relative_url }}">{{ file.name }}</a></li>
  {% endfor %}
</ul>

---

## Strings
<ul>
  {% assign string_files = site.static_files | where_exp: "f", "f.path contains '/strings/'" %}
  {% for file in string_files %}
    <li><a href="{{ file.path | relative_url }}">{{ file.name }}</a></li>
  {% endfor %}
</ul>
