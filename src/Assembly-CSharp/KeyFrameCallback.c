
/* Boolean Evaluate(Single, AnimationCurve) */

bool Assembly-CSharp.dll::KeyFrameCallback::KeyFrameCallback_Evaluate
               (KeyFrameCallback *this,float timePassedSincePlay,AnimationCurve *animationCurve,
               MethodInfo *method)

{
  if ((this->fields).fired != 0) {
    return 0;
  }
  if ((animationCurve != (AnimationCurve *)0x0) &&
     (pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_GetKeys
                         (animationCurve,(MethodInfo *)0x0), pKVar1 != (Keyframe__Array *)0x0)) {
    uVar2 = (this->fields).keyFrameIndex;
    if (uVar2 < pKVar1->max_length) {
      fVar3 = (float10)func_?(pKVar1->vector + uVar2);
      if (timePassedSincePlay < (float)fVar3) {
        return 0;
      }
      this_00 = (JumpState_OnWallJumpDelegate *)(this->fields).callbacks;
      (this->fields).fired = 1;
      if (this_00 != (JumpState_OnWallJumpDelegate *)0x0) {
        JumpState+OnWallJumpDelegate::JumpState_OnWallJumpDelegate_Invoke(this_00,(MethodInfo *)0x0)
        ;
      }
      return 1;
    }
    uVar4 = func_?(0,0);
    func_?(uVar4);
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Reset() */

void Assembly-CSharp.dll::KeyFrameCallback::KeyFrameCallback_Reset
               (KeyFrameCallback *this,MethodInfo *method)

{
  (this->fields).fired = 0;
  return;
}


/* String ToString() */

String * Assembly-CSharp.dll::KeyFrameCallback::KeyFrameCallback_ToString
                   (KeyFrameCallback *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pKVar1 = this;
  this = (KeyFrameCallback *)(this->fields).keyFrameIndex;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  pSVar2 = (pKVar1->fields).keyFrameName;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  pSVar2 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0___1_,arg0,(Object *)pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}

