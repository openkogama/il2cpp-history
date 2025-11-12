
/* LiftoffMonetizeRewardedVideoMediationExtras() */

void Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
     LiftoffMonetizeRewardedVideoMediationExtras::LiftoffMonetizeRewardedVideoMediationExtras__ctor
               (LiftoffMonetizeRewardedVideoMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields)._._._Extras_k__BackingField = (Dictionary_2_System_String_System_String_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}


/* String get_AndroidMediationExtraBuilderClassName() */

String * Assembly-CSharp.dll::GoogleMobileAds::Mediation::LiftoffMonetize::Api::
         LiftoffMonetizeRewardedVideoMediationExtras::
         LiftoffMonetizeRewardedVideoMediationExtras_get_AndroidMediationExtraBuilderClassName
                   (LiftoffMonetizeRewardedVideoMediationExtras *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_com_google_unity_mediation_lifto);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return StringLiteral_com_google_unity_mediation_lifto;
}

