
/* Void Callback(Boolean, Boolean, LogicObjectManager) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_Callback
               (MVPressurePlate *this,bool b,bool wasHot,LogicObjectManager *logicObjectManager,
               MethodInfo *method)

{
  pOVar1 = (this->fields).outputSignalTransmitter;
  if (pOVar1 == (OutputSignalTransmitter *)0x0) {
    auStack_2._8_8_ = &UNK_?;
    FUN_?(this,CONCAT71(in_register_00000011,b));
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar4 = (this->fields).isDown;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputSignalReceiver);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ILogicWorldObject);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (((pMVar5 == (MVWorldObjectClientManager *)0x0) ||
      (pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                           (pMVar5,(pOVar1->fields).woId,(MethodInfo *)0x0),
      pMVar6 == (MVWorldObjectClient *)0x0)) ||
     (auStack_2._0_8_ = (pMVar6->fields)._.outputLinkRefs,
     (List_1_MV_WorldObject_Link_ *)auStack_2._0_8_ == (List_1_MV_WorldObject_Link_ *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&uStack_8 >> 0xc);
    puVar9 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar9;
      LOCK();
      uVar11 = *puVar9;
      if (uVar10 == uVar11) {
        *puVar9 = uVar10 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar11);
  }
  puStack_12 = (undefined1 *)
               ((ulonglong)
                (uint)(((List_1_MV_WorldObject_Link_ *)auStack_2._0_8_)->fields)._version << 0x20);
  uStack_13 = 0;
  auStack_2._8_8_ = puStack_12;
  pOStack_14 = (Object *)0x0;
  uStack_8 = 0;
  puStack_12 = auStack_2;
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
             List_1_T_Enumerator_System_Object__MoveNext
                       ((List_1_T_Enumerator_System_Object_ *)auStack_2,
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::Link>__MoveNext__
                       );
    pOVar16 = pOStack_14;
    if (bVar15 == 0) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar17 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar17 == (MVGameControllerBase *)0x0) goto code_?;
    pMVar18 = (pMVar17->fields).game;
    if (pMVar18 == (MVNetworkGame *)0x0) break;
    pMVar5 = (MVWorldObjectClientManager *)0x0;
    if ((pMVar18->fields).worldNetwork != (WorldNetwork *)0x0) {
      pMVar5 = (MVWorldObjectClientManager *)
                (((pMVar18->fields).worldNetwork)->fields)._.worldObjectClientManager;
    }
    if (pOVar16 == (Object *)0x0) {
code_?:
      FUN_?();
      break;
    }
    if (pMVar5 == (MVWorldObjectClientManager *)0x0) {
code_?:
      FUN_?();
      goto code_?;
    }
    pMVar6 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                        (pMVar5,*(int32_t *)&pOVar16[1].monitor,(MethodInfo *)0x0);
    pIVar19 = TypeInfo__ILogicWorldObject;
    if (pMVar6 == (MVWorldObjectClient *)0x0) {
      FUN_?();
code_?:
      FUN_?();
code_?:
      uVar20 = FUN_?(pMVar6,unaff_RSI);
code_?:
      FUN_?(uVar20,pIVar19);
      goto code_?;
    }
    lVar21 = FUN_?(pMVar6,TypeInfo__ILogicWorldObject);
    unaff_RSI = TypeInfo__ILogicWorldObject;
    uVar20 = extraout_XMM0_Da;
    if (lVar21 == 0) goto code_?;
    pIVar19 = (ILogicWorldObject__Class *)FUN_?(pMVar6,TypeInfo__ILogicWorldObject);
    if (pIVar19 == (ILogicWorldObject__Class *)0x0) goto code_?;
    pIVar22 = (pIVar19->_0).image;
    uVar23 = 0;
    uVar24 = *(ushort *)((longlong)&pIVar22[4].nameNoExt + 6);
    if (uVar24 != 0) {
      uVar25 = uVar23;
      do {
        if (*(ILogicWorldObject__Class **)
             (*(longlong *)&pIVar22[2].customAttributeCount + (ulonglong)uVar25 * 0x10) ==
            TypeInfo__ILogicWorldObject) {
          puVar26 = &pIVar22[4].typeCount +
                    (longlong)
                    *(int *)(*(longlong *)&pIVar22[2].customAttributeCount + 8 +
                            (ulonglong)uVar25 * 0x10) * 4;
          goto code_?;
        }
        uVar25 = uVar25 + 1;
      } while (uVar25 < uVar24);
    }
    puVar26 = (uint32_t *)FUN_?(pIVar19,TypeInfo__ILogicWorldObject,0);
code_?:
    plVar27 = (longlong *)(**(code **)puVar26)(pIVar19,*(undefined8 *)(puVar26 + 2));
    pMVar6 = (MVWorldObjectClient *)0x0;
    if (plVar27 == (longlong *)0x0) goto code_?;
    lVar21 = *plVar27;
    if (*(ushort *)(lVar21 + 0x12e) != 0) {
      do {
        if (*(IInputSignalReceiver__Class **)
             (*(longlong *)(lVar21 + 0xb0) + (ulonglong)uVar23 * 0x10) ==
            TypeInfo__IInputSignalReceiver) {
          puVar28 = (undefined8 *)
                    ((longlong)*(int *)(*(longlong *)(lVar21 + 0xb0) + 8 + (ulonglong)uVar23 * 0x10)
                     * 0x10 + 0x138 + lVar21);
          goto code_?;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 < *(ushort *)(lVar21 + 0x12e));
    }
    puVar28 = (undefined8 *)FUN_?(plVar27,TypeInfo__IInputSignalReceiver,0);
code_?:
    (*(code *)*puVar28)(plVar27,bVar4);
    *(bool *)((longlong)&pOVar16[1].monitor + 4) = bVar4;
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_Destroy
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).plateObject;
  if (pMVar1 != (MVPressurePlateObject *)0x0) {
    pTVar2 = (pMVar1->fields).triggerBoxEvents;
    pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
              FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              (pUVar3,(Object *)this,
               MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
               ,(MethodInfo *)0x0);
    if (pTVar2 != (TriggerBoxEvents *)0x0) {
      TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
      pMVar1 = (this->fields).plateObject;
      if (pMVar1 != (MVPressurePlateObject *)0x0) {
        pTVar2 = (pMVar1->fields).triggerBoxEvents;
        pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                  FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (pUVar3,(Object *)this,
                   MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                   ,(MethodInfo *)0x0);
        if (pTVar2 != (TriggerBoxEvents *)0x0) {
          TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                    (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
          pMVar1 = (this->fields).plateObject;
          if (pMVar1 != (MVPressurePlateObject *)0x0) {
            pTVar2 = (pMVar1->fields).triggerBoxEvents;
            pUVar4 = (this->fields).useInteractor;
            pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                      FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
            Object]::UnityAction_2_System_Object_System_Object___ctor
                      (pUVar3,(Object *)pUVar4,
                       MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                       ,(MethodInfo *)0x0);
            if (pTVar2 != (TriggerBoxEvents *)0x0) {
              TriggerBoxEvents::TriggerBoxEvents_remove_TriggerEnter
                        (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
              pMVar1 = (this->fields).plateObject;
              if (pMVar1 != (MVPressurePlateObject *)0x0) {
                pTVar2 = (pMVar1->fields).triggerBoxEvents;
                pUVar4 = (this->fields).useInteractor;
                pUVar3 = (UnityAction_2_System_Object_System_Object_ *)
                          FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System
                ::Object]::UnityAction_2_System_Object_System_Object___ctor
                          (pUVar3,(Object *)pUVar4,
                           MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                           ,(MethodInfo *)0x0);
                if (pTVar2 != (TriggerBoxEvents *)0x0) {
                  TriggerBoxEvents::TriggerBoxEvents_remove_TriggerExit
                            (pTVar2,(EventHandler_1_TriggerEventArgs_ *)pUVar3,(MethodInfo *)0x0);
                  pUVar4 = (this->fields).useInteractor;
                  if ((pUVar4 != (UseInteractor *)0x0) &&
                     (this_00 = (pUVar4->fields).useInteractorVisuals,
                     this_00 != (UseInteractorVisualization *)0x0)) {
                    UseInteractorVisualization::UseInteractorVisualization_DestroyRequirementObjects
                              (this_00,(this->fields)._._._.data,(MethodInfo *)0x0);
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UpdateController);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    UpdateController::UpdateController_RemoveUpdateObject
                              ((IUpdatecontrollerSubscriberUpdate *)this,(MethodInfo *)0x0);
                    if ((this->fields)._.cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
                      CullingSubscriberBase::CullingSubscriberBase_Destroy
                                ((this->fields)._.cullingSubscriberBase,(MethodInfo *)0x0);
                      bVar5 = iRam_? != 0;
                      (this->fields)._.cullingSubscriberBase = (CullingSubscriberBase *)0x0;
                      if (bVar5) {
                        uVar6 = (uint)((ulonglong)&(this->fields)._.cullingSubscriberBase >> 0xc);
                        puVar7 = (ulonglong *)
                                 ((ulonglong)((uVar6 & 0x1fffff) >> 6) * 8 + 0xADDR);
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
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__UnityEngine__Object,0);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pGVar10 = (this->fields)._._.gameObject;
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
                    if (pGVar10 != (GameObject *)0x0) {
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if ((pGVar10->fields)._.m_CachedPtr != (void *)0x0) {
                        pGVar10 = (this->fields)._._.gameObject;
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
                        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
                                  ((Object_1 *)pGVar10,0.0,(MethodInfo *)0x0);
                      }
                    }
                    if ((this->fields)._._.initializedFromInventory != 0) {
                      return;
                    }
                    if (cRam_? == '\0') {
                      FUN_?(&TypeInfo__MVGameControllerBase);
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
                    if ((pMVar11 != (MVGameControllerBase *)0x0) &&
                       (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) {
                      pRVar13 = (pMVar12->fields).runtimeVariableNetworkManager;
                      item = (this->fields)._._._.id;
                      if (pRVar13 != (RuntimeVariableNetworkManager *)0x0) {
                        if (cRam_? == '\0') {
                          FUN_?(&
                                        MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                       );
                          LOCK();
                          UNLOCK();
                          cRam_? = '\x01';
                        }
                        this_01 = (HashSet_1_System_Int32Enum_ *)
                                  (pRVar13->fields).runtimeDataVariables;
                        if (this_01 != (HashSet_1_System_Int32Enum_ *)0x0) {
                          bVar14 = System.Core.dll::System::Collections::Generic::HashSet`1[System::
                                   Int32Enum]::HashSet_1_System_Int32Enum__Contains
                                             (this_01,item,
                                              MethodInfo__System__Collections__Generic__HashSet<int>__Contains_int_
                                             );
                          if (bVar14 != 0) {
                            pMVar12 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            if ((pMVar12 == (MVNetworkGame *)0x0) ||
                               (pRVar13 = (pMVar12->fields).runtimeVariableNetworkManager,
                               pRVar13 == (RuntimeVariableNetworkManager *)0x0)) goto DAT_?;
                            RuntimeVariableNetworkManager::
                            RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                                      (pRVar13,(this->fields)._._._.id,(MethodInfo *)0x0);
                          }
                          return;
                        }
                      }
                    }
DAT_?:
                    FUN_?();
                    pcVar15 = (code *)swi(3);
                    (*pcVar15)();
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
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Boolean DoEnter(Int32) */

