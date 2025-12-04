
/* Void Awake() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_Awake
               (DamageIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<UnityEngine::Sprite>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__DamageIndicator__SetArrowSprites_UnityEngine__Sprite_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__DamageIndicator__IndicatorArrow);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).timeNormalizationFactor = (this->fields).durationPerPointOfDamage * _UNK_?;
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
    pvVar1 = (obj->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((
        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Transform>_UnityEngine__Transform_
        ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
      FUN_?();
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1,0,0);
    numberOfArrows = (this->fields).maxNumberOfArrows;
    pDVar4 = (this->fields).directionArrowBase;
    fVar5 = (this->fields).indicationRadius;
    pDVar6 = (DamageIndicator_IndicatorArrow *)
              FUN_?(TypeInfo__DamageIndicator__IndicatorArrow);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DamageIndicator__IndicatorArrow);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow__ctor_1
              (pDVar6,numberOfArrows,pDVar4,(DamageIndicator_IndicatorArrow *)0x0,(MethodInfo *)0x0
              );
    TypeInfo__DamageIndicator__IndicatorArrow->static_fields->indicationRadius = fVar5;
    TypeInfo__DamageIndicator__IndicatorArrow->static_fields->_nextArrow = pDVar6;
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)TypeInfo__DamageIndicator__IndicatorArrow->static_fields >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    iVar12 = iRam_?;
    (this->fields).directionArrow = pDVar6;
    if (iVar12 != 0) {
      uVar7 = (uint)((ulonglong)&(this->fields).directionArrow >> 0xc);
      uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
      do {
        uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
        puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pSVar13 = (this->fields).arrowSpriteStream;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__System__Action<UnityEngine::Sprite>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__DamageIndicator__SetArrowSprites_UnityEngine__Sprite_,(MethodInfo *)0x0);
    if (pSVar13 != (StreamedSpriteToCallback *)0x0) {
      bVar11 = iRam_? != 0;
      (pSVar13->fields)._.onAssetSet = (Action_1_UnityEngine_Sprite_ *)this_00;
      if (bVar11) {
        uVar7 = (uint)((ulonglong)&(pSVar13->fields)._.onAssetSet >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      pIVar14 = (this->fields).damageOverlay;
      if (pIVar14 != (Image *)0x0) {
        lVar15 = (*(pIVar14->klass->vtable).get_color.methodPtr)(auStack_16);
        (this->fields).initialAlpha = *(float *)(lVar15 + 0xc);
        pIVar14 = (this->fields).damageOverlay;
        if (pIVar14 != (Image *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                    ((Behaviour *)pIVar14,0,(MethodInfo *)0x0);
          pDVar6 = (this->fields).directionArrow;
          if (pDVar6 != (DamageIndicator_IndicatorArrow *)0x0) {
            for (pDVar17 = (pDVar6->fields).nextArrow; pDVar17 != pDVar6;
                pDVar17 = (pDVar17->fields).nextArrow) {
              if ((pDVar17 == (DamageIndicator_IndicatorArrow *)0x0) ||
                 (pDVar4 = (pDVar17->fields).arrow, pDVar4 == (DamageArrow *)0x0))
              goto code_?;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        ((Behaviour *)pDVar4,0,(MethodInfo *)0x0);
              (pDVar17->fields).idle = 1;
            }
            pDVar4 = (pDVar6->fields).arrow;
            if (pDVar4 != (DamageArrow *)0x0) {
              if (cRam_? == '\0') {
                FUN_?(&
                              void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                             );
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar1 = (pDVar4->fields)._._._._.m_CachedPtr;
              if (pvVar1 != (void *)0x0) {
                pcVar2 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
                  uVar3 = func_?(&UNK_?);
                  FUN_?(uVar3,0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*pcRam_?)(pvVar1,0);
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)pDVar4,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
          }
        }
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetIndicators() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_ResetIndicators
               (DamageIndicator *this,MethodInfo *method)

{
  this_00 = (this->fields).damageOverlay;
  if (this_00 != (Image *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,0,(MethodInfo *)0x0);
    pDVar1 = (this->fields).directionArrow;
    if (pDVar1 != (DamageIndicator_IndicatorArrow *)0x0) {
      for (pDVar2 = (pDVar1->fields).nextArrow; pDVar2 != pDVar1;
          pDVar2 = (pDVar2->fields).nextArrow) {
        if ((pDVar2 == (DamageIndicator_IndicatorArrow *)0x0) ||
           (pDVar3 = (pDVar2->fields).arrow, pDVar3 == (DamageArrow *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pDVar3,0,(MethodInfo *)0x0);
        (pDVar2->fields).idle = 1;
      }
      pDVar3 = (pDVar1->fields).arrow;
      if (pDVar3 != (DamageArrow *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar4 = (pDVar3->fields)._._._._.m_CachedPtr;
        if (pvVar4 != (void *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*pcRam_?)(pvVar4,0);
          return;
        }
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pDVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetArrowSprites(Sprite) */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_SetArrowSprites
               (DamageIndicator *this,Sprite *sprite,MethodInfo *method)

