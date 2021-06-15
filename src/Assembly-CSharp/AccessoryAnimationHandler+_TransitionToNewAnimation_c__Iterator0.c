
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryAnimationHandler+<TransitionToNewAnimation>c__Iterator0::
     AccessoryAnimationHandler_TransitionToNewAnimation_c_Iterator0_MoveNext
               (AccessoryAnimationHandler_TransitionToNewAnimation_c_Iterator0 *this,
               MethodInfo *method)

{
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pAVar2 = (this->fields)._this;
    if (pAVar2 == (AccessoryAnimationHandler *)0x0) goto code_?;
    (pAVar2->fields).shouldTransitionToNewAnimation = 1;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._startTime___0 = fVar3;
  }
  else if (iVar1 != 1) {
    return 0;
  }
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (fVar3 < (this->fields).resetDelay + (this->fields)._startTime___0) {
    pAVar2 = (this->fields)._this;
    if (pAVar2 == (AccessoryAnimationHandler *)0x0) goto code_?;
    if ((pAVar2->fields).shouldTransitionToNewAnimation != 0) {
      (this->fields)._current = (Object *)0x0;
      if ((this->fields)._disposing == 0) {
        (this->fields)._PC = 1;
      }
      return 1;
    }
  }
  pAVar2 = (this->fields)._this;
  if (pAVar2 != (AccessoryAnimationHandler *)0x0) {
    if ((pAVar2->fields).shouldTransitionToNewAnimation == 0) {
code_?:
      (this->fields)._PC = -1;
      return 0;
    }
    if (pAVar2 != (AccessoryAnimationHandler *)0x0) {
      animationName = (this->fields).transitionToAnimationName;
      AccessoryAnimationHandler::AccessoryAnimationHandler_ApplyAnimationSpeed
                (pAVar2,animationName,(MethodInfo *)0x0);
      pAVar4 = (pAVar2->fields).animations;
      if (pAVar4 != (Animation *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar4,animationName,(MethodInfo *)0x0);
        pAVar4 = (pAVar2->fields).animations;
        if (pAVar4 != (Animation *)0x0) {
          UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                    (pAVar4,animationName,(MethodInfo *)0x0);
          pAVar4 = (pAVar2->fields).animations;
          if ((pAVar4 != (Animation *)0x0) &&
             (this_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                  (pAVar4,animationName,(MethodInfo *)0x0),
             this_00 != (AnimationState *)0x0)) {
            fVar3 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_length(this_00,(MethodInfo *)0x0);
            fVar5 = AccessoryAnimationHandler::AccessoryAnimationHandler_GetAnimationSpeed
                              (pAVar2,animationName,(MethodInfo *)0x0);
            UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                      ((AnimationState *)&UNK_?,fVar3 / fVar5,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void Reset() */

void Assembly-CSharp.dll::AccessoryAnimationHandler+<TransitionToNewAnimation>c__Iterator0::
     AccessoryAnimationHandler_TransitionToNewAnimation_c_Iterator0_Reset
               (AccessoryAnimationHandler_TransitionToNewAnimation_c_Iterator0 *this,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

