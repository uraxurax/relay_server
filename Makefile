
CC		= gcc
CFLAGS	=

TARGET	= test
SRCS	= main.c
OBJS	= $(SRCS:.c=.o)

INCDIR	= -Iinclude

LIBDIR	=

LIBS	=

$(TARGET): $(OBJS)
	$(CC) -o $@ $^ $(LIBDIR) $(LIBS)

$(OBJS): $(SRCS)
	$(CC) $(CFLAGS) $(INCDIR) -c $(SRCS)

all: $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)

fclean:	clean
	rm -f $(NAME)

re: fclean all
