package Graph;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class GraphWithArrayList {
    public static void main(String[] args) {
        int vertex,edge,u,v;

        System.out.print("Enter vertex and edge : ");
        Scanner in = new Scanner(System.in);
        vertex = in.nextInt();
        edge = in.nextInt();
        Graph g = new Graph(vertex);
        System.out.println("Enter two adjacency node : ");
        for (int i = 0; i < vertex; i++){
            g.list.add(new ArrayList<Integer>());
        }
        for(int i = 0; i < edge; i++){
            u = in.nextInt();
            v = in.nextInt();
            g.addEdge(u,v);
        }
        g.printGraph();
    }

    public static class Graph{
        int vertex;
        ArrayList<ArrayList<Integer>> list = new ArrayList<ArrayList<Integer>>();
        Graph(int vertex){
            this.vertex = vertex;
            list = new ArrayList<ArrayList<Integer>>(vertex);
        }
        void addEdge(int u,int v){
            list.get(u).add(v);
            list.get(v).add(u);
        }
        void printGraph(){
            for (int i = 0; i < vertex; i++){
                System.out.print("node "+i+" -> ");
                for(int adj:list.get(i)){
                    System.out.print(+adj+" ");
                }
                System.out.println();
            }
        }
    }
}
