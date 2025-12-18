
/* Void Initialize(CubeModelingStateMachine, MaterialsController) */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::
     FirstTimeSetupTerrainEditTutorial_Initialize
               (FirstTimeSetupTerrainEditTutorial *this,
               CubeModelingStateMachine *cubeModelingStateMachine,
               MaterialsController *materialsController,MethodInfo *method)

{
  iVar1 = iRam_?;
  (this->fields).cubeModelingStateMachine = cubeModelingStateMachine;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).cubeModelingStateMachine >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).materialsController = materialsController;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).materialsController >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}


/* Void OnShow() */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::
     FirstTimeSetupTerrainEditTutorial_OnShow
               (FirstTimeSetupTerrainEditTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Count__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__get_Item_int_);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TerrainCubeModelingControllerTutorial_MethodInfo__UnityEngine__Object__Instantiate<TerrainCubeModelingControllerTutorial>_TerrainCubeModelingControllerTutorial_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__FirstTimeSetupTerrainEditTutorial____c__DisplayClass4_0___OnShow_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__FirstTimeSetupTerrainEditTutorial____c__DisplayClass4_0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?();
  if (pOVar1 != (Object *)0x0) {
    uVar2 = 0;
    *(undefined4 *)&pOVar1[1].monitor = 0;
    pLVar3 = (this->fields).pushOptions;
    if (pLVar3 != (List_1_UIPushOption_ *)0x0) {
      lVar4 = 0x20;
      do {
        if ((pLVar3->fields)._size <= (int)uVar2) {
          original = (this->fields).terrainCubeModelingControllerTutorialPrefab;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          pOVar5 = (Object__Class *)
                    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                              ((Object *)original,
                               TerrainCubeModelingControllerTutorial_MethodInfo__UnityEngine__Object__Instantiate<TerrainCubeModelingControllerTutorial>_TerrainCubeModelingControllerTutorial_
                              );
          bVar6 = iRam_? != 0;
          pOVar1[1].klass = pOVar5;
          if (bVar6) {
            uVar2 = (uint)((ulonglong)(pOVar1 + 1) >> 0xc);
            puVar7 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar8 = *puVar7;
              LOCK();
              uVar9 = *puVar7;
              if (uVar8 == uVar9) {
                *puVar7 = uVar8 | 1L << (uVar2 & 0x3f);
              }
              UNLOCK();
            } while (uVar8 != uVar9);
          }
          if (pOVar1[1].klass != (Object__Class *)0x0) {
            TerrainCubeModelingControllerTutorial::TerrainCubeModelingControllerTutorial_Initialize
                      ((TerrainCubeModelingControllerTutorial *)pOVar1[1].klass,
                       (this->fields).cubeModelingStateMachine,(this->fields).materialsController,
                       (MethodInfo *)0x0);
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
            OVar10.m_CachedPtr = (this->fields)._._._._._._.m_CachedPtr;
            if (OVar10.m_CachedPtr == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)this,(MethodInfo *)0x0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcVar11 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
              uVar12 = func_?(&UNK_?);
              FUN_?(uVar12,0);
              pcVar11 = (code *)swi(3);
              (*pcVar11)();
              return;
            }
            pcRam_? = pcVar11;
            pvVar13 = (void *)(*pcRam_?)(OVar10.m_CachedPtr);
            root = (GameObject *)
                   UnityEngine.CoreModule.dll::UnityEngine::Bindings::Unmarshal::
                   Unmarshal_UnmarshalUnityObject
                             (pvVar13,
                              UnityEngine__GameObject_MethodInfo__UnityEngine__Bindings__Unmarshal__UnmarshalUnityObject<UnityEngine::GameObject>_void__
                             );
            this_00 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                      FUN_?(
                                   TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>
                                   );
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::
            Object]::ExecuteEvents_EventFunction_1_System_Object___ctor
                      (this_00,pOVar1,
                       MethodInfo__FirstTimeSetupTerrainEditTutorial____c__DisplayClass4_0___OnShow_b__0_UnityEngine__EventSystems__IUIStack__UnityEngine__EventSystems__BaseEventData_
                       ,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
              FUN_?();
            }
            UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
            ExecuteEvents_ExecuteHierarchy
                      (root,(BaseEventData *)0x0,this_00,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IUIStack>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IUIStack>_
                      );
            index = (this->fields)._._.firstTimeEvent;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__FirstTimeEventManager,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pFVar14 = TypeInfo__FirstTimeEventManager->static_fields->firstTimeState;
            if ((pFVar14 != (FirstTimeState *)0x0) &&
               (pBVar15 = (pFVar14->fields).bitArray, pBVar15 != (BitArray *)0x0)) {
              if ((pBVar15->fields).m_length <= index) {
                mscorlib.dll::System::Collections::BitArray::BitArray_set_Length
                          (pBVar15,index + 1,(MethodInfo *)0x0);
              }
              pBVar15 = (pFVar14->fields).bitArray;
              if (pBVar15 != (BitArray *)0x0) {
                pvVar13 = (void *)0x0;
                mscorlib.dll::System::Collections::BitArray::BitArray_Set
                          (pBVar15,index,1,(MethodInfo *)0x0);
                pFVar16 = TypeInfo__FirstTimeEventManager->static_fields;
                if (pFVar16->firstTimeStatePublisher !=
                    (Action_2_MV_WorldObject_MetaData_FirstTimeState_MV_WorldObject_MetaData_FirstTimeEvent_
                     *)0x0) {
                  pAVar17 = pFVar16->firstTimeStatePublisher;
                  pvVar13 = (pAVar17->fields)._._.method;
                  (*(pAVar17->fields)._._.invoke_impl)
                            ((pAVar17->fields)._._.method_code,pFVar16->firstTimeState,index,pvVar13);
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVGameControllerBase);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                pMVar18 = TypeInfo__MVGameControllerBase->static_fields->instance;
                if (((pMVar18 != (MVGameControllerBase *)0x0) &&
                    (pMVar19 = (pMVar18->fields).game, pMVar19 != (MVNetworkGame *)0x0)) &&
                   (pMVar20 = (pMVar19->fields).operationRequests,
                   pMVar20 != (MVNetworkGame_OperationRequests *)0x0)) {
                  if (cRam_? == '\0') {
                    FUN_?(&
                                  MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                 );
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
                    FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  this_01 = (Dictionary_2_System_Byte_System_Object_ *)
                            FUN_?(
                                         TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                         );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                  Object]::Dictionary_2_System_Byte_System_Object___ctor
                            (this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                            );
                  pOVar1 = (Object *)FUN_?(uRam_?,&stack0x00000008);
                  if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                    method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                ->klass->rgctx_data[0x22].method;
                    uVar12 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xc1);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                              (this_01,0xc1,pOVar1,
                               (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)pvVar13 >> 8),2),
                               method_00);
                    pPVar21 = (pMVar20->fields).peer;
                    if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                        == 0) {
                      FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                    }
                    if (pPVar21 != (PhotonPeer *)0x0) {
                      (*(pPVar21->klass->vtable).SendOperation.methodPtr)
                                (pPVar21,CONCAT71((int7)((ulonglong)uVar12 >> 8),0x54),this_01,
                                 TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                 SendReliable,(pPVar21->klass->vtable).SendOperation.method);
                      return;
                    }
                  }
                }
              }
            }
            FUN_?();
            pcVar11 = (code *)swi(3);
            (*pcVar11)();
            return;
          }
          break;
        }
        if (pLVar3 == (List_1_UIPushOption_ *)0x0) break;
        if ((uint)(pLVar3->fields)._size <= uVar2) {
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pUVar22 = (pLVar3->fields)._items;
        if (pUVar22 == (UIPushOption__Enum__Array *)0x0) break;
        if ((uint)pUVar22->max_length <= uVar2) {
          FUN_?();
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        uVar2 = uVar2 + 1;
        *(uint *)&pOVar1[1].monitor =
             *(uint *)&pOVar1[1].monitor | *(uint *)((longlong)pUVar22->vector + lVar4 + -0x20);
        lVar4 = lVar4 + 4;
        pLVar3 = (this->fields).pushOptions;
      } while (pLVar3 != (List_1_UIPushOption_ *)0x0);
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* FirstTimeSetupTerrainEditTutorial() */

void Assembly-CSharp.dll::FirstTimeSetupTerrainEditTutorial::FirstTimeSetupTerrainEditTutorial__ctor
               (FirstTimeSetupTerrainEditTutorial *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UIPushOption>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (List_1_UIPushOption_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UIPushOption>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<UIPushOption>__List__);
  bVar1 = iRam_? != 0;
  (this->fields).pushOptions = this_00;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).pushOptions >> 0xc);
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
  bVar1 = cRam_? == '\0';
  (this->fields)._.onShowSound = 3;
  (this->fields)._.prerequisiteEvent = -1;
  (this->fields)._.checkForStackBlocking = 1;
  if (bVar1) {
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

