
/* Void SetAllPlacements(String[]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::Vungle::VungleMediationExtras::
     VungleMediationExtras_SetAllPlacements
               (VungleMediationExtras *this,String__Array *allPlacements,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&::StringLiteral__);
    func_?(&StringLiteral_all_placements);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  value = mscorlib.dll::System::String::String_Join
                    (::StringLiteral__,allPlacements,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_all_placements,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetSoundEnabled(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::Vungle::VungleMediationExtras::
     VungleMediationExtras_SetSoundEnabled
               (VungleMediationExtras *this,bool soundEnabled,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&StringLiteral_sound_enabled);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  if ((TypeInfo__System__Boolean->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Boolean);
  }
  value = mscorlib.dll::System::Boolean::Boolean_ToString
                    ((Boolean *)&soundEnabled,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_sound_enabled,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetUserId(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::Vungle::VungleMediationExtras::
     VungleMediationExtras_SetUserId(VungleMediationExtras *this,String *userId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,(Object *)StringLiteral_user_id,
               (Object *)userId,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* String get_IOSMediationExtraBuilderClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::Vungle::VungleMediationExtras::
         VungleMediationExtras_get_IOSMediationExtraBuilderClassName
                   (VungleMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_VungleExtrasBuilder);
    cRam_? = '\x01';
  }
  return StringLiteral_VungleExtrasBuilder;
}

