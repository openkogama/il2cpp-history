
/* LiftoffMonetizeRewardedVideoMediationExtras() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
     LiftoffMonetizeRewardedVideoMediationExtras::LiftoffMonetizeRewardedVideoMediationExtras__ctor
               (LiftoffMonetizeRewardedVideoMediationExtras *this,MethodInfo *method)

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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  (this->fields)._._._Extras_k__BackingField = (Dictionary_2_System_String_System_String_ *)this_00;
  func_?(&this->fields,this_00);
  return;
}


/* String get_AndroidMediationExtraBuilderClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
         LiftoffMonetizeRewardedVideoMediationExtras::
         LiftoffMonetizeRewardedVideoMediationExtras_get_AndroidMediationExtraBuilderClassName
                   (LiftoffMonetizeRewardedVideoMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_com_google_unity_mediation_lifto);
    cRam_? = '\x01';
  }
  return StringLiteral_com_google_unity_mediation_lifto;
}

