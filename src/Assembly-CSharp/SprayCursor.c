
/* IntVector FaceToOffset(Face) */

IntVector *
Assembly-CSharp.dll::SprayCursor::SprayCursor_FaceToOffset
          (IntVector *__return_storage_ptr__,SprayCursor *this,Face__Enum face,MethodInfo *method)

{
  switch(face) {
  case Face__Enum_Top:
    __return_storage_ptr__->x = 0;
    __return_storage_ptr__->y = 1;
    __return_storage_ptr__->z = 0;
    return __return_storage_ptr__;
  case Face__Enum_Bottom:
    __return_storage_ptr__->x = 0;
    __return_storage_ptr__->y = -1;
    __return_storage_ptr__->z = 0;
    return __return_storage_ptr__;
  case Face__Enum_Front:
    __return_storage_ptr__->z = -1;
    __return_storage_ptr__->x = 0;
    __return_storage_ptr__->y = 0;
    return __return_storage_ptr__;
  case Face__Enum_Back:
    __return_storage_ptr__->z = 1;
    __return_storage_ptr__->x = 0;
    __return_storage_ptr__->y = 0;
    return __return_storage_ptr__;
  case Face__Enum_Left:
    __return_storage_ptr__->x = -1;
    __return_storage_ptr__->y = 0;
    __return_storage_ptr__->z = 0;
    return __return_storage_ptr__;
  case Face__Enum_Right:
    __return_storage_ptr__->x = 1;
    __return_storage_ptr__->y = 0;
    __return_storage_ptr__->z = 0;
    return __return_storage_ptr__;
  default:
    __return_storage_ptr__->x = 0;
    __return_storage_ptr__->y = 0;
    __return_storage_ptr__->z = 0;
    return __return_storage_ptr__;
  }
}


/* Void Remove() */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_Remove(SprayCursor *this,MethodInfo *method)

