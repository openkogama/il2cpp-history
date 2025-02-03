
/* EditCubeChange AddCube() */

EditCubeChange__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_AddCube
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  pCVar1 = this;
  uVar2 = (undefined2)((uint)in_stack_3 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
    func_?(0x8150);
    cRam_? = '\x01';
  }
  pCVar4 = (this->fields)._SelectedCube_k__BackingField;
  if (pCVar4 != (CubePickingInfo *)0x0) {
    pCVar5 = (pCVar4->fields).cube;
    FVar6 = (pCVar4->fields).pickedFace;
    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Cube);
    }
    bVar7 = Cube::Cube_IsFaceBoxSideAligened(pCVar5,FVar6,(MethodInfo *)0x0);
    pCVar4 = (this->fields)._SelectedCube_k__BackingField;
    if (bVar7 == 0) {
      if (pCVar4 != (CubePickingInfo *)0x0) {
        IVar8 = (pCVar4->fields).iLocalPos;
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (((pMVar9 != (MVNetworkGame *)0x0) &&
            (pCVar5 = (pCVar4->fields).cube, pCVar5 != (Cube *)0x0)) &&
           (pMVar10 = (pMVar9->fields)._MaterialRepository_k__BackingField,
           pMVar10 != (MVMaterialRepository *)0x0)) {
          bVar7 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                             (pMVar10,(pCVar5->fields)._.faceMaterials,(MethodInfo *)0x0);
          if (bVar7 == 0) goto code_?;
          CVar11 = CubeModelingStateMachine_CanAddCubeAt_1(this,IVar8,(MethodInfo *)0x0);
          if (CVar11 != CanPerformCubeActionResult__Enum_Yes) {
code_?:
            if (CVar11 != CanPerformCubeActionResult__Enum_UnlockMaterial) {
              return EditCubeChange__Enum_None;
            }
            goto code_?;
          }
          pCVar4 = (this->fields)._SelectedCube_k__BackingField;
          if (pCVar4 != (CubePickingInfo *)0x0) {
            uVar12 = (pCVar4->fields).iLocalPos.x;
            uVar13 = (pCVar4->fields).iLocalPos.y;
            IVar14.y = uVar13;
            IVar14.x = uVar12;
            this._2_2_ = (pCVar4->fields).iLocalPos.z;
            if (cRam_? == '\0') {
              this._2_2_ = 0x11b2;
              func_?();
              func_?();
              cRam_? = '\x01';
            }
            pMVar15 = (pCVar1->fields)._TargetCubeModel_k__BackingField;
            if (pMVar15 != (MVCubeModelBase *)0x0) {
              gameObject = (pMVar15->fields)._.gameObject;
              if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__AudioEventHandler);
              }
              IVar14.z = this._2_2_;
              AudioEventHandler::AudioEventHandler_PlaySound
                        (AudioActions__Enum_FaceMoved,IVar14,gameObject,(MethodInfo *)0x0);
              pCVar4 = (pCVar1->fields)._SelectedCube_k__BackingField;
              if ((pCVar4 != (CubePickingInfo *)0x0) &&
                 (pMVar15 = (pCVar1->fields)._TargetCubeModel_k__BackingField,
                 pMVar15 != (MVCubeModelBase *)0x0)) {
                MVCubeModelBase::MVCubeModelBase_UnIndentCubeFace
                          (pMVar15,(pCVar4->fields).iLocalPos,(pCVar4->fields).pickedFace,
                           (pCVar4->fields).cube,(MethodInfo *)0x0);
                return EditCubeChange__Enum_CubeUnindented;
              }
            }
          }
        }
      }
    }
    else if (pCVar4 != (CubePickingInfo *)0x0) {
      iVar16 = (pCVar4->fields).iLocalPos.z;
      uVar17 = (pCVar4->fields).iLocalPos.x;
      if (pCVar4 != (CubePickingInfo *)0x0) {
        method_00 = (MethodInfo *)(pCVar4->fields).pickedFace;
        if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Cube);
        }
        IVar8.z = uVar17;
        IVar8._0_4_ = &stack0xffffffe8;
        IVar8 = Cube::Cube_GetCubePosAboveFace(IVar8,CONCAT22(uVar2,iVar16),method_00);
        pIVar18 = IVar8._0_4_;
        pCVar4 = (this->fields)._SelectedCube_k__BackingField;
        iVar16 = pIVar18->z;
        uVar2 = pIVar18->x;
        uVar19 = pIVar18->y;
        IVar14 = *pIVar18;
        IVar20 = *pIVar18;
        IVar8 = *pIVar18;
        pMVar9 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((((pMVar9 != (MVNetworkGame *)0x0) && (pCVar4 != (CubePickingInfo *)0x0)) &&
            (pCVar5 = (pCVar4->fields).cube, pCVar5 != (Cube *)0x0)) &&
           (pMVar10 = (pMVar9->fields)._MaterialRepository_k__BackingField,
           pMVar10 != (MVMaterialRepository *)0x0)) {
          bVar7 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                             (pMVar10,(pCVar5->fields)._.faceMaterials,(MethodInfo *)0x0);
          if (bVar7 == 0) goto code_?;
          CVar11 = CubeModelingStateMachine_CanAddCubeAt_1(this,IVar8,(MethodInfo *)0x0);
          if (CVar11 != CanPerformCubeActionResult__Enum_Yes) goto code_?;
          pMVar15 = (this->fields)._TargetCubeModel_k__BackingField;
          if (pMVar15 != (MVCubeModelBase *)0x0) {
            pCVar5 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar15,IVar20,(MethodInfo *)0x0);
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
            }
            bVar7 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                               ((CubeBase *)pCVar5,(CubeBase *)0x0,(MethodInfo *)0x0);
            if (bVar7 == 0) {
              return EditCubeChange__Enum_None;
            }
            CubeModelingStateMachine_HandleAudio
                      (this,IVar14,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
            pCVar4 = (this->fields)._SelectedCube_k__BackingField;
            pMVar15 = (this->fields)._TargetCubeModel_k__BackingField;
            if (pCVar4 != (CubePickingInfo *)0x0) {
              pCVar5 = (pCVar4->fields).cube;
              FVar6 = (pCVar4->fields).pickedFace;
              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__Cube);
              }
              corners = Cube::Cube_GetCorners(pCVar5,FVar6,(MethodInfo *)0x0);
              if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
              }
              byteCorners = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                            CubeDataPacker_CornersToByteArray(corners,(MethodInfo *)0x0);
              material = CubeModelingStateMachine_get_CurrentMaterialId(this,(MethodInfo *)0x0);
              faceMaterials = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
              pCVar5 = (Cube *)func_?(TypeInfo__Cube);
              Cube::Cube__ctor(pCVar5,byteCorners,faceMaterials,(MethodInfo *)0x0);
              if (pMVar15 != (MVCubeModelBase *)0x0) {
                IVar20.y = uVar19;
                IVar20.x = uVar2;
                IVar20.z = iVar16;
                MVCubeModelBase::MVCubeModelBase_AddCube
                          (pMVar15,IVar20,(CubeBase *)pCVar5,(MethodInfo *)0x0);
                return EditCubeChange__Enum_CubeAdded;
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  uVar2 = func_?(&
                          TypeInfo__UnityEngine__EventSystems__EditorStateMachine__CubeModelingStateMachine__UnlockMaterialException
                         );
  this_00 = (UnlockMaterialException *)func_?(uVar2);
  Assembly-CSharp.dll::UnityEngine::EventSystems::EditorStateMachine::CubeModelingStateMachine::
  UnlockMaterialException::UnlockMaterialException__ctor(this_00,(MethodInfo *)0x0);
  uVar21 = func_?(&MethodInfo__CubeModelingStateMachine__AddCube__);
  func_?(this_00,uVar21);
  pcVar22 = (code *)swi(3);
  EVar23 = (*pcVar22)();
  return EVar23;
}


