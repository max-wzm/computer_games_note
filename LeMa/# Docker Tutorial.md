# Docker Tutorial

## Images

### Get an Image

`docker pull [repo]/[lib]/[image]:[tag]`

### List Images

`docker image ls`

### Construct an Image 

#### Dockerfile

A Dockerfile is a file consisting of many lines of instructions, each of which forms one layer of the image.

A Dockerfile can execute commands to modify the image, with recording. 

> Why not docker commit?
> 
> 1. Blackbox image: no recording means nobody knows how the image was constrcted, sometimes even the engineer himself.
> 2. Overstaffed image: every dc commit creates a layer, which is append-only and has no impact on previous layers. So every modification by dc commit related to previous layers makes the image more overstaffed.
> 
> By Dockerfile, the image is constructed after a completed blueprint.

## Containers

### Run a Container

#### Create & Run 

`docker run`

opts:
- -t: run with a Terminal
- -i: keep standard Input
- -d: run a Detached container (in BG) (see stdout with `docker logs`)

#### Run the Exited

`docker container start`

also we have `docker container restart`.

### Terminate

Outside the container: `docker container stop`

Inside the container: `exit`, since a container will be terminated with it's running processes.

### Enter a container

For a detached container.\

`docker attach` or `docker exec`

opts the same with `docker run`.