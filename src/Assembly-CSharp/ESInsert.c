
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
        pVVar14 = (Vector3 *)(*(wo->klass->vtable).get_Scale.methodPtr)(auStack_15,wo,(wo->klass->vtable).get_Scale.method);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField != (IEditModeUI *)0x0) {
    cVar1 = func_?();
    if (cVar1 == '\0') {
      uVar2 = 0x3d800000;
    }
    else {
      uVar2 = 0x3f800000;
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      puVar3 = (undefined8 *)(*(wo->klass->vtable).GetClosestGridPoint.methodPtr)(auStack_4,wo,uVar2);
      uVar5 = *puVar3;
      fVar6 = *(float *)(puVar3 + 1);
      __return_storage_ptr__->x = (float)(int)uVar5;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar5 >> 0x20);
      __return_storage_ptr__->z = fVar6;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar8 = (Vector3 *)(*pcVar7)();
  return pVVar8;
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
      if (this_00 == (MeshFilter *)0x0) goto code_?;
      while( true ) {
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
    pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_3.x = (pVVar2->zeroVector).x;
    VStack_3.y = (pVVar2->zeroVector).y;
    VStack_3.z = (pVVar2->zeroVector).z;
    bVar1 = DrawPlane::DrawPlane_Pick(&VStack_3,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      pVVar4 = DrawPlane::DrawPlane_get_Pos((Vector3 *)&stack0xffffffd4,(MethodInfo *)0x0);
      fStack_5 = pVVar4->y;
      pSVar6 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
      if ((pSVar6 != (SpawnRoleDataMediator *)0x0) && (this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar6->fields).position, this_00 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) {
        pVVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::SpawnRoleVariable_1_UnityEngine_Vector3__get_Value((Vector3 *)&stack0xffffffe0,this_00,MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__);
        uVar7 = pVVar4->y;
        if ((float)uVar7 <= fStack_5) {
          puVar8 = (ulonglong *)func_?();
          uVar9 = *puVar8;
          fVar10 = *(float *)(puVar8 + 1);
        }
        else {
          puVar8 = (ulonglong *)func_?();
          fVar10 = -*(float *)(puVar8 + 1);
          uVar9 = *puVar8 ^ 0x8000000080000000;
        }
        fVar11 = 0.0;
        fVar12 = (float)(uVar9 >> 0x20);
        surfaceNormal.z = fVar10;
        surfaceNormal.x = (float)(int)uVar9;
        surfaceNormal.y = (float)(int)(uVar9 >> 0x20);
        pVVar4 = ESInsert_ComputeObjectOffset((Vector3 *)&stack0xffffffc8,this,wo,surfaceNormal,(MethodInfo *)0x0);
        uVar13 = pVVar4->x;
        uVar14 = pVVar4->y;
        fVar15 = pVVar4->z;
        position->x = VStack_3.x - (float)uVar13;
        position->y = VStack_3.y - (float)uVar14;
        position->z = VStack_3.z - fVar15;
        rawPosition->x = VStack_3.x;
        rawPosition->y = VStack_3.y;
        rawPosition->z = VStack_3.z;
        uVar9 = CONCAT44(fVar10,fVar12) ^ 0x8000000080000000;
        normal->x = (float)(int)uVar9;
        normal->y = (float)(int)(uVar9 >> 0x20);
        normal->z = -fVar11;
        return 1;
      }
      func_?();
      pcVar16 = (code *)swi(3);
      bVar1 = (*pcVar16)();
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
  (this->fields).mainCamera = pCVar1;
  func_?(&(this->fields).mainCamera,pCVar1);
  pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar2 == (GameEventManager *)0x0) || (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode, pGVar3 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) || (pGVar4 = (pGVar3->fields).LaserCommands, pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) goto code_?;
  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState(pGVar4,LaserPointerState__Enum_Inserting,(MethodInfo *)0x0);
  pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar2 == (GameEventManager *)0x0) || (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode, pGVar3 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) || (pGVar4 = (pGVar3->fields).LaserCommands, pGVar4 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) goto code_?;
  GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState(pGVar4,1,(MethodInfo *)0x0);
  exists = (this->fields).previewMaterial;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit((Object_1 *)exists,(MethodInfo *)0x0);
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
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView(pCVar1,(MethodInfo *)0x0);
  dVar10 = (double)(fVar9 * 0.5 * 0.8 * 0.017453292);
  func_?();
  fVar9 = 5.0;
  if (5.0 <= fVar8 / (float)dVar10) {
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
  pIVar11 = (InsertCursor *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pIVar11,InsertCursor_MethodInfo__UnityEngine__Object__Instantiate<InsertCursor>_InsertCursor_);
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
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar1,(MethodInfo *)0x0);
  if (pTVar13 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position((Vector3 *)&fStack_14,pTVar13,(MethodInfo *)0x0);
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pTVar13 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar1,(MethodInfo *)0x0);
  if (pTVar13 == (Transform *)0x0) goto code_?;
  fVar15 = 0.0;
  pVVar16 = (Vector3 *)&stack0xffffffd8;
  pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward(pVVar16,pTVar13,(MethodInfo *)0x0);
  uVar18 = pVVar17->x;
  uVar19 = pVVar17->y;
  fVar9 = pVVar17->z;
  fVar8 = (this->fields).distanceInFreeSpace;
  (this->fields).insertPosition.x = (float)pVVar16 + (float)uVar18 * fVar8;
  (this->fields).insertPosition.y = (float)pTVar13 + (float)uVar19 * fVar8;
  (this->fields).insertPosition.z = fVar15 + fVar9 * fVar8;
  fStack_14 = (float)uVar18;
  puStack_20 = (undefined *)uVar19;
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
  pSVar21 = (e->fields).selectionController;
  if ((pSVar21 == (SelectionController *)0x0) || (this_00 = (e->fields).networkSelector, this_00 == (MVNetworkSelector *)0x0)) goto code_?;
  bVar5 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(this_00,(pSVar21->fields).selectedIDs,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar22 = (undefined8 *)(*(pMVar7->klass->vtable).get_WorldPivot.methodPtr)();
  fVar8 = *(float *)(puVar22 + 1);
  fStack_14 = (float)*puVar22;
  puStack_20 = (undefined *)((ulonglong)*puVar22 >> 0x20);
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar22 = (undefined8 *)(*(pMVar7->klass->vtable).get_WorldPosition_1.methodPtr)();
  uVar23 = *puVar22;
  fVar9 = *(float *)(puVar22 + 1);
  pCVar1 = (this->fields).mainCamera;
  (this->fields).pivotToOrigin.x = (float)uVar23 - fStack_14;
  (this->fields).pivotToOrigin.y = (float)((ulonglong)uVar23 >> 0x20) - (float)puStack_20;
  (this->fields).pivotToOrigin.z = fVar9 - fVar8;
  if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVInputWrapper);
  }
  pVVar16 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::StandaloneInput_MousePosition((Vector3 *)&stack0xffffffd8,(StandaloneInput *)0x0,in_stack_24);
  fVar8 = pVVar16->x;
  pVVar16 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::StandaloneInput_MousePosition((Vector3 *)&stack0xffffffd8,(StandaloneInput *)0x0,in_stack_24);
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pos.y = pVVar16->y;
  pos.x = fVar8;
  pos.z = 0.0;
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2((Ray *)&stack0xffffffcc,pCVar1,pos,(MethodInfo *)0x0);
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  pVVar16 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint((Vector3 *)&stack0xffffffd8,(Ray *)&stack0xffffffb4,(this->fields).distanceInFreeSpace,(MethodInfo *)0x0);
  uVar25 = pVVar16->x;
  uVar26 = pVVar16->y;
  uVar27 = (this->fields).pivotToOrigin.x;
  uVar28 = (this->fields).pivotToOrigin.y;
  originalPos.y = (float)uVar28 + (float)uVar26;
  originalPos.x = (float)uVar27 + (float)uVar25;
  originalPos.z = (this->fields).pivotToOrigin.z + pVVar16->z;
  fStack_14 = (float)uVar25;
  puStack_20 = (undefined *)uVar26;
  pVVar16 = ESInsert_ComputeSnapPosition((Vector3 *)&stack0xffffffd8,this,pMVar7,originalPos,(MethodInfo *)0x0);
  uVar29 = pVVar16->x;
  puStack_20 = (undefined *)uVar29;
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
  (*(pMVar7->klass->vtable).set_WorldPosition.methodPtr)();
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar7 == (MVWorldObjectClient *)0x0) || (pGVar30 = (pMVar7->fields).gameObject, pGVar30 == (GameObject *)0x0)) goto code_?;
  pMVar31 = (MeshFilter__Array *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar30,UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
  (this->fields).previewMeshes = pMVar31;
  func_?();
  this_01 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)(e->fields)._.data;
  if (this_01 == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) goto code_?;
  bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,GUILoginHandler+PlanetData]::Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey(this_01,(Object *)StringLiteral_IsNewPrototype,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_);
  (this->fields).isNewPrototype = bVar5;
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar7 == (MVWorldObjectClient *)0x0) {
code_?:
    this_02 = (HashSet_1_UnityEngine_Vector3_ *)func_?();
    if (this_02 == (HashSet_1_UnityEngine_Vector3_ *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::HashSet_1_UnityEngine_Vector3___ctor(this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar7 == (MVWorldObjectClient *)0x0) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Object]::HashSet_1_System_Object__Add((HashSet_1_System_Object_ *)this_02,(Object *)(pMVar7->fields)._.id,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
  }
  else {
    if (((pMVar7->klass->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth) || ((MVGroup__Class *)(pMVar7->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] != TypeInfo__MVGroup)) goto code_?;
    pMVar32 = (MVGroup *)EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar32 == (MVGroup *)0x0) goto code_?;
    if (((pMVar32->klass->_1).typeHierarchyDepth < (TypeInfo__MVGroup->_1).typeHierarchyDepth) || ((MVGroup__Class *)(pMVar32->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] != TypeInfo__MVGroup)) goto code_?;
    this_04 = (MVGroup *)0x0;
    if ((MVGroup__Class *)(pMVar32->klass->_1).typeHierarchy[(TypeInfo__MVGroup->_1).typeHierarchyDepth - 1] == TypeInfo__MVGroup) {
      this_04 = pMVar32;
    }
    this_02 = (HashSet_1_UnityEngine_Vector3_ *)MVGroup::MVGroup_GetHierarchyWorldObjectIDs(this_04,(MethodInfo *)0x0);
  }
  (this->fields).woIgnoreList = (HashSet_1_System_Int32_ *)this_02;
  func_?();
  pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar7 != (MVWorldObjectClient *)0x0) && (pGVar30 = (pMVar7->fields).gameObject, pGVar30 != (GameObject *)0x0)) {
    iVar33 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar30,(MethodInfo *)0x0);
    iVar34 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
    if (iVar33 == iVar34) {
      this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_03 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_IsLogicRendered(this_03,1,(MethodInfo *)0x0);
    }
    pMVar7 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar7 != (MVWorldObjectClient *)0x0) && (pGVar30 = (pMVar7->fields).gameObject, pGVar30 != (GameObject *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar30,0,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar5 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::ESInsert::ESInsert_Execute(ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    func_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
    func_?(&TypeInfo__MVInputWrapper);
    cRam_? = '\x01';
  }
  if (((e == (EditorStateMachine *)0x0) || (pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0), pMVar1 == (MVWorldObjectClient *)0x0)) || (source = (pMVar1->fields).gameObject, source == (GameObject *)0x0)) goto code_?;
  pMVar2 = (MeshFilter__Array *)Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)source,UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
  (this->fields).previewMeshes = pMVar2;
  func_?(&(this->fields).previewMeshes,pMVar2);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  method_00 = (MethodInfo *)&UNK_?;
  pMStack_3 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__);
    cRam_? = '\x01';
  }
  bVar4 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
  if (bVar4 == 0) {
code_?:
    pMStack_5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    func_?(&stack0xffffff00,0,0x48);
    bVar4 = EditModeObjectPicker::EditModeObjectPicker_Pick((VoxelHit *)&stack0xffffff00,(this->fields).woIgnoreList,-0x40005,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      QStack_6.w = -fStack_7;
      uVar8 = CONCAT44(fStack_9,in_stack_10) ^ 0x8000000080000000;
      surfaceNormal.z = QStack_6.w;
      surfaceNormal.x = (float)(int)uVar8;
      surfaceNormal.y = (float)(int)(uVar8 >> 0x20);
      pVVar11 = ESInsert_ComputeObjectOffset((Vector3 *)&RStack_12.m_Origin.z,this,pMStack_5,surfaceNormal,(MethodInfo *)0x0);
      RStack_13._cultureKey = (String *)(this->fields).insertOffset.x;
      RStack_13._pattern = (String *)(this->fields).insertOffset.y;
      pMStack_14 = (MVWorldObjectClient__Class *)(this->fields).insertOffset.z;
      RStack_15._cultureKey = (String *)pVVar11->x;
      RStack_15._pattern = (String *)pVVar11->y;
      pMStack_16 = (MVWorldObjectClient__Class *)pVVar11->z;
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      pMStack_5 = (MVWorldObjectClient *)(fVar17 * 10.0);
      if ((float)pMStack_5 < 0.0) {
        pMVar1 = (MVWorldObjectClient *)0x0;
      }
      else {
        pMVar1 = pMStack_5;
        if (1.0 < (float)pMStack_5) {
          pMVar1 = (MVWorldObjectClient *)0x3f800000;
        }
      }
      fVar18 = ((float)pMStack_16 - (float)pMStack_14) * (float)pMVar1 + (float)pMStack_14;
      fVar17 = ((float)RStack_15._cultureKey - (float)RStack_13._cultureKey) * (float)pMVar1 + (float)RStack_13._cultureKey;
      fVar19 = ((float)RStack_15._pattern - (float)RStack_13._pattern) * (float)pMVar1 + (float)RStack_13._pattern;
      RStack_12.m_Origin.y = in_stack_20;
      RStack_12.m_Origin.x = in_stack_21;
      (this->fields).insertOffset.x = fVar17;
      (this->fields).insertOffset.y = fVar19;
      QStack_6.w = (float)in_stack_22 - fVar18;
      (this->fields).insertOffset.z = fVar18;
      (this->fields).insertPosition.x = in_stack_21 - fVar17;
      (this->fields).insertPosition.y = in_stack_20 - fVar19;
      (this->fields).insertPosition.z = QStack_6.w;
      pIVar23 = (this->fields).insertCursor;
      pMStack_24 = in_stack_22;
      if ((pIVar23 == (InsertCursor *)0x0) || (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar23,(MethodInfo *)0x0), pTVar25 == (Transform *)0x0)) goto code_?;
      value_00.z = (float)in_stack_22;
      value_00.x = RStack_12.m_Origin.x;
      value_00.y = RStack_12.m_Origin.y;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar25,value_00,(MethodInfo *)0x0);
      pIVar23 = (this->fields).insertCursor;
      if (pIVar23 == (InsertCursor *)0x0) goto code_?;
      pMStack_5 = (MVWorldObjectClient *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar23,(MethodInfo *)0x0);
      goto code_?;
    }
    pIVar23 = (this->fields).insertCursor;
    if (pIVar23 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar23,0,(MethodInfo *)0x0);
    RStack_13._cultureKey = (String *)(this->fields).insertOffset.x;
    RStack_13._pattern = (String *)(this->fields).insertOffset.y;
    pMStack_14 = (MVWorldObjectClient__Class *)(this->fields).insertOffset.z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    RStack_15._cultureKey = (String *)(pVVar26->zeroVector).x;
    RStack_15._pattern = (String *)(pVVar26->zeroVector).y;
    pMStack_16 = (MVWorldObjectClient__Class *)(pVVar26->zeroVector).z;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    fVar17 = fVar17 * 10.0;
    if (fVar17 < 0.0) {
      fVar17 = 0.0;
    }
    else if (1.0 < fVar17) {
      fVar17 = 1.0;
    }
    QStack_6.w = ((float)pMStack_16 - (float)pMStack_14) * fVar17 + (float)pMStack_14;
    (this->fields).insertOffset.x = ((float)RStack_15._cultureKey - (float)RStack_13._cultureKey) * fVar17 + (float)RStack_13._cultureKey;
    (this->fields).insertOffset.y = ((float)RStack_15._pattern - (float)RStack_13._pattern) * fVar17 + (float)RStack_13._pattern;
    (this->fields).insertOffset.z = QStack_6.w;
    pMStack_5 = (MVWorldObjectClient *)(this->fields).mainCamera;
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::StandaloneInput_MousePosition((Vector3 *)&QStack_6,(StandaloneInput *)0x0,method_00);
    RStack_15._cultureKey = (String *)pVVar11->x;
    pVVar11 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::StandaloneInput_MousePosition((Vector3 *)&QStack_6,(StandaloneInput *)0x0,method_00);
    pMStack_16 = (MVWorldObjectClient__Class *)0x0;
    RStack_15._pattern = (String *)pVVar11->y;
    if (pMStack_5 == (MVWorldObjectClient *)0x0) goto code_?;
    pos.y = pVVar11->y;
    pos.x = (float)RStack_15._cultureKey;
    pos.z = 0.0;
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2(&RStack_12,(Camera *)pMStack_5,pos,(MethodInfo *)0x0);
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pVVar11 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint((Vector3 *)&QStack_6,(Ray *)&stack0xffffff4c,(this->fields).distanceInFreeSpace,(MethodInfo *)0x0);
    RStack_13._cultureKey = (String *)pVVar11->x;
    RStack_13._pattern = (String *)pVVar11->y;
    pMStack_14 = (MVWorldObjectClient__Class *)pVVar11->z;
    RStack_15._cultureKey = (String *)(this->fields).pivotToOrigin.x;
    RStack_15._pattern = (String *)(this->fields).pivotToOrigin.y;
    pMStack_16 = (MVWorldObjectClient__Class *)(this->fields).pivotToOrigin.z;
    QStack_6.w = (float)pMStack_16 + (float)pMStack_14;
    originalPos.y = (float)RStack_15._pattern + (float)RStack_13._pattern;
    originalPos.x = (float)RStack_15._cultureKey + (float)RStack_13._cultureKey;
    originalPos.z = QStack_6.w;
    pVVar11 = ESInsert_ComputeSnapPosition((Vector3 *)&QStack_6,this,pMVar1,originalPos,(MethodInfo *)0x0);
    VStack_27.x = pVVar11->x;
    VStack_27.y = pVVar11->y;
    VStack_27.z = pVVar11->z;
    pMStack_16 = (MVWorldObjectClient__Class *)(this->fields).insertPosition.z;
    RStack_15._cultureKey = (String *)(this->fields).insertPosition.x;
    RStack_15._pattern = (String *)(this->fields).insertPosition.y;
    pRVar28 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key((Regex_CachedCodeEntryKey *)&QStack_6,(KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)&stack0xffffff4c,(MethodInfo *)0x0);
    RStack_13._cultureKey = (String *)pRVar28->_options;
    RStack_13._pattern = pRVar28->_cultureKey;
    pMStack_14 = (MVWorldObjectClient__Class *)pRVar28->_pattern;
    QStack_6.y = (float)RStack_15._cultureKey - (float)RStack_13._cultureKey;
    QStack_6.w = (float)pMStack_16 - (float)pMStack_14;
    QStack_6.z = (float)RStack_15._pattern - (float)RStack_13._pattern;
    pMStack_16 = (MVWorldObjectClient__Class *)QStack_6.w;
    pRVar28 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key(&RStack_13,(KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)&stack0xffffff4c,(MethodInfo *)0x0);
    RStack_15._cultureKey = (String *)pRVar28->_options;
    RStack_15._pattern = pRVar28->_cultureKey;
    VStack_27.x = VStack_27.x - (float)RStack_15._cultureKey;
    VStack_27.z = VStack_27.z - (float)pRVar28->_pattern;
    VStack_27.y = VStack_27.y - (float)RStack_15._pattern;
    pMStack_16 = (MVWorldObjectClient__Class *)VStack_27.z;
    pRVar28 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key(&RStack_15,(KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object_ *)&stack0xffffff4c,(MethodInfo *)0x0);
    RStack_13._cultureKey = (String *)pRVar28->_options;
    RStack_13._pattern = pRVar28->_cultureKey;
    pMStack_14 = (MVWorldObjectClient__Class *)pRVar28->_pattern;
    puVar29 = (undefined8 *)func_?();
    RStack_15._4_8_ = *puVar29;
    pMStack_16 = *(MVWorldObjectClient__Class **)(puVar29 + 1);
    fVar30 = (float10)func_?();
    pMStack_24 = (MVWorldObjectClient__Class *)(float)fVar30;
    fVar30 = (float10)func_?();
    pMStack_3 = (MVWorldObjectClient *)(float)fVar30;
    fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pMStack_5 = (MVWorldObjectClient *)(fVar17 * 5.0);
    if ((float)pMStack_5 < 0.0) {
      pMVar1 = (MVWorldObjectClient *)0x0;
    }
    else {
      pMVar1 = pMStack_5;
      if (1.0 < (float)pMStack_5) {
        pMVar1 = (MVWorldObjectClient *)0x3f800000;
      }
    }
    fVar17 = ((float)pMStack_3 - (float)pMStack_24) * (float)pMVar1 + (float)pMStack_24;
    fVar18 = fVar17 * (float)pMStack_16 + (float)pMStack_14;
    fVar19 = fVar17 * (float)RStack_15._cultureKey + (float)RStack_13._cultureKey;
    fVar17 = fVar17 * (float)RStack_15._pattern + (float)RStack_13._pattern;
    (this->fields).insertPosition.x = fVar19;
    (this->fields).insertPosition.y = fVar17;
    RStack_15._cultureKey = (String *)(this->fields).pivotToOrigin.x;
    RStack_15._pattern = (String *)(this->fields).pivotToOrigin.y;
    (this->fields).insertPosition.z = fVar18;
    pMStack_16 = (MVWorldObjectClient__Class *)(this->fields).pivotToOrigin.z;
    QStack_6.w = fVar18 - (float)pMStack_16;
    RStack_12.m_Origin.y = fVar17 - (float)RStack_15._pattern;
    RStack_12.m_Origin.x = fVar19 - (float)RStack_15._cultureKey;
    pMStack_24 = (MVWorldObjectClient__Class *)QStack_6.w;
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_27.x = (pVVar26->zeroVector).x;
    VStack_27.y = (pVVar26->zeroVector).y;
    VStack_27.z = (pVVar26->zeroVector).z;
    bVar4 = DrawPlane::DrawPlane_Pick(&VStack_27,(MethodInfo *)0x0);
    if (bVar4 == 0) goto code_?;
    pVVar11 = DrawPlane::DrawPlane_get_Pos((Vector3 *)&QStack_6,(MethodInfo *)0x0);
    pMStack_5 = (MVWorldObjectClient *)pVVar11->y;
    pSVar31 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
    if ((pSVar31 == (SpawnRoleDataMediator *)0x0) || (this_00 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)(pSVar31->fields).position, this_00 == (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) goto code_?;
    pVVar11 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::SpawnRoleVariable_1_UnityEngine_Vector3__get_Value((Vector3 *)&QStack_6,this_00,MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__);
    RStack_15._cultureKey = (String *)pVVar11->x;
    RStack_15._pattern = (String *)pVVar11->y;
    pMStack_16 = (MVWorldObjectClient__Class *)pVVar11->z;
    if ((float)RStack_15._pattern <= (float)pMStack_5) {
      puVar32 = (ulonglong *)func_?(&QStack_6,0);
      RStack_13._4_8_ = *puVar32;
      pMStack_14 = *(MVWorldObjectClient__Class **)(puVar32 + 1);
    }
    else {
      puVar32 = (ulonglong *)func_?(&QStack_6,0);
      pMStack_14 = (MVWorldObjectClient__Class *)((uint)*(float *)(puVar32 + 1) ^ 0x80000000);
      RStack_13._4_8_ = *puVar32 ^ 0x8000000080000000;
      QStack_6.w = (float)pMStack_14;
    }
    surfaceNormal_00.z = (float)pMStack_14;
    surfaceNormal_00.x = (float)(int)RStack_13._4_8_;
    surfaceNormal_00.y = (float)(int)((ulonglong)RStack_13._4_8_ >> 0x20);
    pVVar11 = ESInsert_ComputeObjectOffset((Vector3 *)&QStack_6,this,pMStack_3,surfaceNormal_00,(MethodInfo *)0x0);
    uVar33 = pVVar11->x;
    uVar34 = pVVar11->y;
    fVar18 = VStack_27.x - (float)uVar33;
    fVar17 = VStack_27.y - (float)uVar34;
    QStack_6.w = VStack_27.z - pVVar11->z;
    RStack_12.m_Origin.x = VStack_27.x;
    RStack_12.m_Origin.y = VStack_27.y;
    RStack_12.m_Origin.z = 0.0;
    RStack_12.m_Direction.x = 0.0;
    pMStack_24 = (MVWorldObjectClient__Class *)VStack_27.z;
    RStack_15._4_8_ = RStack_13._4_8_ ^ 0x8000000080000000;
    pMStack_16 = (MVWorldObjectClient__Class *)-(float)pMStack_14;
    (this->fields).insertPosition.x = fVar18;
    (this->fields).insertPosition.y = fVar17;
    (this->fields).insertPosition.z = QStack_6.w;
    pIVar23 = (this->fields).insertCursor;
    if ((pIVar23 == (InsertCursor *)0x0) || (pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar23,(MethodInfo *)0x0), pTVar25 == (Transform *)0x0)) goto code_?;
    value.z = VStack_27.z;
    value.x = RStack_12.m_Origin.x;
    value.y = RStack_12.m_Origin.y;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position(pTVar25,value,(MethodInfo *)0x0);
    pIVar23 = (this->fields).insertCursor;
    if (pIVar23 == (InsertCursor *)0x0) goto code_?;
    pMStack_5 = (MVWorldObjectClient *)UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar23,(MethodInfo *)0x0);
    in_stack_10 = RStack_15._cultureKey;
    fStack_9 = RStack_15._pattern;
    fStack_7 = (float)pMStack_16;
