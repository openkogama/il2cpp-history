
/* Int32 CompareTo(Object) */

int32_t Assembly-CSharp.dll::ImpactState+ImpactDamageRuntimeEventType::
        ImpactState_ImpactDamageRuntimeEventType_CompareTo
                  (ImpactState_ImpactDamageRuntimeEventType *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Object *)0x0) {
    return 1;
  }
  bVar1 = (TypeInfo__ImpactState__ImpactDamageRuntimeEventType->_1).naturalAligment;
  if (((obj->klass->_1).naturalAligment < bVar1) ||
     ((obj->klass->_1).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo__ImpactState__ImpactDamageRuntimeEventType)) {
    uVar2 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (InvalidEnumArgumentException *)func_?(uVar2);
    message = (String *)func_?(&StringLiteral_Object_is_not_a_ImpactDamageRunt);
    System.dll::System::ComponentModel::InvalidEnumArgumentException::
    InvalidEnumArgumentException__ctor_1(this_00,message,(MethodInfo *)0x0);
    uVar2 = func_?(&
                                MethodInfo__ImpactState__ImpactDamageRuntimeEventType__CompareTo_System__Object_
                               );
    FUN_?(this_00,uVar2);
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  fVar5 = *(float *)&obj[1].klass;
  if ((this->fields).damageThreshold <= fVar5 && fVar5 != (this->fields).damageThreshold) {
    return -1;
  }
  fVar6 = (this->fields).damageThreshold;
  if (fVar6 <= fVar5) {
    if (fVar6 == fVar5) {
      return 0;
    }
    if (0x7f800000 < (uint)ABS((this->fields).damageThreshold)) {
      return (0x7f800000 < (uint)ABS(fVar5)) - 1;
    }
  }
  return 1;
}


/* String ToString() */

String * Assembly-CSharp.dll::ImpactState+ImpactDamageRuntimeEventType::
         ImpactState_ImpactDamageRuntimeEventType_ToString
                   (ImpactState_ImpactDamageRuntimeEventType *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__Common__RuntimeEventType);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_RuntimeEventType___0___DamageThr);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = (float)CONCAT31(afStackX_8[0]._1_3_,(this->fields).runtimeEventType);
  arg0 = (Object *)FUN_?(TypeInfo__MV__Common__RuntimeEventType,afStackX_8);
  afStackX_8[0] = (this->fields).damageThreshold;
  arg1 = (Object *)FUN_?(uRam_?,afStackX_8);
  pSVar1 = StringLiteral_RuntimeEventType___0___DamageThr;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1(&PStack_2,arg0,arg1,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}


/* ImpactState+ImpactDamageRuntimeEventType(Single, RuntimeEventType) */

void Assembly-CSharp.dll::ImpactState+ImpactDamageRuntimeEventType::
     ImpactState_ImpactDamageRuntimeEventType__ctor
               (ImpactState_ImpactDamageRuntimeEventType *this,float damageThreshold,
               RuntimeEventType__Enum runtimeEventType,MethodInfo *method)

{
  (this->fields).damageThreshold = damageThreshold;
  (this->fields).runtimeEventType = (uint8_t)runtimeEventType;
  return;
}

