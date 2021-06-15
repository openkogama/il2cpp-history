
/* Int32 CompareTo(Object) */

int32_t Assembly-CSharp.dll::ImpactState+ImpactDamageRuntimeEventType::
        ImpactState_ImpactDamageRuntimeEventType_CompareTo
                  (ImpactState_ImpactDamageRuntimeEventType *this,Object *obj,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  if (obj == (Object *)0x0) {
    return 1;
  }
  bVar2 = (TypeInfo__ImpactState__ImpactDamageRuntimeEventType->_1).naturalAligment;
  if (((obj->klass->_1).naturalAligment < bVar2) ||
     ((obj->klass->_1).typeHierarchy[bVar2 - 1] !=
      (Il2CppClass *)TypeInfo__ImpactState__ImpactDamageRuntimeEventType)) {
    bVar3 = false;
  }
  else {
    bVar3 = true;
  }
  pOVar4 = (Object *)0x0;
  if (bVar3) {
    pOVar4 = obj;
  }
  if (pOVar4 != (Object *)0x0) {
    fStack_1 = (this->fields).damageThreshold;
    iVar5 = func_?(&fStack_1,pOVar4[1].klass,0);
    return iVar5;
  }
  this_00 = (ArgumentException *)func_?(TypeInfo__System__ArgumentException);
  mscorlib.dll::System::ArgumentException::ArgumentException__ctor_1
            (this_00,StringLiteral_Object_is_not_a_ImpactDamageRunt,(MethodInfo *)0x0);
  fStack_1 = 0.0;
  func_?(this_00);
  pcVar6 = (code *)swi(3);
  iVar5 = (*pcVar6)();
  return iVar5;
}


/* String ToString() */

String * Assembly-CSharp.dll::ImpactState+ImpactDamageRuntimeEventType::
         ImpactState_ImpactDamageRuntimeEventType_ToString
                   (ImpactState_ImpactDamageRuntimeEventType *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pIVar1 = this;
  this = (ImpactState_ImpactDamageRuntimeEventType *)
         CONCAT13((this->fields).runtimeEventType,this._0_3_);
  arg0 = (Object *)func_?(TypeInfo__MV__Common__RuntimeEventType,(int)&this + 3);
  fStack_2 = (pIVar1->fields).damageThreshold;
  arg1 = (Object *)func_?(TypeInfo__System__Single,&fStack_2);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
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
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  (this->fields).damageThreshold = damageThreshold;
  (this->fields).runtimeEventType = (undefined1)runtimeEventType;
  return;
}

