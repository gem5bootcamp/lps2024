stats_file_path ="/workspaces/2024/materials/03-Developing-gem5-models/09-extending-gem5-models/02-global-inst-tracker/simple-sim-m5out/stats.txt"

committed_insts = 0

targeted_lines = []
cores = 8

for i in range(cores):
    targeted_lines.append(f"board.processor.cores{i}.core.commitStats0.numInsts")

with open(stats_file_path) as f:
    for line in f:
        line = line.split()
        if len(line) > 0:
            if line[0] in targeted_lines:
                committed_insts += int(line[1])

print(f"Total committed instructions: {committed_insts}")

