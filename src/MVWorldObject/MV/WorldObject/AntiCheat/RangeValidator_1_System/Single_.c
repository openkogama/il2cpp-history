
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Single]::
         RangeValidator_1_System_Single__ToString
                   (RangeValidator_1_System_Single_ *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_min__0___max__1__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  afStackX_8[0] = (this->fields).min;
  arg0 = (Object *)FUN_?(method->klass->rgctx_data->rgctxDataDummy,afStackX_8);
  afStackX_8[0] = (this->fields).max;
  arg1 = (Object *)FUN_?(method->klass->rgctx_data->rgctxDataDummy,afStackX_8);
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


/* Single Validate(Single, Boolean) */

float MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Single]::
      RangeValidator_1_System_Single__Validate
                (RangeValidator_1_System_Single_ *this,float value,bool fixIfInValid,
                MethodInfo *method)

{
  fVar1 = (this->fields).min;
  if ((value < fVar1) ||
     ((((value <= fVar1 && (value != fVar1)) && (0x7f800000 < (uint)ABS(value))) &&
      ((uint)ABS(fVar1) < 0x7f800001)))) {
    if (fixIfInValid == 0) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar3 = (Exception *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_value__minVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
      FUN_?(pEVar3,method);
      pcVar5 = (code *)swi(3);
      fVar1 = (float)(*pcVar5)();
      return fVar1;
    }
  }
  else {
    fVar6 = (this->fields).max;
    fVar1 = value;
    if (((fVar6 <= value) &&
        ((fVar6 < value || ((value != fVar6 && ((uint)ABS(value) < 0x7f800001)))))) &&
       (fVar1 = fVar6, fixIfInValid == 0)) {
      uVar2 = func_?(&TypeInfo__System__Exception);
      pEVar3 = (Exception *)func_?(uVar2);
      pSVar4 = (String *)func_?(&StringLiteral_value___maxVal);
      mscorlib.dll::System::Exception::Exception__ctor_1(pEVar3,pSVar4,(MethodInfo *)0x0);
      FUN_?(pEVar3,method);
      pcVar5 = (code *)swi(3);
      fVar1 = (float)(*pcVar5)();
      return fVar1;
    }
  }
  return fVar1;
}


/* RangeValidator`1[System.Single](Single, Single) */

void MVWorldObject.dll::MV::WorldObject::AntiCheat::RangeValidator`1[System::Single]::
     RangeValidator_1_System_Single___ctor_1
               (RangeValidator_1_System_Single_ *this,float min,float max,MethodInfo *method)

{
  (this->fields).min = min;
  (this->fields).max = max;
  return;
}

