
/* KogamaSettingEnumBase(String, Int32, Int32, Int32, KogamaSettingsCollectionBase) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnumBase::KogamaSettingEnumBase__ctor
               (KogamaSettingEnumBase *this,String *key,int32_t value,int32_t min,int32_t max,
               KogamaSettingsCollectionBase *parent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._._._Parent_k__BackingField = parent;
  (this->fields)._._.key = key;
  obj = (Dictionary_2_System_String_System_Object_ *)
        func_?(
                       TypeInfo__MV__WorldObject__KogamaSettings__KogamaSettingsCore__KogamaSettingTypes__KogamaSettingEnum
                       );
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)obj,0.0,unaff_EBX);
  pSVar1 = (String__Array *)
           func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  System.Core.dll::System::Linq::SortContext`1[System::Collections::Generic::KeyValuePair`2[System::
  Int32,System::Int32]]::
  SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32___ctor
            ((SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_ *)
             pSVar1,min,
             (SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_ *)
             max,
             MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator_int__int_);
  (obj->fields).keySlots = pSVar1;
  if (pSVar1 != (String__Array *)0x0) {
    value = (int32_t)
            MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
    AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
              ((RangeValidator_1_System_Int32_ *)pSVar1,
               (int32_t)
               MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_,0,
               MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_);
    if (cRam_? == '\0') {
      method = _UNK_?;
      parent = (KogamaSettingsCollectionBase *)&UNK_?;
      func_?();
      cRam_? = '\x01';
    }
    value_00 = value;
    pSVar1 = (obj->fields).keySlots;
    if (pSVar1 != (String__Array *)0x0) {
      method = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
      parent = (KogamaSettingsCollectionBase *)0x1;
      max = value;
      value = (int32_t)&UNK_?;
      min = (int32_t)pSVar1;
      value = AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                        ((RangeValidator_1_System_Int32_ *)pSVar1,value_00,1,
                         MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                        );
      method = (MethodInfo *)&value;
      parent = (KogamaSettingsCollectionBase *)TypeInfo__System__Int32;
      max = (int32_t)&UNK_?;
      pIVar2 = (Int32__Array *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (obj->fields).linkSlots;
      (obj->fields).table = pIVar2;
      if (this_00 != (Link__Array *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  ((Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                   this_00,obj,
                   MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
                  );
      }
      (this->fields).KogamaSettingEnum = (KogamaSettingEnum *)obj;
      return;
    }
  }
  method = (MethodInfo *)0x0;
  parent = (KogamaSettingsCollectionBase *)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
      func_?(_UNK_?);
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
  func_?(0);
  pOVar2 = extraout_ECX;
  pIVar3 = extraout_EDX;
code_?:
  func_?(pOVar2,pIVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

