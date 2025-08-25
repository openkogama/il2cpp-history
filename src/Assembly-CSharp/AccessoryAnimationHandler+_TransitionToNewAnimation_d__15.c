
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryAnimationHandler+<TransitionToNewAnimation>d__15::
     AccessoryAnimationHandler_TransitionToNewAnimation_d_15_MoveNext
               (AccessoryAnimationHandler_TransitionToNewAnimation_d_15 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 == (AccessoryAnimationHandler *)0x0) goto code_?;
    (this_00->fields).shouldTransitionToNewAnimation = 1;
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields)._startTime_5__2 = fVar2;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  if (this_00 == (AccessoryAnimationHandler *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    bVar4 = (*pcVar3)();
    return bVar4;
  }
  if ((this->fields)._startTime_5__2 + (this->fields).resetDelay <= fVar2) {
    if ((this_00->fields).shouldTransitionToNewAnimation != 0) {
      animationName = (this->fields).transitionToAnimationName;
      AccessoryAnimationHandler::AccessoryAnimationHandler_ApplyAnimationSpeed
                (this_00,animationName,(MethodInfo *)0x0);
      pAVar5 = (this_00->fields).animations;
      if (pAVar5 != (Animation *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_2
                  (pAVar5,animationName,(MethodInfo *)0x0);
        pAVar5 = (this_00->fields).animations;
        if (pAVar5 != (Animation *)0x0) {
          this_01 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                              (pAVar5,animationName,(MethodInfo *)0x0);
          pAVar5 = (this_00->fields).animations;
          if ((pAVar5 != (Animation *)0x0) &&
             (this_02 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                  (pAVar5,animationName,(MethodInfo *)0x0),
             this_02 != (AnimationState *)0x0)) {
            fVar2 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::
                    AnimationState_get_length(this_02,(MethodInfo *)0x0);
            fVar6 = AccessoryAnimationHandler::AccessoryAnimationHandler_GetAnimationSpeed
                              (this_00,animationName,(MethodInfo *)0x0);
            if (this_01 != (AnimationState *)0x0) {
              UnityEngine.AnimationModule.dll::UnityEngine::AnimationState::AnimationState_set_time
                        (this_01,fVar2 / fVar6,(MethodInfo *)0x0);
              return 0;
            }
          }
        }
      }
      goto code_?;
    }
  }
  else if ((this_00->fields).shouldTransitionToNewAnimation != 0) {
    (this->fields).__2__current = (Object *)0x0;
    func_?(&(this->fields).__2__current,0);
    (this->fields).__1__state = 1;
    return 1;
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::AccessoryAnimationHandler+<TransitionToNewAnimation>d__15::
     AccessoryAnimationHandler_TransitionToNewAnimation_d_15_System_Collections_IEnumerator_Reset
               (AccessoryAnimationHandler_TransitionToNewAnimation_d_15 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__AccessoryAnimationHandler___TransitionToNewAnimation_d__15__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

