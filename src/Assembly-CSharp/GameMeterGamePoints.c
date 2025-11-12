
/* Void AddGamePoints(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_AddGamePoints
               (GameMeterGamePoints *this,int32_t addedGamePoints,MethodInfo *method)

{
  piVar1 = &(this->fields).gamePointsToInstantiate;
  *piVar1 = *piVar1 + addedGamePoints;
  piVar1 = &(this->fields).currentGamePoints;
  *piVar1 = *piVar1 + addedGamePoints;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__,
                  0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (10 < (this->fields).gamePointsToInstantiate) {
    (this->fields).gamePointsToInstantiate = 10;
  }
  pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
  if ((pLVar2 == (List_1_GamePointGainEffect_ *)0x0) ||
     (pGVar3 = (this->fields).countController, pGVar3 == (GamePointGainEffectCountController *)0x0))
  {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (this->fields).gamePointsToInstantiate;
  iVar6 = (pLVar2->fields)._size;
  (pGVar3->fields).endValue = (this->fields).currentGamePoints;
  (pGVar3->fields).startValue = (pGVar3->fields).currentGamePointAmountDisplayed;
  pcVar4 = pcRam_?;
  (pGVar3->fields).gainEffectTotalAmount = iVar5 + iVar6;
  (pGVar3->fields).gainEffectAmountReached = 0;
  pcVar7 = pcRam_?;
  if ((pcVar4 == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar4, pcVar4 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar7;
  fVar9 = (float)(*pcVar4)();
  pfVar10 = &(this->fields).createGamePointTime;
  if (fVar9 < *pfVar10 || fVar9 == *pfVar10) {
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
  pLVar2 = (this->fields).gamePointGainEffectPool;
  if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      GameMeterGamePoints_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar2 = (this->fields).gamePointGainEffectPool;
    if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
      iVar5 = (pLVar2->fields)._size;
      if ((uint)(pLVar2->fields)._size <= iVar5 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar11 = (pLVar2->fields)._items;
      if (pGVar11 != (GamePointGainEffect__Array *)0x0) {
        if ((uint)pGVar11->max_length <= iVar5 - 1U) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pLVar2 = (this->fields).gamePointGainEffectPool;
        this_00 = pGVar11->vector[(longlong)iVar5 + -1];
        if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                     (pLVar2->fields)._size + -1,
                     MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                    );
          if ((this->fields).disableSpawnOffset == 0) {
            if ((this_00 == (GamePointGainEffect *)0x0) ||
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0))
            {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uStack_12._0_4_ = (this->fields).gainEffectSpawnOffset.x;
            uStack_12._4_4_ = (this->fields).gainEffectSpawnOffset.y;
            fStack_13 = (this->fields).gainEffectSpawnOffset.z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar14 = (obj->fields)._._.m_CachedPtr;
            if (pvVar14 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar14,&uStack_12);
          }
          else if (this_00 == (GamePointGainEffect *)0x0) goto code_?;
          GamePointGainEffect::GamePointGainEffect_StartEffect
                    (this_00,(this->fields).gamePointEffectTarget,_UNK_?,_UNK_?,
                     _UNK_?,_UNK_?,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
            pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
            if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
              FUN_?(pLVar2,this_00);
              pcVar4 = pcRam_?;
              piVar1 = &(this->fields).gamePointsToInstantiate;
              *piVar1 = *piVar1 + -1;
              pcVar7 = pcRam_?;
              if ((pcVar4 == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar4,
                 pcVar4 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar7;
              fVar9 = (float)(*pcVar4)();
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              fVar15 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
              (this->fields).createGamePointTime = fVar15 + fVar9;
              if ((this->fields).disableSpawnOffset == 0) {
                pGVar3 = (this->fields).countController;
                if (pGVar3 == (GamePointGainEffectCountController *)0x0) goto code_?;
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                fVar9 = (float)(*pcRam_?)();
                (pGVar3->fields).startSlideOutTime = fVar9 + (pGVar3->fields).slideOutDelay;
                pcVar4 = pcRam_?;
                if (((pGVar3->fields).currentSlideState == 1) ||
                   ((pGVar3->fields).currentSlideState == 3)) {
                  (pGVar3->fields).currentSlideState = 2;
                  pcVar7 = pcRam_?;
                  if ((pcVar4 == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar7 = pcVar4,
                     pcVar4 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcRam_? = pcVar7;
                  fVar9 = (float)(*pcVar4)();
                  (pGVar3->fields).slideStartTime = fVar9;
                }
              }
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


/* Void CreateGamePointGainEffect() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_CreateGamePointGainEffect
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__GameMeterGamePoints__OnGamePointReached_int_);
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
                  GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect__UnityEngine__Transform__bool_
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
  parent = (this->fields).gamePointEffectSpawnPoint;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar1 = (GamePointGainEffect *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_6
                      ((Object *)pGVar1,parent,0,
                       GamePointGainEffect_MethodInfo__UnityEngine__Object__Instantiate<GamePointGainEffect>_GamePointGainEffect__UnityEngine__Transform__bool_
                      );
  if ((pGVar1 != (GamePointGainEffect *)0x0) &&
     (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)pGVar1,(MethodInfo *)0x0), this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,0,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_1_System_Int32_ *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction<int>);
    FUN_?(pUVar2,this,MethodInfo__GameMeterGamePoints__OnGamePointReached_int_);
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
      MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__Add_GamePointGainEffect_;
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
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void GamePointsModified() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_GamePointsModified
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__)
    ;
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (10 < (this->fields).gamePointsToInstantiate) {
    (this->fields).gamePointsToInstantiate = 10;
  }
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  if ((pLVar1 == (List_1_GamePointGainEffect_ *)0x0) ||
     (pGVar2 = (this->fields).countController, pGVar2 == (GamePointGainEffectCountController *)0x0))
  {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar4 = (this->fields).gamePointsToInstantiate;
  iVar5 = (pLVar1->fields)._size;
  (pGVar2->fields).endValue = (this->fields).currentGamePoints;
  (pGVar2->fields).startValue = (pGVar2->fields).currentGamePointAmountDisplayed;
  pcVar3 = pcRam_?;
  (pGVar2->fields).gainEffectTotalAmount = iVar4 + iVar5;
  (pGVar2->fields).gainEffectAmountReached = 0;
  pcVar6 = pcRam_?;
  if ((pcVar3 == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar3, pcVar3 == (code *)0x0)) {
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
      GameMeterGamePoints_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar1 = (this->fields).gamePointGainEffectPool;
    if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
      iVar4 = (pLVar1->fields)._size;
      if ((uint)(pLVar1->fields)._size <= iVar4 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pGVar10 = (pLVar1->fields)._items;
      if (pGVar10 != (GamePointGainEffect__Array *)0x0) {
        if ((uint)pGVar10->max_length <= iVar4 - 1U) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pLVar1 = (this->fields).gamePointGainEffectPool;
        this_00 = pGVar10->vector[(longlong)iVar4 + -1];
        if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                     (pLVar1->fields)._size + -1,
                     MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                    );
          if ((this->fields).disableSpawnOffset == 0) {
            if ((this_00 == (GamePointGainEffect *)0x0) ||
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0))
            {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStack_11._0_4_ = (this->fields).gainEffectSpawnOffset.x;
            uStack_11._4_4_ = (this->fields).gainEffectSpawnOffset.y;
            fStack_12 = (this->fields).gainEffectSpawnOffset.z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar13 = (obj->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
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
            (*pcRam_?)(pvVar13,&uStack_11);
          }
          else if (this_00 == (GamePointGainEffect *)0x0) goto code_?;
          GamePointGainEffect::GamePointGainEffect_StartEffect
                    (this_00,(this->fields).gamePointEffectTarget,_UNK_?,_UNK_?,
                     _UNK_?,_UNK_?,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
            pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
            if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
              FUN_?(pLVar1,this_00);
              pcVar3 = pcRam_?;
              piVar14 = &(this->fields).gamePointsToInstantiate;
              *piVar14 = *piVar14 + -1;
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
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              fVar15 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
              (this->fields).createGamePointTime = fVar15 + fVar8;
              if ((this->fields).disableSpawnOffset == 0) {
                pGVar2 = (this->fields).countController;
                if (pGVar2 == (GamePointGainEffectCountController *)0x0) goto code_?;
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
                fVar8 = (float)(*pcRam_?)();
                (pGVar2->fields).startSlideOutTime = fVar8 + (pGVar2->fields).slideOutDelay;
                pcVar3 = pcRam_?;
                if (((pGVar2->fields).currentSlideState == 1) ||
                   ((pGVar2->fields).currentSlideState == 3)) {
                  (pGVar2->fields).currentSlideState = 2;
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
                  (pGVar2->fields).slideStartTime = fVar8;
                }
              }
              return;
            }
          }
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


/* Void Initialize() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_Initialize
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FakeGamePointGainEffectManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterGamePoints__OnFakeGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterGamePoints__OnHaveShownGainEffect_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterGamePoints__OnInGameGainEffectShown_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterGamePoints__OnPlayerPlanetDataUpdated__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GamePointGainEffectManager);
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__GamePassesManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
    if (pPVar1 == (PlayerPlanetData *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    (this->fields).currentGamePoints = (pPVar1->fields).highScoreGamePoints;
    pAVar3 = TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__GameMeterGamePoints__OnPlayerPlanetDataUpdated__,
               (MethodInfo *)0x0);
    pAVar3 = (Action *)
             mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pAVar3 == (Action *)0x0) {
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = (Action *)0x0;
    }
    else {
      pAVar4 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?(pAVar3,TypeInfo__System__Action);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated = pAVar4;
      pAVar4 = (Action *)0x0;
      if (pAVar3->klass == TypeInfo__System__Action) {
        pAVar4 = pAVar3;
      }
      if (pAVar4 == (Action *)0x0) {
        FUN_?(pAVar3);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__GamePassesManager->static_fields->OnPlayerPlanetDataUpdated >> 0xc)
      ;
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pAVar10 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
    pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar11,this);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
    pAVar12 = TypeInfo__System__Action<int>;
    if (pDVar11 == (Delegate *)0x0) {
      TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect =
           (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (pAVar10 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect = pAVar10;
      pAVar12 = TypeInfo__System__Action<int>;
      lVar6 = FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (lVar6 == 0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)TypeInfo__FakeGamePointGainEffectManager->static_fields >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
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
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePointGainEffectManager->static_fields->OnGamePointGainEffectShown = pAVar10;
      pAVar12 = TypeInfo__System__Action<int>;
      lVar6 = FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (lVar6 == 0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)TypeInfo__GamePointGainEffectManager->static_fields >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pAVar10 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
    pDVar11 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
    FUN_?(pDVar11,this);
    pDVar11 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)pAVar10,pDVar11,(MethodInfo *)0x0);
    pAVar12 = TypeInfo__System__Action<int>;
    if (pDVar11 == (Delegate *)0x0) {
      TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown =
           (Action_1_Int32_ *)0x0;
    }
    else {
      pAVar10 = (Action_1_Int32_ *)FUN_?(pDVar11,TypeInfo__System__Action<int>);
      if (pAVar10 == (Action_1_Int32_ *)0x0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown = pAVar10;
      pAVar12 = TypeInfo__System__Action<int>;
      lVar6 = FUN_?(pDVar11);
      if (lVar6 == 0) {
        FUN_?(pDVar11,pAVar12);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)
                      &TypeInfo__GamePointGainEffectManager->static_fields->
                       OnInGamePointGainEffectShown >> 0xc);
      lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
      do {
        uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
        puVar8 = (ulonglong *)(lVar6 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    lVar6 = 5;
    do {
      GameMeterGamePoints_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnDestroy
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FakeGamePointGainEffectManager);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__GameMeterGamePoints__OnFakeGainEffect_int_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pAVar1 = TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__System__Action<int>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                     ((Delegate *)pAVar1,pDVar2,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<int>;
  if (pDVar2 == (Delegate *)0x0) {
    TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect =
         (Action_1_Int32_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_Int32_ *)FUN_?(pDVar2,TypeInfo__System__Action<int>);
    if (pAVar1 == (Action_1_Int32_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    TypeInfo__FakeGamePointGainEffectManager->static_fields->OnFakeGamePointGainEffect = pAVar1;
    pAVar3 = TypeInfo__System__Action<int>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<int>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)TypeInfo__FakeGamePointGainEffectManager->static_fields >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar8 = *puVar7;
      LOCK();
      uVar9 = *puVar7;
      if (uVar8 == uVar9) {
        *puVar7 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (uVar8 != uVar9);
  }
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnDisable
               (GameMeterGamePoints *this,MethodInfo *method)

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


/* Void OnGainEffectsDone() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnGainEffectsDone
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 == (PlayerPlanetData *)0x0) goto code_?;
  iVar2 = (pPVar1->fields).highScoreGamePoints;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar3 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar3->fields).gameMode == 0) {
code_?:
    iVar2 = (this->fields).currentGamePoints;
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar3 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar3 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar3->fields).profileID < 1) goto code_?;
  }
  pGVar4 = (this->fields).countController;
  if (pGVar4 != (GamePointGainEffectCountController *)0x0) {
    pTVar5 = (pGVar4->fields).gamePointAmount;
    (pGVar4->fields).currentGamePointAmountDisplayed = iVar2;
    pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pGVar4->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0
                       );
    if (pTVar5 != (Text *)0x0) {
      UNRECOVERED_JUMPTABLE = (pTVar5->klass->vtable).set_text.methodPtr;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)
                (pTVar5,pSVar6,(pTVar5->klass->vtable).set_text.method,UNRECOVERED_JUMPTABLE);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnGamePointReached(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnGamePointReached
               (GameMeterGamePoints *this,int32_t id,MethodInfo *method)

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
  pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
  index = 0;
  if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
    lVar2 = 0x20;
    while (pLVar3 = (this->fields).gamePointGainEffectCurrentlyUsed,
          (int)index < (pLVar1->fields)._size) {
      if (pLVar3 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
      if ((uint)(pLVar3->fields)._size <= index) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar5 = (pLVar3->fields)._items;
      if (pGVar5 == (GamePointGainEffect__Array *)0x0) goto code_?;
      if ((uint)pGVar5->max_length <= index) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar6 = *(longlong *)((longlong)pGVar5->vector + lVar2 + -0x20);
      if (lVar6 == 0) goto code_?;
      if (*(int *)(lVar6 + 0x50) == id) {
        this_00 = (Component *)FUN_?((this->fields).gamePointGainEffectCurrentlyUsed);
        if ((this_00 == (Component *)0x0) ||
           (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                (this_00,(MethodInfo *)0x0), this_01 == (GameObject *)0x0))
        goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,0,(MethodInfo *)0x0);
        pLVar1 = (this->fields).gamePointGainEffectPool;
        if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
        FUN_?(pLVar1,this_00);
        pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
        if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
        List_1_System_Object__RemoveAt
                  ((List_1_System_Object_ *)pLVar1,index,
                   MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                  );
        pGVar7 = (this->fields).countController;
        if (pGVar7 == (GamePointGainEffectCountController *)0x0) goto code_?;
        GamePointGainEffectCountController::
        GamePointGainEffectCountController_OnGamePointGainEffectReached(pGVar7,(MethodInfo *)0x0);
      }
      pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
      index = index + 1;
      lVar2 = lVar2 + 8;
      if (pLVar1 == (List_1_GamePointGainEffect_ *)0x0) goto code_?;
    }
    if (pLVar3 != (List_1_GamePointGainEffect_ *)0x0) {
      if (0 < (pLVar3->fields)._size) {
        return;
      }
      if (0 < (this->fields).gamePointsToInstantiate) {
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__GamePassesManager);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar8 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
      if (pPVar8 != (PlayerPlanetData *)0x0) {
        iVar9 = (pPVar8->fields).highScoreGamePoints;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar10 != (GameSessionData *)0x0) {
          if ((pGVar10->fields).gameMode == 0) {
code_?:
            iVar9 = (this->fields).currentGamePoints;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar10 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField
            ;
            if (pGVar10 == (GameSessionData *)0x0) goto code_?;
            if ((pGVar10->fields).profileID < 1) goto code_?;
          }
          pGVar7 = (this->fields).countController;
          if (pGVar7 != (GamePointGainEffectCountController *)0x0) {
            (pGVar7->fields).currentGamePointAmountDisplayed = iVar9;
            pTVar11 = (pGVar7->fields).gamePointAmount;
            pSVar12 = mscorlib.dll::System::Int32::Int32_ToString
                               ((Int32 *)&(pGVar7->fields).currentGamePointAmountDisplayed,
                                (MethodInfo *)0x0);
            if (pTVar11 != (Text *)0x0) {
              (*(pTVar11->klass->vtable).set_text.methodPtr)
                        (pTVar11,pSVar12,(pTVar11->klass->vtable).set_text.method);
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


/* Void OnHaveShownGainEffect(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnHaveShownGainEffect
               (GameMeterGamePoints *this,int32_t gamePointAmountShown,MethodInfo *method)

{
  (this->fields).currentGamePoints = gamePointAmountShown;
  pGVar1 = (this->fields).countController;
  if (pGVar1 != (GamePointGainEffectCountController *)0x0) {
    pTVar2 = (pGVar1->fields).gamePointAmount;
    (pGVar1->fields).currentGamePointAmountDisplayed = gamePointAmountShown;
    pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                       ((Int32 *)&(pGVar1->fields).currentGamePointAmountDisplayed,(MethodInfo *)0x0
                       );
    if (pTVar2 != (Text *)0x0) {
      (*(pTVar2->klass->vtable).set_text.methodPtr)
                (pTVar2,pSVar3,(pTVar2->klass->vtable).set_text.method);
      GameMeterGamePoints_StopAllGainEffects(this,(MethodInfo *)0x0);
      pGVar1 = (this->fields).countController;
      if ((pGVar1 != (GamePointGainEffectCountController *)0x0) &&
         (pTVar4 = (pGVar1->fields).transformToSlide, pTVar4 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar5);
        pTVar4 = (pGVar1->fields).transformToSlide;
        uStack_8 = (ulonglong)
                    (uint)((pGVar1->fields).originalXPosition + (pGVar1->fields).slideMoveAmount);
        if (pTVar4 == (Transform *)0x0) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_9 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar4->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar4,(MethodInfo *)0x0);
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
        (*pcRam_?)(pvVar5,&uStack_8);
        (pGVar1->fields).slideStartTime = 0.0;
        (pGVar1->fields).startSlideOutTime = 0.0;
        (pGVar1->fields).currentSlideState = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnInGameGainEffectShown(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnInGameGainEffectShown
               (GameMeterGamePoints *this,int32_t gamePointAmountShown,MethodInfo *method)

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
    GameMeterGamePoints_OnHaveShownGainEffect(this,gamePointAmountShown,(MethodInfo *)0x0);
  }
  return;
}


/* Void OnPlayerPlanetDataUpdated() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_OnPlayerPlanetDataUpdated
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePointGainEffectManager);
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
  if (TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__GamePassesManager->static_fields->playerPlanetData;
  if (pPVar1 != (PlayerPlanetData *)0x0) {
    iVar2 = (pPVar1->fields).highScoreGamePoints;
    if ((this->fields).currentGamePoints < iVar2) {
      iVar3 = (this->fields).currentGamePoints;
      (this->fields).currentGamePoints = iVar2;
      (this->fields).gamePointsToInstantiate =
           ((this->fields).gamePointsToInstantiate - iVar3) + iVar2;
      GameMeterGamePoints_GamePointsModified(this,(MethodInfo *)0x0);
    }
    pAVar4 = TypeInfo__GamePointGainEffectManager->static_fields->OnInGamePointGainEffectShown;
    if (pAVar4 != (Action_1_Int32_ *)0x0) {
      (*(pAVar4->fields)._._.invoke_impl)
                ((pAVar4->fields)._._.method_code,iVar2,(pAVar4->fields)._._.method);
      return;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Boolean SetGameMeterVisibility() */

