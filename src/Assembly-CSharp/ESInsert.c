
/* Vector3 ComputeObjectOffset(MVWorldObjectClient, Vector3) */

Vector3 * Assembly-CSharp.dll::ESInsert::ESInsert_ComputeObjectOffset(Vector3 *__return_storage_ptr__,ESInsert *this,MVWorldObjectClient *wo,Vector3 surfaceNormal,MethodInfo *method)

{
  if (wo != (MVWorldObjectClient *)0x0) {
    pVVar1 = MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersLocal(wo,BoundsContext__Enum_Insert,(MethodInfo *)0x0);
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
          fVar10 = (float)uStack_5 * VStack_8.x + uStack_5._4_4_ * surfaceNormal.y + fStack_6 * surfaceNormal.z;
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
        pVVar14 = (Vector3 *)(*(code *)(wo->klass->vtable).get_Scale.method)(auStack_15,wo,(wo->klass->vtable).set_Scale.methodPtr);
        a.z = fVar13;
        a._0_8_ = uStack_16;
        pVVar14 = MathFunctions::MathFunctions_Multiply(&VStack_8,a,*pVVar14,(MethodInfo *)0x0);
        uVar17 = pVVar14->x;
        uVar18 = pVVar14->y;
        uVar19 = (this->fields).pivotToOrigin.x;
        uVar20 = (this->fields).pivotToOrigin.y;
        fVar13 = (float)uVar19 + (float)uVar17;
        fVar10 = (float)uVar20 + (float)uVar18;
        uStack_21 = CONCAT44(fVar10,fVar13);
        fVar22 = (this->fields).pivotToOrigin.z + pVVar14->z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar23 = (double)(fVar10 * fVar10 + fVar13 * fVar13 + fVar22 * fVar22);
        if (dVar23 < 0.0) {
          func_?();
        }
        else {
          dVar23 = SQRT(dVar23);
        }
        fVar24 = (float)dVar23;
        if (1e-05 < fVar24) {
          fVar25 = fVar22 / fVar24;
          uVar26 = CONCAT44(fVar10 / fVar24,fVar13 / fVar24);
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
        fStack_27 = (float)((ulonglong)uVar26 >> 0x20);
        fStack_28 = (float)uVar26;
        fVar13 = VStack_8.x * fStack_28 + surfaceNormal.y * fStack_27 + surfaceNormal.z * fVar25;
        if (fStack_3 < fVar13) {
          uStack_5 = uStack_21;
          fStack_3 = fVar13;
          fStack_6 = fVar22;
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

Vector3 * Assembly-CSharp.dll::ESInsert::ESInsert_ComputeSnapPosition(Vector3 *__return_storage_ptr__,ESInsert *this,MVWorldObjectClient *wo,Vector3 originalPos,MethodInfo *method)

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
        if (pIVar2->interfaceOffsets[uVar3].interfaceType == (Il2CppClass *)TypeInfo__IEditModeUI) {
          ppMVar5 = &(&(pIVar1->klass->vtable).IsGridSnap)[pIVar2->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar5 = (MethodInfo **)func_?();
code_?:
    cVar6 = (*(code *)*ppMVar5)();
    if (cVar6 == '\0') {
      uVar7 = 0x3d800000;
    }
    else {
      uVar7 = 0x3f800000;
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      puVar8 = (undefined8 *)(*(code *)(wo->klass->vtable).GetClosestGridPoint.method)(auStack_9,wo,uVar7);
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

void Assembly-CSharp.dll::ESInsert::ESInsert_DrawObject(ESInsert *this,GameObject *go,MethodInfo *method)

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
      while( true ) {
        if (this_00 == (MeshFilter *)0x0) goto code_?;
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh(this_00,(MethodInfo *)0x0);
        if (pMVar4 == (Mesh *)0x0) goto code_?;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount(pMVar4,(MethodInfo *)0x0);
        if (iVar5 <= submeshIndex) break;
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh(this_00,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 == (Transform *)0x0) goto code_?;
        pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix((Matrix4x4 *)&stack0xffffff64,this_01,(MethodInfo *)0x0);
        matrix = *pMVar6;
        material = (this->fields).previewMaterial;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
        camera = (this->fields).mainCamera;
        if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3(pMVar4,matrix,material,iVar5,camera,submeshIndex,(MethodInfo *)0x0);
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

bool Assembly-CSharp.dll::ESInsert::ESInsert_DrawPlanePick(ESInsert *this,MVWorldObjectClient *wo,Vector3 *position,Vector3 *rawPosition,Vector3 *normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__);
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
      pSVar5 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
      if ((pSVar5 != (SpawnRoleDataMediator *)0x0) && (this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar5->fields).position, this_00 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) {
        pVVar3 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::SpawnRoleVariable_1_UnityEngine_Vector3__get_Value((Vector3 *)&stack0xffffffe0,this_00,MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__);
        uVar6 = pVVar3->y;
        if ((float)uVar6 <= fVar4) {
          pVVar3 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
          uVar7._0_4_ = pVVar3->x;
          uVar7._4_4_ = pVVar3->y;
          fVar4 = pVVar3->z;
        }
        else {
          pVVar3 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
          uVar8._0_4_ = pVVar3->x;
          uVar8._4_4_ = pVVar3->y;
          fVar4 = -pVVar3->z;
          uVar7 = uVar8 ^ 0x8000000080000000;
        }
        fVar9 = 0.0;
        fVar10 = (float)uVar7;
        fVar11 = (float)(uVar7 >> 0x20);
        surfaceNormal.z = fVar4;
        surfaceNormal.x = (float)(int)uVar7;
        surfaceNormal.y = (float)(int)(uVar7 >> 0x20);
        pVVar3 = ESInsert_ComputeObjectOffset((Vector3 *)&stack0xffffffc8,this,wo,surfaceNormal,(MethodInfo *)0x0);
        uVar12 = pVVar3->x;
        uVar13 = pVVar3->y;
        fVar14 = pVVar3->z;
        position->x = fVar4 - (float)uVar12;
        position->y = fVar9 - (float)uVar13;
        position->z = fVar2 - fVar14;
        rawPosition->x = fVar4;
        rawPosition->y = fVar9;
        rawPosition->z = fVar2;
        uVar7 = CONCAT44(fVar10,wo) ^ 0x8000000080000000;
        normal->x = (float)(int)uVar7;
        normal->y = (float)(int)(uVar7 >> 0x20);
        normal->z = -fVar11;
        return 1;
      }
      func_?();
      pcVar15 = (code *)swi(3);
      bVar1 = (*pcVar15)();
      return bVar1;
    }
  }
  return 0;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Enter(ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_);
    func_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&TypeInfo__MVGroup);
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&InsertCursor_MethodInfo__UnityEngine__Object__Instantiate<InsertCursor>_InsertCursor_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_IsNewPrototype);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  ppCVar2 = &(this->fields).mainCamera;
  *ppCVar2 = pCVar1;
  func_?(ppCVar2,pCVar1);
  pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar3 == (GameEventManager *)0x0) || (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode, pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) || (pGVar5 = (pGVar4->fields).LaserCommands, pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) goto code_?;
  UnityEngine.AudioModule.dll::UnityEngine::AudioClip::AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)pGVar5,1,(MethodInfo *)0x0);
  pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar3 == (GameEventManager *)0x0) || (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode, pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) || (pGVar5 = (pGVar4->fields).LaserCommands, pGVar5 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) goto code_?;
  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState(pGVar5,1,(MethodInfo *)0x0);
  exists = (this->fields).previewMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)exists,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar7 == (PrefabPool *)0x0) goto code_?;
    (this->fields).previewMaterial = (pPVar7->fields).insertPreviewMaterial;
    func_?();
  }
  if (e == (EditorStateMachine *)0x0) goto code_?;
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
  fVar9 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius(pMVar8,(MethodInfo *)0x0);
  if (*ppCVar2 == (Camera *)0x0) goto code_?;
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(*ppCVar2,(MethodInfo *)0x0);
  dVar11 = (double)(fVar10 * 0.5 * 0.8 * 0.017453292);
  func_?();
  fVar10 = 5.0;
  if (5.0 <= fVar9 / (float)dVar11) {
    fVar10 = fVar9 / (float)dVar11;
  }
  (this->fields).distanceInFreeSpace = fVar10;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pPVar7 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar7 == (PrefabPool *)0x0) goto code_?;
  pIVar12 = (pPVar7->fields).insertCursor;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pIVar12 = (InsertCursor *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pIVar12,InsertCursor_MethodInfo__UnityEngine__Object__Instantiate<InsertCursor>_InsertCursor_);
  (this->fields).insertCursor = pIVar12;
  func_?();
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar13 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar10 = (pVVar13->zeroVector).y;
  fVar9 = (pVVar13->zeroVector).z;
  (this->fields).insertOffset.x = (pVVar13->zeroVector).x;
  (this->fields).insertOffset.y = fVar10;
  (this->fields).insertOffset.z = fVar9;
  if (*ppCVar2 == (Camera *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)*ppCVar2,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&fStack_15,pTVar14,(MethodInfo *)0x0);
  if (*ppCVar2 == (Camera *)0x0) goto code_?;
  pTVar14 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)*ppCVar2,(MethodInfo *)0x0);
  if (pTVar14 == (Transform *)0x0) goto code_?;
  fVar16 = 0.0;
  pVVar17 = (Vector3 *)&stack0xffffffd0;
  pVVar18 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(pVVar17,pTVar14,(MethodInfo *)0x0);
  uVar19 = pVVar18->x;
  uVar20 = pVVar18->y;
  fVar10 = pVVar18->z;
  fVar9 = (this->fields).distanceInFreeSpace;
  (this->fields).insertPosition.x = (float)pVVar17 + (float)uVar19 * fVar9;
  (this->fields).insertPosition.y = (float)pTVar14 + (float)uVar20 * fVar9;
  (this->fields).insertPosition.z = fVar16 + fVar10 * fVar9;
  fStack_15 = (float)uVar19;
  puStack_21 = (undefined *)uVar20;
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(0,(MethodInfo *)0x0);
  pSVar22 = (e->fields).selectionController;
  if ((pSVar22 == (SelectionController *)0x0) || (this_00 = (e->fields).networkSelector, this_00 == (MVNetworkSelector *)0x0)) goto code_?;
  bVar6 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(this_00,(pSVar22->fields).selectedIDs,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar23 = (undefined8 *)(*(code *)(pMVar8->klass->vtable).get_WorldPivot.method)();
  fVar9 = *(float *)(puVar23 + 1);
  fStack_15 = (float)*puVar23;
  puStack_21 = (undefined *)((ulonglong)*puVar23 >> 0x20);
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar23 = (undefined8 *)(*(code *)(pMVar8->klass->vtable).get_WorldPosition_1.method)();
  uVar24 = *puVar23;
  fVar10 = *(float *)(puVar23 + 1);
  pCVar1 = *ppCVar2;
  (this->fields).pivotToOrigin.x = (float)(ILogger *)uVar24 - fStack_15;
  (this->fields).pivotToOrigin.y = (float)(WorldObjectClientRef *)((ulonglong)uVar24 >> 0x20) - (float)puStack_21;
  (this->fields).pivotToOrigin.z = fVar10 - fVar9;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar17 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition((Vector3 *)&stack0xffffffd0,(DefaultEventSystem_Input *)0x0,in_stack_25);
  pIVar26 = (ILogger *)pVVar17->x;
  pVVar17 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition((Vector3 *)&stack0xffffffd0,(DefaultEventSystem_Input *)0x0,in_stack_25);
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pos.y = pVVar17->y;
  pos.x = (float)pIVar26;
  pos.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2((Ray *)&stack0xffffffc4,pCVar1,pos,(MethodInfo *)0x0);
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint((Vector3 *)&stack0xffffffd0,(Ray *)&stack0xffffffac,(this->fields).distanceInFreeSpace,(MethodInfo *)0x0);
  uVar27 = pVVar17->x;
  uVar28 = pVVar17->y;
  uVar29 = (this->fields).pivotToOrigin.x;
  uVar30 = (this->fields).pivotToOrigin.y;
  originalPos.y = (float)uVar30 + (float)uVar28;
  originalPos.x = (float)uVar29 + (float)uVar27;
  originalPos.z = (this->fields).pivotToOrigin.z + pVVar17->z;
  fStack_15 = (float)uVar27;
  puStack_21 = (undefined *)uVar28;
  pVVar17 = ESInsert_ComputeSnapPosition((Vector3 *)&stack0xffffffd0,this,pMVar8,originalPos,(MethodInfo *)0x0);
  uVar31 = pVVar17->x;
  puStack_21 = (undefined *)uVar31;
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar8 == (MVWorldObjectClient *)0x0) goto code_?;
  (*(code *)(pMVar8->klass->vtable).set_WorldPosition.method)();
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar8 == (MVWorldObjectClient *)0x0) || (pGVar32 = (pMVar8->fields).gameObject, pGVar32 == (GameObject *)0x0)) goto code_?;
  pMVar33 = (MeshFilter__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(pGVar32,UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
  (this->fields).previewMeshes = pMVar33;
  func_?();
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)(e->fields)._.data;
  if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::TextureId]::Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey(this_01,(Object *)StringLiteral_IsNewPrototype,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_);
  (this->fields).isNewPrototype = bVar6;
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar8 == (MVWorldObjectClient *)0x0) {
code_?:
    this_02 = (HashSet_1_System_Int32_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::HashSet_1_System_Int32___ctor(this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar8 == (MVWorldObjectClient *)0x0) || (this_02 == (HashSet_1_System_Int32_ *)0x0)) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::HashSet_1_System_Int32__System_Collections_Generic_ICollection_T__Add(this_02,(pMVar8->fields)._.id,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
  }
  else {
    bVar34 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar8->klass->_1).naturalAligment < bVar34) || ((MVGroup__Class *)(pMVar8->klass->_1).typeHierarchy[bVar34 - 1] != TypeInfo__MVGroup)) goto code_?;
    pMVar35 = (MVGroup *)EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar35 == (MVGroup *)0x0) goto code_?;
    bVar34 = (TypeInfo__MVGroup->_1).naturalAligment;
    if ((pMVar35->klass->_1).naturalAligment < bVar34) goto code_?;
    ppIVar36 = (pMVar35->klass->_1).typeHierarchy;
    if ((MVGroup__Class *)ppIVar36[bVar34 - 1] != TypeInfo__MVGroup) goto code_?;
    this_04 = (MVGroup *)0x0;
    if ((MVGroup__Class *)ppIVar36[bVar34 - 1] == TypeInfo__MVGroup) {
      this_04 = pMVar35;
    }
    this_02 = MVGroup::MVGroup_GetHierarchyWorldObjectIDs(this_04,(MethodInfo *)0x0);
    this = (ESInsert *)&stack0xffffffd0;
  }
  (this->fields).woIgnoreList = this_02;
  func_?();
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar8 != (MVWorldObjectClient *)0x0) && (pGVar32 = (pMVar8->fields).gameObject, pGVar32 != (GameObject *)0x0)) {
    iVar37 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar32,(MethodInfo *)0x0);
    iVar38 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
    if (iVar37 == iVar38) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_03 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_IsLogicRendered(this_03,1,(MethodInfo *)0x0);
    }
    pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar8 != (MVWorldObjectClient *)0x0) && (pGVar32 = (pMVar8->fields).gameObject, pGVar32 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar32,0,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        (this->fields).pointerWasUp = 1;
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Execute(ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (((e == (EditorStateMachine *)0x0) || (pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0), pMVar1 == (MVWorldObjectClient *)0x0)) || (this_00 = (pMVar1->fields).gameObject, this_00 == (GameObject *)0x0)) goto code_?;
  pMVar2 = (MeshFilter__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren(this_00,UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
  pCStack_3 = (Camera *)&(this->fields).previewMeshes;
  *(MeshFilter__Array **)pCStack_3 = pMVar2;
  func_?(pCStack_3,pMVar2);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57((Object *)this,(ExceptionArgument__Enum)e,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMStack_4 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__);
    cRam_? = '\x01';
  }
  bVar5 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
  if (bVar5 == 0) {
code_?:
    pMStack_6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    func_?(&stack0xffffff08,0,0x48);
    bVar5 = EditModeObjectPicker::EditModeObjectPicker_Pick((VoxelHit *)&stack0xffffff08,(this->fields).woIgnoreList,-0x40005,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      QStack_7.w = -in_stack_8;
      uVar9 = CONCAT44(in_stack_10,in_stack_11) ^ 0x8000000080000000;
      surfaceNormal.z = QStack_7.w;
      surfaceNormal.x = (float)(int)uVar9;
      surfaceNormal.y = (float)(int)(uVar9 >> 0x20);
      pVVar12 = ESInsert_ComputeObjectOffset((Vector3 *)&RStack_13.m_Origin.z,this,pMStack_6,surfaceNormal,(MethodInfo *)0x0);
      uStack_14._0_4_ = (this->fields).insertOffset.x;
      uStack_14._4_4_ = (this->fields).insertOffset.y;
      pMStack_15 = (MVWorldObjectClient *)(this->fields).insertOffset.z;
      uStack_16._0_4_ = pVVar12->x;
      uStack_16._4_4_ = pVVar12->y;
      pMStack_17 = (MVWorldObjectClient *)pVVar12->z;
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      pMStack_6 = (MVWorldObjectClient *)(fVar18 * 10.0);
      if ((float)pMStack_6 < 0.0) {
        pMVar1 = (MVWorldObjectClient *)0x0;
      }
      else {
        pMVar1 = pMStack_6;
        if (1.0 < (float)pMStack_6) {
          pMVar1 = (MVWorldObjectClient *)0x3f800000;
        }
      }
      fVar19 = ((float)pMStack_17 - (float)pMStack_15) * (float)pMVar1 + (float)pMStack_15;
      fVar18 = ((float)uStack_16 - (float)uStack_14) * (float)pMVar1 + (float)uStack_14;
      fVar20 = (uStack_16._4_4_ - uStack_14._4_4_) * (float)pMVar1 + uStack_14._4_4_;
      RStack_13.m_Origin.y = in_stack_21;
      RStack_13.m_Origin.x = in_stack_22;
      (this->fields).insertOffset.x = fVar18;
      (this->fields).insertOffset.y = fVar20;
      QStack_7.w = (float)in_stack_23 - fVar19;
      (this->fields).insertOffset.z = fVar19;
      (this->fields).insertPosition.x = in_stack_22 - fVar18;
      (this->fields).insertPosition.y = in_stack_21 - fVar20;
      (this->fields).insertPosition.z = QStack_7.w;
      pIVar24 = (this->fields).insertCursor;
      pMStack_4 = in_stack_23;
      if ((pIVar24 == (InsertCursor *)0x0) || (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar24,(MethodInfo *)0x0), pTVar25 == (Transform *)0x0)) goto code_?;
      value_00.z = (float)in_stack_23;
      value_00.x = RStack_13.m_Origin.x;
      value_00.y = RStack_13.m_Origin.y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar25,value_00,(MethodInfo *)0x0);
      pIVar24 = (this->fields).insertCursor;
      if (pIVar24 == (InsertCursor *)0x0) goto code_?;
      pMStack_6 = (MVWorldObjectClient *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar24,(MethodInfo *)0x0);
      forward_00.y = in_stack_10;
      forward_00.x = in_stack_11;
      forward_00.z = in_stack_8;
      pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1(&QStack_7,forward_00,(MethodInfo *)0x0);
      pMVar1 = pMStack_6;
      goto code_?;
    }
    pIVar24 = (this->fields).insertCursor;
    if (pIVar24 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar24,0,(MethodInfo *)0x0);
    uStack_14._0_4_ = (this->fields).insertOffset.x;
    uStack_14._4_4_ = (this->fields).insertOffset.y;
    pMStack_15 = (MVWorldObjectClient *)(this->fields).insertOffset.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_16._0_4_ = (pVVar27->zeroVector).x;
    uStack_16._4_4_ = (pVVar27->zeroVector).y;
    pMStack_17 = (MVWorldObjectClient *)(pVVar27->zeroVector).z;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar18 = fVar18 * 10.0;
    if (fVar18 < 0.0) {
      fVar18 = 0.0;
    }
    else if (1.0 < fVar18) {
      fVar18 = 1.0;
    }
    QStack_7.w = ((float)pMStack_17 - (float)pMStack_15) * fVar18 + (float)pMStack_15;
    (this->fields).insertOffset.x = ((float)uStack_16 - (float)uStack_14) * fVar18 + (float)uStack_14;
    (this->fields).insertOffset.y = (uStack_16._4_4_ - uStack_14._4_4_) * fVar18 + uStack_14._4_4_;
    (this->fields).insertOffset.z = QStack_7.w;
    pMStack_28 = (MVWorldObjectClient *)(this->fields).mainCamera;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar12 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition((Vector3 *)&QStack_7,(DefaultEventSystem_Input *)0x0,in_stack_29);
    uStack_16 = CONCAT44(uStack_16._4_4_,pVVar12->x);
    pVVar12 = UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::DefaultEventSystem+Input::DefaultEventSystem_Input_get_mousePosition((Vector3 *)&QStack_7,(DefaultEventSystem_Input *)0x0,in_stack_29);
    pMStack_17 = (MVWorldObjectClient *)0x0;
    uStack_16 = CONCAT44(pVVar12->y,(float)uStack_16);
    if (pMStack_28 == (MVWorldObjectClient *)0x0) goto code_?;
    pos.y = pVVar12->y;
    pos.x = (float)uStack_16;
    pos.z = 0.0;
    pRVar30 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2(&RStack_13,(Camera *)pMStack_28,pos,(MethodInfo *)0x0);
    fVar18 = (pRVar30->m_Origin).x;
    fVar19 = (pRVar30->m_Origin).y;
    pMVar1 = (MVWorldObjectClient *)(pRVar30->m_Origin).z;
    pMVar31 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint((Vector3 *)&QStack_7,(Ray *)&stack0xffffff54,(this->fields).distanceInFreeSpace,(MethodInfo *)0x0);
    uStack_14._0_4_ = pVVar12->x;
    uStack_14._4_4_ = pVVar12->y;
    pMStack_15 = (MVWorldObjectClient *)pVVar12->z;
    uStack_16._0_4_ = (this->fields).pivotToOrigin.x;
    uStack_16._4_4_ = (this->fields).pivotToOrigin.y;
    pMStack_17 = (MVWorldObjectClient *)(this->fields).pivotToOrigin.z;
    QStack_7.w = (float)pMStack_17 + (float)pMStack_15;
    originalPos.y = uStack_16._4_4_ + uStack_14._4_4_;
    originalPos.x = (float)uStack_16 + (float)uStack_14;
    originalPos.z = QStack_7.w;
    pVVar12 = ESInsert_ComputeSnapPosition((Vector3 *)&QStack_7,this,pMVar31,originalPos,(MethodInfo *)0x0);
    uVar32 = pVVar12->x;
    uVar33 = pVVar12->y;
    uStack_16._0_4_ = (this->fields).insertPosition.x;
    uStack_16._4_4_ = (this->fields).insertPosition.y;
    QStack_7.w = (this->fields).insertPosition.z - (float)pMVar1;
    QStack_7.y = (float)uStack_16 - fVar18;
    uStack_14 = CONCAT44(fVar19,fVar18);
    QStack_7.z = uStack_16._4_4_ - fVar19;
    VStack_34.z = pVVar12->z - (float)pMVar1;
    VStack_34.x = (float)uVar32 - fVar18;
    VStack_34.y = (float)uVar33 - fVar19;
    pMStack_15 = pMVar1;
    pMStack_17 = (MVWorldObjectClient *)VStack_34.z;
    puVar35 = (undefined8 *)func_?();
    uStack_16 = *puVar35;
    pMStack_17 = *(MVWorldObjectClient **)(puVar35 + 1);
    fVar36 = (float10)func_?(&QStack_7.y,0);
    pMStack_6 = (MVWorldObjectClient *)(float)fVar36;
    fVar36 = (float10)func_?(&VStack_34,0);
    pMStack_4 = (MVWorldObjectClient *)(float)fVar36;
    fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pMStack_28 = (MVWorldObjectClient *)(fVar18 * 5.0);
    if ((float)pMStack_28 < 0.0) {
      pMVar1 = (MVWorldObjectClient *)0x0;
    }
    else {
      pMVar1 = pMStack_28;
      if (1.0 < (float)pMStack_28) {
        pMVar1 = (MVWorldObjectClient *)0x3f800000;
      }
    }
    fVar18 = ((float)pMStack_4 - (float)pMStack_6) * (float)pMVar1 + (float)pMStack_6;
    fVar19 = fVar18 * (float)pMStack_17 + (float)pMStack_15;
    fVar20 = fVar18 * (float)uStack_16 + (float)uStack_14;
    fVar18 = fVar18 * uStack_16._4_4_ + uStack_14._4_4_;
    (this->fields).insertPosition.x = fVar20;
    (this->fields).insertPosition.y = fVar18;
    uStack_16._0_4_ = (this->fields).pivotToOrigin.x;
    uStack_16._4_4_ = (this->fields).pivotToOrigin.y;
    (this->fields).insertPosition.z = fVar19;
    pMStack_17 = (MVWorldObjectClient *)(this->fields).pivotToOrigin.z;
    QStack_7.w = fVar19 - (float)pMStack_17;
    RStack_13.m_Origin.y = fVar18 - uStack_16._4_4_;
    RStack_13.m_Origin.x = fVar20 - (float)uStack_16;
    pMStack_4 = (MVWorldObjectClient *)QStack_7.w;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar27 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_34.x = (pVVar27->zeroVector).x;
    VStack_34.y = (pVVar27->zeroVector).y;
    VStack_34.z = (pVVar27->zeroVector).z;
    bVar5 = DrawPlane::DrawPlane_Pick(&VStack_34,(MethodInfo *)0x0);
    if (bVar5 == 0) goto code_?;
    pVVar12 = DrawPlane::DrawPlane_get_Pos((Vector3 *)&QStack_7,(MethodInfo *)0x0);
    pMStack_28 = (MVWorldObjectClient *)pVVar12->y;
    pSVar37 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
    if ((pSVar37 == (SpawnRoleDataMediator *)0x0) || (this_01 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar37->fields).position, this_01 == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) goto code_?;
    pVVar12 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::SpawnRoleVariable_1_UnityEngine_Vector3__get_Value((Vector3 *)&QStack_7,this_01,MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__);
    uStack_16._0_4_ = pVVar12->x;
    uStack_16._4_4_ = pVVar12->y;
    pMStack_17 = (MVWorldObjectClient *)pVVar12->z;
    if (uStack_16._4_4_ <= (float)pMStack_28) {
      pVVar12 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&QStack_7,(MethodInfo *)0x0);
      uStack_14._0_4_ = pVVar12->x;
      uStack_14._4_4_ = pVVar12->y;
      pMStack_15 = (MVWorldObjectClient *)pVVar12->z;
    }
    else {
      pVVar12 = RTG::TriangPrismShape3D::TriangPrismShape3D_get_ModelUp((Vector3 *)&QStack_7,(MethodInfo *)0x0);
      uVar9._0_4_ = pVVar12->x;
      uVar9._4_4_ = pVVar12->y;
      pMStack_15 = (MVWorldObjectClient *)((uint)pVVar12->z ^ 0x80000000);
      uStack_14 = uVar9 ^ 0x8000000080000000;
      QStack_7.w = (float)pMStack_15;
    }
    surfaceNormal_00.z = (float)pMStack_15;
    surfaceNormal_00.x = (float)(int)uStack_14;
    surfaceNormal_00.y = (float)(int)(uStack_14 >> 0x20);
    pVVar12 = ESInsert_ComputeObjectOffset((Vector3 *)&QStack_7,this,pMStack_4,surfaceNormal_00,(MethodInfo *)0x0);
    uVar38 = pVVar12->x;
    uVar39 = pVVar12->y;
    fVar19 = VStack_34.x - (float)uVar38;
    fVar18 = VStack_34.y - (float)uVar39;
    QStack_7.w = VStack_34.z - pVVar12->z;
    RStack_13.m_Origin.x = VStack_34.x;
    RStack_13.m_Origin.y = VStack_34.y;
    RStack_13.m_Origin.z = 0.0;
    RStack_13.m_Direction.x = 0.0;
    pMStack_4 = (MVWorldObjectClient *)VStack_34.z;
    uStack_16 = uStack_14 ^ 0x8000000080000000;
    pMStack_17 = (MVWorldObjectClient *)-(float)pMStack_15;
    (this->fields).insertPosition.x = fVar19;
    (this->fields).insertPosition.y = fVar18;
    (this->fields).insertPosition.z = QStack_7.w;
    pIVar24 = (this->fields).insertCursor;
    if ((pIVar24 == (InsertCursor *)0x0) || (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar24,(MethodInfo *)0x0), pTVar25 == (Transform *)0x0)) goto code_?;
    value.z = VStack_34.z;
    value.x = RStack_13.m_Origin.x;
    value.y = RStack_13.m_Origin.y;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar25,value,(MethodInfo *)0x0);
    pIVar24 = (this->fields).insertCursor;
    if (pIVar24 == (InsertCursor *)0x0) goto code_?;
    pMStack_28 = (MVWorldObjectClient *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar24,(MethodInfo *)0x0);
    forward.z = (float)pMStack_17;
    forward.x = (float)uStack_16;
    forward.y = uStack_16._4_4_;
    pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1(&QStack_7,forward,(MethodInfo *)0x0);
    pMVar1 = pMStack_28;
