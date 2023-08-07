# Cmd tutorial

[] prefix for options indicates NOT-VALID for macOS.

## ls 

**list** files & dirs in a specified dir

ls [-options] [dir]

options:

- -a: all, including hidden f&d 
- -A: same with -a, excluding . && ..
- -r: reverse, in ordering
- -t: time, order desc by time
- -S: size, order by size
- [] -X: eXtension, order by
- -l: line, to show details in lines
- -c: ctime, with -l to show mod-time
- -R: recursive, to list recursively (grandchildren!)
- -h: human-friendly, to make size more legible
- --color=never/always/auto: show with color
- [] --sort=time/none/extension/