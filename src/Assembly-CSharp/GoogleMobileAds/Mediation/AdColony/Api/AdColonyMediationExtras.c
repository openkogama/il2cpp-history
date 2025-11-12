
/* Void SetShowPostPopup(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyMediationExtras::
     AdColonyMediationExtras_SetShowPostPopup
               (AdColonyMediationExtras *this,bool showPostPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_show_post_popup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = StringLiteral_False;
  if (showPostPopup != 0) {
    value = StringLiteral_True;
  }
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_show_post_popup,(Object *)value,
               CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetShowPrePopup(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyMediationExtras::
     AdColonyMediationExtras_SetShowPrePopup
               (AdColonyMediationExtras *this,bool showPrePopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_show_pre_popup);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  if (*(int *)(lRam_? + 0xe4) == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_False);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_True);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = StringLiteral_False;
  if (showPrePopup != 0) {
    value = StringLiteral_True;
  }
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__TryInsert
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_show_pre_popup,(Object *)value,
               CONCAT31((int3)((uint)in_R9D >> 8),2),
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
               ->klass->rgctx_data[0x22].method);
    return;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String get_AndroidMediationExtraBuilderClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyMediationExtras::
         AdColonyMediationExtras_get_AndroidMediationExtraBuilderClassName
                   (AdColonyMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_com_google_unity_mediation_adcol);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_com_google_unity_mediation_adcol;
}


/* String get_IOSMediationExtraBuilderClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::AdColony::Api::AdColonyMediationExtras::
         AdColonyMediationExtras_get_IOSMediationExtraBuilderClassName
                   (AdColonyMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_AdColonyExtrasBuilder);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_AdColonyExtrasBuilder;
}