bool Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_DoEnter
               (MVPressurePlate *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields).operationRequests,
     this_00 != (MVNetworkGame_OperationRequests *)0x0)) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
              (this_00,(this->fields)._._._.id,instigatorWOID,(MethodInfo *)0x0);
    (this->fields).localIsDown = 1;
    return 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void DoExit(Int32) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_DoExit
               (MVPressurePlate *this,int32_t instigatorWOID,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 == (MVGameControllerBase *)0x0) ||
      (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
     (pMVar3 = (pMVar2->fields).operationRequests, pMVar3 == (MVNetworkGame_OperationRequests *)0x0)
     ) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  iVar5 = (this->fields)._._._.id;
  uVar6 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  ,iVar5,instigatorWOID,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Int32);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar1 != (MVGameControllerBase *)0x0) {
    if ((pMVar1->fields)._joinState != 3) {
      return;
    }
    this_00 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_00,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    uVar7 = 0;
    value = (Object *)FUN_?(TypeInfo__System__Int32,2);
    if (value != (Object *)0x0) {
      if ((*(int *)&value[1].monitor == 0) ||
         (*(int32_t *)&value[2].klass = iVar5, *(uint *)&value[1].monitor < 2)) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(int32_t *)((longlong)&value[2].klass + 4) = instigatorWOID;
      if (this_00 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        uVar7 = CONCAT71((int7)((ulonglong)uVar7 >> 8),0x17);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__TryInsert
                  (this_00,0x17,value,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar6 >> 8),2),
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                   ->klass->rgctx_data[0x22].method);
        pPVar8 = (pMVar3->fields).peer;
        if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
        }
        if (pPVar8 != (PhotonPeer *)0x0) {
          (*(pPVar8->klass->vtable).SendOperation.methodPtr)
                    (pPVar8,CONCAT71((int7)((ulonglong)uVar7 >> 8),0x14),this_00,
                     TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                     (pPVar8->klass->vtable).SendOperation.method);
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Vector3 GetClosestGridPoint(Single, Vector3) */

Vector3 * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_GetClosestGridPoint
                    (Vector3 *__return_storage_ptr__,MVPressurePlate *this,float gridSize,
                    Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_2.x = (pVVar1->oneVector).x;
  VStack_2.y = (pVVar1->oneVector).y;
  fVar3 = (pVVar1->oneVector).z;
  fVar4 = VStack_2.x * TypeRef__System__Activator__T._0_4_;
  fVar5 = VStack_2.y + VStack_2.y;
  this_00 = (this->fields)._._.gameObject;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    QStack_6.x = 0.0;
    QStack_6.y = 0.0;
    QStack_6.z = 0.0;
    QStack_6.w = 0.0;
    pvVar7 = (obj->fields)._._.m_CachedPtr;
    if (pvVar7 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcVar8 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar8 = (code *)swi(3);
      pVVar9 = (Vector3 *)(*pcVar8)();
      return pVVar9;
    }
    pcRam_? = pcVar8;
    (*pcRam_?)(pvVar7,&QStack_6);
    if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
      FUN_?();
    }
    VStack_2.z = position->z;
    VStack_2.x = position->x;
    VStack_2.y = position->y;
    aQStack_11[0].x = QStack_6.x;
    aQStack_11[0].y = QStack_6.y;
    aQStack_11[0].z = QStack_6.z;
    aQStack_11[0].w = QStack_6.w;
    VStack_12.y = fVar5;
    VStack_12.x = fVar4;
    VStack_12.z = fVar3 + fVar3;
    pVVar9 = SharedCubeFunctions::SharedCubeFunctions_GetClosestGridPoint
                       ((Vector3 *)&QStack_6,&VStack_2,aQStack_11,gridSize,&VStack_12,
                        (MethodInfo *)0x0);
    fVar5 = pVVar9->y;
    fVar3 = pVVar9->z;
    __return_storage_ptr__->x = pVVar9->x;
    __return_storage_ptr__->y = fVar5;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Bounds GetLocalBounds(BoundsContext) */

Bounds * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_GetLocalBounds
                   (Bounds *__return_storage_ptr__,MVPressurePlate *this,
                   BoundsContext__Enum boundsContext,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  uVar2 = _UNK_?;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar3->zeroVector).y;
  fVar5 = (pVVar3->zeroVector).z;
  (__return_storage_ptr__->m_Center).x = (pVVar3->zeroVector).x;
  (__return_storage_ptr__->m_Center).y = fVar4;
  (__return_storage_ptr__->m_Center).z = fVar5;
  (__return_storage_ptr__->m_Extents).x = fVar1;
  (__return_storage_ptr__->m_Extents).y = (float)uVar2;
  (__return_storage_ptr__->m_Extents).z = fVar1;
  return __return_storage_ptr__;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_Initialize
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPressurePlate__Callback_bool__bool__LogicObjectManager_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__OutputSignalTransmitter);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_triggerBoxState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVLogicObject::MVLogicObject_Initialize((MVLogicObject *)this,(MethodInfo *)0x0);
  signalCallback =
       (Action_3_Boolean_Boolean_LogicObjectManager_ *)
       FUN_?(TypeInfo__System__Action<bool,_bool,_LogicObjectManager>);
  FUN_?(signalCallback,this,
                MethodInfo__MVPressurePlate__Callback_bool__bool__LogicObjectManager_);
  pIVar1 = LogicClientsideFactory::LogicClientsideFactory_CreateInputSignalReceiver
                     ((MVWorldObject *)this,1,signalCallback,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._InputSignalReceiver_k__BackingField = pIVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._InputSignalReceiver_k__BackingField >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  iVar7 = (this->fields)._._._.id;
  pOVar8 = (OutputSignalTransmitter *)FUN_?(TypeInfo__OutputSignalTransmitter);
  bVar2 = iRam_? != 0;
  (pOVar8->fields).woId = iVar7;
  (this->fields).outputSignalTransmitter = pOVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).outputSignalTransmitter >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  pUVar9 = (this->fields).useInteractor;
  if ((pUVar9 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar9->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) goto code_?;
  UseInteractorVisualization::UseInteractorVisualization_UpdateData
            (this_00,(this->fields)._._._.data,(pUVar9->fields).woOwnerID,(MethodInfo *)0x0);
  MVPressurePlate_SetVisibility(this,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField ==
        (IEditModeUI *)0x0) &&
      (cVar10 = (*(this->klass->vtable).get_HasVisualsInPlaymode.methodPtr)(this), cVar10 != '\0')) &&
     (bVar11 = MVPressurePlate_IsVisible(this,(MethodInfo *)0x0), bVar11 != 0)) {
code_?:
    pMVar12 = (this->fields).plateObject;
    if (pMVar12 == (MVPressurePlateObject *)0x0) goto code_?;
    MVLogicObject::MVLogicObject_SetupCulling
              ((MVLogicObject *)this,(pMVar12->fields).plateLogicModel,
               TypeRef__System__Activator__T._0_4_,(MethodInfo *)0x0);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField !=
        (IEditModeUI *)0x0) goto code_?;
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              (*(this->klass->vtable).get_RunTimeData.methodPtr)
                        (this,(this->klass->vtable).get_RunTimeData.method);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar13 = Extensions::Extensions_GetObscuredType
                      (hashtable,StringLiteral_triggerBoxState,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (pOVar13 != (Object *)0x0) {
    if ((pOVar13->klass->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_0).element_class) {
      FUN_?(pOVar13,TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    apOStack_15[0] = pOVar13[1].klass;
    apOStack_15[1]._0_4_ = *(undefined4 *)&pOVar13[1].monitor;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredBool->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    bVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredBool::
            ObscuredBool_InternalDecrypt((ObscuredBool *)apOStack_15,(MethodInfo *)0x0);
    (this->fields).isDown = bVar11;
    return;
  }
code_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_InitializeInventory
               (MVPressurePlate *this,MethodInfo *method)

{
  MVLogicObject::MVLogicObject_InitializeInventory((MVLogicObject *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).plateObject;
  if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
     (obj = (pMVar1->fields).plateLogicModel, obj == (GameObject *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                  ,0,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (GameObject *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar3,0);
  return;
}


/* Boolean IsVisible() */

bool Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_IsVisible
               (MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_hide);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields)._._._.data;
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    iVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::StyleComplexSelector+PseudoStateData]::
            Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                      (this_00,(Object *)StringLiteral_hide,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       ->klass->rgctx_data[0x21].method);
    if (iVar1 < 0) {
      return 1;
    }
    this_01 = (this->fields)._._._.data;
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
               Object]::Dictionary_2_System_Object_System_Object__get_Item
                         (this_01,(Object *)StringLiteral_hide,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pOVar2 != (Object *)0x0) {
        if ((pOVar2->klass->_0).element_class == *(Il2CppClass **)(lRam_? + 0x40)) {
          return *(char *)&pOVar2[1].klass == '\0';
        }
        FUN_?(pOVar2,lRam_?);
        pcVar3 = (code *)swi(3);
        bVar4 = (*pcVar3)();
        return bVar4;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_OnDataUpdate
               (MVPressurePlate *this,MethodInfo *method)

{
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 == (UseInteractor *)0x0) ||
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 == (UseInteractorVisualization *)0x0)
     ) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  UseInteractorVisualization::UseInteractorVisualization_UpdateData
            (this_00,(this->fields)._._._.data,(pUVar1->fields).woOwnerID,(MethodInfo *)0x0);
  pMVar3 = (this->fields).plateObject;
  if (pMVar3 != (MVPressurePlateObject *)0x0) {
    pRVar4 = (pMVar3->fields)._.meshRenderers;
    uVar5 = 0;
    if (pRVar4 != (Renderer__Array *)0x0) {
      ppRVar6 = pRVar4->vector;
      while( true ) {
        if ((int)pRVar4->max_length <= (int)uVar5) {
          return;
        }
        if ((uint)pRVar4->max_length <= uVar5) {
          FUN_?();
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        obj = *ppRVar6;
        if (obj == (Renderer *)0x0) break;
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
        pvVar7 = (obj->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        pvVar7 = (void *)(*pcRam_?)(pvVar7);
        obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                 Unmarshal_UnmarshalUnityObject
                           (pvVar7,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
        MVPressurePlate_IsVisible(this,(MethodInfo *)0x0);
        if (obj_00 == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar9 = obj_00[1].klass;
        if (pOVar9 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcVar2 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        pcRam_? = pcVar2;
        (*pcRam_?)(pOVar9);
        uVar5 = uVar5 + 1;
        ppRVar6 = ppRVar6 + 1;
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnIsFiringChanged(Boolean) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_OnIsFiringChanged
               (MVPressurePlate *this,bool isFiring,MethodInfo *method)

{
  (this->fields).isDown = isFiring;
  if ((isFiring == 0) && ((this->fields).localIsDown != 0)) {
    (this->fields).localIsDown = 0;
  }
  return;
}


/* Void OnUpdate() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_OnUpdate
               (MVPressurePlate *this,MethodInfo *method)

{
  if (((this->fields).isDown == 0) && ((this->fields).localIsDown == 0)) {
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      uStack_4 = 0;
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
      if (0.0 <= uStack_3._4_4_) {
        return;
      }
      pMVar1 = (this->fields).plateObject;
      if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
         (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if ((pTVar2->fields)._._.m_CachedPtr == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
        (*pcRam_?)();
        fVar8 = (this->fields).speed;
        uStack_3 = 0;
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_smoothDeltaTime
                          ((MethodInfo *)0x0);
        pMVar1 = (this->fields).plateObject;
        fVar9 = fVar9 * fVar8;
        if (_UNK_? <= fVar9) {
          fVar9 = _UNK_?;
        }
        uStack_3 = CONCAT44(fVar9 + 0.0,(undefined4)uStack_3);
        if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
           (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0)) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_10 = uStack_3;
        uStack_11 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
        puVar12 = &uStack_10;
code_?:
        (*pcRam_?)(pvVar5,puVar12);
        return;
      }
    }
  }
  else {
    pMVar1 = (this->fields).plateObject;
    if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
       (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_3 = 0;
      uStack_4 = 0;
      pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
      if (pvVar5 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
      pfVar13 = &(this->fields).minY;
      if (uStack_3._4_4_ < *pfVar13 || uStack_3._4_4_ == *pfVar13) {
        return;
      }
      pMVar1 = (this->fields).plateObject;
      if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
         (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
        fVar8 = (this->fields).speed;
        uStack_10 = 0;
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
        fVar9 = (float)(*pcRam_?)();
        fVar9 = fVar9 * fVar8;
        fVar8 = 0.0 - (this->fields).minY;
        pMVar1 = (this->fields).plateObject;
        if (fVar8 <= fVar9) {
          fVar9 = fVar8;
        }
        uStack_10 = CONCAT44(0.0 - fVar9,(undefined4)uStack_10);
        if ((pMVar1 == (MVPressurePlateObject *)0x0) ||
           (pTVar2 = (pMVar1->fields).plateModelTransform, pTVar2 == (Transform *)0x0)) {
          FUN_?();
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        uStack_3 = uStack_10;
        uStack_4 = 0;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar5 = (pTVar2->fields)._._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar2,(MethodInfo *)0x0);
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
        puVar12 = &uStack_3;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void SetVisibility() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_SetVisibility
               (MVPressurePlate *this,MethodInfo *method)

{
  pMVar1 = (this->fields).plateObject;
  if (pMVar1 != (MVPressurePlateObject *)0x0) {
    pRVar2 = (pMVar1->fields)._.meshRenderers;
    uVar3 = 0;
    if (pRVar2 != (Renderer__Array *)0x0) {
      ppRVar4 = pRVar2->vector;
      while( true ) {
        if ((int)pRVar2->max_length <= (int)uVar3) {
          return;
        }
        if ((uint)pRVar2->max_length <= uVar3) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        obj = *ppRVar4;
        if (obj == (Renderer *)0x0) break;
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
        pvVar6 = (obj->fields)._._.m_CachedPtr;
        if (pvVar6 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        pvVar6 = (void *)(*pcRam_?)(pvVar6);
        obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                 Unmarshal_UnmarshalUnityObject
                           (pvVar6,
                            UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                           );
        MVPressurePlate_IsVisible(this,(MethodInfo *)0x0);
        if (obj_00 == (Object *)0x0) break;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pOVar8 = obj_00[1].klass;
        if (pOVar8 == (Object__Class *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException(obj_00,(MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar7 = func_?(&UNK_?);
          FUN_?(uVar7,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        (*pcRam_?)(pOVar8);
        uVar3 = uVar3 + 1;
        ppRVar4 = ppRVar4 + 1;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetupTierInventory() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_SetupTierInventory
               (MVPressurePlate *this,MethodInfo *method)

{
  pMVar1 = (this->fields).plateObject;
  if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
     (pGVar2 = (pMVar1->fields).plateLogicModel, pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    (*(this->klass->vtable).HideConnectors.methodPtr)
              (this,(this->klass->vtable).HideConnectors.method);
    pGVar2 = (this->fields)._.lodGameObject;
    if (pGVar2 != (GameObject *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                      ,1,0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar2 == (GameObject *)0x0) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      pvVar4 = (pGVar2->fields)._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar4,1);
      return;
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UnSetupTierInventory() */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_UnSetupTierInventory
               (MVPressurePlate *this,MethodInfo *method)

{
  pMVar1 = (this->fields).plateObject;
  if ((pMVar1 != (MVPressurePlateObject *)0x0) &&
     (this_00 = (pMVar1->fields).plateLogicModel, this_00 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_00,1,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(this->klass->vtable).ShowConnectors.methodPtr)
              (this,(this->klass->vtable).ShowConnectors.method);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVPressurePlate(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate__ctor
               (MVPressurePlate *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__EventHandler<TriggerEventArgs>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Func<int,_bool>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameCoinLogic);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__GameRankRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__LevelBasedUseRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPressurePlateObject);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVPressurePlate__DoEnter_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__StarRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__TeamRequirement);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UseInteractor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).minY = -0.249;
  (this->fields).speed = 1.8;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_2._version = unaff_XMM6_Db;
  LStack_2._index = unaff_XMM6_Da;
  LStack_2._current = (Object *)CONCAT44(unaff_XMM6_Dd,unaff_XMM6_Dc);
  pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar3 == (PrefabPool *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  MVLogicObject::MVLogicObject__ctor
            ((MVLogicObject *)this,data,(ObjectPrefab *)(pPVar3->fields).mvPressurePlatePrefab,
             worldObjects,(MethodInfo *)0x0);
  pMVar5 = (MVPressurePlateObject *)(this->fields)._._.component;
  if (pMVar5 == (MVPressurePlateObject *)0x0) {
    (this->fields).plateObject = (MVPressurePlateObject *)0x0;
  }
  else {
    bVar6 = (TypeInfo__MVPressurePlateObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar5->klass)->_1).naturalAligment < bVar6) ||
       ((((ObjectPrefab__Class *)pMVar5->klass)->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__MVPressurePlateObject)) {
      FUN_?(pMVar5);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    (this->fields).plateObject = pMVar5;
    bVar6 = (TypeInfo__MVPressurePlateObject->_1).naturalAligment;
    if (((((ObjectPrefab__Class *)pMVar5->klass)->_1).naturalAligment < bVar6) ||
       ((((ObjectPrefab__Class *)pMVar5->klass)->_1).typeHierarchy[(ulonglong)bVar6 - 1] !=
        (Il2CppClass *)TypeInfo__MVPressurePlateObject)) {
      FUN_?(pMVar5);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&(this->fields).plateObject >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (ulonglong)(uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  piVar11 = &(this->fields)._._.interactionFlags;
  *piVar11 = *piVar11 | 0x12718000;
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pTVar12 = (pMVar5->fields).triggerBoxEvents;
  pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar13,(Object *)this,
             MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar12 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
            (pTVar12,(EventHandler_1_TriggerEventArgs_ *)pUVar13,(MethodInfo *)0x0);
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pTVar12 = (pMVar5->fields).triggerBoxEvents;
  pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar13,(Object *)this,
             MethodInfo__MVPressurePlate__triggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar12 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
            (pTVar12,(EventHandler_1_TriggerEventArgs_ *)pUVar13,(MethodInfo *)0x0);
  MVPressurePlate_SetVisibility(this,(MethodInfo *)0x0);
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pTVar12 = (pMVar5->fields).triggerBoxEvents;
  pGVar14 = (pMVar5->fields).useInteractionRotator;
  if (pTVar12 == (TriggerBoxEvents *)0x0) goto code_?;
  triggerCollider = TriggerBoxEvents::TriggerBoxEvents_get_Collider(pTVar12,(MethodInfo *)0x0);
  useFunction = (Func_2_Int32_Boolean_ *)FUN_?(TypeInfo__System__Func<int,_bool>);
  FUN_?(useFunction,this,MethodInfo__MVPressurePlate__DoEnter_int_);
  pUVar15 = (UseInteractor *)FUN_?(TypeInfo__UseInteractor);
  UseInteractor::UseInteractor__ctor
            (pUVar15,(MVWorldObjectClient *)this,pGVar14,0,triggerCollider,useFunction,
             (Func_3_Int32_MVInteractableBase_Boolean_ *)0x0,_UNK_?,0,1,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).useInteractor = pUVar15;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&(this->fields).useInteractor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pTVar12 = (pMVar5->fields).triggerBoxEvents;
  pUVar15 = (this->fields).useInteractor;
  pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar13,(Object *)pUVar15,
             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerEnter_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar12 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerEnter
            (pTVar12,(EventHandler_1_TriggerEventArgs_ *)pUVar13,(MethodInfo *)0x0);
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pTVar12 = (pMVar5->fields).triggerBoxEvents;
  pUVar15 = (this->fields).useInteractor;
  pUVar13 = (UnityAction_2_System_Object_System_Object_ *)
            FUN_?(TypeInfo__System__EventHandler<TriggerEventArgs>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
  UnityAction_2_System_Object_System_Object___ctor
            (pUVar13,(Object *)pUVar15,
             MethodInfo__UseInteractor__TriggerBoxEvents_TriggerExit_System__Object__TriggerEventArgs_
             ,(MethodInfo *)0x0);
  if (pTVar12 == (TriggerBoxEvents *)0x0) goto code_?;
  TriggerBoxEvents::TriggerBoxEvents_add_TriggerExit
            (pTVar12,(EventHandler_1_TriggerEventArgs_ *)pUVar13,(MethodInfo *)0x0);
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pGVar14 = (pMVar5->fields).useInteractionRotator;
  pUVar16 = (UseRequirement *)FUN_?(TypeInfo__GameCoinLogic);
  bVar1 = iRam_? != 0;
  pUVar16[1].monitor = (MonitorData *)0x0;
  *(undefined4 *)&pUVar16[1].fields = 0;
  *(undefined4 *)((longlong)&pUVar16[1].klass + 4) = 1;
  *(undefined1 *)&pUVar16[3].klass = 0;
  *(GameObject **)&pUVar16[2].fields = pGVar14;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&pUVar16[2].fields >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar15 = (this->fields).useInteractor;
  if (pUVar15 == (UseInteractor *)0x0) goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar15,pUVar16,(MethodInfo *)0x0);
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pGVar14 = (pMVar5->fields).useInteractionRotator;
  pUVar16 = (UseRequirement *)FUN_?(TypeInfo__LevelBasedUseRequirement);
  bVar1 = iRam_? != 0;
  *(undefined8 *)&pUVar16[1].fields = 0;
  *(undefined4 *)&pUVar16[2].klass = 0;
  *(undefined1 *)((longlong)&pUVar16[1].klass + 4) = 0;
  pUVar16[2].monitor = (MonitorData *)pGVar14;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&pUVar16[2].monitor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar15 = (this->fields).useInteractor;
  if (pUVar15 == (UseInteractor *)0x0) goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar15,pUVar16,(MethodInfo *)0x0);
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pGVar14 = (pMVar5->fields).useInteractionRotator;
  pUVar16 = (UseRequirement *)FUN_?(TypeInfo__StarRequirement);
  bVar1 = iRam_? != 0;
  *(undefined8 *)((longlong)&pUVar16[1].klass + 4) = 0;
  *(undefined4 *)((longlong)&pUVar16[1].monitor + 4) = 0;
  pUVar16[2].fields._IsInputBlocking_k__BackingField = 0;
  pUVar16[2].monitor = (MonitorData *)pGVar14;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&pUVar16[2].monitor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  pUVar15 = (this->fields).useInteractor;
  if (pUVar15 == (UseInteractor *)0x0) goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar15,pUVar16,(MethodInfo *)0x0);
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pGVar14 = (pMVar5->fields).useInteractionRotator;
  this_01 = (GameRankRequirement *)FUN_?(TypeInfo__GameRankRequirement);
  GameRankRequirement::GameRankRequirement__ctor
            (this_01,pGVar14,(MVWorldObjectClient *)this,0,(MethodInfo *)0x0);
  pUVar15 = (this->fields).useInteractor;
  if (pUVar15 == (UseInteractor *)0x0) goto code_?;
  UseInteractor::UseInteractor_AddRequirement(pUVar15,(UseRequirement *)this_01,(MethodInfo *)0x0);
  pMVar5 = (this->fields).plateObject;
  if (pMVar5 == (MVPressurePlateObject *)0x0) goto code_?;
  pPVar17 = (pMVar5->fields).tintObject;
  pOVar18 = (Object *)FUN_?(TypeInfo__TeamRequirement);
  bVar1 = iRam_? != 0;
  *(undefined4 *)&pOVar18[2].klass = 5;
  pOVar18[1].monitor = (MonitorData *)pPVar17;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&pOVar18[1].monitor >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  *(undefined1 *)((longlong)&pOVar18[2].klass + 4) = 0;
  pUVar15 = (this->fields).useInteractor;
  if (pUVar15 == (UseInteractor *)0x0) goto code_?;
  this_00 = (pUVar15->fields).useInteractorVisuals;
  if (this_00 == (UseInteractorVisualization *)0x0) {
code_?:
    LStack_2._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (cRam_? == '\0') {
    LStack_2._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_
                  ,pOVar18,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar19 = MethodInfo__System__Collections__Generic__List<UseRequirement>__Add_UseRequirement_;
  pLVar20 = (this_00->fields).useRequirements;
  if (pLVar20 == (List_1_UseRequirement_ *)0x0) goto code_?;
  piVar21 = &(pLVar20->fields)._version;
  *piVar21 = *piVar21 + 1;
  pUVar22 = (pLVar20->fields)._items;
  if (pUVar22 == (UseRequirement__Array *)0x0) goto code_?;
  uVar7 = (pLVar20->fields)._size;
  if (uVar7 < (uint)pUVar22->max_length) {
    (pLVar20->fields)._size = uVar7 + 1;
    LStack_2._list = (List_1_System_Object_ *)&UNK_?;
    FUN_?(pUVar22,(longlong)(int)uVar7,pOVar18);
  }
  else {
    LStack_2._list = (List_1_System_Object_ *)&UNK_?;
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
    List_1_System_Object__AddWithResize
              ((List_1_System_Object_ *)pLVar20,pOVar18,pMVar19->klass->rgctx_data[0xe].method);
  }
  if ((this_00->fields).hasInputBlockingRequirement == 0) {
    if (pOVar18 == (Object *)0x0) goto code_?;
    LStack_2._list = (List_1_System_Object_ *)&UNK_?;
    cVar23 = (*(code *)pOVar18->klass[1].interfaceOffsets)(pOVar18,pOVar18->klass[1].static_fields);
  }
  else {
    cVar23 = '\x01';
  }
  (this_00->fields).hasInputBlockingRequirement = cVar23 != '\0';
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UseRequirement>__GetEnumerator__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this_00->fields).active = 0;
  (this_00->fields).dist = 1.3;
  pLVar20 = (this_00->fields).useRequirements;
  if (pLVar20 == (List_1_UseRequirement_ *)0x0) {
code_?:
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
code_?:
    FUN_?();
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  LStack_2._8_8_ = (ulonglong)(uint)(pLVar20->fields)._version << 0x20;
  LStack_2._current = (Object *)0x0;
  LStack_2._list = (List_1_System_Object_ *)pLVar20;
  while (bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_2,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), bVar24 != 0) {
    if (LStack_2._current == (Object *)0x0) goto code_?;
    cVar23 = (*(code *)(LStack_2._current)->klass[1]._0.interopData)
                       (LStack_2._current,(LStack_2._current)->klass[1]._0.klass);
    if (cVar23 != '\0') {
      piVar21 = &(this_00->fields).active;
      *piVar21 = *piVar21 + 1;
    }
  }
  if ((this_00->fields).active == 1) {
    (this_00->fields).dist = 0.01;
  }
  bVar1 = (this_00->fields).active == 0;
  if (!bVar1) {
    (this_00->fields).spacing = (float)(int)(0x168 / (longlong)(this_00->fields).active);
    bVar1 = (this_00->fields).active == 0;
  }
  (this_00->fields)._HasUseRequirements_k__BackingField = !bVar1;
  fVar25 = 0.0;
  pLVar20 = (this_00->fields).useRequirements;
  if (pLVar20 == (List_1_UseRequirement_ *)0x0) goto code_?;
  if (iRam_? != 0) {
    uVar7 = (uint)((ulonglong)&stack0xffffffffffffffb8 >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  LStack_2._8_8_ = (ulonglong)(uint)(pLVar20->fields)._version << 0x20;
  LStack_2._current = (Object *)0x0;
  LStack_2._list = (List_1_System_Object_ *)pLVar20;
  while (bVar24 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            (&LStack_2,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UseRequirement>__MoveNext__
                            ), pOVar18 = LStack_2._current, bVar24 != 0) {
    if (LStack_2._current == (Object *)0x0) goto code_?;
    cVar23 = (*(code *)(LStack_2._current)->klass[1]._0.interopData)
                       (LStack_2._current,(LStack_2._current)->klass[1]._0.klass);
    if (cVar23 != '\0') {
      pOVar26 = pOVar18->klass;
      (*(code *)pOVar26[1]._0.fields)
                (pOVar18,&stack0xffffffffffffffa8,fVar25,(this_00->fields).dist,pOVar26[1]._0.events)
      ;
      fVar25 = fVar25 + (this_00->fields).spacing;
    }
  }
  if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) {
    if ((this_00->fields).cullingSubscriberBase == (CullingSubscriberBase *)0x0) {
      UseInteractorVisualization::UseInteractorVisualization_SetupCulling(this_00,(MethodInfo *)0x0)
      ;
      goto code_?;
    }
    if ((this_00->fields)._HasUseRequirements_k__BackingField != 0) goto code_?;
  }
  if ((this_00->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    UseInteractorVisualization::UseInteractorVisualization_RemoveCulling(this_00,(MethodInfo *)0x0);
  }
code_?:
  bVar24 = (this_00->fields)._HasUseRequirements_k__BackingField;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Behaviour>_UnityEngine__Behaviour_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar27 = (this_00->fields)._._._._.m_CachedPtr;
  if (pvVar27 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcVar4 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
    uVar28 = func_?(&UNK_?);
    FUN_?(uVar28,0);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  pcRam_? = pcVar4;
  (*pcRam_?)(pvVar27,bVar24);
  return;
}


/* Vector3 get_OutputConnectorOffset() */

Vector3 * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_get_OutputConnectorOffset
                    (Vector3 *__return_storage_ptr__,MVPressurePlate *this,MethodInfo *method)

{
  __return_storage_ptr__->x = 2.0;
  __return_storage_ptr__->y = 0.25;
  __return_storage_ptr__->z = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 get_WorldPivot() */

Vector3 * Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_get_WorldPivot
                    (Vector3 *__return_storage_ptr__,MVPressurePlate *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__SharedCubeFunctions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.transform;
  if (*(int *)&(TypeInfo__SharedCubeFunctions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pVVar2 = SharedCubeFunctions::SharedCubeFunctions_GetWorldCenter_1
                     (&VStack_3,pTVar1,(MethodInfo *)0x0);
  pTVar1 = (this->fields)._._.transform;
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  if (pTVar1 == (Transform *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar7)();
    return pVVar2;
  }
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
  pvVar10 = (pTVar1->fields)._._.m_CachedPtr;
  if (pvVar10 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar1,(MethodInfo *)0x0);
    pcVar7 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar7)();
    return pVVar2;
  }
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar11 = func_?(&UNK_?);
    FUN_?(uVar11,0);
    pcVar7 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar7)();
    return pVVar2;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(pvVar10,&uStack_8);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar13 = (pVVar12->leftVector).x;
  fVar14 = (float)uVar13 * _UNK_?;
  fVar15 = (pVVar12->leftVector).y * _UNK_?;
  fVar16 = (pVVar12->leftVector).z * _UNK_?;
  fVar17 = uStack_8._4_4_ + uStack_8._4_4_;
  fVar18 = (float)uStack_9 + (float)uStack_9;
  fVar19 = (float)uStack_8 * ((float)uStack_8 + (float)uStack_8);
  fVar20 = uStack_9._4_4_ * ((float)uStack_8 + (float)uStack_8);
  fVar21 = _UNK_? - ((float)uStack_9 * fVar18 + fVar19);
  fVar19 = _UNK_? - (uStack_8._4_4_ * fVar17 + fVar19);
  __return_storage_ptr__->x =
       (_UNK_? - ((float)uStack_9 * fVar18 + uStack_8._4_4_ * fVar17)) * fVar14 +
       ((float)uStack_8 * fVar17 - uStack_9._4_4_ * fVar18) * fVar15 +
       (uStack_9._4_4_ * fVar17 + (float)uStack_8 * fVar18) * fVar16 + (float)uVar4;
  __return_storage_ptr__->y =
       fVar21 * fVar15 + (uStack_9._4_4_ * fVar18 + (float)uStack_8 * fVar17) * fVar14 +
       (uStack_8._4_4_ * fVar18 - fVar20) * fVar16 + (float)uVar5;
  __return_storage_ptr__->z =
       ((float)uStack_8 * fVar18 - uStack_9._4_4_ * fVar17) * fVar14 +
       (fVar20 + uStack_8._4_4_ * fVar18) * fVar15 + fVar19 * fVar16 + fVar6;
  return __return_storage_ptr__;
}


/* Void triggerBoxEvents_TriggerEnter(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_triggerBoxEvents_TriggerEnter
               (MVPressurePlate *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pressure_plate_entered_by_object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar1 = (this->fields).useInteractor;
  if ((pUVar1 != (UseInteractor *)0x0) &&
     (this_00 = (pUVar1->fields).useInteractorVisuals, this_00 != (UseInteractorVisualization *)0x0)
     ) {
    UVar2 = UseInteractorVisualization::UseInteractorVisualization_EvaluateUsability
                      (this_00,(MethodInfo *)0x0);
    if ((UVar2 & (UseGUIResult__Enum_CannotAfford|UseGUIResult__Enum_CanAfford)) != 0) {
      return;
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if ((e != (TriggerEventArgs *)0x0) && (this_02 != (MVWorldObjectClientManager *)0x0)) {
      triggerInstigatorId =
           MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                     (this_02,(e->fields).instigatorWOID,(MethodInfo *)0x0);
      if (triggerInstigatorId == -1) {
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = StringLiteral_Pressure_plate_entered_by_object;
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
        pIVar4 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
        if (pIVar4 == (ILogger_1 *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar4,0,pSVar3);
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar6 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (((pMVar6 != (MVGameControllerBase *)0x0) &&
          (pMVar7 = (pMVar6->fields).game, pMVar7 != (MVNetworkGame *)0x0)) &&
         (this_01 = (pMVar7->fields).operationRequests,
         this_01 != (MVNetworkGame_OperationRequests *)0x0)) {
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_TriggerBoxEnter
                  (this_01,(this->fields)._._._.id,triggerInstigatorId,(MethodInfo *)0x0);
        (this->fields).localIsDown = 1;
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void triggerBoxEvents_TriggerExit(Object, TriggerEventArgs) */

void Assembly-CSharp.dll::MVPressurePlate::MVPressurePlate_triggerBoxEvents_TriggerExit
               (MVPressurePlate *this,Object *sender,TriggerEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((e != (TriggerEventArgs *)0x0) && (this_00 != (MVWorldObjectClientManager *)0x0)) {
    iVar1 = MVWorldObjectClientManager::
            MVWorldObjectClientManager_GetWoIDWithLocalOwnerHighestInHierarchy
                      (this_00,(e->fields).instigatorWOID,(MethodInfo *)0x0);
    if (iVar1 == -1) {
      if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
        FUN_?();
      }
      pSVar2 = StringLiteral_Pressure_plated_exited_by_object;
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
      pIVar3 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
      if (pIVar3 == (ILogger_1 *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar3,0,pSVar2);
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (((pMVar5 != (MVGameControllerBase *)0x0) &&
        (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) &&
       (pMVar7 = (pMVar6->fields).operationRequests,
       pMVar7 != (MVNetworkGame_OperationRequests *)0x0)) {
      iVar8 = (this->fields)._._._.id;
      uVar9 = 0;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                      ,iVar8,iVar1,0);
        LOCK();
        UNLOCK();
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                     );
        LOCK();
        UNLOCK();
        FUN_?(&
                      TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                     );
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__System__Int32);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if (pMVar5 != (MVGameControllerBase *)0x0) {
        if ((pMVar5->fields)._joinState != 3) {
          return;
        }
        this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                               );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object___ctor
                  (this_01,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                  );
        uVar10 = 0;
        value = (Object *)FUN_?(TypeInfo__System__Int32,2);
        if (value != (Object *)0x0) {
          if ((*(int *)&value[1].monitor == 0) ||
             (*(int32_t *)&value[2].klass = iVar8, *(uint *)&value[1].monitor < 2)) {
            FUN_?();
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          *(int32_t *)((longlong)&value[2].klass + 4) = iVar1;
          if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
            uVar10 = CONCAT71((int7)((ulonglong)uVar10 >> 8),0x17);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
            Dictionary_2_System_Byte_System_Object__TryInsert
                      (this_01,0x17,value,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar9 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                       ->klass->rgctx_data[0x22].method);
            pPVar11 = (pMVar7->fields).peer;
            if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
              FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
            }
            if (pPVar11 != (PhotonPeer *)0x0) {
              (*(pPVar11->klass->vtable).SendOperation.methodPtr)
                        (pPVar11,CONCAT71((int7)((ulonglong)uVar10 >> 8),0x14),this_01,
                         TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                         SendReliable,(pPVar11->klass->vtable).SendOperation.method);
              return;
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
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

