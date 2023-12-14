using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace To_DoList
{
    public class WpfTaskManagerFactory : ITaskManagerFactory
    {
        public ITask CreateTask()
        {
            return new WpfTask();
        }

        public IDeadlineTask CreateDeadlineTask()
        {
            return new WpfDeadlineTask();
        }
    }
}
