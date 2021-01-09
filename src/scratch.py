from dandere2x.dandere2xlib.wrappers.frame.frame import Frame
import os

if os.path.exists('writing_test.png'):
    os.remove('writing_test.png')

load_test = Frame()
load_test.load_from_string("output_000477.png")

copy_test = Frame()
copy_test.create_new(88,88)

copy_test.copy_image(load_test)

print("success!")


