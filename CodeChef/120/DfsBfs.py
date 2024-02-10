graph = {
     "a" : ["b","c"],
     "b" : [],
     "c" : ["e","f"],
     "e" : [],
     "f" : [],
    }


def dfs(graph,source):
    print("DFS")
    stack = []
    stack.append(source)
    
    while stack:
        node = stack.pop(-1)
        print(node)
        for neighbour in graph[node]:
            stack.append(neighbour)



def bfs(graph,source):
    print("BFS")
    queue = []
    queue.append(source)
    
    while queue: 
        node = queue.pop(0)
        print(node)
        for neighbour in graph[node] : 
            queue.append(neighbour)


dfs(graph,"a")
bfs(graph,"a")
