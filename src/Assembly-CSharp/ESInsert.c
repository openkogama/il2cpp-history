
/* Vector3 ComputeObjectOffset(MVWorldObjectClient, Vector3) */

Vector3 * Assembly-CSharp.dll::ESInsert::ESInsert_ComputeObjectOffset
                    (Vector3 *__return_storage_ptr__,ESInsert *this,MVWorldObjectClient *wo,
                    Vector3 surfaceNormal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (wo != (MVWorldObjectClient *)0x0) {
    pVVar1 = MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersLocal
                       (wo,BoundsContext__Enum_Insert,(MethodInfo *)0x0);
    pVStack_2 = pVVar1;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       (&VStack_4,(MethodInfo *)0x0);
    uVar5 = 0;
    fStack_6 = 0.0;
    uStack_7._0_4_ = pVVar3->x;
    uStack_7._4_4_ = pVVar3->y;
    fStack_8 = pVVar3->z;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar3 = pVVar1->vector;
      while( true ) {
        if ((int)pVVar1->max_length <= (int)uVar5) {
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          lhs.z = fStack_8;
          lhs.x = (float)(undefined4)uStack_7;
          lhs.y = (float)uStack_7._4_4_;
          fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                            (lhs,surfaceNormal,(MethodInfo *)0x0);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                             ((Vector3 *)&stack0xffffff90,fVar9,surfaceNormal,(MethodInfo *)0x0);
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                             ((Vector3 *)&stack0xffffff90,*pVVar3,(this->fields).pivotToOrigin,
                              (MethodInfo *)0x0);
          fVar10 = pVVar3->y;
          fVar9 = pVVar3->z;
          __return_storage_ptr__->x = pVVar3->x;
          __return_storage_ptr__->y = fVar10;
          __return_storage_ptr__->z = fVar9;
          return __return_storage_ptr__;
        }
        if (pVVar1->max_length <= uVar5) break;
        uStack_11._0_4_ = pVVar3->x;
        uStack_11._4_4_ = pVVar3->y;
        fVar9 = pVVar3->z;
        pVVar12 = (Vector3 *)
                 (*(code *)(wo->klass->vtable).get_Scale.method)
                           (&stack0xffffffb4,wo,(wo->klass->vtable).set_Scale.methodPtr);
        a.z = fVar9;
        a.x = (float)(undefined4)uStack_11;
        a.y = uStack_11._4_4_;
        pVVar12 = MathFunctions::MathFunctions_Multiply
                           ((Vector3 *)&stack0xffffffa8,a,*pVVar12,(MethodInfo *)0x0);
        uStack_13._0_4_ = pVVar12->x;
        uStack_13._4_4_ = pVVar12->y;
        fVar9 = pVVar12->z;
        VStack_4.y = (this->fields).pivotToOrigin.x;
        VStack_4.z = (this->fields).pivotToOrigin.y;
        fVar10 = (this->fields).pivotToOrigin.z;
        uStack_11._4_4_ = fVar10;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_00.z = fVar9;
        a_00.x = (float)(undefined4)uStack_13;
        a_00.y = (float)uStack_13._4_4_;
        b.z = uStack_11._4_4_;
        b.x = VStack_4.y;
        b.y = VStack_4.z;
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xffffff9c,a_00,b,(MethodInfo *)0x0);
        uVar14._0_4_ = pVVar12->x;
        uVar14._4_4_ = pVVar12->y;
        fVar9 = pVVar12->z;
        pVVar12 = (Vector3 *)func_?();
        fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                          (surfaceNormal,*pVVar12,(MethodInfo *)0x0);
        uStack_11 = CONCAT44(fVar10,(undefined4)uStack_11);
        pVVar1 = pVStack_2;
        if (fVar10 <= fStack_6) {
          uVar5 = uVar5 + 1;
          pVVar3 = pVVar3 + 1;
        }
        else {
          uVar5 = uVar5 + 1;
          pVVar3 = pVVar3 + 1;
          uStack_7 = uVar14;
          fStack_6 = fVar10;
          fStack_8 = fVar9;
        }
      }
      goto code_?;
    }
  }
  func_?(0);
code_?:
  uVar15 = func_?(0,0);
  func_?(uVar15);
  pcVar16 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar16)();
  return pVVar3;
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
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pIVar1 = MVGameControllerBase::MVGameControllerBase_get_EditModeUI((MethodInfo *)0x0);
  if (pIVar1 != (IEditModeUI *)0x0) {
    cVar2 = func_?();
    uVar3 = _UNK_?;
    if (cVar2 == '\0') {
      uVar3 = _UNK_?;
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      puVar4 = (undefined8 *)
               (*(code *)(wo->klass->vtable).GetClosestGridPoint.method)(auStack_5,wo,uVar3);
      uVar6 = *puVar4;
      fVar7 = *(float *)(puVar4 + 1);
      __return_storage_ptr__->x = (float)(int)uVar6;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar6 >> 0x20);
      __return_storage_ptr__->z = fVar7;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pVVar9 = (Vector3 *)(*pcVar8)();
  return pVVar9;
}


/* Void DrawObject(GameObject) */

