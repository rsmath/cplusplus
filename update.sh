#!/bin/sh
git add *
git add -u
git status
echo Message: 
read message
git commit -m "$message"
