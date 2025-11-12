
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Int32]::
         RangeValidator_1_System_Int32__ToString
                   (RangeValidator_1_System_Int32_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_min__0___max__1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).min;
  arg0 = (Object *)FUN_?(method->klass->rgctx_data->rgctxDataDummy,aiStackX_8);
  aiStackX_8[0] = (this->fields).max;
  arg1 = (Object *)FUN_?(method->klass->rgctx_data->rgctxDataDummy,aiStackX_8);
  pSVar1 = StringLiteral_min__0___max__1__;
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


/* Int32 Validate(Int32, Boolean) */

int32_t MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Int32]::
        RangeValidator_1_System_Int32__Validate
                  (RangeValidator_1_System_Int32_ *this,int32_t value,bool fixIfInValid,
                  MethodInfo *method)

{
  if (value < (this->fields).min) {
    if (fixIfInValid == 0) {
      uVar1 = func_?(&TypeInfo__System__Exception);
      pEVar2 = (Exception *)func_?(uVar1);
      pSVar3 = (String *)func_?(&StringLiteral_value__minVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar2,pSVar3,(MethodInfo *)0x0);
      FUN_?(pEVar2,method);
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
    iVar6 = (this->fields).min;
  }
  else {
    iVar6 = (this->fields).max;
    if (value <= iVar6) {
      return value;
    }
    if (fixIfInValid == 0) {
      uVar1 = func_?(&TypeInfo__System__Exception);
      pEVar2 = (Exception *)func_?(uVar1);
      pSVar3 = (String *)func_?(&StringLiteral_value___maxVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar2,pSVar3,(MethodInfo *)0x0);
      FUN_?(pEVar2,method);
      pcVar4 = (code *)swi(3);
      iVar5 = (*pcVar4)();
      return iVar5;
    }
  }
  return iVar6;
}

