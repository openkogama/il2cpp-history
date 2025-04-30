
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
      fVar3 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Single,System::
              Single]::KeyValuePair_2_System_Single_System_Single__get_Key
                        ((KeyValuePair_2_System_Single_System_Single_ *)(pKVar1->vector + uVar2),
                         (MethodInfo *)0x0);
      if (timePassedSincePlay < fVar3) {
        return 0;
      }
      pAVar4 = (this->fields).callbacks;
      (this->fields).fired = 1;
      if (pAVar4 != (Action *)0x0) {
        (*(pAVar4->fields)._._.invoke_impl)();
      }
      return 1;
    }
    func_?();
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* String ToString() */

String * Assembly-CSharp.dll::KeyFrameCallback::KeyFrameCallback_ToString
                   (KeyFrameCallback *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral__0___1_);
    cRam_? = '\x01';
  }
  pKVar1 = this;
  this = (KeyFrameCallback *)(this->fields).keyFrameIndex;
  arg0 = (Object *)func_?(TypeInfo__System__Int32,&this);
  pSVar2 = mscorlib.dll::System::String::String_Format_1
                     (StringLiteral__0___1_,arg0,(Object *)(pKVar1->fields).keyFrameName,
                      (MethodInfo *)0x0);
  return pSVar2;
}

