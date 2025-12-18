
/* EditCubeChange AddCube() */

EditCubeChange__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_AddCube
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Cube);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._SelectedCube_k__BackingField;
  if (pCVar1 != (CubePickingInfo *)0x0) {
    pCVar2 = (pCVar1->fields).cube;
    FVar3 = (pCVar1->fields).pickedFace;
    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
      FUN_?();
    }
    bVar4 = Cube::Cube_IsFaceBoxSideAligened(pCVar2,FVar3,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._SelectedCube_k__BackingField;
    if (pCVar1 != (CubePickingInfo *)0x0) {
      if (bVar4 == 0) {
        IStackX_8.x = (pCVar1->fields).iLocalPos.x;
        IStackX_8.y = (pCVar1->fields).iLocalPos.y;
        IStackX_8.z = (pCVar1->fields).iLocalPos.z;
        CVar5 = CubeModelingStateMachine_CanAddCubeAt(this,&IStackX_8,pCVar1,(MethodInfo *)0x0);
        if (CVar5 != CanPerformCubeActionResult__Enum_Yes) {
          if (CVar5 != CanPerformCubeActionResult__Enum_UnlockMaterial) {
            return EditCubeChange__Enum_None;
          }
          uVar6 = func_?(&
                                       TypeInfo__UnityEngine__EventSystems__EditorStateMachine__CubeModelingStateMachine__UnlockMaterialException
                                      );
          pUVar7 = (UnlockMaterialException *)func_?(uVar6);
          Assembly-CSharp.dll::UnityEngine::EventSystems::EditorStateMachine::
          CubeModelingStateMachine::UnlockMaterialException::UnlockMaterialException__ctor
                    (pUVar7,(MethodInfo *)0x0);
          uVar6 = func_?(&MethodInfo__CubeModelingStateMachine__AddCube__);
          FUN_?(pUVar7,uVar6);
          pcVar8 = (code *)swi(3);
          EVar9 = (*pcVar8)();
          return EVar9;
        }
        pCVar1 = (this->fields)._SelectedCube_k__BackingField;
        if (pCVar1 != (CubePickingInfo *)0x0) {
          uVar10._0_2_ = (pCVar1->fields).iLocalPos.x;
          uVar10._2_2_ = (pCVar1->fields).iLocalPos.y;
          iVar11 = (pCVar1->fields).iLocalPos.z;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__AudioEventHandler);
            LOCK();
            UNLOCK();
            FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar12 = (this->fields)._TargetCubeModel_k__BackingField;
          if (pMVar12 != (MVCubeModelBase *)0x0) {
            gameObject = (pMVar12->fields)._.gameObject;
            if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
              FUN_?();
            }
            IStackX_8._0_4_ = uVar10;
            IStackX_8.z = iVar11;
            AudioEventHandler::AudioEventHandler_PlaySound
                      (AudioActions__Enum_FaceMoved,&IStackX_8,gameObject,(MethodInfo *)0x0);
            pCVar1 = (this->fields)._SelectedCube_k__BackingField;
            if (pCVar1 != (CubePickingInfo *)0x0) {
              pMVar12 = (this->fields)._TargetCubeModel_k__BackingField;
              FVar3 = (pCVar1->fields).pickedFace;
              pCVar2 = (pCVar1->fields).cube;
              if (pMVar12 != (MVCubeModelBase *)0x0) {
                uVar13._0_2_ = (pCVar1->fields).iLocalPos.x;
                uVar13._2_2_ = (pCVar1->fields).iLocalPos.y;
                iVar11 = (pCVar1->fields).iLocalPos.z;
                MVCubeModelBase::MVCubeModelBase_MakeUnique(pMVar12,(MethodInfo *)0x0);
                pRVar14 = (pMVar12->fields).prototypeCubeModel;
                if (pRVar14 != (RuntimePrototypeCubeModel *)0x0) {
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__Cube);
                    LOCK();
                    UNLOCK();
                    FUN_?(&TypeInfo__UnityEngine__Debug);
                    LOCK();
                    UNLOCK();
                    FUN_?(&StringLiteral_UnIndentCubeFace);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                            ((Object *)StringLiteral_UnIndentCubeFace,(MethodInfo *)0x0);
                  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (pCVar2 != (Cube *)0x0) {
                    if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    Cube::Cube_UnIndentFace(pCVar2,FVar3,(MethodInfo *)0x0);
                    IStackX_8._0_4_ = uVar13;
                    IStackX_8.z = iVar11;
                    RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_AddToChunk
                              (pRVar14,&IStackX_8,pCVar2,
                               MeshGeneratePriority__Enum_HighGenerateAllDirty,1,(MethodInfo *)0x0);
                    this_00 = (pRVar14->fields).deltaCubes;
                    if (this_00 == (DeltaCubes *)0x0) goto code_?;
                    IStackX_8._0_4_ = uVar13;
                    IStackX_8.z = iVar11;
                    DeltaCubes::DeltaCubes_Enqueue
                              (this_00,&IStackX_8,
                               (CubeAction__Enum)CONCAT71((int7)((ulonglong)pCVar2 >> 8),4),
                               (MethodInfo *)0x0);
                  }
                  return EditCubeChange__Enum_CubeUnindented;
                }
              }
            }
          }
        }
      }
      else {
        uVar15._0_2_ = (pCVar1->fields).iLocalPos.x;
        uVar15._2_2_ = (pCVar1->fields).iLocalPos.y;
        iVar11 = (pCVar1->fields).iLocalPos.z;
        if (pCVar1 != (CubePickingInfo *)0x0) {
          FVar3 = (pCVar1->fields).pickedFace;
          if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
            FUN_?();
          }
          IStackX_8._0_4_ = uVar15;
          IStackX_8.z = iVar11;
          pIVar16 = Cube::Cube_GetCubePosAboveFace(&IStackX_18,&IStackX_8,FVar3,(MethodInfo *)0x0);
          iVar11 = pIVar16->z;
          uVar17._0_2_ = pIVar16->x;
          uVar17._2_2_ = pIVar16->y;
          IStackX_8._0_4_ = uVar17;
          IStackX_8.z = iVar11;
          CVar5 = CubeModelingStateMachine_CanAddCubeAt
                             (this,&IStackX_8,(this->fields)._SelectedCube_k__BackingField,
                              (MethodInfo *)0x0);
          if (CVar5 != CanPerformCubeActionResult__Enum_Yes) {
            if (CVar5 != CanPerformCubeActionResult__Enum_UnlockMaterial) {
              return EditCubeChange__Enum_None;
            }
            uVar6 = func_?(&
                                         TypeInfo__UnityEngine__EventSystems__EditorStateMachine__CubeModelingStateMachine__UnlockMaterialException
                                        );
            pUVar7 = (UnlockMaterialException *)func_?(uVar6);
            Assembly-CSharp.dll::UnityEngine::EventSystems::EditorStateMachine::
            CubeModelingStateMachine::UnlockMaterialException::UnlockMaterialException__ctor
                      (pUVar7,(MethodInfo *)0x0);
            uVar6 = func_?(&MethodInfo__CubeModelingStateMachine__AddCube__);
            FUN_?(pUVar7,uVar6);
            pcVar8 = (code *)swi(3);
            EVar9 = (*pcVar8)();
            return EVar9;
          }
          pMVar12 = (this->fields)._TargetCubeModel_k__BackingField;
          if ((pMVar12 != (MVCubeModelBase *)0x0) &&
             (pRVar14 = (pMVar12->fields).prototypeCubeModel,
             pRVar14 != (RuntimePrototypeCubeModel *)0x0)) {
            IStackX_8._0_4_ = uVar17;
            IStackX_8.z = iVar11;
            pCVar2 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                                (pRVar14,&IStackX_8,(MethodInfo *)0x0);
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            if (pCVar2 != (Cube *)0x0) {
              return EditCubeChange__Enum_None;
            }
            IStackX_8._0_4_ = uVar17;
            IStackX_8.z = iVar11;
            CubeModelingStateMachine_HandleAudio
                      (this,&IStackX_8,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
            pCVar1 = (this->fields)._SelectedCube_k__BackingField;
            pMVar12 = (this->fields)._TargetCubeModel_k__BackingField;
            if (pCVar1 != (CubePickingInfo *)0x0) {
              pCVar2 = (pCVar1->fields).cube;
              FVar3 = (pCVar1->fields).pickedFace;
              if (*(int *)&(TypeInfo__Cube->_1).field_0x1c == 0) {
                FUN_?();
              }
              corners = Cube::Cube_GetCorners(pCVar2,FVar3,(MethodInfo *)0x0);
              if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
                FUN_?();
              }
              byteCorners = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                            CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
              material = CubeModelingStateMachine_get_CurrentMaterialId(this,(MethodInfo *)0x0);
              faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
              pCVar2 = (Cube *)FUN_?(TypeInfo__Cube);
              Cube::Cube__ctor(pCVar2,byteCorners,faceMaterials,(MethodInfo *)0x0);
              if (pMVar12 != (MVCubeModelBase *)0x0) {
                IStackX_8._0_4_ = uVar17;
                IStackX_8.z = iVar11;
                MVCubeModelBase::MVCubeModelBase_AddCube
                          (pMVar12,&IStackX_8,(CubeBase *)pCVar2,(MethodInfo *)0x0);
                return EditCubeChange__Enum_CubeAdded;
              }
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar8 = (code *)swi(3);
  EVar9 = (*pcVar8)();
  return EVar9;
}


/* CanPerformCubeActionResult CanAddCubeAt(IntVector, CubePickingInfo) */

CanPerformCubeActionResult__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
          (CubeModelingStateMachine *this,IntVector *requestedCubePos,CubePickingInfo *requestedCube
          ,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
       (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
      (requestedCube != (CubePickingInfo *)0x0)) &&
     ((pCVar3 = (requestedCube->fields).cube, pCVar3 != (Cube *)0x0 &&
      (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
      this_00 != (MVMaterialRepository *)0x0)))) {
    pBVar4 = (pCVar3->fields)._.faceMaterials;
    if (pBVar4 != (Byte__Array *)0x0) {
      puVar5 = pBVar4->vector;
      for (uVar6 = 0; (int)uVar6 < (int)pBVar4->max_length; uVar6 = uVar6 + 1) {
        if ((uint)pBVar4->max_length <= uVar6) {
          FUN_?();
          pcVar7 = (code *)swi(3);
          CVar8 = (*pcVar7)();
          return CVar8;
        }
        pMVar9 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                           (this_00,*puVar5,(MethodInfo *)0x0);
        if (pMVar9 == (MVMaterial *)0x0) goto code_?;
        if ((pMVar9->fields).isUnlocked == 0) {
          return CanPerformCubeActionResult__Enum_UnlockMaterial;
        }
        puVar5 = puVar5 + 1;
      }
    }
    aIStack_10[0].x = requestedCubePos->x;
    aIStack_10[0].y = requestedCubePos->y;
    aIStack_10[0].z = requestedCubePos->z;
    CVar8 = CubeModelingStateMachine_CanAddCubeAt_1(this,aIStack_10,(MethodInfo *)0x0);
    return CVar8;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  CVar8 = (*pcVar7)();
  return CVar8;
}


/* CanPerformCubeActionResult CanAddCubeAt(IntVector) */

CanPerformCubeActionResult__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
          (CubeModelingStateMachine *this,IntVector *requestedCubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IModelingConstraint);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__not_within_constraint_);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Pos_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
  if (pMVar1 != (MVCubeModelBase *)0x0) {
    if ((((pMVar1->fields)._.interactionFlags & 4) == 0) &&
       ((this->fields).constraint != (IModelingConstraint *)0x0)) {
      IStackX_8.x = requestedCubePos->x;
      IStackX_8.y = requestedCubePos->y;
      IStackX_8.z = requestedCubePos->z;
      cVar2 = FUN_?(0);
      if (cVar2 == '\0') {
        IStackX_8.x = requestedCubePos->x;
        IStackX_8.y = requestedCubePos->y;
        IStackX_8.z = requestedCubePos->z;
        if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
          FUN_?();
        }
        pSVar3 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                           (&IStackX_8,(MethodInfo *)0x0);
        pSVar3 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral_Pos_,pSVar3,StringLiteral__not_within_constraint_,
                            (MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar3,(MethodInfo *)0x0);
        return CanPerformCubeActionResult__Enum_No;
      }
    }
    return CanPerformCubeActionResult__Enum_Yes;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  CVar5 = (*pcVar4)();
  return CVar5;
}


