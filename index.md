---
layout: default
title: "LeetCode Solutions"
---

# 🧩 My LeetCode Solutions

This page lists all my uploaded problem solutions automatically.

<ul>
  {% assign files = site.static_files | where_exp: "f", "f.path contains '/arrays/' or f.path contains '/strings/'" %}
  {% for file in files %}
    <li>
      <a href="{{ file.path | relative_url }}">{{ file.name }}</a>
    </li>
  {% endfor %}
</ul>

# Arrays
<ul>
  {% for file in site.static_files %}
    {% if file.path contains '/arrays/' %}
      <li><a href="{{ file.path | relative_url }}">{{ file.name }}</a></li>
    {% endif %}
  {% endfor %}
</ul>

# Strings
<ul>
  {% for file in site.static_files %}
    {% if file.path contains '/strings/' %}
      <li><a href="{{ file.path | relative_url }}">{{ file.name }}</a></li>
    {% endif %}
  {% endfor %}
</ul>
