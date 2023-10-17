
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Object]::
         RangeValidator_1_System_Object__ToString
                   (RangeValidator_1_System_Object_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_min__0___max__1__);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_min__0___max__1__,(this->fields).min,(this->fields).max,
                      (MethodInfo *)0x0);
  return pSVar1;
}


/* Object Validate(Object, Boolean) */

Object * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Object]::
         RangeValidator_1_System_Object__Validate
                   (RangeValidator_1_System_Object_ *this,Object *value,bool fixIfInValid,
                   MethodInfo *method)

{
  pOVar1 = (this->fields).min;
  if (value == (Object *)0x0) {
    func_?();
  }
  else {
    pvVar2 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    iVar3 = func_?(0,pvVar2,value,pOVar1);
    if (iVar3 < 0) {
      if (fixIfInValid != 0) {
        return (this->fields).min;
      }
      goto code_?;
    }
    pOVar1 = (this->fields).max;
    pvVar2 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar2 + 0xba) & 1) == 0) {
      pvVar2 = (void *)func_?(pvVar2);
    }
    iVar3 = func_?(0,pvVar2,value,pOVar1);
    if (iVar3 < 1) {
      return value;
    }
    if (fixIfInValid != 0) {
      return (this->fields).max;
    }
  }
  uVar4 = func_?(&TypeInfo__System__Exception);
  pEVar5 = (Exception *)func_?(uVar4);
  func_?(pEVar5);
  pMVar6 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_value___maxVal);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar7,pMVar6);
  uVar4 = func_?(&
                          MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<System::Object>__Validate_System__Object__bool_
                         );
  func_?(pEVar5,uVar4);
code_?:
  uVar4 = func_?(&TypeInfo__System__Exception);
  pEVar5 = (Exception *)func_?(uVar4);
  func_?(pEVar5);
  pMVar6 = (MethodInfo *)0x0;
  pSVar7 = (String *)func_?(&StringLiteral_value__minVal);
  mscorlib.dll::System::Exception::Exception__ctor_1(pEVar5,pSVar7,pMVar6);
  uVar4 = func_?(&
                          MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<System::Object>__Validate_System__Object__bool_
                         );
  func_?(pEVar5,uVar4);
  pcVar8 = (code *)swi(3);
  pOVar1 = (Object *)(*pcVar8)();
  return pOVar1;
}


/* Void ValidateRange() */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Object]::
     RangeValidator_1_System_Object__ValidateRange
               (RangeValidator_1_System_Object_ *this,MethodInfo *method)

{
  pOVar1 = (this->fields).min;
  if ((this->fields).max != (Object *)0x0) {
    pOVar2 = (this->fields).max;
    pvVar3 = method->klass->rgctx_data[1].rgctxDataDummy;
    if ((*(byte *)((int)pvVar3 + 0xba) & 1) == 0) {
      pvVar3 = (void *)func_?(pvVar3);
    }
    iVar4 = func_?(0,pvVar3,pOVar2,pOVar1);
    if (-1 < iVar4) {
      return;
    }
    uVar5 = func_?(&TypeInfo__System__Exception);
    this_00 = (Exception *)func_?(uVar5);
    func_?(this_00);
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?(&StringLiteral_Min_range_greater_than_max_range);
    mscorlib.dll::System::Exception::Exception__ctor_1(this_00,message,method_00);
    func_?(&
                    MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<System::Object>__ValidateRange__
                   );
    func_?(this_00);
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

