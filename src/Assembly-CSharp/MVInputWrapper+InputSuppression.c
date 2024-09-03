
/* MVInputWrapper+InputSuppression(Boolean) */

void Assembly-CSharp.dll::MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression__ctor
               (MVInputWrapper_InputSuppression *this,bool a,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (*(code *)(this->klass->vtable).set_IsSuppressed.method)(this,_a,this->klass[1]._0.image);
  return;
}


/* Boolean get_IsSuppressed() */

bool Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_get_IsSuppressed
               (MVInputWrapper_InputSuppression *this,MethodInfo *method)

{
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  iVar2 = (this->fields).suppressionFrame;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  uVar3 = iVar1 - iVar2;
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  uVar4 = (int)uVar3 >> 0x1f;
  return (int)((uVar3 ^ uVar4) - uVar4) < 2;
}


/* MVInputWrapper+InputSuppression op_Implicit(Boolean) */

MVInputWrapper_InputSuppression *
Assembly-CSharp.dll::MVInputWrapper+InputSuppression::MVInputWrapper_InputSuppression_op_Implicit
          (bool a,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper__InputSuppression);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVInputWrapper__InputSuppression;
  value = (MVInputWrapper_InputSuppression *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (*(code *)(value->klass->vtable).set_IsSuppressed.method)
            (value,_a,((_union_86 *)&value->klass[1]._0)->dummy);
  return value;
}


/* Boolean op_Implicit(MVInputWrapper+InputSuppression) */

bool Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_op_Implicit_1
               (MVInputWrapper_InputSuppression *a,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  if (a != (MVInputWrapper_InputSuppression *)0x0) {
    pIStack_1 = (a->klass->vtable).set_IsSuppressed.methodPtr;
    pMStack_2 = a;
    bVar3 = (*(code *)(a->klass->vtable).get_IsSuppressed.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Void set_IsSuppressed(Boolean) */

void Assembly-CSharp.dll::MVInputWrapper+InputSuppression::
     MVInputWrapper_InputSuppression_set_IsSuppressed
               (MVInputWrapper_InputSuppression *this,bool value,MethodInfo *method)

{
  if (value == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_frameCount((MethodInfo *)0x0);
  }
  if (this != (MVInputWrapper_InputSuppression *)0x0) {
    (this->fields).suppressionFrame = iVar1;
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

