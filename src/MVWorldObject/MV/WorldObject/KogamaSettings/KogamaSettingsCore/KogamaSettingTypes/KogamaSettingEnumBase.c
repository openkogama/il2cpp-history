
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
  pKVar1 = this;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  (pKVar1->fields)._._._Parent_k__BackingField = parent;
  func_?(&pKVar1->fields,parent);
  (pKVar1->fields)._._.key = key;
  func_?(&(pKVar1->fields)._._.key,key);
  value_01 = (KogamaSettingEnum *)
             func_?(
                            TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnum
                            );
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
            ((Object *)value_01,ExceptionArgument__Enum_obj,unaff_ESI);
  this_00 = (Tuple_2_Int32_Int32_ *)
            func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  mscorlib.dll::System::Tuple`2[Int32,Int32]::Tuple_2_Int32_Int32___ctor
            (this_00,min,max,
             MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator_int__int_);
  (value_01->fields).RangeValidator = (RangeValidator_1_System_Int32_ *)this_00;
  func_?(&(value_01->fields).RangeValidator,this_00);
  value_00 = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
  pRVar2 = (value_01->fields).RangeValidator;
  if (pRVar2 != (RangeValidator_1_System_Int32_ *)0x0) {
    value = (int32_t)
            MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
    key = (String *)0x0;
    this = (KogamaSettingEnumBase *)
           MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
    AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
              (pRVar2,(int32_t)
                      MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
               ,0,MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_);
    if (cRam_? == '\0') {
      method = (MethodInfo *)&TypeInfo__System__Int32;
      parent = (KogamaSettingsCollectionBase *)&UNK_?;
      func_?();
      parent = (KogamaSettingsCollectionBase *)
               &MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
      max = (int32_t)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    pRVar2 = (value_01->fields).RangeValidator;
    if (pRVar2 != (RangeValidator_1_System_Int32_ *)0x0) {
      method = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
      parent = (KogamaSettingsCollectionBase *)0x1;
      max = (int32_t)value_00;
      value = (int32_t)&UNK_?;
      min = (int32_t)pRVar2;
      this = (KogamaSettingEnumBase *)
             AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                       (pRVar2,(int32_t)value_00,1,
                        MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                       );
      method = (MethodInfo *)&this;
      parent = (KogamaSettingsCollectionBase *)TypeInfo__System__Int32;
      max = (int32_t)&UNK_?;
      max = func_?();
      (value_01->fields)._.value = (Object *)max;
      min = (int32_t)&value_01->fields;
      value = (int32_t)&UNK_?;
      func_?();
      if ((value_01->fields)._.OnValueChange !=
          (Action_1_MV_WorldObject_KogamaSettings_KogamaSettingsCore_IKogamaSetting_ *)0x0) {
        pAVar3 = (value_01->fields)._.OnValueChange;
        pKStack4 = (pAVar3->fields)._._.method;
        puStack5 = (pAVar3->fields)._._.method_code;
        in_stack_6.genericMethod = (Il2CppGenericMethod *)&UNK_?;
        pKStack7 = value_01;
        (*(pAVar3->fields)._._.invoke_impl)();
      }
      pKStack7 = (KogamaSettingEnum *)&(pKVar1->fields).KogamaSettingEnum;
      (pKVar1->fields).KogamaSettingEnum = value_01;
      pKStack4 = value_01;
      func_?();
      return;
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

