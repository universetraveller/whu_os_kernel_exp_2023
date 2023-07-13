dd if=/dev/zero of=/myswapfile bs=1M count=4
chmod 600 /myswapfile
mkswap /myswapfile
/tests/testswap.o /myswapfile
