#!/bin/bash
sed -i "s#http://i.imgur.com#http://wangfan.net:9000#g" *.md
sed -i "s#https://www.youtube.com/embed#http://wangfan.net:9002#g" *.md
git add .
git commit -m "post"
git push origin master
