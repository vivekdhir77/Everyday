import numpy as np


inputs=[1,2,3,2.5]

weights = [0.2, 0.8, -0.5, 1]
bias = 2

output=np.dot(weights, inputs) + bias
print(output)

"""weights=[[0.2, 0.8, -0.5, 1],
        [0.5, -0.91, 0.26, -0.5],
        [-0.26, -0.27, 0.17, 0.87]]

biases=[2, 3, 0.5, 1]

layer_output=[]
for neuron_weights, neuron_biases in zip(weights, biases):
    neuron_output=0
    for n_input, weight in zip(inputs, neuron_weights):
        neuron_output += n_input * weight
    neuron_output += neuron_biases
    layer_output.append(neuron_output)

print(layer_output)"""
