
/* KogamaSettingEnumBase(String, Int32, Int32, Int32, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
               (KogamaSettingEnumBase *this,String *key,int32_t value,int32_t min,int32_t max,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnum
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (this->fields)._._._Parent_k__BackingField = parent;
  func_?(&(this->fields)._._._Parent_k__BackingField,parent);
  (this->fields)._._.key = key;
  func_?(&this->fields,key);
  this_01 = (KogamaSettingEnum *)
            func_?(
                           TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnum
                           );
  if (this_01 != (KogamaSettingEnum *)0x0) {
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
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)this_01,ExceptionArgument__Enum_obj,unaff_EBX);
    this_02 = (Tuple_2_Int32_Int32_ *)
              func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
    if (this_02 != (Tuple_2_Int32_Int32_ *)0x0) {
      mscorlib.dll::System::Tuple`2[Int32,Int32]::Tuple_2_Int32_Int32___ctor
                (this_02,min,max,
                 MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator_int__int_
                );
      (this_01->fields).RangeValidator = (RangeValidator_1_System_Int32_ *)this_02;
      func_?(&(this_01->fields).RangeValidator,this_02);
      this_00 = (this_01->fields).RangeValidator;
      if (this_00 != (RangeValidator_1_System_Int32_ *)0x0) {
        AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                  (this_00,value,0,
                   MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_)
        ;
        KogamaSettingEnum::KogamaSettingEnum_set_EnumValue(this_01,value,(MethodInfo *)0x0);
        (this->fields).KogamaSettingEnum = this_01;
        func_?(&(this->fields).KogamaSettingEnum,this_01);
        return;
      }
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Int32 get_EnumValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingEnumBase::KogamaSettingEnumBase_get_EnumValue
                  (KogamaSettingEnumBase *this,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingEnum;
  if (pKVar1 != (KogamaSettingEnum *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Int32);
      cRam_? = '\x01';
    }
    pOVar2 = (pKVar1->fields)._.value;
    if (pOVar2 != (Object *)0x0) {
      pIVar3 = TypeInfo__System__Int32;
      if ((pOVar2->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
        piVar4 = (int32_t *)func_?(pOVar2);
        return *piVar4;
      }
      goto code_?;
    }
  }
  func_?();
  pOVar2 = extraout_ECX;
  pIVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pIVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Void set_EnumValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnumBase::KogamaSettingEnumBase_set_EnumValue
               (KogamaSettingEnumBase *this,int32_t value,MethodInfo *method)

{
  pKVar1 = (this->fields).KogamaSettingEnum;
  if (pKVar1 != (KogamaSettingEnum *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (pKVar1->fields).RangeValidator;
    if (this_00 != (RangeValidator_1_System_Int32_ *)0x0) {
      AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                (this_00,value,1,
                 MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_);
      pOVar2 = (Object *)func_?();
      (pKVar1->fields)._.value = pOVar2;
      func_?();
      if ((pKVar1->fields)._.OnValueChange !=
          (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
        (*(((pKVar1->fields)._.OnValueChange)->fields)._._.invoke_impl)();
      }
      return;
    }
  }
  uVar3 = func_?(&stack0xffffffe8);
  func_?(uVar3);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

