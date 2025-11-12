
/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CullingApiTest+TestClass::CullingApiTest_TestClass_OnStateChanged
               (CullingApiTest_TestClass *this,CullingGroupEvent cullingGroupEvent,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_cullingGroupEvent_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Number);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((MethodInfo__System__ReadOnlySpan<wchar_t>__op_Implicit_System__Char____->klass->field_0x135 &
      1) == 0) {
    FUN_?();
  }
  if (*(int *)&(TypeInfo__System__Number->_1).field_0x1c == 0) {
    FUN_?();
  }
  RStack_1._pointer._value = (void *)0x0;
  RStack_1._length = 0;
  RStack_1._12_4_ = 0;
  pSVar2 = mscorlib.dll::System::Number::Number_FormatInt32
                     (cullingGroupEvent.m_Index,&RStack_1,(IFormatProvider *)0x0,(MethodInfo *)0x0)
  ;
  pSVar2 = mscorlib.dll::System::String::String_Concat_4
                     (StringLiteral_cullingGroupEvent_,pSVar2,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__ILogger);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
  if (pIVar3 != (ILogger_1 *)0x0) {
    pSStack_4 = pSVar2;
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,3);
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

