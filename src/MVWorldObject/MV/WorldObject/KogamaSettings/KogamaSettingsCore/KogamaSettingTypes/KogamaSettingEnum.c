
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
  pKVar1 = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_01 = (Tuple_2_Int32_Int32_ *)
            func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  mscorlib.dll::System::Tuple`2[Int32,Int32]::Tuple_2_Int32_Int32___ctor
            (this_01,min,max,
             MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator_int__int_);
  ppRVar2 = &(pKVar1->fields).RangeValidator;
  *ppRVar2 = (RangeValidator_1_System_Int32_ *)this_01;
  func_?(ppRVar2,this_01);
  value_00 = value;
  if (*ppRVar2 != (RangeValidator_1_System_Int32_ *)0x0) {
    this = (KogamaSettingEnum *)
           MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
    AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
              (*ppRVar2,value,0,
               MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_);
    if (cRam_? == '\0') {
      method = (MethodInfo *)&TypeInfo__System__Int32;
      max = (int32_t)&UNK_?;
      func_?();
      max = (int32_t)&
                     MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
      ;
      min = (int32_t)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    this_00 = *ppRVar2;
    if (this_00 != (RangeValidator_1_System_Int32_ *)0x0) {
      method = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
      max = 1;
      min = value_00;
      this = (KogamaSettingEnum *)&UNK_?;
      value = (int32_t)this_00;
      this = (KogamaSettingEnum *)
             AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                       (this_00,value_00,1,
                        MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                       );
      method = (MethodInfo *)&this;
      max = (int32_t)TypeInfo__System__Int32;
      min = (int32_t)&UNK_?;
      min = func_?();
      value = (int32_t)&pKVar1->fields;
      (((KogamaSettingEnum__Fields *)value)->_).value = (Object *)min;
      this = (KogamaSettingEnum *)&UNK_?;
      func_?();
      pAVar3 = (pKVar1->fields)._.OnValueChange;
      if (pAVar3 != (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0
         ) {
        _Stack00000024 = (_union_155)(pAVar3->fields)._._.method;
        _Stack00000020.methodMetadataHandle = (Il2CppMetadataMethodDefinitionHandle)pKVar1;
        ppIStack4 = (pAVar3->fields)._._.method_code;
        (*(pAVar3->fields)._._.invoke_impl)();
      }
      return;
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
    pKVar3 = &pKVar1->fields;
    (pKVar3->_).value = pOVar2;
    func_?(pKVar3,pOVar2);
    pAVar4 = (pKVar1->fields)._.OnValueChange;
    if (pAVar4 != (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0)
    {
      this = (pAVar4->fields)._._.method;
      (*(pAVar4->fields)._._.invoke_impl)((pAVar4->fields)._._.method_code);
    }
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

