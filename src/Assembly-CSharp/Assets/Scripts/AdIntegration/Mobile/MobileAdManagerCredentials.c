
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_AdMobCredentials_not_set_for_bui,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
    func_?(&StringLiteral_AppId_not_set);
    func_?(&StringLiteral_Reward_ad_unit_not_set);
    func_?(&StringLiteral_Interstitial_ad_unit_not_set);
    func_?(&StringLiteral_Banner_ad_unit_not);
    cRam_? = '\x01';
  }
  value = (Object *)
          func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
  pSVar1 = StringLiteral_AppId_not_set;
  pSVar2 = StringLiteral_Interstitial_ad_unit_not_set;
  pSVar3 = StringLiteral_Reward_ad_unit_not_set;
  if (value != (Object *)0x0) {
    pSVar4 = StringLiteral_Banner_ad_unit_not;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_EDI);
    (unaff_EBX->fields).AppId = pSVar1;
    func_?(&unaff_EBX->fields,pSVar1);
    (unaff_EBX->fields).RewardedAdUnitId = pSVar3;
    func_?(&(unaff_EBX->fields).RewardedAdUnitId,pSVar3);
    (unaff_EBX->fields).InterstitialAdUnitId = pSVar2;
    func_?(&(unaff_EBX->fields).InterstitialAdUnitId,pSVar2);
    (unaff_EBX->fields).BannerAdUnitId = pSVar4;
    func_?(&(unaff_EBX->fields).BannerAdUnitId,pSVar4);
    return unaff_EBX;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pAVar6 = (AdMobCredentials *)(*pcVar5)();
  return pAVar6;
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
  pAVar1 = (AdMobCredentials *)
           func_?(TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials);
  pSVar2 = StringLiteral_Banner_ad_unit_not;
  pSVar3 = StringLiteral_AppId_not_set;
  pSVar4 = StringLiteral_Interstitial_ad_unit_not_set;
  pSVar5 = StringLiteral_Reward_ad_unit_not_set;
  if (pAVar1 != (AdMobCredentials *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              ((Object *)pAVar1,ExceptionArgument__Enum_obj,unaff_EDI);
    (pAVar1->fields).AppId = pSVar3;
    func_?(&pAVar1->fields,pSVar3);
    (pAVar1->fields).RewardedAdUnitId = pSVar5;
    func_?(&(pAVar1->fields).RewardedAdUnitId,pSVar5);
    (pAVar1->fields).InterstitialAdUnitId = pSVar4;
    func_?(&(pAVar1->fields).InterstitialAdUnitId,pSVar4);
    (pAVar1->fields).BannerAdUnitId = pSVar2;
    func_?(&(pAVar1->fields).BannerAdUnitId,pSVar2);
    return pAVar1;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pAVar1 = (AdMobCredentials *)(*pcVar6)();
  return pAVar1;
}

