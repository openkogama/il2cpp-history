
/* Void Start() */

void Assembly-CSharp.dll::GoldRewardUnlockedPopup::GoldRewardUnlockedPopup_Start
               (GoldRewardUnlockedPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  pTVar2 = (this->fields).titleText;
  (this->fields).bounceEffectStartTime = fVar1;
  format = TM::TM__((this->fields).titleString,(MethodInfo *)0x0);
  pTStack_3 = (Text *)0x2;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&pTStack_3);
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  mscorlib.dll::System::String::String_Format(format,arg0,(MethodInfo *)0x0);
  if (pTVar2 != (Text *)0x0) {
    pTStack_3 = pTVar2;
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
    fStack_2 = 0.0;
    uStack_3 = 0x3f800000;
    func_?(&uStack_3,fVar1,fVar1);
    if (this_01 != (Transform *)0x0) {
      value.z = fStack_2;
      value.x = (float)(undefined4)uStack_3;
      value.y = (float)uStack_3._4_4_;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* GoldRewardUnlockedPopup() */

void Assembly-CSharp.dll::GoldRewardUnlockedPopup::GoldRewardUnlockedPopup__ctor
               (GoldRewardUnlockedPopup *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).titleString = StringLiteral__0__GOLD_CLAIMED_;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

