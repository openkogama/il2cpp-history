
/* Void <CreateBubble>b__0(TextBubbleController, BaseEventData) */

void Assembly-CSharp.dll::FirstTimeActivatablePointerObjectives+<>c__DisplayClass15_0::
     FirstTimeActivatablePointerObjectives_c_DisplayClass15_0__CreateBubble_b__0
               (FirstTimeActivatablePointerObjectives_c_DisplayClass15_0 *this,
               TextBubbleController *x,BaseEventData *y,MethodInfo *method)

{
  pFVar1 = (this->fields).__4__this;
  if (pFVar1 != (FirstTimeActivatablePointerObjectives *)0x0) {
    if ((pFVar1->fields).bubbleId != -1) {
      if (x == (TextBubbleController *)0x0) goto code_?;
      TextBubbleController::TextBubbleController_ClearBubblesOfTypeImmediately
                (x,(pFVar1->fields).bubbleId,(MethodInfo *)0x0);
    }
    pRVar2 = (this->fields).target;
    pFVar1 = (this->fields).__4__this;
    if (pRVar2 != (RectTransform *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pRVar2->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      (*pcRam_?)(pvVar3);
      pRVar2 = (this->fields).target;
      if (pRVar2 != (RectTransform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (pRVar2->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        (*pcRam_?)(pvVar3);
        fVar6 = _UNK_? * 0.0;
        pRVar2 = (this->fields).target;
        if (pRVar2 != (RectTransform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar3 = (pRVar2->fields)._._._.m_CachedPtr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pRVar2,(MethodInfo *)0x0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcVar4 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          pcRam_? = pcVar4;
          (*pcRam_?)(pvVar3);
          this_00 = (this->fields).__4__this;
          if (this_00 != (FirstTimeActivatablePointerObjectives *)0x0) {
            fVar7 = (this_00->fields).pointerBodyDirectionOffset.x + 0.0;
            fVar8 = (this_00->fields).pointerBodyDirectionOffset.y + 0.0;
            lifeTime = (this_00->fields).bubbleLifetimeWhenVisible;
            content = (this_00->fields).bubbleContent;
            parentTransform =
                 UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
            if ((x != (TextBubbleController *)0x0) &&
               (targetCenterPoint.y = fVar8 + fVar8, targetCenterPoint.x = fVar7 + fVar7,
               iVar9 = TextBubbleController::TextBubbleController_ShowBubble2D
                                 (x,(Vector2)((ulonglong)(uint)(fVar6 + 0.0) << 0x20),
                                  targetCenterPoint,lifeTime,content,parentTransform,
                                  (MethodInfo *)0x0),
               pFVar1 != (FirstTimeActivatablePointerObjectives *)0x0)) {
              (pFVar1->fields).bubbleId = iVar9;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