{
  iVar1 = 0;
  if (0 < (this->fields).maxNumberOfArrows) {
    do {
      pDVar2 = (this->fields).directionArrow;
      if (((pDVar2 == (DamageIndicator_IndicatorArrow *)0x0) ||
          (pDVar3 = (pDVar2->fields).arrow, pDVar3 == (DamageArrow *)0x0)) ||
         (this_00 = (pDVar3->fields).image, this_00 == (Image *)0x0)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      UnityEngine.UI.dll::UnityEngine::UI::Image::Image_set_sprite(this_00,sprite,(MethodInfo *)0x0)
      ;
      pDVar2 = DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_get_NextArrow
                         ((MethodInfo *)0x0);
      bVar5 = iRam_? != 0;
      (this->fields).directionArrow = pDVar2;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(this->fields).directionArrow >> 0xc);
        uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
        do {
          uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
          puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (this->fields).maxNumberOfArrows);
  }
  return;
}


/* Void ShowDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_ShowDamage
               (DamageIndicator *this,float damageAmount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  if (damageDealer != (MVPlayer *)0x0) {
    iVar1 = (damageDealer->fields)._ActorNr_k__BackingField;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar2 == (MVGameControllerBase *)0x0) ||
         (pMVar3 = (pMVar2->fields).game, pMVar3 == (MVNetworkGame *)0x0)) ||
        (this_00 = (pMVar3->fields).playerContainer, this_00 == (MVPlayerContainer *)0x0)) ||
       (pMVar4 = MVPlayerContainer::MVPlayerContainer_get_LocalPlayer(this_00,(MethodInfo *)0x0),
       pMVar4 == (MVLocalPlayer *)0x0)) goto code_?;
    if (iVar1 != (pMVar4->fields)._._ActorNr_k__BackingField) {
      pDVar5 = DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_get_NextArrow
                          ((MethodInfo *)0x0);
      bVar6 = iRam_? != 0;
      (this->fields).directionArrow = pDVar5;
      if (bVar6) {
        uVar7 = (uint)((ulonglong)&(this->fields).directionArrow >> 0xc);
        uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
        do {
          uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
          puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
          LOCK();
          bVar6 = uVar9 == *puVar10;
          if (bVar6) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar6);
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      pSVar11 = (damageDealer->fields).spawnRolesManager;
      if (((pSVar11 == (SpawnRolesManager *)0x0) ||
          (pSVar12 = (pSVar11->fields).spawnRolesRuntimeData, pSVar12 == (SpawnRolesRuntimeData *)0x0))
         || ((this_04 == (MVWorldObjectClientManager *)0x0 ||
             ((pMVar13 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                                   (this_04,(pSVar12->fields).activeSpawnRole,(MethodInfo *)0x0),
              pMVar13 == (MVWorldObjectClient *)0x0 ||
              (this_01 = (pMVar13->fields).gameObject, this_01 == (GameObject *)0x0))))))
      goto code_?;
      bVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_01,(MethodInfo *)0x0);
      if (bVar14 == 0) {
        pDVar5 = (this->fields).directionArrow;
        if (pDVar5 == (DamageIndicator_IndicatorArrow *)0x0) goto code_?;
        bVar6 = iRam_? != 0;
        fVar15 = (this->fields).durationPerPointOfDamage;
        (pDVar5->fields).damageOrigin = (pMVar13->fields).transform;
        if (bVar6) {
          uVar7 = (uint)((ulonglong)&(pDVar5->fields).damageOrigin >> 0xc);
          uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
          do {
            uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
            puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
            LOCK();
            bVar6 = uVar9 == *puVar10;
            if (bVar6) {
              *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
            }
            UNLOCK();
          } while (!bVar6);
        }
        this_02 = (pDVar5->fields).arrow;
        (pDVar5->fields).timer = damageAmount * fVar15;
        if (this_02 == (DamageArrow *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)this_02,1,(MethodInfo *)0x0);
        (pDVar5->fields).idle = 0;
      }
    }
  }
  if ((char)damageType != '\x06') {
    fVar16 = damageAmount * (this->fields).durationPerPointOfDamage;
    fVar15 = (this->fields).damageOverlayTimer;
    if (fVar15 <= fVar16) {
      fVar15 = fVar16;
    }
    this_03 = (this->fields).damageOverlay;
    (this->fields).damageOverlayTimer = fVar15;
    if (this_03 == (Image *)0x0) {
code_?:
      FUN_?();
      pcVar17 = (code *)swi(3);
      (*pcVar17)();
      return;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_03,1,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator_Update
               (DamageIndicator *this,MethodInfo *method)

{
  this_00 = (this->fields).directionArrow;
  if (this_00 != (DamageIndicator_IndicatorArrow *)0x0) {
    for (this_01 = (this_00->fields).nextArrow; this_01 != this_00;
        this_01 = (this_01->fields).nextArrow) {
      if (this_01 == (DamageIndicator_IndicatorArrow *)0x0) goto code_?;
      DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_InternalUpdate
                (this_01,(MethodInfo *)0x0);
    }
    DamageIndicator+IndicatorArrow::DamageIndicator_IndicatorArrow_InternalUpdate
              (this_00,(MethodInfo *)0x0);
    if ((this->fields).damageOverlayTimer <= 0.0) {
      pIVar1 = (this->fields).damageOverlay;
      if (pIVar1 != (Image *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pIVar1,0,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      obj = (this->fields).fade;
      if (obj != (AnimationCurve *)0x0) {
        pvVar2 = (obj->fields).m_Ptr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        fVar4 = (this->fields).damageOverlayTimer;
        fVar5 = (this->fields).timeNormalizationFactor;
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
        fStack_7 = (float)(*pcRam_?)(pvVar2,fVar4 / fVar5);
        pIVar1 = (this->fields).damageOverlay;
        fStack_7 = fStack_7 * (this->fields).initialAlpha;
        if (pIVar1 != (Image *)0x0) {
          puVar8 = (undefined4 *)
                   (*(pIVar1->klass->vtable).get_color.methodPtr)
                             (&uStack_9,pIVar1,(pIVar1->klass->vtable).get_color.method);
          uStack_9 = *puVar8;
          uStack_10 = puVar8[1];
          uStack_11 = puVar8[2];
          (*(pIVar1->klass->vtable).set_color.methodPtr)
                    (pIVar1,&uStack_9,(pIVar1->klass->vtable).set_color.method);
          fVar4 = (this->fields).damageOverlayTimer;
          pcVar3 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pcRam_? = pcVar3;
          fVar5 = (float)(*pcRam_?)();
          (this->fields).damageOverlayTimer = fVar4 - fVar5;
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* DamageIndicator() */

void Assembly-CSharp.dll::DamageIndicator::DamageIndicator__ctor
               (DamageIndicator *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (this->fields).indicationRadius = 35.0;
  (this->fields).durationPerPointOfDamage = 0.03;
  (this->fields).maxNumberOfArrows = 3;
  (this->fields).damageOverlayTimer = -INFINITY;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar2 = TypeInfo__UnityEngine__Object;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  ppMVar3 = (MethodInfo **)0x0;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c != 0) {
    return;
  }
  lVar4 = _Baselib_Thread_GetCurrentThreadId_il2cpp_baselib__YA_JXZ();
  ppMVar5 = ppMVar3;
  if (lVar4 == lRam_?) {
    iRam_? = iRam_? + 1;
    lVar4 = lRam_?;
  }
  else {
    do {
      uVar6 = (uint)ppMVar5;
      LOCK();
      bVar1 = uVar6 != uRam_?;
      uVar7 = uVar6;
      uVar8 = uVar6 + 1;
      if (bVar1) {
        uVar7 = uRam_?;
        uVar8 = uRam_?;
      }
      uRam_? = uVar8;
      UNLOCK();
    } while ((bVar1) && (ppMVar5 = (MethodInfo **)(ulonglong)uVar7, uVar6 = uVar7, uVar7 != 2)
            );
    while (uVar6 != 0) {
      _Baselib_SystemFutex_Wait_il2cpp_baselib__YAXPEAHHI_Z(0xADDR,2,0xffffffff);
      uVar6 = uRam_?;
      LOCK();
      uRam_? = 2;
      UNLOCK();
    }
  }
  lRam_? = lVar4;
  puVar9 = &(pOVar2->_1).field_0x1c;
  LOCK();
  bVar1 = *(int *)puVar9 == 1;
  if (bVar1) {
    *(undefined4 *)puVar9 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? != 0) {
      iRam_? = iRam_? + -1;
      return;
    }
    lRam_? = 0;
    LOCK();
    uRam_? = 0;
    UNLOCK();
    if (uVar6 != 2) {
      uRam_? = 0;
      lRam_? = 0;
      return;
    }
    _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
              (0xADDR,1,0);
    return;
  }
  puVar10 = &(pOVar2->_1).cctor_finished_or_no_cctor;
  LOCK();
  bVar1 = *puVar10 == 1;
  if (bVar1) {
    *puVar10 = 1;
  }
  uVar6 = uRam_?;
  UNLOCK();
  if (bVar1) {
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    uVar6 = GetCurrentThreadId();
    psVar11 = &(pOVar2->_1).cctor_thread;
    LOCK();
    bVar1 = (ulonglong)uVar6 == *psVar11;
    if (bVar1) {
      *psVar11 = (ulonglong)uVar6;
    }
    UNLOCK();
    if (bVar1) {
      return;
    }
    while( true ) {
      puVar9 = &(pOVar2->_1).field_0x1c;
      LOCK();
      bVar1 = *(int *)puVar9 == 1;
      if (bVar1) {
        *(undefined4 *)puVar9 = 1;
      }
      UNLOCK();
      if (bVar1) break;
      LOCK();
      lVar4._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
      lVar4._4_4_ = (pOVar2->_1).cctor_started;
      if (lVar4 == 0) {
        (pOVar2->_1).initializationExceptionGCHandle = 0;
        (pOVar2->_1).cctor_started = 0;
      }
      UNLOCK();
      if (lVar4 != 0) break;
      FUN_?(*puRam_?);
    }
code_?:
    lVar12._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
    lVar12._4_4_ = (pOVar2->_1).cctor_started;
    if (lVar12 == 0) {
      return;
    }
  }
  else {
    uVar6 = GetCurrentThreadId();
    LOCK();
    (pOVar2->_1).cctor_thread = (ulonglong)uVar6;
    UNLOCK();
    LOCK();
    (pOVar2->_1).cctor_finished_or_no_cctor = 1;
    uVar6 = uRam_?;
    UNLOCK();
    if (iRam_? == 0) {
      lRam_? = 0;
      LOCK();
      uRam_? = 0;
      UNLOCK();
      if (uVar6 == 2) {
        _Baselib_SystemFutex_Notify_il2cpp_baselib__YAXPEAHIW4Baselib_WakeupFallbackStrategy_1__Z
                  (0xADDR,1,0);
      }
    }
    else {
      iRam_? = iRam_? + -1;
    }
    lStackX_10 = 0;
    if (((pOVar2->_1).field_0x6e & 4) != 0) {
      FUN_?(pOVar2);
      ppMVar5 = ppMVar3;
      pIVar13 = (Il2CppClass *)pOVar2;
code_?:
      do {
        if (ppMVar5 == (MethodInfo **)0x0) {
          FUN_?(pIVar13);
          if (pIVar13->field_count != 0) {
            ppMVar5 = pIVar13->methods;
            pMVar14 = *ppMVar5;
code_?:
            if (pMVar14 != (MethodInfo *)0x0) {
              if ((*pMVar14->name == '.') && ((pMVar14->flags & 0x800) != 0)) {
                ppMVar15 = ppMVar3;
                while (ppMVar16 = ppMVar15 + 0x30529dd4,
                      ppMVar15 = (MethodInfo **)((longlong)ppMVar15 + 1),
                      *(char *)ppMVar16 == (pMVar14->name + -1)[(longlong)ppMVar15]) {
                  if (ppMVar15 == (MethodInfo **)0x7) {
                    FUN_?(pMVar14,0,0,&lStackX_10);
                    goto code_?;
                  }
                }
              }
              goto code_?;
            }
          }
        }
        else {
          ppMVar5 = ppMVar5 + 1;
          if (ppMVar5 < pIVar13->methods + pIVar13->field_count) {
            pMVar14 = *ppMVar5;
            goto code_?;
          }
        }
        pIVar13 = pIVar13->parent;
        ppMVar5 = ppMVar3;
      } while (pIVar13 != (Il2CppClass *)0x0);
    }
code_?:
    LOCK();
    (pOVar2->_1).cctor_thread = 0;
    uVar17 = _UNK_?;
    uVar18 = _UNK_?;
    UNLOCK();
    if (lStackX_10 == 0) {
      LOCK();
      *(undefined4 *)&(pOVar2->_1).field_0x1c = 1;
      UNLOCK();
      goto code_?;
    }
    uStack_19 = 0;
    uStack_20 = _UNK_?;
    uStack_21 = _UNK_?;
    pppppppuStack_78 = (undefined8 *******)0x0;
    FUN_?(&pppppppuStack_78,&(pOVar2->_0).byval_arg,0,0);
    pppppppuVar16 = &pppppppuStack_78;
    if (0xf < uStack_21) {
      pppppppuVar16 = pppppppuStack_78;
    }
    FUN_?(apppppppuStack_58,&UNK_?,pppppppuVar16);
    if (uStack_21 < 0x10) {
code_?:
      lVar4 = lStackX_10;
      pppppppuStack_78 = (undefined8 *******)((ulonglong)pppppppuStack_78 & 0xffffffffffffff00);
      pppppppuVar16 = apppppppuStack_58;
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
      }
      uStack_20 = uVar18;
      uStack_21 = uVar17;
      lVar12 = FUN_?(uRam_?,&UNK_?,&UNK_?,pppppppuVar16);
      if (lVar4 != 0) {
        *(longlong *)(lVar12 + 0x28U) = lVar4;
        if (iRam_? != 0) {
          uVar6 = (uint)(lVar12 + 0x28U >> 0xc);
          puVar23 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar24 = *puVar23;
            LOCK();
            uVar17 = *puVar23;
            if (uVar24 == uVar17) {
              *puVar23 = uVar24 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (uVar24 != uVar17);
        }
      }
      FUN_?(pOVar2,lVar12);
      if (0xf < uStack_22) {
        pppppppuVar16 = apppppppuStack_58[0];
        if ((0xfff < uStack_22 + 1) &&
           (pppppppuVar16 = (undefined8 *******)apppppppuStack_58[0][-1],
           0x1f < (ulonglong)((longlong)apppppppuStack_58[0] + (-8 - (longlong)pppppppuVar16))))
        goto code_?;
        func_?(pppppppuVar16);
      }
      goto code_?;
    }
    pppppppuVar16 = pppppppuStack_78;
    if ((uStack_21 + 1 < 0x1000) ||
       (pppppppuVar16 = (undefined8 *******)pppppppuStack_78[-1],
       (ulonglong)((longlong)pppppppuStack_78 + (-8 - (longlong)pppppppuVar16)) < 0x20)) {
      func_?(pppppppuVar16);
      uVar18 = _UNK_?;
      uVar17 = _UNK_?;
      goto code_?;
    }
    FUN_?(0,0,0,0,0);
  }
  uVar18._0_4_ = (pOVar2->_1).initializationExceptionGCHandle;
  uVar18._4_4_ = (pOVar2->_1).cctor_started;
  uVar18 = FUN_?(uVar18);
  FUN_?(uVar18,0);
code_?:
  FUN_?(0,0,0,0,0);
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}

