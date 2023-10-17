
/* IEnumerable`1[Newtonsoft.Json.Linq.JProperty] <Properties>b__2_0(JObject) */

IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *
Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<>c::LinqExtensions_c__Properties_b__2_0
          (LinqExtensions_c *this,JObject *d,MethodInfo *method)

{
  if (d != (JObject *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__Cast<Newtonsoft::Json::Linq::JProperty>_System__Collections__IEnumerable_
                     );
      cRam_? = '\x01';
    }
    source = (IEnumerable *)
             (*(d->klass->vtable).get_ChildrenTokens.methodPtr)
                       (d,(d->klass->vtable).get_ChildrenTokens.method);
    pIVar1 = System.Core.dll::System::Linq::Enumerable::Enumerable_Cast_4
                       (source,
                        System__Collections__Generic__IEnumerable<Newtonsoft::Json::Linq::JProperty>_MethodInfo__System__Linq__Enumerable__Cast<Newtonsoft::Json::Linq::JProperty>_System__Collections__IEnumerable_
                       );
    return (IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *)pIVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pIVar3 = (IEnumerable_1_Newtonsoft_Json_Linq_JProperty_ *)(*pcVar2)();
  return pIVar3;
}


/* LinqExtensions+<>c() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::LinqExtensions+<>c::LinqExtensions_c__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c);
    cRam_? = '\x01';
  }
  value = (LinqExtensions_c *)func_?(TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c)
  ;
  if (value != (LinqExtensions_c *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c->static_fields->__9 = value;
    func_?(TypeInfo__Newtonsoft__Json__Linq__LinqExtensions____c->static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

