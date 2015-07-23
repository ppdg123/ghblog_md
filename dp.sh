#!/bin/bash
sed -i "s#http://i.imgur.com#http://i.wangfan.net:2048#g" *.md
git add .
git commit -m "post"
git push origin master
