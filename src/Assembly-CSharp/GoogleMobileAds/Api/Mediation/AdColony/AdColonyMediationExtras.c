
/* Void SetShowPostPopup(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyMediationExtras::
     AdColonyMediationExtras_SetShowPostPopup
               (AdColonyMediationExtras *this,bool showPostPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  value = (CrossPlatformInputManager_VirtualButton *)func_?(&showPostPopup,0);
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,StringLiteral_show_post_popup,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetShowPrePopup(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyMediationExtras::
     AdColonyMediationExtras_SetShowPrePopup
               (AdColonyMediationExtras *this,bool showPrePopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  value = (CrossPlatformInputManager_VirtualButton *)func_?(&showPrePopup,0);
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,StringLiteral_show_pre_popup,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* String get_AndroidMediationExtraBuilderClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyMediationExtras::
         AdColonyMediationExtras_get_AndroidMediationExtraBuilderClassName
                   (AdColonyMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return StringLiteral_com_google_unity_mediation_adcol;
}


/* String get_IOSMediationExtraBuilderClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyMediationExtras::
         AdColonyMediationExtras_get_IOSMediationExtraBuilderClassName
                   (AdColonyMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  return StringLiteral_AdColonyExtrasBuilder;
}