code_?:
    forward.y = fStack_9;
    forward.x = in_stack_10;
    forward.z = fStack_7;
    pQVar35 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1(&QStack_6,forward,(MethodInfo *)0x0);
    if (pMStack_5 == (MVWorldObjectClient *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation((Transform *)pMStack_5,*pQVar35,(MethodInfo *)0x0);
    pIVar23 = (this->fields).insertCursor;
    if (pIVar23 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar23,1,(MethodInfo *)0x0);
  }
  pGVar36 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar36 != (GameEventManager *)0x0) && (pGVar37 = (pGVar36->fields).AvatarCommandsBuildMode, pGVar37 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) && (this_01 = (pGVar37->fields).LaserCommands, this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    to.z = (float)pMStack_24;
    to.x = RStack_12.m_Origin.x;
    to.y = RStack_12.m_Origin.y;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition(this_01,to,(MethodInfo *)0x0);
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pVVar11 = ESInsert_ComputeSnapPosition((Vector3 *)&RStack_12.m_Origin.z,this,pMVar1,(this->fields).insertPosition,(MethodInfo *)0x0);
    RStack_15._cultureKey = (String *)pVVar11->x;
    RStack_15._pattern = (String *)pVVar11->y;
    pMStack_16 = (MVWorldObjectClient__Class *)pVVar11->z;
    pMStack_24 = (MVWorldObjectClient__Class *)EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      RStack_12.m_Origin.z = (float)(pMVar1->klass->vtable).get_WorldPosition_1.method;
      RStack_12.m_Origin.y = (float)pMVar1;
      RStack_12.m_Origin.x = (float)&RStack_12.m_Origin.z;
      puVar32 = (ulonglong *)(*(pMVar1->klass->vtable).get_WorldPosition_1.methodPtr)();
      RStack_13._4_8_ = *puVar32;
      pMStack_14 = *(MVWorldObjectClient__Class **)(puVar32 + 1);
      fVar17 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
      pMStack_5 = (MVWorldObjectClient *)(fVar17 * 20.0);
      if ((float)pMStack_5 < 0.0) {
        pMVar1 = (MVWorldObjectClient *)0x0;
      }
      else {
        pMVar1 = pMStack_5;
        if (1.0 < (float)pMStack_5) {
          pMVar1 = (MVWorldObjectClient *)0x3f800000;
        }
      }
      VStack_27.x = ((float)RStack_15._cultureKey - (float)RStack_13._cultureKey) * (float)pMVar1 + (float)RStack_13._cultureKey;
      VStack_27.y = ((float)RStack_15._pattern - (float)RStack_13._pattern) * (float)pMVar1 + (float)RStack_13._pattern;
      VStack_27.z = ((float)pMStack_16 - (float)pMStack_14) * (float)pMVar1 + (float)pMStack_14;
      if (pMStack_24 != (MVWorldObjectClient__Class *)0x0) {
        pMVar38 = (MVWorldObjectClient__Class *)(pMStack_24->_0).image;
        (*(pMVar38->vtable).set_SyncPos.methodPtr)(pMStack_24,VStack_27.x,VStack_27.y,VStack_27.z,(pMVar38->vtable).set_SyncPos.method);
        pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Graphics);
            func_?(&StringLiteral_Default);
            cRam_? = '\x01';
          }
          pMStack_39 = (this->fields).previewMeshes;
          pMStack_3 = (MVWorldObjectClient *)0x0;
          if (pMStack_39 != (MeshFilter__Array *)0x0) {
            pMStack_5 = (MVWorldObjectClient *)pMStack_39->vector;
            for (; (int)pMStack_3 < (int)pMStack_39->max_length; pMStack_3 = (MVWorldObjectClient *)((int)&pMStack_3->klass + 1)) {
              if ((MVWorldObjectClient *)pMStack_39->max_length <= pMStack_3) goto code_?;
              pMStack_24 = pMStack_5->klass;
              submeshIndex = 0;
              if (pMStack_24 == (MVWorldObjectClient__Class *)0x0) goto code_?;
              while( true ) {
                this_02 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)pMStack_24,(MethodInfo *)0x0);
                if (this_02 == (Mesh *)0x0) goto code_?;
                iVar40 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount(this_02,(MethodInfo *)0x0);
                if (iVar40 <= submeshIndex) break;
                pMStack_41 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)pMStack_24,(MethodInfo *)0x0);
                pTVar25 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pMStack_24,(MethodInfo *)0x0);
                if (pTVar25 == (Transform *)0x0) goto code_?;
                pMVar42 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix((Matrix4x4 *)&stack0xffffff08,pTVar25,(MethodInfo *)0x0);
                RStack_12.m_Origin.z = pMVar42->m00;
                RStack_12.m_Direction.x = pMVar42->m10;
                RStack_12.m_Direction.y = pMVar42->m20;
                RStack_12.m_Direction.z = pMVar42->m30;
                QStack_6.x = pMVar42->m01;
                QStack_6.y = pMVar42->m11;
                QStack_6.z = pMVar42->m21;
                QStack_6.w = pMVar42->m31;
                RStack_15._options = (int32_t)pMVar42->m02;
                RStack_15._cultureKey = (String *)pMVar42->m12;
                RStack_15._pattern = (String *)pMVar42->m22;
                pMStack_16 = (MVWorldObjectClient__Class *)pMVar42->m32;
                RStack_13._options = (int32_t)pMVar42->m03;
                RStack_13._cultureKey = (String *)pMVar42->m13;
                RStack_13._pattern = (String *)pMVar42->m23;
                pMStack_14 = (MVWorldObjectClient__Class *)pMVar42->m33;
                material = (this->fields).previewMaterial;
                iVar40 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
                camera = (this->fields).mainCamera;
                if ((TypeInfo__UnityEngine__Graphics->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                matrix.m10 = RStack_12.m_Direction.x;
                matrix.m00 = RStack_12.m_Origin.z;
                matrix.m20 = RStack_12.m_Direction.y;
                matrix.m30 = RStack_12.m_Direction.z;
                matrix.m01 = QStack_6.x;
                matrix.m11 = QStack_6.y;
                matrix.m21 = QStack_6.z;
                matrix.m31 = QStack_6.w;
                matrix.m02 = (float)RStack_15._options;
                matrix.m12 = (float)RStack_15._cultureKey;
                matrix.m22 = (float)RStack_15._pattern;
                matrix.m32 = (float)pMStack_16;
                matrix.m03 = (float)RStack_13._options;
                matrix.m13 = (float)RStack_13._cultureKey;
                matrix.m23 = (float)RStack_13._pattern;
                matrix.m33 = (float)pMStack_14;
                UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3(pMStack_41,matrix,material,iVar40,camera,submeshIndex,(MethodInfo *)0x0);
                submeshIndex = submeshIndex + 1;
              }
              pMStack_5 = (MVWorldObjectClient *)&pMStack_5->monitor;
            }
            if ((this->fields).pointerWasUp == 0) {
              if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MVInputWrapper);
              }
              bVar4 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp(KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
              if (bVar4 != 0) {
                if ((this->fields).isNewPrototype == 0) {
                  pMStack_39 = (MeshFilter__Array *)0x2f;
                  pOVar43 = (Object *)func_?(TypeInfo__EditorEvent,&pMStack_39);
                  FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar43,(MethodInfo *)0x0);
                  (this->fields).pointerWasUp = 0;
                  return;
                }
                this_03 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
                if (this_03 != (MainCameraManager *)0x0) {
                  pMStack_39 = (MeshFilter__Array *)MainCameraManager::MainCameraManager_get_CurrentCamera(this_03,(MethodInfo *)0x0);
                  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
                  if (pMStack_39 != (MeshFilter__Array *)0x0) {
                    func_?(0xd,pMStack_39,pMVar1,0x40000000,0,0,0,0,0,0);
                    pMStack_41 = (Mesh *)0x0;
                    pOVar43 = (Object *)func_?(TypeInfo__EditorEvent,&pMStack_41);
                    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar43,(MethodInfo *)0x0);
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
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Exit(ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
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
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState(pGVar5,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
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
            if ((pMVar11 != (MVWorldObjectClient *)0x0) && ((*(pMVar11->klass->vtable).get_WorldPosition_1.methodPtr)(), pMVar6 != (MVWorldObjectClient *)0x0)) {
              (*(pMVar6->klass->vtable).set_SyncPos.methodPtr)();
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
  this_00 = (HashSet_1_UnityEngine_Vector3_ *)func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  if (this_00 != (HashSet_1_UnityEngine_Vector3_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Vector3]::HashSet_1_UnityEngine_Vector3___ctor(this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    (this->fields).woIgnoreList = (HashSet_1_System_Int32_ *)this_00;
    func_?(&(this->fields).woIgnoreList,this_00);
    ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

