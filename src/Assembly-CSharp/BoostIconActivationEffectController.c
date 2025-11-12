
/* Void Activate() */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Activate
               (BoostIconActivationEffectController *this,MethodInfo *method)

{
  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)method,in_R8);
  if ((extraout_RAX != 0) && (*(BoostController **)(extraout_RAX + 0xa0) != (BoostController *)0x0))
  {
    bVar1 = BoostController::BoostController_IsBoostActive
                      (*(BoostController **)(extraout_RAX + 0xa0),(this->fields).boostType,
                       (MethodInfo *)0x0);
    if (bVar1 == 0) {
      pUVar2 = (this->fields).startNewEffect;
      if (pUVar2 != (UnityAction *)0x0) {
        (*(pUVar2->fields)._._.invoke_impl)
                  ((pUVar2->fields)._._.method_code,(pUVar2->fields)._._.method);
        return;
      }
    }
    else {
      this_00 = (this->fields).canvasGroup;
      if (this_00 != (CanvasGroup *)0x0) {
        UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                  (this_00,_UNK_?,(MethodInfo *)0x0);
        pcVar3 = pcRam_?;
        (this->fields).currentState = 1;
        pcVar4 = pcRam_?;
        if ((pcVar3 == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar4 = pcVar3, pcVar3 == (code *)0x0))
        {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar4;
        fVar6 = (float)(*pcVar3)();
        (this->fields).stateStartTime = fVar6;
        (this->fields).haveStartedNewEffect = 0;
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
        obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar7 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar8 = (pTVar7->fields)._._.m_CachedPtr;
          if (pvVar8 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar5 = func_?(&UNK_?);
            FUN_?(uVar5,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar8);
          fVar6 = (this->fields).originalYPosition;
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)this,(MethodInfo *)0x0);
          if (pTVar7 != (Transform *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar8 = (pTVar7->fields)._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar8);
            if (obj_00 != (Transform *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar8 = (obj_00->fields)._._.m_CachedPtr;
              if (pvVar8 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar5 = func_?(&UNK_?);
                FUN_?(uVar5,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              (*pcRam_?)(pvVar8);
              if (obj != (Transform *)0x0) {
                lStack_9 = (ulonglong)(uint)fVar6 << 0x20;
                uStack_10 = 0;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar8 = (obj->fields)._._.m_CachedPtr;
                if (pvVar8 != (void *)0x0) {
                  pcVar3 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                    uVar5 = func_?(&UNK_?);
                    FUN_?(uVar5,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcRam_? = pcVar3;
                  (*pcRam_?)(pvVar8,&lStack_9);
                  return;
                }
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
            }
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Initialize(BoostType, UnityAction) */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Initialize
               (BoostIconActivationEffectController *this,BoostType__Enum type,
               UnityAction *startNewEffect,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<BoostIconActivationEffectController::BoosterIcons>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).boosterIcons;
  uVar2 = 0;
  if (pLVar1 != (List_1_BoostIconActivationEffectController_BoosterIcons_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar4 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar4 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        pvVar4 = (void *)(*pcRam_?)(pvVar4);
        pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                 Unmarshal_UnmarshalUnityObject
                           (pvVar4,
                            UnityEngine__Transform_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::Transform>_void__
                           );
        if (pOVar7 != (Object *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          uStack_8 = 0;
          uStack_9 = 0;
          pOVar10 = pOVar7[1].klass;
          if (pOVar10 == (Object__Class *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException(pOVar7,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pOVar10,&uStack_8);
          bVar11 = iRam_? != 0;
          (this->fields).originalYPosition = uStack_8._4_4_;
          (this->fields).boostType = type;
          (this->fields).startNewEffect = startNewEffect;
          if (bVar11) {
            uVar2 = (uint)((ulonglong)&(this->fields).startNewEffect >> 0xc);
            uVar12 = (ulonglong)((uVar2 & 0x1fffff) >> 6);
            do {
              uVar13 = *(ulonglong *)(uVar12 * 8 + 0xADDR);
              puVar14 = (ulonglong *)(uVar12 * 8 + 0xADDR);
              LOCK();
              bVar11 = uVar13 == *puVar14;
              if (bVar11) {
                *puVar14 = uVar13 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          return;
        }
        break;
      }
      pLVar1 = (this->fields).boosterIcons;
      if (pLVar1 == (List_1_BoostIconActivationEffectController_BoosterIcons_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pBVar15 = (pLVar1->fields)._items;
      if (pBVar15 == (BoostIconActivationEffectController_BoosterIcons__Array *)0x0) break;
      if ((uint)pBVar15->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      if (pLVar1 == (List_1_BoostIconActivationEffectController_BoosterIcons_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      if (pBVar15 == (BoostIconActivationEffectController_BoosterIcons__Array *)0x0) break;
      if ((uint)pBVar15->max_length <= uVar2) goto code_?;
      pOVar7 = *(Object **)((longlong)pBVar15->vector + lVar3 + -0x18);
      if (pOVar7 == (Object *)0x0) break;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar10 = pOVar7[1].klass;
      if (pOVar10 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar7,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pOVar10);
      pLVar1 = (this->fields).boosterIcons;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 0x10;
    } while (pLVar1 != (List_1_BoostIconActivationEffectController_BoosterIcons_ *)0x0);
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetState(BoostIconActivationEffectController+EffectState) */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_SetState
               (BoostIconActivationEffectController *this,
               BoostIconActivationEffectController_EffectState__Enum newState,MethodInfo *method)

{
  pcVar1 = pcRam_?;
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
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::BoostIconActivationEffectController::
     BoostIconActivationEffectController_Update
               (BoostIconActivationEffectController *this,MethodInfo *method)

{
  if ((this->fields).currentState == 1) {
    fVar1 = (this->fields).stateStartTime;
    fVar2 = (this->fields).showingDuration;
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)();
    pcVar3 = pcRam_?;
    if (fVar2 + fVar1 <= fVar5) {
      (this->fields).currentState = 2;
      pcVar6 = pcRam_?;
      if ((pcVar3 == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar3, pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar6;
      fVar1 = (float)(*pcVar3)();
      (this->fields).stateStartTime = fVar1;
      pNVar7 = (this->fields).fader;
      if (pNVar7 != (NotificationFade *)0x0) {
        pCVar8 = (pNVar7->fields).group;
        (pNVar7->fields).playing = 1;
        (pNVar7->fields).pauseAt = (pNVar7->fields).duration;
        if (pCVar8 != (CanvasGroup *)0x0) {
          UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                    (pCVar8,0.0,(MethodInfo *)0x0);
          (pNVar7->fields).currentTime = 0.0;
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    if ((this->fields).currentState == 2) {
      pcVar3 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar3;
      fVar5 = (float)(*pcRam_?)();
      fVar1 = (this->fields).stateStartTime;
      fVar2 = (this->fields).fadingDuration;
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
      pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar9 != (Transform *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        (*pcRam_?)(pvVar10);
        pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar9 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (pTVar9->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar10);
          if (obj == (Transform *)0x0) {
            FUN_?();
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar10 = (obj->fields)._._.m_CachedPtr;
          if (pvVar10 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          (*pcRam_?)(pvVar10);
          fVar11 = (this->fields).stateStartTime;
          fVar12 = (this->fields).startNewEffectDelay;
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          fVar13 = (float)(*pcRam_?)();
          if ((fVar12 + fVar11 <= fVar13) && ((this->fields).haveStartedNewEffect == 0)) {
            pUVar14 = (this->fields).startNewEffect;
            if (pUVar14 == (UnityAction *)0x0) goto code_?;
            (*(pUVar14->fields)._._.invoke_impl)((pUVar14->fields)._._.method_code);
            (this->fields).haveStartedNewEffect = 1;
          }
          if ((fVar5 - fVar1) / fVar2 < _UNK_?) {
            return;
          }
          BoostIconActivationEffectController_SetState
                    (this,BoostIconActivationEffectController_EffectState__Enum_Inactive,
                     (MethodInfo *)0x0);
          return;
        }
      }
code_?:
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((this->fields).currentState == 0) {
      pCVar8 = (this->fields).canvasGroup;
      if (pCVar8 == (CanvasGroup *)0x0) goto code_?;
      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                (pCVar8,0.0,(MethodInfo *)0x0);
    }
  }
  return;
}

