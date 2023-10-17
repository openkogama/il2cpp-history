
/* IEnumerable`1[Newtonsoft.Json.Linq.JToken] <Descendants>b__1_0(Object) */

IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<>c__1`1[System::Object]::
LinqExtensions_c_1_1_System_Object___Descendants_b__1_0
          (LinqExtensions_c_1_1_System_Object_ *this,Object *j,MethodInfo *method)

{
  if (j != (Object *)0x0) {
    pIVar1 = JContainer::JContainer_Descendants((JContainer *)j,(MethodInfo *)0x0);
    return pIVar1;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pIVar1 = (IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)(*pcVar4)();
  return pIVar1;
}

