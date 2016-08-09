#!/bin/bash

WD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )";

if [[ "$1" == "/bin/bash" ]]; then

    # docker does not tolerate any extra whitespace between arguments
    if [[ -z "$DOCKER_ARGS" ]]; then
        DOCKER_ARGS="-t ";
    else
        DOCKER_ARGS="${DOCKER_ARGS} -t "
    fi
fi


docker run -v $WD:/project -i --rm ${DOCKER_ARGS}roman-calculator $@

