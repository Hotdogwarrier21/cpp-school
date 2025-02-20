def bfs(adj, start, end):
   distance=adj.copy()
   for x in distance.keys():
       distance[x]=0
   visited=distance.copy()
   q=[start]
   while q:
       vertex=q.pop()
       for neighbor in adj[vertex]:
           if visited[neighbor]==1:
              
               if distance[neighbor]>distance[vertex]+1:
                   distance[neighbor]=distance[vertex]+1
                   q.append(neighbor)
           else:
               distance[neighbor]=distance[vertex]+1
               visited[neighbor]=1
               q.append(neighbor)
   return distance[end]


outs=[]
c=int(input())
for _ in range(c):
   h, w=list(map(int, input().split()))
   m=[]
   for _ in range(h):
       m.append(input())
   nodes={}
   start=0
   end=0
   for y in range(1, h, 2):
       for x in range(1, w, 3):
           nodes[(y, x)]=[]
   for x in nodes.keys():
           for z in [(-1, 0), (0, -1), (0, 1), (2, 0)]:
               checking=m[x[0]+z[1]][x[1]+z[0]]
               if checking in '<>v^':
                   if z==(-1, 0):
                       if checking=='>':
                           start=x
                       else:
                           end=x
                   elif z==(0, -1):
                       if checking=='v':
                           start=x
                       else:
                           end=x
                   elif z==(0, 1):
                       if checking=='^':
                           start=x
                       else:
                           end=x
                   elif z==(2, 0):
                       if checking=='<':
                           start=x
                       else:
                           end=x
               elif checking=='-' or checking=='|':
                   pass
               else:
                   if z==(-1, 0):
                       nodes[x].append((x[0], x[1]-3))
                       nodes[(x[0], x[1]-3)].append(x)
                   elif z==(0, -1):
                       nodes[x].append((x[0]-2, x[1]))
                       nodes[(x[0]-2, x[1])].append(x)
                   elif z==(0, 1):
                       nodes[x].append((x[0]+2, x[1]))
                       nodes[(x[0]+2, x[1])].append(x)
                   elif z==(2, 0):
                       nodes[x].append((x[0], x[1]+3))
                       nodes[(x[0], x[1]+3)].append(x)
   outs.append(bfs(nodes, start, end)+1)
for out in outs:
   print(out)