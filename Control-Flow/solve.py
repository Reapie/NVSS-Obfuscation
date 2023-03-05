import angr, claripy

target = angr.Project('control_flow', auto_load_libs=False)
input_len = 8

inp = [claripy.BVS('flag_%d' %i, 8) for i in range(input_len)]
flag = claripy.Concat(*inp + [claripy.BVV(b'\n')])
st = target.factory.full_init_state(args=["./control_flow"], stdin=flag)

for k in inp:
    st.solver.add(k > 0)
    st.solver.add(k < 129)
    
sm = target.factory.simulation_manager(st)
sm.explore(find=lambda s: b"Correct!" in s.posix.dumps(1))

for s in sm.found:
	print(s.posix.dumps(0).decode())