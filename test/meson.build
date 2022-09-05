criterion = dependency('criterion')

example_test = executable('example_test',
                          sources: ['src/example_test.c'],
                          dependencies: [criterion])

test('Example test',
     example_test,
     args: [
       '--color=never',
       '--xml=@0@.xml'.format(example_test.name())
     ])
