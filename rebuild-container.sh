IMAGE_NAME="roman-calculator"

docker rmi "$IMAGE_NAME"
docker build -t "$IMAGE_NAME" .

