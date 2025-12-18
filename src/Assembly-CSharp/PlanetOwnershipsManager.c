
/* Void Awake() */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_Awake
               (PlanetOwnershipsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PlanetOwnershipsManager___Awake_b__26_0__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlanetOwnershipsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
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
  if (pPVar1 != (PlanetOwnershipsManager *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pPVar1->fields)._._._._.m_CachedPtr != (void *)0x0) {
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
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                      ,0,0);
        LOCK();
        UNLOCK();
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((
          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
          ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
        FUN_?();
      }
      pvVar2 = (void *)0x0;
      if (this != (PlanetOwnershipsManager *)0x0) {
        pvVar2 = (this->fields)._._._._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
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
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar2,0);
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlanetOwnershipsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField = this;
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)TypeInfo__PlanetOwnershipsManager->static_fields >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  (this->fields)._RecievedPlanetOwnershipData_k__BackingField = 0;
  pMVar10 = TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)
            FUN_?(TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__PlanetOwnershipsManager___Awake_b__26_0__,
             (MethodInfo *)0x0);
  pMVar10 = (MVGameControllerBase_OnPostGameInitDelegate *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pMVar10,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pMVar10 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
    TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit =
         (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
  }
  else {
    pMVar11 = (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
    if (pMVar10->klass == TypeInfo__MVGameControllerBase__OnPostGameInitDelegate) {
      pMVar11 = pMVar10;
    }
    if (pMVar11 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
      FUN_?(pMVar10,TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit = pMVar11;
    pMVar11 = (MVGameControllerBase_OnPostGameInitDelegate *)0x0;
    if (pMVar10->klass == TypeInfo__MVGameControllerBase__OnPostGameInitDelegate) {
      pMVar11 = pMVar10;
    }
    if (pMVar11 == (MVGameControllerBase_OnPostGameInitDelegate *)0x0) {
      FUN_?(pMVar10,TypeInfo__MVGameControllerBase__OnPostGameInitDelegate);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar5 = (uint)((ulonglong)&TypeInfo__MVGameControllerBase->static_fields->OnPostGameInit >> 0xc
                   );
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar9 = uVar7 == *puVar8;
      if (bVar9) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar9);
  }
  return;
}


/* Void JSON_Unstripper() */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_JSON_Unstripper
               (PlanetOwnershipsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsData);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (PlanetOwnershipsData *)
            FUN_?(TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsData);
  MVWorldObject.dll::MV::WorldObject::OwnershipData::PlanetOwnershipsData::
  PlanetOwnershipsData__ctor(this_00,(MethodInfo *)0x0);
  pIVar1 = (Il2CppClass *)TypeInfo__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry;
  FUN_?();
  if (((((PlanetOwnershipsEntry__Class *)pIVar1)->_0).generic_class != (Il2CppGenericClass *)0x0) &&
     (((((PlanetOwnershipsEntry__Class *)pIVar1)->_1).field_0x6d & 8) != 0)) {
    pIVar1 = (((PlanetOwnershipsEntry__Class *)pIVar1)->_0).element_class;
  }
  uVar2 = pIVar1->instance_size;
  if ((pIVar1->field_0x135 & 0x20) == 0) {
    puVar3 = (undefined8 *)FUN_?(uVar2);
    *puVar3 = pIVar1;
    puVar4 = puVar3 + 2;
    puVar3[1] = 0;
    if (pIVar1->instance_size < 0x80) {
      puVar5 = (undefined8 *)((longlong)puVar3 + (ulonglong)pIVar1->instance_size);
      uVar6 = (ulonglong)((longlong)puVar5 + (7 - (longlong)puVar4)) >> 3;
      if (puVar5 < puVar4) {
        uVar6 = 0;
      }
      if (uVar6 != 0) {
        FUN_?(puVar4,0,uVar6 << 3);
      }
    }
    else {
      FUN_?(puVar4,0,(ulonglong)pIVar1->instance_size - 0x10);
    }
  }
  else {
    if (pIVar1->gc_desc != (void *)0x0) {
      puVar3 = (undefined8 *)FUN_?(uVar2,pIVar1);
      goto code_?;
    }
    puVar3 = (undefined8 *)FUN_?(uVar2,1);
    *puVar3 = pIVar1;
  }
  LOCK();
  lRam_? = lRam_? + 1;
  UNLOCK();
code_?:
  if ((pIVar1->field_0x136 & 2) != 0) {
    FUN_?(puVar3,FUN_?);
  }
  if ((bRam_? & 0x80) != 0) {
    FUN_?(puVar3,pIVar1);
  }
  FUN_?(pIVar1);
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_OnDestroy
               (PlanetOwnershipsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlanetOwnershipsManager__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = MVGameControllerBase::MVGameControllerBase_get_IsAlive((MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (pMVar2 != (MVGameControllerBase *)0x0) {
    if ((pMVar2->fields).game == (MVNetworkGame *)0x0) {
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    pUVar4 = (UnityAction_1_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                           );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUVar4,(Object *)this,
               MethodInfo__PlanetOwnershipsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
               ,(MethodInfo *)0x0);
    if (pMVar3 != (MVNetworkGame *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      ppAVar5 = &(pMVar3->fields).ReceivedPlanetOwnershipData;
      source = (pMVar3->fields).ReceivedPlanetOwnershipData;
      do {
        pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                            ((Delegate *)source,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pAVar7 = TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>;
        if (pDVar6 == (Delegate *)0x0) {
          pAVar8 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0;
        }
        else {
          pAVar8 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
                    FUN_?(pDVar6,
                                  TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                                 );
          if (pAVar8 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
            FUN_?(pDVar6,pAVar7);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        LOCK();
        pAVar10 = *ppAVar5;
        bVar11 = source == pAVar10;
        if (bVar11) {
          *ppAVar5 = pAVar8;
          pAVar10 = source;
        }
        UNLOCK();
        pAVar8 = source;
        if (!bVar11) {
          pAVar8 = pAVar10;
        }
        if (iRam_? != 0) {
          uVar12 = (uint)((ulonglong)ppAVar5 >> 0xc);
          lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
          do {
            uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
            puVar15 = (ulonglong *)(lVar13 + 0xADDR);
            LOCK();
            bVar11 = uVar14 == *puVar15;
            if (bVar11) {
              *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
            }
            UNLOCK();
          } while (!bVar11);
        }
        bVar11 = pAVar8 != source;
        source = pAVar8;
      } while (bVar11);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      pUVar4 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__PlanetOwnershipsManager__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                 ,(MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppAVar16 = &(pMVar3->fields).ReceivedPlanetPermissionsData;
        source_00 = (pMVar3->fields).ReceivedPlanetPermissionsData;
        do {
          pDVar6 = mscorlib.dll::System::Delegate::Delegate_Remove
                              ((Delegate *)source_00,(Delegate *)pUVar4,(MethodInfo *)0x0);
          pAVar17 = 
          TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
          ;
          if (pDVar6 == (Delegate *)0x0) {
            pAVar18 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                       *)0x0;
          }
          else {
            pAVar18 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                       *)FUN_?(pDVar6,
                                       TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                                      );
            if (pAVar18 ==
                (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                 *)0x0) {
              FUN_?(pDVar6,pAVar17);
              pcVar9 = (code *)swi(3);
              (*pcVar9)();
              return;
            }
          }
          LOCK();
          pAVar19 = *ppAVar16;
          bVar11 = source_00 == pAVar19;
          if (bVar11) {
            *ppAVar16 = pAVar18;
            pAVar19 = source_00;
          }
          UNLOCK();
          pAVar18 = source_00;
          if (!bVar11) {
            pAVar18 = pAVar19;
          }
          if (iRam_? != 0) {
            uVar12 = (uint)((ulonglong)ppAVar16 >> 0xc);
            lVar13 = (ulonglong)((uVar12 & 0x1fffff) >> 6) * 8;
            do {
              uVar14 = *(ulonglong *)(lVar13 + 0xADDR);
              puVar15 = (ulonglong *)(lVar13 + 0xADDR);
              LOCK();
              bVar11 = uVar14 == *puVar15;
              if (bVar11) {
                *puVar15 = uVar14 | 1L << (uVar12 & 0x3f);
              }
              UNLOCK();
            } while (!bVar11);
          }
          bVar11 = pAVar18 != source_00;
          source_00 = pAVar18;
        } while (bVar11);
        return;
      }
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ReceivedPlanetPermissionsDataCallback(Dictionary`2[System.Int32,List`1[System.Int32]]) */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_ReceivedPlanetPermissionsDataCallback
               (PlanetOwnershipsManager *this,Dictionary_2_System_Int32_List_1_System_Int32_ *data,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._ReceivedPlanetPermissionsData_k__BackingField = 1;
  (this->fields)._PlanetPermissionsEntries_k__BackingField = data;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._PlanetPermissionsEntries_k__BackingField >> 0xc);
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
  pAVar6 = (this->fields).OnReceivedPlanetPermissionsData;
  if (pAVar6 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(pAVar6->fields)._._.invoke_impl)
            ((pAVar6->fields)._._.method_code,
             (this->fields)._PlanetPermissionsEntries_k__BackingField,(pAVar6->fields)._._.method);
  return;
}


/* Void RecievedPlanetOwnershipsDataCallback(PlanetOwnershipsData) */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_RecievedPlanetOwnershipsDataCallback
               (PlanetOwnershipsManager *this,PlanetOwnershipsData *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Add_int__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dictionary_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__get_Count__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._RecievedPlanetOwnershipData_k__BackingField = 1;
  if ((data != (PlanetOwnershipsData *)0x0) &&
     (pLVar1 = (data->fields).planetOwnerships,
     pLVar1 != (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0)) {
    iVar2 = (pLVar1->fields)._size;
    pDVar3 = (Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)
             FUN_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>
                          );
    FUN_?(pDVar3,iVar2,0,
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Dictionary_int_
                  ->klass->rgctx_data->rgctxDataDummy);
    (this->fields)._PlanetOwnershipsEntries_k__BackingField = pDVar3;
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&(this->fields)._PlanetOwnershipsEntries_k__BackingField >> 0xc);
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
    pLVar1 = (data->fields).planetOwnerships;
    if (pLVar1 != (List_1_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_ *)0x0) {
      if (iRam_? != 0) {
        uVar4 = (uint)((ulonglong)&uStack_9 >> 0xc);
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
      pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                   ((ulonglong)(uint)(pLVar1->fields)._version << 0x20);
      uStack_11 = 0;
      LStack_12._8_8_ = pLStack_10;
      LStack_12._current = (Object *)0x0;
      uStack_9 = 0;
      pLStack_10 = &LStack_12;
      LStack_12._list = (List_1_System_Object_ *)pLVar1;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_12,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__MoveNext__
                          );
        if (bVar13 == 0) {
          pAVar14 = (this->fields).OnReceivedPlanetOwnershipData;
          if (pAVar14 != (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                         *)0x0) {
            (*(pAVar14->fields)._._.invoke_impl)
                      ((pAVar14->fields)._._.method_code,
                       (this->fields)._PlanetOwnershipsEntries_k__BackingField,
                       (pAVar14->fields)._._.method);
          }
          return;
        }
        pDVar3 = (this->fields)._PlanetOwnershipsEntries_k__BackingField;
        if (LStack_12._current == (Object *)0x0) break;
        if (pDVar3 == (Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                       *)0x0) goto code_?;
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>__Add_int__MV__WorldObject__OwnershipData__PlanetOwnershipsEntry_
                    ->klass->rgctx_data[0x22].method;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryInsert
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                   *(int32_t *)&LStack_12._current[1].klass,LStack_12._current,
                   (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),2),method_00)
        ;
      }
      goto code_?;
    }
  }
  FUN_?();
code_?:
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void <Awake>b__26_0() */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager__Awake_b__26_0
               (PlanetOwnershipsManager *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlanetOwnershipsManager__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__PlanetOwnershipsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
                 );
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
  pGVar1 = TypeInfo__MVGameControllerBase->static_fields->_GameSessionData_k__BackingField;
  if (pGVar1 != (GameSessionData *)0x0) {
    if ((pGVar1->fields).gameMode == 2) {
      return;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if (pMVar2 != (MVGameControllerBase *)0x0) {
      pMVar3 = (pMVar2->fields).game;
      this_00 = (UnityAction_1_System_Object_ *)
                FUN_?(
                             TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                             );
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__PlanetOwnershipsManager__RecievedPlanetOwnershipsDataCallback_MV__WorldObject__OwnershipData__PlanetOwnershipsData_
                 ,(MethodInfo *)0x0);
      if (pMVar3 != (MVNetworkGame *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        ppAVar4 = &(pMVar3->fields).ReceivedPlanetOwnershipData;
        a = (pMVar3->fields).ReceivedPlanetOwnershipData;
        do {
          pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,(Delegate *)this_00,(MethodInfo *)0x0);
          pAVar6 = TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>;
          if (pDVar5 == (Delegate *)0x0) {
            pAVar7 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0;
          }
          else {
            pAVar7 = (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)
                      FUN_?(pDVar5,
                                    TypeInfo__System__Action<MV::WorldObject::OwnershipData::PlanetOwnershipsData>
                                   );
            if (pAVar7 == (Action_1_MV_WorldObject_OwnershipData_PlanetOwnershipsData_ *)0x0) {
              FUN_?(pDVar5,pAVar6);
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
          }
          LOCK();
          pAVar9 = *ppAVar4;
          bVar10 = a == pAVar9;
          if (bVar10) {
            *ppAVar4 = pAVar7;
            pAVar9 = a;
          }
          UNLOCK();
          pAVar7 = a;
          if (!bVar10) {
            pAVar7 = pAVar9;
          }
          if (iRam_? != 0) {
            uVar11 = (uint)((ulonglong)ppAVar4 >> 0xc);
            lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
            do {
              uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
              puVar14 = (ulonglong *)(lVar12 + 0xADDR);
              LOCK();
              bVar10 = uVar13 == *puVar14;
              if (bVar10) {
                *puVar14 = uVar13 | 1L << (ulonglong)(uVar11 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          bVar10 = pAVar7 != a;
          a = pAVar7;
        } while (bVar10);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar2 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (pMVar2 != (MVGameControllerBase *)0x0) {
          pMVar3 = (pMVar2->fields).game;
          this_01 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32___Class
                     *)FUN_?(
                                    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                                    );
          uVar15 = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
          UnityAction_1_System_Object___ctor
                    ((UnityAction_1_System_Object_ *)this_01,(Object *)this,
                     MethodInfo__PlanetOwnershipsManager__ReceivedPlanetPermissionsDataCallback_System__Collections__Generic__Dictionary<int,_System::Collections::Generic::List<int>_>_
                     ,(MethodInfo *)0x0);
          if (pMVar3 != (MVNetworkGame *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            a_00 = (pMVar3->fields).ReceivedPlanetPermissionsData;
            do {
              pMVar16 = (MethodInfo *)0x0;
              player = this_01;
              pDVar5 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)a_00,(Delegate *)this_01,(MethodInfo *)0x0);
              pAVar17 = 
              TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
              ;
              if (pDVar5 == (Delegate *)0x0) {
                pAVar18 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                           *)0x0;
              }
              else {
                player = 
                TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                ;
                pAVar18 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                           *)FUN_?(pDVar5);
                if (pAVar18 ==
                    (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                     *)0x0) {
                  FUN_?(pDVar5,pAVar17);
                  pcVar8 = (code *)swi(3);
                  (*pcVar8)();
                  return;
                }
              }
              ppAVar19 = &(pMVar3->fields).ReceivedPlanetPermissionsData;
              LOCK();
              pAVar20 = *ppAVar19;
              bVar10 = a_00 == pAVar20;
              if (bVar10) {
                *ppAVar19 = pAVar18;
                pAVar20 = a_00;
              }
              UNLOCK();
              pAVar18 = a_00;
              if (!bVar10) {
                pAVar18 = pAVar20;
              }
              if (iRam_? != 0) {
                uVar11 = (uint)((ulonglong)&(pMVar3->fields).ReceivedPlanetPermissionsData >> 0xc);
                lVar12 = (ulonglong)((uVar11 & 0x1fffff) >> 6) * 8;
                player = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32___Class
                          *)(lVar12 + 0xADDR);
                pMVar16 = (MethodInfo *)(ulonglong)(uVar11 & 0x3f);
                do {
                  uVar13 = *(ulonglong *)(lVar12 + 0xADDR);
                  LOCK();
                  bVar10 = uVar13 == *(ulonglong *)(lVar12 + 0xADDR);
                  if (bVar10) {
                    *(ulonglong *)(lVar12 + 0xADDR) = uVar13 | 1L << (longlong)pMVar16;
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              bVar10 = pAVar18 != a_00;
              a_00 = pAVar18;
            } while (bVar10);
            pMVar21 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                ((MethodInfo *)0x0);
            MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,pMVar16);
            if ((extraout_RAX != 0) &&
               (uVar22 = *(undefined4 *)(extraout_RAX + 0x58),
               pMVar21 != (MVNetworkGame_OperationRequests *)0x0)) {
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
              pMVar16 = (MethodInfo *)
                        FUN_?(
                                     TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                     );
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]
              ::Dictionary_2_System_Byte_System_Object___ctor
                        ((Dictionary_2_System_Byte_System_Object_ *)pMVar16,
                         MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                        );
              auStackX_18[0] = uVar22;
              pOVar23 = (Object *)FUN_?(uRam_?,auStackX_18);
              if (pMVar16 != (MethodInfo *)0x0) {
                method_00 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                            ->klass->rgctx_data[0x22].method;
                uVar24 = CONCAT71((int7)((ulonglong)method_00 >> 8),0xb);
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                          ((Dictionary_2_System_Byte_System_Object_ *)pMVar16,0xb,pOVar23,
                           (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar15 >> 8),2),
                           method_00);
                pPVar25 = (pMVar21->fields).peer;
                if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0)
                {
                  FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                }
                if (pPVar25 != (PhotonPeer *)0x0) {
                  player_00 = (MVPlayer *)CONCAT71((int7)((ulonglong)uVar24 >> 8),0x5a);
                  SVar26 = TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                           SendReliable;
                  (*(pPVar25->klass->vtable).SendOperation.methodPtr)();
                  pMVar21 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                                      ((MethodInfo *)0x0);
                  MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,player_00,pMVar16);
                  if ((extraout_RAX_00 != 0) &&
                     (uVar22 = *(undefined4 *)(extraout_RAX_00 + 0x58),
                     pMVar21 != (MVNetworkGame_OperationRequests *)0x0)) {
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
                    this_02 = (Dictionary_2_System_Byte_System_Object_ *)
                              FUN_?(
                                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                                           );
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                    Object]::Dictionary_2_System_Byte_System_Object___ctor
                              (this_02,
                               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                              );
                    auStackX_18[0] = uVar22;
                    pOVar23 = (Object *)FUN_?(uRam_?,auStackX_18);
                    if (this_02 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
                      pMVar16 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                                ->klass->rgctx_data[0x22].method;
                      uVar15 = CONCAT71((int7)((ulonglong)pMVar16 >> 8),0xb);
                      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::
                      Object]::Dictionary_2_System_Byte_System_Object__TryInsert
                                (this_02,0xb,pOVar23,
                                 (InsertionBehavior__Enum)CONCAT71(SVar26._1_7_,2),pMVar16);
                      pPVar25 = (pMVar21->fields).peer;
                      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c
                          == 0) {
                        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
                      }
                      if (pPVar25 != (PhotonPeer *)0x0) {
                        (*(pPVar25->klass->vtable).SendOperation.methodPtr)
                                  (pPVar25,CONCAT71((int7)((ulonglong)uVar15 >> 8),0x59),this_02,
                                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->
                                   SendReliable,(pPVar25->klass->vtable).SendOperation.method);
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
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void 
   add_OnReceivedPlanetOwnershipData(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,MV.WorldObject.OwnershipData.PlanetOwnershipsEntry]])
    */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_add_OnReceivedPlanetOwnershipData
               (PlanetOwnershipsManager *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
               *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReceivedPlanetOwnershipData;
  a = (this->fields).OnReceivedPlanetOwnershipData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                *)0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                *)FUN_?(pDVar2,
                                TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                               );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                     *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* Void 
   add_OnReceivedPlanetPermissionsData(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,List`1[System.Int32]]])
    */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_add_OnReceivedPlanetPermissionsData
               (PlanetOwnershipsManager *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
               *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReceivedPlanetPermissionsData;
  a = (this->fields).OnReceivedPlanetPermissionsData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Combine
                       ((Delegate *)a,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_ *
               )0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_ *
               )FUN_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                             );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                     *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = a == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = a;
    }
    UNLOCK();
    pAVar4 = a;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != a;
    a = pAVar4;
  } while (bVar7);
  return;
}


/* PlanetOwnershipsManager get_Instance() */

PlanetOwnershipsManager *
Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_get_Instance
          (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlanetOwnershipsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  return TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField;
}


/* Void 
   remove_OnReceivedPlanetOwnershipData(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,MV.WorldObject.OwnershipData.PlanetOwnershipsEntry]])
    */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_remove_OnReceivedPlanetOwnershipData
               (PlanetOwnershipsManager *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
               *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReceivedPlanetOwnershipData;
  source = (this->fields).OnReceivedPlanetOwnershipData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                *)0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                *)FUN_?(pDVar2,
                                TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_MV::WorldObject::OwnershipData::PlanetOwnershipsEntry>_>
                               );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_MV_WorldObject_OwnershipData_PlanetOwnershipsEntry_
                     *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void 
   remove_OnReceivedPlanetPermissionsData(Action`1[System.Collections.Generic.Dictionary`2[System.Int32,List`1[System.Int32]]])
    */

void Assembly-CSharp.dll::PlanetOwnershipsManager::
     PlanetOwnershipsManager_remove_OnReceivedPlanetPermissionsData
               (PlanetOwnershipsManager *this,
               Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
               *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  ppAVar1 = &(this->fields).OnReceivedPlanetPermissionsData;
  source = (this->fields).OnReceivedPlanetPermissionsData;
  do {
    pDVar2 = mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)source,(Delegate *)value,(MethodInfo *)0x0);
    pAVar3 = 
    TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
    ;
    if (pDVar2 == (Delegate *)0x0) {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_ *
               )0x0;
    }
    else {
      pAVar4 = (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_ *
               )FUN_?(pDVar2,
                              TypeInfo__System__Action<System::Collections::Generic::Dictionary<int,_System::Collections::Generic::List<int>_>_>
                             );
      if (pAVar4 == (Action_1_System_Collections_Generic_Dictionary_2_System_Int32_List_1_System_Int32_
                     *)0x0) {
        FUN_?(pDVar2,pAVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    LOCK();
    pAVar6 = *ppAVar1;
    bVar7 = source == pAVar6;
    if (bVar7) {
      *ppAVar1 = pAVar4;
      pAVar6 = source;
    }
    UNLOCK();
    pAVar4 = source;
    if (!bVar7) {
      pAVar4 = pAVar6;
    }
    if (iRam_? != 0) {
      uVar8 = (uint)((ulonglong)ppAVar1 >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    bVar7 = pAVar4 != source;
    source = pAVar4;
  } while (bVar7);
  return;
}


/* Void set_Instance(PlanetOwnershipsManager) */

void Assembly-CSharp.dll::PlanetOwnershipsManager::PlanetOwnershipsManager_set_Instance
               (PlanetOwnershipsManager *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PlanetOwnershipsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__PlanetOwnershipsManager->static_fields->_Instance_k__BackingField = value;
  if (iRam_? != 0) {
    uVar1 = (uint)((ulonglong)TypeInfo__PlanetOwnershipsManager->static_fields >> 0xc);
    puVar2 = (ulonglong *)((ulonglong)((uVar1 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar3 = *puVar2;
      LOCK();
      uVar4 = *puVar2;
      if (uVar3 == uVar4) {
        *puVar2 = uVar3 | 1L << (uVar1 & 0x3f);
      }
      UNLOCK();
    } while (uVar3 != uVar4);
  }
  return;
}