/* CanPerformCubeActionResult CanAddCubeAt(IntVector, CubePickingInfo) */

CanPerformCubeActionResult__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
          (CubeModelingStateMachine *this,IntVector requestedCubePos,CubePickingInfo *requestedCube,
          MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((((pMVar1 != (MVNetworkGame *)0x0) && (requestedCube != (CubePickingInfo *)0x0)) &&
      (pCVar2 = (requestedCube->fields).cube, pCVar2 != (Cube *)0x0)) &&
     (this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    bVar3 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked
                      (this_00,(pCVar2->fields)._.faceMaterials,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      CVar4 = CubeModelingStateMachine_CanAddCubeAt_1(this,requestedCubePos,(MethodInfo *)0x0);
      return CVar4;
    }
    return CanPerformCubeActionResult__Enum_UnlockMaterial;
  }
  uVar5 = func_?(&stack0xfffffff4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  CVar4 = (*pcVar6)();
  return CVar4;
}


/* CanPerformCubeActionResult CanAddCubeAt(IntVector) */

CanPerformCubeActionResult__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
          (CubeModelingStateMachine *this,IntVector requestedCubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IModelingConstraint);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&StringLiteral__not_within_constraint_);
    func_?(&StringLiteral_Pos_);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
  if (pMVar1 != (MVCubeModelBase *)0x0) {
    if ((((pMVar1->fields)._.interactionFlags & 4) == 0) &&
       ((this->fields).constraint != (IModelingConstraint *)0x0)) {
      cVar2 = func_?(0,TypeInfo__IModelingConstraint,(this->fields).constraint,
                              requestedCubePos._0_4_,requestedCubePos.z);
      if (cVar2 == '\0') {
        uStack_3._0_2_ = requestedCubePos.x;
        uStack_3._2_2_ = requestedCubePos.y;
        uStack_3._4_4_ = (undefined *)CONCAT22(uStack_3._6_2_,requestedCubePos.z);
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        pSVar4 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_ToString
                           ((IntVector *)&uStack_3,(MethodInfo *)0x0);
        pSVar4 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_Pos_,pSVar4,StringLiteral__not_within_constraint_,
                            (MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        uStack_3._4_4_ = &UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)pSVar4,(MethodInfo *)0x0);
        return CanPerformCubeActionResult__Enum_No;
      }
    }
    return CanPerformCubeActionResult__Enum_Yes;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  CVar6 = (*pcVar5)();
  return CVar6;
}