bool Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_SetGameMeterVisibility
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__GamePassesManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = TypeInfo__GamePassesManager->static_fields->_GamePassesActive_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVClientSettings);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).gamePointEffectSpawnPoint;
  bVar1 = ~(byte)((uint)TypeInfo__MVClientSettings->static_fields->flags >> 8) & bVar1 & 1;
  if (this_00 != (Transform *)0x0) {
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,bVar1,(MethodInfo *)0x0);
      pGVar2 = (this->fields).gamePointMeterMainObject;
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,bVar1,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void SetGamePoints(Int32) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_SetGamePoints
               (GameMeterGamePoints *this,int32_t newGamePoints,MethodInfo *method)

{
  iVar1 = (this->fields).currentGamePoints;
  (this->fields).currentGamePoints = newGamePoints;
  (this->fields).gamePointsToInstantiate =
       ((this->fields).gamePointsToInstantiate - iVar1) + newGamePoints;
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__get_Count__,
                  0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (10 < (this->fields).gamePointsToInstantiate) {
    (this->fields).gamePointsToInstantiate = 10;
  }
  pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
  if ((pLVar2 == (List_1_GamePointGainEffect_ *)0x0) ||
     (pGVar3 = (this->fields).countController, pGVar3 == (GamePointGainEffectCountController *)0x0))
  {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar1 = (this->fields).gamePointsToInstantiate;
  iVar5 = (pLVar2->fields)._size;
  (pGVar3->fields).endValue = (this->fields).currentGamePoints;
  (pGVar3->fields).startValue = (pGVar3->fields).currentGamePointAmountDisplayed;
  pcVar4 = pcRam_?;
  (pGVar3->fields).gainEffectTotalAmount = iVar1 + iVar5;
  (pGVar3->fields).gainEffectAmountReached = 0;
  pcVar6 = pcRam_?;
  if ((pcVar4 == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar4, pcVar4 == (code *)0x0)) {
    uVar7 = func_?(&UNK_?);
    FUN_?(uVar7,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar6;
  fVar8 = (float)(*pcVar4)();
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
  pLVar2 = (this->fields).gamePointGainEffectPool;
  if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
    if ((pLVar2->fields)._size == 0) {
      GameMeterGamePoints_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
    }
    pLVar2 = (this->fields).gamePointGainEffectPool;
    if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
      iVar1 = (pLVar2->fields)._size;
      if ((uint)(pLVar2->fields)._size <= iVar1 - 1U) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                  ((MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pGVar10 = (pLVar2->fields)._items;
      if (pGVar10 != (GamePointGainEffect__Array *)0x0) {
        if ((uint)pGVar10->max_length <= iVar1 - 1U) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pLVar2 = (this->fields).gamePointGainEffectPool;
        this_00 = pGVar10->vector[(longlong)iVar1 + -1];
        if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                     (pLVar2->fields)._size + -1,
                     MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                    );
          if ((this->fields).disableSpawnOffset == 0) {
            if ((this_00 == (GamePointGainEffect *)0x0) ||
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0))
            {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uStack_11._0_4_ = (this->fields).gainEffectSpawnOffset.x;
            uStack_11._4_4_ = (this->fields).gainEffectSpawnOffset.y;
            fStack_12 = (this->fields).gainEffectSpawnOffset.z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar13 = (obj->fields)._._.m_CachedPtr;
            if (pvVar13 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar7 = func_?(&UNK_?);
              FUN_?(uVar7,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
            (*pcRam_?)(pvVar13,&uStack_11);
          }
          else if (this_00 == (GamePointGainEffect *)0x0) goto code_?;
          GamePointGainEffect::GamePointGainEffect_StartEffect
                    (this_00,(this->fields).gamePointEffectTarget,_UNK_?,_UNK_?,
                     _UNK_?,_UNK_?,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
            pLVar2 = (this->fields).gamePointGainEffectCurrentlyUsed;
            if (pLVar2 != (List_1_GamePointGainEffect_ *)0x0) {
              FUN_?(pLVar2,this_00);
              pcVar4 = pcRam_?;
              piVar14 = &(this->fields).gamePointsToInstantiate;
              *piVar14 = *piVar14 + -1;
              pcVar6 = pcRam_?;
              if ((pcVar4 == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar4,
                 pcVar4 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar6;
              fVar8 = (float)(*pcVar4)();
              pcVar4 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                uVar7 = func_?(&UNK_?);
                FUN_?(uVar7,0);
                pcVar4 = (code *)swi(3);
                (*pcVar4)();
                return;
              }
              pcRam_? = pcVar4;
              fVar15 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
              (this->fields).createGamePointTime = fVar15 + fVar8;
              if ((this->fields).disableSpawnOffset == 0) {
                pGVar3 = (this->fields).countController;
                if (pGVar3 == (GamePointGainEffectCountController *)0x0) goto code_?;
                pcVar4 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
                  uVar7 = func_?(&UNK_?);
                  FUN_?(uVar7,0);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
                pcRam_? = pcVar4;
                fVar8 = (float)(*pcRam_?)();
                (pGVar3->fields).startSlideOutTime = fVar8 + (pGVar3->fields).slideOutDelay;
                pcVar4 = pcRam_?;
                if (((pGVar3->fields).currentSlideState == 1) ||
                   ((pGVar3->fields).currentSlideState == 3)) {
                  (pGVar3->fields).currentSlideState = 2;
                  pcVar6 = pcRam_?;
                  if ((pcVar4 == (code *)0x0) &&
                     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar6 = pcVar4,
                     pcVar4 == (code *)0x0)) {
                    uVar7 = func_?(&UNK_?);
                    FUN_?(uVar7,0);
                    pcVar4 = (code *)swi(3);
                    (*pcVar4)();
                    return;
                  }
                  pcRam_? = pcVar6;
                  fVar8 = (float)(*pcVar4)();
                  (pGVar3->fields).slideStartTime = fVar8;
                }
              }
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


/* Void SetShowGameMeter(Boolean) */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_SetShowGameMeter
               (GameMeterGamePoints *this,bool show,MethodInfo *method)

{
  this_00 = (this->fields).gamePointEffectSpawnPoint;
  if ((this_00 != (Transform *)0x0) &&
     (pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0), pGVar1 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar1,show,(MethodInfo *)0x0);
    pGVar1 = (this->fields).gamePointMeterMainObject;
    if (pGVar1 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,show,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar1 == (GameObject *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (pGVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar1,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar3,show);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void StartGamePointGainEffect() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_StartGamePointGainEffect
               (GameMeterGamePoints *this,MethodInfo *method)

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
      GameMeterGamePoints_CreateGamePointGainEffect(this,(MethodInfo *)0x0);
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
        if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__RemoveAt
                    ((List_1_System_Object_ *)(this->fields).gamePointGainEffectPool,
                     (pLVar1->fields)._size + -1,
                     MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__RemoveAt_int_
                    );
          if ((this->fields).disableSpawnOffset == 0) {
            if ((this_00 == (GamePointGainEffect *)0x0) ||
               (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0))
            {
              FUN_?();
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            uStack_5._0_4_ = (this->fields).gainEffectSpawnOffset.x;
            uStack_5._4_4_ = (this->fields).gainEffectSpawnOffset.y;
            fStack_6 = (this->fields).gainEffectSpawnOffset.z;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pvVar7 = (obj->fields)._._.m_CachedPtr;
            if (pvVar7 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcVar3 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
              uVar8 = func_?(&UNK_?);
              FUN_?(uVar8,0);
              pcVar3 = (code *)swi(3);
              (*pcVar3)();
              return;
            }
            pcRam_? = pcVar3;
            (*pcRam_?)(pvVar7,&uStack_5);
          }
          else if (this_00 == (GamePointGainEffect *)0x0) goto code_?;
          GamePointGainEffect::GamePointGainEffect_StartEffect
                    (this_00,(this->fields).gamePointEffectTarget,_UNK_?,_UNK_?,
                     _UNK_?,_UNK_?,(MethodInfo *)0x0);
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0);
          if (this_01 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_01,1,(MethodInfo *)0x0);
            pLVar1 = (this->fields).gamePointGainEffectCurrentlyUsed;
            if (pLVar1 != (List_1_GamePointGainEffect_ *)0x0) {
              FUN_?(pLVar1,this_00);
              pcVar3 = pcRam_?;
              piVar9 = &(this->fields).gamePointsToInstantiate;
              *piVar9 = *piVar9 + -1;
              pcVar10 = pcRam_?;
              if ((pcVar3 == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar10 = pcVar3,
                 pcVar3 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar10;
              fVar11 = (float)(*pcVar3)();
              pcVar3 = pcRam_?;
              if ((pcRam_? == (code *)0x0) &&
                 (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                uVar8 = func_?(&UNK_?);
                FUN_?(uVar8,0);
                pcVar3 = (code *)swi(3);
                (*pcVar3)();
                return;
              }
              pcRam_? = pcVar3;
              fVar12 = (float)(*pcRam_?)(_UNK_?,_UNK_?);
              (this->fields).createGamePointTime = fVar12 + fVar11;
              if ((this->fields).disableSpawnOffset == 0) {
                pGVar13 = (this->fields).countController;
                if (pGVar13 == (GamePointGainEffectCountController *)0x0) goto code_?;
                pcVar3 = pcRam_?;
                if ((pcRam_? == (code *)0x0) &&
                   (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
                  uVar8 = func_?(&UNK_?);
                  FUN_?(uVar8,0);
                  pcVar3 = (code *)swi(3);
                  (*pcVar3)();
                  return;
                }
                pcRam_? = pcVar3;
                fVar11 = (float)(*pcRam_?)();
                (pGVar13->fields).startSlideOutTime = fVar11 + (pGVar13->fields).slideOutDelay;
                pcVar3 = pcRam_?;
                if (((pGVar13->fields).currentSlideState == 1) ||
                   ((pGVar13->fields).currentSlideState == 3)) {
                  (pGVar13->fields).currentSlideState = 2;
                  pcVar10 = pcRam_?;
                  if ((pcVar3 == (code *)0x0) &&
                     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar10 = pcVar3,
                     pcVar3 == (code *)0x0)) {
                    uVar8 = func_?(&UNK_?);
                    FUN_?(uVar8,0);
                    pcVar3 = (code *)swi(3);
                    (*pcVar3)();
                    return;
                  }
                  pcRam_? = pcVar10;
                  fVar11 = (float)(*pcVar3)();
                  (pGVar13->fields).slideStartTime = fVar11;
                }
              }
              return;
            }
          }
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


/* Void StopAllGainEffects() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_StopAllGainEffects
               (GameMeterGamePoints *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints_Update
               (GameMeterGamePoints *this,MethodInfo *method)

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
      GameMeterGamePoints_StartGamePointGainEffect(this,(MethodInfo *)0x0);
    }
  }
  return;
}


/* GameMeterGamePoints() */

void Assembly-CSharp.dll::GameMeterGamePoints::GameMeterGamePoints__ctor
               (GameMeterGamePoints *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  uVar2 = (ulonglong)_UNK_?;
  (this->fields).gainEffectSpawnOffset.x = (float)(int)(uVar2 << 0x20);
  (this->fields).gainEffectSpawnOffset.y = (float)(int)((uVar2 << 0x20) >> 0x20);
  (this->fields).gainEffectSpawnOffset.z = fVar1;
  pLVar3 = (List_1_GamePointGainEffect_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  bVar4 = iRam_? != 0;
  (this->fields).gamePointGainEffectPool = pLVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).gamePointGainEffectPool >> 0xc);
    uVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar6 == *puVar7;
      if (bVar4) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  pLVar3 = (List_1_GamePointGainEffect_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<GamePointGainEffect>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar3,
             MethodInfo__System__Collections__Generic__List<GamePointGainEffect>__List__);
  bVar4 = iRam_? != 0;
  (this->fields).gamePointGainEffectCurrentlyUsed = pLVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).gamePointGainEffectCurrentlyUsed >> 0xc);
    uVar2 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar2 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar2 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar6 == *puVar7;
      if (bVar4) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_GameMeterVisuals_GameMeterVisualEffect_ *)
            FUN_?(
                         TypeInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>
                         );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<GameMeterVisuals::GameMeterVisualEffect>__List__
            );
  bVar4 = iRam_? != 0;
  (this->fields)._.gameMeterVisualEffects = this_00;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields)._.gameMeterVisualEffects >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar5 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar7;
      LOCK();
      uVar2 = *puVar7;
      if (uVar6 == uVar2) {
        *puVar7 = uVar6 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar2);
  }
  bVar4 = cRam_? == '\0';
  (this->fields)._.meterActive = 1;
  if (bVar4) {
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

