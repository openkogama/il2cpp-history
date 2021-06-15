
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingEnum::KogamaSettingEnum_ToString(KogamaSettingEnum *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg0 = (this->fields)._.value;
  arg1 = (this->fields).RangeValidator;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral_Value__0____1_,arg0,(Object *)arg1,(MethodInfo *)0x0);
  return pSVar1;
}


/* KogamaSettingEnum(Int32, Int32, Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnum::KogamaSettingEnum__ctor
               (KogamaSettingEnum *this,int32_t value,int32_t min,int32_t max,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EDI);
  this_02 = (SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_ *)
            func_?(TypeInfo__MV__WorldObject__AntiCheat__RangeValidator<int>);
  System.Core.dll::System::Linq::SortContext`1[System::Collections::Generic::KeyValuePair`2[System::
  Int32,System::Int32]]::
  SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32___ctor
            (this_02,min,
             (SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_ *)
             max,
             MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__RangeValidator_int__int_);
  (this->fields).RangeValidator = (RangeValidator_1_System_Int32_ *)this_02;
  value_00 = MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_;
  if (this_02 !=
      (SortContext_1_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Int32_ *)0x0) {
    AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
              ((RangeValidator_1_System_Int32_ *)this_02,
               (int32_t)
               MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_,0,
               MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (this->fields).RangeValidator;
    if (this_00 != (RangeValidator_1_System_Int32_ *)0x0) {
      AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                (this_00,(int32_t)value_00,1,
                 MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_);
      pOVar1 = (Object *)func_?();
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
                (this->fields)._.OnValueChange;
      (this->fields)._.value = pOVar1;
      if (this_01 !=
          (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
        mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
        String,System::Object]]::
        Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                  (this_01,(Dictionary_2_System_String_System_Object_ *)this,
                   MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
                  );
      }
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Int32 get_EnumValue() */

int32_t MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
        KogamaSettingEnum::KogamaSettingEnum_get_EnumValue
                  (KogamaSettingEnum *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.value;
  if (pOVar1 == (Object *)0x0) {
    func_?(0);
    pOVar1 = extraout_ECX;
    pIVar2 = extraout_EDX;
  }
  else {
    pIVar2 = TypeInfo__System__Int32;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Int32->_0).element_class) {
      piVar3 = (int32_t *)func_?(pOVar1);
      return *piVar3;
    }
  }
  func_?(pOVar1,pIVar2);
  pcVar4 = (code *)swi(3);
  iVar5 = (*pcVar4)();
  return iVar5;
}


/* Void set_EnumValue(Int32) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingEnum::KogamaSettingEnum_set_EnumValue
               (KogamaSettingEnum *this,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  obj = this;
  this_00 = (this->fields).RangeValidator;
  if (this_00 != (RangeValidator_1_System_Int32_ *)0x0) {
    this = (KogamaSettingEnum *)
           AntiCheat::RangeValidator`1[System::Int32]::RangeValidator_1_System_Int32__Validate
                     (this_00,value,1,
                      MethodInfo__MV__WorldObject__AntiCheat__RangeValidator<int>__Validate_int__bool_
                     );
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&this);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
              (obj->fields)._.OnValueChange;
    (obj->fields)._.value = pOVar1;
    if (this_01 !=
        (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
      this = (KogamaSettingEnum *)
             MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
      ;
      mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::
      String,System::Object]]::
      Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
                (this_01,(Dictionary_2_System_String_System_Object_ *)obj,
                 MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
                );
    }
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

