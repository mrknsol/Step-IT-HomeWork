using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FlyWeight
{
    public class TeaFactory
    {
        private readonly Dictionary<string, TeaType> teaTypes = new Dictionary<string, TeaType>();
        private readonly Dictionary<string, ITea> teaCache = new Dictionary<string, ITea>();

        public ITea GetTeaType(string flavor)
        {
            if (!teaTypes.ContainsKey(flavor))
            {
                teaTypes[flavor] = new TeaType(flavor);
            }

            if (!teaCache.ContainsKey(flavor))
            {
                teaCache[flavor] = new Tea(teaTypes[flavor]);
            }

            return teaCache[flavor];
        }
    }
}
