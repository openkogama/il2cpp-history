
/* Void SetShowPostPopup(Boolean) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyMediationExtras::
     AdColonyMediationExtras_SetShowPostPopup
               (AdColonyMediationExtras *this,bool showPostPopup,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&StringLiteral_show_post_popup);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  value = mscorlib.dll::System::Boolean::Boolean_ToString_1
                    ((Boolean *)&showPostPopup,(IFormatProvider *)0x0,unaff_ESI);
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_show_post_popup,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    return;
  }
  func_?();
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
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
                   );
    func_?(&StringLiteral_show_pre_popup);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._._Extras_k__BackingField;
  value = mscorlib.dll::System::Boolean::Boolean_ToString_1
                    ((Boolean *)&showPrePopup,(IFormatProvider *)0x0,unaff_ESI);
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_show_pre_popup,(Object *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* AdColonyMediationExtras() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::Mediation::AdColony::AdColonyMediationExtras::
     AdColonyMediationExtras__ctor(AdColonyMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                   );
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_System_String_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
              );
    (this->fields)._._Extras_k__BackingField = this_00;
    func_?(&this->fields,this_00);
    return;
  }
  func_?();
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
    func_?(&StringLiteral_com_google_unity_mediation_adcol);
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
    func_?(&StringLiteral_AdColonyExtrasBuilder);
    cRam_? = '\x01';
  }
  return StringLiteral_AdColonyExtrasBuilder;
}