code_?:
    if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation((Transform *)pMVar1,*pQVar26,(MethodInfo *)0x0);
    pIVar24 = (this->fields).insertCursor;
    if (pIVar24 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar24,1,(MethodInfo *)0x0);
  }
  pGVar40 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar40 != (GameEventManager *)0x0) && (pGVar41 = (pGVar40->fields).AvatarCommandsBuildMode, pGVar41 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (this_02 = (pGVar41->fields).LaserCommands, this_02 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    to.z = (float)pMStack_4;
    to.x = RStack_13.m_Origin.x;
    to.y = RStack_13.m_Origin.y;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition(this_02,to,(MethodInfo *)0x0);
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pVVar12 = ESInsert_ComputeSnapPosition((Vector3 *)&RStack_13.m_Origin.z,this,pMVar1,(this->fields).insertPosition,(MethodInfo *)0x0);
    uStack_16._0_4_ = pVVar12->x;
    uStack_16._4_4_ = pVVar12->y;
    pMStack_17 = (MVWorldObjectClient *)pVVar12->z;
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pMVar31 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar31 != (MVWorldObjectClient *)0x0) {
      pIStack_42 = (pMVar31->klass->vtable).set_WorldPosition.methodPtr;
      RStack_13.m_Direction.y = (float)&RStack_13.m_Origin.z;
      RStack_13.m_Direction.x = (float)&UNK_?;
      RStack_13.m_Direction.z = (float)pMVar31;
      puVar43 = (ulonglong *)(*(code *)(pMVar31->klass->vtable).get_WorldPosition_1.method)();
      uStack_14 = *puVar43;
      pMStack_15 = *(MVWorldObjectClient **)(puVar43 + 1);
      fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      pMStack_6 = (MVWorldObjectClient *)(fVar18 * 20.0);
      if ((float)pMStack_6 < 0.0) {
        pMVar31 = (MVWorldObjectClient *)0x0;
      }
      else {
        pMVar31 = pMStack_6;
        if (1.0 < (float)pMStack_6) {
          pMVar31 = (MVWorldObjectClient *)0x3f800000;
        }
      }
      VStack_34.x = ((float)uStack_16 - (float)uStack_14) * (float)pMVar31 + (float)uStack_14;
      VStack_34.y = (uStack_16._4_4_ - uStack_14._4_4_) * (float)pMVar31 + uStack_14._4_4_;
      VStack_34.z = ((float)pMStack_17 - (float)pMStack_15) * (float)pMVar31 + (float)pMStack_15;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        (*(code *)(pMVar1->klass->vtable).set_SyncPos.method)(pMVar1,VStack_34.x,VStack_34.y,VStack_34.z,(pMVar1->klass->vtable).get_SyncRot.methodPtr);
        pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Graphics);
            func_?(&StringLiteral_Default);
            cRam_? = '\x01';
          }
          pMStack_4 = (MVWorldObjectClient *)0x0;
          pCStack_44 = pCStack_3->klass;
          if (pCStack_44 != (Camera__Class *)0x0) {
            pMStack_28 = (MVWorldObjectClient *)&(pCStack_44->_0).byval_arg;
            for (; (int)pMStack_4 < (int)(pCStack_44->_0).namespaze; pMStack_4 = (MVWorldObjectClient *)((int)&pMStack_4->klass + 1)) {
              if ((MVWorldObjectClient *)(pCStack_44->_0).namespaze <= pMStack_4) goto code_?;
              this_03 = pMStack_28->klass;
              submeshIndex = 0;
              while( true ) {
                if ((this_03 == (MVWorldObjectClient__Class *)0x0) || (this_04 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this_03,(MethodInfo *)0x0), this_04 == (Mesh *)0x0)) goto code_?;
                iVar45 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount(this_04,(MethodInfo *)0x0);
                if (iVar45 <= submeshIndex) break;
                pMStack_46 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this_03,(MethodInfo *)0x0);
                pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_03,(MethodInfo *)0x0);
                if (pTVar25 == (Transform *)0x0) goto code_?;
                pMVar47 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix((Matrix4x4 *)&stack0xffffff10,pTVar25,(MethodInfo *)0x0);
                RStack_13.m_Origin.z = pMVar47->m00;
                RStack_13.m_Direction.x = pMVar47->m10;
                RStack_13.m_Direction.y = pMVar47->m20;
                RStack_13.m_Direction.z = pMVar47->m30;
                QStack_7.x = pMVar47->m01;
                QStack_7.y = pMVar47->m11;
                QStack_7.z = pMVar47->m21;
                QStack_7.w = pMVar47->m31;
                fStack_48 = pMVar47->m02;
                uStack_16._0_4_ = pMVar47->m12;
                uStack_16._4_4_ = pMVar47->m22;
                pMStack_17 = (MVWorldObjectClient *)pMVar47->m32;
                fStack_49 = pMVar47->m03;
                uStack_14._0_4_ = pMVar47->m13;
                uStack_14._4_4_ = pMVar47->m23;
                pMStack_15 = (MVWorldObjectClient *)pMVar47->m33;
                material = (this->fields).previewMaterial;
                pMStack_6 = (MVWorldObjectClient *)UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
                pCStack_3 = (this->fields).mainCamera;
                if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                matrix.m10 = RStack_13.m_Direction.x;
                matrix.m00 = RStack_13.m_Origin.z;
                matrix.m20 = RStack_13.m_Direction.y;
                matrix.m30 = RStack_13.m_Direction.z;
                matrix.m01 = QStack_7.x;
                matrix.m11 = QStack_7.y;
                matrix.m21 = QStack_7.z;
                matrix.m31 = QStack_7.w;
                matrix.m02 = fStack_48;
                matrix.m12 = (float)uStack_16;
                matrix.m22 = uStack_16._4_4_;
                matrix.m32 = (float)pMStack_17;
                matrix.m03 = fStack_49;
                matrix.m13 = (float)uStack_14;
                matrix.m23 = uStack_14._4_4_;
                matrix.m33 = (float)pMStack_15;
                UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3(pMStack_46,matrix,material,(int32_t)pMStack_6,pCStack_3,submeshIndex,(MethodInfo *)0x0);
                submeshIndex = submeshIndex + 1;
              }
              pMStack_28 = (MVWorldObjectClient *)&pMStack_28->monitor;
            }
            if ((this->fields).pointerWasUp == 0) {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVInputWrapper);
              }
              bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                if ((this->fields).isNewPrototype == 0) {
                  pCStack_44 = (Camera__Class *)0x2f;
                  pOVar50 = (Object *)func_?(TypeInfo__EditorEvent,&pCStack_44);
                  FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar50,(MethodInfo *)0x0);
                  (this->fields).pointerWasUp = 0;
                  return;
                }
                this_05 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
                if (this_05 != (MainCameraManager *)0x0) {
                  pCStack_44 = (Camera__Class *)MainCameraManager::MainCameraManager_get_CurrentCamera(this_05,(MethodInfo *)0x0);
                  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
                  if (pCStack_44 != (Camera__Class *)0x0) {
                    func_?(0xe,pCStack_44,pMVar1,0x40000000,0,0,0,0,0,0);
                    pMStack_46 = (Mesh *)0x0;
                    pOVar50 = (Object *)func_?(TypeInfo__EditorEvent,&pMStack_46);
                    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar50,(MethodInfo *)0x0);
                    goto code_?;
                  }
                }
                goto code_?;
              }
            }
