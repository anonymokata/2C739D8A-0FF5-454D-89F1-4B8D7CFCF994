#!/bin/bash

IMAGE_NAME='roman-calculator'
WD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )";

if [ -z "$(docker images -q "$IMAGE_NAME")" ]; then
    echo "Docker image ${IMAGE_NAME} does not exist. Building..."
    $WD/rebuild-container.sh 
fi

if [[ "$1" == "/bin/bash" ]]; then

    # docker does not tolerate any extra whitespace between arguments
    if [[ -z "$DOCKER_ARGS" ]]; then
        DOCKER_ARGS="-t ";
    else
        DOCKER_ARGS="${DOCKER_ARGS} -t "
    fi
fi


docker run -v $WD:/project -i --rm ${DOCKER_ARGS}roman-calculator $@