{
  pCVar1 = (this->fields).sprayCursor;
  if (pCVar1 == (CellCursor *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__Dispose__
                  ,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<CellCursorCubeLineMesh>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar3 = (pCVar1->fields).cursorCubes;
  if (pLVar3 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
    if (iRam_? != 0) {
      uVar4 = (uint)((ulonglong)&uStack_5 >> 0xc);
      uVar6 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
      do {
        uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
        puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
        LOCK();
        bVar9 = uVar7 == *puVar8;
        if (bVar9) {
          *puVar8 = uVar7 | 1L << (uVar4 & 0x3f);
        }
        UNLOCK();
      } while (!bVar9);
    }
    pLStack_10 = (List_1_T_Enumerator_System_Object_ *)
                 ((ulonglong)(uint)(pLVar3->fields)._version << 0x20);
    puStack_11 = (undefined *)0x0;
    LStack_12._8_8_ = pLStack_10;
    LStack_12._current = (Object *)0x0;
    uStack_5 = 0;
    pLStack_10 = &LStack_12;
    LStack_12._list = (List_1_System_Object_ *)pLVar3;
    while (bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_12,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<CellCursorCubeLineMesh>__MoveNext__
                             ), pOVar14 = LStack_12._current, bVar13 != 0) {
      if (LStack_12._current == (Object *)0x0) goto code_?;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      obj = (Object_1 *)pOVar14[2].monitor;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy(obj,0.0,(MethodInfo *)0x0);
    }
    pLVar3 = (pCVar1->fields).cursorCubes;
    if (pLVar3 != (List_1_CellCursorCubeLineMesh_ *)0x0) {
      piVar15 = &(pLVar3->fields)._version;
      *piVar15 = *piVar15 + 1;
      length = (pLVar3->fields)._size;
      (pLVar3->fields)._size = 0;
      if (0 < length) {
        mscorlib.dll::System::Array::Array_Clear
                  ((Array *)(pLVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return;
    }
  }
  FUN_?();
code_?:
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UnlockMaterialToRemove() */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_UnlockMaterialToRemove
               (SprayCursor *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,2,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unlock_this_material_in_order_to);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Unlock_this_material_in_order_to);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  value = TM::TM__(StringLiteral_Unlock_this_material_in_order_to,(MethodInfo *)0x0);
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  auStackX_8[0] = 1;
  pOVar1 = (Object *)FUN_?(uRam_?,auStackX_8);
  if (this_01 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,(Object *)value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar3 = 0;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_01,2,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationController);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__NotificationLifetime);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)FUN_?(uRam_?,&stack0x00000018);
  value_00 = (Object *)FUN_?(TypeInfo__NotificationLifetime,&stack0x00000018);
  if (this_01 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_01,pOVar1,value_00,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar3 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__NotificationsManager);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (TypeInfo__NotificationsManager->static_fields->_Initialized_k__BackingField != 0) {
    if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__NotificationsManager);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_00 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
    if (this_00 == (NotificationsManager *)0x0) goto code_?;
    NotificationsManager::NotificationsManager_InstantiateNotification
              (this_00,NotificationType__Enum_ModalNotification,
               (Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor_UpdateCursor
               (SprayCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool addCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (addCube != 0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 == (MVGameControllerBase *)0x0) ||
         (pMVar2 = (pMVar1->fields).game, pMVar2 == (MVNetworkGame *)0x0)) ||
        (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 == (GameEventManager *)0x0)) ||
       ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
        pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0 ||
        (pGVar5 = (pGVar4->fields).LaserCommands,
        pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))))
    goto code_?;
    pAVar6 = (pGVar5->fields).OnActivateLaserForDuration;
    if (pAVar6 != (Action_1_Single_ *)0x0) {
      (*(pAVar6->fields)._._.invoke_impl)
                ((pAVar6->fields)._._.method_code,(this->fields).addCubeLaserOnTime);
    }
    pcVar7 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pcRam_? = pcVar7;
    fVar9 = (float)(*pcRam_?)();
    (this->fields).addCubeTime = fVar9;
  }
  pCVar10 = (this->fields).sprayCursor;
  if (pCVar10 == (CellCursor *)0x0) goto code_?;
  if (selectedCube == (CubePickingInfo *)0x0) {
    CellCursor::CellCursor_set_Active(pCVar10,0,(MethodInfo *)0x0);
    return;
  }
  CellCursor::CellCursor_set_Active(pCVar10,1,(MethodInfo *)0x0);
  uVar11._0_2_ = (selectedCube->fields).iLocalPos.x;
  uVar11._2_2_ = (selectedCube->fields).iLocalPos.y;
  sVar12 = (selectedCube->fields).iLocalPos.z;
  uStack_13 = CONCAT44(uStack_13._4_4_,uVar11);
  switch((selectedCube->fields).pickedFace) {
  case 0:
    sVar14 = 1;
    goto code_?;
  case 1:
    sVar15 = 0;
    sVar14 = -1;
    sVar16 = 0;
    break;
  case 2:
    sVar16 = 0;
    sVar14 = 0;
    sVar15 = -1;
    break;
  case 3:
    sVar16 = 0;
    sVar14 = 0;
    sVar15 = 1;
    break;
  case 4:
    sVar15 = 0;
    sVar16 = -1;
    sVar14 = 0;
    break;
  case 5:
    sVar15 = 0;
    sVar16 = 1;
    sVar14 = 0;
    break;
  default:
    sVar14 = 0;
code_?:
    sVar15 = 0;
    sVar16 = 0;
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar8 = uStack_13;
  sVar12 = sVar12 + sVar15;
  sVar14 = uStack_13._2_2_ + sVar14;
  if (targetCubeModel != (MVCubeModelBase *)0x0) {
    pCVar10 = (this->fields).sprayCursor;
    cubeGameObject = (targetCubeModel->fields)._.gameObject;
    if (pCVar10 != (CellCursor *)0x0) {
      uStack_13._0_4_ = CONCAT22(sVar14,(undefined2)uVar11 + sVar16);
      uStack_13._6_2_ = SUB82(uVar8,6);
      uStack_13._0_6_ = (IntVector)CONCAT24(sVar12,(undefined4)uStack_13);
      this_00 = CellCursor::CellCursor_GetCellCursor
                          (pCVar10,(IntVector *)&uStack_13,(MethodInfo *)0x0);
      uVar8 = uStack_13;
      uStack_13._2_2_ = sVar14;
      uStack_13._0_2_ = (undefined2)uVar11 + sVar16;
      if (this_00 != (CellCursorCubeLineMesh *)0x0) {
        uStack_13._6_2_ = SUB82(uVar8,6);
        uStack_13._0_6_ = (IntVector)CONCAT24(sVar12,(undefined4)uStack_13);
        CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                  (this_00,(IntVector *)&uStack_13,cubeGameObject,(MethodInfo *)0x0);
        pcVar7 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar7 = (code *)swi(3);
          (*pcVar7)();
          return;
        }
        pcRam_? = pcVar7;
        (*pcRam_?)();
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
             (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
            (pGVar3 = (pMVar2->fields).GameEventManager, pGVar3 != (GameEventManager *)0x0)) &&
           ((pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
            pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
            (pGVar5 = (pGVar4->fields).LaserCommands,
            pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))
           ) {
          pAVar17 = (pGVar5->fields).OnUpdatePosition;
          if (pAVar17 != (Action_1_UnityEngine_Vector3_ *)0x0) {
            fStack_18 = (selectedCube->fields).point.z;
            uStack_13._0_4_ = (selectedCube->fields).point.x;
            uStack_13._4_4_ = (selectedCube->fields).point.y;
            (*(pAVar17->fields)._._.invoke_impl)
                      ((pAVar17->fields)._._.method_code,&uStack_13,(pAVar17->fields)._._.method);
          }
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* SprayCursor(Vector3[]) */

void Assembly-CSharp.dll::SprayCursor::SprayCursor__ctor
               (SprayCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CellCursor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields).addCubeLaserOnTime = 0.2;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar2 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  material = (pPVar2->fields).cellCursorMaterial;
  this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
  CellCursor::CellCursor__ctor
            (this_00,1,_UNK_?,material,_UNK_?,cubeCorners,(MethodInfo *)0x0);
  bVar1 = iRam_? != 0;
  (this->fields).sprayCursor = this_00;
  if (bVar1) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar6 == *puVar7;
      if (bVar1) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  return;
}

