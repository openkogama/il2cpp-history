
/* EditCubeChange AddCube() */

EditCubeChange__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_AddCube
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = (this->fields)._SelectedCube_k__BackingField;
  if (pCVar1 != (CubePickingInfo *)0x0) {
    pCVar2 = (pCVar1->fields).cube;
    FVar3 = (pCVar1->fields).pickedFace;
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?(TypeInfo__Cube);
    }
    bVar4 = Cube::Cube_IsFaceBoxSideAligened(pCVar2,FVar3,(MethodInfo *)0x0);
    pCVar1 = (this->fields)._SelectedCube_k__BackingField;
    if (bVar4 == 0) {
      if (pCVar1 != (CubePickingInfo *)0x0) {
        IVar5 = (pCVar1->fields).iLocalPos;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        pMVar6 = (this->fields)._TargetCubeModel_k__BackingField;
        if (pMVar6 != (MVCubeModelBase *)0x0) {
          gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                 ((DayNightCycle *)pMVar6,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
            func_?(TypeInfo__AudioEventHandler);
          }
          AudioEventHandler::AudioEventHandler_PlaySound
                    (AudioActions__Enum_FaceMoved,IVar5,(GameObject *)gameObject,(MethodInfo *)0x0)
          ;
          pCVar1 = (this->fields)._SelectedCube_k__BackingField;
          if ((pCVar1 != (CubePickingInfo *)0x0) &&
             (pMVar6 = (this->fields)._TargetCubeModel_k__BackingField,
             pMVar6 != (MVCubeModelBase *)0x0)) {
            MVCubeModelBase::MVCubeModelBase_UnIndentCubeFace
                      (pMVar6,(pCVar1->fields).iLocalPos,(pCVar1->fields).pickedFace,
                       (pCVar1->fields).cube,(MethodInfo *)0x0);
            return EditCubeChange__Enum_CubeUnindented;
          }
        }
      }
    }
    else if (pCVar1 != (CubePickingInfo *)0x0) {
      iStack_7 = (pCVar1->fields).iLocalPos.z;
      uVar8 = (pCVar1->fields).iLocalPos.x;
      uVar9 = (pCVar1->fields).iLocalPos.y;
      FVar3 = (pCVar1->fields).pickedFace;
      uStack_10 = uVar8;
      uStack_11 = uVar9;
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      uStack_12 = 0;
      sStack_13 = 0;
      func_?(&uStack_12,uVar8,uStack_11,iStack_7,0);
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?((short)TypeInfo__Cube);
      }
      pVVar14 = Cube::Cube_GetFaceAxis((Vector3 *)&stack0xffffffd8,FVar3,(MethodInfo *)0x0);
      uVar15 = pVVar14->x;
      uVar16 = pVVar14->y;
      fVar17 = pVVar14->z;
      iStack_7 = SUB42(fVar17,0);
      uStack_18 = (undefined2)((uint)fVar17 >> 0x10);
      uStack_10 = (undefined2)uVar16;
      uStack_11 = (undefined2)((uint)uVar16 >> 0x10);
      uStack_12 = CONCAT22(uStack_12._2_2_ + (short)(int)(float)uVar16,
                           (short)uStack_12 + (short)(int)(float)uVar15);
      sVar19 = sStack_13 + (short)(int)fVar17;
      fStack_20 = (float)uVar15;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      pMVar6 = (this->fields)._TargetCubeModel_k__BackingField;
      if (pMVar6 != (MVCubeModelBase *)0x0) {
        IVar21 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                           ((MVWorldObjectClient *)pMVar6,(MethodInfo *)0x0);
        uVar22 = uStack_12;
        if (((IVar21 & InteractionFlags__Enum_IsTerrain) == InteractionFlags__Enum_CanRespawn) &&
           (pIVar23 = (this->fields).constraint, pIVar23 != (IModelingConstraint *)0x0)) {
          cVar24 = func_?(0,(short)TypeInfo__IModelingConstraint,pIVar23,uStack_12,sVar19);
          if (cVar24 == '\0') {
            uStack_12 = uVar22;
            sStack_13 = sVar19;
            arg1 = (Object *)func_?((short)TypeInfo__MV__WorldObject__IntVector,&uStack_12)
            ;
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            message = mscorlib.dll::System::String::String_Concat_1
                                ((Object *)StringLiteral_Pos_,arg1,
                                 (Object *)StringLiteral__not_within_constraint_,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                      ((Object *)message,(MethodInfo *)0x0);
            return EditCubeChange__Enum_None;
          }
        }
        uVar25 = uStack_12;
        pMVar6 = (this->fields)._TargetCubeModel_k__BackingField;
        if (pMVar6 != (MVCubeModelBase *)0x0) {
          IVar5.z = sVar19;
          uStack_12._0_2_ = (short)uVar22;
          uStack_12._2_2_ = SUB42(uVar22,2);
          IVar5.x = (short)uStack_12;
          IVar5.y = uStack_12._2_2_;
          uStack_12 = uVar25;
          pCVar2 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar6,IVar5,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) !=
               0) && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
            func_?();
          }
          bVar4 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                             ((CubeBase *)pCVar2,(CubeBase *)0x0,(MethodInfo *)0x0);
          uVar25 = uStack_12;
          if (bVar4 == 0) {
            return EditCubeChange__Enum_None;
          }
          pos.z = sVar19;
          uStack_12._0_2_ = (short)uVar22;
          uStack_12._2_2_ = SUB42(uVar22,2);
          pos.x = (short)uStack_12;
          pos.y = uStack_12._2_2_;
          uStack_12 = uVar25;
          CubeModelingStateMachine_HandleAudio
                    (this,pos,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
          pMVar6 = (this->fields)._TargetCubeModel_k__BackingField;
          iStack_7 = (int16_t)pMVar6;
          uStack_18 = (undefined2)((uint)pMVar6 >> 0x10);
          pCVar1 = (this->fields)._SelectedCube_k__BackingField;
          if (pCVar1 != (CubePickingInfo *)0x0) {
            pBStack_26 = (Byte__Array *)(pCVar1->fields).pickedFace;
            pCVar2 = (pCVar1->fields).cube;
            if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__Cube->_1).cctor_started == 0)) {
              func_?(TypeInfo__Cube);
            }
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            if (pCVar2 != (Cube *)0x0) {
              pVVar27 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                                  ((CubeBase *)pCVar2,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__Cube->_1).cctor_started == 0)) {
                func_?(TypeInfo__Cube);
              }
              pBVar28 = pBStack_26;
              pVVar27 = Cube::Cube_GetFace_1(pVVar27,(Face__Enum)pBStack_26,(MethodInfo *)0x0);
              this_00 = (List_1_VoxelHit_ *)
                        Cube::Cube_GetCorners_2(pVVar27,(Face__Enum)pBVar28,(MethodInfo *)0x0);
              if (this_00 != (List_1_VoxelHit_ *)0x0) {
                corners = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                          List_1_VoxelHit__ToArray
                                    (this_00,
                                     MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__ToArray__
                                    );
                if ((((uint)(TypeInfo__MV__WorldObject__CubeDataPacker->vtable).Equals.methodPtr &
                     0x2000000) != 0) &&
                   ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MV__WorldObject__CubeDataPacker);
                }
                pBStack_26 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                            CubeDataPacker_CornersToByteArray
                                      ((Vector3__Array *)corners,(MethodInfo *)0x0);
                if (cRam_? == '\0') {
                  func_?();
                  cRam_? = '\x01';
                }
                value = (this->fields).currentMaterialId;
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started
                    == 0)) {
                  func_?();
                }
                material = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                           ObscuredByte::ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
                pBVar28 = Cube::Cube_CreateMaterialArray(material,(MethodInfo *)0x0);
                pCVar2 = (Cube *)func_?();
                Cube::Cube__ctor(pCVar2,pBStack_26,pBVar28,(MethodInfo *)0x0);
                if ((MVCubeModelBase *)CONCAT22(uStack_18,iStack_7) != (MVCubeModelBase *)0x0) {
                  pos_00.z = sVar19;
                  pos_00.x = (short)uStack_12;
                  pos_00.y = uStack_12._2_2_;
                  MVCubeModelBase::MVCubeModelBase_AddCube
                            ((MVCubeModelBase *)CONCAT22(uStack_18,iStack_7),pos_00,
                             (CubeBase *)pCVar2,(MethodInfo *)0x0);
                  return EditCubeChange__Enum_CubeAdded;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar29 = (code *)swi(3);
  EVar30 = (*pcVar29)();
  return EVar30;
}


