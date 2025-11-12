
/* Void AddSpawnRoleRewardInfo(GamePassesSpawnRoleRewardInfo) */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::TierUnlockedPopupContentSpawnRole_AddSpawnRoleRewardInfo(TierUnlockedPopupContentSpawnRole *this,GamePassesSpawnRoleRewardInfo *spawnRoleInfo,MethodInfo *method)

{
  if ((spawnRoleInfo != (GamePassesSpawnRoleRewardInfo *)0x0) && (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)spawnRoleInfo,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(this_00,(Transform *)(this->fields)._.mainContent,0,(MethodInfo *)0x0);
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)spawnRoleInfo,(MethodInfo *)0x0);
    if (this_01 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(this_01,1,(MethodInfo *)0x0);
      pGVar1 = (this->fields).contentCuller;
      if (pGVar1 != (GamePassesShopContentCuller *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_,spawnRoleInfo,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__Add_IGamePassShopContent_;
        pLVar3 = (pGVar1->fields).gamePassShopContentList;
        if (pLVar3 != (List_1_IGamePassShopContent_ *)0x0) {
          piVar4 = &(pLVar3->fields)._version;
          *piVar4 = *piVar4 + 1;
          pIVar5 = (pLVar3->fields)._items;
          if (pIVar5 != (IGamePassShopContent__Array *)0x0) {
            uVar6 = (pLVar3->fields)._size;
            if (uVar6 < (uint)pIVar5->max_length) {
              (pLVar3->fields)._size = uVar6 + 1;
            }
            else {
              uVar6 = (pLVar3->fields)._size;
              FUN_?(pLVar3,uVar6 + 1,(pMVar2->klass->rgctx_data[0xe].method)->klass->rgctx_data[0xf].rgctxDataDummy,pIVar5,unaff_RDI);
              pIVar5 = (pLVar3->fields)._items;
              (pLVar3->fields)._size = uVar6 + 1;
              if (pIVar5 == (IGamePassShopContent__Array *)0x0) {
                FUN_?();
                pcVar7 = (code *)swi(3);
                (*pcVar7)();
                return;
              }
            }
            if ((uint)pIVar5->max_length <= uVar6) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
            bVar8 = iRam_? != 0;
            pIVar5->vector[(int)uVar6] = (IGamePassShopContent *)spawnRoleInfo;
            if (bVar8) {
              uVar6 = (uint)((ulonglong)(pIVar5->vector + (int)uVar6) >> 0xc);
              puVar9 = (ulonglong *)((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar10 = *puVar9;
                LOCK();
                uVar11 = *puVar9;
                if (uVar10 == uVar11) {
                  *puVar9 = uVar10 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (uVar10 != uVar11);
            }
            return;
          }
        }
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void HandleDisplaying() */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::TierUnlockedPopupContentSpawnRole_HandleDisplaying(TierUnlockedPopupContentSpawnRole *this,MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar4 = (this->fields)._.titleOriginalYPosition - 300.0;
  fVar5 = (this->fields)._.titleOriginalYPosition;
  fVar3 = (fVar3 - (this->fields)._.slideInStartTime) / 0.2;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  else if (1.0 < fVar3) {
    fVar3 = 1.0;
  }
  pTVar6 = (this->fields)._.titleText;
  if (pTVar6 != (Text *)0x0) {
    pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pTVar6,(MethodInfo *)0x0);
    pTVar6 = (this->fields)._.titleText;
    if ((pTVar6 != (Text *)0x0) && (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pTVar6,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = 0;
      uStack_10 = 0;
      pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
      if (pvVar11 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar2 = func_?(&UNK_?);
        FUN_?(uVar2,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar11);
      pTVar6 = (this->fields)._.titleText;
      if ((pTVar6 != (Text *)0x0) && (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pTVar6,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_12 = 0;
        uStack_13 = 0;
        pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar11);
        if (pTVar7 == (Transform *)0x0) {
          FUN_?();
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        uStack_9 = CONCAT44((fVar5 - fVar4) * fVar3 + fVar4,(undefined4)uStack_9);
        uStack_10 = uStack_13;
        if (cRam_? == '\0') {
          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar11 = (pTVar7->fields)._._.m_CachedPtr;
        if (pvVar11 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        (*pcRam_?)(pvVar11);
        pcVar1 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
          uVar2 = func_?(&UNK_?);
          FUN_?(uVar2,0);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        pcRam_? = pcVar1;
        fVar5 = (float)(*pcRam_?)();
        fVar5 = (fVar5 - (this->fields)._.slideOutStartTime) / 0.2;
        if (fVar5 <= 0.0) {
          return;
        }
        fVar3 = (this->fields)._.titleOriginalYPosition;
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
        else if (1.0 < fVar5) {
          fVar5 = 1.0;
        }
        pTVar6 = (this->fields)._.titleText;
        if (pTVar6 != (Text *)0x0) {
          pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pTVar6,(MethodInfo *)0x0);
          pTVar6 = (this->fields)._.titleText;
          if ((pTVar6 != (Text *)0x0) && (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pTVar6,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            uStack_12 = 0;
            uStack_13 = 0;
            pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
            if (pvVar11 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcVar1 = pcRam_?;
            if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
              uVar2 = func_?(&UNK_?);
              FUN_?(uVar2,0);
              pcVar1 = (code *)swi(3);
              (*pcVar1)();
              return;
            }
            pcRam_? = pcVar1;
            (*pcRam_?)(pvVar11);
            pTVar6 = (this->fields)._.titleText;
            if ((pTVar6 != (Text *)0x0) && (pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pTVar6,(MethodInfo *)0x0), pTVar8 != (Transform *)0x0)) {
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              uStack_9 = 0;
              uStack_10 = 0;
              pvVar11 = (pTVar8->fields)._._.m_CachedPtr;
              if (pvVar11 == (void *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar8,(MethodInfo *)0x0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcVar1 = pcRam_?;
              if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                uVar2 = func_?(&UNK_?);
                FUN_?(uVar2,0);
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              pcRam_? = pcVar1;
              (*pcRam_?)(pvVar11);
              if (pTVar7 == (Transform *)0x0) {
                FUN_?();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
              uStack_12 = CONCAT44(((fVar3 + 300.0) - fVar3) * fVar5 + fVar3,(undefined4)uStack_12);
              uStack_13 = uStack_10;
              if (cRam_? == '\0') {
                FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pvVar11 = (pTVar7->fields)._._.m_CachedPtr;
              if (pvVar11 != (void *)0x0) {
                pcVar1 = pcRam_?;
                if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                  uVar2 = func_?(&UNK_?);
                  FUN_?(uVar2,0);
                  pcVar1 = (code *)swi(3);
                  (*pcVar1)();
                  return;
                }
                pcRam_? = pcVar1;
                (*pcRam_?)(pvVar11,&uStack_12);
                return;
              }
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::TierUnlockedPopupContentSpawnRole_Initialize(TierUnlockedPopupContentSpawnRole *this,GamePassTier__Enum unlockedGamePassTier,UnityAction *onDisplayDoneCallback,MethodInfo *method)

{
  TierUnlockedPopupContentBase::TierUnlockedPopupContentBase_Initialize((TierUnlockedPopupContentBase *)this,unlockedGamePassTier,onDisplayDoneCallback,(MethodInfo *)0x0);
  this_01 = (this->fields).contentCuller;
  if (this_01 != (GamePassesShopContentCuller *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pLVar1 = (this_01->fields).gamePassShopContentList;
    if (pLVar1 != (List_1_IGamePassShopContent_ *)0x0) {
      GamePassesShopContentCuller::GamePassesShopContentCuller_HideElements(this_01,0,(pLVar1->fields)._size,0,(MethodInfo *)0x0);
      index = 0;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__IGamePassShopContent,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      (this_01->fields).currentSelectionStartIndex = 0;
      if (0 < (this_01->fields).maxSelectionElementsOnScreen) {
        do {
          if (cRam_? == '\0') {
            FUN_?(&MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Count__);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (-1 < index) {
            this_00 = (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)(this_01->fields).gamePassShopContentList;
            if (this_00 == (List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *)0x0) {
code_?:
              FUN_?();
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            if (index < (this_00->fields)._size) {
              EVar3 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::UIR::EntryPreProcessor+AllocSize]::List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item(this_00,index,MethodInfo__System__Collections__Generic__List<IGamePassShopContent>__get_Item_int_);
              if (EVar3 == (EntryPreProcessor_AllocSize)0x0) goto code_?;
              FUN_?(0,TypeInfo__IGamePassShopContent,EVar3);
            }
          }
          index = index + 1;
        } while (index < (this_01->fields).maxSelectionElementsOnScreen);
      }
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnContinuePressed() */

void Assembly-CSharp.dll::TierUnlockedPopupContentSpawnRole::TierUnlockedPopupContentSpawnRole_OnContinuePressed(TierUnlockedPopupContentSpawnRole *this,MethodInfo *method)

{
  pUVar1 = (this->fields)._.onDisplayDoneCallback;
  if (pUVar1 != (UnityAction *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(pUVar1->fields)._._.invoke_impl)((pUVar1->fields)._._.method_code,(pUVar1->fields)._._.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

