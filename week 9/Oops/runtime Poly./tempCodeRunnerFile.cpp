Dog* b = (Dog*)new Animal();//calls sleep of dof because sleep of animal is virtual
    b->Sleep();
    delete b;