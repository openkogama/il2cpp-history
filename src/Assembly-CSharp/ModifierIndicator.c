
/* Void Awake() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Awake
               (ModifierIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__ModifierIndicator__OverlayWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ModifierIndicator__OverlayWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (ModifierIndicator_OverlayWrapper__Array *)
           FUN_?(TypeInfo__ModifierIndicator__OverlayWrapper,3);
  bVar2 = iRam_? != 0;
  (this->fields).modifierIndicators = pMVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).modifierIndicators >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  MStack_7.image = (this->fields).poisonOverlay.image;
  MStack_7.animator = (this->fields).poisonOverlay.animator;
  pMVar1 = (this->fields).modifierIndicators;
  pAVar8 = (this->fields).fadeOutCurve;
  MStack_9.image = (Image *)(this->fields).poisonOverlay.streamComponent;
  MStack_9.animator = (ImageAnimator *)(this->fields).poisonOverlay.alphaHandler;
  pMVar10 = (ModifierIndicator_OverlayWrapper *)
           FUN_?(TypeInfo__ModifierIndicator__OverlayWrapper);
  MStack_7.streamComponent = (StreamingAsset *)MStack_9.image;
  MStack_7.alphaHandler = (CanvasGroup *)MStack_9.animator;
  ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
            (pMVar10,&MStack_7,pAVar8,(MethodInfo *)0x0);
  if (pMVar1 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
    if ((pMVar10 != (ModifierIndicator_OverlayWrapper *)0x0) &&
       (lVar11 = FUN_?(pMVar10,(pMVar1->klass->_0).element_class), lVar11 == 0)) {
      uVar12 = FUN_?();
      FUN_?(uVar12,0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
    FUN_?(pMVar1,0,pMVar10);
    MStack_9.image = (this->fields).fireOverlay.image;
    MStack_9.animator = (this->fields).fireOverlay.animator;
    pMVar1 = (this->fields).modifierIndicators;
    pAVar8 = (this->fields).fadeOutCurve;
    MStack_7.image = (Image *)(this->fields).fireOverlay.streamComponent;
    MStack_7.animator = (ImageAnimator *)(this->fields).fireOverlay.alphaHandler;
    pMVar10 = (ModifierIndicator_OverlayWrapper *)
             FUN_?(TypeInfo__ModifierIndicator__OverlayWrapper);
    MStack_9.streamComponent = (StreamingAsset *)MStack_7.image;
    MStack_9.alphaHandler = (CanvasGroup *)MStack_7.animator;
    ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
              (pMVar10,&MStack_9,pAVar8,(MethodInfo *)0x0);
    if (pMVar1 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
      if ((pMVar10 != (ModifierIndicator_OverlayWrapper *)0x0) &&
         (lVar11 = FUN_?(pMVar10,(pMVar1->klass->_0).element_class), lVar11 == 0)) {
        uVar12 = FUN_?();
        FUN_?(uVar12,0);
        pcVar13 = (code *)swi(3);
        (*pcVar13)();
        return;
      }
      FUN_?(pMVar1,1,pMVar10);
      MStack_9.image = (this->fields).iceOverlay.image;
      MStack_9.animator = (this->fields).iceOverlay.animator;
      pMVar1 = (this->fields).modifierIndicators;
      pAVar8 = (this->fields).fadeOutCurve;
      MStack_7.image = (Image *)(this->fields).iceOverlay.streamComponent;
      MStack_7.animator = (ImageAnimator *)(this->fields).iceOverlay.alphaHandler;
      pMVar10 = (ModifierIndicator_OverlayWrapper *)
               FUN_?(TypeInfo__ModifierIndicator__OverlayWrapper);
      MStack_9.streamComponent = (StreamingAsset *)MStack_7.image;
      MStack_9.alphaHandler = (CanvasGroup *)MStack_7.animator;
      ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper__ctor
                (pMVar10,&MStack_9,pAVar8,(MethodInfo *)0x0);
      if (pMVar1 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
        if ((pMVar10 != (ModifierIndicator_OverlayWrapper *)0x0) &&
           (lVar11 = FUN_?(pMVar10,(pMVar1->klass->_0).element_class), lVar11 == 0)) {
          uVar12 = FUN_?();
          FUN_?(uVar12,0);
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
        FUN_?(pMVar1,2,pMVar10);
        obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
        if (obj != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar14 = (obj->fields)._._.m_CachedPtr;
          if (pvVar14 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          if ((
              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
              ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?();
          }
          pcVar13 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar13 = (code *)FUN_?(&UNK_?), pcVar13 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
          pcRam_? = pcVar13;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar14,0,0);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Initialize
               (ModifierIndicator *this,MVAvatarLocal *localAvatar,MethodInfo *method)

{
  if (localAvatar == (MVAvatarLocal *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = iRam_? != 0;
  (this->fields).localInteractable = (MVInteractableBase *)(localAvatar->fields).interactableLocal;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).localInteractable >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                  ,1,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (this == (ModifierIndicator *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar7 = (this->fields)._._._._.m_CachedPtr;
  if (pvVar7 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar7,1);
  return;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_OnValidate
               (ModifierIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_fadeOutCurve_has_been_auto_corre);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).fadeOutCurve == (AnimationCurve *)0x0) goto code_?;
  pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                     ((this->fields).fadeOutCurve,(MethodInfo *)0x0);
  pAVar2 = (this->fields).fadeOutCurve;
  if (pAVar2 != (AnimationCurve *)0x0) {
    pvVar3 = (pAVar2->fields).m_Ptr;
    if (pvVar3 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
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
    iVar6 = (*pcRam_?)(pvVar3);
    if (pKVar1 != (Keyframe__Array *)0x0) {
      if ((uint)pKVar1->max_length <= iVar6 - 1U) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pKVar1->vector[(longlong)iVar6 + -1].m_Value == 0.0) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                        ,0,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (this == (ModifierIndicator *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar3 = (this->fields)._._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar3,0);
        return;
      }
      pAVar2 = (this->fields).fadeOutCurve;
      if (pAVar2 != (AnimationCurve *)0x0) {
        pKVar1 = UnityEngine.CoreModule.dll::UnityEngine::AnimationCurve::AnimationCurve_get_keys
                           (pAVar2,(MethodInfo *)0x0);
        pAVar2 = (this->fields).fadeOutCurve;
        if (pAVar2 != (AnimationCurve *)0x0) {
          pvVar3 = (pAVar2->fields).m_Ptr;
          if (pvVar3 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pAVar2,(MethodInfo *)0x0);
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
          iVar6 = (*pcRam_?)(pvVar3);
          if (pKVar1 != (Keyframe__Array *)0x0) {
            if ((uint)pKVar1->max_length <= iVar6 - 1U) goto code_?;
            pKVar1->vector[(longlong)iVar6 + -1].m_Value = 0.0;
            if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                      ((Object *)StringLiteral_fadeOutCurve_has_been_auto_corre,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ResetIndicators() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_ResetIndicators
               (ModifierIndicator *this,MethodInfo *method)

{
  uVar1 = 0;
  while (pMVar2 = (this->fields).modifierIndicators,
        pMVar2 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
    if ((uint)pMVar2->max_length <= (uint)uVar1) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    if ((pMVar2->vector[uVar1] == (ModifierIndicator_OverlayWrapper *)0x0) ||
       (this_00 = (pMVar2->vector[uVar1]->fields).image.image, this_00 == (Image *)0x0)) break;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    bVar4 = (char)uVar1 + 1;
    uVar1 = (ulonglong)bVar4;
    if (2 < bVar4) {
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::ModifierIndicator::ModifierIndicator_Update
               (ModifierIndicator *this,MethodInfo *method)

{
  pMVar1 = (this->fields).localInteractable;
  if (pMVar1 != (MVInteractableBase *)0x0) {
    bVar2 = (*(pMVar1->klass->vtable).__unknown_5.methodPtr)(pMVar1,4);
    pMVar3 = (this->fields).modifierIndicators;
    if (pMVar3 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
      if ((int)pMVar3->max_length == 0) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if (pMVar3->vector[0] != (ModifierIndicator_OverlayWrapper *)0x0) {
        ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
                  (pMVar3->vector[0],bVar2 & 1,(MethodInfo *)0x0);
        pMVar1 = (this->fields).localInteractable;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          bVar5 = (*(pMVar1->klass->vtable).__unknown_5.methodPtr)(pMVar1,1);
          pMVar3 = (this->fields).modifierIndicators;
          if (pMVar3 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
            if ((uint)pMVar3->max_length < 2) goto code_?;
            if (pMVar3->vector[1] != (ModifierIndicator_OverlayWrapper *)0x0) {
              ModifierIndicator+OverlayWrapper::ModifierIndicator_OverlayWrapper_Update
                        (pMVar3->vector[1],bVar2 == 0 & bVar5,(MethodInfo *)0x0);
              pMVar1 = (this->fields).localInteractable;
              if (pMVar1 != (MVInteractableBase *)0x0) {
                bVar6 = (*(pMVar1->klass->vtable).__unknown_5.methodPtr)(pMVar1,10);
                pMVar3 = (this->fields).modifierIndicators;
                if (pMVar3 != (ModifierIndicator_OverlayWrapper__Array *)0x0) {
                  if ((uint)pMVar3->max_length < 3) goto code_?;
                  pMVar7 = pMVar3->vector[2];
                  if (pMVar7 != (ModifierIndicator_OverlayWrapper *)0x0) {
                    pCVar8 = (pMVar7->fields).image.alphaHandler;
                    if (((bVar2 == 0 && bVar5 == 0) & bVar6) == 0) {
                      if (pCVar8 != (CanvasGroup *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar9 = (pCVar8->fields)._._._.m_CachedPtr;
                        if (pvVar9 == (void *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                          ThrowHelper_2_ThrowNullReferenceException
                                    ((Object *)pCVar8,(MethodInfo *)0x0);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcVar4 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)
                           ) {
                          uVar10 = func_?(&UNK_?);
                          FUN_?(uVar10,0);
                          pcVar4 = (code *)swi(3);
                          (*pcVar4)();
                          return;
                        }
                        pcRam_? = pcVar4;
                        fVar11 = (float)(*pcRam_?)(pvVar9);
                        if (_UNK_? < fVar11) {
                          obj = (pMVar7->fields).fadeOutCurve;
                          if (obj != (AnimationCurve *)0x0) {
                            pvVar9 = (obj->fields).m_Ptr;
                            if (pvVar9 == (void *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                              ThrowHelper_2_ThrowNullReferenceException
                                        ((Object *)obj,(MethodInfo *)0x0);
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            fVar11 = (pMVar7->fields).fadeOutTimer;
                            pcVar4 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar4 = (code *)FUN_?(&UNK_?),
                               pcVar4 == (code *)0x0)) {
                              uVar10 = func_?(&UNK_?);
                              FUN_?(uVar10,0);
                              pcVar4 = (code *)swi(3);
                              (*pcVar4)();
                              return;
                            }
                            pcRam_? = pcVar4;
                            fVar11 = (float)(*pcRam_?)(pvVar9,fVar11);
                            pCVar8 = (pMVar7->fields).image.alphaHandler;
                            if (pCVar8 != (CanvasGroup *)0x0) {
                              UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::
                              CanvasGroup_set_alpha(pCVar8,fVar11,(MethodInfo *)0x0);
                              fVar11 = (pMVar7->fields).fadeOutTimer;
                              pcVar4 = pcRam_?;
                              if ((pcRam_? == (code *)0x0) &&
                                 (pcVar4 = (code *)FUN_?(&UNK_?),
                                 pcVar4 == (code *)0x0)) {
                                uVar10 = func_?(&UNK_?);
                                FUN_?(uVar10,0);
                                pcVar4 = (code *)swi(3);
                                (*pcVar4)();
                                return;
                              }
                              pcRam_? = pcVar4;
                              fVar12 = (float)(*pcRam_?)();
                              (pMVar7->fields).fadeOutTimer = fVar12 + fVar11;
                              return;
                            }
                          }
                        }
                        else {
                          pIVar13 = (pMVar7->fields).image.animator;
                          if (pIVar13 != (ImageAnimator *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                            Behaviour_set_enabled((Behaviour *)pIVar13,0,(MethodInfo *)0x0);
                            pIVar14 = (pMVar7->fields).image.image;
                            if (pIVar14 != (Image *)0x0) {
                              value = 0;
code_?:
                              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                              Behaviour_set_enabled((Behaviour *)pIVar14,value,(MethodInfo *)0x0);
                              return;
                            }
                          }
                        }
                      }
                    }
                    else if (pCVar8 != (CanvasGroup *)0x0) {
                      UnityEngine.UIModule.dll::UnityEngine::CanvasGroup::CanvasGroup_set_alpha
                                (pCVar8,_UNK_?,(MethodInfo *)0x0);
                      pIVar14 = (pMVar7->fields).image.image;
                      (pMVar7->fields).fadeOutTimer = 0.0;
                      if (pIVar14 != (Image *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                  ((Behaviour *)pIVar14,1,(MethodInfo *)0x0);
                        pIVar13 = (pMVar7->fields).image.animator;
                        if (pIVar13 != (ImageAnimator *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                                    ((Behaviour *)pIVar13,1,(MethodInfo *)0x0);
                          pIVar14 = (Image *)(pMVar7->fields).image.streamComponent;
                          if (pIVar14 != (Image *)0x0) {
                            value = 1;
                            goto code_?;
                          }
                        }
                      }
                    }
                    FUN_?();
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

