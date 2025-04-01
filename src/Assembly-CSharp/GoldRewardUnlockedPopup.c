
/* Void Start() */

void Assembly-CSharp.dll::GoldRewardUnlockedPopup::GoldRewardUnlockedPopup_Start
               (GoldRewardUnlockedPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields).titleText;
  (this->fields).bounceEffectStartTime = fVar1;
  format = TM::TM__((this->fields).titleString,(MethodInfo *)0x0);
  puStack_3 = (undefined *)0x2;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&puStack_3);
  mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    (*(code *)(pTVar2->klass->vtable).set_text.method)();
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void StartEffect() */

void Assembly-CSharp.dll::GoldRewardUnlockedPopup::GoldRewardUnlockedPopup_StartEffect
               (GoldRewardUnlockedPopup *this,MethodInfo *method)

{
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  (this->fields).bounceEffectStartTime = fVar1;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GoldRewardUnlockedPopup::GoldRewardUnlockedPopup_Update
               (GoldRewardUnlockedPopup *this,MethodInfo *method)

{
  this_00 = (this->fields).bounceEffect;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 != (AnimationCurve *)0x0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_Evaluate
                      (this_00,(fVar1 - (this->fields).bounceEffectStartTime) /
                               (this->fields).bounceEffectDuration,(MethodInfo *)0x0);
    this_01 = (Transform *)(this->fields).imageContentTransform;
    if (this_01 != (Transform *)0x0) {
      value.y = fVar1;
      value.x = fVar1;
      value.z = 1.0;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GoldRewardUnlockedPopup() */

void Assembly-CSharp.dll::GoldRewardUnlockedPopup::GoldRewardUnlockedPopup__ctor
               (GoldRewardUnlockedPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__0__GOLD_CLAIMED_);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields).titleString;
  *ppSVar1 = StringLiteral__0__GOLD_CLAIMED_;
  func_?(ppSVar1,StringLiteral__0__GOLD_CLAIMED_);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}

