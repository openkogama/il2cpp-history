
/* Vector3 ComputeObjectOffset(MVWorldObjectClient, Vector3) */

Vector3 * Assembly-CSharp.dll::ESInsert::ESInsert_ComputeObjectOffset(Vector3 *__return_storage_ptr__,ESInsert *this,MVWorldObjectClient *wo,Vector3 *surfaceNormal,MethodInfo *method)

{
  if (wo != (MVWorldObjectClient *)0x0) {
    pVVar1 = MVWorldObjectClient::MVWorldObjectClient_GetBoundsCornersLocal(wo,BoundsContext__Enum_Insert,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar2 = 0;
    fVar3 = 0.0;
    pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_5._0_4_ = (pVVar4->zeroVector).x;
    uStack_5._4_4_ = (pVVar4->zeroVector).y;
    fVar6 = (pVVar4->zeroVector).z;
    if (pVVar1 != (Vector3__Array *)0x0) {
      pVVar7 = pVVar1->vector;
      while( true ) {
        if ((int)pVVar1->max_length <= (int)uVar2) {
          uVar8 = surfaceNormal->x;
          uVar9 = surfaceNormal->y;
          fVar10 = uStack_5._4_4_ * (float)uVar9 + (float)uStack_5 * (float)uVar8 + fVar6 * surfaceNormal->z;
          uVar11 = (this->fields).pivotToOrigin.x;
          uVar12 = (this->fields).pivotToOrigin.y;
          uVar13 = surfaceNormal->x;
          fVar6 = surfaceNormal->y;
          fVar3 = surfaceNormal->z;
          fVar14 = (this->fields).pivotToOrigin.z;
          __return_storage_ptr__->x = (float)uVar13 * fVar10 - (float)uVar11;
          __return_storage_ptr__->y = fVar6 * fVar10 - (float)uVar12;
          __return_storage_ptr__->z = fVar3 * fVar10 - fVar14;
          return __return_storage_ptr__;
        }
        if ((uint)pVVar1->max_length <= uVar2) break;
        uVar15 = pVVar7->x;
        uVar16 = pVVar7->y;
        fVar14 = pVVar7->z;
        puVar17 = (undefined8 *)(*(wo->klass->vtable).get_Scale.methodPtr)(auStack_18,wo,(wo->klass->vtable).get_Scale.method);
        uVar19 = (this->fields).pivotToOrigin.x;
        uVar20 = (this->fields).pivotToOrigin.y;
        fVar10 = fVar14 * *(float *)(puVar17 + 1) + (this->fields).pivotToOrigin.z;
        fVar21 = (float)uVar15 * (float)*puVar17 + (float)uVar19;
        fVar22 = (float)uVar16 * (float)((ulonglong)*puVar17 >> 0x20) + (float)uVar20;
        uStack_23 = CONCAT44(fVar22,fVar21);
        fStack_24 = fVar10;
        fVar14 = (float)FUN_?(&uStack_23);
        if (1e-05 < fVar14) {
          fVar25 = fVar10 / fVar14;
          uVar26 = CONCAT44(fVar22 / fVar14,fVar21 / fVar14);
        }
        else {
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Vector3);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
          uVar26._0_4_ = (pVVar4->zeroVector).x;
          uVar26._4_4_ = (pVVar4->zeroVector).y;
          fVar25 = (pVVar4->zeroVector).z;
        }
        uVar27 = surfaceNormal->x;
        uVar28 = surfaceNormal->y;
        fStack_29 = (float)((ulonglong)uVar26 >> 0x20);
        fStack_30 = (float)uVar26;
        fVar14 = fStack_29 * (float)uVar28 + fStack_30 * (float)uVar27 + fVar25 * surfaceNormal->z;
        if (fVar3 < fVar14) {
          uStack_5 = CONCAT44(fVar22,fVar21);
          fVar3 = fVar14;
          fVar6 = fVar10;
        }
        uVar2 = uVar2 + 1;
        pVVar7 = pVVar7 + 1;
      }
      FUN_?();
      pcVar31 = (code *)swi(3);
      pVVar7 = (Vector3 *)(*pcVar31)();
      return pVVar7;
    }
  }
  FUN_?();
  pcVar31 = (code *)swi(3);
  pVVar7 = (Vector3 *)(*pcVar31)();
  return pVVar7;
}


/* Vector3 ComputeSnapPosition(MVWorldObjectClient, Vector3) */

