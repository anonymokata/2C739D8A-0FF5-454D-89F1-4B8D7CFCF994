
WD="$( cd "$( dirname "${BASH_SOURCE[0]}" )" && pwd )";

docker run -v "$WD":/project -i --rm roman-calculator make "$@"

