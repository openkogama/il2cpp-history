
/* JContainer+JTokenReferenceEqualityComparer() */

void Assembly-CSharp.dll::Newtonsoft::Json::Linq::JContainer+JTokenReferenceEqualityComparer::
     JContainer_JTokenReferenceEqualityComparer__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer);
    cRam_? = '\x01';
  }
  value = (JContainer_JTokenReferenceEqualityComparer *)
          func_?(
                         TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer
                         );
  if (value != (JContainer_JTokenReferenceEqualityComparer *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)value,ExceptionArgument__Enum_obj,unaff_ESI);
    TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->static_fields->
    Instance = value;
    func_?(TypeInfo__Newtonsoft__Json__Linq__JContainer__JTokenReferenceEqualityComparer->
                    static_fields,value);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

