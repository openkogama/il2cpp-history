
/* Void Destroy() */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Destroy
               (CubeGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CubeGunSettings__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    pUVar2 = (pMVar1->fields).materialsPop;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
    pUVar2 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pUVar2 == (UnityAction *)0x0) {
      (pMVar1->fields).materialsPop = (UnityAction *)0x0;
    }
    else {
      pUVar3 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UnityAction *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pMVar1->fields).materialsPop = pUVar3;
      pUVar3 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UnityAction *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pMVar1->fields).materialsPop >> 0xc);
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
    pMVar1 = (this->fields).materialsController;
    if (pMVar1 != (MaterialsController *)0x0) {
      pUVar10 = (pMVar1->fields).materialChange;
      pDVar11 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      FUN_?(pDVar11,this);
      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar10,pDVar11,(MethodInfo *)0x0);
      pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      if (pDVar11 == (Delegate *)0x0) {
        (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
      }
      else {
        pUVar10 = (UnityAction_1_System_Byte_ *)
                 FUN_?(pDVar11,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
        if (pUVar10 == (UnityAction_1_System_Byte_ *)0x0) {
          FUN_?(pDVar11,pUVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pMVar1->fields).materialChange = pUVar10;
        pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
        lVar13 = FUN_?();
        if (lVar13 == 0) {
          FUN_?(pDVar11,pUVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&(pMVar1->fields).materialChange >> 0xc);
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
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
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
      pvVar15 = (void *)0x0;
      if (pGVar14 != (GameObject *)0x0) {
        pvVar15 = (pGVar14->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar15,0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Initialize(Int32, MaterialsController) */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Initialize
               (CubeGunSettings *this,int32_t woID,MaterialsController *materialsController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CubeGunSettings__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = iRam_? != 0;
  (this->fields).woID = woID;
  (this->fields).materialsController = materialsController;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields).materialsController >> 0xc);
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
  if (materialsController == (MaterialsController *)0x0) {
    FUN_?();
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar7 = (materialsController->fields).inventoryController;
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
  if (pIVar7 != (InventoryController *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pIVar7->fields)._._._._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  MaterialsController::MaterialsController_ShowInventory
            (materialsController,UIPushOption__Enum_Blocking,1,(MethodInfo *)0x0);
code_?:
  pUVar8 = (materialsController->fields).materialChange;
  pDVar9 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
  FUN_?(pDVar9,this);
  pDVar9 = mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar8,pDVar9,(MethodInfo *)0x0);
  pUVar10 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
  if (pDVar9 == (Delegate *)0x0) {
    (materialsController->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
  }
  else {
    pUVar8 = (UnityAction_1_System_Byte_ *)
             FUN_?(pDVar9,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    if (pUVar8 == (UnityAction_1_System_Byte_ *)0x0) {
      FUN_?(pDVar9,pUVar10);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (materialsController->fields).materialChange = pUVar8;
    pUVar10 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
    lVar3 = FUN_?(pDVar9,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    if (lVar3 == 0) {
      FUN_?(pDVar9,pUVar10);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(materialsController->fields).materialChange >> 0xc);
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
  pUVar11 = (materialsController->fields).materialsPop;
  this_00 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
  UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
  NavMesh_OnNavMeshPreUpdate__ctor
            (this_00,(Object *)this,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
  pUVar11 = (UnityAction *)
           mscorlib.dll::System::Delegate::Delegate_Combine
                     ((Delegate *)pUVar11,(Delegate *)this_00,(MethodInfo *)0x0);
  if (pUVar11 == (UnityAction *)0x0) {
    (materialsController->fields).materialsPop = (UnityAction *)0x0;
  }
  else {
    pUVar12 = (UnityAction *)0x0;
    if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar12 = pUVar11;
    }
    if (pUVar12 == (UnityAction *)0x0) {
      FUN_?(pUVar11);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    (materialsController->fields).materialsPop = pUVar12;
    pUVar12 = (UnityAction *)0x0;
    if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
      pUVar12 = pUVar11;
    }
    if (pUVar12 == (UnityAction *)0x0) {
      FUN_?(pUVar11);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (iRam_? != 0) {
    uVar2 = (uint)((ulonglong)&(materialsController->fields).materialsPop >> 0xc);
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
  return;
}


/* Void MaterialChange(Byte) */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_MaterialChange
               (CubeGunSettings *this,uint8_t materialId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_material);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (this_01,(this->fields).woID,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      return;
    }
    this_00 = (pMVar1->fields)._.data;
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      this_02 = (Dictionary_2_System_Object_System_Object_ *)
                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                Object]::Dictionary_2_System_Object_System_Object__get_Item
                          (this_00,(Object *)StringLiteral_itemData,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
      auStackX_8[0] = materialId;
      value = (Object *)FUN_?(uRam_?,auStackX_8);
      if (this_02 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                ->_1).naturalAligment;
        if (((this_02->klass->_1).naturalAligment < bVar2) ||
           ((Dictionary_2_System_Object_System_Object___Class *)
            (this_02->klass->_1).typeHierarchy[(ulonglong)bVar2 - 1] !=
            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
          FUN_?(this_02,
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                       );
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__TryInsert
                  (this_02,(Object *)StringLiteral_material,value,
                   (InsertionBehavior__Enum)
                   CONCAT71((int7)((ulonglong)
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                  >> 8),1),
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   ->klass->rgctx_data[0x22].method);
        this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                    (this_03,(pMVar1->fields)._.id,this_00,(MethodInfo *)0x0);
          CubeGunSettings_Destroy(this,(MethodInfo *)0x0);
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


/* Void Pop() */

void Assembly-CSharp.dll::CubeGunSettings::CubeGunSettings_Pop
               (CubeGunSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__CubeGunSettings__MaterialChange_unsigned_char_,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__CubeGunSettings__Pop__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialsController;
  if (pMVar1 != (MaterialsController *)0x0) {
    pUVar2 = (pMVar1->fields).materialsPop;
    this_00 = (NavMesh_OnNavMeshPreUpdate *)
              FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
    UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
    NavMesh_OnNavMeshPreUpdate__ctor
              (this_00,(Object *)this,MethodInfo__CubeGunSettings__Pop__,(MethodInfo *)0x0);
    pUVar2 = (UnityAction *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pUVar2,(Delegate *)this_00,(MethodInfo *)0x0);
    if (pUVar2 == (UnityAction *)0x0) {
      (pMVar1->fields).materialsPop = (UnityAction *)0x0;
    }
    else {
      pUVar3 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UnityAction *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      (pMVar1->fields).materialsPop = pUVar3;
      pUVar3 = (UnityAction *)0x0;
      if (pUVar2->klass == TypeInfo__UnityEngine__Events__UnityAction) {
        pUVar3 = pUVar2;
      }
      if (pUVar3 == (UnityAction *)0x0) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar5 = (uint)((ulonglong)&(pMVar1->fields).materialsPop >> 0xc);
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
    pMVar1 = (this->fields).materialsController;
    if (pMVar1 != (MaterialsController *)0x0) {
      pUVar10 = (pMVar1->fields).materialChange;
      pDVar11 = (Delegate *)FUN_?(TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
      FUN_?(pDVar11,this);
      pDVar11 = mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pUVar10,pDVar11,(MethodInfo *)0x0);
      pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
      if (pDVar11 == (Delegate *)0x0) {
        (pMVar1->fields).materialChange = (UnityAction_1_System_Byte_ *)0x0;
      }
      else {
        pUVar10 = (UnityAction_1_System_Byte_ *)
                 FUN_?(pDVar11,TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>);
        if (pUVar10 == (UnityAction_1_System_Byte_ *)0x0) {
          FUN_?(pDVar11,pUVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        (pMVar1->fields).materialChange = pUVar10;
        pUVar12 = TypeInfo__UnityEngine__Events__UnityAction<unsigned_char>;
        lVar13 = FUN_?();
        if (lVar13 == 0) {
          FUN_?(pDVar11,pUVar12);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&(pMVar1->fields).materialChange >> 0xc);
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
      pGVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this,(MethodInfo *)0x0);
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
      pvVar15 = (void *)0x0;
      if (pGVar14 != (GameObject *)0x0) {
        pvVar15 = (pGVar14->fields)._.m_CachedPtr;
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      pcVar4 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
        uVar16 = func_?(&UNK_?);
        FUN_?(uVar16,0);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*pcRam_?)(pvVar15,0);
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

