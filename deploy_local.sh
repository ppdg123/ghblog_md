#!/bin/bash
git pull origin master
git checkout -f master
git clean -f
hexo g
hexo d