Vector3 * Assembly-CSharp.dll::ESInsert::ESInsert_ComputeSnapPosition(Vector3 *__return_storage_ptr__,ESInsert *this,MVWorldObjectClient *wo,Vector3 *originalPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField != (IEditModeUI *)0x0) {
    cVar1 = FUN_?(0,TypeInfo__IEditModeUI);
    if (cVar1 == '\0') {
      uVar2 = 0x3d800000;
    }
    else {
      uVar2 = 0x3f800000;
    }
    if (wo != (MVWorldObjectClient *)0x0) {
      fStack_3 = originalPos->z;
      uStack_4._0_4_ = originalPos->x;
      uStack_4._4_4_ = originalPos->y;
      puVar5 = (undefined8 *)(*(wo->klass->vtable).GetClosestGridPoint.methodPtr)(auStack_6,wo,uVar2,&uStack_4,(wo->klass->vtable).GetClosestGridPoint.method);
      uVar7 = *puVar5;
      fVar8 = *(float *)(puVar5 + 1);
      __return_storage_ptr__->x = (float)(int)uVar7;
      __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
      __return_storage_ptr__->z = fVar8;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar9 = (code *)swi(3);
  pVVar10 = (Vector3 *)(*pcVar9)();
  return pVVar10;
}


/* Void DrawObject(GameObject) */

void Assembly-CSharp.dll::ESInsert::ESInsert_DrawObject(ESInsert *this,GameObject *go,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Default);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).previewMeshes;
  uVar2 = 0;
  if (pMVar1 != (MeshFilter__Array *)0x0) {
    ppMVar3 = pMVar1->vector;
    while( true ) {
      if ((int)pMVar1->max_length <= (int)uVar2) {
        return;
      }
      if ((uint)pMVar1->max_length <= uVar2) {
        FUN_?();
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      this_00 = *ppMVar3;
      submeshIndex = 0;
      if (this_00 == (MeshFilter *)0x0) break;
      while( true ) {
        pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh(this_00,(MethodInfo *)0x0);
        if (pMVar5 == (Mesh *)0x0) goto code_?;
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount(pMVar5,(MethodInfo *)0x0);
        if (iVar6 <= submeshIndex) break;
        pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh(this_00,(MethodInfo *)0x0);
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 == (Transform *)0x0) goto code_?;
        pMVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix(&MStack_8,this_01,(MethodInfo *)0x0);
        material = (this->fields).previewMaterial;
        uVar9._0_4_ = pMVar7->m00;
        uVar9._4_4_ = pMVar7->m10;
        uVar10._0_4_ = pMVar7->m20;
        uVar10._4_4_ = pMVar7->m30;
        uVar11._0_4_ = pMVar7->m01;
        uVar11._4_4_ = pMVar7->m11;
        uVar12._0_4_ = pMVar7->m21;
        uVar12._4_4_ = pMVar7->m31;
        uVar13._0_4_ = pMVar7->m02;
        uVar13._4_4_ = pMVar7->m12;
        uVar14._0_4_ = pMVar7->m22;
        uVar14._4_4_ = pMVar7->m32;
        uVar15._0_4_ = pMVar7->m03;
        uVar15._4_4_ = pMVar7->m13;
        uVar16._0_4_ = pMVar7->m23;
        uVar16._4_4_ = pMVar7->m33;
        iVar6 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
        camera = (this->fields).mainCamera;
        if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
          FUN_?();
        }
        MStack_8._0_8_ = uVar9;
        MStack_8._8_8_ = uVar10;
        MStack_8._16_8_ = uVar11;
        MStack_8._24_8_ = uVar12;
        MStack_8._32_8_ = uVar13;
        MStack_8._40_8_ = uVar14;
        MStack_8._48_8_ = uVar15;
        MStack_8._56_8_ = uVar16;
        UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3(pMVar5,&MStack_8,material,iVar6,camera,submeshIndex,(MethodInfo *)0x0);
        submeshIndex = submeshIndex + 1;
      }
      uVar2 = uVar2 + 1;
      ppMVar3 = ppMVar3 + 1;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Boolean DrawPlanePick(MVWorldObjectClient, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::ESInsert::ESInsert_DrawPlanePick(ESInsert *this,MVWorldObjectClient *wo,Vector3 *position,Vector3 *rawPosition,Vector3 *normal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<UnityEngine::Vector3>__get_Value__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__DrawPlane);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
  if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) && (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
    if ((pWVar2->fields).isActive == 0) {
      return 0;
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
    VStack_4.x = (pVVar3->zeroVector).x;
    VStack_4.y = (pVVar3->zeroVector).y;
    VStack_4.z = (pVVar3->zeroVector).z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__DrawPlane);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__EventSystems__EventSystem);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__EventSystems__EventSystem->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current((MethodInfo *)0x0);
    if (this_00 != (EventSystem *)0x0) {
      bVar5 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_IsPointerOverGameObject(this_00,(MethodInfo *)0x0);
      if (bVar5 != 0) {
        return 0;
      }
      pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
      if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) && (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
        bVar5 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick(pWVar2,&VStack_4,(MethodInfo *)0x0);
        if (bVar5 == 0) {
          return 0;
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__DrawPlane);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pDVar1 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
        if ((pDVar1 != (DrawPlaneControllerUUI *)0x0) && (pWVar2 = (pDVar1->fields).worldEditorDrawPlane, pWVar2 != (WorldEditorDrawPlane *)0x0)) {
          pVVar6 = WorldEditorDrawPlane::WorldEditorDrawPlane_get_Pos(&VStack_7,pWVar2,(MethodInfo *)0x0);
          uStack_8._0_4_ = pVVar6->x;
          uStack_8._4_4_ = pVVar6->y;
          pSVar9 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal((MethodInfo *)0x0);
          if ((pSVar9 != (SpawnRoleDataMediator *)0x0) && ((pSVar10 = (pSVar9->fields).position, pSVar10 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_UnityEngine_Vector3_ *)0x0 && (pSVar11 = (pSVar10->fields)._.subscribableVariable, pSVar11 != (SubscribableVariable_1_UnityEngine_Vector3_ *)0x0)))) {
            VStack_7.x = (pSVar11->fields)._.value.x;
            VStack_7.y = (pSVar11->fields)._.value.y;
            VStack_7.z = (pSVar11->fields)._.value.z;
            if (VStack_7.y <= uStack_8._4_4_) {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
              uStack_8._0_4_ = (pVVar3->upVector).x;
              uStack_8._4_4_ = (pVVar3->upVector).y;
              fVar12 = (pVVar3->upVector).z;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
              uVar13._0_4_ = (pVVar3->upVector).x;
              uVar13._4_4_ = (pVVar3->upVector).y;
              fVar12 = -(pVVar3->upVector).z;
              uStack_8 = uVar13 ^ 0x8000000080000000;
            }
            VStack_7._0_8_ = uStack_8;
            VStack_7.z = fVar12;
            pVVar6 = ESInsert_ComputeObjectOffset(aVStack_14,this,wo,&VStack_7,(MethodInfo *)0x0);
            uVar15 = pVVar6->x;
            uVar16 = pVVar6->y;
            fVar17 = pVVar6->z;
            position->x = VStack_4.x - (float)uVar15;
            position->y = VStack_4.y - (float)uVar16;
            position->z = VStack_4.z - fVar17;
            rawPosition->x = VStack_4.x;
            rawPosition->y = VStack_4.y;
            rawPosition->z = VStack_4.z;
            normal->x = (float)(int)(uStack_8 ^ 0x8000000080000000);
            normal->y = (float)(int)((uStack_8 ^ 0x8000000080000000) >> 0x20);
            normal->z = -fVar12;
            return 1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar18 = (code *)swi(3);
  bVar5 = (*pcVar18)();
  return bVar5;
}


/* Void Enter(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Enter(ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVGroup);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    FUN_?(&InsertCursor_MethodInfo__UnityEngine__Object__Instantiate<InsertCursor>_InsertCursor_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).mainCamera = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar7 == (MVGameControllerBase *)0x0) || (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) || (pGVar9 = (pMVar8->fields).GameEventManager, pGVar9 == (GameEventManager *)0x0)) || ((pGVar10 = (pGVar9->fields).AvatarCommandsBuildMode, pGVar10 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0 || (pGVar11 = (pGVar10->fields).LaserCommands, pGVar11 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) goto code_?;
  pAVar12 = (pGVar11->fields).OnChangeState;
  if (pAVar12 != (Action_1_LaserPointerState_ *)0x0) {
    (*(pAVar12->fields)._._.invoke_impl)((pAVar12->fields)._._.method_code,1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar7 == (MVGameControllerBase *)0x0) || (pMVar8 = (pMVar7->fields).game, pMVar8 == (MVNetworkGame *)0x0)) || ((pGVar9 = (pMVar8->fields).GameEventManager, pGVar9 == (GameEventManager *)0x0 || ((pGVar10 = (pGVar9->fields).AvatarCommandsBuildMode, pGVar10 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0 || (pGVar11 = (pGVar10->fields).LaserCommands, pGVar11 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))))) goto code_?;
  pAVar13 = (pGVar11->fields).OnLaserActiveChanged;
  if (pAVar13 != (Action_1_Boolean_ *)0x0) {
    (*(pAVar13->fields)._._.invoke_impl)((pAVar13->fields)._._.method_code);
  }
  pMVar14 = (this->fields).previewMaterial;
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
  if (pMVar14 == (Material *)0x0) {
code_?:
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar15 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar15 == (PrefabPool *)0x0) goto code_?;
    bVar2 = iRam_? != 0;
    (this->fields).previewMaterial = (pPVar15->fields).insertPreviewMaterial;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).previewMaterial >> 0xc);
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
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar14->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  if ((e == (EditorStateMachine *)0x0) || (pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0), pMVar16 == (MVWorldObjectClient *)0x0)) goto code_?;
  fVar17 = MVWorldObjectClient::MVWorldObjectClient_ComputeObjectRadius(pMVar16,(MethodInfo *)0x0);
  pCVar1 = (this->fields).mainCamera;
  if (pCVar1 == (Camera *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar18 = (pCVar1->fields)._._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcVar19 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcRam_? = pcVar19;
  auVar21._0_8_ = (*pcRam_?)(pvVar18);
  auVar21._8_8_ = extraout_XMM0_Qb;
  auVar22._4_12_ = auVar21._4_12_;
  auVar22._0_4_ = (float)auVar21._0_8_ * 0.5 * 0.8 * 0.017453292;
  fVar23 = (float)FUN_?(auVar22._0_8_);
  fVar24 = 5.0;
  if (5.0 <= fVar17 / fVar23) {
    fVar24 = fVar17 / fVar23;
  }
  bVar2 = cRam_? == '\0';
  (this->fields).distanceInFreeSpace = fVar24;
  if (bVar2) {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar15 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar15 == (PrefabPool *)0x0) goto code_?;
  pIVar25 = (pPVar15->fields).insertCursor;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pIVar25 = (InsertCursor *)UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4((Object *)pIVar25,InsertCursor_MethodInfo__UnityEngine__Object__Instantiate<InsertCursor>_InsertCursor_);
  bVar2 = iRam_? != 0;
  (this->fields).insertCursor = pIVar25;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).insertCursor >> 0xc);
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
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar17 = (pVVar26->zeroVector).z;
  fVar24 = (pVVar26->zeroVector).y;
  pCVar1 = (this->fields).mainCamera;
  (this->fields).insertOffset.x = (pVVar26->zeroVector).x;
  (this->fields).insertOffset.y = fVar24;
  (this->fields).insertOffset.z = fVar17;
  if ((pCVar1 == (Camera *)0x0) || (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar1,(MethodInfo *)0x0), pTVar27 == (Transform *)0x0)) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_28 = 0;
  fStack_29 = 0.0;
  pvVar18 = (pTVar27->fields)._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar27,(MethodInfo *)0x0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcVar19 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(pvVar18);
  pCVar1 = (this->fields).mainCamera;
  if ((pCVar1 == (Camera *)0x0) || (pTVar27 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pCVar1,(MethodInfo *)0x0), pTVar27 == (Transform *)0x0)) goto code_?;
  pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward((Vector3 *)auStack_31,pTVar27,(MethodInfo *)0x0);
  pcVar19 = pcRam_?;
  fVar17 = (this->fields).distanceInFreeSpace;
  auStack_32[0]._0_4_ = pVVar30->x;
  auStack_32[0]._4_4_ = pVVar30->y;
  fVar24 = pVVar30->z;
  (this->fields).insertPosition.x = fVar17 * (float)(undefined4)auStack_32[0] + (float)uStack_28;
  (this->fields).insertPosition.y = fVar17 * (float)auStack_32[0]._4_4_ + uStack_28._4_4_;
  (this->fields).insertPosition.z = fVar17 * fVar24 + fStack_29;
  pcVar33 = pcRam_?;
  if ((pcVar19 == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar33 = pcVar19, pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcRam_? = pcVar33;
  (*pcVar19)(0);
  pSVar34 = (e->fields).selectionController;
  if ((pSVar34 == (SelectionController *)0x0) || (this_00 = (e->fields).networkSelector, this_00 == (MVNetworkSelector *)0x0)) goto code_?;
  bVar35 = MVNetworkSelector::MVNetworkSelector_RequestOwnership(this_00,(pSVar34->fields).selectedIDs,(MethodInfo *)0x0);
  if (bVar35 == 0) {
    FSMEntity::FSMEntity_PopState((FSMEntity *)e,(MethodInfo *)0x0);
    return;
  }
  pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar36 = (undefined8 *)(*(pMVar16->klass->vtable).get_WorldPivot.methodPtr)(auStack_32,pMVar16,(pMVar16->klass->vtable).get_WorldPivot.method);
  auStack_31 = (undefined1  [8])*puVar36;
  fVar17 = *(float *)(puVar36 + 1);
  pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
  puVar36 = (undefined8 *)(*(pMVar16->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_32,pMVar16,(pMVar16->klass->vtable).get_WorldPosition_1.method);
  uStack_28 = *puVar36;
  fVar24 = *(float *)(puVar36 + 1);
  pCVar1 = (this->fields).mainCamera;
  (this->fields).pivotToOrigin.x = (float)uStack_28 - (float)auStack_31._0_4_;
  (this->fields).pivotToOrigin.y = (float)((ulonglong)uStack_28 >> 0x20) - (float)auStack_31._4_4_;
  (this->fields).pivotToOrigin.z = fVar24 - fVar17;
  if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
    FUN_?();
  }
  auStack_31._0_4_ = 0.0;
  auStack_31._4_4_ = 0.0;
  uStack_37 = (ulonglong)(uint)uStack_37._4_4_ << 0x20;
  pcVar19 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(auStack_31);
  uStack_28 = 0;
  fStack_29 = 0.0;
  pcVar19 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(&uStack_28);
  if (pCVar1 == (Camera *)0x0) goto code_?;
  uStackX_8 = CONCAT44(uStack_28._4_4_,auStack_31._0_4_);
  if (cRam_? == '\0') {
    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_31._0_4_ = 0.0;
  auStack_31._4_4_ = 0.0;
  uStack_37 = 0;
  uStack_38 = 0;
  pvVar18 = (pCVar1->fields)._._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar1,(MethodInfo *)0x0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcVar19 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
    uVar20 = func_?(&UNK_?);
    FUN_?(uVar20,0);
    pcVar19 = (code *)swi(3);
    (*pcVar19)();
    return;
  }
  pcRam_? = pcVar19;
  (*pcRam_?)(pvVar18,&uStackX_8,2,auStack_31);
  pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  fVar17 = (this->fields).distanceInFreeSpace;
  auStack_32[0]._0_4_ = (this->fields).pivotToOrigin.x;
  auStack_32[0]._4_4_ = (this->fields).pivotToOrigin.y;
  fVar24 = fVar17 * uStack_38._4_4_ + (float)uStack_37;
  fVar23 = fVar17 * uStack_37._4_4_ + (float)auStack_31._0_4_ + (float)(undefined4)auStack_32[0];
  fVar39 = fVar17 * (float)uStack_38 + (float)auStack_31._4_4_ + (float)auStack_32[0]._4_4_;
  fVar17 = (this->fields).pivotToOrigin.z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IEditModeUI);
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
  if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0) goto code_?;
  cVar40 = FUN_?(0,TypeInfo__IEditModeUI);
  if (cVar40 == '\0') {
    uVar41 = 0x3d800000;
  }
  else {
    uVar41 = 0x3f800000;
  }
  if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
  uStack_37 = CONCAT44(uStack_37._4_4_,fVar24 + fVar17);
  auStack_31._4_4_ = fVar39;
  auStack_31._0_4_ = fVar23;
  puVar36 = (undefined8 *)(*(pMVar16->klass->vtable).GetClosestGridPoint.methodPtr)(auStack_32,pMVar16,uVar41,auStack_31,(pMVar16->klass->vtable).GetClosestGridPoint.method);
  uVar20 = *puVar36;
  uVar41 = *(undefined4 *)(puVar36 + 1);
  pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if (pMVar16 == (MVWorldObjectClient *)0x0) goto code_?;
  uStack_37 = CONCAT44(uStack_37._4_4_,uVar41);
  auStack_31 = (undefined1  [8])uVar20;
  (*(pMVar16->klass->vtable).set_WorldPosition.methodPtr)(pMVar16,auStack_31,(pMVar16->klass->vtable).set_WorldPosition.method);
  pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  pMVar42 = UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______;
  if ((pMVar16 == (MVWorldObjectClient *)0x0) || (pGVar43 = (pMVar16->fields).gameObject, pGVar43 == (GameObject *)0x0)) goto code_?;
  if ((UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
  }
  pMVar44 = (MeshFilter__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(pGVar43,0,((pMVar42->field7_0x38).rgctx_data)->method);
  bVar2 = iRam_? != 0;
  (this->fields).previewMeshes = pMVar44;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).previewMeshes >> 0xc);
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
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)(e->fields)._.data;
  if (this_01 == (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0) goto code_?;
  iVar45 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::StyleComplexSelector+PseudoStateData]::Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry(this_01,(Object *)StringLiteral_IsNewPrototype,MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_->klass->rgctx_data[0x21].method);
  (this->fields).isNewPrototype = (byte)((uint)iVar45 >> 0x1f) ^ 1;
  pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  pMVar46 = (MVGroup *)0x0;
  if (pMVar16 == (MVWorldObjectClient *)0x0) {
code_?:
    this_02 = (HashSet_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
    FUN_?(this_02);
    pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if ((pMVar16 == (MVWorldObjectClient *)0x0) || (this_02 == (HashSet_1_System_Int32_ *)0x0)) goto code_?;
    System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::HashSet_1_System_Int32__AddIfNotPresent(this_02,(pMVar16->fields)._.id,MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_->klass->rgctx_data[0x15].method);
  }
  else {
    bVar47 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar16->klass->_1).naturalAligment < bVar47) || ((MVGroup__Class *)(pMVar16->klass->_1).typeHierarchy[(ulonglong)bVar47 - 1] != TypeInfo__MVGroup)) goto code_?;
    pMVar48 = (MVGroup *)EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    if (pMVar48 == (MVGroup *)0x0) goto code_?;
    bVar47 = (TypeInfo__MVGroup->_1).naturalAligment;
    if (((pMVar48->klass->_1).naturalAligment < bVar47) || (ppIVar49 = (pMVar48->klass->_1).typeHierarchy, (MVGroup__Class *)ppIVar49[(ulonglong)bVar47 - 1] != TypeInfo__MVGroup)) goto code_?;
    this_03 = pMVar46;
    if ((MVGroup__Class *)ppIVar49[(ulonglong)(TypeInfo__MVGroup->_1).naturalAligment - 1] == TypeInfo__MVGroup) {
      this_03 = pMVar48;
    }
    this_02 = MVGroup::MVGroup_GetHierarchyWorldObjectIDs(this_03,(MethodInfo *)0x0);
  }
  bVar2 = iRam_? != 0;
  (this->fields).woIgnoreList = this_02;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).woIgnoreList >> 0xc);
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
  pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar16 == (MVWorldObjectClient *)0x0) || (pGVar43 = (pMVar16->fields).gameObject, pGVar43 == (GameObject *)0x0)) goto code_?;
  uVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_layer(pGVar43,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_layer_parameter_constant_should_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar50 = 0x800;
  do {
    uVar51 = (int)pMVar46 + 1;
    pMVar46 = (MVGroup *)(ulonglong)uVar51;
    uVar50 = (int)uVar50 >> 1;
  } while ((uVar50 & 1) == 0);
  if (uVar3 == uVar51) {
    pMVar52 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if (pMVar52 == (MainCameraManager *)0x0) goto code_?;
    if (cRam_? == '\0') {
      FUN_?(&StringLiteral_Logic);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pCVar1 = (pMVar52->fields).mainCamera;
    if (pCVar1 == (Camera *)0x0) goto code_?;
    uVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_cullingMask(pCVar1,(MethodInfo *)0x0);
    uVar50 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Logic,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_set_cullingMask(pCVar1,uVar3 | 1 << (uVar50 & 0x1f),(MethodInfo *)0x0);
    (pMVar52->fields).isLogicRendered = 1;
  }
  pMVar16 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  if ((pMVar16 != (MVWorldObjectClient *)0x0) && (pGVar43 = (pMVar16->fields).gameObject, pGVar43 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive(pGVar43,0,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVInputWrapper);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar35 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1(KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
    if (bVar35 != 0) {
      (this->fields).pointerWasUp = 1;
    }
    return;
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Execute(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Execute(ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  apEStackX_10[0] = e;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__EditorEvent);
    LOCK();
    UNLOCK();
    FUN_?(&UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVInputWrapper);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((e == (EditorStateMachine *)0x0) || (pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0), pMVar2 = UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______, pMVar1 == (MVWorldObjectClient *)0x0)) || (this_00 = (pMVar1->fields).gameObject, this_00 == (GameObject *)0x0)) goto code_?;
  if ((UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(UnityEngine__MeshFilter__MethodInfo__UnityEngine__GameObject__GetComponentsInChildren<UnityEngine::MeshFilter>______);
  }
  pMVar3 = (MeshFilter__Array *)UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponentsInChildren_4(this_00,0,((pMVar2->field7_0x38).rgctx_data)->method);
  bVar4 = iRam_? != 0;
  (this->fields).previewMeshes = pMVar3;
  if (bVar4) {
    uVar5 = (uint)((ulonglong)&(this->fields).previewMeshes >> 0xc);
    uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
    do {
      uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
      puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
      LOCK();
      bVar4 = uVar7 == *puVar8;
      if (bVar4) {
        *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
      }
      UNLOCK();
    } while (!bVar4);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_9 = *(MeshFilter__Array **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
  fStack_10 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMStack_11 = *(MeshFilter__Array **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
  fStack_12 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  auStack_13 = *(undefined1 (*) [8])&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
  uStack_14 = CONCAT44(uStack_14._4_4_,(TypeInfo__UnityEngine__Vector3->static_fields->upVector).z);
  pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
  uVar5 = 0;
  bVar15 = ESInsert_DrawPlanePick(this,pMVar1,(Vector3 *)&uStack_9,(Vector3 *)&pMStack_11,(Vector3 *)auStack_13,(MethodInfo *)0x0);
  if (bVar15 == 0) {
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    bVar15 = ESInsert_WorldPick(this,pMVar1,(Vector3 *)&uStack_9,(Vector3 *)&pMStack_11,(Vector3 *)auStack_13,(MethodInfo *)0x0);
    pIVar16 = (this->fields).insertCursor;
    if (bVar15 != 0) {
      *(MeshFilter__Array **)&(this->fields).insertPosition = uStack_9;
      (this->fields).insertPosition.z = fStack_10;
      if ((pIVar16 == (InsertCursor *)0x0) || (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar16,(MethodInfo *)0x0), fVar18 = fStack_12, pTVar17 == (Transform *)0x0)) {
code_?:
        FUN_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uStack_20 = pMStack_11;
      fStack_21 = fStack_12;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar22 = (pTVar17->fields)._._.m_CachedPtr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pcVar19 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
        uVar23 = func_?(&UNK_?);
        FUN_?(uVar23,0);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pcRam_? = pcVar19;
      (*pcRam_?)(pvVar22);
      pIVar16 = (this->fields).insertCursor;
      if (pIVar16 == (InsertCursor *)0x0) goto code_?;
      pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar16,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_9 = *(MeshFilter__Array **)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
      fStack_10 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
      fStack_24 = (float)uStack_14;
      uStack_25 = (MeshFilter__Array *)auStack_13;
      auStack_13 = (undefined1  [8])0x0;
      uStack_14 = 0;
      pcVar19 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
        uVar23 = func_?(&UNK_?);
        FUN_?(uVar23,0);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pcRam_? = pcVar19;
      (*pcRam_?)(&uStack_25);
      if (pTVar17 == (Transform *)0x0) {
code_?:
        FUN_?();
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      uStack_26 = (MeshFilter__Array *)auStack_13;
      uStack_27 = uStack_14;
      if (cRam_? == '\0') {
        FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar22 = (pTVar17->fields)._._.m_CachedPtr;
      if (pvVar22 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pcVar19 = pcRam_?;
      if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
        uVar23 = func_?(&UNK_?);
        FUN_?(uVar23,0);
        pcVar19 = (code *)swi(3);
        (*pcVar19)();
        return;
      }
      pcRam_? = pcVar19;
      (*pcRam_?)(pvVar22,&uStack_26);
      pIVar16 = (this->fields).insertCursor;
      if (pIVar16 == (InsertCursor *)0x0) goto code_?;
      goto code_?;
    }
    if (pIVar16 == (InsertCursor *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar16,0,(MethodInfo *)0x0);
    uStack_9._0_4_ = (this->fields).insertOffset.x;
    uStack_9._4_4_ = (this->fields).insertOffset.y;
    fVar18 = (this->fields).insertOffset.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar28 = TypeInfo__UnityEngine__Vector3->static_fields;
    auStack_13._0_4_ = (pVVar28->zeroVector).x;
    auStack_13._4_4_ = (pVVar28->zeroVector).y;
    fVar29 = (pVVar28->zeroVector).z;
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
      uVar23 = func_?(&UNK_?);
      FUN_?(uVar23,0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcRam_? = pcVar19;
    fVar30 = (float)(*pcRam_?)();
    fVar30 = fVar30 * 10.0;
    if (fVar30 < 0.0) {
      fVar30 = 0.0;
    }
    else if (1.0 < fVar30) {
      fVar30 = 1.0;
    }
    pCVar31 = (this->fields).mainCamera;
    (this->fields).insertOffset.x = ((float)auStack_13._0_4_ - (float)uStack_9) * fVar30 + (float)uStack_9;
    (this->fields).insertOffset.y = ((float)auStack_13._4_4_ - uStack_9._4_4_) * fVar30 + uStack_9._4_4_;
    (this->fields).insertOffset.z = (fVar29 - fVar18) * fVar30 + fVar18;
    if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
      FUN_?();
    }
    uStack_9 = (MeshFilter__Array *)0x0;
    fStack_10 = 0.0;
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
      uVar23 = func_?(&UNK_?);
      FUN_?(uVar23,0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcRam_? = pcVar19;
    (*pcRam_?)(&uStack_9);
    auStack_13 = (undefined1  [8])0x0;
    uStack_14 = uStack_14 & 0xffffffff00000000;
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
      uVar23 = func_?(&UNK_?);
      FUN_?(uVar23,0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcRam_? = pcVar19;
    (*pcRam_?)(auStack_13);
    if (pCVar31 == (Camera *)0x0) goto code_?;
    uStackX_20 = CONCAT44(auStack_13._4_4_,(float)uStack_9);
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Camera>_UnityEngine__Camera_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_26 = (MeshFilter__Array *)0x0;
    uStack_27 = 0;
    uStack_32 = 0;
    pvVar22 = (pCVar31->fields)._._._.m_CachedPtr;
    if (pvVar22 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pCVar31,(MethodInfo *)0x0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
      uVar23 = func_?(&UNK_?);
      FUN_?(uVar23,0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcRam_? = pcVar19;
    (*pcRam_?)(pvVar22,&uStackX_20,2,&uStack_26);
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    fVar18 = (this->fields).distanceInFreeSpace;
    uStack_25 = *(MeshFilter__Array **)&(this->fields).pivotToOrigin;
    fVar30 = SUB84(uStack_25,0);
    fVar33 = uStack_27._4_4_ * fVar18 + (float)uStack_26;
    fVar34 = (float)uStack_32 * fVar18 + uStack_26._4_4_;
    uVar6 = (ulonglong)uStack_25 >> 0x20;
    fVar35 = uStack_32._4_4_ * fVar18 + (float)uStack_27;
    fVar29 = (this->fields).pivotToOrigin.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__IEditModeUI);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar36 = (float)uStack_26;
    fVar37 = uStack_26._4_4_;
    fVar18 = (float)uStack_27;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
      fVar36 = (float)uStack_26;
      fVar37 = uStack_26._4_4_;
      fVar18 = (float)uStack_27;
    }
    if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField == (IEditModeUI *)0x0) || (FUN_?(0,TypeInfo__IEditModeUI), pMVar1 == (MVWorldObjectClient *)0x0)) goto code_?;
    auStack_13._4_4_ = fVar34 + (float)uVar6;
    auStack_13._0_4_ = fVar33 + fVar30;
    pIVar38 = (pMVar1->klass->vtable).GetClosestGridPoint.methodPtr;
    uStack_14._0_4_ = fVar35 + fVar29;
    puVar39 = (undefined8 *)(*pIVar38)(&uStack_25,pMVar1,pIVar38,auStack_13,(pMVar1->klass->vtable).GetClosestGridPoint.method);
    uVar40 = (this->fields).insertPosition.x;
    uVar41 = (this->fields).insertPosition.y;
    fStack_10 = (this->fields).insertPosition.z - fVar18;
    uStack_9 = (MeshFilter__Array *)CONCAT44((float)uVar41 - fVar37,(float)uVar40 - fVar36);
    fVar29 = *(float *)(puVar39 + 1) - fVar18;
    fVar33 = (float)((ulonglong)*puVar39 >> 0x20) - fVar37;
    fVar34 = (float)*puVar39 - fVar36;
    auStack_13 = (undefined1  [8])CONCAT44(fVar33,fVar34);
    uStack_14 = CONCAT44(uStack_14._4_4_,fVar29);
    uStack_20 = (MeshFilter__Array *)auStack_13;
    fStack_21 = fVar29;
    fVar30 = (float)FUN_?(auStack_13);
    if (1e-05 < fVar30) {
      fVar29 = fVar29 / fVar30;
      auStack_13 = (undefined1  [8])CONCAT44(fVar33 / fVar30,fVar34 / fVar30);
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
        fVar36 = (float)uStack_26;
        fVar37 = uStack_26._4_4_;
        fVar18 = (float)uStack_27;
      }
      auStack_13 = *(undefined1 (*) [8])&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
      fVar29 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    }
    fVar30 = (float)FUN_?(&uStack_9);
    fVar33 = (float)FUN_?(&uStack_20);
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
      uVar23 = func_?(&UNK_?);
      FUN_?(uVar23,0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcRam_? = pcVar19;
    fVar34 = (float)(*pcRam_?)();
    fVar34 = fVar34 * 5.0;
    if (fVar34 < 0.0) {
      fVar34 = 0.0;
    }
    else if (1.0 < fVar34) {
      fVar34 = 1.0;
    }
    fVar30 = (fVar33 - fVar30) * fVar34 + fVar30;
    fVar36 = (float)auStack_13._0_4_ * fVar30 + fVar36;
    fVar37 = (float)auStack_13._4_4_ * fVar30 + fVar37;
    fVar18 = fVar29 * fVar30 + fVar18;
    uStack_25 = *(MeshFilter__Array **)&(this->fields).pivotToOrigin;
    (this->fields).insertPosition.x = fVar36;
    (this->fields).insertPosition.y = fVar37;
    (this->fields).insertPosition.z = fVar18;
    fVar18 = fVar18 - (this->fields).pivotToOrigin.z;
    pMStack_11 = (MeshFilter__Array *)CONCAT44(fVar37 - (float)((ulonglong)uStack_25 >> 0x20),fVar36 - SUB84(uStack_25,0));
  }
  else {
    pIVar16 = (this->fields).insertCursor;
    *(MeshFilter__Array **)&(this->fields).insertPosition = uStack_9;
    (this->fields).insertPosition.z = fStack_10;
    if ((pIVar16 == (InsertCursor *)0x0) || (pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar16,(MethodInfo *)0x0), fVar18 = fStack_12, pTVar17 == (Transform *)0x0)) {
code_?:
      FUN_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    uStack_25 = pMStack_11;
    fStack_24 = fStack_12;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar22 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar22 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
      uVar23 = func_?(&UNK_?);
      FUN_?(uVar23,0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcRam_? = pcVar19;
    (*pcRam_?)(pvVar22);
    pIVar16 = (this->fields).insertCursor;
    if (pIVar16 == (InsertCursor *)0x0) goto code_?;
    pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)pIVar16,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uStack_20 = *(MeshFilter__Array **)&TypeInfo__UnityEngine__Vector3->static_fields->upVector;
    fStack_21 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
    fStack_10 = (float)uStack_14;
    uStack_9 = (MeshFilter__Array *)auStack_13;
    auStack_13 = (undefined1  [8])0x0;
    uStack_14 = 0;
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
      uVar23 = func_?(&UNK_?);
      FUN_?(uVar23,0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcRam_? = pcVar19;
    (*pcRam_?)(&uStack_9);
    if (pTVar17 == (Transform *)0x0) {
code_?:
      FUN_?();
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    uStack_26 = (MeshFilter__Array *)auStack_13;
    uStack_27 = uStack_14;
    if (cRam_? == '\0') {
      FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar22 = (pTVar17->fields)._._.m_CachedPtr;
    if (pvVar22 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar17,(MethodInfo *)0x0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcVar19 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
      uVar23 = func_?(&UNK_?);
      FUN_?(uVar23,0);
      pcVar19 = (code *)swi(3);
      (*pcVar19)();
      return;
    }
    pcRam_? = pcVar19;
    (*pcRam_?)(pvVar22,&uStack_26);
    pIVar16 = (this->fields).insertCursor;
    if (pIVar16 == (InsertCursor *)0x0) goto code_?;
code_?:
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar16,1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar42 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar42 != (MVGameControllerBase *)0x0) && (pMVar43 = (pMVar42->fields).game, pMVar43 != (MVNetworkGame *)0x0)) && (pGVar44 = (pMVar43->fields).GameEventManager, pGVar44 != (GameEventManager *)0x0)) && ((pGVar45 = (pGVar44->fields).AvatarCommandsBuildMode, pGVar45 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 && (pGVar46 = (pGVar45->fields).LaserCommands, pGVar46 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
    pAVar47 = (pGVar46->fields).OnUpdatePosition;
    if (pAVar47 != (Action_1_UnityEngine_Vector3_ *)0x0) {
      uStack_25 = pMStack_11;
      fStack_24 = fVar18;
      (*(pAVar47->fields)._._.invoke_impl)((pAVar47->fields)._._.method_code,&uStack_25,(pAVar47->fields)._._.method);
    }
    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
    uVar23._0_4_ = (this->fields).insertPosition.x;
    uVar23._4_4_ = (this->fields).insertPosition.y;
    fVar18 = (this->fields).insertPosition.z;
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__IEditModeUI);
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
    if ((TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField != (IEditModeUI *)0x0) && (FUN_?(0,TypeInfo__IEditModeUI), pMVar1 != (MVWorldObjectClient *)0x0)) {
      pIVar38 = (pMVar1->klass->vtable).GetClosestGridPoint.methodPtr;
      uStack_25 = (MeshFilter__Array *)uVar23;
      fStack_24 = fVar18;
      plVar48 = (longlong *)(*pIVar38)(&uStack_20,pMVar1,pIVar38,&uStack_25,(pMVar1->klass->vtable).GetClosestGridPoint.method);
      uStack_25 = (MeshFilter__Array *)*plVar48;
      fVar18 = *(float *)(plVar48 + 1);
      pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      pMVar49 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
      if (pMVar49 != (MVWorldObjectClient *)0x0) {
        plVar48 = (longlong *)(*(pMVar49->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_13,pMVar49,(pMVar49->klass->vtable).get_WorldPosition_1.method);
        uStack_20 = (MeshFilter__Array *)*plVar48;
        fVar29 = *(float *)(plVar48 + 1);
        pcVar19 = pcRam_?;
        if ((pcRam_? == (code *)0x0) && (pcVar19 = (code *)FUN_?(&UNK_?), pcVar19 == (code *)0x0)) {
          uVar23 = func_?(&UNK_?);
          FUN_?(uVar23,0);
          pcVar19 = (code *)swi(3);
          (*pcVar19)();
          return;
        }
        pcRam_? = pcVar19;
        fVar30 = (float)(*pcRam_?)();
        fVar30 = fVar30 * 20.0;
        if (fVar30 < 0.0) {
          fVar30 = 0.0;
        }
        else if (1.0 < fVar30) {
          fVar30 = 1.0;
        }
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          uStack_25 = (MeshFilter__Array *)CONCAT44((uStack_25._4_4_ - uStack_20._4_4_) * fVar30 + uStack_20._4_4_,((float)uStack_25 - (float)uStack_20) * fVar30 + (float)uStack_20);
          fStack_24 = (fVar18 - fVar29) * fVar30 + fVar29;
          (*(pMVar1->klass->vtable).set_SyncPos.methodPtr)(pMVar1);
          pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
          if (pMVar1 != (MVWorldObjectClient *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Graphics);
              LOCK();
              UNLOCK();
              FUN_?(&StringLiteral_Default);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMStack_11 = (this->fields).previewMeshes;
            uStackX_20 = uStackX_20 & 0xffffffff00000000;
            if (pMStack_11 != (MeshFilter__Array *)0x0) {
              uStack_9 = (MeshFilter__Array *)pMStack_11->vector;
              while (pEVar50 = (EditorStateMachine *)0x0, (int)uVar5 < (int)pMStack_11->max_length) {
                if ((uint)pMStack_11->max_length <= uVar5) {
                  FUN_?();
                  pcVar19 = (code *)swi(3);
                  (*pcVar19)();
                  return;
                }
                this_01 = uStack_9->klass;
                if (this_01 == (MeshFilter__Array__Class *)0x0) goto code_?;
                while( true ) {
                  pMVar51 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this_01,(MethodInfo *)0x0);
                  if (pMVar51 == (Mesh *)0x0) goto code_?;
                  iVar52 = UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_get_subMeshCount(pMVar51,(MethodInfo *)0x0);
                  iVar53 = (int)pEVar50;
                  if (iVar52 <= iVar53) break;
                  pMVar51 = UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_get_sharedMesh((MeshFilter *)this_01,(MethodInfo *)0x0);
                  pTVar17 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this_01,(MethodInfo *)0x0);
                  if (pTVar17 == (Transform *)0x0) goto code_?;
                  pMVar54 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix(aMStack_55,pTVar17,(MethodInfo *)0x0);
                  material = (this->fields).previewMaterial;
                  uVar56._0_4_ = pMVar54->m00;
                  uVar56._4_4_ = pMVar54->m10;
                  uVar57._0_4_ = pMVar54->m20;
                  uVar57._4_4_ = pMVar54->m30;
                  uVar58._0_4_ = pMVar54->m01;
                  uVar58._4_4_ = pMVar54->m11;
                  uVar59._0_4_ = pMVar54->m21;
                  uVar59._4_4_ = pMVar54->m31;
                  uVar60._0_4_ = pMVar54->m02;
                  uVar60._4_4_ = pMVar54->m12;
                  uVar61._0_4_ = pMVar54->m22;
                  uVar61._4_4_ = pMVar54->m32;
                  uVar62._0_4_ = pMVar54->m03;
                  uVar62._4_4_ = pMVar54->m13;
                  uVar63._0_4_ = pMVar54->m23;
                  uVar63._4_4_ = pMVar54->m33;
                  iVar52 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
                  pCVar31 = (this->fields).mainCamera;
                  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  aMStack_55[0]._0_8_ = uVar56;
                  aMStack_55[0]._8_8_ = uVar57;
                  aMStack_55[0]._16_8_ = uVar58;
                  aMStack_55[0]._24_8_ = uVar59;
                  aMStack_55[0]._32_8_ = uVar60;
                  aMStack_55[0]._40_8_ = uVar61;
                  aMStack_55[0]._48_8_ = uVar62;
                  aMStack_55[0]._56_8_ = uVar63;
                  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMesh_3(pMVar51,aMStack_55,material,iVar52,pCVar31,iVar53,(MethodInfo *)0x0);
                  pEVar50 = (EditorStateMachine *)(ulonglong)(iVar53 + 1);
                }
                uVar5 = (int)uStackX_20 + 1;
                uStack_9 = (MeshFilter__Array *)&uStack_9->monitor;
                uStackX_20 = CONCAT44(uStackX_20._4_4_,uVar5);
              }
              if ((this->fields).pointerWasUp == 0) {
                if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if (cRam_? == '\0') {
                  FUN_?(&TypeInfo__MVInputWrapper);
                  LOCK();
                  UNLOCK();
                  cRam_? = '\x01';
                }
                if (*(int *)&(TypeInfo__MVInputWrapper->_1).field_0x1c == 0) {
                  FUN_?();
                }
                bVar15 = MVInputWrapper::MVInputWrapper_GetBooleanControl_1(KogamaControls__Enum_PointerSelect,KeyState__Enum_Up,(MethodInfo *)0x0);
                if (bVar15 != 0) {
                  if ((this->fields).isNewPrototype == 0) {
                    uStackX_20 = CONCAT44(uStackX_20._4_4_,0x2f);
                    value = (EditorStateMachine *)FUN_?(TypeInfo__EditorEvent,&uStackX_20);
                    this_03 = apEStackX_10[0];
                  }
                  else {
                    pMVar64 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
                    if (((pMVar64 == (MainCameraManager *)0x0) || (pMVar65 = (pMVar64->fields).cameraController, pMVar65 == (MVCameraController *)0x0)) || (this_02 = (pMVar65->fields).cameraStack, this_02 == (MVCameraController_CameraStack *)0x0)) goto code_?;
                    pMVar66 = MVCameraController+CameraStack::MVCameraController_CameraStack_get_CurCamera(this_02,(MethodInfo *)0x0);
                    this_03 = apEStackX_10[0];
                    pMVar1 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(apEStackX_10[0],(MethodInfo *)0x0);
                    uStack_25 = (MeshFilter__Array *)0x0;
                    if (pMVar66 == (MVCameraBase *)0x0) goto code_?;
                    fStack_24 = 0.0;
                    fStack_21 = 0.0;
                    pIVar38 = (pMVar66->klass->vtable).FocusOnObject.methodPtr;
                    uStack_25 = (MeshFilter__Array *)0x0;
                    uStack_20 = (MeshFilter__Array *)0x0;
                    (*pIVar38)(pMVar66,pMVar1,pIVar38,&uStack_20,&uStack_25,(pMVar66->klass->vtable).FocusOnObject.method);
                    apEStackX_10[0] = (EditorStateMachine *)((ulonglong)apEStackX_10[0] & 0xffffffff00000000);
                    iVar53._0_2_ = (TypeInfo__EditorEvent->_0).byval_arg.attrs;
                    iVar53._2_1_ = (TypeInfo__EditorEvent->_0).byval_arg.type;
                    iVar53._3_1_ = (TypeInfo__EditorEvent->_0).byval_arg.field_0xb;
                    value = apEStackX_10[0];
                    if ((iVar53 < 0) && (((TypeInfo__EditorEvent->_0).generic_class == (Il2CppGenericClass *)0x0 || (value = pEVar50, ((TypeInfo__EditorEvent->_1).field_0x6d & 8) == 0)))) {
                      value = (EditorStateMachine *)FUN_?(TypeInfo__EditorEvent);
                      FUN_?(&value->fields,apEStackX_10);
                      if (iRam_? != 0) {
                        uVar5 = (uint)((ulonglong)&value->fields >> 0xc);
                        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
                        do {
                          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
                          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
                          LOCK();
                          bVar4 = uVar7 == *puVar8;
                          if (bVar4) {
                            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                          }
                          UNLOCK();
                        } while (!bVar4);
                      }
                    }
                  }
                  FSMEntity::FSMEntity_set_Event((FSMEntity *)this_03,(Object *)value,(MethodInfo *)0x0);
                }
              }
              (this->fields).pointerWasUp = 0;
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void Exit(EditorStateMachine) */

void Assembly-CSharp.dll::ESInsert::ESInsert_Exit(ESInsert *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  pIVar3 = (this->fields).insertCursor;
  if (pIVar3 != (InsertCursor *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled((Behaviour *)pIVar3,0,(MethodInfo *)0x0);
    pIVar3 = (this->fields).insertCursor;
    if (pIVar3 != (InsertCursor *)0x0) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject((Component *)pIVar3,(MethodInfo *)0x0);
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy((Object_1 *)pGVar4,0.0,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((((pMVar5 != (MVGameControllerBase *)0x0) && (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) && (pGVar7 = (pMVar6->fields).GameEventManager, pGVar7 != (GameEventManager *)0x0)) && ((pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode, pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 && (pGVar9 = (pGVar8->fields).LaserCommands, pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))) {
        pAVar10 = (pGVar9->fields).OnChangeState;
        if (pAVar10 != (Action_1_LaserPointerState_ *)0x0) {
          (*(pAVar10->fields)._._.invoke_impl)((pAVar10->fields)._._.method_code,0,(pAVar10->fields)._._.method);
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__MVGameControllerBase);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pMVar5 = TypeInfo__MVGameControllerBase->static_fields->instance;
        if (((pMVar5 != (MVGameControllerBase *)0x0) && (pMVar6 = (pMVar5->fields).game, pMVar6 != (MVNetworkGame *)0x0)) && ((pGVar7 = (pMVar6->fields).GameEventManager, pGVar7 != (GameEventManager *)0x0 && ((pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode, pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0 && (pGVar9 = (pGVar8->fields).LaserCommands, pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)))))) {
          pAVar11 = (pGVar9->fields).OnLaserActiveChanged;
          if (pAVar11 != (Action_1_Boolean_ *)0x0) {
            (*(pAVar11->fields)._._.invoke_impl)((pAVar11->fields)._._.method_code,0,(pAVar11->fields)._._.method);
          }
          if (e != (EditorStateMachine *)0x0) {
            pMVar12 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
            uVar2._0_4_ = (this->fields).insertPosition.x;
            uVar2._4_4_ = (this->fields).insertPosition.y;
            fVar13 = (this->fields).insertPosition.z;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__IEditModeUI);
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
            if (TypeInfo__MVGameControllerBase->static_fields->_EditModeUI_k__BackingField != (IEditModeUI *)0x0) {
              cVar14 = FUN_?(0,TypeInfo__IEditModeUI);
              if (cVar14 == '\0') {
                uVar15 = 0x3d800000;
              }
              else {
                uVar15 = 0x3f800000;
              }
              if (pMVar12 != (MVWorldObjectClient *)0x0) {
                uStack_16 = uVar2;
                fStack_17 = fVar13;
                puVar18 = (undefined8 *)(*(pMVar12->klass->vtable).GetClosestGridPoint.methodPtr)(&uStack_19,pMVar12,uVar15,&uStack_16,(pMVar12->klass->vtable).GetClosestGridPoint.method);
                uVar2 = *puVar18;
                fVar13 = *(float *)(puVar18 + 1);
                pMVar12 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
                if (((pMVar12 != (MVWorldObjectClient *)0x0) && (pGVar4 = (pMVar12->fields).gameObject, pGVar4 != (GameObject *)0x0)) && (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(pGVar4,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
                  uStack_16 = uVar2;
                  fStack_17 = fVar13;
                  if (cRam_? == '\0') {
                    FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  pvVar20 = (obj->fields)._._.m_CachedPtr;
                  if (pvVar20 == (void *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pcVar1 = pcRam_?;
                  if ((pcRam_? == (code *)0x0) && (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
                    uVar2 = func_?(&UNK_?);
                    FUN_?(uVar2,0);
                    pcVar1 = (code *)swi(3);
                    (*pcVar1)();
                    return;
                  }
                  pcRam_? = pcVar1;
                  (*pcRam_?)(pvVar20);
                  pMVar12 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
                  pMVar21 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
                  if (pMVar21 != (MVWorldObjectClient *)0x0) {
                    puVar18 = (undefined8 *)(*(pMVar21->klass->vtable).get_WorldPosition_1.methodPtr)(auStack_22,pMVar21,(pMVar21->klass->vtable).get_WorldPosition_1.method);
                    if (pMVar12 != (MVWorldObjectClient *)0x0) {
                      uStack_19 = *puVar18;
                      puStack_23 = (undefined *)CONCAT44(puStack_23._4_4_,*(undefined4 *)(puVar18 + 1));
                      (*(pMVar12->klass->vtable).set_SyncPos.methodPtr)(pMVar12,&uStack_19);
                      pSVar24 = (e->fields).selectionController;
                      if ((pSVar24 != (SelectionController *)0x0) && (this_00 = (e->fields).networkSelector, this_00 != (MVNetworkSelector *)0x0)) {
                        MVNetworkSelector::MVNetworkSelector_RequestReleaseOwnership(this_00,(pSVar24->fields).selectedIDs,(MethodInfo *)0x0);
                        pMVar12 = EditorStateMachine::EditorStateMachine_get_SingleSelectedWO(e,(MethodInfo *)0x0);
                        if ((pMVar12 != (MVWorldObjectClient *)0x0) && (pGVar4 = (pMVar12->fields).gameObject, pGVar4 != (GameObject *)0x0)) {
                          if (cRam_? == '\0') {
                            FUN_?(&void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_,1,0);
                            LOCK();
                            UNLOCK();
                            cRam_? = '\x01';
                          }
                          if (pGVar4 == (GameObject *)0x0) {
                            FUN_?();
                            pcVar1 = (code *)swi(3);
                            (*pcVar1)();
                            return;
                          }
                          pvVar20 = (pGVar4->fields)._.m_CachedPtr;
                          if (pvVar20 == (void *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar4,(MethodInfo *)0x0);
                            pcVar1 = (code *)swi(3);
                            (*pcVar1)();
                            return;
                          }
                          pcVar1 = pcRam_?;
                          if (pcRam_? == (code *)0x0) {
                            pcVar1 = (code *)FUN_?(&UNK_?);
                            if (pcVar1 == (code *)0x0) {
                              uVar2 = func_?(&UNK_?);
                              FUN_?(uVar2,0);
                              pcVar1 = (code *)swi(3);
                              (*pcVar1)();
                              return;
                            }
                          }
                          pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*pcRam_?)(pvVar20,1);
                          return;
                        }
                      }
                    }
                    goto DAT_?;
                  }
                }
                FUN_?();
                pcVar1 = (code *)swi(3);
                (*pcVar1)();
                return;
              }
            }
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean WorldPick(MVWorldObjectClient, Vector3 ByRef, Vector3 ByRef, Vector3 ByRef) */

bool Assembly-CSharp.dll::ESInsert::ESInsert_WorldPick(ESInsert *this,MVWorldObjectClient *wo,Vector3 *position,Vector3 *rawPosition,Vector3 *normal,MethodInfo *method)

{
  VStack_1.interactionFlags = 0;
  VStack_1.point.x = 0.0;
  VStack_1.point.y = 0.0;
  VStack_1.point.z = 0.0;
  VStack_1.normal.x = 0.0;
  VStack_1.normal.y = 0.0;
  VStack_1.normal.z = 0.0;
  VStack_1.cubePos.x = 0;
  VStack_1.cubePos.y = 0;
  VStack_1.cubePos.z = 0;
  VStack_1._30_2_ = 0;
  VStack_1.face = 0;
  VStack_1.isCubeHit = 0;
  VStack_1._37_3_ = 0;
  VStack_1.woId = 0;
  VStack_1._44_4_ = 0;
  VStack_1.cube = (Cube *)0x0;
  VStack_1.distance = 0.0;
  VStack_1._60_4_ = 0;
  VStack_1.collider = (Collider *)0x0;
  VStack_1.transform = (Transform *)0x0;
  bVar2 = EditModeObjectPicker::EditModeObjectPicker_Pick(&VStack_1,(this->fields).woIgnoreList,-0x40005,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    bVar2 = 0;
  }
  else {
    VStack_3.z = -VStack_1.normal.z;
    VStack_3._0_8_ = CONCAT44(VStack_1.normal.y,VStack_1.normal.x) ^ 0x8000000080000000;
    pVVar4 = ESInsert_ComputeObjectOffset(&VStack_5,this,wo,&VStack_3,(MethodInfo *)0x0);
    uStack_6._0_4_ = (this->fields).insertOffset.x;
    uStack_6._4_4_ = (this->fields).insertOffset.y;
    fVar7 = (this->fields).insertOffset.z;
    VStack_3.x = pVVar4->x;
    VStack_3.y = pVVar4->y;
    fVar8 = pVVar4->z;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) && (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      bVar2 = (*pcVar9)();
      return bVar2;
    }
    pcRam_? = pcVar9;
    fVar11 = (float)(*pcRam_?)();
    fVar11 = fVar11 * 10.0;
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    else if (1.0 < fVar11) {
      fVar11 = 1.0;
    }
    uStack_6._0_4_ = (VStack_3.x - (float)uStack_6) * fVar11 + (float)uStack_6;
    uStack_6._4_4_ = (VStack_3.y - uStack_6._4_4_) * fVar11 + uStack_6._4_4_;
    fVar7 = (fVar8 - fVar7) * fVar11 + fVar7;
    (this->fields).insertOffset.x = (float)uStack_6;
    (this->fields).insertOffset.y = uStack_6._4_4_;
    (this->fields).insertOffset.z = fVar7;
    position->x = VStack_1.point.x - (float)uStack_6;
    position->y = VStack_1.point.y - uStack_6._4_4_;
    position->z = VStack_1.point.z - fVar7;
    rawPosition->x = VStack_1.point.x;
    rawPosition->y = VStack_1.point.y;
    rawPosition->z = VStack_1.point.z;
    normal->x = VStack_1.normal.x;
    normal->y = VStack_1.normal.y;
    normal->z = VStack_1.normal.z;
    bVar2 = 1;
  }
  return bVar2;
}


/* ESInsert() */

void Assembly-CSharp.dll::ESInsert::ESInsert__ctor(ESInsert *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = cRam_?;
  (this->fields).distanceInFreeSpace = 5.0;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cVar1 = '\x01';
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).insertPosition.x = (pVVar2->zeroVector).x;
  (this->fields).insertPosition.y = fVar3;
  (this->fields).insertPosition.z = fVar4;
  if (cVar1 == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).insertOffset.x = (pVVar2->zeroVector).x;
  (this->fields).insertOffset.y = fVar3;
  (this->fields).insertOffset.z = fVar4;
  pHVar5 = (HashSet_1_System_Int32_ *)FUN_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  FUN_?(pHVar5,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  bVar6 = iRam_? != 0;
  (this->fields).woIgnoreList = pHVar5;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields).woIgnoreList >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar9 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  pWVar11 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClientRefNullRef((MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._.tintedWo = pWVar11;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._.tintedWo >> 0xc);
    lVar12 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar10 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar6 = uVar8 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_00 = LoggerManager::LoggerManager_get_Instance((MethodInfo *)0x0);
  type = (Type *)FUN_?(&(this->klass->_0).byval_arg);
  if (this_00 == (LoggerManager *)0x0) {
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
  pIVar14 = LoggerManager::LoggerManager_GetLogger(this_00,type,(MethodInfo *)0x0);
  bVar6 = iRam_? != 0;
  (this->fields)._.logger = pIVar14;
  if (bVar6) {
    uVar7 = (uint)((ulonglong)&(this->fields)._.logger >> 0xc);
    lVar12 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
    do {
      uVar8 = *(ulonglong *)(lVar12 + 0xADDR);
      puVar10 = (ulonglong *)(lVar12 + 0xADDR);
      LOCK();
      bVar6 = uVar8 == *puVar10;
      if (bVar6) {
        *puVar10 = uVar8 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

