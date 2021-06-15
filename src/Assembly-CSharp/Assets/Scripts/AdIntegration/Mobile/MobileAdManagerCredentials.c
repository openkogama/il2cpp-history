
/* AdMobCredentials GetAdMobCredentials() */

AdMobCredentials *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
MobileAdManagerCredentials_GetAdMobCredentials(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
            ((Object *)StringLiteral_AdMobCredentials_not_set_for_bui,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials;
  this = (ScaleAnimationBase *)func_?();
  pSVar1 = StringLiteral_Interstitial_ad_unit_not_set;
  pSVar2 = StringLiteral_Reward_ad_unit_not_set;
  pSVar3 = StringLiteral_AppId_not_set;
  pSVar4 = StringLiteral_Banner_ad_unit_not;
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (this->fields).state = (int32_t)pSVar2;
  (this->fields)._._._._.m_CachedPtr = pSVar3;
  (this->fields).originalScale.x = (float)pSVar1;
  (this->fields).originalScale.y = (float)pSVar4;
  return (AdMobCredentials *)this;
}


/* AdMobCredentials GetDefault() */

AdMobCredentials *
Assembly-CSharp.dll::Assets::Scripts::AdIntegration::Mobile::MobileAdManagerCredentials::
MobileAdManagerCredentials_GetDefault(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__Assets__Scripts__AdIntegration__Mobile__AdMobCredentials;
  this = (ScaleAnimationBase *)func_?();
  pSVar1 = StringLiteral_Banner_ad_unit_not;
  pSVar2 = StringLiteral_Interstitial_ad_unit_not_set;
  pSVar3 = StringLiteral_Reward_ad_unit_not_set;
  pSVar4 = StringLiteral_AppId_not_set;
  ScaleAnimationBase::ScaleAnimationBase_Play(this,0.0,(MethodInfo *)method_00);
  (this->fields).state = (int32_t)pSVar3;
  (this->fields)._._._._.m_CachedPtr = pSVar4;
  (this->fields).originalScale.x = (float)pSVar2;
  (this->fields).originalScale.y = (float)pSVar1;
  return (AdMobCredentials *)this;
}

