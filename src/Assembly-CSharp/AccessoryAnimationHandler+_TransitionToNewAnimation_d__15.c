
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::AccessoryAnimationHandler+<TransitionToNewAnimation>d__15::
     AccessoryAnimationHandler_TransitionToNewAnimation_d_15_MoveNext
               (AccessoryAnimationHandler_TransitionToNewAnimation_d_15 *this,MethodInfo *method)

{
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    pcVar2 = pcRam_?;
    if (this_00 == (AccessoryAnimationHandler *)0x0) goto code_?;
    (this_00->fields).shouldTransitionToNewAnimation = 1;
    pcVar3 = pcRam_?;
    if ((pcVar2 == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar2 = (code *)swi(3);
      bVar5 = (*pcVar2)();
      return bVar5;
    }
    pcRam_? = pcVar3;
    fVar6 = (float)(*pcVar2)();
    (this->fields)._startTime_5__2 = fVar6;
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    (this->fields).__1__state = -1;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    bVar5 = (*pcVar2)();
    return bVar5;
  }
  pcRam_? = pcVar2;
  fVar6 = (float)(*pcRam_?)();
  if (this_00 == (AccessoryAnimationHandler *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar5 = (*pcVar2)();
    return bVar5;
  }
  if ((this->fields)._startTime_5__2 + (this->fields).resetDelay <= fVar6) {
    if ((this_00->fields).shouldTransitionToNewAnimation != 0) {
      animationName = (this->fields).transitionToAnimationName;
      AccessoryAnimationHandler::AccessoryAnimationHandler_ApplyAnimationSpeed
                (this_00,animationName,(MethodInfo *)0x0);
      pAVar7 = (this_00->fields).animations;
      if (pAVar7 != (Animation *)0x0) {
        UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play_3
                  (pAVar7,animationName,PlayMode__Enum_StopSameLayer,(MethodInfo *)0x0);
        pAVar7 = (this_00->fields).animations;
        if (pAVar7 != (Animation *)0x0) {
          obj = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                          (pAVar7,animationName,(MethodInfo *)0x0);
          pAVar7 = (this_00->fields).animations;
          if ((pAVar7 != (Animation *)0x0) &&
             (obj_00 = UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_GetState
                                 (pAVar7,animationName,(MethodInfo *)0x0),
             obj_00 != (AnimationState *)0x0)) {
            pvVar8 = (obj_00->fields)._.m_Ptr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              bVar5 = (*pcVar2)();
              return bVar5;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar2 = (code *)swi(3);
              bVar5 = (*pcVar2)();
              return bVar5;
            }
            pcRam_? = pcVar2;
            fVar6 = (float)(*pcRam_?)(pvVar8);
            fVar9 = AccessoryAnimationHandler::AccessoryAnimationHandler_GetAnimationSpeed
                               (this_00,animationName,(MethodInfo *)0x0);
            if (obj != (AnimationState *)0x0) {
              pvVar8 = (obj->fields)._.m_Ptr;
              if (pvVar8 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar2 = (code *)swi(3);
                bVar5 = (*pcVar2)();
                return bVar5;
              }
              pcVar2 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                uVar4 = func_?(&UNK_?);
                FUN_?(uVar4,0);
                pcVar2 = (code *)swi(3);
                bVar5 = (*pcVar2)();
                return bVar5;
              }
              pcRam_? = pcVar2;
              (*pcRam_?)(pvVar8,fVar6 / fVar9);
              return 0;
            }
          }
        }
      }
      goto code_?;
    }
  }
  else if ((this_00->fields).shouldTransitionToNewAnimation != 0) {
    bVar10 = iRam_? != 0;
    (this->fields).__2__current = (Object *)0x0;
    if (bVar10) {
      uVar11 = (uint)((ulonglong)&(this->fields).__2__current >> 0xc);
      uVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6);
      do {
        uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
        puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar13 == *puVar14;
        if (bVar10) {
          *puVar14 = uVar13 | 1L << (uVar11 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
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
  uVar1 = func_?(&
                              MethodInfo__AccessoryAnimationHandler___TransitionToNewAnimation_d__15__System_Collections_IEnumerator_Reset__
                             );
  FUN_?(this_00,uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

