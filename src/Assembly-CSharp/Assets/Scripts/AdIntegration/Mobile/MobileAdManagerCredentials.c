
/* AdMobCredentials GetAdMobCredentials() */

AdMobCredentials *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
MobileAdManagerCredentials_GetAdMobCredentials(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_AdMobCredentials_not_set_for_bui);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
            ((Object *)StringLiteral_AdMobCredentials_not_set_for_bui,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
    func_?(&StringLiteral_AppId_not_set);
    func_?(&StringLiteral_Reward_ad_unit_not_set);
    func_?(&StringLiteral_Interstitial_ad_unit_not_set);
    func_?(&StringLiteral_Banner_ad_unit_not);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials;
  value = (AdMobCredentials *)func_?();
  pSVar1 = StringLiteral_Interstitial_ad_unit_not_set;
  pSVar2 = StringLiteral_Reward_ad_unit_not_set;
  pSVar3 = StringLiteral_AppId_not_set;
  pSVar4 = StringLiteral_Banner_ad_unit_not;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (value->fields).AppId = pSVar3;
  func_?(&value->fields,pSVar3);
  ppSVar5 = &(value->fields).RewardedAdUnitId;
  *ppSVar5 = pSVar2;
  func_?(ppSVar5,pSVar2);
  ppSVar5 = &(value->fields).InterstitialAdUnitId;
  *ppSVar5 = pSVar1;
  func_?(ppSVar5,pSVar1);
  ppSVar5 = &(value->fields).BannerAdUnitId;
  *ppSVar5 = pSVar4;
  func_?(ppSVar5,pSVar4);
  return value;
}


/* AdMobCredentials GetDefault() */

AdMobCredentials *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
MobileAdManagerCredentials_GetDefault(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
    func_?(&StringLiteral_AppId_not_set);
    func_?(&StringLiteral_Reward_ad_unit_not_set);
    func_?(&StringLiteral_Interstitial_ad_unit_not_set);
    func_?(&StringLiteral_Banner_ad_unit_not);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials;
  value = (AdMobCredentials *)func_?();
  pSVar1 = StringLiteral_Interstitial_ad_unit_not_set;
  pSVar2 = StringLiteral_Banner_ad_unit_not;
  pSVar3 = StringLiteral_Reward_ad_unit_not_set;
  pSVar4 = StringLiteral_AppId_not_set;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  (value->fields).AppId = pSVar4;
  func_?(&value->fields,pSVar4);
  ppSVar5 = &(value->fields).RewardedAdUnitId;
  *ppSVar5 = pSVar3;
  func_?(ppSVar5,pSVar3);
  ppSVar5 = &(value->fields).InterstitialAdUnitId;
  *ppSVar5 = pSVar1;
  func_?(ppSVar5,pSVar1);
  ppSVar5 = &(value->fields).BannerAdUnitId;
  *ppSVar5 = pSVar2;
  func_?(ppSVar5,pSVar2);
  return value;
}

