################################################################

program          := ejercicio_2

src_dir          := src
dep_dir          := dep
obj_dir          := obj

sources           = $(shell find $(src_dir) -name "*.cpp")
objects           = $(patsubst $(src_dir)/%.cpp, $(obj_dir)/%.o, $(sources))
dependencies      = $(patsubst $(src_dir)/%.cpp, $(dep_dir)/%.d, $(sources))

compiler         := g++
loader_flags     :=
compiler_flags   := -Wfatal-errors
dependency_flags  = -MMD -MP -MF $(@:$(obj_dir)/%.o=$(dep_dir)/%.d)

################################################################

all: $(program)

################################################################

clean:
	@ rm -rf core $(program) $(program).exe $(obj_dir) $(dep_dir)

################################################################
################################################################
################################################################

-include $(dependencies)

################################################################

$(program): $(objects)
	@ $(compiler) $(loader_flags) -o $(program) $^

################################################################

$(obj_dir)/%.o: $(src_dir)/%.cpp
	@ mkdir -p $(@D)
	@ mkdir -p $(patsubst $(obj_dir)/%, $(dep_dir)/%, $(@D) )
	@ $(compiler) $(compiler_flags) -o $@ -c $< $(dependency_flags)

################################################################