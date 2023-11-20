
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingEnum::KogamaSettingEnum_ToString(KogamaSettingEnum *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Value__0____1_);
    cRam_? = '\x01';
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_Value__0____1_,(this->fields)._.value,
                      (Object *)(this->fields).RangeValidator,(MethodInfo *)0x0);
  return pSVar1;
}


/* KogamaSettingEnum(Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnum::KogamaSettingEnum__ctor
               (KogamaSettingEnum *this,int32_t value,int32_t min,int32_t max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                   );
    func_?(&
                    MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator_int__int_
                   );
    func_?(&TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Tuple_2_Int32_Int32_ *)
            func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  mscorlib.dll::System::Tuple`2[Int32,Int32]::Tuple_2_Int32_Int32___ctor
            (this_00,min,max,
             MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator_int__int_);
  (this->fields).RangeValidator = (RangeValidator_1_System_Int32_ *)this_00;
  func_?(&(this->fields).RangeValidator,this_00);
  value_00 = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
  pRVar1 = (this->fields).RangeValidator;
  if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
    AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
              (pRVar1,(int32_t)
                      MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
               ,0,MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_);
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    pRVar1 = (this->fields).RangeValidator;
    if (pRVar1 != (RangeValidator_1_System_Int32_ *)0x0) {
      AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                (pRVar1,(int32_t)value_00,1,
                 MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_);
      pOVar2 = (Object *)func_?();
      (this->fields)._.value = pOVar2;
      func_?();
      if ((this->fields)._.OnValueChange !=
          (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
        pAVar3 = (this->fields)._.OnValueChange;
        pvStack4 = (pAVar3->fields)._._.method;
        pKStack5 = this;
        pvStack6 = (pAVar3->fields)._._.method_code;
        (*(pAVar3->fields)._._.invoke_impl)();
      }
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Int32 get_EnumValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingEnum::KogamaSettingEnum_get_EnumValue
                  (KogamaSettingEnum *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    pIStack_1 = (Int32__Class *)&TypeInfo__System__Int32;
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = (this->fields)._.value;
  if (pOVar2 != (Object *)0x0) {
    if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      pIStack_1 = (Int32__Class *)pOVar2;
      piVar3 = (int32_t *)func_?();
      return *piVar3;
    }
    pIStack_1 = TypeInfo__System__Int32;
    pOStack_4 = pOVar2;
    func_?();
    pcVar5 = (code *)swi(3);
    iVar6 = (*pcVar5)();
    return iVar6;
  }
  pIStack_1 = (Int32__Class *)&stack0xfffffffc;
  uVar7 = func_?(&puStack_8);
  func_?(uVar7);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_EnumValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnum::KogamaSettingEnum_set_EnumValue
               (KogamaSettingEnum *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                   );
    cRam_? = '\x01';
  }
  pKVar1 = this;
  this_00 = (this->fields).RangeValidator;
  if (this_00 != (RangeValidator_1_System_Int32_ *)0x0) {
    this = (KogamaSettingEnum *)
           AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                     (this_00,value,1,
                      MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                     );
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&this);
    (pKVar1->fields)._.value = pOVar2;
    func_?(&pKVar1->fields,pOVar2);
    if ((pKVar1->fields)._.OnValueChange !=
        (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
      pAVar3 = (pKVar1->fields)._.OnValueChange;
      this = (pAVar3->fields)._._.method;
      (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code);
    }
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

