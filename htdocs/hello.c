#include <stdio.h>
#include <mruby.h>
#include <mruby/compile.h>

int
main(void)
{
  mrb_state *mrb = mrb_open();
  if (!mrb) { /* handle error */ }
  puts("Executing Ruby code from C!");
  mrb_load_string(mrb, "p 'hello world! This message is executed Ruby!'"); // <- ここのRubyコードが実行される!
  mrb_close(mrb);
  return 0;
}