/* Boolean CanAddCubeAt(IntVector) */

bool Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
               (CubeModelingStateMachine *this,IntVector requestedCubePos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_ESI >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_00 != (MVCubeModelBase *)0x0) {
    IVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this_00,(MethodInfo *)0x0);
    if (((IVar2 & InteractionFlags__Enum_IsTerrain) == InteractionFlags__Enum_CanRespawn) &&
       (pIVar3 = (this->fields).constraint, pIVar3 != (IModelingConstraint *)0x0)) {
      bVar4 = func_?(0,TypeInfo__IModelingConstraint,pIVar3,requestedCubePos._0_4_,
                              CONCAT22(uVar1,requestedCubePos.z));
      if (bVar4 == 0) {
        puStack_5 = (undefined *)requestedCubePos._0_4_;
        arg1 = (Object *)func_?(TypeInfo__MV__WorldObject__IntVector,&puStack_5);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat_1
                            ((Object *)StringLiteral_Pos_,arg1,
                             (Object *)StringLiteral__not_within_constraint_,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)message,(MethodInfo *)0x0);
      }
      return bVar4;
    }
    return 1;
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar4 = (*pcVar6)();
  return bVar4;
}


/* Boolean CanEditCubeAt(IntVector) */

bool Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanEditCubeAt
               (CubeModelingStateMachine *this,IntVector requestedCubePos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_EBP >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_00 != (MVCubeModelBase *)0x0) {
    IVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this_00,(MethodInfo *)0x0);
    if (((IVar2 & InteractionFlags__Enum_IsTerrain) == InteractionFlags__Enum_CanRespawn) &&
       (pIVar3 = (this->fields).constraint, pIVar3 != (IModelingConstraint *)0x0)) {
      bVar4 = func_?(2,TypeInfo__IModelingConstraint,pIVar3,requestedCubePos._0_4_,
                              CONCAT22(uVar1,requestedCubePos.z));
      return bVar4;
    }
    return 1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* Boolean CanRemoveCubeAt(IntVector) */

