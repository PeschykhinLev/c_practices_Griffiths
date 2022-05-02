#include <stdio.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  char *delivery = "";
  int thick = 0;
  int count = 0;
  char ch;

  while ((ch = getopt(argc, argv, "d:t")) != EOF) // or -1
    switch (ch) {
    case 'd':
        printf("Optind in case 'd' : %i\n",optind);
        delivery = optarg;
        break;
    case 't':
        printf("Optind in case 't' : %i\n",optind);
        thick = 1;
        break;
    case ':': // with ':' before the option instead of default
        printf("Missing arg for %c\n", optopt);
        break;
    default:
        fprintf(stderr, "Unknown option: '%s'\n", optarg);
        return 1;
    }   
  //printf("%s\n",*argv);
  //printf("%d", argc);
  argc -= optind;
  argv += optind;
  //printf("%s\n",*argv);
  //printf("Optind : %i and Argc after the subctraction : %i\n",optind,argc);
  if (thick)
    puts("Thick crust.");

  if (delivery[0])
    printf("To be delivered %s.\n", delivery);

  puts("Ingredients:");

  for (count = 0; count < argc; count++)
    puts(argv[count]);
  return 0;
}
