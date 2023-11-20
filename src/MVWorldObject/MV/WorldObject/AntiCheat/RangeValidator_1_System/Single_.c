
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Single]::
         RangeValidator_1_System_Single__ToString
                   (RangeValidator_1_System_Single_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_min__0___max__1__);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  pRVar2 = this;
  this = (RangeValidator_1_System_Single_ *)(this->fields).min;
  arg0 = (Object *)func_?(method->klass->rgctx_data->rgctxDataDummy,&this);
  method = (MethodInfo *)(pRVar2->fields).max;
  arg1 = (Object *)func_?(pMVar1->klass->rgctx_data->rgctxDataDummy,&method);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_min__0___max__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}


/* Single Validate(Single, Boolean) */

float MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Single]::
      RangeValidator_1_System_Single__Validate
                (RangeValidator_1_System_Single_ *this,float value,bool fixIfInValid,
                MethodInfo *method)

{
  pMVar1 = method;
  iVar2 = mscorlib.dll::System::Single::Single_CompareTo_1
                    ((Single *)&value,(this->fields).min,method->klass->rgctx_data[3].method);
  if (iVar2 < 0) {
    if (fixIfInValid != 0) {
      return (this->fields).min;
    }
  }
  else {
    iVar2 = mscorlib.dll::System::Single::Single_CompareTo_1
                      ((Single *)&value,(this->fields).max,pMVar1->klass->rgctx_data[3].method);
    if (iVar2 < 1) {
      return value;
    }
    if (fixIfInValid != 0) {
      return (this->fields).max;
    }
    value = (float)&TypeInfo__System__Exception;
    func_?();
    pEVar3 = (Exception *)func_?();
    value = 0.0;
    pSVar4 = (String *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)value);
    in_stack_5 = pMVar1;
    _fixIfInValid = &UNK_?;
    method = (MethodInfo *)pEVar3;
    func_?();
  }
  uVar6 = func_?(&TypeInfo__System__Exception);
  pEVar3 = (Exception *)func_?(uVar6);
  method_00 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_value__minVal);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,method_00);
  value = (float)pMVar1;
  func_?();
  pcVar7 = (code *)swi(3);
  fVar8 = (float10)(*pcVar7)();
  return (float)fVar8;
}


/* RangeValidator`1[System.Single](Single, Single) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Single]::
     RangeValidator_1_System_Single___ctor_1
               (RangeValidator_1_System_Single_ *this,float min,float max,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).min = min;
  (this->fields).max = max;
  return;
}