/* Boolean CanEditCubeAt(IntVector) */

bool Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanEditCubeAt
               (CubeModelingStateMachine *this,IntVector *requestedCubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IModelingConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
  if (pMVar1 != (MVCubeModelBase *)0x0) {
    if ((((pMVar1->fields)._.interactionFlags & 4) == 0) &&
       ((this->fields).constraint != (IModelingConstraint *)0x0)) {
      bVar2 = FUN_?(2);
      return bVar2;
    }
    return 1;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar2 = (*pcVar3)();
  return bVar2;
}


/* CanPerformCubeActionResult CanRemoveCubeAt(CubePickingInfo) */

CanPerformCubeActionResult__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
          (CubeModelingStateMachine *this,CubePickingInfo *requestedCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IModelingConstraint);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (requestedCube != (CubePickingInfo *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MVGameControllerBase);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
    if ((((pMVar1 != (MVGameControllerBase *)0x0) &&
         (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
        (pCVar3 = (requestedCube->fields).cube, pCVar3 != (Cube *)0x0)) &&
       (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
       this_00 != (MVMaterialRepository *)0x0)) {
      pBVar4 = (pCVar3->fields)._.faceMaterials;
      uVar5 = 0;
      if (pBVar4 != (Byte__Array *)0x0) {
        puVar6 = pBVar4->vector;
        for (; (int)uVar5 < (int)pBVar4->max_length; uVar5 = uVar5 + 1) {
          if ((uint)pBVar4->max_length <= uVar5) {
            FUN_?();
            pcVar7 = (code *)swi(3);
            CVar8 = (*pcVar7)();
            return CVar8;
          }
          pMVar9 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                             (this_00,*puVar6,(MethodInfo *)0x0);
          if (pMVar9 == (MVMaterial *)0x0) goto code_?;
          if ((pMVar9->fields).isUnlocked == 0) {
            return CanPerformCubeActionResult__Enum_UnlockMaterial;
          }
          puVar6 = puVar6 + 1;
        }
      }
      pMVar10 = (this->fields)._TargetCubeModel_k__BackingField;
      if (pMVar10 != (MVCubeModelBase *)0x0) {
        if ((((pMVar10->fields)._.interactionFlags & 4) == 0) &&
           ((this->fields).constraint != (IModelingConstraint *)0x0)) {
          cVar11 = FUN_?(1);
          CVar8 = (CanPerformCubeActionResult__Enum)(cVar11 == '\0');
        }
        else {
          CVar8 = CanPerformCubeActionResult__Enum_Yes;
        }
        return CVar8;
      }
    }
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  CVar8 = (*pcVar7)();
  return CVar8;
}


/* CanPerformCubeActionResult CanReplaceCube(CubePickingInfo, Byte) */

CanPerformCubeActionResult__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanReplaceCube
          (CubeModelingStateMachine *this,CubePickingInfo *requestedCube,uint8_t materialId,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    pMVar3 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                       (this_00,materialId,(MethodInfo *)0x0);
    if (pMVar3 != (MVMaterial *)0x0) {
      CVar4 = CanPerformCubeActionResult__Enum_UnlockMaterial;
      if ((pMVar3->fields).isUnlocked != 0) {
        CVar4 = CanPerformCubeActionResult__Enum_Yes;
      }
      return CVar4;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  CVar4 = (*pcVar5)();
  return CVar4;
}


/* CubeModelingStateMachine+HoverType CurrentlyHovered() */

CubeModelingStateMachine_HoverType__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CurrentlyHovered
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if ((this->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
    return CubeModelingStateMachine_HoverType__Enum_None;
  }
  pCVar1 = (this->fields)._SelectedCube_k__BackingField;
  if (((pCVar1->fields).pickedEdgeIndex0 == 0) && ((pCVar1->fields).pickedEdgeIndex1 == 0)) {
    return CubeModelingStateMachine_HoverType__Enum_Face - ((pCVar1->fields).pickedEdge != 0);
  }
  return CubeModelingStateMachine_HoverType__Enum_Corner;
}


/* CubePickingInfo DoPicking() */

CubePickingInfo *
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_DoPicking
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubePickingInfo);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pCStackX_8 = (CubePickingInfo *)FUN_?(TypeInfo__CubePickingInfo);
  bVar1 = EditModeObjectPicker::EditModeObjectPicker_GetPickingInfo
                    ((this->fields)._TargetCubeModel_k__BackingField,&pCStackX_8,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return (CubePickingInfo *)0x0;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  aVStack_3[0].x = (pVVar2->zeroVector).x;
  aVStack_3[0].y = (pVVar2->zeroVector).y;
  aVStack_3[0].z = (pVVar2->zeroVector).z;
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
  this_02 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::EventSystem_get_current
                      ((MethodInfo *)0x0);
  if (this_02 != (EventSystem *)0x0) {
    bVar1 = UnityEngine.UI.dll::UnityEngine::EventSystems::EventSystem::
            EventSystem_IsPointerOverGameObject(this_02,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return pCStackX_8;
    }
    pDVar4 = TypeInfo__DrawPlane->static_fields->drawPlaneController;
    if ((pDVar4 != (DrawPlaneControllerUUI *)0x0) &&
       (this_00 = (pDVar4->fields).worldEditorDrawPlane, this_00 != (WorldEditorDrawPlane *)0x0)) {
      bVar1 = WorldEditorDrawPlane::WorldEditorDrawPlane_Pick(this_00,aVStack_3,(MethodInfo *)0x0);
      if (bVar1 == 0) {
        return pCStackX_8;
      }
      this_01 = (this->fields).mainCamera;
      if ((this_01 != (Camera *)0x0) &&
         (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_01,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_5 = 0;
        fStack_6 = 0.0;
        pvVar7 = (obj->fields)._._.m_CachedPtr;
        if (pvVar7 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar8 = (code *)swi(3);
          pCVar9 = (CubePickingInfo *)(*pcVar8)();
          return pCVar9;
        }
        pcVar8 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
          uVar10 = func_?(&UNK_?);
          FUN_?(uVar10,0);
          pcVar8 = (code *)swi(3);
          pCVar9 = (CubePickingInfo *)(*pcVar8)();
          return pCVar9;
        }
        pcRam_? = pcVar8;
        (*pcRam_?)(pvVar7,&uStack_5);
        aVStack_3[0].x = aVStack_3[0].x - (float)uStack_5;
        aVStack_3[0].z = aVStack_3[0].z - fStack_6;
        aVStack_3[0].y = aVStack_3[0].y - uStack_5._4_4_;
        fVar11 = (float)FUN_?(aVStack_3);
        pCVar9 = pCStackX_8;
        if (pCStackX_8 != (CubePickingInfo *)0x0) {
          uVar12 = (pCStackX_8->fields).point.x;
          aVStack_3[0].x = (float)uVar12 - (float)uStack_5;
          aVStack_3[0].z = (pCStackX_8->fields).point.z - fStack_6;
          fVar11 = fVar11 - _UNK_?;
          aVStack_3[0].y = (pCStackX_8->fields).point.y - uStack_5._4_4_;
          fVar13 = (float)FUN_?(aVStack_3);
          if (fVar11 < fVar13) {
            return (CubePickingInfo *)0x0;
          }
          return pCVar9;
        }
      }
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  pCVar9 = (CubePickingInfo *)(*pcVar8)();
  return pCVar9;
}


/* Void EndEdit() */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_EndEdit
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_00 == (MVCubeModelBase *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_00,0,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._TargetCubeModel_k__BackingField = (MVCubeModelBase *)0x0;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._TargetCubeModel_k__BackingField >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void HandleAudio(IntVector, AudioActions) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
               (CubeModelingStateMachine *this,IntVector *pos,AudioActions__Enum action,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AudioEventHandler);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (action == AudioActions__Enum_CubeAdded) {
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if ((pMVar1 != (MVCubeModelBase *)0x0) &&
       (pRVar2 = (pMVar1->fields).prototypeCubeModel, pRVar2 != (RuntimePrototypeCubeModel *)0x0)) {
      aIStack_3[0].x = pos->x;
      aIStack_3[0].y = pos->y;
      aIStack_3[0].z = pos->z;
      pCVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                         (pRVar2,aIStack_3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pCVar4 != (Cube *)0x0) {
        return;
      }
      pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
      if (pMVar1 != (MVCubeModelBase *)0x0) {
        gameObject = (pMVar1->fields)._.gameObject;
        if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
          FUN_?();
        }
        aIStack_3[0].x = pos->x;
        aIStack_3[0].y = pos->y;
        aIStack_3[0].z = pos->z;
        audioAction = AudioActions__Enum_CubeAdded;
        goto code_?;
      }
    }
  }
  else if (action == AudioActions__Enum_FaceMoved) {
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      gameObject = (pMVar1->fields)._.gameObject;
      if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
        FUN_?();
      }
      aIStack_3[0].x = pos->x;
      aIStack_3[0].y = pos->y;
      aIStack_3[0].z = pos->z;
      audioAction = AudioActions__Enum_FaceMoved;
code_?:
      AudioEventHandler::AudioEventHandler_PlaySound
                (audioAction,aIStack_3,gameObject,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (action != AudioActions__Enum_CubeRemoved) {
      return;
    }
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if ((pMVar1 != (MVCubeModelBase *)0x0) &&
       (pRVar2 = (pMVar1->fields).prototypeCubeModel, pRVar2 != (RuntimePrototypeCubeModel *)0x0)) {
      aIStack_3[0].x = pos->x;
      aIStack_3[0].y = pos->y;
      aIStack_3[0].z = pos->z;
      pCVar4 = RuntimePrototypeCubeModel::RuntimePrototypeCubeModel_GetCube
                         (pRVar2,aIStack_3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (pCVar4 == (Cube *)0x0) {
        return;
      }
      pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
      if (pMVar1 != (MVCubeModelBase *)0x0) {
        gameObject = (pMVar1->fields)._.gameObject;
        if (*(int *)&(TypeInfo__AudioEventHandler->_1).field_0x1c == 0) {
          FUN_?();
        }
        aIStack_3[0].x = pos->x;
        aIStack_3[0].y = pos->y;
        aIStack_3[0].z = pos->z;
        audioAction = AudioActions__Enum_CubeRemoved;
        goto code_?;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveCursors() */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(1);
  pIVar3 = (this->fields)._.currentState;
  if (pIVar3 == (IState *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pIVar4 = pIVar3->klass;
  bVar5 = (TypeInfo__CubeModelTool->_1).naturalAligment;
  if ((bVar5 <= (pIVar4->_1).naturalAligment) &&
     ((pIVar4->_1).typeHierarchy[(ulonglong)bVar5 - 1] == (Il2CppClass *)TypeInfo__CubeModelTool)) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)pIVar4[1]._0.properties)(pIVar3,pIVar4[1]._0.methods);
    return;
  }
  FUN_?(pIVar3,TypeInfo__CubeModelTool);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void StartEdit(MVCubeModelBase, IModelingConstraint) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
               (CubeModelingStateMachine *this,MVCubeModelBase *targetCubeModel,
               IModelingConstraint *constraint,MethodInfo *method)

{
  if ((this->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0) {
    MVCubeModelBase::MVCubeModelBase_set_BeingEdited
              ((this->fields)._TargetCubeModel_k__BackingField,0,(MethodInfo *)0x0);
  }
  iVar1 = iRam_?;
  (this->fields)._TargetCubeModel_k__BackingField = targetCubeModel;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields)._TargetCubeModel_k__BackingField >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
      iVar1 = iRam_?;
    } while (!bVar6);
  }
  (this->fields).constraint = constraint;
  if (iVar1 != 0) {
    uVar2 = (uint)((ulonglong)&(this->fields).constraint >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  this_02 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_02 == (MVCubeModelBase *)0x0) {
    FUN_?();
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_02,1,(MethodInfo *)0x0);
  evt = (this->fields)._.curEvent;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Stack<EditorEvent>__Clear__);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_State_is_locked__could_not_set_s);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar8 = StringLiteral_State_is_locked__could_not_set_s;
  if ((this->fields)._.lockState != 0) {
    if (evt == (Object *)0x0) {
      str1 = (String *)0x0;
    }
    else {
      str1 = (String *)
             (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method);
    }
    pSVar8 = mscorlib.dll::System::String::String_Concat_4(pSVar8,str1,(MethodInfo *)0x0);
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug,0);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__UnityEngine__ILogger);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Debug);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
      FUN_?();
    }
    pIVar9 = TypeInfo__UnityEngine__Debug->static_fields->s_Logger;
    if (pIVar9 == (ILogger_1 *)0x0) {
      FUN_?();
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FUN_?(6,TypeInfo__UnityEngine__ILogger,pIVar9,2,pSVar8);
    return;
  }
  bVar6 = iRam_? != 0;
  (this->fields)._.nextEvent = evt;
  if (bVar6) {
    uVar2 = (uint)((ulonglong)&(this->fields)._.nextEvent >> 0xc);
    lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
    do {
      uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
      puVar5 = (ulonglong *)(lVar3 + 0xADDR);
      LOCK();
      bVar6 = uVar4 == *puVar5;
      if (bVar6) {
        *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  if (evt == (Object *)0x0) {
    if ((this->fields)._.currentState == (IState *)0x0) goto DAT_?;
    FUN_?(2);
    bVar6 = iRam_? != 0;
    (this->fields)._.currentState = (IState *)0x0;
    if (bVar6) {
      uVar2 = (uint)((ulonglong)&(this->fields)._.currentState >> 0xc);
      lVar3 = (ulonglong)((uVar2 & 0x1fffff) >> 6) * 8;
      do {
        uVar4 = *(ulonglong *)(lVar3 + 0xADDR);
        puVar5 = (ulonglong *)(lVar3 + 0xADDR);
        LOCK();
        bVar6 = uVar4 == *puVar5;
        if (bVar6) {
          *puVar5 = uVar4 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (!bVar6);
    }
  }
  else {
    this_00 = (this->fields)._.transitionTable;
    if (this_00 == (StateTransitionTable *)0x0) goto DAT_?;
    pIVar10 = StateTransitionTable::StateTransitionTable_GetState(this_00,evt,(MethodInfo *)0x0);
    if (pIVar10 != (IState *)0x0) {
      if ((this->fields)._.currentState != (IState *)0x0) {
        FUN_?(2);
      }
      pSVar8 = (String *)
                (*(evt->klass->vtable).ToString.methodPtr)(evt,(evt->klass->vtable).ToString.method)
      ;
      (this->fields)._.stateName = pSVar8;
      func_?(&(this->fields)._.stateName);
      (this->fields)._.currentState = pIVar10;
      func_?(&(this->fields)._.currentState);
      (this->fields)._.nextEvent = (Object *)0x0;
      func_?(&(this->fields)._.nextEvent);
      (this->fields)._.prevEvent = (this->fields)._.curEvent;
      func_?(&this->fields);
      (this->fields)._.curEvent = evt;
      func_?(&(this->fields)._.curEvent);
      if ((this->fields)._.currentState == (IState *)0x0) goto DAT_?;
      FUN_?(0);
      this_01 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)(this->fields)._.data;
      if (this_01 ==
          (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)
          0x0) goto DAT_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
      TypeConverterRegistry+ConverterKey,System::Object]::
      Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__Clear
                (this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Clear__
                );
    }
    if ((this->fields)._.clearStack == 0) {
      (this->fields)._.clearStack = 1;
    }
    else {
      pSVar11 = (this->fields)._.stateStack;
      if (pSVar11 == (Stack_1_EditorEvent_ *)0x0) {
DAT_?:
        FUN_?();
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      piVar12 = &(pSVar11->fields)._version;
      *piVar12 = *piVar12 + 1;
      (pSVar11->fields)._size = 0;
    }
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_Update
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  if ((this->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0) {
    return;
  }
  pCVar1 = CubeModelingStateMachine_DoPicking(this,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._SelectedCube_k__BackingField = pCVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._SelectedCube_k__BackingField >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IState);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._.currentState != (IState *)0x0) {
    FUN_?(1);
  }
  pMVar7 = (this->fields)._TargetCubeModel_k__BackingField;
  if (pMVar7 == (MVCubeModelBase *)0x0) {
    FUN_?();
    pcVar8 = (code *)swi(3);
    (*pcVar8)();
    return;
  }
  rpcm = (pMVar7->fields).prototypeCubeModel;
  if (rpcm != (RuntimePrototypeCubeModel *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&
                    MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                    ,0);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pDVar9 = (rpcm->fields).deltaCubes;
    while (pDVar9 != (DeltaCubes *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Queue<System::Collections::Generic::KeyValuePair<MV::WorldObject::IntVector,_MV::WorldObject::CubeAction>_>__get_Count__
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar10 = (pDVar9->fields).cubeChange;
      if (pQVar10 == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
                    0x0) break;
      if ((pQVar10->fields)._size < 1) {
        return;
      }
      pDVar9 = (rpcm->fields).deltaCubes;
      if (pDVar9 == (DeltaCubes *)0x0) break;
      prototypeData = DeltaCubes::DeltaCubes_Dequeue(pDVar9,rpcm,(MethodInfo *)0x0);
      if (prototypeData != (Byte__Array *)0x0) {
        if ((rpcm->fields).prototypeState == 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                              ((MethodInfo *)0x0);
          if (this_01 == (MVNetworkGame_OperationRequests *)0x0) break;
          MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                    (this_01,(rpcm->fields).prototypeId,prototypeData,(MethodInfo *)0x0);
        }
        else if ((rpcm->fields).prototypeState == 1) {
          this_00 = (rpcm->fields).pendingDeltaCubes;
          if (this_00 == (List_1_System_Byte_ *)0x0) break;
          mscorlib.dll::System::Collections::Generic::List`1[System::Byte]::
          List_1_System_Byte__InsertRange
                    (this_00,(this_00->fields)._size,(IEnumerable_1_System_Byte_ *)prototypeData,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                     ->klass->rgctx_data[0x12].method);
        }
      }
      pDVar9 = (rpcm->fields).deltaCubes;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* CubeModelingStateMachine(GameObject) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine__ctor
               (CubeModelingStateMachine *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelingEvent);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CubeModelingTransitionTable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields).useLasers = 1;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_op_Implicit(0x15,(MethodInfo *)0x0);
  (this->fields).currentMaterialId = OVar1;
  FSMEntity::FSMEntity__ctor((FSMEntity *)this,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).gameObject = gameObject;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).gameObject >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  this_00 = (CubeModelingTransitionTable *)FUN_?(TypeInfo__CubeModelingTransitionTable);
  CubeModelingTransitionTable::CubeModelingTransitionTable__ctor(this_00,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._.transitionTable >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  value = (Object *)0x0;
  uStackX_8 = 0;
  iVar7._0_2_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.attrs;
  iVar7._2_1_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.type;
  iVar7._3_1_ = (TypeInfo__CubeModelingEvent->_0).byval_arg.field_0xb;
  if (iVar7 < 0) {
    if (((TypeInfo__CubeModelingEvent->_0).generic_class == (Il2CppGenericClass *)0x0) ||
       (((TypeInfo__CubeModelingEvent->_1).field_0x6d & 8) == 0)) {
      value = (Object *)FUN_?(TypeInfo__CubeModelingEvent);
      FUN_?(value + 1,&uStackX_8);
      if (iRam_? != 0) {
        uVar3 = (uint)((ulonglong)(value + 1) >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
    }
  }
  else {
    value = (Object *)((ulonglong)uStackX_c << 0x20);
  }
  FSMEntity::FSMEntity_set_Event((FSMEntity *)this,value,(MethodInfo *)0x0);
  pCVar8 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields).mainCamera = pCVar8;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).mainCamera >> 0xc);
    lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
    do {
      uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
      puVar6 = (ulonglong *)(lVar4 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  return;
}


/* Void <set_CurrentMaterialId>b__23_0(IHandleMaterial, BaseEventData) */

void Assembly-CSharp.dll::CubeModelingStateMachine::
     CubeModelingStateMachine__set_CurrentMaterialId_b__23_0
               (CubeModelingStateMachine *this,IHandleMaterial *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__EventSystems__IHandleMaterial);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = (this->fields).currentMaterialId;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStackX_8[0] = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  if (x == (IHandleMaterial *)0x0) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pIVar4 = (Il2CppRuntimeInterfaceOffsetPair *)(ulonglong)uVar2;
  uVar5 = 0;
  pIVar6 = x->klass;
  uVar7._0_1_ = (pIVar6->_1).rank;
  uVar7._1_1_ = (pIVar6->_1).minimumAlignment;
  if (uVar7 != 0) {
    pIVar4 = pIVar6->interfaceOffsets;
    do {
      if (pIVar4[uVar5].interfaceType ==
          (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleMaterial) {
        pVVar8 = &(pIVar6->vtable).OnMaterialChanged + pIVar4[uVar5].offset;
        goto code_?;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar7);
  }
  pVVar8 = (VirtualInvokeData *)
           FUN_?(x,TypeInfo__UnityEngine__EventSystems__IHandleMaterial,0,pIVar4,unaff_RDI);
code_?:
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pVVar8->methodPtr)(x,(ulonglong)uVar2,pVVar8->method,pVVar8->methodPtr);
  return;
}


/* Byte[] get_ByteCubeCorners() */

Byte__Array *
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_get_ByteCubeCorners
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  if (TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners == (Byte__Array *)0x0)
  {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pBVar2 = (Byte__Array *)(*pcVar1)();
    return pBVar2;
  }
  lVar3 = FUN_?();
  pBVar4 = TypeInfo__System__Byte;
  pBVar2 = (Byte__Array *)0x0;
  if ((lVar3 != 0) &&
     (pBVar2 = (Byte__Array *)FUN_?(lVar3,TypeInfo__System__Byte),
     pBVar2 == (Byte__Array *)0x0)) {
    FUN_?(lVar3,pBVar4);
    pcVar1 = (code *)swi(3);
    pBVar2 = (Byte__Array *)(*pcVar1)();
    return pBVar2;
  }
  return pBVar2;
}


/* Vector3[] get_CubeCorners() */

Vector3__Array *
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_get_CubeCorners
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = TypeInfo__MV__WorldObject__CubeBase->static_fields->identityByteCorners;
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,8);
  uVar3 = 0;
  lVar4 = 0;
  pVVar5 = pVVar2->vector;
  while (pBVar1 != (Byte__Array *)0x0) {
    if ((uint)pBVar1->max_length <= uVar3) {
code_?:
      FUN_?();
      pcVar6 = (code *)swi(3);
      pVVar2 = (Vector3__Array *)(*pcVar6)();
      return pVVar2;
    }
    bVar7 = pBVar1->vector[lVar4];
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
      FUN_?();
    }
    pVVar8 = TypeInfo__MV__WorldObject__CubeDataPacker->static_fields->bytePositionLookUpTable;
    if (pVVar8 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar8->max_length <= (uint)bVar7) goto code_?;
    if (pVVar2 == (Vector3__Array *)0x0) break;
    if ((uint)pVVar2->max_length <= uVar3) goto code_?;
    fVar9 = pVVar8->vector[bVar7].y;
    uVar3 = uVar3 + 1;
    pVVar5->x = pVVar8->vector[bVar7].x;
    pVVar5->y = fVar9;
    lVar4 = lVar4 + 1;
    pVVar5->z = pVVar8->vector[bVar7].z;
    pVVar5 = pVVar5 + 1;
    if (7 < lVar4) {
      return pVVar2;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  pVVar2 = (Vector3__Array *)(*pcVar6)();
  return pVVar2;
}


/* Material get_CurrentMaterial() */

Material *
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_get_CurrentMaterial
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (pMVar1 != (MaterialLoader *)0x0) {
    return (pMVar1->fields)._CubeModelMaterial_k__BackingField;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pMVar3 = (Material *)(*pcVar2)();
  return pMVar3;
}


/* Byte get_CurrentMaterialId() */

uint8_t Assembly-CSharp.dll::CubeModelingStateMachine::
        CubeModelingStateMachine_get_CurrentMaterialId
                  (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  OVar1 = (this->fields).currentMaterialId;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  aOStackX_8[0] = OVar1;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  uVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_InternalDecrypt(aOStackX_8,(MethodInfo *)0x0);
  return uVar2;
}


/* Boolean get_CursorVisible() */

bool Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_get_CursorVisible
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelTool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.currentState;
  if (pIVar1 != (IState *)0x0) {
    pIVar2 = pIVar1->klass;
    bVar3 = (TypeInfo__CubeModelTool->_1).naturalAligment;
    if ((bVar3 <= (pIVar2->_1).naturalAligment) &&
       ((pIVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo__CubeModelTool))
    {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      bVar4 = (*(code *)pIVar2[1]._0.element_class)(pIVar1,pIVar2[1]._0.castClass);
      return bVar4;
    }
    FUN_?(pIVar1,TypeInfo__CubeModelTool);
    pcVar5 = (code *)swi(3);
    bVar4 = (*pcVar5)();
    return bVar4;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Void set_CurrentMaterialId(Byte) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
               (CubeModelingStateMachine *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__CubeModelingStateMachine___set_CurrentMaterialId_b__23_0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MaterialsControllerEditMode);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial = value;
  if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0) {
    FUN_?();
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
           ObscuredByte_op_Implicit(value,(MethodInfo *)0x0);
  bVar2 = cRam_? == '\0';
  (this->fields).currentMaterialId = OVar1;
  if (bVar2) {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar3 != (MVGameControllerBase *)0x0) &&
      (pMVar4 = (pMVar3->fields).game, pMVar4 != (MVNetworkGame *)0x0)) &&
     (pMVar5 = (pMVar4->fields).operationRequests, pMVar5 != (MVNetworkGame_OperationRequests *)0x0)
     ) {
    aOStackX_10[0] = (this->fields).currentMaterialId;
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
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__ExitGames__Client__Photon__SendOptions);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    this_01 = (Dictionary_2_System_Byte_System_Object_ *)
              FUN_?(
                           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>
                           );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
    Dictionary_2_System_Byte_System_Object___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
              );
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).field_0x1c == 0)
    {
      FUN_?();
    }
    uVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
            ObscuredByte_InternalDecrypt(aOStackX_10,(MethodInfo *)0x0);
    aOStackX_10[0].currentCryptoKey = uVar6;
    value_00 = (Object *)FUN_?(uRam_?,aOStackX_10);
    if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
      pMVar7 = MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
               ->klass->rgctx_data[0x22].method;
      uVar8 = CONCAT71((int7)((ulonglong)pMVar7 >> 8),0x6a);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
      Dictionary_2_System_Byte_System_Object__TryInsert
                (this_01,0x6a,value_00,
                 (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)in_R9 >> 8),2),pMVar7);
      pPVar9 = (pMVar5->fields).peer;
      if (*(int *)&(TypeInfo__ExitGames__Client__Photon__SendOptions->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__ExitGames__Client__Photon__SendOptions);
      }
      if (pPVar9 != (PhotonPeer *)0x0) {
        (*(pPVar9->klass->vtable).SendOperation.methodPtr)
                  (pPVar9,CONCAT71((int7)((ulonglong)uVar8 >> 8),0x79),this_01,
                   TypeInfo__ExitGames__Client__Photon__SendOptions->static_fields->SendReliable,
                   (pPVar9->klass->vtable).SendOperation.method);
        pGVar10 = (this->fields).gameObject;
        this_02 = (ExecuteEvents_EventFunction_1_System_Object_ *)
                  FUN_?(
                               TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                               );
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents+EventFunction`1[System::Object]
        ::ExecuteEvents_EventFunction_1_System_Object___ctor
                  (this_02,(Object *)this,
                   MethodInfo__CubeModelingStateMachine___set_CurrentMaterialId_b__23_0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
                   ,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?();
        }
        pMVar7 = 
        UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
        ;
        if ((
            UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
            ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
          FUN_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Count__
                       );
          LOCK();
          UNLOCK();
          FUN_?(&
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Transform>__get_Item_int_
                       );
          LOCK();
          UNLOCK();
          if ((pMVar7->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
            FUN_?(pMVar7);
          }
        }
        if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0) {
          FUN_?(TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
        }
        UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_GetEventChain
                  (pGVar10,(IList_1_UnityEngine_Transform_ *)
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                           s_InternalTransformList,(MethodInfo *)0x0);
        pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                 s_InternalTransformList;
        if (pLVar11 != (List_1_UnityEngine_Transform_ *)0x0) {
          lVar12 = (longlong)(pLVar11->fields)._size;
          uVar13 = 0;
          if (0 < lVar12) {
            lVar14 = 0;
            lVar15 = 0x20;
            do {
              if (*(int *)&(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).field_0x1c == 0)
              {
                FUN_?();
              }
              pLVar11 = TypeInfo__UnityEngine__EventSystems__ExecuteEvents->static_fields->
                       s_InternalTransformList;
              if (pLVar11 == (List_1_UnityEngine_Transform_ *)0x0) goto code_?;
              if ((uint)(pLVar11->fields)._size <= uVar13) {
                mscorlib.dll::System::ThrowHelper::
                ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              pTVar17 = (pLVar11->fields)._items;
              if (pTVar17 == (Transform__Array *)0x0) goto code_?;
              if ((uint)pTVar17->max_length <= uVar13) {
                FUN_?();
                pcVar16 = (code *)swi(3);
                (*pcVar16)();
                return;
              }
              this_00 = *(Component **)((longlong)pTVar17->vector + lVar15 + -0x20);
              if (this_00 == (Component *)0x0) goto code_?;
              pGVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                                  (this_00,(MethodInfo *)0x0);
              bVar18 = UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::
                       ExecuteEvents_Execute_18
                                 (pGVar10,(BaseEventData *)0x0,this_02,
                                  (pMVar7->field7_0x38).rgctx_data[1].method);
              if (bVar18 != 0) {
                UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          (this_00,(MethodInfo *)0x0);
                return;
              }
              uVar13 = uVar13 + 1;
              lVar14 = lVar14 + 1;
              lVar15 = lVar15 + 8;
            } while (lVar14 < lVar12);
          }
          return;
        }
code_?:
        FUN_?();
        pcVar16 = (code *)swi(3);
        (*pcVar16)();
        return;
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
               (CubeModelingStateMachine *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__CubeModelTool,CONCAT71(in_register_00000011,value));
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (this->fields)._.currentState;
  if (pIVar1 != (IState *)0x0) {
    pIVar2 = pIVar1->klass;
    bVar3 = (TypeInfo__CubeModelTool->_1).naturalAligment;
    if ((bVar3 <= (pIVar2->_1).naturalAligment) &&
       ((pIVar2->_1).typeHierarchy[(ulonglong)bVar3 - 1] == (Il2CppClass *)TypeInfo__CubeModelTool))
    {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)pIVar2[1]._0.declaringType)(pIVar1,value,pIVar2[1]._0.parent);
      return;
    }
    FUN_?(pIVar1,TypeInfo__CubeModelTool);
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