void Assembly-CSharp.dll::ESInsert::ESInsert_DrawObject
               (ESInsert *this,GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this_00,(MethodInfo *)0x0);
        if (pMVar4 == (Mesh *)0x0) goto code_?;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                          (pMVar4,(MethodInfo *)0x0);
        if (iVar5 <= submeshIndex) break;
        pMVar4 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh
                           (this_00,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this_00,(MethodInfo *)0x0);
        if (this_01 == (Transform *)0x0) goto code_?;
        pMVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                 Transform_get_localToWorldMatrix
                           ((Matrix4x4 *)&stack0xffffff64,this_01,(MethodInfo *)0x0);
        matrix = *pMVar6;
        material = (this->fields).previewMaterial;
        iVar5 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Default,(MethodInfo *)0x0);
        camera = (this->fields).mainCamera;
        if ((((uint)(TypeInfo__UnityEngine__Graphics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Graphics->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_2
                  (pMVar4,matrix,material,iVar5,camera,submeshIndex,(MethodInfo *)0x0);
        submeshIndex = submeshIndex + 1;
      }
      uStack_1 = uStack_1 + 1;
      ppMVar3 = ppMVar3 + 1;
    }
    uVar7 = func_?(0,0);
    func_?(uVar7);
  }
code_?:
  func_?(0);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Boolean DrawPlanePick(MVWorldObjectClient, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::ESInsert::ESInsert_DrawPlanePick
               (ESInsert *this,MVWorldObjectClient *wo,Vector3 *position,Vector3 *rawPosition,
               Vector3 *normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
     (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    bVar3 = UIStack::UIStack_get_StackReady((UIStack *)pWVar2,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      return 0;
    }
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
              ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if ((((uint)(TypeInfo__UnityEngine__EventSystems__EventSystem->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__EventSystems__EventSystem->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__EventSystems__EventSystem);
    }
    this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                        ((MethodInfo *)0x0);
    if (this_00 != (EventSystem *)0x0) {
      bVar3 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
              EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        return 0;
      }
      pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
      if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
         (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
        bVar3 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick
                          (pWVar2,(Vector3 *)&stack0xffffffcc,(MethodInfo *)0x0);
        if (bVar3 == 0) {
          return 0;
        }
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) &&
           (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0))
        {
          pVVar4 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos
                             ((Vector3 *)&stack0xffffffd8,pWVar2,(MethodInfo *)0x0);
          fVar5 = pVVar4->y;
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                              ((MethodInfo *)0x0);
          if ((this_01 != (SpawnRoleDataMediator *)0x0) &&
             (this_02 = (SpawnRoleVariable_1_UnityEngine_Vector3_ *)
                        PlayerListsLayout+<CreatePlayerLists>c__Iterator0::
                        PlayerListsLayout_CreatePlayerLists_c_Iterator0_System_Collections_IEnumerator_get_Current
                                  ((PlayerListsLayout_CreatePlayerLists_c_Iterator0 *)this_01,
                                   (MethodInfo *)0x0),
             this_02 != (SpawnRoleVariable_1_UnityEngine_Vector3_ *)0x0)) {
            pVVar4 = Assets::Scripts::Network::Player::SpawnRoles::SpawnRoleData::
                     SpawnRoleVariableTypes::SpawnRoleVariable`1[UnityEngine::Vector3]::
                     SpawnRoleVariable_1_UnityEngine_Vector3__get_Value
                               ((Vector3 *)&stack0xfffffff0,this_02,
                                MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__
                               );
            uVar6 = pVVar4->y;
            if (fVar5 < (float)uVar6) {
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                 ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                                 ((Vector3 *)&stack0xffffffd8,*pVVar4,(MethodInfo *)0x0);
            }
            else {
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                                 ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
            }
            uVar7._0_4_ = pVVar4->x;
            uVar7._4_4_ = pVVar4->y;
            fVar5 = pVVar4->z;
            fVar8 = fVar5;
            uVar9 = uVar7;
            pVVar4 = ESInsert_ComputeObjectOffset
                               ((Vector3 *)&stack0xffffffc0,this,wo,*pVVar4,(MethodInfo *)0x0);
            uVar10 = (undefined4)uVar7;
            uVar11 = (undefined4)(uVar7 >> 0x20);
            uVar12._0_4_ = pVVar4->x;
            uVar12._4_4_ = pVVar4->y;
            fVar13 = pVVar4->z;
            uVar14 = uVar7;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              uVar9._4_4_ = (float)(uVar9 >> 0x20);
              uVar9 = CONCAT44(uVar9._4_4_,TypeInfo__UnityEngine__Vector3);
              func_?();
              uVar7 = CONCAT44(uVar11,uVar10);
            }
            uVar9 = uVar9 & 0xffffffff00000000;
            puVar15 = &UNK_?;
            a_00.z = fVar8;
            a_00.x = (float)(int)uVar7;
            a_00.y = (float)(int)(uVar7 >> 0x20);
            b.z = fVar13;
            b.x = (float)(int)uVar12;
            b.y = (float)(int)((ulonglong)uVar12 >> 0x20);
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&stack0xffffffc0,a_00,b,(MethodInfo *)0x0);
            uVar12._4_4_ = pVVar4->y;
            uVar12._0_4_ = pVVar4->z;
            position->x = pVVar4->x;
            position->y = uVar12._4_4_;
            position->z = (float)uVar12;
            rawPosition->x = (float)(int)uVar14;
            rawPosition->y = (float)(int)(uVar14 >> 0x20);
            rawPosition->z = (float)puVar15;
            a.z = fVar5;
            uVar9._4_4_ = (float)(uVar9 >> 0x20);
            a.x = (float)uVar16;
            a.y = uVar9._4_4_;
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                               ((Vector3 *)&stack0xffffffc0,a,(MethodInfo *)0x0);
            uRam_?._0_4_ = pVVar4->x;
            uRam_?._4_4_ = pVVar4->y;
            fRam00000008 = pVVar4->z;
            return 1;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar17 = (code *)swi(3);
  bVar3 = (*pcVar17)();
  return bVar3;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Enter
               (ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar1;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
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
  pMVar5 = (this->fields).previewMaterial;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Implicit
                    ((Object_1 *)pMVar5,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
      func_?();
    }
    pPVar7 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
    if (pPVar7 == (PrefabPool *)0x0) goto code_?;
    pMVar5 = PrefabPool::PrefabPool_get_InsertPreviewMaterial(pPVar7,(MethodInfo *)0x0);
    (this->fields).previewMaterial = pMVar5;
  }
  if ((e == (EditorStateMachine *)0x0) ||
     (pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0),
     pMVar8 == (MVWorldObjectClient *)0x0)) goto code_?;
  fVar9 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius(pMVar8,(MethodInfo *)0x0);
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_fieldOfView
                     (pCVar1,(MethodInfo *)0x0);
  fVar10 = fVar10 * _UNK_? * _UNK_?;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  dVar11 = (double)(fVar10 * _UNK_?);
  func_?();
  fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max
                     (5.0,fVar9 / (float)dVar11,in_stack_12);
  (this->fields).distanceInFreeSpace = fVar9;
  if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
    func_?(TypeInfo__PrefabPool);
  }
  pPVar7 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
  if (pPVar7 == (PrefabPool *)0x0) goto code_?;
  pXVar13 = (XpBoostParticlePreviewer *)
            PrefabPool::PrefabPool_get_InsertCursor(pPVar7,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pXVar13 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                      (pXVar13,
                       InsertCursor_MethodInfo__UnityEngine__Object__Instantiate<InsertCursor>_InsertCursor_
                      );
  (this->fields).insertCursor = (InsertCursor *)pXVar13;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      ((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
  fVar10 = pVVar14->y;
  fVar9 = pVVar14->z;
  (this->fields).insertOffset.x = pVVar14->x;
  (this->fields).insertOffset.y = fVar10;
  (this->fields).insertOffset.z = fVar9;
  pCVar1 = (this->fields).mainCamera;
  if ((pCVar1 == (Camera *)0x0) ||
     (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pCVar1,(MethodInfo *)0x0), pTVar15 == (Transform *)0x0))
  goto code_?;
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd8,pTVar15,(MethodInfo *)0x0);
  uVar16 = pVVar14->x;
  uVar17 = pVVar14->y;
  fVar9 = pVVar14->z;
  pCVar1 = (this->fields).mainCamera;
  if ((pCVar1 == (Camera *)0x0) ||
     (pTVar15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pCVar1,(MethodInfo *)0x0), pTVar15 == (Transform *)0x0))
  goto code_?;
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                      ((Vector3 *)&stack0xffffffd8,pTVar15,(MethodInfo *)0x0);
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      ((Vector3 *)&stack0xffffffd8,*pVVar14,(this->fields).distanceInFreeSpace,
                       (MethodInfo *)0x0);
  a.y = (float)uVar17;
  a.x = (float)uVar16;
  a.z = fVar9;
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xffffffd8,a,*pVVar14,(MethodInfo *)0x0);
  fVar10 = pVVar14->y;
  fVar9 = pVVar14->z;
  (this->fields).insertPosition.x = pVVar14->x;
  (this->fields).insertPosition.y = fVar10;
  (this->fields).insertPosition.z = fVar9;
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(0,(MethodInfo *)0x0);
  this_00 = (MVNetworkSelector *)
            TierOnDeathProgress+<DoTierProgress>c__Iterator0::
            TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                      ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)e,(MethodInfo *)0x0);
  selectionSet = (HashSet_1_System_Int32_ *)
                 MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                           ((MVJetPack_LocalObjectsJetPack *)e,(MethodInfo *)0x0);
  if (this_00 == (MVNetworkSelector *)0x0) goto code_?;
  bVar6 = MVNetworkSelector::MVNetworkSelector_RequestOwnership
                    (this_00,selectionSet,(MethodInfo *)0x0);
  if (bVar6 == 0) {
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
  pMVar18 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar18 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar19 = (undefined8 *)(*(code *)(pMVar18->klass->vtable).get_WorldPivot.method)();
  fVar9 = *(float *)(puVar19 + 1);
  method_00 = (MethodInfo *)*puVar19;
  uVar16 = (undefined4)((ulonglong)*puVar19 >> 0x20);
  pMVar18 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar18 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar19 = (undefined8 *)(*(code *)(pMVar18->klass->vtable).get_WorldPosition_1.method)();
  uVar20 = *puVar19;
  fVar10 = *(float *)(puVar19 + 1);
  uVar17 = (undefined4)uVar20;
  uVar21 = (undefined4)((ulonglong)uVar20 >> 0x20);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
    uVar20 = CONCAT44(uVar21,uVar17);
  }
  a_00.z = fVar10;
  a_00.x = (float)(int)uVar20;
  a_00.y = (float)(int)((ulonglong)uVar20 >> 0x20);
  b.y = (float)uVar16;
  b.x = (float)method_00;
  b.z = fVar9;
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      ((Vector3 *)&stack0xffffffcc,a_00,b,(MethodInfo *)0x0);
  pCVar1 = (this->fields).mainCamera;
  fVar10 = pVVar14->y;
  fVar9 = pVVar14->z;
  (this->fields).pivotToOrigin.x = pVVar14->x;
  (this->fields).pivotToOrigin.y = fVar10;
  (this->fields).pivotToOrigin.z = fVar9;
  if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
    func_?();
  }
  UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
  StandaloneInput_MousePosition((Vector3 *)&stack0xffffffcc,(StandaloneInput *)0x0,method_00);
  UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
  StandaloneInput_MousePosition((Vector3 *)&stack0xffffffcc,(StandaloneInput *)0x0,method_00);
  uVar20._0_4_ = 0.0;
  uVar20._4_4_ = 0.0;
  fVar9 = 0.0;
  func_?();
  if (pCVar1 == (Camera *)0x0) goto code_?;
  pos.z = fVar9;
  pos.x = (float)uVar20;
  pos.y = SUB84(uVar20,4);
  UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
            ((Ray *)&stack0xffffffc0,pCVar1,pos,(MethodInfo *)0x0);
  pMVar18 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  pVVar14 = (Vector3 *)func_?();
  pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                      ((Vector3 *)&stack0xffffffcc,*pVVar14,(this->fields).pivotToOrigin,
                       (MethodInfo *)0x0);
  ESInsert_ComputeSnapPosition((Vector3 *)&stack0xffffffcc,this,pMVar18,*pVVar14,(MethodInfo *)0x0);
  pMVar18 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar18 == (MVWorldObjectClient *)0x0) goto code_?;
  (*(code *)(pMVar18->klass->vtable).set_WorldPosition.method)();
  pMVar18 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar18 == (MVWorldObjectClient *)0x0) ||
     (pCVar22 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)pMVar18,(MethodInfo *)0x0),
     pCVar22 == (CelestialParam *)0x0)) goto code_?;
  pUVar23 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
            GameObject_GetComponentsInChildren_29
                      ((GameObject *)pCVar22,
                       UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                      );
  (this->fields).previewMeshes = (MeshFilter__Array *)pUVar23;
  this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
             *)System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)e,(MethodInfo *)0x0);
  if (this_01 ==
      (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
       *)0x0) goto code_?;
  bVar6 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject::
          KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
          Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                    (this_01,StringLiteral_IsNewPrototype,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                    );
  (this->fields).isNewPrototype = bVar6;
  pMVar18 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar18 == (MVWorldObjectClient *)0x0) {
code_?:
    this_03 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              (this_03,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar8 == (MVWorldObjectClient *)0x0) ||
       (item = (UnityWebRequest *)
               mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar8,(MethodInfo *)0x0)
       , this_03 == (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0)) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_03,item,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
  }
  else {
    bVar24 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar18->klass->_1).naturalAligment < bVar24) ||
       ((MVGroup__Class *)(pMVar18->klass->_1).typeHierarchy[bVar24 - 1] != TypeInfo__MVGroup)) {
      bVar25 = false;
    }
    else {
      bVar25 = true;
    }
    pMVar26 = (MVWorldObjectClient *)0x0;
    if (bVar25) {
      pMVar26 = pMVar18;
    }
    if (pMVar26 == (MVWorldObjectClient *)0x0) goto code_?;
    EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    iVar27 = func_?();
    if (iVar27 == 0) goto code_?;
    this_02 = (MVGroup *)func_?();
    this_03 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
              MVGroup::MVGroup_GetHierarchyWorldObjectIDs(this_02,(MethodInfo *)pMVar8);
  }
  (this->fields).woIgnoreList = (HashSet_1_System_Int32_ *)this_03;
  pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar8 != (MVWorldObjectClient *)0x0) &&
     (pCVar22 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)pMVar8,(MethodInfo *)0x0),
     pCVar22 != (CelestialParam *)0x0)) {
    iVar28 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer
                       ((GameObject *)pCVar22,(MethodInfo *)0x0);
    iVar29 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
    if (iVar28 == iVar29) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_04 == (MainCameraManager *)0x0) goto code_?;
      MainCameraManager::MainCameraManager_set_IsLogicRendered(this_04,1,(MethodInfo *)0x0);
    }
    pMVar8 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar8 != (MVWorldObjectClient *)0x0) &&
       (pCVar22 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)pMVar8,(MethodInfo *)0x0),
       pCVar22 != (CelestialParam *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                ((GameObject *)pCVar22,0,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
        func_?();
      }
      bVar6 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar6 == 0) {
        return;
      }
      (this->fields).pointerWasUp = 1;
      return;
    }
  }
code_?:
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Execute
               (ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  puStack_6 = (undefined *)0x0;
  pVStack_7 = (Vector3 *)0x0;
  pMStack_8 = (MVWorldObjectClient *)0x0;
  pIStack_9 = (Il2CppMethodPointer)0x0;
  if (((e == (EditorStateMachine *)0x0) ||
      (pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0),
      pMVar10 == (MVWorldObjectClient *)0x0)) ||
     (this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                          ((DayNightCycle *)pMVar10,(MethodInfo *)0x0),
     this_03 == (CelestialParam *)0x0)) goto code_?;
  pUVar11 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
            GameObject_GetComponentsInChildren_29
                      ((GameObject *)this_03,
                       UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______
                      );
  (this->fields).previewMeshes = (MeshFilter__Array *)pUVar11;
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,(float)e,(MethodInfo *)0x0)
  ;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    in_stack_12 = TypeInfo__UnityEngine__Vector3;
    func_?();
  }
  pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      (&VStack_14,(MethodInfo *)0x0);
  uVar15 = pVVar13->x;
  uVar16 = pVVar13->y;
  VStack_17.z = pVVar13->z;
  VStack_17.x = (float)uVar15;
  VStack_17.y = (float)uVar16;
  pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                      (&VStack_14,(MethodInfo *)0x0);
  uVar18 = pVVar13->x;
  uVar19 = pVVar13->y;
  VStack_20.z = pVVar13->z;
  VStack_20.x = (float)uVar18;
  VStack_20.y = (float)uVar19;
  pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                      (&VStack_21,(MethodInfo *)0x0);
  VStack_14.x = pVVar13->x;
  VStack_14.y = pVVar13->y;
  VStack_14.z = pVVar13->z;
  pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  bVar22 = ESInsert_DrawPlanePick(this,pMVar10,&VStack_17,&VStack_20,&VStack_14,(MethodInfo *)0x0);
  if (bVar22 == 0) {
    pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    func_?(&stack0xffffff20,0,0x48);
    bVar22 = EditModeObjectPicker::EditModeObjectPicker_Pick
                       ((VoxelHit *)&stack0xffffff20,(this->fields).woIgnoreList,-0x40005,
                        (MethodInfo *)0x0);
    pMVar23 = (MeshFilter__Array *)VStack_17.z;
    if (bVar22 == 0) {
      bVar24 = false;
      uVar25 = CONCAT44(VStack_17.y,VStack_17.x);
      VStack_17.y = VStack_20.x;
      VStack_17.z = VStack_20.y;
      fVar26 = VStack_14.z;
      in_stack_27 = (Mesh *)VStack_20.z;
      uVar28 = VStack_14._0_8_;
    }
    else {
      fVar26 = in_stack_29;
      VStack_17.y = in_stack_30;
      VStack_17.z = in_stack_31;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      VVar32.y = VStack_17.z;
      VVar32.x = VStack_17.y;
      VVar32.z = in_stack_29;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                          (&VStack_21,VVar32,(MethodInfo *)0x0);
      pVVar13 = ESInsert_ComputeObjectOffset(&VStack_21,this,pMVar10,*pVVar13,(MethodInfo *)0x0);
      uVar33 = (this->fields).insertOffset.x;
      uVar34 = (this->fields).insertOffset.y;
      fVar35 = (this->fields).insertOffset.z;
      uVar36 = pVVar13->x;
      uVar37 = pVVar13->y;
      fVar38 = pVVar13->z;
      VStack_20.y = (float)uVar33;
      VStack_20.z = (float)uVar34;
      VStack_17.y = (float)uVar36;
      VStack_17.z = (float)uVar37;
      ppMStack_39 = (MeshFilter **)
                    UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                              ((MethodInfo *)0x0);
      a.y = VStack_20.z;
      a.x = VStack_20.y;
      a.z = fVar35;
      b.y = VStack_17.z;
      b.x = VStack_17.y;
      b.z = fVar38;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                          (&VStack_21,a,b,(float)ppMStack_39 * _UNK_?,(MethodInfo *)0x0);
      fVar38 = pVVar13->y;
      fVar35 = pVVar13->z;
      VVar40 = *pVVar13;
      (this->fields).insertOffset.x = pVVar13->x;
      (this->fields).insertOffset.y = fVar38;
      (this->fields).insertOffset.z = fVar35;
      a_01.y = (float)in_stack_41;
      a_01.x = (float)in_stack_12;
      a_01.z = (float)in_stack_27;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          (&VStack_21,a_01,VVar40,(MethodInfo *)0x0);
      bVar24 = true;
      uVar25._0_4_ = pVVar13->x;
      uVar25._4_4_ = pVVar13->y;
      pMVar23 = (MeshFilter__Array *)pVVar13->z;
      uVar28._4_4_ = in_stack_31;
      uVar28._0_4_ = in_stack_30;
      VStack_17.y = (float)in_stack_12;
      VStack_17.z = (float)in_stack_41;
    }
    pIVar42 = (this->fields).insertCursor;
    VStack_20.y = (float)uVar28;
    VStack_20.z = SUB84(uVar28,4);
    fStack_43 = fVar26;
    if (bVar24) {
      (this->fields).insertPosition.x = (float)(int)uVar25;
      (this->fields).insertPosition.y = (float)(int)((ulonglong)uVar25 >> 0x20);
      (this->fields).insertPosition.z = (float)pMVar23;
      if ((pIVar42 == (InsertCursor *)0x0) ||
         (pTVar44 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pIVar42,(MethodInfo *)0x0),
         pTVar44 == (Transform *)0x0)) goto code_?;
      value.y = VStack_17.z;
      value.x = VStack_17.y;
      value.z = (float)in_stack_27;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar44,value,(MethodInfo *)0x0);
      pIVar42 = (this->fields).insertCursor;
      if (pIVar42 == (InsertCursor *)0x0) goto code_?;
      pTVar44 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pIVar42,(MethodInfo *)0x0);
      pMVar23 = (MeshFilter__Array *)VStack_20.y;
      pMVar45 = (Mesh *)VStack_20.z;
      fVar26 = fStack_43;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
        pMVar23 = (MeshFilter__Array *)VStack_20.y;
        pMVar45 = (Mesh *)VStack_20.z;
        fVar26 = fStack_43;
      }
      goto code_?;
    }
    if (pIVar42 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar42,0,(MethodInfo *)0x0);
    fStack_43 = (this->fields).insertOffset.z;
    uVar46 = (this->fields).insertOffset.x;
    uVar47 = (this->fields).insertOffset.y;
    VStack_20.y = (float)uVar46;
    VStack_20.z = (float)uVar47;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        (&VStack_21,(MethodInfo *)0x0);
    uVar48 = pVVar13->x;
    uVar49 = pVVar13->y;
    fVar26 = pVVar13->z;
    VStack_17.y = (float)uVar48;
    VStack_17.z = (float)uVar49;
    ppMStack_39 = (MeshFilter **)
                  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    a_04.y = VStack_20.z;
    a_04.x = VStack_20.y;
    a_04.z = fStack_43;
    b_01.y = VStack_17.z;
    b_01.x = VStack_17.y;
    b_01.z = fVar26;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                        (&VStack_21,a_04,b_01,(float)ppMStack_39 * _UNK_?,(MethodInfo *)0x0);
    this_00 = (this->fields).mainCamera;
    fVar35 = pVVar13->y;
    fVar26 = pVVar13->z;
    (this->fields).insertOffset.x = pVVar13->x;
    (this->fields).insertOffset.y = fVar35;
    (this->fields).insertOffset.z = fVar26;
    if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar13 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
              StandaloneInput_MousePosition(&VStack_21,(StandaloneInput *)0x0,in_stack_50);
    uVar51 = pVVar13->x;
    uVar52 = pVVar13->y;
    VStack_20.z = pVVar13->z;
    VStack_20.x = (float)uVar51;
    VStack_20.y = (float)uVar52;
    pVVar13 = UnityStandardAssets::CrossPlatformInput::PlatformSpecific::StandaloneInput::
              StandaloneInput_MousePosition(&VStack_21,(StandaloneInput *)0x0,in_stack_50);
    uVar53 = pVVar13->x;
    uVar54 = pVVar13->y;
    VStack_17.z = pVVar13->z;
    VStack_14.x = 0.0;
    VStack_14.y = 0.0;
    VStack_14.z = 0.0;
    VStack_17.x = (float)uVar53;
    VStack_17.y = (float)uVar54;
    func_?();
    if (this_00 == (Camera *)0x0) goto code_?;
    pos.z = VStack_14.z;
    pos.x = VStack_14.x;
    pos.y = VStack_14.y;
    pRVar55 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_ScreenPointToRay_2
                        ((Ray *)&stack0xffffff68,this_00,pos,(MethodInfo *)0x0);
    puStack_6 = (undefined *)(pRVar55->m_Origin).x;
    pVStack_7 = (Vector3 *)(pRVar55->m_Origin).y;
    pMStack_8 = (MVWorldObjectClient *)(pRVar55->m_Origin).z;
    pIStack_9 = (Il2CppMethodPointer)(pRVar55->m_Direction).x;
    uStack_1._0_4_ = (pRVar55->m_Direction).y;
    uStack_1._4_4_ = (pRVar55->m_Direction).z;
    pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pVVar13 = (Vector3 *)func_?(&VStack_21,&puStack_6,(this->fields).distanceInFreeSpace);
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_21,*pVVar13,(this->fields).pivotToOrigin,(MethodInfo *)0x0);
    pVVar13 = ESInsert_ComputeSnapPosition(&VStack_21,this,pMVar10,*pVVar13,(MethodInfo *)0x0);
    fVar26 = (this->fields).insertPosition.z;
    uVar56 = pVVar13->x;
    uVar57 = pVVar13->y;
    fVar35 = pVVar13->z;
    uVar58 = (this->fields).insertPosition.x;
    uVar59 = (this->fields).insertPosition.y;
    VStack_20.y = (float)uVar56;
    VStack_20.z = (float)uVar57;
    VStack_17.y = (float)uVar58;
    VStack_17.z = (float)uVar59;
    pVVar13 = (Vector3 *)func_?();
    a_05.y = VStack_17.z;
    a_05.x = VStack_17.y;
    a_05.z = fVar26;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_21,a_05,*pVVar13,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar13->x;
    uStack_2._4_4_ = pVVar13->y;
    fStack_3 = pVVar13->z;
    pVVar13 = (Vector3 *)func_?();
    a_06.y = VStack_20.z;
    a_06.x = VStack_20.y;
    a_06.z = fVar35;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_21,a_06,*pVVar13,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar13->x;
    uStack_4._4_4_ = pVVar13->y;
    fStack_5 = pVVar13->z;
    puVar60 = (undefined8 *)func_?();
    fVar26 = *(float *)(puVar60 + 1);
    VStack_20.y = (float)*puVar60;
    VStack_20.z = (float)((ulonglong)*puVar60 >> 0x20);
    puVar60 = (undefined8 *)func_?();
    fVar35 = *(float *)(puVar60 + 1);
    VStack_17.y = (float)*puVar60;
    VStack_17.z = (float)((ulonglong)*puVar60 >> 0x20);
    fVar61 = (float10)func_?();
    fStack_62 = (float)fVar61;
    uStack_2 = ZEXT48(&uStack_4);
    uStack_1 = CONCAT44(&UNK_?,(undefined4)uStack_1);
    fVar61 = (float10)func_?();
    fStack_43 = (float)fVar61;
    ppMStack_39 = (MeshFilter **)
                  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fStack_62 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                          (fStack_62,fStack_43,(float)ppMStack_39 * _UNK_?,(MethodInfo *)0x0);
    a_02.y = VStack_17.z;
    a_02.x = VStack_17.y;
    a_02.z = fVar35;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                        (&VStack_21,a_02,fStack_62,(MethodInfo *)0x0);
    a_03.y = VStack_20.z;
    a_03.x = VStack_20.y;
    a_03.z = fVar26;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_21,a_03,*pVVar13,(MethodInfo *)0x0);
    fVar35 = pVVar13->y;
    fVar26 = pVVar13->z;
    VVar40 = *pVVar13;
    VVar32 = (this->fields).pivotToOrigin;
    (this->fields).insertPosition.x = pVVar13->x;
    (this->fields).insertPosition.y = fVar35;
    (this->fields).insertPosition.z = fVar26;
    pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_21,VVar40,VVar32,(MethodInfo *)0x0);
    uVar63 = pVVar13->x;
    uVar64 = pVVar13->y;
    in_stack_27 = (Mesh *)pVVar13->z;
    VStack_17.y = (float)uVar63;
    VStack_17.z = (float)uVar64;
  }
  else {
    (this->fields).insertPosition.x = VStack_17.x;
    (this->fields).insertPosition.y = VStack_17.y;
    (this->fields).insertPosition.z = VStack_17.z;
    pIVar42 = (this->fields).insertCursor;
    if ((pIVar42 == (InsertCursor *)0x0) ||
       (pTVar44 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)pIVar42,(MethodInfo *)0x0),
       in_stack_27 = (Mesh *)VStack_20.z, pTVar44 == (Transform *)0x0)) goto code_?;
    VStack_17.y = VStack_20.x;
    VStack_17.z = VStack_20.y;
    VVar40.y = VStack_20.y;
    VVar40.x = VStack_20.x;
    VVar40.z = VStack_20.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar44,VVar40,(MethodInfo *)0x0);
    pIVar42 = (this->fields).insertCursor;
    if (pIVar42 == (InsertCursor *)0x0) goto code_?;
    pTVar44 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)pIVar42,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    pMVar23 = VStack_14.x;
    pMVar45 = VStack_14.y;
    fVar26 = VStack_14.z;
code_?:
    forward.y = (float)pMVar45;
    forward.x = (float)pMVar23;
    forward.z = fVar26;
    pQVar65 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        ((Quaternion *)&stack0xffffff70,forward,(MethodInfo *)0x0);
    if (pTVar44 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (pTVar44,*pQVar65,(MethodInfo *)0x0);
    pIVar42 = (this->fields).insertCursor;
    if (pIVar42 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar42,1,(MethodInfo *)0x0);
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pGVar66 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar66 != (GameEventManager *)0x0) &&
      (pGVar67 = (pGVar66->fields).AvatarCommandsBuildMode,
      pGVar67 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (this_01 = (pGVar67->fields).LaserCommands,
     this_01 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    to.y = VStack_17.z;
    to.x = VStack_17.y;
    to.z = (float)in_stack_27;
    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
              (this_01,to,(MethodInfo *)0x0);
    pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pVVar13 = ESInsert_ComputeSnapPosition
                        (&VStack_21,this,pMVar10,(this->fields).insertPosition,(MethodInfo *)0x0);
    uVar68 = pVVar13->x;
    uVar69 = pVVar13->y;
    ppMStack_39 = (MeshFilter **)pVVar13->z;
    VStack_17.y = (float)uVar68;
    VStack_17.z = (float)uVar69;
    pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    pMVar70 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar70 != (MVWorldObjectClient *)0x0) {
      pIStack_9 = (pMVar70->klass->vtable).set_WorldPosition.methodPtr;
      pVStack_7 = &VStack_21;
      pMStack_8 = pMVar70;
      puVar60 = (undefined8 *)(*(code *)(pMVar70->klass->vtable).get_WorldPosition_1.method)();
      fStack_43 = *(float *)(puVar60 + 1);
      VStack_20.y = (float)*puVar60;
      VStack_20.z = (float)((ulonglong)*puVar60 >> 0x20);
      fStack_62 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_00.y = VStack_20.z;
      a_00.x = VStack_20.y;
      a_00.z = fStack_43;
      b_00.y = VStack_17.z;
      b_00.x = VStack_17.y;
      b_00.z = (float)ppMStack_39;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                          (&VStack_21,a_00,b_00,fStack_62 * _UNK_?,(MethodInfo *)0x0);
      if (pMVar10 != (MVWorldObjectClient *)0x0) {
        (*(code *)(pMVar10->klass->vtable).set_SyncPos.method)
                  (pMVar10,pVVar13->x,pVVar13->y,pVVar13->z,
                   (pMVar10->klass->vtable).get_SyncRot.methodPtr);
        pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
        if (pMVar10 != (MVWorldObjectClient *)0x0) {
          DayNightCycle::DayNightCycle_get_CurrentMoonParam
                    ((DayNightCycle *)pMVar10,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          VStack_17.z = (float)(this->fields).previewMeshes;
          fStack_43 = 0.0;
          if ((MeshFilter__Array *)VStack_17.z != (MeshFilter__Array *)0x0) {
            ppMStack_39 = ((MeshFilter__Array *)VStack_17.z)->vector;
            for (; (int)fStack_43 < (int)*(float *)((int)VStack_17.z + 0xc);
                fStack_43 = (float)((int)fStack_43 + 1)) {
              if ((uint)*(float *)((int)VStack_17.z + 0xc) <= (uint)fStack_43) goto code_?;
              this_02 = *ppMStack_39;
              submeshIndex = 0;
              while( true ) {
                if ((this_02 == (MeshFilter *)0x0) ||
                   (pMVar45 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                              MeshFilter_get_sharedMesh(this_02,(MethodInfo *)0x0),
                   pMVar45 == (Mesh *)0x0)) goto code_?;
                iVar71 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount
                                   (pMVar45,(MethodInfo *)0x0);
                if (iVar71 <= submeshIndex) break;
                VStack_20.z = (float)UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                     MeshFilter_get_sharedMesh(this_02,(MethodInfo *)0x0);
                pTVar44 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_02,(MethodInfo *)0x0);
                if (pTVar44 == (Transform *)0x0) goto code_?;
                pMVar72 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_get_localToWorldMatrix
                                    ((Matrix4x4 *)&stack0xffffff28,pTVar44,(MethodInfo *)0x0);
                fStack_73 = pMVar72->m00;
                VStack_21.x = pMVar72->m10;
                VStack_21.y = pMVar72->m20;
                VStack_21.z = pMVar72->m30;
                fStack_74 = pMVar72->m01;
                VStack_14.x = pMVar72->m11;
                VStack_14.y = pMVar72->m21;
                VStack_14.z = pMVar72->m31;
                fVar26 = pMVar72->m02;
                fVar35 = pMVar72->m12;
                layerName = (String *)pMVar72->m32;
                fVar38 = pMVar72->m03;
                fVar75 = pMVar72->m13;
                fVar76 = pMVar72->m23;
                fVar77 = pMVar72->m33;
                pMStack_78 = (this->fields).previewMaterial;
                puVar79 = &UNK_?;
                fStack_62 = (float)UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                                   LayerMask_NameToLayer(layerName,(MethodInfo *)0x0);
                pCStack_80 = (this->fields).mainCamera;
                if ((((uint)(TypeInfo__UnityEngine__Graphics->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Graphics->_1).cctor_started == 0)) {
                  func_?();
                }
                matrix.m10 = VStack_21.x;
                matrix.m00 = fStack_73;
                matrix.m20 = VStack_21.y;
                matrix.m30 = VStack_21.z;
                matrix.m01 = fStack_74;
                matrix.m11 = VStack_14.x;
                matrix.m21 = VStack_14.y;
                matrix.m31 = VStack_14.z;
                matrix.m02 = fVar26;
                matrix.m12 = fVar35;
                matrix.m22 = (float)puVar79;
                matrix.m32 = (float)layerName;
                matrix.m03 = fVar38;
                matrix.m13 = fVar75;
                matrix.m23 = fVar76;
                matrix.m33 = fVar77;
                UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_2
                          ((Mesh *)VStack_20.z,matrix,pMStack_78,(int32_t)fStack_62,pCStack_80,
                           submeshIndex,(MethodInfo *)0x0);
                submeshIndex = submeshIndex + 1;
              }
              ppMStack_39 = ppMStack_39 + 1;
            }
            if ((this->fields).pointerWasUp == 0) {
              if ((((uint)(TypeInfo__MVInputWrapper->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__MVInputWrapper->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVInputWrapper);
              }
              bVar22 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                 (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
              if (bVar22 != 0) {
                if ((this->fields).isNewPrototype == 0) {
                  VStack_17.z = 6.5861e-44;
                  pOVar81 = (Object *)func_?(TypeInfo__EditorEvent,&VStack_17.z);
                  FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar81,(MethodInfo *)0x0);
                  (this->fields).pointerWasUp = 0;
                  return;
                }
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_04 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                                    ((MethodInfo *)0x0);
                if (this_04 != (MainCameraManager *)0x0) {
                  pMVar82 = MainCameraManager::MainCameraManager_get_CurrentCamera
                                      (this_04,(MethodInfo *)0x0);
                  pMVar10 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                      (e,(MethodInfo *)0x0);
                  if (pMVar82 != (MVCameraBase *)0x0) {
                    func_?(0xd,pMVar82,pMVar10,0x40000000,0,0,0,0,0,0);
                    VStack_17.z = 0.0;
                    pOVar81 = (Object *)func_?(TypeInfo__EditorEvent,&VStack_17.z);
                    FSMEntity::FSMEntity_set_Event((FSMEntity *)e,pOVar81,(MethodInfo *)0x0);
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
  func_?(0);
code_?:
  uVar83 = func_?(0,0);
  func_?(uVar83);
  pcVar84 = (code *)swi(3);
  (*pcVar84)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Exit
               (ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
  pIVar1 = (this->fields).insertCursor;
  if (pIVar1 != (InsertCursor *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pIVar1,0,(MethodInfo *)0x0);
    pIVar1 = (this->fields).insertCursor;
    if (pIVar1 != (InsertCursor *)0x0) {
      obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)pIVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)obj,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar2 != (GameEventManager *)0x0) &&
          (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
          pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar4 = (pGVar3->fields).LaserCommands,
         pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                  (pGVar4,LaserPointerState__Enum_Idle,(MethodInfo *)0x0);
        pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar2 != (GameEventManager *)0x0) &&
            (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
            pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar4 = (pGVar3->fields).LaserCommands,
           pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
          GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
          GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_SetLaserActiveState
                    (pGVar4,0,(MethodInfo *)0x0);
          pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                             ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
          pVVar6 = ESInsert_ComputeSnapPosition
                             ((Vector3 *)&puStack_7,this,pMVar5,(this->fields).insertPosition,
                              (MethodInfo *)0x0);
          uVar8._0_4_ = pVVar6->x;
          uVar8._4_4_ = pVVar6->y;
          fVar9 = pVVar6->z;
          pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                             ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
          if (((pMVar5 != (MVWorldObjectClient *)0x0) &&
              (pCVar10 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                  ((DayNightCycle *)pMVar5,(MethodInfo *)0x0),
              pCVar10 != (CelestialParam *)0x0)) &&
             (this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform((GameObject *)pCVar10,(MethodInfo *)0x0),
             this_00 != (Transform *)0x0)) {
            value.z = fVar9;
            value.x = (float)(int)uVar8;
            value.y = (float)(int)((ulonglong)uVar8 >> 0x20);
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (this_00,value,(MethodInfo *)0x0);
            pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                               ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
            pMVar11 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
            if ((pMVar11 != (MVWorldObjectClient *)0x0) &&
               ((*(code *)(pMVar11->klass->vtable).get_WorldPosition_1.method)(),
               pMVar5 != (MVWorldObjectClient *)0x0)) {
              (*(code *)(pMVar5->klass->vtable).set_SyncPos.method)();
              this_01 = (MVNetworkSelector *)
                        TierOnDeathProgress+<DoTierProgress>c__Iterator0::
                        TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                                  ((TierOnDeathProgress_DoTierProgress_c_Iterator0 *)&UNK_?,
                                   (MethodInfo *)0x0);
              selectionSet = (HashSet_1_System_Int32_ *)
                             MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                                       ((MVJetPack_LocalObjectsJetPack *)&UNK_?,
                                        (MethodInfo *)0x0);
              if (this_01 != (MVNetworkSelector *)0x0) {
                MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership
                          (this_01,selectionSet,(MethodInfo *)0x0);
                pMVar5 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO
                                   ((EditorStateMachine *)&UNK_?,(MethodInfo *)0x0);
                if ((pMVar5 != (MVWorldObjectClient *)0x0) &&
                   (pCVar10 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                       ((DayNightCycle *)pMVar5,(MethodInfo *)0x0),
                   pCVar10 != (CelestialParam *)0x0)) {
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                            ((GameObject *)pCVar10,1,(MethodInfo *)0x0);
                  return;
                }
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff94,0,0x48);
  bVar1 = EditModeObjectPicker::EditModeObjectPicker_Pick
                    ((VoxelHit *)&stack0xffffff94,(this->fields).woIgnoreList,-0x40005,
                     (MethodInfo *)0x0);
  if (bVar1 == 0) {
    return 0;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  VVar2.y = in_stack_3;
  VVar2.x = in_stack_4;
  VVar2.z = in_stack_5;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                     ((Vector3 *)&stack0xffffffe8,VVar2,(MethodInfo *)0x0);
  fVar7 = pVVar6->x;
  fVar8 = pVVar6->y;
  pEVar9 = this;
  pVVar6 = ESInsert_ComputeObjectOffset
                     ((Vector3 *)&stack0xffffffdc,this,wo,*pVVar6,(MethodInfo *)0x0);
  uVar10._0_4_ = (this->fields).insertOffset.x;
  fStack_11 = (this->fields).insertOffset.y;
  fVar12 = (this->fields).insertOffset.z;
  VVar2 = *pVVar6;
  fVar13 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  pVVar6 = (Vector3 *)&stack0xffffffdc;
  puVar14 = &UNK_?;
  a.z = fVar12;
  a.x = (float)uVar10;
  a.y = fStack_11;
  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Lerp
                     (pVVar6,a,VVar2,fVar13 * _UNK_?,(MethodInfo *)0x0);
  fVar12 = pVVar15->y;
  uVar10._0_4_ = pVVar15->z;
  VVar2 = *pVVar15;
  (this->fields).insertOffset.x = pVVar15->x;
  (this->fields).insertOffset.y = fVar12;
  (this->fields).insertOffset.z = (float)uVar10;
  a_00.y = (float)wo;
  a_00.x = (float)pEVar9;
  a_00.z = fVar7;
  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     ((Vector3 *)&stack0xffffffdc,a_00,VVar2,(MethodInfo *)0x0);
  fVar12 = pVVar15->y;
  uVar10._0_4_ = pVVar15->z;
  position->x = pVVar15->x;
  position->y = fVar12;
  position->z = (float)uVar10;
  rawPosition->x = (float)pEVar9;
  rawPosition->y = (float)wo;
  rawPosition->z = fVar7;
  normal->x = fVar8;
  normal->y = (float)puVar14;
  normal->z = (float)pVVar6;
  return 1;
}


/* ESInsert() */

void Assembly-CSharp.dll::ESInsert::ESInsert__ctor(ESInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).distanceInFreeSpace = 5.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).insertPosition.x = pVVar1->x;
  (this->fields).insertPosition.y = fVar3;
  (this->fields).insertPosition.z = fVar4;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).insertOffset.x = pVVar1->x;
  (this->fields).insertOffset.y = fVar3;
  (this->fields).insertOffset.z = fVar4;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  (this->fields).woIgnoreList = (HashSet_1_System_Int32_ *)this_00;
  ESStateBase::ESStateBase__ctor((ESStateBase *)this,(MethodInfo *)0x0);
  return;
}

