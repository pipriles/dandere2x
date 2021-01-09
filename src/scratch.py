from dandere2x.dandere2xlib.wrappers.frame.frame import Frame
import os

if os.path.exists('writing_test.png'):
    os.remove('writing_test.png')

test = Frame()
test.create_new(100,100)
test.save_image("writing_test.png")


new_test = Frame()
new_test.load_from_string("writing_test.png")