/* Boolean CanEditCubeAt(IntVector) */

bool Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanEditCubeAt
               (CubeModelingStateMachine *this,IntVector requestedCubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    ppIStack_1 = &TypeInfo__IModelingConstraint;
    func_?();
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._TargetCubeModel_k__BackingField;
  if (pMVar2 != (MVCubeModelBase *)0x0) {
    if ((((pMVar2->fields)._.interactionFlags & 4) == 0) &&
       ((this->fields).constraint != (IModelingConstraint *)0x0)) {
      pIStack_3 = (this->fields).constraint;
      puStack_4 = (undefined *)requestedCubePos._0_4_;
      ppIStack_1 = (IModelingConstraint__Class **)CONCAT22(ppIStack_1._2_2_,requestedCubePos.z);
      bVar5 = func_?(2,TypeInfo__IModelingConstraint);
      return bVar5;
    }
    return 1;
  }
  ppIStack_1 = (IModelingConstraint__Class **)&stack0xfffffffc;
  uVar6 = func_?(&pIStack_3);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  bVar5 = (*pcVar7)();
  return bVar5;
}


/* CanPerformCubeActionResult CanRemoveCubeAt(CubePickingInfo) */

CanPerformCubeActionResult__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
          (CubeModelingStateMachine *this,CubePickingInfo *requestedCube,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IModelingConstraint);
    cRam_? = '\x01';
  }
  if (requestedCube != (CubePickingInfo *)0x0) {
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      if ((((pMVar1->fields)._.interactionFlags & 4) == 0) &&
         ((this->fields).constraint != (IModelingConstraint *)0x0)) {
        uVar2._0_2_ = (requestedCube->fields).iLocalPos.x;
        uVar2._2_2_ = (requestedCube->fields).iLocalPos.y;
        cVar3 = func_?(1,TypeInfo__IModelingConstraint,(this->fields).constraint,uVar2,
                                (requestedCube->fields).iLocalPos.z);
        return (uint)(cVar3 == '\0');
      }
      return CanPerformCubeActionResult__Enum_Yes;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  CVar5 = (*pcVar4)();
  return CVar5;
}


/* CanPerformCubeActionResult CanReplaceCube(CubePickingInfo, Byte) */

