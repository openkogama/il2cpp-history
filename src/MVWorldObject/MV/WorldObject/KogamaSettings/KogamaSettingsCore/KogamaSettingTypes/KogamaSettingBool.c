
/* String ToString() */

String * MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes
         ::KogamaSettingBool::KogamaSettingBool_ToString(KogamaSettingBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  arg0 = (this->fields)._.value;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar1 = mscorlib.dll::System::String::String_Format
                     (StringLiteral_Value__0_,arg0,(MethodInfo *)0x0);
  return pSVar1;
}


/* KogamaSettingBool(Boolean) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBool::KogamaSettingBool__ctor
               (KogamaSettingBool *this,bool value,MethodInfo *method)

{
  Assembly-CSharp.dll::ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,0.0,unaff_EBP);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  uVar1 = func_?(TypeInfo__System__Boolean,&stack0x00000013);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uRam_? = uVar1;
  if (pARam0000000c !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (pARam0000000c,(Dictionary_2_System_String_System_Object_ *)0x0,
               MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
              );
  }
  return;
}


/* Boolean get_ValueBool() */

bool MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBool::KogamaSettingBool_get_ValueBool(KogamaSettingBool *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOVar1 = (this->fields)._.value;
  if (pOVar1 == (Object *)0x0) {
    func_?(0);
    pOVar1 = extraout_ECX;
    pBVar2 = extraout_EDX;
  }
  else {
    pBVar2 = TypeInfo__System__Boolean;
    if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
      pbVar3 = (bool *)func_?(pOVar1);
      return *pbVar3;
    }
  }
  func_?(pOVar1,pBVar2);
  pcVar4 = (code *)swi(3);
  bVar5 = (*pcVar4)();
  return bVar5;
}


/* Void set_ValueBool(Boolean) */

void MVWorldObject.dll::MV::WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
     KogamaSettingBool::KogamaSettingBool_set_ValueBool
               (KogamaSettingBool *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  bStack1 = value;
  pOVar2 = (Object *)func_?(TypeInfo__System__Boolean,&stack0x0000000b);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)
            (this->fields)._.OnValueChange;
  (this->fields)._.value = pOVar2;
  if (this_00 !=
      (Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object_ *)0x0) {
    mscorlib.dll::System::Action`1[System::Collections::Generic::Dictionary`2[System::String,System
    ::Object]]::Action_1_System_Collections_Generic_Dictionary_2_System_String_System_Object__Invoke
              (this_00,(Dictionary_2_System_String_System_Object_ *)this,
               MethodInfo__System__Action<MV::WorldObject::KogamaSettings::KogamaSettingsCore::IKogamaSetting>__Invoke_MV__WorldObject__KogamaSettings__KogamaSettingsCore__IKogamaSetting_
              );
  }
  return;
}

