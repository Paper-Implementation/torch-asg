//
// Created by amade on 4/3/2019.
//
#include "fully_connected_lattice.h"

#ifdef TORCH_EXTENSION_NAME
PYBIND11_MODULE(TORCH_EXTENSION_NAME, m) {
    m.def("fully_connected_forward", &torch_asg::fully_connected_forward, "fully connected forward");
    m.def("fully_connected_backward", &torch_asg::fully_connected_backward, "fully connected backward");
}
#endif