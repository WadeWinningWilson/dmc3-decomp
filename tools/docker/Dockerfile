# DMC3 build image: GNU MIPS binutils + wibo for the MW PS2 compilers,
# plus the i386 C runtime needed by the (32-bit) ee-gcc toolchains.
FROM ubuntu:22.04
RUN dpkg --add-architecture i386 && apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
      binutils-mips-linux-gnu python3 ninja-build make libc6:i386 libstdc++6:i386 && rm -rf /var/lib/apt/lists/*
COPY wibo /usr/local/bin/wibo
RUN chmod +x /usr/local/bin/wibo
WORKDIR /w
