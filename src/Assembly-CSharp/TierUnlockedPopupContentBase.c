
/* Void HandleDisplaying() */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::
     TierUnlockedPopupContentBase_HandleDisplaying
               (TierUnlockedPopupContentBase *this,MethodInfo *method)

{
  TierUnlockedPopupContentBase_HandleSlideTitleText(this,(MethodInfo *)0x0);
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar4 = (this->fields).stateStartTime;
  fVar5 = (this->fields).displayTime;
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar5 = _UNK_? / fVar5;
  fVar6 = (float)(*pcRam_?)();
  if (fVar6 + _UNK_? < fVar5 * (fVar3 - fVar4)) {
    pUVar7 = (this->fields).onDisplayDoneCallback;
    if (pUVar7 == (UnityAction *)0x0) {
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (*(pUVar7->fields)._._.invoke_impl)
              ((pUVar7->fields)._._.method_code,(pUVar7->fields)._._.method);
    pcVar1 = pcRam_?;
    if ((this->fields).currentState != 2) {
      (this->fields).currentState = 2;
      pcVar8 = pcRam_?;
      if ((pcVar1 == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar8 = pcVar1, pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar8;
      fVar4 = (float)(*pcVar1)();
      (this->fields).stateStartTime = fVar4;
    }
  }
  return;
}


/* Void HandleSlideTitleText() */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::
     TierUnlockedPopupContentBase_HandleSlideTitleText
               (TierUnlockedPopupContentBase *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar4 = _UNK_?;
  fVar5 = (this->fields).titleOriginalYPosition - _UNK_?;
  fVar6 = (this->fields).titleOriginalYPosition;
  fVar3 = (fVar3 - (this->fields).slideInStartTime) / _UNK_?;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (_UNK_? < fVar3) {
    fVar3 = _UNK_?;
  }
  pTVar7 = (this->fields).titleText;
  if (pTVar7 != (Text *)0x0) {
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pTVar7,(MethodInfo *)0x0);
    pTVar7 = (this->fields).titleText;
    if ((pTVar7 != (Text *)0x0) &&
       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pTVar7,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_10 = 0;
      uStack_11 = 0;
      pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
      if (pvVar12 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar12);
      pTVar7 = (this->fields).titleText;
      if ((pTVar7 != (Text *)0x0) &&
         (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar7,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_13 = 0;
        uStack_14 = 0;
        pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar12);
        if (pTVar8 == (Transform *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uStack_10 = CONCAT44((fVar6 - fVar5) * fVar3 + fVar5,(undefined4)uStack_10);
        uStack_11 = uStack_14;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar12 = (pTVar8->fields)._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar12);
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        fVar6 = (float)(*pcRam_?)();
        fVar6 = (fVar6 - (this->fields).slideOutStartTime) / _UNK_?;
        if (fVar6 <= 0.0) {
          return;
        }
        fVar3 = (this->fields).titleOriginalYPosition;
        fVar5 = fVar3 + _UNK_?;
        if (fVar6 < 0.0) {
          fVar6 = 0.0;
        }
        else if (fVar4 < fVar6) {
          fVar6 = fVar4;
        }
        pTVar7 = (this->fields).titleText;
        if (pTVar7 != (Text *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar7,(MethodInfo *)0x0);
          pTVar7 = (this->fields).titleText;
          if ((pTVar7 != (Text *)0x0) &&
             (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pTVar7,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0
             )) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_13 = 0;
            uStack_14 = 0;
            pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pvVar12);
            pTVar7 = (this->fields).titleText;
            if ((pTVar7 != (Text *)0x0) &&
               (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pTVar7,(MethodInfo *)0x0),
               pTVar9 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_10 = 0;
              uStack_11 = 0;
              pvVar12 = (pTVar9->fields)._._.m_CachedPtr;
              if (pvVar12 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar2 = func_?(&UNK_?);
                FUN_?(uVar2,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              (*pcRam_?)(pvVar12);
              if (pTVar8 == (Transform *)0x0) {
                FUN_?();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uStack_13 = CONCAT44((fVar5 - fVar3) * fVar6 + fVar3,(undefined4)uStack_13);
              uStack_14 = uStack_11;
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar12 = (pTVar8->fields)._._.m_CachedPtr;
              if (pvVar12 != (void *)0x0) {
                pcVar1 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                  uVar2 = func_?(&UNK_?);
                  FUN_?(uVar2,0);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                pcRam_? = pcVar1;
                (*pcRam_?)(pvVar12,&uStack_13);
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Initialize(GamePassTier, UnityAction) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize
               (TierUnlockedPopupContentBase *this,GamePassTier__Enum unlockedGamePassTier,
               UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  uVar1 = CONCAT44(in_register_00000014,unlockedGamePassTier);
  bVar2 = iRam_? != 0;
  (this->fields).onDisplayDoneCallback = onDisplayDoneCallback;
  if (bVar2) {
    method = (MethodInfo *)0xADDR;
    uVar3 = (uint)((ulonglong)&(this->fields).onDisplayDoneCallback >> 0xc);
    uVar1 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    onDisplayDoneCallback = (UnityAction *)(ulonglong)(uVar3 & 0x3f);
    do {
      uVar4 = *(ulonglong *)(uVar1 * 8 + 0xADDR);
      puVar5 = (ulonglong *)(uVar1 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar4 == *puVar5;
      if (bVar2) {
        *puVar5 = uVar4 | 1L << (longlong)onDisplayDoneCallback;
      }
      UNLOCK();
    } while (!bVar2);
  }
  pcVar6 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar6 = (code *)FUN_?(&UNK_?,uVar1,onDisplayDoneCallback,method),
     pcVar6 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pcRam_? = pcVar6;
  fVar8 = (float)(*pcRam_?)();
  (this->fields).stateStartTime = fVar8;
  pcVar6 = pcRam_?;
  if ((this->fields).currentState != 1) {
    (this->fields).currentState = 1;
    pcVar9 = pcRam_?;
    if ((pcVar6 == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar9 = pcVar6, pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar9;
    fVar8 = (float)(*pcVar6)();
    (this->fields).stateStartTime = fVar8;
  }
  pTVar10 = (this->fields).titleText;
  if ((pTVar10 != (Text *)0x0) &&
     (pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar10,(MethodInfo *)0x0), pTVar11 != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar12 = (pTVar11->fields)._._.m_CachedPtr;
    if (pvVar12 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar7 = func_?(&UNK_?);
      FUN_?(uVar7,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    (*pcRam_?)(pvVar12);
    pTVar10 = (this->fields).titleText;
    (this->fields).titleOriginalYPosition = 0.0;
    fVar8 = 0.0 - _UNK_?;
    if (pTVar10 != (Text *)0x0) {
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pTVar10,(MethodInfo *)0x0);
      pTVar10 = (this->fields).titleText;
      if ((pTVar10 != (Text *)0x0) &&
         (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pTVar10,(MethodInfo *)0x0), pTVar13 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_14 = 0;
        uStack_15 = 0;
        pvVar12 = (pTVar13->fields)._._.m_CachedPtr;
        if (pvVar12 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcVar6 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        pcRam_? = pcVar6;
        (*pcRam_?)(pvVar12);
        pTVar10 = (this->fields).titleText;
        if ((pTVar10 != (Text *)0x0) &&
           (pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pTVar10,(MethodInfo *)0x0), pTVar13 != (Transform *)0x0))
        {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar12 = (pTVar13->fields)._._.m_CachedPtr;
          if (pvVar12 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar13,(MethodInfo *)0x0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcVar6 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
            uVar7 = func_?(&UNK_?);
            FUN_?(uVar7,0);
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pcRam_? = pcVar6;
          (*pcRam_?)(pvVar12);
          if (pTVar11 != (Transform *)0x0) {
            uStack_14 = CONCAT44(fVar8,(undefined4)uStack_14);
            uStack_15 = 0;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (pTVar11->fields)._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar11,(MethodInfo *)0x0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcVar6 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            pcRam_? = pcVar6;
            (*pcRam_?)(pvVar12,&uStack_14);
            pNVar16 = (this->fields).titleTextFader;
            if (pNVar16 != (NotificationFade *)0x0) {
              this_00 = (pNVar16->fields).group;
              (pNVar16->fields).playing = 1;
              (pNVar16->fields).pauseAt = (pNVar16->fields).duration;
              if (this_00 != (CanvasGroup *)0x0) {
                UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                          (this_00,0.0,(MethodInfo *)0x0);
                (pNVar16->fields).currentTime = 0.0;
                pNVar16 = (this->fields).titleTextFader;
                if (pNVar16 != (NotificationFade *)0x0) {
                  (pNVar16->fields).pauseAt = 0.29;
                  pcVar6 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
                    uVar7 = func_?(&UNK_?);
                    FUN_?(uVar7,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  fVar8 = (float)(*pcRam_?)();
                  pcVar6 = pcRam_?;
                  (this->fields).slideInStartTime = fVar8;
                  pcVar9 = pcRam_?;
                  if ((pcVar6 == (code *)0x0) &&
                     (pcVar6 = (code *)FUN_?(&UNK_?), pcVar9 = pcVar6,
                     pcVar6 == (code *)0x0)) {
                    uVar7 = func_?(&UNK_?);
                    FUN_?(uVar7,0);
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  pcRam_? = pcVar9;
                  fVar8 = (float)(*pcVar6)();
                  (this->fields).slideOutStartTime =
                       (fVar8 + (this->fields).displayTime) - _UNK_?;
                  return;
                }
              }
            }
          }
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetState(TierUnlockedPopupContentBase+PopupState) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_SetState
               (TierUnlockedPopupContentBase *this,
               TierUnlockedPopupContentBase_PopupState__Enum newState,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((this->fields).currentState != newState) {
    (this->fields).currentState = newState;
    pcVar2 = pcRam_?;
    if ((pcVar1 == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar2 = pcVar1, pcVar1 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcVar1)();
    (this->fields).stateStartTime = fVar4;
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Update
               (TierUnlockedPopupContentBase *this,MethodInfo *method)

{
  iVar1 = (this->fields).currentState;
  if ((iVar1 != 0) && (iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).HandleDisplaying.methodPtr)
              (this,(this->klass->vtable).HandleDisplaying.method);
    return;
  }
  return;
}


/* Void UpdateAlpha(Single) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateAlpha
               (TierUnlockedPopupContentBase *this,float newAlpha,MethodInfo *method)

{
  obj = (this->fields).mainContentCanvasGroup;
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                  ,in_RDX,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (CanvasGroup *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar2 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar2 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,newAlpha);
  return;
}


/* Void UpdateScale(Single) */

void Assembly-CSharp.dll::TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_UpdateScale
               (TierUnlockedPopupContentBase *this,float newScale,MethodInfo *method)

{
  obj = (this->fields).mainContent;
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_2 = CONCAT44(newScale,newScale);
  uStack_3 = _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar4 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar4,&uStack_2);
  return;
}

