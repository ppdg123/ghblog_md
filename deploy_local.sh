#!/bin/bash
git pull origin master
git clean -f
hexo g
hexo d

