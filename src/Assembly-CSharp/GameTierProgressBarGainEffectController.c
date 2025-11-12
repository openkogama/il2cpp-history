
/* Void CreateGamePointGainEffect() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_CreateGamePointGainEffect
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GameTierProgressBarGainEffectController__OnGamePointReached_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).gamePointGainEffectPrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GamePointGainEffect *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pGVar1,
                       GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect_
                      );
  if ((pGVar1 != (GamePointGainEffect *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pGVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pGVar1,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,(this->fields).gamePointEffectContainer,0,(MethodInfo *)0x0);
      pUVar2 = (UnityAction_1_System_Int32_ *)
                FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
      FUN_?(pUVar2,this,
                    MethodInfo__GameTierProgressBarGainEffectController__OnGamePointReached_int_);
      pLVar3 = (this->fields).gamePointGainEffectPool;
      if ((pLVar3 != (List_1_GamePointGainEffect_ *)0x0) &&
         (pLVar4 = (this->fields).gamePointGainEffectCurrentlyUsed,
         pLVar4 != (List_1_GamePointGainEffect_ *)0x0)) {
        iVar5 = (pLVar4->fields)._size;
        iVar6 = (pLVar3->fields)._size;
        bVar7 = iRam_? != 0;
        (pGVar1->fields).onReachCallbackCallback = pUVar2;
        if (bVar7) {
          uVar8 = (uint)((ulonglong)&(pGVar1->fields).onReachCallbackCallback >> 0xc);
          puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
          do {
            uVar10 = *puVar9;
            LOCK();
            uVar11 = *puVar9;
            if (uVar10 == uVar11) {
              *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
            }
            UNLOCK();
          } while (uVar10 != uVar11);
        }
        (pGVar1->fields).id = iVar5 + iVar6;
        pMVar12 = 
        MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
        ;
        pLVar3 = (this->fields).gamePointGainEffectPool;
        if (pLVar3 != (List_1_GamePointGainEffect_ *)0x0) {
          pGVar13 = (pLVar3->fields)._items;
          piVar14 = &(pLVar3->fields)._version;
          *piVar14 = *piVar14 + 1;
          if (pGVar13 == (GamePointGainEffect__Array *)0x0) {
            FUN_?();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          uVar8 = (pLVar3->fields)._size;
          if (uVar8 < (uint)pGVar13->max_length) {
            (pLVar3->fields)._size = uVar8 + 1;
          }
          else {
            uVar8 = (pLVar3->fields)._size;
            FUN_?(pLVar3,uVar8 + 1,
                          (pMVar12->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].
                          rgctxDataDummy,pGVar13,unaff_RDI);
            pGVar13 = (pLVar3->fields)._items;
            (pLVar3->fields)._size = uVar8 + 1;
            if (pGVar13 == (GamePointGainEffect__Array *)0x0) {
              FUN_?();
              pcVar15 = (code *)swi(3);
              (*pcVar15)();
              return;
            }
          }
          if ((uint)pGVar13->max_length <= uVar8) {
            FUN_?();
            pcVar15 = (code *)swi(3);
            (*pcVar15)();
            return;
          }
          bVar7 = iRam_? != 0;
          pGVar13->vector[(int)uVar8] = pGVar1;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)(pGVar13->vector + (int)uVar8) >> 0xc);
            puVar9 = (ulonglong *)((ulonglong)((uVar8 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar10 = *puVar9;
              LOCK();
              uVar11 = *puVar9;
              if (uVar10 == uVar11) {
                *puVar9 = uVar10 | 1L << (uVar8 & 0x3f);
              }
              UNLOCK();
            } while (uVar10 != uVar11);
          }
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Transform GetTargetTransform() */