bool Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
               (CubeModelingStateMachine *this,IntVector requestedCubePos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)unaff_EBP >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_00 != (MVCubeModelBase *)0x0) {
    IVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                      ((MVWorldObjectClient *)this_00,(MethodInfo *)0x0);
    if (((IVar2 & InteractionFlags__Enum_IsTerrain) == InteractionFlags__Enum_CanRespawn) &&
       (pIVar3 = (this->fields).constraint, pIVar3 != (IModelingConstraint *)0x0)) {
      bVar4 = func_?(1,TypeInfo__IModelingConstraint,pIVar3,requestedCubePos._0_4_,
                              CONCAT22(uVar1,requestedCubePos.z));
      return bVar4;
    }
    return 1;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar4 = (*pcVar5)();
  return bVar4;
}


/* CubeModelingStateMachine+HoverType CurrentlyHovered() */

CubeModelingStateMachine_HoverType__Enum
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_CurrentlyHovered
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  pCVar1 = (this->fields)._SelectedCube_k__BackingField;
  if (pCVar1 == (CubePickingInfo *)0x0) {
    return CubeModelingStateMachine_HoverType__Enum_None;
  }
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCStack_1 = (CubePickingInfo *)0x0;
  method_00 = TypeInfo__CubePickingInfo;
  pCVar2 = (CubePickingInfo *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)pCVar2,0.0,(MethodInfo *)method_00);
  pCStack_1 = pCVar2;
  bVar3 = EditModeObjectPicker::EditModeObjectPicker_GetPickingInfo
                    ((this->fields)._TargetCubeModel_k__BackingField,&pCStack_1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return (CubePickingInfo *)0x0;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_5,(MethodInfo *)0x0);
  fVar6 = pVVar4->x;
  fVar7 = pVVar4->y;
  fVar8 = pVVar4->z;
  bVar3 = DrawPlane::DrawPlane_Pick((Vector3 *)&stack0xffffffd8,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return pCStack_1;
  }
  VStack_5.z = fVar7;
  VStack_5.y = fVar6;
  pCVar9 = (this->fields).mainCamera;
  if ((pCVar9 != (Camera *)0x0) &&
     (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pCVar9,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0)) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffb4,pTVar10,(MethodInfo *)0x0);
    uStack_11._0_4_ = pVVar4->x;
    uStack_11._4_4_ = pVVar4->y;
    fVar6 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar8;
    a.x = VStack_5.y;
    a.y = VStack_5.z;
    b.z = fVar6;
    b.x = (float)(undefined4)uStack_11;
    b.y = uStack_11._4_4_;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
              ((Vector3 *)&stack0xffffffb4,a,b,(MethodInfo *)0x0);
    fVar12 = (float10)func_?();
    if (pCStack_1 != (CubePickingInfo *)0x0) {
      VStack_5.y = (pCStack_1->fields).point.x;
      VStack_5.z = (pCStack_1->fields).point.y;
      fVar6 = (pCStack_1->fields).point.z;
      pCVar9 = (this->fields).mainCamera;
      if ((pCVar9 != (Camera *)0x0) &&
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pCVar9,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0))
      {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xffffffb4,pTVar10,(MethodInfo *)0x0);
        a_00.z = fVar6;
        a_00.x = VStack_5.y;
        a_00.y = VStack_5.z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)&stack0xffffffb4,a_00,*pVVar4,(MethodInfo *)0x0);
        uStack_11._4_4_ = (float)fVar12 - _UNK_?;
        fVar12 = (float10)func_?();
        if ((float)fVar12 <= uStack_11._4_4_) {
          return pCStack_1;
        }
        return (CubePickingInfo *)0x0;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pCVar2 = (CubePickingInfo *)(*pcVar13)();
  return pCVar2;
}


