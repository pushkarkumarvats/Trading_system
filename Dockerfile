FROM ubuntu:20.04
RUN apt-get update && apt-get install -y cmake g++ libtorch-dev
COPY . /app
WORKDIR /app
RUN cmake . && make
CMD ["./trading-system"]
EXPOSE 8080
