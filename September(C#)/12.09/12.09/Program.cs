#region Task1
//int number1 = 5;
//int number2 = 10;
//Swap(ref number1, ref number2);

//Console.WriteLine(number1);
//Console.WriteLine(number2);


//void Swap<T>(ref T num1, ref T num2)
//{
//    T tmp = num1;
//    num1 = num2;
//    num2 = tmp;
//}

#endregion

#region Task2

//IntCompare intCompare = new IntCompare();
//PriorityQueue<int> priorityQueue = new PriorityQueue<int>(intCompare);

//priorityQueue.Enqueue(50);
//priorityQueue.Enqueue(3);
//priorityQueue.Enqueue(390);
//priorityQueue.Enqueue(39);


//while (priorityQueue.Count > 0)
//{
//    Console.WriteLine(priorityQueue.Dequeue());
//}



//class PriorityQueue<T>
//{
//    private List<T> data;
//    private IComparer<T> _comparer;


//    public PriorityQueue(IComparer<T> comparer)
//    {
//        data = new List<T>();
//        _comparer = comparer;
//    }

//    public void Enqueue(T item)
//    {
//        data.Add(item);
//        int childIndex = data.Count - 1;

//        for (int i = 0; i < data.Count(); i++)
//        {
//            int parentIndex = (childIndex - 1) / 2;
//            if (_comparer.Compare(data[childIndex], data[parentIndex]) >= 0)
//                break;
//            Swap(childIndex, parentIndex);
//            childIndex = parentIndex;
//        }
//    }

//    public T Dequeue()
//    {
//        int lastIndex = data.Count - 1;
//        T frontItem = data[0];
//        data[0] = data[lastIndex];
//        data.RemoveAt(lastIndex);

//        lastIndex--;
//        int parentIndex = 0;

//        while (true)
//        {
//            int leftChildIndex = parentIndex * 2 + 1;
//            if (leftChildIndex > lastIndex)
//                break;

//            int rightChildIndex = leftChildIndex + 1;
//            if (rightChildIndex <= lastIndex && _comparer.Compare(data[leftChildIndex], data[rightChildIndex]) > 0)
//                leftChildIndex = rightChildIndex;

//            if (_comparer.Compare(data[parentIndex], data[leftChildIndex]) <= 0)
//                break;

//            Swap(parentIndex, leftChildIndex);
//            parentIndex = leftChildIndex;
//        }
//        return frontItem;
//    }

//    public int Count
//    {
//        get { return data.Count; }
//    }

//    private void Swap(int index1, int index2)
//    {
//        T temp = data[index1];
//        data[index1] = data[index2];
//        data[index2] = temp;
//    }
//}


//class IntCompare : IComparer<int>
//{
//    public int Compare(int x, int y)
//    {
//        if (x < y)
//            return -1;
//        if (x > y)
//            return 1;
//        return 0;
//    }


//}

#endregion

#region Task3

//DoubleLinkedList<int> doubleLinkedList = new DoubleLinkedList<int>();
//doubleLinkedList.Add(10);
//doubleLinkedList.Add(11);
//doubleLinkedList.Add(12);
//doubleLinkedList.Add(13);
//doubleLinkedList.print();
//doubleLinkedList.Remove(12);
//doubleLinkedList.print();
//Console.WriteLine(doubleLinkedList.Size());
//doubleLinkedList.AddFirst(1);
//doubleLinkedList.print();


//class Node<T>
//{
//    public T Data;
//    public Node<T> prev;
//    public Node<T> next;

//    public Node(T data)
//    {
//        Data = data;
//        prev = null;
//        next = null;
//    }
//}

//class DoubleLinkedList<T>
//{
//    private Node<T> Head;
//    private Node<T> Tail;
//    private int _size;


//    public void Add(T data)
//    {
//        Node<T> newNode = new Node<T>(data);
//        if (Head == null)
//        {
//            Head = newNode;
//            Tail = newNode;
//        }
//        else
//        {
//            Tail.next = newNode;
//            newNode.prev = Tail;
//        }

//        Tail = newNode;
//        _size++;
//    }

//    public void Remove(T data)
//    {
//        Node<T> current = Head;
//        Node<T> previous = null;

//        while (current != null)
//        {
//            if (current.Data.Equals(data))
//            {
//                break;
//            }

//            current = current.next;
//        }

//        if (current != null)
//        {
//            if (current.next != null)
//            {
//                current.next.prev = current.prev;
//            }
//            else
//            {
//                Tail = current.prev;
//            }

//            if (current.prev != null)
//            {
//                current.prev.next = current.next;
//            }
//            else
//            {
//                Head = current.next;
//            }

//            _size--;
//        }


//    }

    
//    public int Size() => _size;
//    public void print()
//    {
//        Node<T> current = Head;
//        while (current != null)
//        {
//            Console.WriteLine(current.Data);
//            current = current.next;
//        }
//    }

//    public void Clear()
//    {
//        Head = null;
//        Tail = null;
//        _size = 0;
//    }

//    public bool Contains(T data)
//    {
//        Node<T> current = Head;
//        while (current != null)
//        {
//            if (current.Data.Equals(data))
//            {
//                return true;
//            }

//            current = current.next;
//        }

//        return false;
//    }

//    public void AddFirst(T data)
//    {
//        Node<T> newNode = new Node<T>(data);
//        Node<T> current = Head;

//        newNode.next = current;
//        Head = newNode;
//    }



//}

#endregion