/* Void EndEdit() */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_EndEdit
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  this_00 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_00 != (MVCubeModelBase *)0x0) {
    MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_00,0,(MethodInfo *)0x0);
    (this->fields)._TargetCubeModel_k__BackingField = (MVCubeModelBase *)0x0;
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
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  if (action == AudioActions__Enum_CubeAdded) {
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      pCVar2 = MVCubeModelBase::MVCubeModelBase_GetCube(pMVar1,pos,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                        ((CubeBase *)pCVar2,(CubeBase *)0x0,(MethodInfo *)0x0);
      if (bVar3 != 0) {
        pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
        if (pMVar1 == (MVCubeModelBase *)0x0) goto code_?;
        pCVar4 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
          func_?(TypeInfo__AudioEventHandler);
        }
        AudioEventHandler::AudioEventHandler_PlaySound
                  (AudioActions__Enum_CubeAdded,pos,(GameObject *)pCVar4,(MethodInfo *)0x0);
      }
      return;
    }
  }
  else if (action == AudioActions__Enum_FaceMoved) {
    pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      pCVar4 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
        func_?(TypeInfo__AudioEventHandler);
      }
      AudioEventHandler::AudioEventHandler_PlaySound
                (AudioActions__Enum_FaceMoved,pos,(GameObject *)pCVar4,(MethodInfo *)0x0);
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
      if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0)
         && ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      bVar3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Inequality
                        ((CubeBase *)pCVar2,(CubeBase *)0x0,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
      pMVar1 = (this->fields)._TargetCubeModel_k__BackingField;
      if (pMVar1 != (MVCubeModelBase *)0x0) {
        pCVar4 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)pMVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__AudioEventHandler->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__AudioEventHandler->_1).cctor_started == 0)) {
          func_?(TypeInfo__AudioEventHandler);
        }
        AudioEventHandler::AudioEventHandler_PlaySound
                  (AudioActions__Enum_CubeRemoved,pos,(GameObject *)pCVar4,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RemoveCursors() */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_RemoveCursors
               (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_set_visible(1,(MethodInfo *)0x0);
  pCVar1 = TypeInfo__CubeModelTool;
  pIVar2 = (this->fields)._.currentState;
  if (pIVar2 == (IState *)0x0) {
    func_?(0);
    pIVar2 = extraout_EDX;
  }
  else {
    bVar3 = (TypeInfo__CubeModelTool->_1).naturalAligment;
    pIVar4 = pIVar2->klass;
    bVar5 = (pIVar4->_1).naturalAligment;
    if ((bVar5 < bVar3) ||
       ((pIVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__CubeModelTool)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pIVar7 = (IState *)0x0;
    if (bVar6) {
      pIVar7 = pIVar2;
    }
    if (pIVar7 != (IState *)0x0) {
      if ((bVar5 < bVar3) ||
         ((pIVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__CubeModelTool)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pIVar7 = (IState *)0x0;
      if (bVar6) {
        pIVar7 = pIVar2;
      }
      if (pIVar7 != (IState *)0x0) {
        (*(code *)pIVar7->klass[1]._0.methods)(pIVar7,pIVar7->klass[1]._0.nestedTypes);
        return;
      }
    }
  }
  func_?(pIVar2,pCVar1);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void StartEdit(MVCubeModelBase, IModelingConstraint) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_StartEdit
               (CubeModelingStateMachine *this,MVCubeModelBase *targetCubeModel,
               IModelingConstraint *constraint,MethodInfo *method)

{
  this_00 = (this->fields)._TargetCubeModel_k__BackingField;
  if (this_00 != (MVCubeModelBase *)0x0) {
    MVCubeModelBase::MVCubeModelBase_set_BeingEdited(this_00,0,(MethodInfo *)0x0);
  }
  (this->fields)._TargetCubeModel_k__BackingField = targetCubeModel;
  (this->fields).constraint = constraint;
  if (targetCubeModel != (MVCubeModelBase *)0x0) {
    MVCubeModelBase::MVCubeModelBase_set_BeingEdited(targetCubeModel,1,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0) {
    if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Debug);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
              ((Object *)StringLiteral_Not_set,(MethodInfo *)0x0);
    return;
  }
  pCVar1 = CubeModelingStateMachine_DoPicking(this,(MethodInfo *)0x0);
  (this->fields)._SelectedCube_k__BackingField = pCVar1;
  EditorStateMachine::EditorStateMachine_Update((EditorStateMachine *)this,(MethodInfo *)0x0);
  if ((this->fields)._TargetCubeModel_k__BackingField == (MVCubeModelBase *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  rpcm = *(RuntimePrototypeCubeModel **)(in_stack_3 + 0xd0);
  if (rpcm == (RuntimePrototypeCubeModel *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  uStack4 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pDVar5 = (rpcm->fields).deltaCubes;
  while (pDVar5 != (DeltaCubes *)0x0) {
    iVar6 = DeltaCubes::DeltaCubes_get_Count(pDVar5,(MethodInfo *)0x0);
    if (iVar6 < 1) {
      return;
    }
    pDVar5 = (rpcm->fields).deltaCubes;
    if (pDVar5 == (DeltaCubes *)0x0) break;
    prototypeData = DeltaCubes::DeltaCubes_Dequeue(pDVar5,rpcm,(MethodInfo *)0x0);
    if (prototypeData != (Byte__Array *)0x0) {
      iVar7 = (rpcm->fields).prototypeState;
      if (iVar7 == 0) {
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests
                            ((MethodInfo *)0x0);
        if (this_01 == (MVNetworkGame_OperationRequests *)0x0) break;
        MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdatePrototype
                  (this_01,(rpcm->fields).prototypeId,prototypeData,(MethodInfo *)0x0);
      }
      else if (iVar7 == 1) {
        this_00 = (List_1_VoxelHit_ *)(rpcm->fields).pendingDeltaCubes;
        if (this_00 == (List_1_VoxelHit_ *)0x0) break;
        mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__AddRange
                  (this_00,(IEnumerable_1_VoxelHit_ *)prototypeData,
                   MethodInfo__System__Collections__Generic__List<unsigned_char>__AddRange_System__Collections__Generic__IEnumerable<unsigned_char>_
                  );
      }
    }
    pDVar5 = (rpcm->fields).deltaCubes;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CubeModelingStateMachine(GameObject) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine__ctor
               (CubeModelingStateMachine *this,GameObject *gameObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_op_Implicit(0,(MethodInfo *)0x0);
  (this->fields).currentMaterialId = OVar1;
  (this->fields).useLasers = 1;
  FSMEntity::FSMEntity__ctor((FSMEntity *)this,(MethodInfo *)0x0);
  (this->fields).gameObject = gameObject;
  this_00 = (CubeModelingTransitionTable *)func_?(TypeInfo__CubeModelingTransitionTable);
  CubeModelingTransitionTable::CubeModelingTransitionTable__ctor(this_00,(MethodInfo *)0x0);
  (this->fields)._.transitionTable = (StateTransitionTable *)this_00;
  uStack_2 = 0;
  value = (Object *)func_?(TypeInfo__CubeModelingEvent,&uStack_2);
  FSMEntity::FSMEntity_set_Event((FSMEntity *)this,value,(MethodInfo *)0x0);
  pCVar3 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
  (this->fields).mainCamera = pCVar3;
  return;
}


/* Void <set_CurrentMaterialId>m__0(IHandleMaterial, BaseEventData) */

void Assembly-CSharp.dll::CubeModelingStateMachine::
     CubeModelingStateMachine__set_CurrentMaterialId_m__0
               (CubeModelingStateMachine *this,IHandleMaterial *x,BaseEventData *y,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).currentMaterialId;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
  ObscuredByte_op_Implicit_1(value,(MethodInfo *)0x0);
  if (x != (IHandleMaterial *)0x0) {
    func_?(0,TypeInfo__UnityEngine__EventSystems__IHandleMaterial,x);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Byte[] get_ByteCubeCorners() */

Byte__Array *
Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_get_ByteCubeCorners
          (CubeModelingStateMachine *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0);
  if (this_00 != (MaterialLoader *)0x0) {
    pSVar1 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
             NamedThemeAttribute_1_UnityEngine_Color__get_Name
                       ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_00,(MethodInfo *)0x0);
    return (Material *)pSVar1;
  }
  func_?();
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).currentMaterialId;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool;
  pIVar2 = (this->fields)._.currentState;
  if (pIVar2 == (IState *)0x0) {
    func_?(0);
    pIVar2 = extraout_ECX;
  }
  else {
    bVar3 = (TypeInfo__CubeModelTool->_1).naturalAligment;
    pIVar4 = pIVar2->klass;
    bVar5 = (pIVar4->_1).naturalAligment;
    if ((bVar5 < bVar3) ||
       ((pIVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__CubeModelTool)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pIVar7 = (IState *)0x0;
    if (bVar6) {
      pIVar7 = pIVar2;
    }
    if (pIVar7 != (IState *)0x0) {
      if ((bVar5 < bVar3) ||
         ((pIVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__CubeModelTool)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pIVar7 = (IState *)0x0;
      if (bVar6) {
        pIVar7 = pIVar2;
      }
      if (pIVar7 != (IState *)0x0) {
        bVar8 = (*(code *)pIVar7->klass[1]._0.castClass)(pIVar7,pIVar7->klass[1]._0.declaringType);
        return bVar8;
      }
    }
  }
  func_?(pIVar2,pCVar1);
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Void set_CurrentMaterialId(Byte) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
               (CubeModelingStateMachine *this,uint8_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MaterialsControllerEditMode->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MaterialsControllerEditMode->_1).cctor_started == 0)) {
    func_?(TypeInfo__MaterialsControllerEditMode);
  }
  TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial = value;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredByte);
  }
  OVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredByte::
          ObscuredByte_op_Implicit(value,(MethodInfo *)0x0);
  root = (this->fields).gameObject;
  (this->fields).currentMaterialId = OVar1;
  this_00 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
            func_?(
                           TypeInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>
                           );
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (this_00,(Object *)this,
             MethodInfo__CubeModelingStateMachine___set_CurrentMaterialId_m__0_UnityEngine__EventSystems__IHandleMaterial__UnityEngine__EventSystems__BaseEventData_
             ,
             MethodInfo__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>__EventFunction_System__Object__void__
            );
  if ((((uint)(TypeInfo__UnityEngine__EventSystems__ExecuteEvents->vtable).Equals.methodPtr &
       0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__EventSystems__ExecuteEvents->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.UI.dll::UnityEngine::EventSystems::ExecuteEvents::ExecuteEvents_ExecuteHierarchy_63
            (root,(BaseEventData *)0x0,(ExecuteEvents_EventFunction_1_IHandleToolTip_ *)this_00,
             UnityEngine__GameObject_MethodInfo__UnityEngine__EventSystems__ExecuteEvents__ExecuteHierarchy<UnityEngine::EventSystems::IHandleMaterial>_UnityEngine__GameObject__UnityEngine__EventSystems__BaseEventData__UnityEngine__EventSystems__ExecuteEvents__EventFunction<UnityEngine::EventSystems::IHandleMaterial>_
            );
  return;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::CubeModelingStateMachine::CubeModelingStateMachine_set_CursorVisible
               (CubeModelingStateMachine *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = TypeInfo__CubeModelTool;
  pIVar2 = (this->fields)._.currentState;
  if (pIVar2 == (IState *)0x0) {
    func_?(0);
    pIVar2 = extraout_ECX;
  }
  else {
    bVar3 = (TypeInfo__CubeModelTool->_1).naturalAligment;
    pIVar4 = pIVar2->klass;
    bVar5 = (pIVar4->_1).naturalAligment;
    if ((bVar5 < bVar3) ||
       ((pIVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__CubeModelTool)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    pIVar7 = (IState *)0x0;
    if (bVar6) {
      pIVar7 = pIVar2;
    }
    if (pIVar7 != (IState *)0x0) {
      if ((bVar5 < bVar3) ||
         ((pIVar4->_1).typeHierarchy[bVar3 - 1] != (Il2CppClass *)TypeInfo__CubeModelTool)) {
        bVar6 = false;
      }
      else {
        bVar6 = true;
      }
      pIVar7 = (IState *)0x0;
      if (bVar6) {
        pIVar7 = pIVar2;
      }
      if (pIVar7 != (IState *)0x0) {
        (*(code *)pIVar7->klass[1]._0.parent)(pIVar7,_value,pIVar7->klass[1]._0.generic_class);
        return;
      }
    }
  }
  func_?(pIVar2,pCVar1);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}

