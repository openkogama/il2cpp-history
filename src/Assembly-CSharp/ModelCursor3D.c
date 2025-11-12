
/* Void Remove() */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_Remove
               (ModelCursor3D *this,MethodInfo *method)

{
  pFVar1 = (this->fields)._.faceCursor;
  if (pFVar1 != (FaceCursor *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pGVar2 = (pFVar1->fields).gameObject;
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
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy
              ((Object_1 *)pGVar2,0.0,(MethodInfo *)0x0);
    this_00 = (this->fields)._.errorCursor;
    if (this_00 != (CellCursor *)0x0) {
      CellCursor::CellCursor_Remove(this_00,(MethodInfo *)0x0);
      pIVar3 = (this->fields).indentArea;
      if (pIVar3 != (IndentArea *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pGVar2 = (pIVar3->fields).gameObject;
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
        pvVar4 = (void *)0x0;
        if (pGVar2 != (GameObject *)0x0) {
          pvVar4 = (pGVar2->fields)._.m_CachedPtr;
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar4,0);
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetIndentAreaSize(Single) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_SetIndentAreaSize
               (ModelCursor3D *this,float size,MethodInfo *method)

{
  pIVar1 = (this->fields).indentArea;
  if (pIVar1 != (IndentArea *)0x0) {
    (pIVar1->fields).size = size;
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCursor(CubePickingInfo, CubePickingInfo, GameObject, BuildState, Boolean) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_UpdateCursor
               (ModelCursor3D *this,CubePickingInfo *movingEdgeCube,CubePickingInfo *selectedCube,
               GameObject *targetGameObject,BuildState__Enum buildState,bool addCube,
               MethodInfo *method)

{
  if (movingEdgeCube == (CubePickingInfo *)0x0) {
    pFVar1 = (this->fields)._.faceCursor;
    if (pFVar1 == (FaceCursor *)0x0) goto code_?;
    pGVar2 = (pFVar1->fields).gameObject;
    if (selectedCube != (CubePickingInfo *)0x0) {
      if (pGVar2 == (GameObject *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar2,1,(MethodInfo *)0x0);
      pFVar1 = (this->fields)._.faceCursor;
      info = selectedCube;
      goto joined_?;
    }
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
    pIVar3 = (this->fields).indentArea;
    if ((pIVar3 == (IndentArea *)0x0) ||
       (pGVar2 = (pIVar3->fields).gameObject, pGVar2 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,0,(MethodInfo *)0x0);
  }
  else {
    pIVar3 = (this->fields).indentArea;
    if (pIVar3 == (IndentArea *)0x0) goto code_?;
    IndentArea::IndentArea_UpdateIndentArea
              (pIVar3,movingEdgeCube,targetGameObject,(MethodInfo *)0x0);
    pFVar1 = (this->fields)._.faceCursor;
    if ((pFVar1 == (FaceCursor *)0x0) ||
       (pGVar2 = (pFVar1->fields).gameObject, pGVar2 == (GameObject *)0x0))
    goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,1,(MethodInfo *)0x0);
    pFVar1 = (this->fields)._.faceCursor;
    info = movingEdgeCube;
joined_?:
    if (pFVar1 == (FaceCursor *)0x0) goto code_?;
    FaceCursor::FaceCursor_UpdateCursor(pFVar1,info,targetGameObject,(MethodInfo *)0x0);
  }
  this_00 = (this->fields)._.errorCursor;
  if (this_00 == (CellCursor *)0x0) {
code_?:
    FUN_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  CellCursor::CellCursor_UpdateCursor(this_00,(MethodInfo *)0x0);
  if (buildState == BuildState__Enum_PaintCubes) {
    VStack_5.x = 0.0;
    VStack_5.y = 0.0;
    VStack_5.z = 0.0;
    bVar6 = DrawPlane::DrawPlane_Pick(&VStack_5,(MethodInfo *)0x0);
    if (bVar6 != 0) {
      pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if (((pGVar7 != (GameEventManager *)0x0) &&
          (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
          pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
         (pGVar9 = (pGVar8->fields).LaserCommands,
         pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
        pAVar10 = (pGVar9->fields).OnActivateLaserForDuration;
        if (pAVar10 != (Action_1_Single_ *)0x0) {
          (*(pAVar10->fields)._._.invoke_impl)
                    ((pAVar10->fields)._._.method_code,_UNK_?,(pAVar10->fields)._._.method);
        }
        pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar7 != (GameEventManager *)0x0) &&
            (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
            pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar9 = (pGVar8->fields).LaserCommands,
           pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
        {
          pAVar11 = (pGVar9->fields).OnUpdatePosition;
          if (pAVar11 == (Action_1_UnityEngine_Vector3_ *)0x0) {
            return;
          }
          VStack_12.z = VStack_5.z;
          VStack_12.x = VStack_5.x;
          VStack_12.y = VStack_5.y;
          (*(pAVar11->fields)._._.invoke_impl)
                    ((pAVar11->fields)._._.method_code,&VStack_12,(pAVar11->fields)._._.method);
          return;
        }
      }
      goto code_?;
    }
  }
  else {
    if (movingEdgeCube == (CubePickingInfo *)0x0) {
      if (addCube == 0) {
        if (selectedCube == (CubePickingInfo *)0x0) {
          return;
        }
        pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
        if (((pGVar7 != (GameEventManager *)0x0) &&
            (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
            pGVar8 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
           (pGVar9 = (pGVar8->fields).LaserCommands,
           pGVar9 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0))
        {
          pAVar11 = (pGVar9->fields).OnUpdatePosition;
          if (pAVar11 == (Action_1_UnityEngine_Vector3_ *)0x0) {
            return;
          }
          VStack_5.z = (selectedCube->fields).point.z;
          VStack_5.x = (selectedCube->fields).point.x;
          VStack_5.y = (selectedCube->fields).point.y;
          (*(pAVar11->fields)._._.invoke_impl)
                    ((pAVar11->fields)._._.method_code,&VStack_5,(pAVar11->fields)._._.method);
          return;
        }
        goto code_?;
      }
      pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar7 == (GameEventManager *)0x0) ||
         (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
         pGVar8 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
      goto code_?;
      pGVar9 = (pGVar8->fields).LaserCommands;
    }
    else {
      ModelCursor::ModelCursor_HandleLaserMovingEdge
                ((ModelCursor *)this,movingEdgeCube,targetGameObject,(MethodInfo *)0x0);
      pGVar7 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
      if ((pGVar7 == (GameEventManager *)0x0) ||
         (pGVar8 = (pGVar7->fields).AvatarCommandsBuildMode,
         pGVar8 == (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
      goto code_?;
      pGVar9 = (pGVar8->fields).LaserCommands;
    }
    if (pGVar9 == (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0) {
code_?:
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pAVar10 = (pGVar9->fields).OnActivateLaserForDuration;
    if (pAVar10 != (Action_1_Single_ *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(pAVar10->fields)._._.invoke_impl)
                ((pAVar10->fields)._._.method_code,_UNK_?,(pAVar10->fields)._._.method);
      return;
    }
  }
  return;
}


/* ModelCursor3D(Vector3[]) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D__ctor
               (ModelCursor3D *this,Vector3__Array *cubeCorners,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__FaceCursor);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IndentArea);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
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
  if (pPVar1 != (PrefabPool *)0x0) {
    pMVar2 = (pPVar1->fields).cellCursorErrorMaterial;
    this_00 = (CellCursor *)FUN_?(TypeInfo__CellCursor);
    CellCursor::CellCursor__ctor
              (this_00,1,_UNK_?,pMVar2,_UNK_?,cubeCorners,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields)._.errorCursor = this_00;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields)._.errorCursor >> 0xc);
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
    this_01 = (IndentArea *)FUN_?(TypeInfo__IndentArea);
    IndentArea::IndentArea__ctor(this_01,(MethodInfo *)0x0);
    bVar3 = iRam_? != 0;
    (this->fields).indentArea = this_01;
    if (bVar3) {
      uVar4 = (uint)((ulonglong)&(this->fields).indentArea >> 0xc);
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
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__PrefabPool);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
    if (pPVar1 != (PrefabPool *)0x0) {
      pMVar2 = (pPVar1->fields).cursorMaterial;
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__PrefabPool);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
      if (pPVar1 != (PrefabPool *)0x0) {
        materialCornerPath = (pPVar1->fields).cursorCornerMaterial;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__PrefabPool);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
        if (pPVar1 != (PrefabPool *)0x0) {
          materialNonePath = (pPVar1->fields).cursorNoneMaterial;
          this_02 = (FaceCursor *)FUN_?(TypeInfo__FaceCursor);
          FaceCursor::FaceCursor__ctor
                    (this_02,pMVar2,materialCornerPath,materialNonePath,(MethodInfo *)0x0);
          bVar3 = iRam_? != 0;
          (this->fields)._.faceCursor = this_02;
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
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::ModelCursor3D::ModelCursor3D_set_CursorVisible
               (ModelCursor3D *this,bool value,MethodInfo *method)

{
  pFVar1 = (this->fields)._.faceCursor;
  if ((pFVar1 != (FaceCursor *)0x0) &&
     (pGVar2 = (pFVar1->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (pGVar2,value,(MethodInfo *)0x0);
    this_00 = (this->fields)._.errorCursor;
    if (this_00 != (CellCursor *)0x0) {
      CellCursor::CellCursor_set_Active(this_00,value,(MethodInfo *)0x0);
      pIVar3 = (this->fields).indentArea;
      if ((pIVar3 != (IndentArea *)0x0) &&
         (pGVar2 = (pIVar3->fields).gameObject, pGVar2 != (GameObject *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,value,0);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar2 == (GameObject *)0x0) {
          FUN_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pvVar5 = (pGVar2->fields)._.m_CachedPtr;
        if (pvVar5 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)pGVar2,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar6 = func_?(&UNK_?);
          FUN_?(uVar6,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar5,value);
        return;
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