code_?:
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
  pcVar51 = (code *)swi(3);
  (*pcVar51)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Exit(ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pIVar1 = (this->fields).insertCursor;
  if (pIVar1 != (InsertCursor *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar1,0,(MethodInfo *)0x0);
    pIVar1 = (this->fields).insertCursor;
    if (pIVar1 != (InsertCursor *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar1,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1((Object_1 *)pGVar2,(MethodInfo *)0x0);
      pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar3 != (GameEventManager *)0x0) && (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode, pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (pGVar5 = (pGVar4->fields).LaserCommands, pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioClip::AudioClip_InvokePCMSetPositionCallback_Internal((AudioClip *)pGVar5,0,(MethodInfo *)0x0);
        pGVar3 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar3 != (GameEventManager *)0x0) && (pGVar4 = (pGVar3->fields).AvatarCommandsBuildMode, pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (pGVar5 = (pGVar4->fields).LaserCommands, pGVar5 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState(pGVar5,0,(MethodInfo *)0x0);
          pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
          pVVar7 = ESInsert_ComputeSnapPosition((Vector3 *)&puStack_8,this,pMVar6,(this->fields).insertPosition,(MethodInfo *)0x0);
          uVar9._0_4_ = pVVar7->x;
          uVar9._4_4_ = pVVar7->y;
          fVar10 = pVVar7->z;
          pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
          if (((pMVar6 != (MVWorldObjectClient *)0x0) && (pGVar2 = (pMVar6->fields).gameObject, pGVar2 != (GameObject *)0x0)) && (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar2,(MethodInfo *)0x0), this_00 != (Transform *)0x0)) {
            value.z = fVar10;
            value.x = (float)(int)uVar9;
            value.y = (float)(int)((ulonglong)uVar9 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(this_00,value,(MethodInfo *)0x0);
            pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
            pMVar11 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
            if ((pMVar11 != (MVWorldObjectClient *)0x0) && ((*(code *)(pMVar11->klass->vtable).get_WorldPosition_1.method)(), pMVar6 != (MVWorldObjectClient *)0x0)) {
              (*(code *)(pMVar6->klass->vtable).set_SyncPos.method)();
              MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership((MVNetworkSelector *)0x7e0ff356,pHRam4a89505f,(MethodInfo *)0x0);
              pMVar6 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
              if ((pMVar6 != (MVWorldObjectClient *)0x0) && (pGVar2 = (pMVar6->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar2,1,(MethodInfo *)0x0);
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

bool Assembly-CSharp.dll::ESInsert::ESInsert_WorldPick(ESInsert *this,MVWorldObjectClient *wo,Vector3 *position,Vector3 *rawPosition,Vector3 *normal,MethodInfo *method)

{
  func_?(&stack0xffffff90,0,0x48);
  bVar1 = EditModeObjectPicker::EditModeObjectPicker_Pick((VoxelHit *)&stack0xffffff90,(this->fields).woIgnoreList,-0x40005,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  fStack_2 = -fStack_3;
  uVar4 = uStack_5 ^ 0x8000000080000000;
  fVar6 = (float)(uVar4 >> 0x20);
  surfaceNormal.z = fStack_2;
  surfaceNormal.x = (float)(int)uVar4;
  surfaceNormal.y = (float)(int)(uVar4 >> 0x20);
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
  fVar14 = fVar14 * 10.0;
  if (fVar14 < 0.0) {
    fVar14 = 0.0;
  }
  else if (1.0 < fVar14) {
    fVar14 = 1.0;
  }
  fStack_2 = (fStack_11 - fStack_2) * fVar14 + fStack_2;
  uStack_9._0_4_ = ((float)uStack_10 - (float)uStack_9) * fVar14 + (float)uStack_9;
  uStack_9._4_4_ = (uStack_10._4_4_ - uStack_9._4_4_) * fVar14 + uStack_9._4_4_;
  (this->fields).insertOffset.x = (float)uStack_9;
  (this->fields).insertOffset.y = uStack_9._4_4_;
  (this->fields).insertOffset.z = fStack_2;
  position->x = fVar6 - (float)uStack_9;
  position->y = (float)puVar13 - uStack_9._4_4_;
  position->z = fVar12 - fStack_2;
  rawPosition->x = fVar6;
  rawPosition->y = (float)puVar13;
  rawPosition->z = fVar12;
  normal->x = (float)(undefined4)uStack_5;
  normal->y = (float)uStack_5._4_4_;
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
  this_00 = (HashSet_1_System_Int32_ *)func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::HashSet_1_System_Int32___ctor(this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  ppHVar4 = &(this->fields).woIgnoreList;
  *ppHVar4 = this_00;
  func_?(ppHVar4,this_00);
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

