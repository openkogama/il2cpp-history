
/* Void Dequeue(Int32) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_Dequeue
               (MVNetworkGame_LogicEventQueue *this,int32_t timestamp,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).logicEvents;
  if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
            Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                      (this_00,timestamp,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return;
    }
    pDVar2 = (this->fields).logicEvents;
    if (pDVar2 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
      this_01 = (Queue_1_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                Object]::Dictionary_2_System_Int32_System_Object__get_Item
                          ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,timestamp,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                          );
      pDVar2 = (this->fields).logicEvents;
      if ((pDVar2 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) &&
         (mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar2,timestamp,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Remove_int_
                    ), this_01 != (Queue_1_System_Object_ *)0x0)) {
        while (0 < (this_01->fields)._size) {
          photonEvent = (EventData *)
                        mscorlib.dll::System::Collections::Generic::Queue`1[System::Object]::
                        Queue_1_System_Object__Dequeue
                                  (this_01,
                                   MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Dequeue__
                                  );
          MVNetworkGame_LogicEventQueue_HandleEvent(this,photonEvent,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Enqueue(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_Enqueue
               (MVNetworkGame_LogicEventQueue *this,EventData *eventData,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (eventData != (EventData *)0x0) {
    pOVar1 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                       (eventData,0x23,(MethodInfo *)0x0);
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar1,lRam_?);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)(this->fields).logicEvents;
      key = *(int32_t *)&pOVar1[1].klass;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        iVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                          (this_00,key,
                           MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__ContainsKey_int_
                           ->klass->rgctx_data[0x21].method);
        if (iVar3 < 0) {
          pDVar4 = (this->fields).logicEvents;
          this_01 = (Stack_1_System_Object_ *)
                    FUN_?(
                                 TypeInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>
                                 );
          mscorlib.dll::System::Collections::Generic::Stack`1[System::Object]::
          Stack_1_System_Object___ctor
                    (this_01,
                     MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Queue__
                    );
          if (pDVar4 == (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0)
          goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__TryInsert
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,(Object *)this_01,
                     CONCAT31((int3)((uint)in_R9D >> 8),2),
                     MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Add_int__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>_
                     ->klass->rgctx_data[0x22].method);
        }
        pDVar4 = (this->fields).logicEvents;
        if (pDVar4 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
          pOVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar4,key,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Item_int_
                             );
          if (pOVar1 != (Object *)0x0) {
            if (pOVar1[1].klass != (Object__Class *)0x0) {
              if (*(int *)&pOVar1[2].klass == *(int *)&((pOVar1[1].klass)->_0).namespaze) {
                pOVar5 = pOVar1[1].klass;
                iVar6 = *(int *)&(pOVar5->_0).namespaze * 2;
                if (iVar6 < *(int *)&(pOVar5->_0).namespaze + 4) {
                  iVar6 = *(int *)&(pOVar5->_0).namespaze + 4;
                }
                FUN_?(pOVar1,iVar6,
                              MethodInfo__System__Collections__Generic__Queue<ExitGames::Client::Photon::EventData>__Enqueue_ExitGames__Client__Photon__EventData_
                              ->klass->rgctx_data[5].rgctxDataDummy);
              }
              if (pOVar1[1].klass != (Object__Class *)0x0) {
                FUN_?(pOVar1[1].klass,(longlong)*(int *)((longlong)&pOVar1[1].monitor + 4),
                              eventData);
                if (pOVar1[1].klass != (Object__Class *)0x0) {
                  iVar7 = *(int *)((longlong)&pOVar1[1].monitor + 4) + 1;
                  iVar6 = 0;
                  if (iVar7 != *(int *)&((pOVar1[1].klass)->_0).namespaze) {
                    iVar6 = iVar7;
                  }
                  *(int *)((longlong)&pOVar1[1].monitor + 4) = iVar6;
                  *(int *)&pOVar1[2].klass = *(int *)&pOVar1[2].klass + 1;
                  piVar8 = (int *)((longlong)&pOVar1[2].klass + 4);
                  *piVar8 = *piVar8 + 1;
                  return;
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
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void HandleEvent(EventData) */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_HandleEvent
               (MVNetworkGame_LogicEventQueue *this,EventData *photonEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CollectTheItemDropOff);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IIsLogicObjectFiringEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__Common__MVEventCodes);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unknown_logic_event__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (photonEvent == (EventData *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uVar2 = (photonEvent->fields).Code;
  if (uVar2 == 0x50) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    pOVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                        (photonEvent,0x16,(MethodInfo *)0x0);
    if ((pMVar3 != (MVWorldObjectClientManager *)0x0) && (pOVar4 != (Object *)0x0)) {
      if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
        FUN_?(pOVar4,lRam_?);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar3,*(int32_t *)&pOVar4[1].klass,(MethodInfo *)0x0);
      pOVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                          (photonEvent,0xcc,(MethodInfo *)0x0);
      pIVar6 = TypeInfo__IIsLogicObjectFiringEventHandler;
      if (pMVar5 != (MVWorldObjectClient *)0x0) {
        lVar7 = FUN_?(pMVar5,TypeInfo__IIsLogicObjectFiringEventHandler);
        pIVar8 = TypeInfo__IIsLogicObjectFiringEventHandler;
        if (lVar7 == 0) {
          FUN_?(pMVar5,pIVar6);
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        if (pOVar4 != (Object *)0x0) {
          if ((pOVar4->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
          {
            FUN_?(pOVar4);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          bVar9 = *(byte *)&pOVar4[1].klass;
          plVar10 = (longlong *)FUN_?(pMVar5,TypeInfo__IIsLogicObjectFiringEventHandler);
          if (plVar10 == (longlong *)0x0) {
            FUN_?(pMVar5,pIVar8);
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
          uVar11 = (ulonglong)bVar9;
          uVar12 = 0;
          lVar7 = *plVar10;
          if (*(ushort *)(lVar7 + 0x12e) != 0) {
            uVar11 = *(ulonglong *)(lVar7 + 0xb0);
            do {
              if (*(IIsLogicObjectFiringEventHandler__Class **)(uVar11 + (ulonglong)uVar12 * 0x10)
                  == TypeInfo__IIsLogicObjectFiringEventHandler) {
                puVar13 = (undefined8 *)
                          ((longlong)*(int *)(uVar11 + 8 + (ulonglong)uVar12 * 0x10) * 0x10 + 0x138
                          + lVar7);
                goto code_?;
              }
              uVar12 = uVar12 + 1;
            } while (uVar12 < *(ushort *)(lVar7 + 0x12e));
          }
          puVar13 = (undefined8 *)
                    FUN_?(plVar10,TypeInfo__IIsLogicObjectFiringEventHandler,0,uVar11);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)*puVar13)(plVar10,bVar9,puVar13[1],(code *)*puVar13);
          return;
        }
      }
    }
    goto code_?;
  }
  if (uVar2 != 0x52) {
    pEStack_14 = (Enum__Class *)CONCAT71(pEStack_14._1_7_,uVar2);
    auStack_15 = (undefined1  [8])TypeInfo__MV__Common__MVEventCodes;
    pMStack_16 = (MonitorData *)0xffffffffffffffff;
    pSVar17 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)auStack_15,(MethodInfo *)0x0);
    pSVar17 = mscorlib.dll::System::String::String_Concat_4
                        (StringLiteral_Unknown_logic_event__,pSVar17,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar18 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar18 != (ILogger_1 *)0x0) {
      pEStack_14 = (Enum__Class *)pSVar17;
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar18,0);
      return;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pOVar4 = Photon3Unity3D.dll::ExitGames::Client::Photon::EventData::EventData_get_Item
                      (photonEvent,0x48,(MethodInfo *)0x0);
  pIVar19 = TypeInfo__System__Int32;
  if (pOVar4 == (Object *)0x0) goto code_?;
  lVar7 = FUN_?(pOVar4,TypeInfo__System__Int32);
  if (lVar7 == 0) {
    FUN_?(pOVar4,pIVar19);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if ((*(int *)(lVar7 + 0x18) == 0) ||
     (iVar20 = *(int32_t *)(lVar7 + 0x20), *(uint *)(lVar7 + 0x18) < 2)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  id = *(int32_t *)(lVar7 + 0x24);
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
     (this_01 = (CollectTheItemDropOff *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                          (pMVar3,id,(MethodInfo *)0x0), this_01 == (CollectTheItemDropOff *)0x0))
  goto code_?;
  bVar9 = (TypeInfo__CollectTheItemDropOff->_1).naturalAligment;
  if (((this_01->klass->_1).naturalAligment < bVar9) ||
     ((CollectTheItemDropOff__Class *)(this_01->klass->_1).typeHierarchy[(ulonglong)bVar9 - 1] !=
      TypeInfo__CollectTheItemDropOff)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                 );
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
  (this_01->fields).sendSignal = 1;
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
  pMVar5 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                      (pMVar3,iVar20,(MethodInfo *)0x0);
  if (pMVar5 != (MVWorldObjectClient *)0x0) {
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    iVar20 = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                       (pMVar3,iVar20,(MethodInfo *)0x0);
    if (iVar20 == -1) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar21 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar21 == (PrefabPool *)0x0) goto code_?;
      original = (pPVar21->fields).collectTheItemParticles;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pCVar22 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                          );
      if (pCVar22 == (Component *)0x0) goto code_?;
      pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          (pCVar22,(MethodInfo *)0x0);
      pTVar24 = (pMVar5->fields).transform;
      if (pTVar24 == (Transform *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      auStack_15 = (undefined1  [8])0x0;
      pMStack_16 = (MonitorData *)((ulonglong)pMStack_16 & 0xffffffff00000000);
      pvVar25 = (pTVar24->fields)._._.m_CachedPtr;
      if (pvVar25 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar24,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar26 = func_?(&UNK_?);
        FUN_?(uVar26,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar25);
      if (pTVar23 == (Transform *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pEStack_14 = (Enum__Class *)auStack_15;
      fStack_27 = pMStack_16._0_4_;
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar25 = (pTVar23->fields)._._.m_CachedPtr;
      if (pvVar25 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar23,(MethodInfo *)0x0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcVar1 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
        uVar26 = func_?(&UNK_?);
        FUN_?(uVar26,0);
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pcRam_? = pcVar1;
      (*pcRam_?)(pvVar25);
      pAVar28 = (this_01->fields).OnPickupCollected;
      if (pAVar28 != (Action_1_Boolean_ *)0x0) {
        bVar29 = CollectTheItemDropOff::CollectTheItemDropOff_get_DoOnce(this_01,(MethodInfo *)0x0);
        (*(pAVar28->fields)._._.invoke_impl)
                  ((pAVar28->fields)._._.method_code,bVar29 ^ 1,(pAVar28->fields)._._.method);
      }
    }
    pGVar30 = (pMVar5->fields).gameObject;
    if (pGVar30 == (GameObject *)0x0) {
code_?:
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pOVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar30,
                         MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                        );
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
    if (pOVar4 != (Object *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pMVar31 = 
      MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__;
      if (pOVar4[1].klass != (Object__Class *)0x0) {
        pGVar30 = (pMVar5->fields).gameObject;
        if (pGVar30 == (GameObject *)0x0) goto code_?;
        if ((
            MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(
                       MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<MVPickupOwner>__
                       );
        }
        pOVar32 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_3
                            (pGVar30,0,((pMVar31->field7_0x38).rgctx_data)->method);
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
        if (pOVar32 != (Object *)0x0) {
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (pOVar32[1].klass != (Object__Class *)0x0) {
            this_00 = pOVar32[5].klass;
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
                pCVar33 = (Component__Class *)(this_00->_0).image;
                bVar9 = (TypeInfo__PickupItemCollectTheItem->_1).naturalAligment;
                if ((bVar9 <= (pCVar33->_1).naturalAligment) &&
                   ((pCVar33->_1).typeHierarchy[(ulonglong)bVar9 - 1] ==
                    (Il2CppClass *)TypeInfo__PickupItemCollectTheItem)) {
                  pOVar34 = pOVar4->klass;
                  uVar26._0_2_ = pOVar34[1]._0.byval_arg.attrs;
                  uVar26._2_1_ = pOVar34[1]._0.byval_arg.type;
                  uVar26._3_5_ = *(undefined5 *)&pOVar34[1]._0.byval_arg.field_0xb;
                  (*(code *)pOVar34[1]._0.byval_arg.data)(pOVar4,uVar26);
                  lVar7 = FUN_?();
                  if (lVar7 != 0) {
                    pOVar4 = *(Object **)(lVar7 + 0x470);
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    pCVar22 = (Component *)
                              UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_Instantiate_4
                                        (pOVar4,
                                         UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::ParticleSystem>_UnityEngine__ParticleSystem_
                                        );
                    if (pCVar22 != (Component *)0x0) {
                      pTVar24 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform(pCVar22,(MethodInfo *)0x0);
                      pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
                      if (pTVar23 != (Transform *)0x0) {
                        pVVar35 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_position
                                            ((Vector3 *)auStack_15,pTVar23,(MethodInfo *)0x0);
                        if (pTVar24 == (Transform *)0x0) {
                          FUN_?();
                          pcVar1 = (code *)swi(3);
                          (*pcVar1)();
                          return;
                        }
                        pEStack_14._0_4_ = pVVar35->x;
                        pEStack_14._4_4_ = pVVar35->y;
                        fStack_27 = pVVar35->z;
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        pvVar25 = (pTVar24->fields)._._.m_CachedPtr;
                        if (pvVar25 != (void *)0x0) {
                          pcVar1 = pcRam_?;
                          if ((pcRam_? == (code *)0x0) &&
                             (pcVar1 = (code *)FUN_?(&UNK_?),
                             pcVar1 == (code *)0x0)) {
                            uVar26 = func_?(&UNK_?);
                            FUN_?(uVar26,0);
                            pcVar1 = (code *)swi(3);
                            (*pcVar1)();
                            return;
                          }
                          pcRam_? = pcVar1;
                          (*pcRam_?)(pvVar25);
                          pAVar28 = (this_01->fields).OnPickupCollected;
                          if (pAVar28 == (Action_1_Boolean_ *)0x0) {
                            return;
                          }
                          bVar29 = CollectTheItemDropOff::CollectTheItemDropOff_get_DoOnce
                                             (this_01,(MethodInfo *)0x0);
                          (*(pAVar28->fields)._._.invoke_impl)
                                    ((pAVar28->fields)._._.method_code,bVar29 ^ 1,
                                     (pAVar28->fields)._._.method);
                          return;
                        }
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar24,(MethodInfo *)0x0);
                        pcVar1 = (code *)swi(3);
                        (*pcVar1)();
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


/* MVNetworkGame+LogicEventQueue() */

void Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue__ctor
               (MVNetworkGame_LogicEventQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *
            )FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__Dictionary__
            );
  bVar1 = iRam_? != 0;
  (this->fields).logicEvents =
       (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&this->fields >> 0xc);
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


/* Int32 get_Count() */

int32_t Assembly-CSharp.dll::MVNetworkGame+LogicEventQueue::MVNetworkGame_LogicEventQueue_get_Count
                  (MVNetworkGame_LogicEventQueue *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_System::Collections::Generic::Queue<ExitGames::Client::Photon::EventData>_>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).logicEvents;
  if (pDVar1 != (Dictionary_2_System_Int32_Queue_1_ExitGames_Client_Photon_EventData_ *)0x0) {
    return (pDVar1->fields)._count - (pDVar1->fields)._freeCount;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