CanPerformCubeActionResult__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanReplaceCube
          (CubeModelingStateMachine *this,CubePickingInfo *requestedCube,uint8_t materialId,
          MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._MaterialRepository_k__BackingField,
     this_00 != (MVMaterialRepository *)0x0)) {
    bVar2 = MVMaterialRepository::MVMaterialRepository_IsMaterialUnlocked_1
                      (this_00,materialId,(MethodInfo *)0x0);
    CVar3 = CanPerformCubeActionResult__Enum_UnlockMaterial;
    if (bVar2 != 0) {
      CVar3 = CanPerformCubeActionResult__Enum_Yes;
    }
    return CVar3;
  }
  uVar4 = func_?(&stack0xfffffff4);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  CVar3 = (*pcVar5)();
  return CVar3;
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
    func_?(&TypeInfo__CubePickingInfo);
    cRam_? = '\x01';
  }
  pCVar1 = (CubePickingInfo *)func_?(TypeInfo__CubePickingInfo);
  UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
  UxmlObjectListAttributeDescription`1[System::Object]::
  UxmlObjectListAttributeDescription_1_System_Object___ctor
            ((UxmlObjectListAttributeDescription_1_System_Object_ *)pCVar1,(MethodInfo *)0x0);
  pCStack_2 = pCVar1;
  bVar3 = EditModeObjectPicker::EditModeObjectPicker_GetPickingInfo
                    ((this->fields)._TargetCubeModel_k__BackingField,&pCStack_2,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return (CubePickingInfo *)0x0;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_5.x = (pVVar4->zeroVector).x;
  VStack_5.y = (pVVar4->zeroVector).y;
  VStack_5.z = (pVVar4->zeroVector).z;
  bVar3 = DrawPlane::DrawPlane_Pick(&VStack_5,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return pCStack_2;
  }
  this_00 = (this->fields).mainCamera;
  if ((this_00 != (Camera *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
              ((Vector3 *)&stack0xffffffd0,this_01,(MethodInfo *)0x0);
    fVar6 = (float10)func_?();
    if (pCStack_2 != (CubePickingInfo *)0x0) {
      fStack_7 = (float)fVar6 - _UNK_?;
      fVar6 = (float10)func_?();
      if ((float)fVar6 <= fStack_7) {
        return pCStack_2;
      }
      return (CubePickingInfo *)0x0;
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  pCVar1 = (CubePickingInfo *)(*pcVar8)();
  return pCVar1;
}


/* Void EndEdit() */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_EndEdit
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_00 != (MVCubeModelBase *)0x0) {
    MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_00,0,(MethodInfo *)0x0);
    (this->fields)._TargetCubeModel_k__BackingField = (MVCubeModelBase *)0x0;
    func_?(&(this->fields)._TargetCubeModel_k__BackingField,0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void HandleAudio(IntVector, AudioActions) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
               (CubeModelingStateMachine *this,IntVector pos,AudioActions__Enum action,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AudioEventHandler);
    func_?(0x81d0);
    cRam_? = '\x01';
  }
  if (action == AudioActions__Enum_CubeAdded) {
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      pCVar2 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar1,pos,(MethodInfo *)0x0);
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                        ((CubeBase *)pCVar2,(CubeBase *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
        if (pMVar1 == (MVCubeModelBase *)0x0) goto code_?;
        pGVar4 = (pMVar1->fields)._.gameObject;
        if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AudioEventHandler);
        }
        AudioEventHandler::AudioEventHandler_PlaySound
                  (AudioActions__Enum_CubeAdded,pos,pGVar4,(MethodInfo *)0x0);
      }
      return;
    }
  }
  else if (action == AudioActions__Enum_FaceMoved) {
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      pGVar4 = (pMVar1->fields)._.gameObject;
      if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__AudioEventHandler);
      }
      AudioEventHandler::AudioEventHandler_PlaySound
                (AudioActions__Enum_FaceMoved,pos,pGVar4,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    if (action != AudioActions__Enum_CubeRemoved) {
      return;
    }
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      pCVar2 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar1,pos,(MethodInfo *)0x0);
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                        ((CubeBase *)pCVar2,(CubeBase *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
      if (pMVar1 != (MVCubeModelBase *)0x0) {
        pGVar4 = (pMVar1->fields)._.gameObject;
        if ((TypeInfo__AudioEventHandler->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__AudioEventHandler);
        }
        AudioEventHandler::AudioEventHandler_PlaySound
                  (AudioActions__Enum_CubeRemoved,pos,pGVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveCursors() */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pCVar1 = TypeInfo__CubeModelTool;
  pIVar2 = (this->fields)._.currentState;
  if (pIVar2 == (IState *)0x0) {
    func_?();
    pIVar2 = extraout_EDX;
  }
  else if (((TypeInfo__CubeModelTool->_1).naturalAligment <= (pIVar2->klass->_1).naturalAligment) &&
          ((pIVar2->klass->_1).typeHierarchy[(TypeInfo__CubeModelTool->_1).naturalAligment - 1] ==
           (Il2CppClass *)TypeInfo__CubeModelTool)) {
    (*(code *)pIVar2->klass[1]._0.methods)(pIVar2);
    return;
  }
  func_?(pIVar2,pCVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  (this->fields)._TargetCubeModel_k__BackingField = targetCubeModel;
  func_?(&(this->fields)._TargetCubeModel_k__BackingField);
  (this->fields).constraint = constraint;
  func_?(&(this->fields).constraint,constraint);
  this_00 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_00 != (MVCubeModelBase *)0x0) {
    MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_00,1,(MethodInfo *)0x0);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this,(this->fields)._.curEvent,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
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
  (this->fields)._SelectedCube_k__BackingField = pCVar1;
  func_?(&(this->fields)._SelectedCube_k__BackingField);
  FSMEntity::FSMEntity_Update((FSMEntity *)this,(MethodInfo *)0x0);
  if (((this->fields)._TargetCubeModel_k__BackingField != (MVCubeModelBase *)0x0) &&
     (rpcm = *(RuntimePrototypeCubeModel **)(in_stack_2 + 0xd8),
     rpcm != (RuntimePrototypeCubeModel *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pDVar3 = (rpcm->fields).deltaCubes;
    while (pDVar3 != (DeltaCubes *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pQVar4 = (pDVar3->fields).cubeChange;
      if (pQVar4 == (Queue_1_KeyValuePair_2_MV_WorldObject_IntVector_MV_WorldObject_CubeAction_ *)
                    0x0) break;
      if ((pQVar4->fields)._size < 1) {
        return;
      }
      pDVar3 = (rpcm->fields).deltaCubes;
      if (pDVar3 == (DeltaCubes *)0x0) break;
      prototypeData = DeltaCubes::DeltaCubes_Dequeue(pDVar3,rpcm,(MethodInfo *)0x0);
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
          List_1_System_Byte__AddRange
                    (this_00,(IEnumerable_1_System_Byte_ *)prototypeData,
                     MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                    );
        }
      }
      pDVar3 = (rpcm->fields).deltaCubes;
    }
  }
  uVar5 = func_?(&stack0xfffffff4);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* CubeModelingStateMachine(GameObject) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine__ctor
               (CubeModelingStateMachine *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelingEvent);
    func_?(&TypeInfo__CubeModelingTransitionTable);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    cRam_? = '\x01';
  }
  this_00 = this;
  (this->fields).useLasers = 1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_op_Implicit(0x15,(MethodInfo *)0x0);
  (this_00->fields).currentMaterialId = OVar1;
  FSMEntity::FSMEntity__ctor((FSMEntity *)this_00,(MethodInfo *)0x0);
  (this_00->fields).gameObject = gameObject;
  func_?(&(this_00->fields).gameObject,gameObject);
  this_01 = (CubeModelingTransitionTable *)func_?(TypeInfo__CubeModelingTransitionTable);
  CubeModelingTransitionTable::CubeModelingTransitionTable__ctor(this_01,(MethodInfo *)0x0);
  (this_00->fields)._.transitionTable = (StateTransitionTable *)this_01;
  func_?(&(this_00->fields)._.transitionTable,this_01);
  this = (CubeModelingStateMachine *)0x0;
  value = (Object *)func_?(TypeInfo__CubeModelingEvent,&this);
  FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
  pCVar2 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this_00->fields).mainCamera = pCVar2;
  ppCStack3 = &(this_00->fields).mainCamera;
  method = (MethodInfo *)&UNK_?;
  func_?();
  return;
}


/* Void <set_CurrentMaterialId>b__23_0(IHandleMaterial, BaseEventData) */

void Assembly-CSharp.dll::CubeModelingStateMachine::
     CubeModelingStateMachine__set_CurrentMaterialId_b__23_0
               (CubeModelingStateMachine *this,IHandleMaterial *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__EventSystems__IHandleMaterial);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    cRam_? = '\x01';
  }
  value = (this->fields).currentMaterialId;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  uVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
  this = (CubeModelingStateMachine *)(uint)uVar1;
  if (x != (IHandleMaterial *)0x0) {
    pIVar2 = x->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pIVar2->_1).rank;
    uVar4._1_1_ = (pIVar2->_1).minimumAlignment;
    if (uVar4 != 0) {
      do {
        if (pIVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__UnityEngine__EventSystems__IHandleMaterial) {
          pIVar2 = x->klass;
          iVar5 = pIVar2->interfaceOffsets[uVar3].offset;
          (*(code *)(&(pIVar2->vtable).OnMaterialChanged)[iVar5].method)
                    (x,this,(&(pIVar2->vtable).ShowMaterialInventory)[iVar5].methodPtr);
          return;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    puVar6 = (undefined4 *)func_?(x,TypeInfo__UnityEngine__EventSystems__IHandleMaterial,0)
    ;
    (*(code *)*puVar6)(x,this,puVar6[1]);
    return;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Byte[] get_ByteCubeCorners() */

Byte__Array *
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_get_ByteCubeCorners
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pBVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityByteCorners
                     ((MethodInfo *)0x0);
  return pBVar1;
}


/* Vector3[] get_CubeCorners() */

Vector3__Array *
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_get_CubeCorners
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__CubeBase);
  }
  pVVar1 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                     ((MethodInfo *)0x0);
  return pVVar1;
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
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  pMVar5 = (Material *)(*pcVar4)();
  return pMVar5;
}


/* Byte get_CurrentMaterialId() */

uint8_t Assembly-CSharp.dll::CubeModelingStateMachine::
        CubeModelingStateMachine_get_CurrentMaterialId
                  (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    cRam_? = '\x01';
  }
  value = (this->fields).currentMaterialId;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  uVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
  return uVar1;
}


/* Boolean get_CursorVisible() */

bool Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_get_CursorVisible
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool;
  pIVar2 = (this->fields)._.currentState;
  if (pIVar2 == (IState *)0x0) {
    func_?();
    pIVar2 = extraout_EDX;
  }
  else if (((TypeInfo__CubeModelTool->_1).naturalAligment <= (pIVar2->klass->_1).naturalAligment) &&
          ((pIVar2->klass->_1).typeHierarchy[(TypeInfo__CubeModelTool->_1).naturalAligment - 1] ==
           (Il2CppClass *)TypeInfo__CubeModelTool)) {
    bVar3 = (*(code *)pIVar2->klass[1]._0.castClass)(pIVar2,pIVar2->klass[1]._0.declaringType);
    return bVar3;
  }
  func_?(pIVar2,pCVar1);
  pcVar4 = (code *)swi(3);
  bVar3 = (*pcVar4)();
  return bVar3;
}


/* Void set_CurrentMaterialId(Byte) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
               (CubeModelingStateMachine *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__CubeModelingStateMachine___set_CurrentMaterialId_b__23_0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
                   );
    func_?(&
                    TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                   );
    func_?(&
                    UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
                   );
    func_?(&TypeInfo__UnityEngine__EventSystems__ExecuteEvents);
    func_?(&TypeInfo__MaterialsControllerEditMode);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
    cRam_? = '\x01';
  }
  TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial = value;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_op_Implicit(value,(MethodInfo *)0x0);
  (this->fields).currentMaterialId = OVar1;
  this_00 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame_OperationRequests *)0x0) {
    MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_ChangeMaterial
              (this_00,(this->fields).currentMaterialId,(MethodInfo *)0x0);
    root = (this->fields).gameObject;
    callbackFunction =
         (ExecuteEvents_EventFunction_1_System_Object_ *)
         func_?(
                        TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                        );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::Object]::
    UnityAction_2_System_Object_System_Object___ctor
              ((UnityAction_2_System_Object_System_Object_ *)callbackFunction,(Object *)this,
               MethodInfo__CubeModelingStateMachine___set_CurrentMaterialId_b__23_0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
               ,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy
              (root,(BaseEventData *)0x0,callbackFunction,
               UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
              );
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
               (CubeModelingStateMachine *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool;
  pIVar2 = (this->fields)._.currentState;
  if (pIVar2 == (IState *)0x0) {
    func_?();
    pIVar2 = extraout_EDX;
  }
  else if (((TypeInfo__CubeModelTool->_1).naturalAligment <= (pIVar2->klass->_1).naturalAligment) &&
          ((pIVar2->klass->_1).typeHierarchy[(TypeInfo__CubeModelTool->_1).naturalAligment - 1] ==
           (Il2CppClass *)TypeInfo__CubeModelTool)) {
    (*(code *)pIVar2->klass[1]._0.parent)(pIVar2,_value,pIVar2->klass[1]._0.generic_class);
    return;
  }
  func_?(pIVar2,pCVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

