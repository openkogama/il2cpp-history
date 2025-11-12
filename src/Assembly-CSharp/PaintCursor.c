
/* Void UnlockMaterialToRemove() */

void Assembly-CSharp.dll::PaintCursor::PaintCursor_UnlockMaterialToRemove
               (PaintCursor *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  this_00 = (this->fields).paintCursor;
  (this->fields).flashingTime = 1.0;
  (this->fields).flashing = 1;
  if (bVar1) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar2 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar2 == (PrefabPool *)0x0) || (this_00 == (CellCursor *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  CellCursor::CellCursor_ChangeMaterial
            (this_00,(pPVar2->fields).cellCursorErrorMaterial,(MethodInfo *)0x0);
  auStackX_18[0] = unaff_RBX;
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
  this_02 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
             *)FUN_?(
                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                            );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  UIR::UIRenderDevice+DisableForceGammaMaterial]::
  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
            (this_02,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  uStackX_8 = CONCAT71(uStackX_8._1_7_,1);
  pOVar4 = (Object *)FUN_?(uRam_?,&uStackX_8);
  if (this_02 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar4,(Object *)value,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
             ->klass->rgctx_data[0x22].method);
  if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar5 = 0;
  uStackX_8 = auStackX_18[0];
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  ,this_02,2,0);
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
  auStackX_18[0] = CONCAT71(auStackX_18[0]._1_7_,2);
  pOVar4 = (Object *)FUN_?(uRam_?,auStackX_18);
  auStackX_18[0] = CONCAT44(auStackX_18[0]._4_4_,2);
  value_00 = (Object *)FUN_?(TypeInfo__NotificationLifetime,auStackX_18);
  if (this_02 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
       *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
  Dictionary_2_System_Object_System_Object__TryInsert
            ((Dictionary_2_System_Object_System_Object_ *)this_02,pOVar4,value_00,
             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar5 >> 8),2),
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
    this_01 = TypeInfo__NotificationsManager->static_fields->_activeInstance;
    if (this_01 == (NotificationsManager *)0x0) goto code_?;
    NotificationsManager::NotificationsManager_InstantiateNotification
              (this_01,NotificationType__Enum_ModalNotification,
               (Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0);
  }
  return;
}


/* Void UpdateCursor(CubePickingInfo, MVCubeModelBase, Boolean) */

void Assembly-CSharp.dll::PaintCursor::PaintCursor_UpdateCursor
               (PaintCursor *this,CubePickingInfo *selectedCube,MVCubeModelBase *targetCubeModel,
               bool isPainting,MethodInfo *method)

{
  if ((this->fields).flashing != 0) {
    fVar1 = (this->fields).flashingTime;
    if (0.0 < fVar1) {
      (this->fields).flashingTime = fVar1 - _UNK_?;
    }
    else {
      bVar2 = cRam_? == '\0';
      pCVar3 = (this->fields).paintCursor;
      (this->fields).flashing = 0;
      if (bVar2) {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
      if ((pPVar4 == (PrefabPool *)0x0) || (pCVar3 == (CellCursor *)0x0)) goto code_?;
      CellCursor::CellCursor_ChangeMaterial
                (pCVar3,(pPVar4->fields).cellCursorMaterial,(MethodInfo *)0x0);
    }
  }
  pCVar3 = (this->fields).paintCursor;
  if (pCVar3 != (CellCursor *)0x0) {
    if (selectedCube == (CubePickingInfo *)0x0) {
      CellCursor::CellCursor_set_Active(pCVar3,0,(MethodInfo *)0x0);
      return;
    }
    CellCursor::CellCursor_set_Active(pCVar3,1,(MethodInfo *)0x0);
    if (targetCubeModel != (MVCubeModelBase *)0x0) {
      pCVar3 = (this->fields).paintCursor;
      cubeGameObject = (targetCubeModel->fields)._.gameObject;
      if (pCVar3 != (CellCursor *)0x0) {
        iVar5 = (selectedCube->fields).iLocalPos.z;
        uVar6._0_2_ = (selectedCube->fields).iLocalPos.x;
        uVar6._2_2_ = (selectedCube->fields).iLocalPos.y;
        IStackX_8._0_4_ = uVar6;
        IStackX_8.z = iVar5;
        this_00 = CellCursor::CellCursor_GetCellCursor(pCVar3,&IStackX_8,(MethodInfo *)0x0);
        if (this_00 != (CellCursorCubeLineMesh *)0x0) {
          IStackX_8._0_4_ = uVar6;
          IStackX_8.z = iVar5;
          CellCursorCubeLineMesh::CellCursorCubeLineMesh_SetCursorCube
                    (this_00,&IStackX_8,cubeGameObject,(MethodInfo *)0x0);
          if (isPainting != 0) {
            pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager
                                ((MethodInfo *)0x0);
            if (((pGVar7 == (GameEventManager *)0x0) ||
                (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
                pGVar8 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
               (pGVar9 = (pGVar8->fields).LaserCommands,
               pGVar9 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
               )) goto code_?;
            pAVar10 = (pGVar9->fields).OnActivateLaserForDuration;
            if (pAVar10 != (Action_1_Single_ *)0x0) {
              (*(pAVar10->fields)._._.invoke_impl)
                        ((pAVar10->fields)._._.method_code,_UNK_?,(pAVar10->fields)._._.method
                        );
            }
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__MVGameControllerBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar11 = TypeInfo__MVGameControllerBase->static_fields->instance;
          if (((pMVar11 != (MVGameControllerBase *)0x0) &&
              (pMVar12 = (pMVar11->fields).game, pMVar12 != (MVNetworkGame *)0x0)) &&
             ((pGVar7 = (pMVar12->fields).GameEventManager, pGVar7 != (GameEventManager *)0x0 &&
              ((pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
               pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 &&
               (pGVar9 = (pGVar8->fields).LaserCommands,
               pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0
               )))))) {
            pAVar13 = (pGVar9->fields).OnUpdatePosition;
            if (pAVar13 == (Action_1_UnityEngine_Vector3_ *)0x0) {
              return;
            }
            fStack_14 = (selectedCube->fields).point.z;
            uStack_15._0_4_ = (selectedCube->fields).point.x;
            uStack_15._4_4_ = (selectedCube->fields).point.y;
            (*(pAVar13->fields)._._.invoke_impl)
                      ((pAVar13->fields)._._.method_code,&uStack_15,(pAVar13->fields)._._.method);
            return;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* PaintCursor(Vector3[]) */

void Assembly-CSharp.dll::PaintCursor::PaintCursor__ctor
               (PaintCursor *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CellCursor);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar1 == (PrefabPool *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  material = (pPVar1->fields).cellCursorMaterial;
  this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
  CellCursor::CellCursor__ctor
            (this_00,1,_UNK_?,material,_UNK_?,cubeCorners,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).paintCursor = this_00;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  return;
}

