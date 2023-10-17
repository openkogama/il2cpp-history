
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
  pvVar3 = method->klass->rgctx_data->rgctxDataDummy;
  if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
    pvVar3 = (void *)func_?(pvVar3);
  }
  arg0 = (Object *)func_?(pvVar3,&this);
  method = (MethodInfo *)(pRVar2->fields).max;
  pvVar3 = pMVar1->klass->rgctx_data->rgctxDataDummy;
  if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
    pvVar3 = (void *)func_?(pvVar3);
  }
  arg1 = (Object *)func_?(pvVar3,&method);
  pSVar4 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_min__0___max__1__,arg0,arg1,(MethodInfo *)0x0);
  return pSVar4;
}


/* Int32 Validate(Int32, Boolean) */

int32_t MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Int32]::
        RangeValidator_1_System_Int32__Validate
                  (RangeValidator_1_System_Int32_ *this,int32_t value,bool fixIfInValid,
                  MethodInfo *method)

{
  pMVar1 = method;
  iVar2 = mscorlib.dll::System::Int32::Int32_CompareTo_1
                    ((Int32 *)&value,(this->fields).min,method->klass->rgctx_data[2].method);
  if (iVar2 < 0) {
    if (fixIfInValid != 0) {
      return (this->fields).min;
    }
  }
  else {
    iVar2 = mscorlib.dll::System::Int32::Int32_CompareTo_1
                      ((Int32 *)&value,(this->fields).max,pMVar1->klass->rgctx_data[2].method);
    if (iVar2 < 1) {
      return value;
    }
    if (fixIfInValid != 0) {
      return (this->fields).max;
    }
    value = (int32_t)&TypeInfo__System__Exception;
    func_?();
    pEVar3 = (Exception *)func_?();
    func_?();
    value = 0;
    pSVar4 = (String *)func_?();
    mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)value);
    value = (int32_t)&
                     MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
    ;
    in_stack_5 = func_?();
    _fixIfInValid = &UNK_?;
    method = (MethodInfo *)pEVar3;
    func_?();
  }
  uVar6 = func_?(&TypeInfo__System__Exception);
  pEVar3 = (Exception *)func_?(uVar6);
  func_?(pEVar3);
  pMVar1 = (MethodInfo *)0x0;
  pSVar4 = (String *)func_?(&StringLiteral_value__minVal);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,pMVar1);
  value = func_?(&
                          MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                         );
  func_?();
  pcVar7 = (code *)swi(3);
  iVar2 = (*pcVar7)();
  return iVar2;
}


/* Void ValidateRange() */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Int32]::
     RangeValidator_1_System_Int32__ValidateRange
               (RangeValidator_1_System_Int32_ *this,MethodInfo *method)

{
  iVar1 = mscorlib.dll::System::Int32::Int32_CompareTo_1
                    ((Int32 *)&(this->fields).max,(this->fields).min,
                     method->klass->rgctx_data[2].method);
  if (-1 < iVar1) {
    return;
  }
  uVar2 = func_?();
  this_00 = (Exception *)func_?(uVar2);
  func_?(this_00);
  method_00 = (MethodInfo *)0x0;
  message = (String *)func_?(&StringLiteral_Min_range_greater_than_max_range);
  mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
  uStack3 = func_?();
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

