
/* Boolean Delete(MVWorldObjectClientManager, String ByRef) */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Delete(CollectTheItemDropOff *this,MVWorldObjectClientManager *worldObjectClientManager,String **errorText,MethodInfo *method)

{
  if (worldObjectClientManager == (MVWorldObjectClientManager *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pMVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(worldObjectClientManager,(this->fields)._._._._.groupId,(MethodInfo *)0x0);
  if (pMVar3 != (MVWorldObjectClient *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pMVar3->klass->vtable).Delete.methodPtr)(pMVar3,worldObjectClientManager,errorText,(pMVar3->klass->vtable).Delete.method);
    return bVar2;
  }
  return 0;
}


/* Void Destroy() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Destroy(CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).OnPickupCollected = (Action_1_Boolean_ *)0x0;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).OnPickupCollected >> 0xc);
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
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar6 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar6->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0) goto code_?;
    pDVar7 = (Delegate *)FUN_?();
    value = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(value,this);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove(pDVar7,value,(MethodInfo *)0x0);
    pAVar8 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar7 != (Delegate *)0x0) && (lVar3 = FUN_?(pDVar7,TypeInfo__System__Action<EditModeChangeArgs>), lVar3 == 0)) {
      FUN_?(pDVar7,pAVar8);
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    FUN_?();
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar6 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar6 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar6->fields).gameMode == 4) goto code_?;
  }
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    pUVar10 = (this->fields)._._._.PositionChanged;
    this_02 = (UnityAction_2_System_Object_System_Object_ *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor(this_02,(Object *)this,MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_,(MethodInfo *)0x0);
    pDVar7 = mscorlib.dll::System::Delegate::Delegate_Remove((Delegate *)pUVar10,(Delegate *)this_02,(MethodInfo *)0x0);
    pUVar11 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    if (pDVar7 == (Delegate *)0x0) {
      (this->fields)._._._.PositionChanged = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
    }
    else {
      pUVar10 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)FUN_?(pDVar7,TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
      if (pUVar10 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
        FUN_?(pDVar7,pUVar11);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
      (this->fields)._._._.PositionChanged = pUVar10;
      pUVar11 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
      lVar3 = FUN_?();
      if (lVar3 == 0) {
        FUN_?(pDVar7,pUVar11);
        pcVar9 = (code *)swi(3);
        (*pcVar9)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
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
    this_00 = (this->fields).cullingSubscriberBase;
    if (this_00 == (CullingSubscriberBase *)0x0) {
code_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
    CullingSubscriberBase::CullingSubscriberBase_Destroy(this_00,(MethodInfo *)0x0);
    bVar1 = iRam_? != 0;
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    if (bVar1) {
      uVar2 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
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
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar12 = (this->fields)._._._.gameObject;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar12 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar12->fields)._.m_CachedPtr != (void *)0x0) {
      pGVar12 = (this->fields)._._._.gameObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar12,0.0,(MethodInfo *)0x0);
    }
  }
  if ((this->fields)._._._.initializedFromInventory != 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar13 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((pMVar13 != (MVGameControllerBase *)0x0) && (pMVar14 = (pMVar13->fields).game, pMVar14 != (MVNetworkGame *)0x0)) {
    pRVar15 = (pMVar14->fields).runtimeVariableNetworkManager;
    item = (this->fields)._._._._.id;
    if (pRVar15 != (RuntimeVariableNetworkManager *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      this_01 = (HashSet_1_System_Int32Enum_ *)(pRVar15->fields).runtimeDataVariables;
      if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
        bVar16 = System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32Enum]::HashSet_1_System_Int32Enum__Contains(this_01,item,MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_);
        if (bVar16 != 0) {
          pMVar14 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((pMVar14 == (MVNetworkGame *)0x0) || (pRVar15 = (pMVar14->fields).runtimeVariableNetworkManager, pRVar15 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
          RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables(pRVar15,(this->fields)._._._._.id,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void DropWoId(Int32) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_DropWoId(CollectTheItemDropOff *this,int32_t instigatorWoID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__);
    LOCK();
    UNLOCK();
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).sendSignal = 1;
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(pMVar1,instigatorWoID,(MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClient *)0x0) {
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClientManager *)0x0) goto code_?;
    iVar3 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy(pMVar1,instigatorWoID,(MethodInfo *)0x0);
    if (iVar3 == -1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar4 == (PrefabPool *)0x0) goto code_?;
      original = (pPVar4->fields).collectTheItemParticles;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar5 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)original,UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_);
      if (pCVar5 == (Component *)0x0) goto code_?;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar5,(MethodInfo *)0x0);
      pTVar7 = (pMVar2->fields).transform;
      if (pTVar7 == (Transform *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      VStack_8.x = 0.0;
      VStack_8.y = 0.0;
      VStack_8.z = 0.0;
      pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      if (pTVar6 == (Transform *)0x0) {
        FUN_?();
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      VStack_12.x = VStack_8.x;
      VStack_12.y = VStack_8.y;
      VStack_12.z = VStack_8.z;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar9 = (pTVar6->fields)._._.m_CachedPtr;
      if (pvVar9 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar6,(MethodInfo *)0x0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcVar10 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
        uVar11 = func_?(&UNK_?);
        FUN_?(uVar11,0);
        pcVar10 = (code *)swi(3);
        (*pcVar10)();
        return;
      }
      pcRam_? = pcVar10;
      (*pcRam_?)(pvVar9);
      pAVar13 = (this->fields).OnPickupCollected;
      if (pAVar13 != (Action_1_Boolean_ *)0x0) {
        bVar14 = CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
        (*(pAVar13->fields)._._.invoke_impl)((pAVar13->fields)._._.method_code,bVar14 ^ 1,(pAVar13->fields)._._.method);
      }
    }
    pGVar15 = (pMVar2->fields).gameObject;
    if (pGVar15 == (GameObject *)0x0) {
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pOVar16 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1(pGVar15,MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pOVar16 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar17 = MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__;
      if (pOVar16[1].klass != (Object__Class *)0x0) {
        pGVar15 = (pMVar2->fields).gameObject;
        if (pGVar15 == (GameObject *)0x0) goto code_?;
        if ((MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__);
        }
        pOVar18 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(pGVar15,0,((pMVar17->field7_0x38).rgctx_data)->method);
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
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
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pOVar18 != (Object *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pOVar18[1].klass != (Object__Class *)0x0) {
            this_00 = pOVar18[5].klass;
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
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
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Object);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (this_00 != (Object__Class *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if ((((Component__Fields *)&(this_00->_0).name)->_).m_CachedPtr != (void *)0x0) {
                pCVar19 = (Component__Class *)(this_00->_0).image;
                bVar20 = (TypeInfo__PickupItemCollectTheItem->_1).naturalAligment;
                if ((bVar20 <= (pCVar19->_1).naturalAligment) && ((pCVar19->_1).typeHierarchy[(ulonglong)bVar20 - 1] == (Il2CppClass *)TypeInfo__PickupItemCollectTheItem)) {
                  pOVar21 = pOVar16->klass;
                  uVar11._0_2_ = pOVar21[1]._0.byval_arg.attrs;
                  uVar11._2_1_ = pOVar21[1]._0.byval_arg.type;
                  uVar11._3_5_ = *(undefined5 *)&pOVar21[1]._0.byval_arg.field_0xb;
                  (*(code *)pOVar21[1]._0.byval_arg.data)(pOVar16,uVar11);
                  lVar22 = FUN_?();
                  if (lVar22 != 0) {
                    pOVar16 = *(Object **)(lVar22 + 0x470);
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pCVar5 = (Component *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4(pOVar16,UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_);
                    if (pCVar5 != (Component *)0x0) {
                      pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform(pCVar5,(MethodInfo *)0x0);
                      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                      if (pTVar6 != (Transform *)0x0) {
                        pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_8,pTVar6,(MethodInfo *)0x0);
                        if (pTVar7 == (Transform *)0x0) {
                          FUN_?();
                          pcVar10 = (code *)swi(3);
                          (*pcVar10)();
                          return;
                        }
                        VStack_12.x = pVVar23->x;
                        VStack_12.y = pVVar23->y;
                        VStack_12.z = pVVar23->z;
                        if (cRam_? == '\0') {
                          FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar9 = (pTVar7->fields)._._.m_CachedPtr;
                        if (pvVar9 != (void *)0x0) {
                          pcVar10 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) && (pcVar10 = (code *)FUN_?(&UNK_?), pcVar10 == (code *)0x0)) {
                            uVar11 = func_?(&UNK_?);
                            FUN_?(uVar11,0);
                            pcVar10 = (code *)swi(3);
                            (*pcVar10)();
                            return;
                          }
                          pcRam_? = pcVar10;
                          (*pcRam_?)(pvVar9);
                          pAVar13 = (this->fields).OnPickupCollected;
                          if (pAVar13 == (Action_1_Boolean_ *)0x0) {
                            return;
                          }
                          bVar14 = CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
                          (*(pAVar13->fields)._._.invoke_impl)((pAVar13->fields)._._.method_code,bVar14 ^ 1,(pAVar13->fields)._._.method);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar7,(MethodInfo *)0x0);
                        pcVar10 = (code *)swi(3);
                        (*pcVar10)();
                        return;
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Initialize(CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<EditModeChangeArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemDropOff__OnChunkEditReset_System__Object__EditStateEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemDropOff__OnCollected_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemDropOff__OnEditModeChange_EditModeChangeArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemDropOff__SignalCallback_bool__bool__LogicObjectManager_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemDropOff__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__EditableCubeModelWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IEditModeUI);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVCubeModelInstance);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitter);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_DropOffModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).OnPickupCollected;
  pDVar2 = (Delegate *)FUN_?(TypeInfo__System__Action<bool>);
  FUN_?(pDVar2,this);
  pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pAVar1,pDVar2,(MethodInfo *)0x0);
  pAVar3 = TypeInfo__System__Action<bool>;
  if (pDVar2 == (Delegate *)0x0) {
    (this->fields).OnPickupCollected = (Action_1_Boolean_ *)0x0;
  }
  else {
    pAVar1 = (Action_1_Boolean_ *)FUN_?(pDVar2,TypeInfo__System__Action<bool>);
    if (pAVar1 == (Action_1_Boolean_ *)0x0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->fields).OnPickupCollected = pAVar1;
    pAVar3 = TypeInfo__System__Action<bool>;
    lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<bool>);
    if (lVar5 == 0) {
      FUN_?(pDVar2,pAVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar6 = (uint)((ulonglong)&(this->fields).OnPickupCollected >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pCVar11 = (this->fields).triggerObject;
  if (pCVar11 == (CollectTheItemDropOffObject *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  this_00 = (pCVar11->fields).triggerBoxEvents;
  pUVar12 = (UnityAction_2_System_Object_System_Object_ *)FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor(pUVar12,(Object *)this,MethodInfo__CollectTheItemDropOff__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_,(MethodInfo *)0x0);
  if (this_00 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter(this_00,(EventHandler_1_TriggerEventArgs_ *)pUVar12,(MethodInfo *)0x0);
  pGVar13 = (this->fields)._._._.outputConnectorObject;
  if ((pGVar13 == (GameObject *)0x0) || (pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar13,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0)) goto code_?;
  pOStack_15 = (Object__Class *)0x3fc000003fc00000;
  uStack_16._0_1_ = 0;
  uStack_16._1_1_ = 0;
  uStack_16._2_1_ = 0xc0;
  uStack_16._3_1_ = 0x3f;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar17 = (pTVar14->fields)._._.m_CachedPtr;
  if (pvVar17 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar14,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar18 = func_?(&UNK_?);
    FUN_?(uVar18,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar17,&pOStack_15);
  pMVar19 = (MVCubeModelInstance *)MVBlueprintBase::MVBlueprintBase_GetChild((MVBlueprintBase *)this,StringLiteral_DropOffModel,(MethodInfo *)0x0);
  if (pMVar19 == (MVCubeModelInstance *)0x0) goto code_?;
  pMVar20 = pMVar19->klass;
  bVar21 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
  if (((pMVar20->_1).naturalAligment < bVar21) || ((MVCubeModelInstance__Class *)(pMVar20->_1).typeHierarchy[(ulonglong)bVar21 - 1] != TypeInfo__MVCubeModelInstance)) {
    FUN_?(pMVar19);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  (*(pMVar20->vtable).set_Visible.methodPtr)(pMVar19,CONCAT71((int7)((ulonglong)TypeInfo__MVCubeModelInstance >> 8),1),(pMVar20->vtable).set_Visible.method);
  pCVar11 = (this->fields).triggerObject;
  pTVar14 = (pMVar19->fields)._._.transform;
  if (((pCVar11 == (CollectTheItemDropOffObject *)0x0) || (pGVar13 = (pCVar11->fields).cullingObject, pGVar13 == (GameObject *)0x0)) || (parent = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar13,(MethodInfo *)0x0), pTVar14 == (Transform *)0x0)) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1(pTVar14,parent,1,(MethodInfo *)0x0);
  OStackX_8 = (this->fields).minBounds.x;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_8,(MethodInfo *)0x0);
  OStackX_18 = (this->fields).minBounds.y;
  OStackX_8.currentCryptoKey = iVar22;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_18,(MethodInfo *)0x0);
  OStackX_20 = (this->fields).minBounds.z;
  OStackX_18.currentCryptoKey = iVar22;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStackX_20,(MethodInfo *)0x0);
  OStack_23 = (this->fields).maxBounds.x;
  OStackX_20.currentCryptoKey = iVar22;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStack_23,(MethodInfo *)0x0);
  OStack_23 = (this->fields).maxBounds.y;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar24 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStack_23,(MethodInfo *)0x0);
  OStack_23 = (this->fields).maxBounds.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar25 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_InternalDecrypt(&OStack_23,(MethodInfo *)0x0);
  OVar26 = *(ObscuredShort *)&(this->fields).minCubes;
  uStack_27._0_4_ = (this->fields).minCubes.fakeValue;
  uStack_27._4_1_ = (this->fields).minCubes.inited;
  uStack_27._5_3_ = *(undefined3 *)&(this->fields).minCubes.field_0xd;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  OStack_23 = OVar26;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar28 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_InternalDecrypt((ObscuredInt *)&OStack_23,(MethodInfo *)0x0);
  pEVar29 = (EditableCubeModelWrapper *)FUN_?(TypeInfo__EditableCubeModelWrapper);
  OVar26 = OStackX_8;
  bVar10 = iRam_? != 0;
  OStack_23.hiddenValue = iVar24;
  OStack_23.currentCryptoKey = iVar22;
  (pEVar29->fields).cubeModelBase = pMVar19;
  if (bVar10) {
    uVar6 = (uint)((ulonglong)&pEVar29->fields >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  piVar30 = &(pMVar19->fields)._._.interactionFlags;
  *piVar30 = *piVar30 | 0x10;
  OStackX_8.hiddenValue = OStackX_18.currentCryptoKey;
  OStackX_8._6_2_ = OVar26._6_2_;
  OStackX_8.fakeValue = OStackX_20.currentCryptoKey;
  OStackX_18.fakeValue = iVar25;
  OStackX_18.currentCryptoKey = iVar22;
  OStackX_18.hiddenValue = iVar24;
  EditableCubeModelWrapper::EditableCubeModelWrapper_SetConstraints(pEVar29,(IntVector *)&OStackX_8,(IntVector *)&OStackX_18,iVar28,(MethodInfo *)0x0);
  bVar10 = iRam_? != 0;
  (this->fields).editableCubeModelWrapper = pEVar29;
  if (bVar10) {
    uVar6 = (uint)((ulonglong)&(this->fields).editableCubeModelWrapper >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  pMVar31 = UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______;
  pCVar11 = (this->fields).triggerObject;
  if (pCVar11 == (CollectTheItemDropOffObject *)0x0) goto code_?;
  pGVar13 = (pMVar19->fields)._._.gameObject;
  pCVar32 = (pCVar11->fields).blinker;
  if (pGVar13 == (GameObject *)0x0) goto code_?;
  if ((UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
  }
  pMVar33 = (MeshFilter__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar13,0,((pMVar31->field7_0x38).rgctx_data)->method);
  if (pCVar32 == (CollectTheItemBlinker *)0x0) goto code_?;
  bVar10 = iRam_? != 0;
  (pCVar32->fields)._.meshFilters = pMVar33;
  if (bVar10) {
    uVar6 = (uint)((ulonglong)&(pCVar32->fields)._.meshFilters >> 0xc);
    uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
    do {
      uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
      puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
      LOCK();
      bVar10 = uVar8 == *puVar9;
      if (bVar10) {
        *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
      }
      UNLOCK();
    } while (!bVar10);
  }
  cVar34 = cRam_?;
  pCVar11 = (this->fields).triggerObject;
  if ((pCVar11 == (CollectTheItemDropOffObject *)0x0) || (pCVar32 = (pCVar11->fields).blinker, pCVar32 == (CollectTheItemBlinker *)0x0)) goto code_?;
  (pCVar32->fields)._.visible = 1;
  if (cVar34 == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cVar34 = '\x01';
    cRam_? = '\x01';
  }
  pGVar35 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar35 == (GameSessionData *)0x0) goto code_?;
  if ((pGVar35->fields).gameMode == 0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0) goto code_?;
    pDVar2 = (Delegate *)FUN_?();
    b = (Delegate *)FUN_?(TypeInfo__System__Action<EditModeChangeArgs>);
    FUN_?(b,this);
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine(pDVar2,b,(MethodInfo *)0x0);
    pAVar36 = TypeInfo__System__Action<EditModeChangeArgs>;
    if ((pDVar2 != (Delegate *)0x0) && (lVar5 = FUN_?(pDVar2,TypeInfo__System__Action<EditModeChangeArgs>), lVar5 == 0)) {
      FUN_?(pDVar2,pAVar36);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    FUN_?();
    pCVar11 = (this->fields).triggerObject;
    if ((pCVar11 == (CollectTheItemDropOffObject *)0x0) || (this_01 = (pCVar11->fields).greyout, this_01 == (GreyOutObjectScript *)0x0)) goto code_?;
    GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials(this_01,(MethodInfo *)0x0);
    pEVar29 = (this->fields).editableCubeModelWrapper;
    if (pEVar29 == (EditableCubeModelWrapper *)0x0) goto code_?;
    pMVar19 = (pEVar29->fields).cubeModelBase;
    pUVar12 = (UnityAction_2_System_Object_System_Object_ *)FUN_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor(pUVar12,(Object *)this,MethodInfo__CollectTheItemDropOff__OnChunkEditReset_System__Object__EditStateEventArgs_,(MethodInfo *)0x0);
    if (pMVar19 == (MVCubeModelInstance *)0x0) goto code_?;
    MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged((MVCubeModelBase *)pMVar19,(EventHandler_1_EditStateEventArgs_ *)pUVar12,(MethodInfo *)0x0);
  }
  else {
    if (cVar34 == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar35 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
    if (pGVar35 == (GameSessionData *)0x0) goto code_?;
    if ((pGVar35->fields).gameMode == 4) goto code_?;
  }
  bVar37 = CollectTheItemDropOff_get_DoOnce(this,(MethodInfo *)0x0);
  if (bVar37 == 0) {
code_?:
    CollectTheItemDropOff_SetupCulling(this,(MethodInfo *)0x0);
    signalCallback = (Action_3_Boolean_Boolean_LogicObjectManager_ *)FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    FUN_?(signalCallback,this,MethodInfo__CollectTheItemDropOff__SignalCallback_bool__bool__LogicObjectManager_);
    pIVar38 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver((MVWorldObject *)this,0,signalCallback,(MethodInfo *)0x0);
    bVar10 = iRam_? != 0;
    (this->fields)._InputSignalReceiver_k__BackingField = pIVar38;
    if (bVar10) {
      uVar6 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    iVar28 = (this->fields)._._._._.id;
    pOVar39 = (OutputSignalTransmitter *)FUN_?(TypeInfo__OutputSignalTransmitter);
    bVar10 = iRam_? != 0;
    (pOVar39->fields).woId = iVar28;
    (this->fields).outputSignalTransmitter = pOVar39;
    if (bVar10) {
      uVar6 = (uint)((ulonglong)&(this->fields).outputSignalTransmitter >> 0xc);
      uVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6);
      do {
        uVar8 = *(ulonglong *)(uVar7 * 8 + 0xADDR);
        puVar9 = (ulonglong *)(uVar7 * 8 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    return;
  }
  pAVar1 = (this->fields).OnPickupCollected;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isActive);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)(*(this->klass->vtable).get_RunTimeData.methodPtr)(this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar40 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_isActive,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar40 != (Object *)0x0) {
    if ((pOVar40->klass->_0).element_class != (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      FUN_?(pOVar40,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pOStack_15 = pOVar40[1].klass;
    uStack_16 = *(undefined4 *)&pOVar40[1].monitor;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar37 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::ObscuredBool_InternalDecrypt((ObscuredBool *)&pOStack_15,(MethodInfo *)0x0);
    if (pAVar1 != (Action_1_Boolean_ *)0x0) {
      (*(pAVar1->fields)._._.invoke_impl)((pAVar1->fields)._._.method_code,bVar37,(pAVar1->fields)._._.method);
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnChunkEditReset(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnChunkEditReset(CollectTheItemDropOff *this,Object *sender,EditStateEventArgs *args,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (this_00 = (pCVar1->fields).greyout, this_00 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials(this_00,(MethodInfo *)0x0);
    pMVar2 = UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______;
    pCVar1 = (this->fields).triggerObject;
    if (pCVar1 != (CollectTheItemDropOffObject *)0x0) {
      pEVar3 = (this->fields).editableCubeModelWrapper;
      pCVar4 = (pCVar1->fields).blinker;
      if (((pEVar3 != (EditableCubeModelWrapper *)0x0) && (pMVar5 = (pEVar3->fields).cubeModelBase, pMVar5 != (MVCubeModelInstance *)0x0)) && (this_01 = (pMVar5->fields)._._.gameObject, this_01 != (GameObject *)0x0)) {
        if ((UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
        }
        pMVar6 = (MeshFilter__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(this_01,0,((pMVar2->field7_0x38).rgctx_data)->method);
        if (pCVar4 != (CollectTheItemBlinker *)0x0) {
          bVar7 = iRam_? != 0;
          (pCVar4->fields)._.meshFilters = pMVar6;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(pCVar4->fields)._.meshFilters >> 0xc);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnCollected(Boolean) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnCollected(CollectTheItemDropOff *this,bool shouldbeActiveOnCollect,MethodInfo *method)

{
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (this_00 = (pCVar1->fields).visualObject, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(this_00,shouldbeActiveOnCollect,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (this_01 = (pCVar1->fields)._.mainCollider, this_01 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled(this_01,shouldbeActiveOnCollect,(MethodInfo *)0x0);
      pCVar1 = (this->fields).triggerObject;
      if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (this_02 = (pCVar1->fields).blinker, this_02 != (CollectTheItemBlinker *)0x0)) {
        if (shouldbeActiveOnCollect != 0) {
          BlinkerBase::BlinkerBase_StartBlinking((BlinkerBase *)this_02,BlinkType__Enum_DropOffCollectedItem,2.0,(MethodInfo *)0x0);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
        if (pGVar2 != (GameSessionData *)0x0) {
          if ((pGVar2->fields).gameMode == 0) {
            bVar3 = false;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__MVGameControllerBase);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
            if (pGVar2 == (GameSessionData *)0x0) goto code_?;
            bVar3 = (pGVar2->fields).gameMode != 4;
          }
          if (shouldbeActiveOnCollect == 0 && !bVar3) {
            pCVar1 = (this->fields).triggerObject;
            if ((pCVar1 == (CollectTheItemDropOffObject *)0x0) || (this_03 = (pCVar1->fields).greyout, this_03 == (GreyOutObjectScript *)0x0)) goto code_?;
            GreyOutObjectScript::GreyOutObjectScript_GreyOut(this_03,(MethodInfo *)0x0);
          }
          return;
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


/* Void OnEditModeChange(EditModeChangeArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnEditModeChange(CollectTheItemDropOff *this,EditModeChangeArgs arg,MethodInfo *method)

{
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 == (CollectTheItemDropOffObject *)0x0) || (obj = (pCVar1->fields).editCollider, obj == (Collider *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Collider>_UnityEngine__Collider_,CONCAT71(in_register_00000011,arg.playInEditor == 0),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Collider *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,arg.playInEditor == 0);
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnEnterObject(CollectTheItemDropOff *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pEVar1->klass->vtable).OnEnterObject.methodPtr)(pEVar1,e,(pEVar1->klass->vtable).OnEnterObject.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnExitObject(CollectTheItemDropOff *this,EditorStateMachine *e,MethodInfo *method)

{
  pEVar1 = (this->fields).editableCubeModelWrapper;
  if (pEVar1 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    bVar2 = (*(pEVar1->klass->vtable).OnExitObject.methodPtr)(pEVar1,e,(pEVar1->klass->vtable).OnExitObject.method);
    return bVar2;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* Void OnPositionChanged(MVWorldObjectClient, PositionChangedEventArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnPositionChanged(CollectTheItemDropOff *this,MVWorldObjectClient *arg0,PositionChangedEventArgs *positionChangedEventArgs,MethodInfo *method)

{
  if ((positionChangedEventArgs != (PositionChangedEventArgs *)0x0) && (pCVar1 = (this->fields).cullingSubscriberBase, pCVar1 != (CullingSubscriberBase *)0x0)) {
    fVar2 = (positionChangedEventArgs->fields).NewPos.x;
    fVar3 = (positionChangedEventArgs->fields).NewPos.y;
    fVar4 = (positionChangedEventArgs->fields).NewPos.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CullingApiWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__CullingApiWrapper);
    }
    pBVar5 = TypeInfo__CullingApiWrapper->static_fields->spheres;
    if (pBVar5 != (BoundingSphere__Array *)0x0) {
      uVar6 = (pCVar1->fields)._CullingIndex_k__BackingField;
      if (uVar6 < (uint)pBVar5->max_length) {
        pBVar5->vector[(int)uVar6].position.x = fVar2;
        pBVar5->vector[(int)uVar6].position.y = fVar3;
        pBVar5->vector[(int)uVar6].position.z = fVar4;
        return;
      }
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_OnStateChanged(CollectTheItemDropOff *this,CullingGroupEvent cullingEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CullingApiWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).cullingSubscriberBase;
  if (pCVar1 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar1->fields)._DistanceBandIndex_k__BackingField;
    if (*(int *)&(TypeInfo__CullingApiWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    pCVar2 = (this->fields).triggerObject;
    if ((pCVar2 != (CollectTheItemDropOffObject *)0x0) && (obj = (pCVar2->fields).cullingObject, obj != (GameObject *)0x0)) {
      bVar3 = CullingApiWrapper::CullingApiWrapper_Visible(cullingEvent,distanceBandIndex,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_,bVar3,0,in_R9,unaff_RSI);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (GameObject *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pvVar5 = (obj->fields)._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar5,bVar3);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ReInitializeVisuals() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_ReInitializeVisuals(CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (this_00 = (pCVar1->fields).greyout, this_00 != (GreyOutObjectScript *)0x0)) {
    GreyOutObjectScript::GreyOutObjectScript_InitializeOriginalMaterials(this_00,(MethodInfo *)0x0);
    pMVar2 = UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______;
    pCVar1 = (this->fields).triggerObject;
    if (pCVar1 != (CollectTheItemDropOffObject *)0x0) {
      pEVar3 = (this->fields).editableCubeModelWrapper;
      pCVar4 = (pCVar1->fields).blinker;
      if (((pEVar3 != (EditableCubeModelWrapper *)0x0) && (pMVar5 = (pEVar3->fields).cubeModelBase, pMVar5 != (MVCubeModelInstance *)0x0)) && (this_01 = (pMVar5->fields)._._.gameObject, this_01 != (GameObject *)0x0)) {
        if ((UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
        }
        pMVar6 = (MeshFilter__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(this_01,0,((pMVar2->field7_0x38).rgctx_data)->method);
        if (pCVar4 != (CollectTheItemBlinker *)0x0) {
          bVar7 = iRam_? != 0;
          (pCVar4->fields)._.meshFilters = pMVar6;
          if (bVar7) {
            uVar8 = (uint)((ulonglong)&(pCVar4->fields)._.meshFilters >> 0xc);
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
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_Reset(CollectTheItemDropOff *this,MethodInfo *method)

{
  pCVar1 = (this->fields).triggerObject;
  if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (this_02 = (pCVar1->fields).visualObject, this_02 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(this_02,1,(MethodInfo *)0x0);
    pCVar1 = (this->fields).triggerObject;
    if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (this_03 = (pCVar1->fields)._.mainCollider, this_03 != (Collider *)0x0)) {
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled(this_03,1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
      if (pGVar2 != (GameSessionData *)0x0) {
        if ((pGVar2->fields).gameMode != 0) {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pGVar2 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
          if (pGVar2 == (GameSessionData *)0x0) goto code_?;
          if ((pGVar2->fields).gameMode != 4) {
            return;
          }
        }
        pCVar1 = (this->fields).triggerObject;
        if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (this_04 = (pCVar1->fields).greyout, this_04 != (GreyOutObjectScript *)0x0)) {
          GreyOutObjectScript::GreyOutObjectScript_GreyIn(this_04,(MethodInfo *)0x0);
          pAVar3 = (this->fields).OnPickupCollected;
          if (pAVar3 != (Action_1_Boolean_ *)0x0) {
            (*(pAVar3->fields)._._.invoke_impl)((pAVar3->fields)._._.method_code,1,(pAVar3->fields)._._.method);
          }
          pCVar1 = (this->fields).triggerObject;
          if ((pCVar1 != (CollectTheItemDropOffObject *)0x0) && (pCVar4 = (pCVar1->fields).blinker, pCVar4 != (CollectTheItemBlinker *)0x0)) {
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__,0);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__Dispose__);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__MoveNext__);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__KeyCollection_TKey_TValue___Enumerator<BlinkType,_Blinker>__get_Current__);
              LOCK();
              UNLOCK();
              FUN_?(&MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___KeyCollection<BlinkType,_Blinker>__GetEnumerator__);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)(pCVar4->fields)._.blinkers;
            if ((this_00 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0) || (pDVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::TypeConverterRegistry+ConverterKey,System::Object]::Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Keys(this_00,MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Keys__), pDVar5 == (Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            uStack_7 = (pDVar5->fields)._dictionary;
            puStack_8 = (undefined1 *)0x0;
            puStack_9 = (undefined *)0x0;
            if (iRam_? != 0) {
              uVar10 = (uint)((ulonglong)&uStack_7 >> 0xc);
              uVar11 = (ulonglong)((uVar10 & 0x1fffff) >> 6);
              do {
                uVar12 = *(ulonglong *)(uVar11 * 8 + 0xADDR);
                puVar13 = (ulonglong *)(uVar11 * 8 + 0xADDR);
                LOCK();
                bVar14 = uVar12 == *puVar13;
                if (bVar14) {
                  *puVar13 = uVar12 | 1L << (uVar10 & 0x3f);
                }
                UNLOCK();
              } while (!bVar14);
            }
            if (uStack_7 == (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            iStack_15 = (uStack_7->fields)._version;
            puStack_9 = (undefined *)0x0;
            uStack_7._4_4_ = (undefined4)((ulonglong)uStack_7 >> 0x20);
            uStack_16 = (undefined4)uStack_7;
            uStack_17 = uStack_7._4_4_;
            uStack_18 = 0;
            uStack_19 = 0;
            uStack_7 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0;
            puStack_8 = (undefined1 *)&uStack_16;
            do {
              lVar20 = CONCAT44(uStack_17,uStack_16);
              if (lVar20 == 0) {
code_?:
                FUN_?();
                FUN_?();
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              if (iStack_15 != *(int *)(lVar20 + 0x2c)) {
code_?:
                mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion((MethodInfo *)0x0);
                goto code_?;
              }
              do {
                if (lVar20 == 0) goto code_?;
                if (*(uint *)(lVar20 + 0x20) <= uStack_18) {
                  return;
                }
                lVar21 = *(longlong *)(lVar20 + 0x18);
                lVar22 = (longlong)(int)uStack_18;
                uVar10 = uStack_18 + 1;
                if (lVar21 == 0) goto code_?;
                if (*(uint *)(lVar21 + 0x18) <= uStack_18) {
                  uStack_18 = uVar10;
                  FUN_?();
                  goto code_?;
                }
                uStack_18 = uVar10;
              } while (*(int *)(lVar21 + 0x20 + lVar22 * 0x18) < 0);
              key = *(Int32Enum__Enum *)(lVar21 + 0x28 + lVar22 * 0x18);
              uStack_19 = CONCAT44(uStack_19._4_4_,key);
              if (cRam_? == '\0') {
                FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              this_01 = (pCVar4->fields)._.blinkers;
              if (this_01 == (Dictionary_2_BlinkType_Blinker_ *)0x0) {
code_?:
                FUN_?();
                uVar10 = uStack_18;
code_?:
                uStack_18 = uVar10;
                FUN_?();
code_?:
                FUN_?();
                goto code_?;
              }
              pOVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Object]::Dictionary_2_System_Int32Enum_System_Object__get_Item((Dictionary_2_System_Int32Enum_System_Object_ *)this_01,key,MethodInfo__System__Collections__Generic__Dictionary<BlinkType,_Blinker>__get_Item_BlinkType_);
              if (pOVar23 == (Object *)0x0) {
code_?:
                FUN_?();
                goto code_?;
              }
              pOVar23[1].monitor = (MonitorData *)0x0;
            } while( true );
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetupCulling() */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_SetupCulling(CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CollectTheItemDropOff__OnStateChanged_UnityEngine__CullingGroupEvent_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CullingSubscriberBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  obj = (this->fields)._._._.transform;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar3,&VStack_2);
  callback = (UnityAction_1_UnityEngine_CullingGroupEvent_ *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
  FUN_?(callback,this);
  this_00 = (CullingSubscriberBase *)FUN_?(TypeInfo__CullingSubscriberBase);
  CullingSubscriberBase::CullingSubscriberBase__ctor_1(this_00,callback,(MethodInfo *)0x0);
  VStack_5.z = VStack_2.z;
  VStack_5.x = VStack_2.x;
  VStack_5.y = VStack_2.y;
  CullingSubscriberBase::CullingSubscriberBase_Setup(this_00,3.5,&VStack_5,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields).cullingSubscriberBase = this_00;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).cullingSubscriberBase >> 0xc);
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
  pUVar11 = (this->fields)._._._.PositionChanged;
  this_01 = (UnityAction_2_System_Object_System_Object_ *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::UnityAction_2_System_Object_System_Object___ctor(this_01,(Object *)this,MethodInfo__CollectTheItemDropOff__OnPositionChanged_MVWorldObjectClient__PositionChangedEventArgs_,(MethodInfo *)0x0);
  pDVar12 = mscorlib.dll::System::Delegate::Delegate_Combine((Delegate *)pUVar11,(Delegate *)this_01,(MethodInfo *)0x0);
  pUVar13 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
  if (pDVar12 == (Delegate *)0x0) {
    (this->fields)._._._.PositionChanged = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0;
  }
  else {
    pUVar11 = (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)FUN_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
    if (pUVar11 == (UnityAction_2_MVWorldObjectClient_PositionChangedEventArgs_ *)0x0) {
      FUN_?(pDVar12,pUVar13);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    (this->fields)._._._.PositionChanged = pUVar11;
    pUVar13 = TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>;
    lVar14 = FUN_?(pDVar12,TypeInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_PositionChangedEventArgs>);
    if (lVar14 == 0) {
      FUN_?(pDVar12,pUVar13);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields)._._._.PositionChanged >> 0xc);
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
  return;
}


/* Void SignalCallback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_SignalCallback(CollectTheItemDropOff *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,MethodInfo *method)

{
  this_00 = (this->fields).outputSignalTransmitter;
  if (this_00 != (OutputSignalTransmitter *)0x0) {
    OutputSignalTransmitter::OutputSignalTransmitter_Send(this_00,(this->fields).sendSignal,(MethodInfo *)0x0);
    (this->fields).sendSignal = 0;
    return;
  }
  FUN_?(0,CONCAT71(in_register_00000011,b));
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void TriggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_TriggerBoxEvents_TriggerEnter(CollectTheItemDropOff *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_01 != (MVWorldObjectClientManager *)0x0)) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient(this_01,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    pMVar2 = MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__;
    if ((pMVar1 != (MVWorldObjectClient *)0x0) && (this_00 = (pMVar1->fields).gameObject, this_00 != (GameObject *)0x0)) {
      if ((MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?(MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__);
      }
      pOVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentInChildren_3(this_00,0,((pMVar2->field7_0x38).rgctx_data)->method);
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pOVar3 != (Object *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (pOVar3[1].klass != (Object__Class *)0x0) {
          pOVar4 = pOVar3[5].klass;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
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
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pOVar4 != (Object__Class *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pOVar4->_0).name != (char *)0x0) {
              pIVar5 = (pOVar4->_0).image;
              bVar6 = (TypeInfo__PickupItemCollectTheItem->_1).naturalAligment;
              if ((bVar6 <= *(byte *)&pIVar5[4].assembly) && (*(PickupItemCollectTheItem__Class **)((longlong)pIVar5[2].codeGenModule + (ulonglong)bVar6 * 8 + -8) == TypeInfo__PickupItemCollectTheItem)) {
                if ((*(PickupItemCollectTheItem__Class **)((longlong)(pOVar4->_0).image[2].codeGenModule + (ulonglong)(TypeInfo__PickupItemCollectTheItem->_1).naturalAligment * 8 + -8) != TypeInfo__PickupItemCollectTheItem) || (pCVar7 = (this->fields).controller, pCVar7 == (CollectTheItem *)0x0)) goto code_?;
                if ((pCVar7->fields)._WoKeyInstance_k__BackingField == *(int *)&pOVar4->rgctx_data) {
                  *(undefined1 *)&(pOVar4->_1).initializationExceptionGCHandle = 0;
                  this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
                  if (this_02 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
                  MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter(this_02,(this->fields)._._._._.id,(e->fields).instigatorWOID,(MethodInfo *)0x0);
                }
              }
            }
          }
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CollectTheItemDropOff(Dictionary`2[System.Object,System.Object], Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff__ctor(CollectTheItemDropOff *this,Dictionary_2_System_Object_System_Object_ *data,Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollectTheItemDropOffObject);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(-5,(MethodInfo *)0x0);
  OVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(-4,(MethodInfo *)0x0);
  OVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(-6,(MethodInfo *)0x0);
  bVar4 = cRam_? == '\0';
  uStack_5 = OVar1._0_4_;
  uStack_6 = OVar1._4_4_;
  uStack_7 = OVar2._0_4_;
  uStack_8 = OVar2._4_4_;
  (this->fields).minBounds.x.currentCryptoKey = (undefined2)uStack_5;
  (this->fields).minBounds.x.hiddenValue = uStack_5._2_2_;
  (this->fields).minBounds.x.fakeValue = (undefined2)uStack_6;
  (this->fields).minBounds.x.inited = uStack_6._2_1_;
  (this->fields).minBounds.x.field_0x7 = uStack_6._3_1_;
  (this->fields).minBounds.y.currentCryptoKey = (undefined2)uStack_7;
  (this->fields).minBounds.y.hiddenValue = uStack_7._2_2_;
  (this->fields).minBounds.y.fakeValue = (undefined2)uStack_8;
  (this->fields).minBounds.y.inited = uStack_8._2_1_;
  (this->fields).minBounds.y.field_0x7 = uStack_8._3_1_;
  (this->fields).minBounds.z = OVar3;
  if (bVar4) {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredShort->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(7,(MethodInfo *)0x0);
  OVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(8,(MethodInfo *)0x0);
  OVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredShort::ObscuredShort_op_Implicit(6,(MethodInfo *)0x0);
  uStack_5 = OVar1._0_4_;
  uStack_6 = OVar1._4_4_;
  uStack_7 = OVar2._0_4_;
  uStack_8 = OVar2._4_4_;
  (this->fields).maxBounds.x.currentCryptoKey = (undefined2)uStack_5;
  (this->fields).maxBounds.x.hiddenValue = uStack_5._2_2_;
  (this->fields).maxBounds.x.fakeValue = (undefined2)uStack_6;
  (this->fields).maxBounds.x.inited = uStack_6._2_1_;
  (this->fields).maxBounds.x.field_0x7 = uStack_6._3_1_;
  (this->fields).maxBounds.y.currentCryptoKey = (undefined2)uStack_7;
  (this->fields).maxBounds.y.hiddenValue = uStack_7._2_2_;
  (this->fields).maxBounds.y.fakeValue = (undefined2)uStack_8;
  (this->fields).maxBounds.y.inited = uStack_8._2_1_;
  (this->fields).maxBounds.y.field_0x7 = uStack_8._3_1_;
  (this->fields).maxBounds.z = OVar3;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?();
  }
  iVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::ObscuredInt_Encrypt(10,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar10 = 0;
  iVar11 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->static_fields->cryptoKey;
  bVar12 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::Detectors::ObscuredCheatingDetector::ObscuredCheatingDetector_get_IsRunning((MethodInfo *)0x0);
  if (bVar12 != 0) {
    iVar10 = 10;
  }
  bVar4 = cRam_? == '\0';
  (this->fields).minCubes.currentCryptoKey = iVar11;
  (this->fields).minCubes.hiddenValue = iVar9;
  (this->fields).minCubes.fakeValue = iVar10;
  *(undefined4 *)&(this->fields).minCubes.inited = 1;
  if (bVar4) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar13 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar13 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar14 = (code *)swi(3);
    (*pcVar14)();
    return;
  }
  MVBlueprintBase::MVBlueprintBase__ctor_1((MVBlueprintBase *)this,data,(ObjectPrefab *)(pPVar13->fields).collectTheItemDropOff,worldObjects,(MethodInfo *)0x0);
  pCVar15 = (CollectTheItemDropOffObject *)(this->fields)._._._.component;
  (this->fields)._._._.interactionFlags = (this->fields)._._._.interactionFlags & 0xffffffffffffdfffU | 0x19008;
  if (pCVar15 == (CollectTheItemDropOffObject *)0x0) {
    (this->fields).triggerObject = (CollectTheItemDropOffObject *)0x0;
  }
  else {
    bVar16 = (TypeInfo__CollectTheItemDropOffObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pCVar15->klass)->_1).naturalAligment < bVar16) || ((((ObjectPrefab__Class *)pCVar15->klass)->_1).typeHierarchy[(ulonglong)bVar16 - 1] != (Il2CppClass *)TypeInfo__CollectTheItemDropOffObject)) {
      FUN_?(pCVar15);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    (this->fields).triggerObject = pCVar15;
    bVar16 = (TypeInfo__CollectTheItemDropOffObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pCVar15->klass)->_1).naturalAligment < bVar16) || ((((ObjectPrefab__Class *)pCVar15->klass)->_1).typeHierarchy[(ulonglong)bVar16 - 1] != (Il2CppClass *)TypeInfo__CollectTheItemDropOffObject)) {
      FUN_?(pCVar15);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar17 = (uint)((ulonglong)&(this->fields).triggerObject >> 0xc);
    puVar18 = (ulonglong *)((ulonglong)((uVar17 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar19 = *puVar18;
      LOCK();
      uVar20 = *puVar18;
      if (uVar19 == uVar20) {
        *puVar18 = uVar19 | 1L << (uVar17 & 0x3f);
      }
      UNLOCK();
    } while (uVar19 != uVar20);
  }
  return;
}


/* Boolean get_DoOnce() */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_get_DoOnce(CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_doOnce);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.blueprintData;
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::Dictionary_2_System_Object_System_Object__get_Item(this_00,(Object *)StringLiteral_doOnce,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
        return *(bool *)&pOVar1[1].klass;
      }
      FUN_?(pOVar1,lRam_?);
      pcVar2 = (code *)swi(3);
      bVar3 = (*pcVar2)();
      return bVar3;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean get_IsActive() */

bool Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_get_IsActive(CollectTheItemDropOff *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_isActive);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)(*(this->klass->vtable).get_RunTimeData.methodPtr)(this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Extensions::Extensions_GetObscuredType(hashtable,StringLiteral_isActive,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar1 != (Object *)0x0) {
    if ((pOVar1->klass->_0).element_class == (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      apOStack_2[0] = pOVar1[1].klass;
      apOStack_2[1]._0_4_ = *(undefined4 *)&pOVar1[1].monitor;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
        FUN_?();
      }
      bVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::ObscuredBool_InternalDecrypt((ObscuredBool *)apOStack_2,(MethodInfo *)0x0);
      return bVar3;
    }
    FUN_?(pOVar1,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    pcVar4 = (code *)swi(3);
    bVar3 = (*pcVar4)();
    return bVar3;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_get_OutputConnectorOffset(Vector3 *__return_storage_ptr__,CollectTheItemDropOff *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 3.5;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Void set_InputSignalReceiver(IInputSignalReceiver) */

void Assembly-CSharp.dll::CollectTheItemDropOff::CollectTheItemDropOff_set_InputSignalReceiver(CollectTheItemDropOff *this,IInputSignalReceiver *value,MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._InputSignalReceiver_k__BackingField = value;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  return;
}