Transform *
Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
GameTierProgressBarGainEffectController_GetTargetTransform
          (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).tierProgressBar;
  if (pGVar1 != (GameTierProgressBar *)0x0) {
    cVar2 = FUN_?((pGVar1->fields).previousProgressValue);
    pLVar3 = (this->fields).targetDataList;
    uVar4 = (byte)(cVar2 + 1) - 1;
    if (pLVar3 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
      if ((int)uVar4 < 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = (pLVar3->fields)._size - 1;
        if ((int)uVar4 <= (int)uVar5) {
          uVar5 = uVar4;
        }
      }
      if ((uint)(pLVar3->fields)._size <= uVar5) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar6 = (code *)swi(3);
        pTVar7 = (Transform *)(*pcVar6)();
        return pTVar7;
      }
      pGVar8 = (pLVar3->fields)._items;
      if (pGVar8 != (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0) {
        if ((uint)pGVar8->max_length <= uVar5) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          pTVar7 = (Transform *)(*pcVar6)();
          return pTVar7;
        }
        if (pGVar8->vector[(int)uVar5] !=
            (GameTierProgressBarGainEffectController_TierTargetData *)0x0) {
          return (pGVar8->vector[(int)uVar5]->fields).gamePointEffectTargetTransform;
        }
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pTVar7 = (Transform *)(*pcVar6)();
  return pTVar7;
}


/* Void HandleNewGamePointAmount(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_HandleNewGamePointAmount
               (GameTierProgressBarGainEffectController *this,int32_t newGamePointsAmount,
               MethodInfo *method)

{
  iVar1 = ((this->fields).gamePointsToInstantiate - (this->fields).currentGamePoints) +
           newGamePointsAmount;
  (this->fields).gamePointsToInstantiate = iVar1;
  if (10 < iVar1) {
    (this->fields).gamePointsToInstantiate = 10;
  }
  pcVar2 = pcRam_?;
  (this->fields).currentGamePoints = newGamePointsAmount;
  pcVar3 = pcRam_?;
  if ((pcVar2 == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcVar2)();
  pfVar6 = &(this->fields).createGamePointTime;
  if (fVar5 < *pfVar6 || fVar5 == *pfVar6) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar7 = (this->fields).gamePointGainEffectPool;
  if (pLVar7 != (List_1_GamePointGainEffect_ *)0x0) {
    if ((pLVar7->fields)._size == 0) {
      GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar7 = (this->fields).gamePointGainEffectPool;
    if (pLVar7 != (List_1_GamePointGainEffect_ *)0x0) {
      iVar1 = (pLVar7->fields)._size;
      if ((uint)(pLVar7->fields)._size <= iVar1 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar8 = (pLVar7->fields)._items;
      if (pGVar8 != (GamePointGainEffect__Array *)0x0) {
        if ((uint)pGVar8->max_length <= iVar1 - 1U) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pLVar7 = (this->fields).gamePointGainEffectPool;
        this_00 = pGVar8->vector[(longlong)iVar1 + -1];
        if ((pLVar7 != (List_1_GamePointGainEffect_ *)0x0) &&
           (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                       (pLVar7->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                      ), this_00 != (GamePointGainEffect *)0x0)) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (obj != (Transform *)0x0) {
            uStack_10._0_4_ = (pVVar9->zeroVector).x;
            uStack_10._4_4_ = (pVVar9->zeroVector).y;
            fStack_11 = (pVVar9->zeroVector).z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (obj->fields)._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pvVar12,&uStack_10);
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar13 = (this->fields).tierProgressBar;
            if (pGVar13 != (GameTierProgressBar *)0x0) {
              cVar14 = FUN_?((pGVar13->fields).previousProgressValue);
              pLVar15 = (this->fields).targetDataList;
              uVar16 = (byte)(cVar14 + 1) - 1;
              if (pLVar15 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
                if ((int)uVar16 < 0) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = (pLVar15->fields)._size - 1;
                  if ((int)uVar16 <= (int)uVar17) {
                    uVar17 = uVar16;
                  }
                }
                if ((uint)(pLVar15->fields)._size <= uVar17) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pGVar18 = (pLVar15->fields)._items;
                if (pGVar18 != (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0)
                {
                  if ((uint)pGVar18->max_length <= uVar17) {
                    FUN_?();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (pGVar18->vector[(int)uVar17] !=
                      (GameTierProgressBarGainEffectController_TierTargetData *)0x0) {
                    GamePointGainEffect::GamePointGainEffect_StartEffect
                              (this_00,(pGVar18->vector[(int)uVar17]->fields).
                                       gamePointEffectTargetTransform,
                               (this->fields).offsetDirectionXMin,(this->fields).offsetDirectionXMax
                               ,(this->fields).offsetDirectionYMin,
                               (this->fields).offsetDirectionYMax,(MethodInfo *)0x0);
                    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                    if (this_01 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_01,1,(MethodInfo *)0x0);
                      pLVar7 = (this->fields).gamePointGainEffectCurrentlyUsed;
                      if (pLVar7 != (List_1_GamePointGainEffect_ *)0x0) {
                        FUN_?(pLVar7,this_00);
                        pcVar2 = pcRam_?;
                        piVar19 = &(this->fields).gamePointsToInstantiate;
                        *piVar19 = *piVar19 + -1;
                        pcVar3 = pcRam_?;
                        if ((pcVar2 == (code *)0x0) &&
                           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2,
                           pcVar2 == (code *)0x0)) {
                          uVar4 = func_?(&UNK_?);
                          FUN_?(uVar4,0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcRam_? = pcVar3;
                        fVar5 = (float)(*pcVar2)();
                        pcVar2 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)
                           ) {
                          uVar4 = func_?(&UNK_?);
                          FUN_?(uVar4,0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcRam_? = pcVar2;
                        fVar20 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
                        (this->fields).createGamePointTime = fVar20 + fVar5;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleScaleEffect() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_HandleScaleEffect
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).targetDataList;
  uVar2 = 0;
  if (pLVar1 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
    lVar3 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)uVar2) {
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(), pcVar4 == (code *)0x0)) {
        uVar5 = func_?(&UNK_?);
        FUN_?(uVar5,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
      fVar6 = (float)(*pcRam_?)();
      pLVar1 = (this->fields).targetDataList;
      if (pLVar1 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0)
      goto code_?;
      if ((uint)(pLVar1->fields)._size <= uVar2) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar7 = (pLVar1->fields)._items;
      if (pGVar7 == (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0)
      goto code_?;
      if ((uint)pGVar7->max_length <= uVar2) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar8 = *(longlong *)((longlong)pGVar7->vector + lVar3 + -0x20);
      if ((lVar8 == 0) || (obj = (this->fields).onHitScaleEffect, obj == (AnimationCurve *)0x0)) {
code_?:
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar9 = (obj->fields).m_Ptr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      fVar10 = *(float *)(lVar8 + 0x18);
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
      (*pcRam_?)(pvVar9,fVar6 - fVar10);
      pLVar1 = (this->fields).targetDataList;
      if (pLVar1 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0)
      goto code_?;
      if ((uint)(pLVar1->fields)._size <= uVar2) goto code_?;
      pGVar7 = (pLVar1->fields)._items;
      if (pGVar7 == (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0)
      goto code_?;
      if ((uint)pGVar7->max_length <= uVar2) goto code_?;
      lVar8 = *(longlong *)((longlong)pGVar7->vector + lVar3 + -0x20);
      if ((lVar8 == 0) || (obj_00 = *(Object **)(lVar8 + 0x10), obj_00 == (Object *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar11 = obj_00[1].klass;
      if (pOVar11 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
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
      (*pcRam_?)(pOVar11);
      pLVar1 = (this->fields).targetDataList;
      uVar2 = uVar2 + 1;
      lVar3 = lVar3 + 8;
    } while (pLVar1 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0);
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_Initialize
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized == 0) {
    bVar1 = cRam_? == '\0';
    (this->fields).isInitialized = 1;
    if (bVar1) {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 == (PlayerPlanetData *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields).currentGamePoints = (pPVar2->fields).progressionGamePoints;
    }
    pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?(pAVar4,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?(pAVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar1 = uVar8 == *puVar9;
        if (bVar1) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar11,this);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
    pAVar12 = TypeInfo__System__Action<int>;
    if (pDVar11 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (pAVar10 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar10;
      pAVar12 = TypeInfo__System__Action<int>;
      lVar7 = FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (lVar7 == 0) {
        FUN_?(pDVar11,pAVar12);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar1 = uVar8 == *puVar9;
        if (bVar1) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->
             OnTierProgressBarGamePointGainEffectShown;
    pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar11,this);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
    pAVar12 = TypeInfo__System__Action<int>;
    if (pDVar11 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (pAVar10 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = pAVar10;
      pAVar12 = TypeInfo__System__Action<int>;
      lVar7 = FUN_?(pDVar11);
      if (lVar7 == 0) {
        FUN_?(pDVar11,pAVar12);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePointGainEffectManager->static_fields->
                       OnTierProgressBarGamePointGainEffectShown >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar1 = uVar8 == *puVar9;
        if (bVar1) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    lVar7 = 5;
    do {
      GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnDestroy
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,
             MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
             (MethodInfo *)0x0);
  pAVar1 = (Action *)
           mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pAVar1 == (Action *)0x0) {
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
  }
  else {
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1,TypeInfo__System__Action);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar2;
    pAVar2 = (Action *)0x0;
    if (pAVar1->klass == TypeInfo__System__Action) {
      pAVar2 = pAVar1;
    }
    if (pAVar2 == (Action *)0x0) {
      FUN_?(pAVar1);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                    &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pAVar9 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
  pDVar10 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
  FUN_?(pDVar10,this);
  pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar9,pDVar10,(MethodInfo *)0x0);
  pAVar11 = TypeInfo__System__Action<int>;
  if (pDVar10 == (Delegate *)0x0) {
    TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
         (Action_1_Int32_ *)0x0;
  }
  else {
    pAVar9 = (Action_1_Int32_ *)FUN_?(pDVar10,TypeInfo__System__Action<int>);
    if (pAVar9 == (Action_1_Int32_ *)0x0) {
      FUN_?(pDVar10,pAVar11);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar9;
    pAVar11 = TypeInfo__System__Action<int>;
    lVar5 = FUN_?(pDVar10,TypeInfo__System__Action<int>);
    if (lVar5 == 0) {
      FUN_?(pDVar10,pAVar11);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  pAVar9 = TypeInfo__GamePointGainEffectManager->static_fields->
           OnTierProgressBarGamePointGainEffectShown;
  pDVar10 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
  FUN_?(pDVar10,this);
  pDVar10 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar9,pDVar10,(MethodInfo *)0x0);
  pAVar11 = TypeInfo__System__Action<int>;
  if (pDVar10 == (Delegate *)0x0) {
    TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
         (Action_1_Int32_ *)0x0;
  }
  else {
    pAVar9 = (Action_1_Int32_ *)FUN_?(pDVar10,TypeInfo__System__Action<int>);
    if (pAVar9 == (Action_1_Int32_ *)0x0) {
      FUN_?(pDVar10,pAVar11);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown =
         pAVar9;
    pAVar11 = TypeInfo__System__Action<int>;
    lVar5 = FUN_?(pDVar10,TypeInfo__System__Action<int>);
    if (lVar5 == 0) {
      FUN_?(pDVar10,pAVar11);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)
                    &TypeInfo__GamePointGainEffectManager->static_fields->
                     OnTierProgressBarGamePointGainEffectShown >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  return;
}


/* Void OnGamePointReached(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnGamePointReached
               (GameTierProgressBarGainEffectController *this,int32_t id,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  index = 0;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    lVar2 = 0x20;
    do {
      if ((pLVar1->fields)._size <= (int)index) {
        return;
      }
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (pLVar1->fields)._items;
      if (pGVar4 == (GamePointGainEffect__Array *)0x0) break;
      if ((uint)pGVar4->max_length <= index) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      lVar5 = *(longlong *)((longlong)pGVar4->vector + lVar2 + -0x20);
      if (lVar5 == 0) break;
      if (*(int *)(lVar5 + 0x50) == id) {
        this_00 = (Component *)FUN_?((this->fields).gamePointGainEffectCurrentlyUsed);
        if ((this_00 == (Component *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0)) break;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        pLVar1 = (this->fields).gamePointGainEffectPool;
        if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
        FUN_?(pLVar1,this_00);
        pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
        if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                  );
        pGVar6 = (this->fields).tierProgressBar;
        if (pGVar6 == (GameTierProgressBar *)0x0) break;
        cVar7 = FUN_?((pGVar6->fields).previousProgressValue);
        pLVar8 = (this->fields).targetDataList;
        iVar9 = (byte)(cVar7 + 1) - 1;
        if (pLVar8 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) break;
        if (iVar9 < 0) {
          iVar10 = 0;
        }
        else {
          iVar10 = (pLVar8->fields)._size + -1;
          if (iVar9 <= iVar10) {
            iVar10 = iVar9;
          }
        }
        lVar5 = FUN_?(pLVar8,iVar10);
        fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (lVar5 == 0) break;
        *(float *)(lVar5 + 0x18) = fVar11;
      }
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      index = index + 1;
      lVar2 = lVar2 + 8;
    } while (pLVar1 != (List_1_GamePointGainEffect_ *)0x0);
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnHaveShownGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnHaveShownGainEffect
               (GameTierProgressBarGainEffectController *this,int32_t gamePointAmountShown,
               MethodInfo *method)

{
  (this->fields).currentGamePoints = gamePointAmountShown;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  (this->fields).gamePointsToInstantiate = 0;
  if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  index = (pLVar1->fields)._size - 1;
  if (-1 < (int)index) {
    lVar3 = (longlong)(int)index * 8 + 0x20;
    do {
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar4 = (pLVar1->fields)._items;
      if (pGVar4 == (GamePointGainEffect__Array *)0x0) goto code_?;
      if ((uint)pGVar4->max_length <= index) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = *(Object **)((longlong)pGVar4->vector + lVar3 + -0x20);
      if (obj == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar5 = obj[1].klass;
      if (pOVar5 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      gcHandlePtr = (void *)(*pcRam_?)(pOVar5);
      obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (gcHandlePtr,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
      if (obj_00 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar5 = obj_00[1].klass;
      if (pOVar5 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pOVar5,0);
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_;
      pLVar1 = (this->fields).gamePointGainEffectPool;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      piVar8 = &(pLVar1->fields)._version;
      *piVar8 = *piVar8 + 1;
      pGVar4 = (pLVar1->fields)._items;
      if (pGVar4 == (GamePointGainEffect__Array *)0x0) goto code_?;
      uVar9 = (pLVar1->fields)._size;
      if (uVar9 < (uint)pGVar4->max_length) {
        (pLVar1->fields)._size = uVar9 + 1;
        FUN_?(pGVar4,(longlong)(int)uVar9,obj);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,obj,pMVar7->klass->rgctx_data[0xe].method);
      }
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_)
      ;
      lVar3 = lVar3 + -8;
      index = index - 1;
    } while (-1 < (int)index);
  }
  return;
}


/* Void OnHaveShownTierProgressBarGainEffect(Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnHaveShownTierProgressBarGainEffect
               (GameTierProgressBarGainEffectController *this,int32_t gamePointAmountShown,
               MethodInfo *method)

{
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar2 = (obj->fields)._.m_CachedPtr;
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
  cVar4 = (*pcRam_?)(pvVar2);
  if (cVar4 == '\0') {
    (this->fields).currentGamePoints = gamePointAmountShown;
    GameTierProgressBarGainEffectController_StopAllGainEffects(this,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_OnPlayerPlanetDataUpdated
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = TypeInfo__GamePassesManager->static_fields;
  if (((pGVar1->_GamePassesActive_k__BackingField != 0) &&
      (pGVar1->playerTierStateCalculator != (PlayerTierStateCalculator *)0x0)) &&
     ((pGVar1->playerTierStateCalculator->fields).gamePassRewardsActivated != 0)) {
    lVar2 = FUN_?();
    if (lVar2 == 0) {
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar4 = *(int *)(lVar2 + 0x18);
    if ((this->fields).currentGamePoints < iVar4) {
      iVar5 = ((this->fields).gamePointsToInstantiate - (this->fields).currentGamePoints) + iVar4;
      (this->fields).gamePointsToInstantiate = iVar5;
      if (10 < iVar5) {
        (this->fields).gamePointsToInstantiate = 10;
      }
      pcVar3 = pcRam_?;
      (this->fields).currentGamePoints = iVar4;
      pcVar6 = pcRam_?;
      if ((pcVar3 == (code *)0x0) &&
         (pcVar3 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar3, pcVar3 == (code *)0x0
         )) {
        uVar7 = func_?(&UNK_?);
        FUN_?(uVar7,0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pcRam_? = pcVar6;
      fVar8 = (float)(*pcVar3)();
      pfVar9 = &(this->fields).createGamePointTime;
      if (fVar8 < *pfVar9 || fVar8 == *pfVar9) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pLVar10 = (this->fields).gamePointGainEffectPool;
      if (pLVar10 != (List_1_GamePointGainEffect_ *)0x0) {
        if ((pLVar10->fields)._size == 0) {
          GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
        }
        pLVar10 = (this->fields).gamePointGainEffectPool;
        if (pLVar10 != (List_1_GamePointGainEffect_ *)0x0) {
          iVar4 = (pLVar10->fields)._size;
          if ((uint)(pLVar10->fields)._size <= iVar4 - 1U) {
            mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                      ((MethodInfo *)0x0);
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pGVar11 = (pLVar10->fields)._items;
          if (pGVar11 != (GamePointGainEffect__Array *)0x0) {
            if ((uint)pGVar11->max_length <= iVar4 - 1U) {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pLVar10 = (this->fields).gamePointGainEffectPool;
            this_00 = pGVar11->vector[(longlong)iVar4 + -1];
            if ((pLVar10 != (List_1_GamePointGainEffect_ *)0x0) &&
               (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__RemoveAt
                          ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                           (pLVar10->fields)._size + -1,
                           MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                          ), this_00 != (GamePointGainEffect *)0x0)) {
              obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this_00,(MethodInfo *)0x0);
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
              if (obj != (Transform *)0x0) {
                uStack_13._0_4_ = (pVVar12->zeroVector).x;
                uStack_13._4_4_ = (pVVar12->zeroVector).y;
                fStack_14 = (pVVar12->zeroVector).z;
                if (cRam_? == '\0') {
                  FUN_?(&
                                void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pvVar15 = (obj->fields)._._.m_CachedPtr;
                if (pvVar15 == (void *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                  ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar7 = func_?(&UNK_?);
                  FUN_?(uVar7,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                (*pcRam_?)(pvVar15,&uStack_13);
                if (cRam_? == '\0') {
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                               );
                  LOCK();
                  UNLOCK();
                  FUN_?(&
                                MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                               );
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pGVar16 = (this->fields).tierProgressBar;
                if (pGVar16 != (GameTierProgressBar *)0x0) {
                  cVar17 = FUN_?((pGVar16->fields).previousProgressValue);
                  pLVar18 = (this->fields).targetDataList;
                  uVar19 = (byte)(cVar17 + 1) - 1;
                  if (pLVar18 !=
                      (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
                    if ((int)uVar19 < 0) {
                      uVar20 = 0;
                    }
                    else {
                      uVar20 = (pLVar18->fields)._size - 1;
                      if ((int)uVar19 <= (int)uVar20) {
                        uVar20 = uVar19;
                      }
                    }
                    if ((uint)(pLVar18->fields)._size <= uVar20) {
                      mscorlib.dll::System::ThrowHelper::
                      ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                    pGVar21 = (pLVar18->fields)._items;
                    if (pGVar21 !=
                        (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0) {
                      if ((uint)pGVar21->max_length <= uVar20) {
                        FUN_?();
                        pcVar3 = (code *)swi(3);
                        (*pcVar3)();
                        return;
                      }
                      if (pGVar21->vector[(int)uVar20] !=
                          (GameTierProgressBarGainEffectController_TierTargetData *)0x0) {
                        GamePointGainEffect::GamePointGainEffect_StartEffect
                                  (this_00,(pGVar21->vector[(int)uVar20]->fields).
                                           gamePointEffectTargetTransform,
                                   (this->fields).offsetDirectionXMin,
                                   (this->fields).offsetDirectionXMax,
                                   (this->fields).offsetDirectionYMin,
                                   (this->fields).offsetDirectionYMax,(MethodInfo *)0x0);
                        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                        if (this_01 != (GameObject *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                    (this_01,1,(MethodInfo *)0x0);
                          pLVar10 = (this->fields).gamePointGainEffectCurrentlyUsed;
                          if (pLVar10 != (List_1_GamePointGainEffect_ *)0x0) {
                            FUN_?(pLVar10,this_00);
                            pcVar3 = pcRam_?;
                            piVar22 = &(this->fields).gamePointsToInstantiate;
                            *piVar22 = *piVar22 + -1;
                            pcVar6 = pcRam_?;
                            if ((pcVar3 == (code *)0x0) &&
                               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar3,
                               pcVar3 == (code *)0x0)) {
                              uVar7 = func_?(&UNK_?);
                              FUN_?(uVar7,0);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            pcRam_? = pcVar6;
                            fVar8 = (float)(*pcVar3)();
                            pcVar3 = pcRam_?;
                            if ((pcRam_? == (code *)0x0) &&
                               (pcVar3 = (code *)FUN_?(&UNK_?),
                               pcVar3 == (code *)0x0)) {
                              uVar7 = func_?(&UNK_?);
                              FUN_?(uVar7,0);
                              pcVar3 = (code *)swi(3);
                              (*pcVar3)();
                              return;
                            }
                            pcRam_? = pcVar3;
                            fVar23 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
                            (this->fields).createGamePointTime = fVar23 + fVar8;
                            return;
                          }
                        }
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
          }
        }
      }
      FUN_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void ReplayGainEffect(Int32, Int32) */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_ReplayGainEffect
               (GameTierProgressBarGainEffectController *this,int32_t previousGamePointAmount,
               int32_t newGamePointAmount,MethodInfo *method)

{
  (this->fields).currentGamePoints = previousGamePointAmount;
  iVar1 = ((this->fields).gamePointsToInstantiate - (this->fields).currentGamePoints) +
           newGamePointAmount;
  (this->fields).gamePointsToInstantiate = iVar1;
  if (10 < iVar1) {
    (this->fields).gamePointsToInstantiate = 10;
  }
  pcVar2 = pcRam_?;
  (this->fields).currentGamePoints = newGamePointAmount;
  pcVar3 = pcRam_?;
  if ((pcVar2 == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2, pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar3;
  fVar5 = (float)(*pcVar2)();
  pfVar6 = &(this->fields).createGamePointTime;
  if (fVar5 < *pfVar6 || fVar5 == *pfVar6) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar7 = (this->fields).gamePointGainEffectPool;
  if (pLVar7 != (List_1_GamePointGainEffect_ *)0x0) {
    if ((pLVar7->fields)._size == 0) {
      GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar7 = (this->fields).gamePointGainEffectPool;
    if (pLVar7 != (List_1_GamePointGainEffect_ *)0x0) {
      iVar1 = (pLVar7->fields)._size;
      if ((uint)(pLVar7->fields)._size <= iVar1 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar8 = (pLVar7->fields)._items;
      if (pGVar8 != (GamePointGainEffect__Array *)0x0) {
        if ((uint)pGVar8->max_length <= iVar1 - 1U) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pLVar7 = (this->fields).gamePointGainEffectPool;
        this_00 = pGVar8->vector[(longlong)iVar1 + -1];
        if ((pLVar7 != (List_1_GamePointGainEffect_ *)0x0) &&
           (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                       (pLVar7->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                      ), this_00 != (GamePointGainEffect *)0x0)) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (obj != (Transform *)0x0) {
            uStack_10._0_4_ = (pVVar9->zeroVector).x;
            uStack_10._4_4_ = (pVVar9->zeroVector).y;
            fStack_11 = (pVVar9->zeroVector).z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar12 = (obj->fields)._._.m_CachedPtr;
            if (pvVar12 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcVar2 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
              uVar4 = func_?(&UNK_?);
              FUN_?(uVar4,0);
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            pcRam_? = pcVar2;
            (*pcRam_?)(pvVar12,&uStack_10);
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar13 = (this->fields).tierProgressBar;
            if (pGVar13 != (GameTierProgressBar *)0x0) {
              cVar14 = FUN_?((pGVar13->fields).previousProgressValue);
              pLVar15 = (this->fields).targetDataList;
              uVar16 = (byte)(cVar14 + 1) - 1;
              if (pLVar15 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
                if ((int)uVar16 < 0) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = (pLVar15->fields)._size - 1;
                  if ((int)uVar16 <= (int)uVar17) {
                    uVar17 = uVar16;
                  }
                }
                if ((uint)(pLVar15->fields)._size <= uVar17) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                pGVar18 = (pLVar15->fields)._items;
                if (pGVar18 != (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0)
                {
                  if ((uint)pGVar18->max_length <= uVar17) {
                    FUN_?();
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  if (pGVar18->vector[(int)uVar17] !=
                      (GameTierProgressBarGainEffectController_TierTargetData *)0x0) {
                    GamePointGainEffect::GamePointGainEffect_StartEffect
                              (this_00,(pGVar18->vector[(int)uVar17]->fields).
                                       gamePointEffectTargetTransform,
                               (this->fields).offsetDirectionXMin,(this->fields).offsetDirectionXMax
                               ,(this->fields).offsetDirectionYMin,
                               (this->fields).offsetDirectionYMax,(MethodInfo *)0x0);
                    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                    if (this_01 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_01,1,(MethodInfo *)0x0);
                      pLVar7 = (this->fields).gamePointGainEffectCurrentlyUsed;
                      if (pLVar7 != (List_1_GamePointGainEffect_ *)0x0) {
                        FUN_?(pLVar7,this_00);
                        pcVar2 = pcRam_?;
                        piVar19 = &(this->fields).gamePointsToInstantiate;
                        *piVar19 = *piVar19 + -1;
                        pcVar3 = pcRam_?;
                        if ((pcVar2 == (code *)0x0) &&
                           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar3 = pcVar2,
                           pcVar2 == (code *)0x0)) {
                          uVar4 = func_?(&UNK_?);
                          FUN_?(uVar4,0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcRam_? = pcVar3;
                        fVar5 = (float)(*pcVar2)();
                        pcVar2 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)
                           ) {
                          uVar4 = func_?(&UNK_?);
                          FUN_?(uVar4,0);
                          pcVar2 = (code *)swi(3);
                          (*pcVar2)();
                          return;
                        }
                        pcRam_? = pcVar2;
                        fVar20 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
                        (this->fields).createGamePointTime = fVar20 + fVar5;
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_Start
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointGainEffectManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__GameTierProgressBarGainEffectController__OnHaveShownTierProgressBarGainEffect_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields).isInitialized == 0) {
    bVar1 = cRam_? == '\0';
    (this->fields).isInitialized = 1;
    if (bVar1) {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar2 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar2 == (PlayerPlanetData *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      (this->fields).currentGamePoints = (pPVar2->fields).progressionGamePoints;
    }
    pAVar4 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,
               MethodInfo__GameTierProgressBarGainEffectController__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar4 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar4 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?(pAVar4,TypeInfo__System__Action);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar5;
      pAVar5 = (Action *)0x0;
      if (pAVar4->klass == TypeInfo__System__Action) {
        pAVar5 = pAVar4;
      }
      if (pAVar5 == (Action *)0x0) {
        FUN_?(pAVar4);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar1 = uVar8 == *puVar9;
        if (bVar1) {
          *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown;
    pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar11,this);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
    pAVar12 = TypeInfo__System__Action<int>;
    if (pDVar11 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (pAVar10 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar10;
      pAVar12 = TypeInfo__System__Action<int>;
      lVar7 = FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (lVar7 == 0) {
        FUN_?(pDVar11,pAVar12);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar1 = uVar8 == *puVar9;
        if (bVar1) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->
             OnTierProgressBarGamePointGainEffectShown;
    pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar11,this);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
    pAVar12 = TypeInfo__System__Action<int>;
    if (pDVar11 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (pAVar10 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      TypeInfo__GamePointGainEffectManager->static_fields->OnTierProgressBarGamePointGainEffectShown
           = pAVar10;
      pAVar12 = TypeInfo__System__Action<int>;
      lVar7 = FUN_?(pDVar11);
      if (lVar7 == 0) {
        FUN_?(pDVar11,pAVar12);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)
                      &TypeInfo__GamePointGainEffectManager->static_fields->
                       OnTierProgressBarGamePointGainEffectShown >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar1 = uVar8 == *puVar9;
        if (bVar1) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar1);
    }
    lVar7 = 5;
    do {
      GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return;
}


/* Void StartGamePointGainEffect() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_StartGamePointGainEffect
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectPool;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    if ((pLVar1->fields)._size == 0) {
      GameTierProgressBarGainEffectController_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).gamePointGainEffectPool;
    if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
      iVar2 = (pLVar1->fields)._size;
      if ((uint)(pLVar1->fields)._size <= iVar2 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar4 = (pLVar1->fields)._items;
      if (pGVar4 != (GamePointGainEffect__Array *)0x0) {
        if ((uint)pGVar4->max_length <= iVar2 - 1U) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pLVar1 = (this->fields).gamePointGainEffectPool;
        this_00 = pGVar4->vector[(longlong)iVar2 + -1];
        if ((pLVar1 != (List_1_GamePointGainEffect_ *)0x0) &&
           (mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__RemoveAt
                      ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                       (pLVar1->fields)._size + -1,
                       MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                      ), this_00 != (GamePointGainEffect *)0x0)) {
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
          if (obj != (Transform *)0x0) {
            uStack_6._0_4_ = (pVVar5->zeroVector).x;
            uStack_6._4_4_ = (pVVar5->zeroVector).y;
            fStack_7 = (pVVar5->zeroVector).z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar8 = (obj->fields)._._.m_CachedPtr;
            if (pvVar8 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar9 = func_?(&UNK_?);
              FUN_?(uVar9,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar8,&uStack_6);
            if (cRam_? == '\0') {
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar10 = (this->fields).tierProgressBar;
            if (pGVar10 != (GameTierProgressBar *)0x0) {
              cVar11 = FUN_?((pGVar10->fields).previousProgressValue);
              pLVar12 = (this->fields).targetDataList;
              uVar13 = (byte)(cVar11 + 1) - 1;
              if (pLVar12 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
                if ((int)uVar13 < 0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = (pLVar12->fields)._size - 1;
                  if ((int)uVar13 <= (int)uVar14) {
                    uVar14 = uVar13;
                  }
                }
                if ((uint)(pLVar12->fields)._size <= uVar14) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pGVar15 = (pLVar12->fields)._items;
                if (pGVar15 != (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0)
                {
                  if ((uint)pGVar15->max_length <= uVar14) {
                    FUN_?();
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  if (pGVar15->vector[(int)uVar14] !=
                      (GameTierProgressBarGainEffectController_TierTargetData *)0x0) {
                    GamePointGainEffect::GamePointGainEffect_StartEffect
                              (this_00,(pGVar15->vector[(int)uVar14]->fields).
                                       gamePointEffectTargetTransform,
                               (this->fields).offsetDirectionXMin,(this->fields).offsetDirectionXMax
                               ,(this->fields).offsetDirectionYMin,
                               (this->fields).offsetDirectionYMax,(MethodInfo *)0x0);
                    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_get_gameObject((Component *)this_00,(MethodInfo *)0x0);
                    if (this_01 != (GameObject *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                                (this_01,1,(MethodInfo *)0x0);
                      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
                      if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
                        FUN_?(pLVar1,this_00);
                        pcVar3 = pcRam_?;
                        piVar16 = &(this->fields).gamePointsToInstantiate;
                        *piVar16 = *piVar16 + -1;
                        pcVar17 = pcRam_?;
                        if ((pcVar3 == (code *)0x0) &&
                           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar17 = pcVar3,
                           pcVar3 == (code *)0x0)) {
                          uVar9 = func_?(&UNK_?);
                          FUN_?(uVar9,0);
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        pcRam_? = pcVar17;
                        fVar18 = (float)(*pcVar3)();
                        pcVar3 = pcRam_?;
                        if ((pcRam_? == (code *)0x0) &&
                           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)
                           ) {
                          uVar9 = func_?(&UNK_?);
                          FUN_?(uVar9,0);
                          pcVar3 = (code *)swi(3);
                          (*pcVar3)();
                          return;
                        }
                        pcRam_? = pcVar3;
                        fVar19 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
                        (this->fields).createGamePointTime = fVar19 + fVar18;
                        return;
                      }
                    }
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
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StopAllGainEffects() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_StopAllGainEffects
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  (this->fields).gamePointsToInstantiate = 0;
  if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  index = (pLVar1->fields)._size - 1;
  if (-1 < (int)index) {
    lVar3 = (longlong)(int)index * 8 + 0x20;
    do {
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      if ((uint)(pLVar1->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar4 = (pLVar1->fields)._items;
      if (pGVar4 == (GamePointGainEffect__Array *)0x0) goto code_?;
      if ((uint)pGVar4->max_length <= index) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      obj = *(Object **)((longlong)pGVar4->vector + lVar3 + -0x20);
      if (obj == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Component>_UnityEngine__Component_
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar5 = obj[1].klass;
      if (pOVar5 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      gcHandlePtr = (void *)(*pcRam_?)(pOVar5);
      obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
               Unmarshal_UnmarshalUnityObject
                         (gcHandlePtr,
                          UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                         );
      if (obj_00 == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar5 = obj_00[1].klass;
      if (pOVar5 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pOVar5,0);
      pMVar7 = 
      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_;
      pLVar1 = (this->fields).gamePointGainEffectPool;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      piVar8 = &(pLVar1->fields)._version;
      *piVar8 = *piVar8 + 1;
      pGVar4 = (pLVar1->fields)._items;
      if (pGVar4 == (GamePointGainEffect__Array *)0x0) goto code_?;
      uVar9 = (pLVar1->fields)._size;
      if (uVar9 < (uint)pGVar4->max_length) {
        (pLVar1->fields)._size = uVar9 + 1;
        FUN_?(pGVar4,(longlong)(int)uVar9,obj);
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__AddWithResize
                  ((List_1_System_Object_ *)pLVar1,obj,pMVar7->klass->rgctx_data[0xe].method);
      }
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
      List_1_System_Object__RemoveAt
                ((List_1_System_Object_ *)pLVar1,index,
                 MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_)
      ;
      lVar3 = lVar3 + -8;
      index = index - 1;
    } while (-1 < (int)index);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController_Update
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (0 < (this->fields).gamePointsToInstantiate) {
    fVar1 = (this->fields).createGamePointTime;
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
    fVar4 = (float)(*pcRam_?)();
    if (fVar1 < fVar4) {
      GameTierProgressBarGainEffectController_StartGamePointGainEffect(this,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Count__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar5 = (this->fields).targetDataList;
  uVar6 = 0;
  if (pLVar5 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0) {
    lVar7 = 0x20;
    do {
      if ((pLVar5->fields)._size <= (int)uVar6) {
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(), pcVar2 == (code *)0x0)) {
        uVar3 = func_?(&UNK_?);
        FUN_?(uVar3,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      fVar1 = (float)(*pcRam_?)();
      pLVar5 = (this->fields).targetDataList;
      if (pLVar5 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0)
      goto code_?;
      if ((uint)(pLVar5->fields)._size <= uVar6) {
code_?:
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pGVar8 = (pLVar5->fields)._items;
      if (pGVar8 == (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0)
      goto code_?;
      if ((uint)pGVar8->max_length <= uVar6) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      lVar9 = *(longlong *)((longlong)pGVar8->vector + lVar7 + -0x20);
      if ((lVar9 == 0) || (obj = (this->fields).onHitScaleEffect, obj == (AnimationCurve *)0x0)) {
code_?:
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar10 = (obj->fields).m_Ptr;
      if (pvVar10 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      fVar4 = *(float *)(lVar9 + 0x18);
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
      (*pcRam_?)(pvVar10,fVar1 - fVar4);
      pLVar5 = (this->fields).targetDataList;
      if (pLVar5 == (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0)
      goto code_?;
      if ((uint)(pLVar5->fields)._size <= uVar6) goto code_?;
      pGVar8 = (pLVar5->fields)._items;
      if (pGVar8 == (GameTierProgressBarGainEffectController_TierTargetData__Array *)0x0)
      goto code_?;
      if ((uint)pGVar8->max_length <= uVar6) goto code_?;
      lVar9 = *(longlong *)((longlong)pGVar8->vector + lVar7 + -0x20);
      if ((lVar9 == 0) || (obj_00 = *(Object **)(lVar9 + 0x10), obj_00 == (Object *)0x0))
      goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pOVar11 = obj_00[1].klass;
      if (pOVar11 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
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
      (*pcRam_?)(pOVar11);
      pLVar5 = (this->fields).targetDataList;
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 8;
    } while (pLVar5 != (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)0x0);
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* GameTierProgressBarGainEffectController() */

void Assembly-CSharp.dll::GameTierProgressBarGainEffectController::
     GameTierProgressBarGainEffectController__ctor
               (GameTierProgressBarGainEffectController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameTierProgressBarGainEffectController_TierTargetData_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameTierProgressBarGainEffectController::TierTargetData>__List__
            );
  bVar1 = iRam_? != 0;
  (this->fields).targetDataList = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).targetDataList >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_GamePointGainEffect_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).gamePointGainEffectPool = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gamePointGainEffectPool >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pLVar6 = (List_1_GamePointGainEffect_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar6,
             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).gamePointGainEffectCurrentlyUsed = pLVar6;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).gamePointGainEffectCurrentlyUsed >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar1 = uVar4 == *puVar5;
      if (bVar1) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  return;
}

