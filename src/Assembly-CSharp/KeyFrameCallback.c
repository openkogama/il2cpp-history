
/* Boolean Evaluate(Single, AnimationCurve) */

bool Assembly-CSharp.dll::KeyFrameCallback::KeyFrameCallback_Evaluate
               (KeyFrameCallback *this,float timePassedSincePlay,AnimationCurve *animationCurve,
               MethodInfo *method)

{
  if ((this->fields).fired != 0) {
    return 0;
  }
  if ((animationCurve == (AnimationCurve *)0x0) ||
     (pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                         (animationCurve,(MethodInfo *)0x0), pKVar1 == (Keyframe__Array *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  uVar4 = (this->fields).keyFrameIndex;
  if ((uint)pKVar1->max_length <= uVar4) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if (timePassedSincePlay < pKVar1->vector[(int)uVar4].m_Time) {
    return 0;
  }
  (this->fields).fired = 1;
  if ((this->fields).callbacks != (Action *)0x0) {
    pAVar5 = (this->fields).callbacks;
    (*(pAVar5->fields)._._.invoke_impl)
              ((pAVar5->fields)._._.method_code,(pAVar5->fields)._._.method);
  }
  return 1;
}


/* String ToString() */

String * Assembly-CSharp.dll::KeyFrameCallback::KeyFrameCallback_ToString
                   (KeyFrameCallback *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral__0___1_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  aiStackX_8[0] = (this->fields).keyFrameIndex;
  arg0 = (Object *)FUN_?(uRam_?,aiStackX_8);
  pSVar1 = StringLiteral__0___1_;
  PStack_2._arg0 = (Object *)0x0;
  PStack_2._arg1 = (Object *)0x0;
  PStack_2._arg2 = (Object *)0x0;
  PStack_2._args = (Object__Array *)0x0;
  mscorlib.dll::System::ParamsArray::ParamsArray__ctor_1
            (&PStack_2,arg0,(Object *)(this->fields).keyFrameName,(MethodInfo *)0x0);
  PStack_3._arg0 = PStack_2._arg0;
  PStack_3._arg1 = PStack_2._arg1;
  PStack_3._arg2 = PStack_2._arg2;
  PStack_3._args = PStack_2._args;
  pSVar1 = mscorlib.dll::System::String::String_FormatHelper
                     ((IFormatProvider *)0x0,pSVar1,&PStack_3,(MethodInfo *)0x0);
  return pSVar1;
}

