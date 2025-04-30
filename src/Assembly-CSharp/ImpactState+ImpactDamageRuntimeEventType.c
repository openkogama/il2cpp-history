
/* Int32 CompareTo(Object) */

int32_t Assembly-CSharp.dll::ImpactState+ImpactDamageRuntimeEventType::
        ImpactState_ImpactDamageRuntimeEventType_CompareTo
                  (ImpactState_ImpactDamageRuntimeEventType *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ImpactState__ImpactDamageRuntimeEventType);
    cRam_? = '\x01';
  }
  if (obj != (Object *)0x0) {
    bVar1 = (TypeInfo__ImpactState__ImpactDamageRuntimeEventType->_1).naturalAligment;
    if ((bVar1 <= (obj->klass->_1).naturalAligment) &&
       ((obj->klass->_1).typeHierarchy[bVar1 - 1] ==
        (Il2CppClass *)TypeInfo__ImpactState__ImpactDamageRuntimeEventType)) {
      iVar2 = mscorlib.dll::System::Single::Single_CompareTo_1
                        ((Single *)&this->fields,(float)obj[1].klass,(MethodInfo *)0x0);
      return iVar2;
    }
    uVar3 = func_?(&TypeInfo__System__ArgumentException);
    this_00 = (ArgumentException *)func_?(uVar3);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Object_is_not_a_ImpactDamageRunt);
    mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1(this_00,message,method_00);
    func_?(&
                    MethodInfo__ImpactState__ImpactDamageRuntimeEventType__CompareTo_System__Object_
                   );
    func_?(this_00);
    pcVar4 = (code *)swi(3);
    iVar2 = (*pcVar4)();
    return iVar2;
  }
  return 1;
}


/* String ToString() */

String * Assembly-CSharp.dll::ImpactState+ImpactDamageRuntimeEventType::
         ImpactState_ImpactDamageRuntimeEventType_ToString
                   (ImpactState_ImpactDamageRuntimeEventType *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__RuntimeEventType);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_RuntimeEventType___0___DamageThr);
    cRam_? = '\x01';
  }
  pIVar1 = this;
  this = (ImpactState_ImpactDamageRuntimeEventType *)
         CONCAT13((this->fields).runtimeEventType,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__MV__Common__RuntimeEventType,(int)&this + 3);
  fStack_2 = (pIVar1->fields).damageThreshold;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_RuntimeEventType___0___DamageThr,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}


/* ImpactState+ImpactDamageRuntimeEventType(Single, RuntimeEventType) */

void Assembly-CSharp.dll::ImpactState+ImpactDamageRuntimeEventType::
     ImpactState_ImpactDamageRuntimeEventType__ctor
               (ImpactState_ImpactDamageRuntimeEventType *this,float damageThreshold,
               RuntimeEventType__Enum runtimeEventType,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).damageThreshold = damageThreshold;
  (this->fields).runtimeEventType = (undefined1)runtimeEventType;
  return;
}

