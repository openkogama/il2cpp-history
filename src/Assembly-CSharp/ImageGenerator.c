
/* IEnumerator CreateTextureFromData(MVWorldObjectClient, Action`1[Byte[]]) */

IEnumerator *
Assembly-CSharp.dll::ImageGenerator::ImageGenerator_CreateTextureFromData
          (MVWorldObjectClient *wo,Action_1_Byte_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ImageGenerator___CreateTextureFromData_d__0);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__ImageGenerator___CreateTextureFromData_d__0);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)wo;
    func_?(value + 2,wo);
    value[2].monitor = (MonitorData *)callback;
    func_?(&value[2].monitor,callback);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}

