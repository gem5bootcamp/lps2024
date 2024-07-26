predicted_ipc = 1.029524 * 0.111111 + 1.029293 *0.222222 + 1.286327* 0.666667
actual_ipc = 1.247741

print(f"predicted IPC: {predicted_ipc}")
print(f"actual IPC: {actual_ipc}")
print(f"relative error: {(abs(actual_ipc - predicted_ipc)/actual_ipc)*100}%")
