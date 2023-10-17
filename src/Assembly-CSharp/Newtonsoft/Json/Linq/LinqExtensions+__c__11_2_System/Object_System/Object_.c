
/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] <Children>b__11_0(Object) */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<>c__11`2[System::Object,System::Object]
::LinqExtensions_c_11_2_System_Object_System_Object___Children_b__11_0
          (LinqExtensions_c_11_2_System_Object_System_Object_ *this,Object *c,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppJStack_1 = &TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>;
    func_?();
    cRam_? = '\x01';
  }
  if (c != (Object *)0x0) {
    ppJStack_1 = (JEnumerable_1_JToken___Class **)c->klass[1]._1.actualSize;
    pOStack_2 = c;
    c = (Object *)(*(code *)c->klass[1]._1.instance_size)();
    ppOStack_3 = &c;
    pIVar4 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)
             func_?(
                            TypeInfo__Newtonsoft__Json__Linq__JEnumerable<Newtonsoft::Json::Linq::JToken>
                            );
    return pIVar4;
  }
  ppJStack_1 = (JEnumerable_1_JToken___Class **)&stack0xfffffffc;
  uVar5 = func_?(&ppOStack_3);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  pIVar4 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar6)();
  return pIVar4;
}

