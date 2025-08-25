
/* Vector3 ComputeObjectOffset(MVWorldObjectClient, Vector3) */

Vector3 * Assembly-CSharp.dll::ESInsert::ESInsert_ComputeObjectOffset
                    (Vector3 *__return_storage_ptr__,ESInsert *this,MVWorldObjectClient *wo,
                    Vector3 surfaceNormal,MethodInfo *method)

{
  if (wo != (MVWorldObjectClient *)0x0) {
    pVVar1 = MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersLocal
                       (wo,BoundsContext__Enum_Insert,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    uVar2 = 0;
    fStack_3 = 0.0;
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->zeroVector).x;
    uStack_5._4_4_ = (pVVar4->zeroVector).y;
    fStack_6 = (pVVar4->zeroVector).z;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar7 = pVVar1->vector;
      VStack_8.x = surfaceNormal.x;
      VStack_8.y = 0.0;
      VStack_8.z = 0.0;
      uStack_9 = 0;
      while( true ) {
        if ((int)pVVar1->max_length <= (int)uVar2) {
          fVar10 = surfaceNormal.y * uStack_5._4_4_ + VStack_8.x * (float)uStack_5 +
                   surfaceNormal.z * fStack_6;
          uVar11 = (this->fields).pivotToOrigin.x;
          uVar12 = (this->fields).pivotToOrigin.y;
          fVar13 = (this->fields).pivotToOrigin.z;
          __return_storage_ptr__->x = VStack_8.x * fVar10 - (float)uVar11;
          __return_storage_ptr__->y = surfaceNormal.y * fVar10 - (float)uVar12;
          __return_storage_ptr__->z = surfaceNormal.z * fVar10 - fVar13;
          return __return_storage_ptr__;
        }
        if (pVVar1->max_length <= uVar2) break;
        fVar13 = pVVar7->z;
        pVVar14 = (Vector3 *)
                  (*(code *)(wo->klass->vtable).get_Scale.method)
                            (auStack_15,wo,(wo->klass->vtable).set_Scale.methodPtr);
        a.z = fVar13;
        a._0_8_ = uStack_16;
        pVVar14 = MathFunctions::MathFunctions_Multiply(&VStack_8,a,*pVVar14,(MethodInfo *)0x0);
        uVar17 = pVVar14->x;
        uVar18 = pVVar14->y;
        uVar19 = (this->fields).pivotToOrigin.x;
        uVar20 = (this->fields).pivotToOrigin.y;
        fVar13 = (float)uVar19 + (float)uVar17;
        fVar21 = (float)uVar20 + (float)uVar18;
        fVar10 = (this->fields).pivotToOrigin.z + pVVar14->z;
        uStack_22 = CONCAT44(fVar21,fVar13);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar23 = (double)(fVar13 * fVar13 + fVar21 * fVar21 + fVar10 * fVar10);
        if (dVar23 < 0.0) {
          func_?();
        }
        else {
          dVar23 = SQRT(dVar23);
        }
        fVar24 = (float)dVar23;
        if (_UNK_? < fVar24) {
          fVar25 = fVar10 / fVar24;
          uVar26 = CONCAT44(fVar21 / fVar24,fVar13 / fVar24);
        }
        else {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar26._0_4_ = (pVVar4->zeroVector).x;
          uVar26._4_4_ = (pVVar4->zeroVector).y;
          fVar25 = (pVVar4->zeroVector).z;
        }
        fStack_27 = (float)uVar26;
        fStack_28 = (float)((ulonglong)uVar26 >> 0x20);
        fVar13 = surfaceNormal.y * fStack_28 + VStack_8.x * fStack_27 + surfaceNormal.z * fVar25;
        if (fStack_3 < fVar13) {
          uStack_5 = uStack_22;
          fStack_3 = fVar13;
          fStack_6 = fVar10;
        }
        uVar2 = uVar2 + 1;
        pVVar7 = pVVar7 + 1;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar29 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar29)();
  return pVVar7;
}


/* Vector3 ComputeSnapPosition(MVWorldObjectClient, Vector3) */

Vector3 * Assembly-CSharp.dll::ESInsert::ESInsert_ComputeSnapPosition
                    (Vector3 *__return_storage_ptr__,ESInsert *this,MVWorldObjectClient *wo,
                    Vector3 originalPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pIVar1 = TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField;
  if (pIVar1 != (IEditModeUI *)0x0) {
    pIVar2 = pIVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__IEditModeUI)
        {
          ppMVar5 = &(&(pIVar1->klass->vtable).IsGridSnap)
                     [pIVar1->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?();
code_?:
    cVar6 = (*(code *)*ppMVar5)();
    uVar7 = _UNK_?;
    if (cVar6 != '\0') {
      uVar7 = _UNK_?;
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      puVar8 = (undefined8 *)
               (*(code *)(wo->klass->vtable).GetClosestGridPoint.method)(auStack_9,wo,uVar7);
      uVar10 = *puVar8;
      fVar11 = *(float *)(puVar8 + 1);
      __return_storage_ptr__->x = (float)(int)uVar10;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar10 >> 0x20);
      __return_storage_ptr__->z = fVar11;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pVVar13 = (Vector3 *)(*pcVar12)();
  return pVVar13;
}


/* Void DrawObject(GameObject) */

void Assembly-CSharp.dll::ESInsert::ESInsert_DrawObject
               (ESInsert *this,GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Graphics);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pMVar2 = (this->fields).previewMeshes;
  if (pMVar2 != (MeshFilter__Array *)0x0) {
    ppMVar3 = pMVar2->vector;
    while( true ) {
      if ((int)pMVar2->max_length <= (int)uStack_1) {
        return;
      }
      if (pMVar2->max_length <= uStack_1) break;
      this_00 = *ppMVar3;
      submeshIndex = 0;
      if (this_00 == (MeshFilter *)0x0) goto code_?;
      while( true ) {
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this_00,(MethodInfo *)0x0);
        if (pMVar4 == (Mesh *)0x0) goto code_?;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                          (pMVar4,(MethodInfo *)0x0);
        if (iVar5 <= submeshIndex) break;
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this_00,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 == (Transform *)0x0) goto code_?;
        pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_localToWorldMatrix
                           ((Matrix4x4 *)&stack0xffffff64,this_01,(MethodInfo *)0x0);
        matrix = *pMVar6;
        material = (this->fields).previewMaterial;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Default,(MethodInfo *)0x0);
        camera = (this->fields).mainCamera;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3
                  (pMVar4,matrix,material,iVar5,camera,submeshIndex,(MethodInfo *)0x0);
        submeshIndex = submeshIndex + 1;
      }
      uStack_1 = uStack_1 + 1;
      ppMVar3 = ppMVar3 + 1;
    }
    func_?();
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean DrawPlanePick(MVWorldObjectClient, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::ESInsert::ESInsert_DrawPlanePick
               (ESInsert *this,MVWorldObjectClient *wo,Vector3 *position,Vector3 *rawPosition,
               Vector3 *normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__
                   );
    cRam_? = '\x01';
  }
  bVar1 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
  if (bVar1 != 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar2 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    bVar1 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pVVar3 = DrawPlane::DrawPlane_get_Pos((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
      fVar4 = pVVar3->y;
      pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                          ((MethodInfo *)0x0);
      if ((pSVar5 != (SpawnRoleDataMediator *)0x0) &&
         (this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar5->fields).position,
         this_00 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) {
        pVVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                  SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                  SpawnRoleVariable_1_UnityEngine_Vector3__get_Value
                            ((Vector3 *)&stack0xffffffe0,this_00,
                             MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__
                            );
        uVar6 = pVVar3->y;
        if ((float)uVar6 <= fVar4) {
          pVVar3 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
          uVar7._0_4_ = pVVar3->x;
          uVar7._4_4_ = pVVar3->y;
          fVar4 = pVVar3->z;
        }
        else {
          pVVar3 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                              ((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
          uVar8 = pVVar3->x;
          uVar9 = pVVar3->y;
          fVar4 = (float)((uint)pVVar3->z ^
                          __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
          uVar7 = CONCAT44(uVar9 ^ 
                            __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                            ,uVar8 ^ 
                             __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field
                           );
        }
        fVar10 = 0.0;
        fVar11 = (float)uVar7;
        fVar12 = (float)((ulonglong)uVar7 >> 0x20);
        surfaceNormal.z = fVar4;
        surfaceNormal.x = (float)(int)uVar7;
        surfaceNormal.y = (float)(int)((ulonglong)uVar7 >> 0x20);
        pVVar3 = ESInsert_ComputeObjectOffset
                            ((Vector3 *)&stack0xffffffc8,this,wo,surfaceNormal,(MethodInfo *)0x0);
        uVar13 = pVVar3->x;
        uVar14 = pVVar3->y;
        fVar15 = pVVar3->z;
        position->x = fVar4 - (float)uVar13;
        position->y = fVar10 - (float)uVar14;
        position->z = fVar2 - fVar15;
        uVar16 = __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field;
        fVar12 = (float)((uint)fVar12 ^
                        __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
        rawPosition->x = fVar4;
        rawPosition->y = fVar10;
        rawPosition->z = fVar2;
        normal->x = (float)((uint)wo ^ uVar16);
        normal->y = (float)((uint)fVar11 ^ uVar16);
        normal->z = fVar12;
        return 1;
      }
      func_?();
      pcVar17 = (code *)swi(3);
      bVar1 = (*pcVar17)();
      return bVar1;
    }
  }
  return 0;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Enter
               (ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&
                    InsertCursor_MethodInfo__UnityEngine__Object__Instantiate<InsertCursor>_InsertCursor_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_IsNewPrototype);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  func_?(&(this->fields).mainCamera,pCVar1);
  pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar2 == (GameEventManager *)0x0) ||
      (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
      pGVar3 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
     (pGVar4 = (pGVar3->fields).LaserCommands,
     pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
  goto code_?;
  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
            (pGVar4,LaserPointerState__Enum_Inserting,(MethodInfo *)0x0);
  pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar2 == (GameEventManager *)0x0) ||
      (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
      pGVar3 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) ||
     (pGVar4 = (pGVar3->fields).LaserCommands,
     pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
  goto code_?;
  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
  GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
            (pGVar4,1,(MethodInfo *)0x0);
  exists = (this->fields).previewMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                     ((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar6 == (PrefabPool *)0x0) goto code_?;
    (this->fields).previewMaterial = (pPVar6->fields).insertPreviewMaterial;
    func_?();
  }
  if (e == (EditorStateMachine *)0x0) goto code_?;
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
  fVar8 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius(pMVar7,(MethodInfo *)0x0);
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                     (pCVar1,(MethodInfo *)0x0);
  dVar10 = (double)(fVar9 * _UNK_? * _UNK_? * _UNK_?);
  func_?();
  fVar9 = _UNK_?;
  if (_UNK_? <= fVar8 / (float)dVar10) {
    fVar9 = fVar8 / (float)dVar10;
  }
  (this->fields).distanceInFreeSpace = fVar9;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar6 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar6 == (PrefabPool *)0x0) goto code_?;
  pIVar11 = (pPVar6->fields).insertCursor;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar11 = (InsertCursor *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pIVar11,
                       InsertCursor_MethodInfo__UnityEngine__Object__Instantiate<InsertCursor>_InsertCursor_
                      );
  (this->fields).insertCursor = pIVar11;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar9 = (pVVar12->zeroVector).y;
  fVar8 = (pVVar12->zeroVector).z;
  (this->fields).insertOffset.x = (pVVar12->zeroVector).x;
  (this->fields).insertOffset.y = fVar9;
  (this->fields).insertOffset.z = fVar8;
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar1,(MethodInfo *)0x0);
  if (pTVar13 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
            ((Vector3 *)&fStack_14,pTVar13,(MethodInfo *)0x0);
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)pCVar1,(MethodInfo *)0x0);
  if (pTVar13 == (Transform *)0x0) goto code_?;
  fVar15 = 0.0;
  pVVar16 = (Vector3 *)&stack0xffffffd8;
  pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      (pVVar16,pTVar13,(MethodInfo *)0x0);
  uVar18 = pVVar17->x;
  uVar19 = pVVar17->y;
  fVar9 = pVVar17->z;
  fVar8 = (this->fields).distanceInFreeSpace;
  (this->fields).insertPosition.x = (float)pVVar16 + (float)uVar18 * fVar8;
  (this->fields).insertPosition.y = (float)pTVar13 + (float)uVar19 * fVar8;
  (this->fields).insertPosition.z = fVar15 + fVar9 * fVar8;
  fStack_14 = (float)uVar18;
  puStack_20 = (undefined *)uVar19;
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(0,(MethodInfo *)0x0);
  pSVar21 = (e->fields).selectionController;
  if ((pSVar21 == (SelectionController *)0x0) ||
     (this_00 = (e->fields).networkSelector, this_00 == (MVNetworkSelector *)0x0))
  goto code_?;
  bVar5 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                     (this_00,(pSVar21->fields).selectedIDs,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar22 = (undefined8 *)(*(code *)(pMVar7->klass->vtable).get_WorldPivot.method)();
  fVar8 = *(float *)(puVar22 + 1);
  fStack_14 = (float)*puVar22;
  puStack_20 = (undefined *)((ulonglong)*puVar22 >> 0x20);
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar22 = (undefined8 *)(*(code *)(pMVar7->klass->vtable).get_WorldPosition_1.method)();
  uVar23 = *puVar22;
  fVar9 = *(float *)(puVar22 + 1);
  pCVar1 = (this->fields).mainCamera;
  (this->fields).pivotToOrigin.x = (float)uVar23 - fStack_14;
  (this->fields).pivotToOrigin.y = (float)((ulonglong)uVar23 >> 0x20) - (float)puStack_20;
  (this->fields).pivotToOrigin.z = fVar9 - fVar8;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar16 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
            DefaultEventSystem_Input_get_mousePosition
                      ((Vector3 *)&stack0xffffffd8,(DefaultEventSystem_Input *)0x0,in_stack_24
                      );
  fVar8 = pVVar16->x;
  pVVar16 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
            DefaultEventSystem_Input_get_mousePosition
                      ((Vector3 *)&stack0xffffffd8,(DefaultEventSystem_Input *)0x0,in_stack_24
                      );
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pos.y = pVVar16->y;
  pos.x = fVar8;
  pos.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
            ((Ray *)&stack0xffffffcc,pCVar1,pos,(MethodInfo *)0x0);
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffd8,(Ray *)&stack0xffffffb4,
                       (this->fields).distanceInFreeSpace,(MethodInfo *)0x0);
  uVar25 = pVVar16->x;
  uVar26 = pVVar16->y;
  uVar27 = (this->fields).pivotToOrigin.x;
  uVar28 = (this->fields).pivotToOrigin.y;
  originalPos.y = (float)uVar28 + (float)uVar26;
  originalPos.x = (float)uVar27 + (float)uVar25;
  originalPos.z = (this->fields).pivotToOrigin.z + pVVar16->z;
  fStack_14 = (float)uVar25;
  puStack_20 = (undefined *)uVar26;
  pVVar16 = ESInsert_ComputeSnapPosition
                      ((Vector3 *)&stack0xffffffd8,this,pMVar7,originalPos,(MethodInfo *)0x0);
  uVar29 = pVVar16->x;
  puStack_20 = (undefined *)uVar29;
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
  (*(code *)(pMVar7->klass->vtable).set_WorldPosition.method)();
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar7 == (MVWorldObjectClient *)0x0) ||
     (pGVar30 = (pMVar7->fields).gameObject, pGVar30 == (GameObject *)0x0)) goto code_?;
  pMVar31 = (MeshFilter__Array *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                      (pGVar30,
                       UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                      );
  (this->fields).previewMeshes = pMVar31;
  func_?();
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
  if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
  goto code_?;
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
           UIElements::TextureId]::
           Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                     (this_01,(Object *)StringLiteral_IsNewPrototype,
                      MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                     );
  (this->fields).isNewPrototype = bVar5;
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) {
code_?:
    this_02 = (HashSet_1_System_Int32_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32___ctor
              (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar7 == (MVWorldObjectClient *)0x0) || (this_02 == (HashSet_1_System_Int32_ *)0x0))
    goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
    HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add
              (this_02,(pMVar7->fields)._.id,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
  }
  else {
    if (((pMVar7->klass->_1).naturalAligment < (TypeInfo__MVGroup->_1).naturalAligment) ||
       ((MVGroup__Class *)
        (pMVar7->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] !=
        TypeInfo__MVGroup)) goto code_?;
    pMVar32 = (MVGroup *)
              EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar32 == (MVGroup *)0x0) goto code_?;
    if (((pMVar32->klass->_1).naturalAligment < (TypeInfo__MVGroup->_1).naturalAligment) ||
       ((MVGroup__Class *)
        (pMVar32->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] !=
        TypeInfo__MVGroup)) goto code_?;
    this_04 = (MVGroup *)0x0;
    if ((MVGroup__Class *)
        (pMVar32->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).naturalAligment - 1] ==
        TypeInfo__MVGroup) {
      this_04 = pMVar32;
    }
    this_02 = MVGroup::MVGroup_GetHierarchyWorldObjectIDs(this_04,(MethodInfo *)0x0);
  }
  (this->fields).woIgnoreList = this_02;
  func_?();
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
     (pGVar30 = (pMVar7->fields).gameObject, pGVar30 != (GameObject *)0x0)) {
    iVar33 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       (pGVar30,(MethodInfo *)0x0);
    iVar34 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
    if (iVar33 == iVar34) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_03 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_IsLogicRendered(this_03,1,(MethodInfo *)0x0);
    }
    pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar7 != (MVWorldObjectClient *)0x0) &&
       (pGVar30 = (pMVar7->fields).gameObject, pGVar30 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar30,0,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        (this->fields).pointerWasUp = 1;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Execute
               (ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&
                    UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                   );
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (((e == (EditorStateMachine *)0x0) ||
      (pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0),
      pMVar1 == (MVWorldObjectClient *)0x0)) ||
     (this_00 = (pMVar1->fields).gameObject, this_00 == (GameObject *)0x0)) goto code_?;
  pMVar2 = (MeshFilter__Array *)
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren
                      (this_00,
                       UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                      );
  (this->fields).previewMeshes = pMVar2;
  func_?(&(this->fields).previewMeshes,pMVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,(ExceptionArgument__Enum)e,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_4.x = (pVVar3->zeroVector).x;
  VStack_4.y = (pVVar3->zeroVector).y;
  VStack_4.z = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_5.x = (pVVar3->zeroVector).x;
  VStack_5.y = (pVVar3->zeroVector).y;
  VStack_5.z = (pVVar3->zeroVector).z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  IStack_6.klass = (InsertCursor__Class *)(pVVar3->upVector).x;
  IStack_6.monitor = (MonitorData *)(pVVar3->upVector).y;
  IStack_6.fields._._._._.m_CachedPtr = (Component__Fields)(pVVar3->upVector).z;
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  bVar7 = ESInsert_DrawPlanePick
                     (this,pMVar1,&VStack_4,&VStack_5,(Vector3 *)&IStack_6,(MethodInfo *)0x0);
  if (bVar7 == 0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)0x0;
    pIVar8 = &IStack_6;
    bVar7 = ESInsert_WorldPick(this,pMVar1,&VStack_4,&VStack_5,(Vector3 *)pIVar8,
                                (MethodInfo *)0x0);
    this_01 = (this->fields).insertCursor;
    if (bVar7 != 0) {
      (this->fields).insertPosition.x = VStack_4.x;
      (this->fields).insertPosition.y = VStack_4.y;
      (this->fields).insertPosition.z = VStack_4.z;
      if (this_01 == (InsertCursor *)0x0) goto code_?;
      goto code_?;
    }
    if (this_01 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_01,0,(MethodInfo *)0x0);
    VStack_5.x = (this->fields).insertOffset.x;
    VStack_5.y = (this->fields).insertOffset.y;
    VStack_5.z = (this->fields).insertOffset.z;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    IStack_6.klass = (InsertCursor__Class *)(pVVar3->zeroVector).x;
    IStack_6.monitor = (MonitorData *)(pVVar3->zeroVector).y;
    IStack_6.fields._._._._.m_CachedPtr = (Component__Fields)(pVVar3->zeroVector).z;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pMVar10 = (MeshRenderer__Array *)(fVar9 * _UNK_?);
    if ((float)pMVar10 < 0.0) {
      pMVar10 = (MeshRenderer__Array *)0x0;
    }
    else if ((float)_UNK_? < (float)pMVar10) {
      pMVar10 = _UNK_?;
    }
    QStack_11.z = ((float)IStack_6.fields._._._._.m_CachedPtr - VStack_5.z) * (float)pMVar10 +
                  VStack_5.z;
    (this->fields).insertOffset.x =
         ((float)IStack_6.klass - VStack_5.x) * (float)pMVar10 + VStack_5.x;
    (this->fields).insertOffset.y =
         ((float)IStack_6.monitor - VStack_5.y) * (float)pMVar10 + VStack_5.y;
    (this->fields).insertOffset.z = QStack_11.z;
    IStack_6.fields.renderers = (MeshRenderer__Array *)(this->fields).mainCamera;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pVVar12 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
              DefaultEventSystem_Input_get_mousePosition
                        ((Vector3 *)&QStack_11,(DefaultEventSystem_Input *)0x0,in_stack_13);
    IStack_6.klass = (InsertCursor__Class *)pVVar12->x;
    pVVar12 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::
              DefaultEventSystem_Input_get_mousePosition
                        ((Vector3 *)&QStack_11,(DefaultEventSystem_Input *)0x0,in_stack_13);
    IStack_6.fields._._._._.m_CachedPtr = (Component__Fields)(Object_1__Fields)0x0;
    IStack_6.monitor = (MonitorData *)pVVar12->y;
    if (IStack_6.fields.renderers == (MeshRenderer__Array *)0x0) goto code_?;
    pos.y = pVVar12->y;
    pos.x = (float)IStack_6.klass;
    pos.z = 0.0;
    pRVar14 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                        ((Ray *)&stack0xffffff60,(Camera *)IStack_6.fields.renderers,pos,
                         (MethodInfo *)0x0);
    fVar9 = (pRVar14->m_Origin).x;
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    uVar15._4_4_ = (float)&UNK_?;
    uVar15._0_4_ = fVar9;
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                        ((Vector3 *)&QStack_11,(Ray *)&stack0xffffff48,
                         (this->fields).distanceInFreeSpace,(MethodInfo *)0x0);
    VStack_5.x = pVVar12->x;
    VStack_5.y = pVVar12->y;
    VStack_5.z = pVVar12->z;
    IStack_6.klass = (InsertCursor__Class *)(this->fields).pivotToOrigin.x;
    IStack_6.monitor = (MonitorData *)(this->fields).pivotToOrigin.y;
    IStack_6.fields._._._._.m_CachedPtr = (Component__Fields)(this->fields).pivotToOrigin.z;
    QStack_11.z = (float)IStack_6.fields._._._._.m_CachedPtr + VStack_5.z;
    pTVar16 = (Transform__Class *)&UNK_?;
    originalPos.y = (float)IStack_6.monitor + VStack_5.y;
    originalPos.x = (float)IStack_6.klass + VStack_5.x;
    originalPos.z = (float)IStack_6.fields._._._._.m_CachedPtr + VStack_5.z;
    pVVar12 = ESInsert_ComputeSnapPosition
                        ((Vector3 *)&QStack_11,this,pMVar1,originalPos,(MethodInfo *)0x0);
    uVar17 = pVVar12->x;
    uVar18 = pVVar12->y;
    uVar19 = (this->fields).insertPosition.x;
    uVar20 = (this->fields).insertPosition.y;
    IStack_6.fields._._._._.m_CachedPtr = (Component__Fields)(this->fields).insertPosition.z;
    QStack_11.w = (float)IStack_6.fields._._._._.m_CachedPtr - (float)pTVar16;
    QStack_11.z = (float)uVar20 - SUB84(uVar15,4);
    QStack_11.y = (float)uVar19 - (float)uVar15;
    VStack_4.z = pVVar12->z - (float)pTVar16;
    IStack_6.monitor = (MonitorData *)VStack_4.z;
    IStack_6.klass = (InsertCursor__Class *)uVar19;
    VStack_4.y = (float)uVar18 - SUB84(uVar15,4);
    VStack_4.x = (float)uVar17 - (float)uVar15;
    VStack_5._0_8_ = uVar15;
    VStack_5.z = (float)pTVar16;
    puVar21 = (undefined8 *)func_?();
    IStack_6._0_8_ = *puVar21;
    IStack_6.fields._._._._.m_CachedPtr =
         (Component__Fields)((Object_1__Fields *)(puVar21 + 1))->m_CachedPtr;
    fVar22 = (float10)func_?();
    pTStack_23 = (Transform__Class *)(float)fVar22;
    fVar22 = (float10)func_?();
    pCStack_24 = (CancellationTokenSource *)(float)fVar22;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    IStack_6.fields.renderers = (MeshRenderer__Array *)(fVar9 * _UNK_?);
    if ((float)IStack_6.fields.renderers < 0.0) {
      pMVar10 = (MeshRenderer__Array *)0x0;
    }
    else {
      pMVar10 = IStack_6.fields.renderers;
      if ((float)_UNK_? < (float)IStack_6.fields.renderers) {
        pMVar10 = _UNK_?;
      }
    }
    fVar25 = ((float)pCStack_24 - (float)pTStack_23) * (float)pMVar10 + (float)pTStack_23;
    fVar26 = VStack_5.y + (float)IStack_6.monitor * fVar25;
    fVar9 = VStack_5.x + (float)IStack_6.klass * fVar25;
    fVar25 = VStack_5.z + (float)IStack_6.fields._._._._.m_CachedPtr * fVar25;
    (this->fields).insertPosition.x = fVar9;
    (this->fields).insertPosition.y = fVar26;
    IStack_6.klass = (InsertCursor__Class *)(this->fields).pivotToOrigin.x;
    IStack_6.monitor = (MonitorData *)(this->fields).pivotToOrigin.y;
    (this->fields).insertPosition.z = fVar25;
    IStack_6.fields._._._._.m_CachedPtr = (Component__Fields)(this->fields).pivotToOrigin.z;
    pTStack_23 = (Transform__Class *)(fVar25 - (float)IStack_6.fields._._._._.m_CachedPtr);
    fVar9 = fVar9 - (float)IStack_6.klass;
    fVar26 = fVar26 - (float)IStack_6.monitor;
    QStack_11.z = (float)pTStack_23;
  }
  else {
    (this->fields).insertPosition.x = VStack_4.x;
    (this->fields).insertPosition.y = VStack_4.y;
    (this->fields).insertPosition.z = VStack_4.z;
    pIVar8 = (this->fields).insertCursor;
    if (pIVar8 == (InsertCursor *)0x0) goto code_?;
    method_00 = (MethodInfo *)0x0;
code_?:
    pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pIVar8,method_00);
    if (pTVar27 == (Transform *)0x0) goto code_?;
    fVar9 = VStack_5.x;
    fVar26 = VStack_5.y;
    pTStack_23 = (Transform__Class *)VStack_5.z;
    value.z = VStack_5.z;
    value.x = VStack_5.x;
    value.y = VStack_5.y;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar27,value,(MethodInfo *)0x0);
    pIVar8 = (this->fields).insertCursor;
    if (pIVar8 == (InsertCursor *)0x0) goto code_?;
    IStack_6.fields.renderers =
         (MeshRenderer__Array *)
         UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                   ((Component *)pIVar8,(MethodInfo *)0x0);
    forward.z = (float)IStack_6.fields._._._._.m_CachedPtr;
    forward.x = (float)IStack_6.klass;
    forward.y = (float)IStack_6.monitor;
    pQVar28 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        (&QStack_11,forward,(MethodInfo *)0x0);
    if (IStack_6.fields.renderers == (MeshRenderer__Array *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              ((Transform *)IStack_6.fields.renderers,*pQVar28,(MethodInfo *)0x0);
    pIVar8 = (this->fields).insertCursor;
    if (pIVar8 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar8,1,(MethodInfo *)0x0);
  }
  pGVar29 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar29 != (GameEventManager *)0x0) &&
      (pGVar30 = (pGVar29->fields).AvatarCommandsBuildMode,
      pGVar30 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_02 = (pGVar30->fields).LaserCommands,
     this_02 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    to.y = fVar26;
    to.x = fVar9;
    to.z = (float)pTStack_23;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
              (this_02,to,(MethodInfo *)0x0);
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pVVar12 = ESInsert_ComputeSnapPosition
                        ((Vector3 *)&stack0xffffff68,this,pMVar1,(this->fields).insertPosition,
                         (MethodInfo *)0x0);
    IStack_6.klass = (InsertCursor__Class *)pVVar12->x;
    IStack_6.monitor = (MonitorData *)pVVar12->y;
    IStack_6.fields._._._._.m_CachedPtr = (Component__Fields)pVVar12->z;
    pTStack_23 = (Transform__Class *)
                 EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      pMStack_31 = (Mesh *)(pMVar1->klass->vtable).set_WorldPosition.methodPtr;
      VStack_4.y = (float)&stack0xffffff68;
      VStack_4.x = (float)&UNK_?;
      VStack_4.z = (float)pMVar1;
      puVar21 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)();
      VStack_5._0_8_ = *puVar21;
      VStack_5.z = *(float *)(puVar21 + 1);
      fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      IStack_6.fields.renderers = (MeshRenderer__Array *)(fVar9 * _UNK_?);
      if ((float)IStack_6.fields.renderers < 0.0) {
        pMVar10 = (MeshRenderer__Array *)0x0;
      }
      else {
        pMVar10 = IStack_6.fields.renderers;
        if ((float)_UNK_? < (float)IStack_6.fields.renderers) {
          pMVar10 = _UNK_?;
        }
      }
      fStack_32 = ((float)IStack_6.klass - VStack_5.x) * (float)pMVar10 + VStack_5.x;
      IStack_6.klass =
           (InsertCursor__Class *)
           (((float)IStack_6.monitor - VStack_5.y) * (float)pMVar10 + VStack_5.y);
      IStack_6.monitor =
           (MonitorData *)
           (((float)IStack_6.fields._._._._.m_CachedPtr - VStack_5.z) * (float)pMVar10 +
           VStack_5.z);
      if (pTStack_23 != (Transform__Class *)0x0) {
        pMVar33 = (MVWorldObjectClient__Class *)(pTStack_23->_0).image;
        (*(code *)(pMVar33->vtable).set_SyncPos.method)
                  (pTStack_23,fStack_32,IStack_6.klass,IStack_6.monitor,
                   (pMVar33->vtable).get_SyncRot.methodPtr);
        pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Graphics);
            func_?(&StringLiteral_Default);
            cRam_? = '\x01';
          }
          pMStack_34 = (this->fields).previewMeshes;
          pCStack_24 = (CancellationTokenSource *)0x0;
          if (pMStack_34 != (MeshFilter__Array *)0x0) {
            IStack_6.fields.renderers = (MeshRenderer__Array *)pMStack_34->vector;
            for (; (int)pCStack_24 < (int)pMStack_34->max_length;
                pCStack_24 = (CancellationTokenSource *)((int)&pCStack_24->klass + 1)) {
              if ((CancellationTokenSource *)pMStack_34->max_length <= pCStack_24)
              goto code_?;
              pTStack_23 = (Transform__Class *)(IStack_6.fields.renderers)->klass;
              submeshIndex = 0;
              if (pTStack_23 == (Transform__Class *)0x0) goto code_?;
              while( true ) {
                this_03 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                          MeshFilter_get_sharedMesh((MeshFilter *)pTStack_23,(MethodInfo *)0x0);
                if (this_03 == (Mesh *)0x0) goto code_?;
                iVar35 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                                   (this_03,(MethodInfo *)0x0);
                if (iVar35 <= submeshIndex) break;
                pMStack_31 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                             MeshFilter_get_sharedMesh((MeshFilter *)pTStack_23,(MethodInfo *)0x0);
                pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_get_transform((Component *)pTStack_23,(MethodInfo *)0x0);
                if (pTVar27 == (Transform *)0x0) goto code_?;
                pMVar36 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localToWorldMatrix
                                    ((Matrix4x4 *)&stack0xffffff08,pTVar27,(MethodInfo *)0x0);
                fVar9 = pMVar36->m00;
                fVar26 = pMVar36->m10;
                fVar25 = pMVar36->m20;
                fVar37 = pMVar36->m30;
                QStack_11.x = pMVar36->m01;
                QStack_11.y = pMVar36->m11;
                QStack_11.z = pMVar36->m21;
                QStack_11.w = pMVar36->m31;
                fStack_32 = pMVar36->m02;
                IStack_6.klass = (InsertCursor__Class *)pMVar36->m12;
                IStack_6.monitor = (MonitorData *)pMVar36->m22;
                IStack_6.fields._._._._.m_CachedPtr = (Component__Fields)pMVar36->m32;
                fStack_38 = pMVar36->m03;
                VStack_5.x = pMVar36->m13;
                VStack_5.y = pMVar36->m23;
                VStack_5.z = pMVar36->m33;
                material = (this->fields).previewMaterial;
                iVar35 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                                   (StringLiteral_Default,(MethodInfo *)0x0);
                camera = (this->fields).mainCamera;
                if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                matrix.m10 = fVar26;
                matrix.m00 = fVar9;
                matrix.m20 = fVar25;
                matrix.m30 = fVar37;
                matrix.m01 = QStack_11.x;
                matrix.m11 = QStack_11.y;
                matrix.m21 = QStack_11.z;
                matrix.m31 = QStack_11.w;
                matrix.m02 = fStack_32;
                matrix.m12 = (float)IStack_6.klass;
                matrix.m22 = (float)IStack_6.monitor;
                matrix.m32 = (float)IStack_6.fields._._._._.m_CachedPtr;
                matrix.m03 = fStack_38;
                matrix.m13 = VStack_5.x;
                matrix.m23 = VStack_5.y;
                matrix.m33 = VStack_5.z;
                UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3
                          (pMStack_31,matrix,material,iVar35,camera,submeshIndex,(MethodInfo *)0x0);
                submeshIndex = submeshIndex + 1;
              }
              IStack_6.fields.renderers =
                   (MeshRenderer__Array *)&(IStack_6.fields.renderers)->monitor;
            }
            if ((this->fields).pointerWasUp == 0) {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVInputWrapper);
              }
              bVar7 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                 (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
              if (bVar7 != 0) {
                if ((this->fields).isNewPrototype != 0) {
                  this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                      ((MethodInfo *)0x0);
                  if (this_04 != (MainCameraManager *)0x0) {
                    pMStack_34 = (MeshFilter__Array *)
                                 MainCameraManager::MainCameraManager_get_CurrentCamera
                                           (this_04,(MethodInfo *)0x0);
                    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                        (e,(MethodInfo *)0x0);
                    if (pMStack_34 != (MeshFilter__Array *)0x0) {
                      func_?(0xe,pMStack_34,pMVar1,0x40000000,0,0,0,0,0,0);
                      pMStack_31 = (Mesh *)0x0;
                      pOVar39 = (Object *)func_?(TypeInfo__EditorEvent,&pMStack_31);
                      FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar39,(MethodInfo *)0x0);
                      (this->fields).pointerWasUp = 0;
                      return;
                    }
                  }
                  goto code_?;
                }
                pMStack_34 = (MeshFilter__Array *)0x2f;
                pOVar39 = (Object *)func_?(TypeInfo__EditorEvent,&pMStack_34);
                FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar39,(MethodInfo *)0x0);
              }
            }
            (this->fields).pointerWasUp = 0;
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Exit
               (ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pIVar1 = (this->fields).insertCursor;
  if (pIVar1 != (InsertCursor *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar1,0,(MethodInfo *)0x0);
    pIVar1 = (this->fields).insertCursor;
    if (pIVar1 != (InsertCursor *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pIVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) &&
          (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
          pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar5 = (pGVar4->fields).LaserCommands,
         pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                  (pGVar5,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar3 != (GameEventManager *)0x0) &&
            (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode,
            pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar5 = (pGVar4->fields).LaserCommands,
           pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                    (pGVar5,0,(MethodInfo *)0x0);
          pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                             ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
          pVVar7 = ESInsert_ComputeSnapPosition
                             ((Vector3 *)&puStack_8,this,pMVar6,(this->fields).insertPosition,
                              (MethodInfo *)0x0);
          uVar9._0_4_ = pVVar7->x;
          uVar9._4_4_ = pVVar7->y;
          fVar10 = pVVar7->z;
          pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                             ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
          if (((pMVar6 != (MVWorldObjectClient *)0x0) &&
              (pGVar2 = (pMVar6->fields).gameObject, pGVar2 != (GameObject *)0x0)) &&
             (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar2,(MethodInfo *)0x0),
             this_00 != (Transform *)0x0)) {
            value.z = fVar10;
            value.x = (float)(int)uVar9;
            value.y = (float)(int)((ulonglong)uVar9 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_00,value,(MethodInfo *)0x0);
            pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                               ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
            pMVar11 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
            if ((((pMVar11 != (MVWorldObjectClient *)0x0) &&
                 ((*(code *)(pMVar11->klass->vtable).get_WorldPosition_1.method)(),
                 pMVar6 != (MVWorldObjectClient *)0x0)) &&
                ((*(code *)(pMVar6->klass->vtable).set_SyncPos.method)(), _UNK_? != 0)) &&
               (_UNK_? != (MVNetworkSelector *)0x0)) {
              MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                        (_UNK_?,*(HashSet_1_System_Int32_ **)(_UNK_? + 8),
                         (MethodInfo *)0x0);
              pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                 ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
              if ((pMVar6 != (MVWorldObjectClient *)0x0) &&
                 (pGVar2 = (pMVar6->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar2,1,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Boolean WorldPick(MVWorldObjectClient, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::ESInsert::ESInsert_WorldPick
               (ESInsert *this,MVWorldObjectClient *wo,Vector3 *position,Vector3 *rawPosition,
               Vector3 *normal,MethodInfo *method)

{
  func_?(&stack0xffffff90,0,0x48);
  bVar1 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&stack0xffffff90,(this->fields).woIgnoreList,-0x40005,
                     (MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  fStack_2 = (float)((uint)fStack_3 ^
                     __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  fVar4 = (float)((uint)fStack_5 ^
                 __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  surfaceNormal.y = fVar4;
  surfaceNormal.x =
       (float)((uint)fStack_6 ^
              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  surfaceNormal.z = fStack_2;
  pVVar7 = ESInsert_ComputeObjectOffset(&VStack_8,this,wo,surfaceNormal,(MethodInfo *)0x0);
  uStack_9._0_4_ = (this->fields).insertOffset.x;
  uStack_9._4_4_ = (this->fields).insertOffset.y;
  fStack_2 = (this->fields).insertOffset.z;
  uStack_10._0_4_ = pVVar7->x;
  uStack_10._4_4_ = pVVar7->y;
  fStack_11 = pVVar7->z;
  fVar12 = 0.0;
  puVar13 = &UNK_?;
  fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  fVar14 = fVar14 * _UNK_?;
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
  }
  else if (_UNK_? < fVar14) {
    fVar14 = _UNK_?;
  }
  fStack_2 = (fStack_11 - fStack_2) * fVar14 + fStack_2;
  uStack_9._0_4_ = ((float)uStack_10 - (float)uStack_9) * fVar14 + (float)uStack_9;
  uStack_9._4_4_ = (uStack_10._4_4_ - uStack_9._4_4_) * fVar14 + uStack_9._4_4_;
  (this->fields).insertOffset.x = (float)uStack_9;
  (this->fields).insertOffset.y = uStack_9._4_4_;
  (this->fields).insertOffset.z = fStack_2;
  position->x = fVar4 - (float)uStack_9;
  position->y = (float)puVar13 - uStack_9._4_4_;
  position->z = fVar12 - fStack_2;
  rawPosition->x = fVar4;
  rawPosition->y = (float)puVar13;
  rawPosition->z = fVar12;
  normal->x = fStack_6;
  normal->y = fStack_5;
  normal->z = fStack_3;
  return 1;
}


/* ESInsert() */

void Assembly-CSharp.dll::ESInsert::ESInsert__ctor(ESInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    cRam_? = '\x01';
  }
  (this->fields).distanceInFreeSpace = 5.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).insertPosition.x = (pVVar1->zeroVector).x;
  (this->fields).insertPosition.y = fVar2;
  (this->fields).insertPosition.z = fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).insertOffset.x = (pVVar1->zeroVector).x;
  (this->fields).insertOffset.y = fVar2;
  (this->fields).insertOffset.z = fVar3;
  this_00 = (HashSet_1_System_Int32_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
  HashSet_1_System_Int32___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).woIgnoreList = this_00;
  func_?(&(this->fields).woIgnoreList,this_00);
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

