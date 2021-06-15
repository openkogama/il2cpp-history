
/* AdLoader Build() */

AdLoader *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader+Builder::AdLoader_Builder_Build
          (AdLoader_Builder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (AdLoader *)func_?(TypeInfo__GoogleMobileAds__Api__AdLoader);
  AdLoader::AdLoader__ctor(this_00,this,(MethodInfo *)0x0);
  return this_00;
}


/* AdLoader+Builder ForCustomNativeAd(String) */

AdLoader_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader+Builder::AdLoader_Builder_ForCustomNativeAd
          (AdLoader_Builder *this,String *templateId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
           (this->fields)._TemplateIds_k__BackingField;
  if (pHVar1 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              (pHVar1,(UnityWebRequest *)templateId,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
              );
    pHVar1 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
             (this->fields)._AdTypes_k__BackingField;
    if (pHVar1 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                (pHVar1,(UnityWebRequest *)0x0,
                 MethodInfo__System__Collections__Generic__HashSet<GoogleMobileAds::Api::NativeAdType>__Add_GoogleMobileAds__Api__NativeAdType_
                );
      return this;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AdLoader_Builder *)(*pcVar2)();
  return pAVar3;
}


/* AdLoader+Builder ForCustomNativeAd(String,
   Action`2[GoogleMobileAds.Api.CustomNativeTemplateAd,String]) */

AdLoader_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader+Builder::AdLoader_Builder_ForCustomNativeAd_1
          (AdLoader_Builder *this,String *templateId,
          Action_2_GoogleMobileAds_Api_CustomNativeTemplateAd_String_ *callback,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pHVar1 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
           (this->fields)._TemplateIds_k__BackingField;
  if (pHVar1 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              (pHVar1,(UnityWebRequest *)templateId,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
              );
    this_00 = (this->fields)._CustomNativeTemplateClickHandlers_k__BackingField;
    if (this_00 !=
        (Dictionary_2_System_String_System_Action_2_GoogleMobileAds_Api_CustomNativeTemplateAd_String_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_00,templateId,(Theme *)callback,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Action<GoogleMobileAds::Api::CustomNativeTemplateAd,_System::String>_>__set_Item_System__String__System__Action<GoogleMobileAds::Api::CustomNativeTemplateAd,_System::String>_
                );
      pHVar1 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
               (this->fields)._AdTypes_k__BackingField;
      if (pHVar1 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
        System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
        UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                  (pHVar1,(UnityWebRequest *)0x0,
                   MethodInfo__System__Collections__Generic__HashSet<GoogleMobileAds::Api::NativeAdType>__Add_GoogleMobileAds__Api__NativeAdType_
                  );
        return this;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pAVar3 = (AdLoader_Builder *)(*pcVar2)();
  return pAVar3;
}


/* AdLoader+Builder(String) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdLoader+Builder::AdLoader_Builder__ctor
               (AdLoader_Builder *this,String *adUnitId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  (this->fields)._AdUnitId_k__BackingField = adUnitId;
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__HashSet<GoogleMobileAds::Api::NativeAdType>
                          );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,
             MethodInfo__System__Collections__Generic__HashSet<GoogleMobileAds::Api::NativeAdType>__HashSet__
            );
  (this->fields)._AdTypes_k__BackingField = (HashSet_1_GoogleMobileAds_Api_NativeAdType_ *)pHVar1;
  pHVar1 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
           func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (pHVar1,MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
  (this->fields)._TemplateIds_k__BackingField = (HashSet_1_System_String_ *)pHVar1;
  this_00 = (Dictionary_2_System_String_System_Action_2_GoogleMobileAds_Api_CustomNativeTemplateAd_String_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::Action<GoogleMobileAds::Api::CustomNativeTemplateAd,_System::String>_>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::Action<GoogleMobileAds::Api::CustomNativeTemplateAd,_System::String>_>__Dictionary__
            );
  (this->fields)._CustomNativeTemplateClickHandlers_k__BackingField = this_00;
  return;
}

