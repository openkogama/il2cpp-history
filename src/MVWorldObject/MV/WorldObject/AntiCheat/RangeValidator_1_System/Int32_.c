
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Int32]::
         RangeValidator_1_System_Int32__ToString
                   (RangeValidator_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_min__0___max__1__);
    cRam_? = '\x01';
  }
  pMVar1 = method;
  pRVar2 = this;
  this = (RangeValidator_1_System_Int32_ *)(this->fields).min;
  arg0 = (Object *)func_?(method->klass->rgctx_data->rgctxDataDummy,&this);
  method = (MethodInfo *)(pRVar2->fields).max;
  arg1 = (Object *)func_?(pMVar1->klass->rgctx_data->rgctxDataDummy,&method);
  pSVar3 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_min__0___max__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar3;
}


/* Int32 Validate(Int32, Boolean) */

int32_t MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Int32]::
        RangeValidator_1_System_Int32__Validate
                  (RangeValidator_1_System_Int32_ *this,int32_t value,bool fixIfInValid,
                  MethodInfo *method)

{
  pMVar1 = method;
  iVar2 = mscorlib.dll::System::Int32::Int32_CompareTo_1
                    ((Int32 *)&value,(this->fields).min,method->klass->rgctx_data[3].method);
  if (iVar2 < 0) {
    if (fixIfInValid != 0) {
      return (this->fields).min;
    }
  }
  else {
    iVar2 = mscorlib.dll::System::Int32::Int32_CompareTo_1
                      ((Int32 *)&value,(this->fields).max,pMVar1->klass->rgctx_data[3].method);
    if (iVar2 < 1) {
      return value;
    }
    if (fixIfInValid != 0) {
      return (this->fields).max;
    }
    value = (int32_t)&TypeInfo__System__Exception;
    func_?();
    pEVar3 = (Exception *)func_?();
    value = 0;
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
  value = (int32_t)pMVar1;
  func_?();
  pcVar7 = (code *)swi(3);
  iVar2 = (*pcVar7)();
  return iVar2;
}

