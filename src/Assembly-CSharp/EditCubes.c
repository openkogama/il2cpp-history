
/* Void Enter(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Enter
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&TypeInfo__ModelCursor3D);
    cRam_? = '\x01';
  }
  (this->fields).delta = 0.0;
  (this->fields).deltaAccum = 0.0;
  if (e != (CubeModelingStateMachine *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeBase);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    cubeCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                            ((MethodInfo *)0x0);
    this_01 = (ModelCursor3D *)func_?(TypeInfo__ModelCursor3D);
    ModelCursor3D::ModelCursor3D__ctor(this_01,cubeCorners,(MethodInfo *)0x0);
    (this->fields).modelCursor = this_01;
    func_?(&(this->fields).modelCursor,this_01);
    pGVar1 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
    if (((pGVar1 != (GameEventManager *)0x0) &&
        (pGVar2 = (pGVar1->fields).AvatarCommandsBuildMode,
        pGVar2 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
       (this_00 = (pGVar2->fields).LaserCommands,
       this_00 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager::
      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ChangeState
                (this_00,LaserPointerState__Enum_EditingCube,(MethodInfo *)0x0);
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      bVar3 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                        (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      (this->fields)._.waitForMouseUp = bVar3;
      (this->fields).currentInternalState = 2;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* WARNING (jumptable): Unable to track spacebase fully for stack */
/* Void Execute(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Execute
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  puStack_3 = &stack0xfffffffc;
  uStack_4 = 0xffffffff;
  puStack_5 = &DAT_?;
  uStack_6 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_6;
  puStack_7 = &stack0xffffff00;
  puVar8 = &stack0xfffffffc;
  puVar9 = &stack0xffffff00;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    in_stack_10 = 0x119c;
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
    puVar8 = puStack_3;
    puVar9 = puStack_7;
  }
  puStack_7 = puVar9;
  puStack_3 = puVar8;
  MStack_11.methodPointer._0_1_ = 0;
  pVVar12 = (Vector3__Array *)0x0;
  iVar13 = 0;
  CStack_14 = CubeOutOfBoundState__Enum_WithinBounds;
  CStack_15 = CubeOutOfBoundState__Enum_WithinBounds;
  puStack_16 = (undefined *)0x0;
  if (cRam_? == '\0') {
    in_stack_10 = 0x1044;
    func_?();
    cRam_? = '\x01';
  }
  pCVar17 = TypeInfo__CubeModelTool->static_fields;
  if ((pCVar17->cubeChange != 0) &&
     (pCVar17->OnEditCubeChange != (Action_2_Int32_EditCubeChange_ *)0x0)) {
    in_stack_10 = (undefined2)((uint)pCVar17->cubeChange >> 0x10);
    (*(pCVar17->OnEditCubeChange->fields)._._.invoke_impl)();
  }
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  EVar18 = EditCubeChange__Enum_None;
  if ((this->fields)._.waitForMouseUp != 0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                       (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
    (this->fields)._.waitForMouseUp = bVar19;
    goto code_?;
  }
  pMVar20 = (this->fields).modelCursor;
  pCVar21 = (Cube *)MStack_11._17_4_;
  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
  pVVar23 = (Vector3__Array *)CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
  fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
  if (pMVar20 != (ModelCursor3D *)0x0) {
    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0 &&
        (pMVar20->fields).indentArea != (IndentArea *)0x0) {
      IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
      pVVar23 = (Vector3__Array *)CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
      fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
      if (e != (CubeModelingStateMachine *)0x0) {
        if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0)
        goto code_?;
        pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
        pIVar26 = (((this->fields).modelCursor)->fields).indentArea;
        IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
        pVVar23 = (Vector3__Array *)CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
        fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
        if ((pMVar25 != (MVCubeModelBase *)0x0) &&
           (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
           pVVar23 = (Vector3__Array *)
                     CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_),
           fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
           pIVar26 != (IndentArea *)0x0)) {
          pGVar27 = (pMVar25->fields)._.gameObject;
          in_stack_10 = (undefined2)((uint)pGVar27 >> 0x10);
          IndentArea::IndentArea_UpdateIndentArea
                    (pIVar26,(e->fields)._SelectedCube_k__BackingField,pGVar27,(MethodInfo *)0x0);
          pMVar20 = (this->fields).modelCursor;
          pCVar21 = (Cube *)MStack_11._17_4_;
          IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
          pVVar23 = (Vector3__Array *)CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_)
          ;
          fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
          if ((pMVar20 != (ModelCursor3D *)0x0) &&
             (pIVar26 = (pMVar20->fields).indentArea,
             IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
             pVVar23 = (Vector3__Array *)
                       CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_),
             fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
             pIVar26 != (IndentArea *)0x0)) {
            bVar19 = IndentArea::IndentArea_IsColliding(pIVar26,(MethodInfo *)0x0);
            pCVar21 = (Cube *)MStack_11._17_4_;
            if (bVar19 == 0) {
              pMVar20 = (this->fields).modelCursor;
              IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
              pVVar23 = (Vector3__Array *)
                        CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
              fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
              if (((pMVar20 != (ModelCursor3D *)0x0) &&
                  (pIVar26 = (pMVar20->fields).indentArea,
                  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                  pVVar23 = (Vector3__Array *)
                            CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_),
                  fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
                  pIVar26 != (IndentArea *)0x0)) &&
                 (pGVar27 = (pIVar26->fields).gameObject,
                 IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                 pVVar23 = (Vector3__Array *)
                           CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_),
                 fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
                 pGVar27 != (GameObject *)0x0)) {
                bVar19 = 0;
code_?:
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                          (pGVar27,bVar19,(MethodInfo *)0x0);
                goto code_?;
              }
            }
            else {
              pCVar28 = (e->fields)._SelectedCube_k__BackingField;
              IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
              pVVar23 = (Vector3__Array *)
                        CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
              fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
              if (pCVar28 != (CubePickingInfo *)0x0) {
                (pCVar28->fields).pickedEdge = 0;
                pMVar20 = (this->fields).modelCursor;
                IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                pVVar23 = (Vector3__Array *)
                          CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                if (((pMVar20 != (ModelCursor3D *)0x0) &&
                    (pIVar26 = (pMVar20->fields).indentArea,
                    IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                    pVVar23 = (Vector3__Array *)
                              CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_),
                    fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
                    pIVar26 != (IndentArea *)0x0)) &&
                   (pGVar27 = (pIVar26->fields).gameObject,
                   IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                   pVVar23 = (Vector3__Array *)
                             CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_),
                   fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
                   pGVar27 != (GameObject *)0x0)) {
                  bVar19 = 1;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
    else {
code_?:
      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
        in_stack_10 = 0x1044;
        func_?();
      }
      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        in_stack_10 = 0;
        MStack_11._37_4_ =
             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        (this->fields).prevMouseUpTime = (float)MStack_11._37_4_;
      }
      if (cRam_? == '\0') {
        in_stack_10 = 0x1044;
        func_?();
        cRam_? = '\x01';
      }
      pCVar21 = (Cube *)MStack_11._17_4_;
      IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
      pVVar23 = (Vector3__Array *)CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
      fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
      if (e != (CubeModelingStateMachine *)0x0) {
        if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
           ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) goto code_?;
        pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
        IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
        pVVar23 = (Vector3__Array *)CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
        fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
        if (pMVar25 != (MVCubeModelBase *)0x0) {
          MStack_11._33_4_ = (pMVar25->fields)._.gameObject;
          pCVar28 = (e->fields)._SelectedCube_k__BackingField;
          MStack_11._37_4_ = *(undefined4 *)&(pCVar28->fields).iLocalPos;
          MStack_11._27_2_ = (pCVar28->fields).iLocalPos.z;
          if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          IVar29.z = MStack_11._27_2_;
          IVar29._0_4_ = MStack_11._37_4_;
          pVVar30 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                              ((Vector3 *)&stack0xffffff48,(GameObject *)MStack_11._33_4_,IVar29,
                               (MethodInfo *)0x0);
          uVar31 = pVVar30->x;
          uVar32 = pVVar30->y;
          MStack_11.virtualMethodPointer._1_2_ = (short)uVar32;
          MStack_11._7_2_ = SUB42((uint)uVar32 >> 0x10,0);
          MStack_11.invoker_method._1_2_ = SUB42(pVVar30->z,0);
          MStack_11._11_2_ = SUB42((uint)pVVar30->z >> 0x10,0);
          MStack_11._1_4_ = uVar31;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager
                              ((MethodInfo *)0x0);
          pCVar21 = (Cube *)MStack_11._17_4_;
          IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
          pVVar23 = (Vector3__Array *)CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_)
          ;
          fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
          if (this_02 != (MainCameraManager *)0x0) {
            pTVar33 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this_02,(MethodInfo *)0x0);
            pCVar21 = (Cube *)MStack_11._17_4_;
            IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
            pVVar23 = (Vector3__Array *)
                      CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
            fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
            if (pTVar33 != (Transform *)0x0) {
              pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0xffffff48,pTVar33,(MethodInfo *)0x0);
              uVar34 = pVVar30->y;
              IStack_22.x = (int16_t)uVar34;
              IStack_22.y = (int16_t)((uint)uVar34 >> 0x10);
              IStack_22.z = SUB42(pVVar30->z,0);
              uStack_35 = (undefined2)((uint)pVVar30->z >> 0x10);
              fVar36 = (float10)func_?();
              pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
              MStack_11._37_4_ = (BADTYPE)fVar36;
              pCVar21 = (Cube *)MStack_11._17_4_;
              IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
              pVVar23 = (Vector3__Array *)
                        CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
              fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
              if (pMVar25 != (MVCubeModelBase *)0x0) {
                in_stack_10 = (undefined2)((uint)pMVar25 >> 0x10);
                puVar37 = (undefined8 *)(*(code *)(pMVar25->klass->vtable).get_Scale.method)();
                fStack_38 = (float)((ulonglong)*puVar37 >> 0x20);
                pMVar20 = (this->fields).modelCursor;
                pCVar21 = (Cube *)MStack_11._17_4_;
                if (fStack_38 * _UNK_? < (float)MStack_11._37_4_) {
                  (this->fields).mouseSensitivity = 0.1325;
                  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                  pVVar23 = (Vector3__Array *)
                            CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                  fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                  if ((pMVar20 != (ModelCursor3D *)0x0) &&
                     (pIVar26 = (pMVar20->fields).indentArea,
                     IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                     pVVar23 = (Vector3__Array *)
                               CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_),
                     fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
                     pIVar26 != (IndentArea *)0x0)) {
                    (pIVar26->fields).size = 1.0;
                    goto code_?;
                  }
                }
                else {
                  (this->fields).mouseSensitivity = 0.0225;
                  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                  pVVar23 = (Vector3__Array *)
                            CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                  fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                  if ((pMVar20 != (ModelCursor3D *)0x0) &&
                     (pIVar26 = (pMVar20->fields).indentArea,
                     IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                     pVVar23 = (Vector3__Array *)
                               CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_),
                     fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
                     pIVar26 != (IndentArea *)0x0)) {
                    (pIVar26->fields).size = 0.5;
code_?:
                    MStack_11.klass._0_1_ = '\0';
                    MStack_11._25_4_ = MStack_11._25_4_ & 0xffffff;
                    MStack_11._9_4_ = CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                    IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                    switch((this->fields).currentInternalState) {
                    case 0:
                      if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                        if (bVar19 == 0) {
                          if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          MStack_11._37_4_ =
                               MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                         (StringLiteral_Mouse_X,(MethodInfo *)0x0);
                          MStack_11._33_4_ =
                               MVInputWrapper::MVInputWrapper_GetAxisRawWithoutSensitivity
                                         (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                          fVar39 = (float)MStack_11._37_4_ * _UNK_?;
                          IStack_22.z = 0;
                          uStack_35 = 0;
                          IStack_22._0_4_ = (float)MStack_11._33_4_ * _UNK_?;
                          MStack_11._29_4_ = (e->fields)._TargetCubeModel_k__BackingField;
                          MStack_11._37_4_ = (this->fields).mouseSensitivity;
                          MStack_11._21_4_ = (this->fields).movingEdgeCube;
                          pCVar21 = (Cube *)MStack_11._17_4_;
                          pVVar23 = (Vector3__Array *)
                                    CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                          fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                          if ((Vector3__Array *)MStack_11._21_4_ != (Vector3__Array *)0x0) {
                            bVar19 = *(bool *)&((Vector3__Array *)MStack_11._21_4_)->vector[0].y;
                            MStack_11._34_3_ = SUB43((uint)MStack_11._33_4_ >> 8,0);
                            MStack_11.field8_0x20._1_1_ =
                                 (((this->fields).movingEdgeCube)->fields).pickedEdgeIndex1;
                            fVar24 = (float)IStack_22._0_4_;
                            if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0)
                            {
                              func_?();
                              fVar24 = (float)IStack_22._0_4_;
                            }
                            IStack_22.y = (int16_t)((uint)fVar24 >> 0x10);
                            IStack_22.x = SUB42(fVar24,0);
                            pMVar40 = &MStack_11;
                            showUnlockNotification = MStack_11.token._1_1_;
                            uVar41 = MStack_11._39_2_;
                            pGVar27 = (GameObject *)&(this->fields).deltaAccum;
                            mousePositionDelta.z._2_2_ = uStack_35;
                            mousePositionDelta.z._0_2_ = IStack_22.z;
                            mousePositionDelta.y =
                                 (float)(int)(CONCAT26(IStack_22.y,CONCAT24(IStack_22.x,fVar39)) >>
                                             0x20);
                            mousePositionDelta.x = fVar39;
                            IStack_22._0_4_ = fVar24;
                            MStack_11._37_4_ =
                                 SharedCubeFunctions::SharedCubeFunctions_MoveEdge
                                           ((MVCubeModelBase *)MStack_11._29_4_,
                                            (CubePickingInfo *)MStack_11._21_4_,mousePositionDelta,
                                            &(this->fields).delta,(float *)pGVar27,
                                            (float)MStack_11._37_4_,(bool *)pMVar40,bVar19,
                                            MStack_11.field8_0x20._1_1_,
                                            (EditCubeChange__Enum *)&stack0xffffff6c,
                                            (MethodInfo *)0x0);
                            if ((Vector3__Array *)MStack_11._37_4_ == (Vector3__Array *)0x0) {
                              pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                              pCVar21 = (Cube *)MStack_11._17_4_;
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if (pMVar25 == (MVCubeModelBase *)0x0) goto code_?;
                              iVar42 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                 (pMVar25,(MethodInfo *)0x0);
                              CubeModelTool::CubeModelTool_SendCubeEvent
                                        (iVar42,EVar18,(MethodInfo *)0x0);
                            }
                            if (((byte)MStack_11.methodPointer & (this->fields).edgeHasMoved == 0)
                                != 0) {
                              (this->fields).edgeHasMoved = 1;
                            }
                            pCVar21 = (Cube *)MStack_11._17_4_;
                            if ((Vector3__Array *)MStack_11._37_4_ == (Vector3__Array *)0x1) {
                              pCVar28 = (this->fields).movingEdgeCube;
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)MStack_11._9_4_;
                              if (pCVar28 != (CubePickingInfo *)0x0) {
                                MStack_11._37_4_ = *(undefined4 *)&(pCVar28->fields).iLocalPos;
                                MStack_11._27_2_ = (pCVar28->fields).iLocalPos.z;
                                MStack_11._33_4_ =
                                     (((this->fields).movingEdgeCube)->fields).pickedFace;
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos.z = MStack_11.token._1_2_;
                                localPos._0_4_ = &IStack_22;
                                IVar29 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos,CONCAT22(uVar1,MStack_11._27_2_),
                                                    (MethodInfo *)MStack_11._33_4_);
                                pIVar43 = IVar29._0_4_;
                                MStack_11._29_4_ = *(undefined4 *)pIVar43;
                                MStack_11._27_2_ = pIVar43->z;
                                MStack_11._33_4_ =
                                     CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                               (e,*pIVar43,(this->fields).movingEdgeCube,
                                                (MethodInfo *)0x0);
                                if ((MVCubeModelBase *)MStack_11._33_4_ == (MVCubeModelBase *)0x0) {
                                  pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (pMVar25 != (MVCubeModelBase *)0x0) {
                                    pos.z = MStack_11._27_2_;
                                    pos._0_4_ = MStack_11._29_4_;
                                    MStack_11._37_4_ =
                                         MVCubeModelBase::MVCubeModelBase_GetCube
                                                   (pMVar25,pos,(MethodInfo *)0x0);
                                    if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?(TypeInfo__MV__WorldObject__CubeBase);
                                    }
                                    bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                             CubeBase_op_Equality
                                                       ((CubeBase *)MStack_11._37_4_,(CubeBase *)0x0
                                                        ,(MethodInfo *)0x0);
                                    if (bVar19 == 0) goto code_?;
                                    pos_00.z = MStack_11._27_2_;
                                    pos_00._0_4_ = MStack_11._29_4_;
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,pos_00,AudioActions__Enum_FaceMoved,
                                               (MethodInfo *)0x0);
                                    MStack_11._33_4_ = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_);
                                    if (pCVar28 != (CubePickingInfo *)0x0) {
                                      MStack_11._37_4_ = (pCVar28->fields).cube;
                                      FVar44 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVVar12 = Cube::Cube_GetCorners
                                                          ((Cube *)MStack_11._37_4_,FVar44,
                                                           (MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pBVar45 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                                CubeDataPacker_CornersToByteArray
                                                          (pVVar12,(MethodInfo *)0x0);
                                      uVar46 = CubeModelingStateMachine::
                                               CubeModelingStateMachine_get_CurrentMaterialId
                                                         (e,(MethodInfo *)0x0);
                                      MStack_11.token._1_1_ = uVar46;
                                      pBVar47 = Cube::Cube_CreateMaterialArray
                                                          (uVar46,(MethodInfo *)0x0);
                                      MStack_11._37_4_ = func_?();
                                      Cube::Cube__ctor((Cube *)MStack_11._37_4_,pBVar45,pBVar47,
                                                       (MethodInfo *)0x0);
                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_);
                                      fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                               MStack_11.invoker_method._1_2_);
                                      if ((MVCubeModelBase *)MStack_11._33_4_ !=
                                          (MVCubeModelBase *)0x0) {
                                        pos_07.z = MStack_11._27_2_;
                                        pos_07._0_4_ = MStack_11._29_4_;
                                        MVCubeModelBase::MVCubeModelBase_AddCube
                                                  ((MVCubeModelBase *)MStack_11._33_4_,pos_07,
                                                   (CubeBase *)MStack_11._37_4_,(MethodInfo *)0x0);
                                        pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                        pCVar21 = (Cube *)MStack_11._17_4_;
                                        pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_);
                                        fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                 MStack_11.invoker_method._1_2_);
                                        if (pMVar25 != (MVCubeModelBase *)0x0) {
                                          iVar42 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                             (pMVar25,(MethodInfo *)0x0);
                                          CubeModelTool::CubeModelTool_SendCubeEvent
                                                    (iVar42,EditCubeChange__Enum_CubeAdded,
                                                     (MethodInfo *)0x0);
                                          pCVar28 = (this->fields).movingEdgeCube;
                                          MStack_11._21_4_ = func_?();
                                          CubePickingInfo::CubePickingInfo__ctor_1
                                                    ((CubePickingInfo *)MStack_11._21_4_,pCVar28,
                                                     (MethodInfo *)0x0);
                                          pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                          pCVar21 = (Cube *)MStack_11._17_4_;
                                          pVVar23 = (Vector3__Array *)
                                                    CONCAT22(MStack_11._7_2_,
                                                             MStack_11.virtualMethodPointer._1_2_);
                                          fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                   MStack_11.invoker_method._1_2_);
                                          if (pMVar25 != (MVCubeModelBase *)0x0) {
                                            pos_08.z = MStack_11._27_2_;
                                            pos_08._0_4_ = MStack_11._29_4_;
                                            pCVar21 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                                (pMVar25,pos_08,(MethodInfo *)0x0);
                                            pCVar48 = Cube::Cube_Clone_1(pCVar21,(MethodInfo *)0x0);
                                            pCVar21 = (Cube *)MStack_11._17_4_;
                                            pVVar23 = (Vector3__Array *)
                                                      CONCAT22(MStack_11._7_2_,
                                                               MStack_11.virtualMethodPointer._1_2_)
                                            ;
                                            fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                     MStack_11.invoker_method._1_2_)
                                            ;
                                            if ((Vector3__Array *)MStack_11._21_4_ !=
                                                (Vector3__Array *)0x0) {
                                              ((CubePickingInfo__Fields *)(MStack_11._21_4_ + 8))->
                                              cube = pCVar48;
                                              func_?();
                                              ((Vector3 *)(MStack_11._21_4_ + 0x10))[2].z =
                                                   (float)MStack_11._29_4_;
                                              *(undefined2 *)
                                               &((Vector3 *)(MStack_11._21_4_ + 0x10))[3].x =
                                                   MStack_11._27_2_;
                                              pCVar28 = (this->fields).movingEdgeCube;
                                              pCVar21 = (Cube *)MStack_11._17_4_;
                                              pVVar23 = (Vector3__Array *)
                                                        CONCAT22(MStack_11._7_2_,
                                                                 MStack_11.virtualMethodPointer.
                                                                 _1_2_);
                                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                       MStack_11.invoker_method.
                                                                       _1_2_);
                                              if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                                 (pVVar23 = (Vector3__Array *)
                                                            CONCAT22(MStack_11._7_2_,
                                                                     MStack_11.virtualMethodPointer.
                                                                     _1_2_),
                                                 fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                          MStack_11.invoker_method.
                                                                          _1_2_),
                                                 (e->fields)._TargetCubeModel_k__BackingField !=
                                                 (MVCubeModelBase *)0x0)) {
                                                MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                          ((e->fields).
                                                           _TargetCubeModel_k__BackingField,
                                                           (pCVar28->fields).iLocalPos,
                                                           (pCVar28->fields).cube,(MethodInfo *)0x0)
                                                ;
                                                (this->fields).movingEdgeCube =
                                                     (CubePickingInfo *)MStack_11._21_4_;
                                                func_?();
                                                MStack_11._37_4_ = (this->fields).movingEdgeCube;
                                                pCVar21 = (Cube *)MStack_11._17_4_;
                                                pVVar23 = (Vector3__Array *)
                                                          CONCAT22(MStack_11._7_2_,
                                                                   MStack_11.virtualMethodPointer.
                                                                   _1_2_);
                                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                         MStack_11.invoker_method.
                                                                         _1_2_);
                                                if ((Vector3__Array *)MStack_11._37_4_ !=
                                                    (Vector3__Array *)0x0) {
                                                  pVVar30 = Cube::Cube_GetFaceAxis
                                                                      ((Vector3 *)&stack0xffffff48,
                                                                       ((Vector3__Array *)
                                                                       MStack_11._37_4_)->max_length
                                                                       ,(MethodInfo *)0x0);
                                                  Cube::Cube_MoveFace((CubePickingInfo *)
                                                                      MStack_11._37_4_,-0.75,
                                                                      *pVVar30,&CStack_14,
                                                                      (MethodInfo *)0x0);
code_?:
                                                  pCVar28 = (this->fields).movingEdgeCube;
                                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                                  pVVar23 = (Vector3__Array *)
                                                            CONCAT22(MStack_11._7_2_,
                                                                     MStack_11.virtualMethodPointer.
                                                                     _1_2_);
                                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                           MStack_11.invoker_method.
                                                                           _1_2_);
                                                  if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                                     (pVVar23 = (Vector3__Array *)
                                                                CONCAT22(MStack_11._7_2_,
                                                                         MStack_11.
                                                                         virtualMethodPointer._1_2_)
                                                     , fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                                MStack_11.
                                                                                invoker_method._1_2_
                                                                               ),
                                                     (e->fields)._TargetCubeModel_k__BackingField !=
                                                     (MVCubeModelBase *)0x0)) {
                                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                              ((e->fields).
                                                               _TargetCubeModel_k__BackingField,
                                                               (pCVar28->fields).iLocalPos,
                                                               (pCVar28->fields).cube,
                                                               (MethodInfo *)0x0);
                                                    MStack_11._9_4_ =
                                                         CONCAT22(MStack_11._11_2_,
                                                                  MStack_11.invoker_method._1_2_);
                                                    break;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                                else {
code_?:
                                  stack0xffffff5c = (MonitorData *)0xffffffff;
                                  pCStack_49 = TypeInfo__CanPerformCubeActionResult;
                                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                   ((Enum *)&pCStack_49,(MethodInfo *)0x0);
                                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAdd___er,0);
                                  uVar41 = (undefined2)
                                           ((uint)StringLiteral_____EditCube_OutOfBoundsAdd___er >>
                                           0x10);
code_?:
                                  mscorlib.dll::System::String::String_Concat_3
                                            ((String *)CONCAT22(uVar41,uVar1),str1,
                                             (MethodInfo *)0x0);
                                  pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pMVar20 = (this->fields).modelCursor;
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if ((pMVar25 != (MVCubeModelBase *)0x0) &&
                                     (pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_),
                                     fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                              MStack_11.invoker_method._1_2_),
                                     pMVar20 != (ModelCursor3D *)0x0)) {
                                    iPos.z = MStack_11._27_2_;
                                    iPos._0_4_ = MStack_11._29_4_;
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)pMVar20,iPos,
                                               (pMVar25->fields)._.gameObject,
                                               (MVCubeModelBase *)MStack_11._33_4_ ==
                                               (MVCubeModelBase *)0x2,(MethodInfo *)0x0);
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_);
                                    if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                       (pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_),
                                       fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                MStack_11.invoker_method._1_2_),
                                       pMVar25 != (MVCubeModelBase *)0x0)) {
                                      pCVar21 = (pCVar28->fields).cube;
code_?:
                                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                (pMVar25,(pCVar28->fields).iLocalPos,pCVar21,
                                                 (MethodInfo *)0x0);
                                      (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                      func_?();
                                      break;
                                    }
                                  }
                                }
                              }
                            }
                            else if ((Vector3__Array *)MStack_11._37_4_ == (Vector3__Array *)0x4) {
                              pCVar28 = (this->fields).movingEdgeCube;
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if (pCVar28 != (CubePickingInfo *)0x0) {
                                MStack_11._37_4_ = *(undefined4 *)&(pCVar28->fields).iLocalPos;
                                MStack_11._27_2_ = (pCVar28->fields).iLocalPos.z;
                                MStack_11._33_4_ =
                                     (((this->fields).movingEdgeCube)->fields).pickedFace;
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos_02.z = MStack_11.token._1_2_;
                                localPos_02._0_4_ = &IStack_22;
                                IVar29 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos_02,CONCAT22(uVar41,MStack_11._27_2_),
                                                    (MethodInfo *)MStack_11._33_4_);
                                puVar50 = IVar29._0_4_;
                                MStack_11._29_4_ = *(undefined4 *)puVar50;
                                MStack_11._27_2_ = *(undefined2 *)((int)puVar50 + 4);
                                requestedCubePos_00.z._1_1_ =
                                     (char)((ushort)*(undefined2 *)((int)puVar50 + 4) >> 8);
                                requestedCubePos_00._0_5_ = *puVar50;
                                MStack_11._33_4_ =
                                     CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                               (e,requestedCubePos_00,(this->fields).movingEdgeCube,
                                                (MethodInfo *)0x0);
                                if ((MVCubeModelBase *)MStack_11._33_4_ != (MVCubeModelBase *)0x0) {
code_?:
                                  stack0xffffff5c = (MonitorData *)0xffffffff;
                                  pCStack_49 = TypeInfo__CanPerformCubeActionResult;
                                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                   ((Enum *)&pCStack_49,(MethodInfo *)0x0);
                                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddEdge_,0);
                                  uVar41 = (undefined2)
                                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddEdge_ >>
                                           0x10);
                                  goto code_?;
                                }
                                pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                pCVar21 = (Cube *)MStack_11._17_4_;
                                pVVar23 = (Vector3__Array *)
                                          CONCAT22(MStack_11._7_2_,
                                                   MStack_11.virtualMethodPointer._1_2_);
                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                         MStack_11.invoker_method._1_2_);
                                if (pMVar25 != (MVCubeModelBase *)0x0) {
                                  pos_03.z._0_1_ = MStack_11.parameters._3_1_;
                                  pos_03._0_4_ = MStack_11._29_4_;
                                  pos_03.z._1_1_ = MStack_11.field7_0x1c._0_1_;
                                  MStack_11._37_4_ =
                                       MVCubeModelBase::MVCubeModelBase_GetCube
                                                 (pMVar25,pos_03,(MethodInfo *)0x0);
                                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                           CubeBase_op_Equality
                                                     ((CubeBase *)MStack_11._37_4_,(CubeBase *)0x0,
                                                      (MethodInfo *)0x0);
                                  if (bVar19 == 0) goto code_?;
                                  pCVar28 = (this->fields).movingEdgeCube;
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (pCVar28 != (CubePickingInfo *)0x0) {
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,(pCVar28->fields).iLocalPos,
                                               AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                    MStack_11._33_4_ = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_);
                                    if (pCVar28 != (CubePickingInfo *)0x0) {
                                      MStack_11._37_4_ = (pCVar28->fields).cube;
                                      FVar44 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVVar12 = Cube::Cube_GetCorners
                                                          ((Cube *)MStack_11._37_4_,FVar44,
                                                           (MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pBVar45 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                                CubeDataPacker_CornersToByteArray
                                                          (pVVar12,(MethodInfo *)0x0);
                                      uVar46 = CubeModelingStateMachine::
                                               CubeModelingStateMachine_get_CurrentMaterialId
                                                         (e,(MethodInfo *)0x0);
                                      MStack_11.token._1_1_ = uVar46;
                                      pBVar47 = Cube::Cube_CreateMaterialArray
                                                          (uVar46,(MethodInfo *)0x0);
                                      MStack_11._37_4_ = func_?();
                                      Cube::Cube__ctor((Cube *)MStack_11._37_4_,pBVar45,pBVar47,
                                                       (MethodInfo *)0x0);
                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_);
                                      fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                               MStack_11.invoker_method._1_2_);
                                      if ((MVCubeModelBase *)MStack_11._33_4_ !=
                                          (MVCubeModelBase *)0x0) {
                                        pos_12.z = MStack_11._27_2_;
                                        pos_12._0_4_ = MStack_11._29_4_;
                                        MVCubeModelBase::MVCubeModelBase_AddCube
                                                  ((MVCubeModelBase *)MStack_11._33_4_,pos_12,
                                                   (CubeBase *)MStack_11._37_4_,(MethodInfo *)0x0);
                                        pCVar28 = (this->fields).movingEdgeCube;
                                        MStack_11._21_4_ = func_?();
                                        CubePickingInfo::CubePickingInfo__ctor_1
                                                  ((CubePickingInfo *)MStack_11._21_4_,pCVar28,
                                                   (MethodInfo *)0x0);
                                        pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                        pCVar21 = (Cube *)MStack_11._17_4_;
                                        pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_);
                                        fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                 MStack_11.invoker_method._1_2_);
                                        if (pMVar25 != (MVCubeModelBase *)0x0) {
                                          pos_06.z = MStack_11._27_2_;
                                          pos_06._0_4_ = MStack_11._29_4_;
                                          pCVar21 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                              (pMVar25,pos_06,(MethodInfo *)0x0);
                                          pCVar48 = Cube::Cube_Clone_1(pCVar21,(MethodInfo *)0x0);
                                          pCVar21 = (Cube *)MStack_11._17_4_;
                                          pVVar23 = (Vector3__Array *)
                                                    CONCAT22(MStack_11._7_2_,
                                                             MStack_11.virtualMethodPointer._1_2_);
                                          fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                   MStack_11.invoker_method._1_2_);
                                          if ((Vector3__Array *)MStack_11._21_4_ !=
                                              (Vector3__Array *)0x0) {
                                            ((CubePickingInfo__Fields *)(MStack_11._21_4_ + 8))->
                                            cube = pCVar48;
                                            func_?();
                                            ((Vector3 *)(MStack_11._21_4_ + 0x10))[2].z =
                                                 (float)MStack_11._29_4_;
                                            *(undefined2 *)
                                             &((Vector3 *)(MStack_11._21_4_ + 0x10))[3].x =
                                                 MStack_11._27_2_;
                                            pCVar28 = (this->fields).movingEdgeCube;
                                            pCVar21 = (Cube *)MStack_11._17_4_;
                                            pVVar23 = (Vector3__Array *)
                                                      CONCAT22(MStack_11._7_2_,
                                                               MStack_11.virtualMethodPointer._1_2_)
                                            ;
                                            fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                     MStack_11.invoker_method._1_2_)
                                            ;
                                            if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                               (pVVar23 = (Vector3__Array *)
                                                          CONCAT22(MStack_11._7_2_,
                                                                   MStack_11.virtualMethodPointer.
                                                                   _1_2_),
                                               fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                        MStack_11.invoker_method.
                                                                        _1_2_),
                                               (e->fields)._TargetCubeModel_k__BackingField !=
                                               (MVCubeModelBase *)0x0)) {
                                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                        ((e->fields).
                                                         _TargetCubeModel_k__BackingField,
                                                         (pCVar28->fields).iLocalPos,
                                                         (pCVar28->fields).cube,(MethodInfo *)0x0);
                                              (this->fields).movingEdgeCube =
                                                   (CubePickingInfo *)MStack_11._21_4_;
                                              func_?();
                                              MStack_11._37_4_ = (this->fields).movingEdgeCube;
                                              pCVar21 = (Cube *)MStack_11._17_4_;
                                              pVVar23 = (Vector3__Array *)
                                                        CONCAT22(MStack_11._7_2_,
                                                                 MStack_11.virtualMethodPointer.
                                                                 _1_2_);
                                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                       MStack_11.invoker_method.
                                                                       _1_2_);
                                              if ((Vector3__Array *)MStack_11._37_4_ !=
                                                  (Vector3__Array *)0x0) {
                                                pVVar30 = Cube::Cube_GetFaceAxis
                                                                    ((Vector3 *)&stack0xffffff48,
                                                                     ((Vector3__Array *)
                                                                     MStack_11._37_4_)->max_length,
                                                                     (MethodInfo *)0x0);
                                                axis_00.z._1_1_ = (char)((uint)pVVar30->z >> 8);
                                                axis_00._0_9_ = *(unkbyte9 *)pVVar30;
                                                axis_00.z._2_2_ = (short)((uint)pVVar30->z >> 0x10);
                                                Cube::Cube_MoveFace((CubePickingInfo *)
                                                                    MStack_11._37_4_,-1.0,axis_00,
                                                                    &CStack_15,(MethodInfo *)0x0);
                                                MStack_11._37_4_ = (this->fields).movingEdgeCube;
                                                pCVar21 = (Cube *)MStack_11._17_4_;
                                                pVVar23 = (Vector3__Array *)
                                                          CONCAT22(MStack_11._7_2_,
                                                                   MStack_11.virtualMethodPointer.
                                                                   _1_2_);
                                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                         MStack_11.invoker_method.
                                                                         _1_2_);
                                                if ((Vector3__Array *)MStack_11._37_4_ !=
                                                    (Vector3__Array *)0x0) {
                                                  pVVar30 = Cube::Cube_GetFaceAxis
                                                                      ((Vector3 *)&stack0xffffff48,
                                                                       ((Vector3__Array *)
                                                                       MStack_11._37_4_)->max_length
                                                                       ,(MethodInfo *)0x0);
                                                  axis_02.z._2_2_ =
                                                       (short)((uint)pVVar30->z >> 0x10);
                                                  axis_02._0_10_ = *(unkbyte10 *)pVVar30;
                                                  Cube::Cube_MoveEdge((CubePickingInfo *)
                                                                      MStack_11._37_4_,-0.75,axis_02
                                                                      ,&CStack_15,(MethodInfo *)0x0)
                                                  ;
                                                  pCVar28 = (this->fields).movingEdgeCube;
                                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                                  pVVar23 = (Vector3__Array *)
                                                            CONCAT22(MStack_11._7_2_,
                                                                     MStack_11.virtualMethodPointer.
                                                                     _1_2_);
                                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                           MStack_11.invoker_method.
                                                                           _1_2_);
                                                  if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                                     (pVVar23 = (Vector3__Array *)
                                                                CONCAT22(MStack_11._7_2_,
                                                                         MStack_11.
                                                                         virtualMethodPointer._1_2_)
                                                     , fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                                MStack_11.
                                                                                invoker_method._1_2_
                                                                               ),
                                                     (e->fields)._TargetCubeModel_k__BackingField !=
                                                     (MVCubeModelBase *)0x0)) {
                                                    MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                              ((e->fields).
                                                               _TargetCubeModel_k__BackingField,
                                                               (pCVar28->fields).iLocalPos,
                                                               (pCVar28->fields).cube,
                                                               (MethodInfo *)0x0);
                                                    MStack_11._9_4_ =
                                                         CONCAT22(MStack_11._11_2_,
                                                                  MStack_11.invoker_method._1_2_);
                                                    break;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else if ((Vector3__Array *)MStack_11._37_4_ == (Vector3__Array *)0x5) {
                              pCVar28 = (this->fields).movingEdgeCube;
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if (pCVar28 != (CubePickingInfo *)0x0) {
                                MStack_11._37_4_ = *(undefined4 *)&(pCVar28->fields).iLocalPos;
                                MStack_11._27_2_ = (pCVar28->fields).iLocalPos.z;
                                MStack_11._33_4_ =
                                     (((this->fields).movingEdgeCube)->fields).pickedFace;
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                localPos_01.z = MStack_11.token._1_2_;
                                localPos_01._0_4_ = &IStack_22;
                                IVar29 = Cube::Cube_GetCubePosAboveFace
                                                   (localPos_01,CONCAT22(uVar41,MStack_11._27_2_),
                                                    (MethodInfo *)MStack_11._33_4_);
                                puVar50 = IVar29._0_4_;
                                MStack_11._29_4_ = *(undefined4 *)puVar50;
                                MStack_11._27_2_ = *(undefined2 *)((int)puVar50 + 4);
                                requestedCubePos.z._1_1_ =
                                     (char)((ushort)*(undefined2 *)((int)puVar50 + 4) >> 8);
                                requestedCubePos._0_5_ = *puVar50;
                                MStack_11._33_4_ =
                                     CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt
                                               (e,requestedCubePos,(this->fields).movingEdgeCube,
                                                (MethodInfo *)0x0);
                                if ((MVCubeModelBase *)MStack_11._33_4_ != (MVCubeModelBase *)0x0) {
code_?:
                                  stack0xffffff5c = (MonitorData *)0xffffffff;
                                  pCStack_49 = TypeInfo__CanPerformCubeActionResult;
                                  str1 = mscorlib.dll::System::Enum::Enum_ToString
                                                   ((Enum *)&pCStack_49,(MethodInfo *)0x0);
                                  uVar1 = SUB42(StringLiteral_____EditCube_OutOfBoundsAddVerte,0);
                                  uVar41 = (undefined2)
                                           ((uint)StringLiteral_____EditCube_OutOfBoundsAddVerte >>
                                           0x10);
                                  goto code_?;
                                }
                                pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                pCVar21 = (Cube *)MStack_11._17_4_;
                                pVVar23 = (Vector3__Array *)
                                          CONCAT22(MStack_11._7_2_,
                                                   MStack_11.virtualMethodPointer._1_2_);
                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                         MStack_11.invoker_method._1_2_);
                                if (pMVar25 != (MVCubeModelBase *)0x0) {
                                  pos_02.z._0_1_ = MStack_11.parameters._3_1_;
                                  pos_02._0_4_ = MStack_11._29_4_;
                                  pos_02.z._1_1_ = MStack_11.field7_0x1c._0_1_;
                                  MStack_11._37_4_ =
                                       MVCubeModelBase::MVCubeModelBase_GetCube
                                                 (pMVar25,pos_02,(MethodInfo *)0x0);
                                  if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                      cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                           CubeBase_op_Equality
                                                     ((CubeBase *)MStack_11._37_4_,(CubeBase *)0x0,
                                                      (MethodInfo *)0x0);
                                  if (bVar19 == 0) goto code_?;
                                  pCVar28 = (this->fields).movingEdgeCube;
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (pCVar28 != (CubePickingInfo *)0x0) {
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,(pCVar28->fields).iLocalPos,
                                               AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                                    MStack_11._33_4_ = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_);
                                    if (pCVar28 != (CubePickingInfo *)0x0) {
                                      MStack_11._37_4_ = (pCVar28->fields).cube;
                                      FVar44 = (((this->fields).movingEdgeCube)->fields).pickedFace;
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pVVar12 = Cube::Cube_GetCorners
                                                          ((Cube *)MStack_11._37_4_,FVar44,
                                                           (MethodInfo *)0x0);
                                      if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      pBVar45 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                                CubeDataPacker_CornersToByteArray
                                                          (pVVar12,(MethodInfo *)0x0);
                                      uVar46 = CubeModelingStateMachine::
                                               CubeModelingStateMachine_get_CurrentMaterialId
                                                         (e,(MethodInfo *)0x0);
                                      MStack_11.token._1_1_ = uVar46;
                                      pBVar47 = Cube::Cube_CreateMaterialArray
                                                          (uVar46,(MethodInfo *)0x0);
                                      MStack_11._37_4_ = func_?();
                                      Cube::Cube__ctor((Cube *)MStack_11._37_4_,pBVar45,pBVar47,
                                                       (MethodInfo *)0x0);
                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_);
                                      fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                               MStack_11.invoker_method._1_2_);
                                      if ((MVCubeModelBase *)MStack_11._33_4_ !=
                                          (MVCubeModelBase *)0x0) {
                                        pos_11.z = MStack_11._27_2_;
                                        pos_11._0_4_ = MStack_11._29_4_;
                                        MVCubeModelBase::MVCubeModelBase_AddCube
                                                  ((MVCubeModelBase *)MStack_11._33_4_,pos_11,
                                                   (CubeBase *)MStack_11._37_4_,(MethodInfo *)0x0);
                                        pCVar28 = (this->fields).movingEdgeCube;
                                        MStack_11._21_4_ = func_?();
                                        CubePickingInfo::CubePickingInfo__ctor_1
                                                  ((CubePickingInfo *)MStack_11._21_4_,pCVar28,
                                                   (MethodInfo *)0x0);
                                        pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                        pCVar21 = (Cube *)MStack_11._17_4_;
                                        pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_);
                                        fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                 MStack_11.invoker_method._1_2_);
                                        if (pMVar25 != (MVCubeModelBase *)0x0) {
                                          pos_05.z = MStack_11._27_2_;
                                          pos_05._0_4_ = MStack_11._29_4_;
                                          pCVar21 = MVCubeModelBase::MVCubeModelBase_GetCube
                                                              (pMVar25,pos_05,(MethodInfo *)0x0);
                                          pCVar48 = Cube::Cube_Clone_1(pCVar21,(MethodInfo *)0x0);
                                          pCVar21 = (Cube *)MStack_11._17_4_;
                                          pVVar23 = (Vector3__Array *)
                                                    CONCAT22(MStack_11._7_2_,
                                                             MStack_11.virtualMethodPointer._1_2_);
                                          fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                   MStack_11.invoker_method._1_2_);
                                          if ((Vector3__Array *)MStack_11._21_4_ !=
                                              (Vector3__Array *)0x0) {
                                            ((CubePickingInfo__Fields *)(MStack_11._21_4_ + 8))->
                                            cube = pCVar48;
                                            func_?();
                                            ((Vector3 *)(MStack_11._21_4_ + 0x10))[2].z =
                                                 (float)MStack_11._29_4_;
                                            *(undefined2 *)
                                             &((Vector3 *)(MStack_11._21_4_ + 0x10))[3].x =
                                                 MStack_11._27_2_;
                                            pCVar28 = (this->fields).movingEdgeCube;
                                            pCVar21 = (Cube *)MStack_11._17_4_;
                                            pVVar23 = (Vector3__Array *)
                                                      CONCAT22(MStack_11._7_2_,
                                                               MStack_11.virtualMethodPointer._1_2_)
                                            ;
                                            fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                     MStack_11.invoker_method._1_2_)
                                            ;
                                            if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                               (pVVar23 = (Vector3__Array *)
                                                          CONCAT22(MStack_11._7_2_,
                                                                   MStack_11.virtualMethodPointer.
                                                                   _1_2_),
                                               fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                        MStack_11.invoker_method.
                                                                        _1_2_),
                                               (e->fields)._TargetCubeModel_k__BackingField !=
                                               (MVCubeModelBase *)0x0)) {
                                              MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                        ((e->fields).
                                                         _TargetCubeModel_k__BackingField,
                                                         (pCVar28->fields).iLocalPos,
                                                         (pCVar28->fields).cube,(MethodInfo *)0x0);
                                              (this->fields).movingEdgeCube =
                                                   (CubePickingInfo *)MStack_11._21_4_;
                                              func_?();
                                              MStack_11._37_4_ = (this->fields).movingEdgeCube;
                                              pCVar21 = (Cube *)MStack_11._17_4_;
                                              pVVar23 = (Vector3__Array *)
                                                        CONCAT22(MStack_11._7_2_,
                                                                 MStack_11.virtualMethodPointer.
                                                                 _1_2_);
                                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                       MStack_11.invoker_method.
                                                                       _1_2_);
                                              if ((Vector3__Array *)MStack_11._37_4_ !=
                                                  (Vector3__Array *)0x0) {
                                                pVVar30 = Cube::Cube_GetFaceAxis
                                                                    ((Vector3 *)&stack0xffffff48,
                                                                     ((Vector3__Array *)
                                                                     MStack_11._37_4_)->max_length,
                                                                     (MethodInfo *)0x0);
                                                axis.z._1_1_ = (char)((uint)pVVar30->z >> 8);
                                                axis._0_9_ = *(unkbyte9 *)pVVar30;
                                                axis.z._2_2_ = (short)((uint)pVVar30->z >> 0x10);
                                                Cube::Cube_MoveFace((CubePickingInfo *)
                                                                    MStack_11._37_4_,-1.0,axis,
                                                                    (CubeOutOfBoundState__Enum *)
                                                                    &puStack_16,(MethodInfo *)0x0);
                                                MStack_11._33_4_ = (this->fields).movingEdgeCube;
                                                pCVar21 = (Cube *)MStack_11._17_4_;
                                                pVVar23 = (Vector3__Array *)
                                                          CONCAT22(MStack_11._7_2_,
                                                                   MStack_11.virtualMethodPointer.
                                                                   _1_2_);
                                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                         MStack_11.invoker_method.
                                                                         _1_2_);
                                                if ((MVCubeModelBase *)MStack_11._33_4_ !=
                                                    (MVCubeModelBase *)0x0) {
                                                  MStack_11._37_4_ =
                                                       Cube::Cube_GetFaceAxis
                                                                 ((Vector3 *)&stack0xffffff48,
                                                                  (((MVCubeModelBase *)
                                                                   MStack_11._33_4_)->fields)._._.
                                                                  groupId,(MethodInfo *)0x0);
                                                  pCVar28 = (this->fields).movingEdgeCube;
                                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                                  pVVar23 = (Vector3__Array *)
                                                            CONCAT22(MStack_11._7_2_,
                                                                     MStack_11.virtualMethodPointer.
                                                                     _1_2_);
                                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                           MStack_11.invoker_method.
                                                                           _1_2_);
                                                  if (pCVar28 != (CubePickingInfo *)0x0) {
                                                    pCVar21 = ((CubePickingInfo__Fields *)
                                                              &((Vector3__Array *)MStack_11._37_4_)
                                                               ->bounds)->cube;
                                                    axis_01.z._1_1_ = (char)((uint)pCVar21 >> 8);
                                                    axis_01._0_9_ = *(unkbyte9 *)MStack_11._37_4_;
                                                    axis_01.z._2_2_ = (short)((uint)pCVar21 >> 0x10)
                                                    ;
                                                    Cube::Cube_MoveVertex
                                                              ((CubePickingInfo *)MStack_11._33_4_,
                                                               -0.75,axis_01,
                                                               (pCVar28->fields).pickedEdgeIndex0,
                                                               (pCVar28->fields).pickedEdgeIndex1,
                                                               (CubeOutOfBoundState__Enum *)
                                                               &puStack_16,(MethodInfo *)0x0);
                                                    goto code_?;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            else if ((Vector3__Array *)MStack_11._37_4_ == (Vector3__Array *)0x2) {
                              CVar51 = CubeModelingStateMachine::
                                       CubeModelingStateMachine_CanRemoveCubeAt
                                                 (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0)
                              ;
                              pCVar28 = (this->fields).movingEdgeCube;
                              pCVar21 = (Cube *)MStack_11._17_4_;
                              if (CVar51 == CanPerformCubeActionResult__Enum_Yes) {
                                pVVar23 = (Vector3__Array *)
                                          CONCAT22(MStack_11._7_2_,
                                                   MStack_11.virtualMethodPointer._1_2_);
                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                         MStack_11.invoker_method._1_2_);
                                if (pCVar28 != (CubePickingInfo *)0x0) {
                                  MStack_11._37_4_ = *(undefined4 *)&(pCVar28->fields).iLocalPos;
                                  MStack_11.invoker_method._1_2_ = (pCVar28->fields).iLocalPos.z;
                                  pCVar28 = (this->fields).movingEdgeCube;
                                  pVVar23 = (Vector3__Array *)MStack_11._37_4_;
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (pCVar28 != (CubePickingInfo *)0x0) {
                                    MStack_11._33_4_ = (pCVar28->fields).pickedFace;
                                    MStack_11._5_4_ = MStack_11._37_4_;
                                    if (cRam_? == '\0') {
                                      func_?();
                                      func_?();
                                      cRam_? = '\x01';
                                    }
                                    IStack_22.x = 0;
                                    IStack_22.y = 0;
                                    IStack_22.z = 0;
                                    pVVar12 = (Vector3__Array *)MStack_11._5_4_;
                                    if ((TypeInfo__MV__WorldObject__IntVector->_1).
                                        cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                      pVVar12 = (Vector3__Array *)MStack_11._5_4_;
                                    }
                                    MStack_11._7_2_ = SUB42((uint)pVVar12 >> 0x10,0);
                                    iVar42 = CONCAT22(MStack_11.invoker_method._1_2_,MStack_11._7_2_
                                                     );
                                    MStack_11._5_4_ = pVVar12;
                                    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                                              (&IStack_22,MStack_11._37_4_,iVar42,
                                               CONCAT22(MStack_11._11_2_,
                                                        MStack_11.invoker_method._1_2_),
                                               (MethodInfo *)0x0);
                                    if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                      func_?();
                                    }
                                    pVVar30 = Cube::Cube_GetFaceAxis
                                                        ((Vector3 *)&stack0xffffff48,
                                                         MStack_11._33_4_,(MethodInfo *)0x0);
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    uVar52 = pVVar30->x;
                                    uVar53 = pVVar30->y;
                                    MStack_11._9_4_ = pVVar30->z;
                                    MStack_11.virtualMethodPointer._1_2_ = (short)uVar53;
                                    MStack_11._7_2_ = SUB42((uint)uVar53 >> 0x10,0);
                                    IStack_22.x = IStack_22.x - (short)(int)(float)uVar52;
                                    IStack_22.y = IStack_22.y - (short)(int)(float)uVar53;
                                    MStack_11._27_2_ =
                                         IStack_22.z - (short)(int)(float)MStack_11._9_4_;
                                    MStack_11._1_4_ = uVar52;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                    pVVar23 = (Vector3__Array *)uVar53;
                                    fVar24 = (float)MStack_11._9_4_;
                                    if (pCVar28 != (CubePickingInfo *)0x0) {
                                      pos_04.z._1_1_ =
                                           (char)((ushort)(pCVar28->fields).iLocalPos.z >> 8);
                                      pos_04._0_5_ = *(undefined5 *)&(pCVar28->fields).iLocalPos;
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,pos_04,AudioActions__Enum_CubeRemoved,
                                                 (MethodInfo *)0x0);
                                      pCVar28 = (this->fields).movingEdgeCube;
                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                      IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_);
                                      fVar24 = (float)MStack_11._9_4_;
                                      if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                         (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                         pVVar23 = (Vector3__Array *)
                                                   CONCAT22(MStack_11._7_2_,
                                                            MStack_11.virtualMethodPointer._1_2_),
                                         (e->fields)._TargetCubeModel_k__BackingField !=
                                         (MVCubeModelBase *)0x0)) {
                                        MVCubeModelBase::MVCubeModelBase_RemoveCube
                                                  ((e->fields)._TargetCubeModel_k__BackingField,
                                                   (pCVar28->fields).iLocalPos,(MethodInfo *)0x0);
                                        pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                        pCVar21 = (Cube *)MStack_11._17_4_;
                                        IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                        pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_);
                                        fVar24 = (float)MStack_11._9_4_;
                                        if (pMVar25 != (MVCubeModelBase *)0x0) {
                                          pos_13.y = IStack_22.y;
                                          pos_13.x = IStack_22.x;
                                          pos_13.z._0_1_ = MStack_11.parameters._3_1_;
                                          pos_13.z._1_1_ = MStack_11.field7_0x1c._0_1_;
                                          pMVar25 = (MVCubeModelBase *)
                                                    MVCubeModelBase::MVCubeModelBase_GetCube
                                                              (pMVar25,pos_13,(MethodInfo *)0x0);
                                          MStack_11._33_4_ = pMVar25;
                                          if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          bVar19 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                                   CubeBase_op_Inequality
                                                             ((CubeBase *)pMVar25,(CubeBase *)0x0,
                                                              (MethodInfo *)0x0);
                                          if (bVar19 == 0) {
                                            (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                            func_?();
                                          }
                                          else {
                                            pCVar28 = (this->fields).movingEdgeCube;
                                            pVVar12 = (Vector3__Array *)func_?();
                                            MStack_11._37_4_ = pVVar12;
                                            CubePickingInfo::CubePickingInfo__ctor_1
                                                      ((CubePickingInfo *)pVVar12,pCVar28,
                                                       (MethodInfo *)0x0);
                                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0
                                               ) {
                                              func_?();
                                            }
                                            pCVar48 = Cube::Cube_Clone_1((Cube *)MStack_11._33_4_,
                                                                         (MethodInfo *)0x0);
                                            pCVar21 = (Cube *)MStack_11._17_4_;
                                            IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                            pVVar23 = (Vector3__Array *)
                                                      CONCAT22(MStack_11._7_2_,
                                                               MStack_11.virtualMethodPointer._1_2_)
                                            ;
                                            fVar24 = (float)MStack_11._9_4_;
                                            if (pVVar12 == (Vector3__Array *)0x0)
                                            goto code_?;
                                            ((CubePickingInfo__Fields *)&pVVar12->bounds)->cube =
                                                 pCVar48;
                                            func_?();
                                            pVVar12->vector[2].z =
                                                 (float)CONCAT22(IStack_22.y,IStack_22.x);
                                            *(undefined2 *)&pVVar12->vector[3].x = MStack_11._27_2_;
                                            (this->fields).movingEdgeCube =
                                                 (CubePickingInfo *)pVVar12;
                                            func_?();
                                          }
                                          break;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              else {
                                pVVar23 = (Vector3__Array *)
                                          CONCAT22(MStack_11._7_2_,
                                                   MStack_11.virtualMethodPointer._1_2_);
                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                         MStack_11.invoker_method._1_2_);
                                if (((pCVar28 != (CubePickingInfo *)0x0) &&
                                    (pVVar23 = (Vector3__Array *)
                                               CONCAT22(MStack_11._7_2_,
                                                        MStack_11.virtualMethodPointer._1_2_),
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_),
                                    (e->fields)._TargetCubeModel_k__BackingField !=
                                    (MVCubeModelBase *)0x0)) &&
                                   (pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_),
                                   fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                            MStack_11.invoker_method._1_2_),
                                   (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
code_?:
                                  ModelCursor::ModelCursor_SetErrorCursor
                                            ((ModelCursor *)(this->fields).modelCursor,
                                             (pCVar28->fields).iLocalPos,pGVar27,
                                             showUnlockNotification,pMVar40);
                                  pCVar28 = (this->fields).movingEdgeCube;
                                  pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                     (pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_),
                                     fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                              MStack_11.invoker_method._1_2_),
                                     pMVar25 != (MVCubeModelBase *)0x0)) {
                                    pCVar21 = (this->fields).prevCubeState;
                                    goto code_?;
                                  }
                                }
                              }
                            }
                            else {
                              if ((Vector3__Array *)MStack_11._37_4_ != (Vector3__Array *)0x0)
                              break;
                              MStack_11._33_4_ =
                                   CubeModelingStateMachine::
                                   CubeModelingStateMachine_CanRemoveCubeAt
                                             (e,(this->fields).movingEdgeCube,(MethodInfo *)0x0);
                              pCVar28 = (this->fields).movingEdgeCube;
                              pCVar21 = (Cube *)MStack_11._17_4_;
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                 (pCVar48 = (pCVar28->fields).cube,
                                 pVVar23 = (Vector3__Array *)
                                           CONCAT22(MStack_11._7_2_,
                                                    MStack_11.virtualMethodPointer._1_2_),
                                 fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                          MStack_11.invoker_method._1_2_),
                                 pCVar48 != (Cube *)0x0)) {
                                MStack_11._37_4_ =
                                     MVWorldObject.dll::MV::WorldObject::CubeBase::
                                     CubeBase_get_Corners((CubeBase *)pCVar48,(MethodInfo *)0x0);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                bVar19 = Cube::Cube_IsCollapsed
                                                   ((Vector3__Array *)MStack_11._37_4_,
                                                    (MethodInfo *)0x0);
                                pCVar21 = (Cube *)MStack_11._17_4_;
                                if ((bVar19 == 0) ||
                                   ((MVCubeModelBase *)MStack_11._33_4_ != (MVCubeModelBase *)0x1))
                                {
                                  pCVar28 = (this->fields).movingEdgeCube;
                                  if ((MVCubeModelBase *)MStack_11._33_4_ == (MVCubeModelBase *)0x2)
                                  goto code_?;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (pCVar28 != (CubePickingInfo *)0x0) {
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,(pCVar28->fields).iLocalPos,
                                               AudioActions__Enum_FaceMoved,(MethodInfo *)0x0);
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_);
                                    if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                       (pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_),
                                       fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                MStack_11.invoker_method._1_2_),
                                       pMVar25 != (MVCubeModelBase *)0x0)) {
                                      iVector.z._1_1_ =
                                           (char)((ushort)(pCVar28->fields).iLocalPos.z >> 8);
                                      iVector._0_5_ = *(undefined5 *)&(pCVar28->fields).iLocalPos;
                                      MVCubeModelBase::MVCubeModelBase_CornersChanged
                                                (pMVar25,iVector,(pCVar28->fields).cube,
                                                 (MethodInfo *)0x0);
                                      goto code_?;
                                    }
                                  }
                                }
                                else {
                                  pCVar28 = (this->fields).movingEdgeCube;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (((pCVar28 != (CubePickingInfo *)0x0) &&
                                      (pMVar25 = (e->fields)._TargetCubeModel_k__BackingField,
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_),
                                      fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                               MStack_11.invoker_method._1_2_),
                                      pMVar25 != (MVCubeModelBase *)0x0)) &&
                                     (pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_),
                                     fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                              MStack_11.invoker_method._1_2_),
                                     (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                    pMVar40 = (MethodInfo *)0x0;
                                    showUnlockNotification = 0;
                                    pGVar27 = (pMVar25->fields)._.gameObject;
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          uVar46 = (this->fields).prevMaterial;
                          MStack_11.token._1_1_ = uVar46;
                          (this->fields).currentInternalState = 2;
                          CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                                    (e,uVar46,(MethodInfo *)0x0);
                          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                                    (1,(MethodInfo *)0x0);
                          value = (WebHeaderCollection *)(this->fields).movingEdgeCube;
                          if ((this->fields).edgeHasMoved == 0) {
                            uVar1 = 0x1044;
                            System.dll::System::Net::WebResponseStream::
                            WebResponseStream_set_Headers
                                      ((WebResponseStream *)e,value,(MethodInfo *)0x0);
                            pCVar28 = (e->fields)._SelectedCube_k__BackingField;
                            pCVar21 = (Cube *)MStack_11._17_4_;
                            IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                            pVVar23 = (Vector3__Array *)
                                      CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_)
                            ;
                            fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_
                                                    );
                            if (pCVar28 != (CubePickingInfo *)0x0) {
                              pos_10.z._1_1_ = (char)((ushort)(pCVar28->fields).iLocalPos.z >> 8);
                              pos_10._0_5_ = *(undefined5 *)&(pCVar28->fields).iLocalPos;
                              CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                        (e,pos_10,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                              uStack_4 = 2;
                              EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                                 (e,(MethodInfo *)0x0);
                              pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                              pCVar21 = (Cube *)MStack_11._17_4_;
                              IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if (pMVar25 != (MVCubeModelBase *)0x0) {
                                iVar42 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                                   (pMVar25,(MethodInfo *)0x0);
                                CubeModelTool::CubeModelTool_SendCubeEvent
                                          (iVar42,EVar18,(MethodInfo *)0x0);
                                if (EVar18 != EditCubeChange__Enum_None) {
code_?:
                                  uStack_4 = 0xffffffff;
                                  goto code_?;
                                }
                                pCVar28 = (e->fields)._SelectedCube_k__BackingField;
                                pCVar21 = (Cube *)MStack_11._17_4_;
                                IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                pVVar23 = (Vector3__Array *)
                                          CONCAT22(MStack_11._7_2_,
                                                   MStack_11.virtualMethodPointer._1_2_);
                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                         MStack_11.invoker_method._1_2_);
                                if (pCVar28 != (CubePickingInfo *)0x0) {
                                  MStack_11._37_4_ = *(undefined4 *)&(pCVar28->fields).iLocalPos;
                                  MStack_11._31_2_ = (pCVar28->fields).iLocalPos.z;
                                  MStack_11._33_4_ =
                                       (((e->fields)._SelectedCube_k__BackingField)->fields).
                                       pickedFace;
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  localPos_03.z = MStack_11.token._1_2_;
                                  localPos_03._0_4_ = &IStack_22;
                                  IVar29 = Cube::Cube_GetCubePosAboveFace
                                                     (localPos_03,CONCAT22(uVar1,MStack_11._31_2_),
                                                      (MethodInfo *)MStack_11._33_4_);
                                  MStack_11._37_4_ = IVar29._0_4_;
                                  pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                  pMVar20 = (this->fields).modelCursor;
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if ((pMVar25 != (MVCubeModelBase *)0x0) &&
                                     (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                     pVVar23 = (Vector3__Array *)
                                               CONCAT22(MStack_11._7_2_,
                                                        MStack_11.virtualMethodPointer._1_2_),
                                     fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                              MStack_11.invoker_method._1_2_),
                                     pMVar20 != (ModelCursor3D *)0x0)) {
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)pMVar20,*(IntVector *)MStack_11._37_4_
                                               ,(pMVar25->fields)._.gameObject,0,(MethodInfo *)0x0);
                                    goto code_?;
                                  }
                                }
                              }
                            }
                          }
                          else {
                            MStack_11._33_4_ =
                                 CubeModelingStateMachine::CubeModelingStateMachine_CanRemoveCubeAt
                                           (e,(CubePickingInfo *)value,(MethodInfo *)0x0);
                            pCVar28 = (this->fields).movingEdgeCube;
                            pCVar21 = (Cube *)MStack_11._17_4_;
                            if ((MVCubeModelBase *)MStack_11._33_4_ == (MVCubeModelBase *)0x2) {
                              IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if (((pCVar28 != (CubePickingInfo *)0x0) &&
                                  (pMVar25 = (e->fields)._TargetCubeModel_k__BackingField,
                                  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_),
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_),
                                  pMVar25 != (MVCubeModelBase *)0x0)) &&
                                 (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                 pVVar23 = (Vector3__Array *)
                                           CONCAT22(MStack_11._7_2_,
                                                    MStack_11.virtualMethodPointer._1_2_),
                                 fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                          MStack_11.invoker_method._1_2_),
                                 (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                ModelCursor::ModelCursor_SetErrorCursor
                                          ((ModelCursor *)(this->fields).modelCursor,
                                           (pCVar28->fields).iLocalPos,
                                           (pMVar25->fields)._.gameObject,1,(MethodInfo *)0x0);
code_?:
                                (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
                                func_?();
                                (this->fields).edgeHasMoved = 0;
                                break;
                              }
                            }
                            else {
                              IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                 (pCVar48 = (pCVar28->fields).cube,
                                 IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                 pVVar23 = (Vector3__Array *)
                                           CONCAT22(MStack_11._7_2_,
                                                    MStack_11.virtualMethodPointer._1_2_),
                                 fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                          MStack_11.invoker_method._1_2_),
                                 pCVar48 != (Cube *)0x0)) {
                                uVar1 = 0;
                                uVar41 = 0;
                                MStack_11._37_4_ =
                                     MVWorldObject.dll::MV::WorldObject::CubeBase::
                                     CubeBase_get_Corners((CubeBase *)pCVar48,(MethodInfo *)0x0);
                                if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                  in_stack_10 = 0x1044;
                                  func_?();
                                }
                                bVar19 = Cube::Cube_IsCollapsed
                                                   ((Vector3__Array *)MStack_11._37_4_,
                                                    (MethodInfo *)0x0);
                                pCVar28 = (this->fields).movingEdgeCube;
                                pCVar21 = (Cube *)MStack_11._17_4_;
                                if (bVar19 == 0) {
                                  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (pCVar28 != (CubePickingInfo *)0x0) {
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,(pCVar28->fields).iLocalPos,
                                               AudioActions__Enum_EdgeMoved,(MethodInfo *)0x0);
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_);
                                    if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                       (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                       pVVar23 = (Vector3__Array *)
                                                 CONCAT22(MStack_11._7_2_,
                                                          MStack_11.virtualMethodPointer._1_2_),
                                       fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                MStack_11.invoker_method._1_2_),
                                       pMVar25 != (MVCubeModelBase *)0x0)) {
                                      pCVar21 = (pCVar28->fields).cube;
                                      uVar54 = SUB41(pCVar21,0);
                                      uVar55 = (undefined1)((uint)pCVar21 >> 8);
                                      in_stack_10 = (undefined2)((uint)pCVar21 >> 0x10);
code_?:
                                      iVector_02.z._1_1_ =
                                           (char)((ushort)(pCVar28->fields).iLocalPos.z >> 8);
                                      iVector_02._0_5_ = *(undefined5 *)&(pCVar28->fields).iLocalPos
                                      ;
                                      MVCubeModelBase::MVCubeModelBase_CornersChangedDone
                                                (pMVar25,iVector_02,(Cube *)CONCAT22(uVar41,uVar1),
                                                 (MethodInfo *)
                                                 CONCAT22(in_stack_10,CONCAT11(uVar55,uVar54))
                                                );
                                      goto code_?;
                                    }
                                  }
                                }
                                else if ((MVCubeModelBase *)MStack_11._33_4_ ==
                                         (MVCubeModelBase *)0x0) {
                                  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (pCVar28 != (CubePickingInfo *)0x0) {
                                    CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                              (e,(pCVar28->fields).iLocalPos,
                                               AudioActions__Enum_CubeRemoved,(MethodInfo *)0x0);
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_);
                                    if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                       (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                       pVVar23 = (Vector3__Array *)
                                                 CONCAT22(MStack_11._7_2_,
                                                          MStack_11.virtualMethodPointer._1_2_),
                                       fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                MStack_11.invoker_method._1_2_),
                                       pMVar25 != (MVCubeModelBase *)0x0)) {
                                      pos_15.z._1_1_ =
                                           (char)((ushort)(pCVar28->fields).iLocalPos.z >> 8);
                                      pos_15._0_5_ = *(undefined5 *)&(pCVar28->fields).iLocalPos;
                                      MVCubeModelBase::MVCubeModelBase_RemoveCube
                                                (pMVar25,pos_15,(MethodInfo *)0x0);
                                      goto code_?;
                                    }
                                  }
                                }
                                else {
                                  IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (((pCVar28 != (CubePickingInfo *)0x0) &&
                                      (pMVar25 = (e->fields)._TargetCubeModel_k__BackingField,
                                      IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_),
                                      fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                               MStack_11.invoker_method._1_2_),
                                      pMVar25 != (MVCubeModelBase *)0x0)) &&
                                     (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                     pVVar23 = (Vector3__Array *)
                                               CONCAT22(MStack_11._7_2_,
                                                        MStack_11.virtualMethodPointer._1_2_),
                                     fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                              MStack_11.invoker_method._1_2_),
                                     (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)(this->fields).modelCursor,
                                               (pCVar28->fields).iLocalPos,
                                               (pMVar25->fields)._.gameObject,0,(MethodInfo *)0x0);
                                    pCVar28 = (this->fields).movingEdgeCube;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                             MStack_11.invoker_method._1_2_);
                                    if (pCVar28 != (CubePickingInfo *)0x0) {
                                      pIVar43 = &(pCVar28->fields).iLocalPos;
                                      uVar1 = pIVar43->x;
                                      uVar41 = pIVar43->y;
                                      iVar13 = (pCVar28->fields).iLocalPos.z;
                                      uVar54 = (undefined1)iVar13;
                                      uVar55 = (undefined1)((ushort)iVar13 >> 8);
                                      pos_14.z._1_1_ = uVar55;
                                      pos_14._0_5_ = *(undefined5 *)pIVar43;
                                      CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                                (e,pos_14,AudioActions__Enum_FaceMoved,
                                                 (MethodInfo *)0x0);
                                      pCVar28 = (this->fields).movingEdgeCube;
                                      pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                      IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_);
                                      fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                               MStack_11.invoker_method._1_2_);
                                      if ((pCVar28 != (CubePickingInfo *)0x0) &&
                                         (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                         pVVar23 = (Vector3__Array *)
                                                   CONCAT22(MStack_11._7_2_,
                                                            MStack_11.virtualMethodPointer._1_2_),
                                         fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                  MStack_11.invoker_method._1_2_),
                                         pMVar25 != (MVCubeModelBase *)0x0)) goto code_?;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        goto code_?;
                      }
                      (this->fields).currentInternalState = 1;
                      CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
                                (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
                      (this->fields).edgeHasMoved = 0;
                      break;
                    case 1:
                      MStack_11._9_4_ = CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                      IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                      if ((this->fields).currentInternalState == 1) {
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                        if (bVar19 != 0) {
                          UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible
                                    (1,(MethodInfo *)0x0);
                          (this->fields).currentInternalState = 2;
                        }
                      }
                      break;
                    case 2:
                      if ((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) {
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlDown
                                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                        if (bVar19 != 0) {
                          bVar19 = DrawPlane::DrawPlane_get_IsDrawPlaneActive((MethodInfo *)0x0);
                          if (bVar19 != 0) {
                            (this->fields).currentInternalState = 3;
                            MStack_11._9_4_ =
                                 CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                            IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                            break;
                          }
                        }
                      }
                      else {
                        if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                          func_?();
                        }
                        bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                           (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                        if (bVar19 != 0) {
                          uStack_4 = 0;
                          EVar18 = CubeModelingStateMachine::CubeModelingStateMachine_AddCube
                                             (e,(MethodInfo *)0x0);
                          pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                          pCVar21 = (Cube *)MStack_11._17_4_;
                          IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                          pVVar23 = (Vector3__Array *)
                                    CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                          fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                          if (pMVar25 != (MVCubeModelBase *)0x0) {
                            iVar42 = MVCubeModelBase::MVCubeModelBase_get_CubeCount
                                               (pMVar25,(MethodInfo *)0x0);
                            CubeModelTool::CubeModelTool_SendCubeEvent
                                      (iVar42,EVar18,(MethodInfo *)0x0);
                            IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                            if (EVar18 != EditCubeChange__Enum_None) {
                              MStack_11.klass._0_1_ = '\x01';
                              uStack_4 = 0xffffffff;
                              MStack_11._9_4_ =
                                   CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                              break;
                            }
                            pCVar28 = (e->fields)._SelectedCube_k__BackingField;
                            pCVar21 = (Cube *)MStack_11._17_4_;
                            pVVar23 = (Vector3__Array *)
                                      CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_)
                            ;
                            fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_
                                                    );
                            if (pCVar28 != (CubePickingInfo *)0x0) {
                              MStack_11._37_4_ = *(undefined4 *)&(pCVar28->fields).iLocalPos;
                              MStack_11._31_2_ = (pCVar28->fields).iLocalPos.z;
                              MStack_11._33_4_ =
                                   (((e->fields)._SelectedCube_k__BackingField)->fields).pickedFace;
                              if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                func_?();
                              }
                              localPos_00.z = MStack_11.token._1_2_;
                              localPos_00._0_4_ = &IStack_22;
                              IVar29 = Cube::Cube_GetCubePosAboveFace
                                                 (localPos_00,
                                                  CONCAT22(in_stack_56,MStack_11._31_2_),
                                                  (MethodInfo *)MStack_11._33_4_);
                              MStack_11._37_4_ = IVar29._0_4_;
                              pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                              pMVar20 = (this->fields).modelCursor;
                              pCVar21 = (Cube *)MStack_11._17_4_;
                              IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if ((pMVar25 != (MVCubeModelBase *)0x0) &&
                                 (IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                 pVVar23 = (Vector3__Array *)
                                           CONCAT22(MStack_11._7_2_,
                                                    MStack_11.virtualMethodPointer._1_2_),
                                 fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                          MStack_11.invoker_method._1_2_),
                                 pMVar20 != (ModelCursor3D *)0x0)) {
                                iPos_00.z._1_1_ =
                                     (char)((ushort)*(int16_t *)
                                                     &((Vector3__Array *)MStack_11._37_4_)->monitor
                                           >> 8);
                                iPos_00._0_5_ = *(undefined5 *)MStack_11._37_4_;
                                ModelCursor::ModelCursor_SetErrorCursor
                                          ((ModelCursor *)pMVar20,iPos_00,
                                           (pMVar25->fields)._.gameObject,0,(MethodInfo *)0x0);
                                uStack_4 = 0xffffffff;
                                MStack_11._9_4_ =
                                     CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                                IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                break;
                              }
                            }
                          }
                          goto code_?;
                        }
                      }
                      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControl
                                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                      MStack_11._9_4_ = CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                      IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                      if (bVar19 != 0) {
                        MStack_11._37_4_ =
                             UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time
                                       ((MethodInfo *)0x0);
                        MStack_11._9_4_ = CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                        IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                        if (_UNK_? < (float)MStack_11._37_4_ - (this->fields).prevMouseUpTime
                           ) {
                          if (cRam_? == '\0') {
                            func_?();
                            func_?();
                            func_?();
                            cRam_? = '\x01';
                          }
                          MStack_11._9_4_ =
                               CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                          IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                          if ((this->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
                            if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            fVar24 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                               (StringLiteral_Mouse_X,(MethodInfo *)0x0);
                            MStack_11._37_4_ = (uint)fVar24 & _UNK_?;
                            MStack_11._33_4_ =
                                 MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                                           (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
                            IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                            if (((float)MStack_11._37_4_ != 0.0) ||
                               (MStack_11._9_4_ =
                                     CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_),
                               (float)(MStack_11._33_4_ & _UNK_?) != 0.0)) {
                              pCVar28 = (this->fields).prevSelectedCube;
                              pCVar21 = (Cube *)MStack_11._17_4_;
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                       MStack_11.invoker_method._1_2_);
                              if (pCVar28 != (CubePickingInfo *)0x0) {
                                MStack_11._33_4_ = (pCVar28->fields).cube;
                                MStack_11._37_4_ =
                                     (((this->fields).prevSelectedCube)->fields).pickedFace;
                                if ((TypeInfo__MV__WorldObject__CubeBase->_1).
                                    cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                uVar46 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                                         CubeBase_GetMaterial
                                                   ((CubeBase *)MStack_11._33_4_,MStack_11._37_4_,
                                                    (MethodInfo *)0x0);
                                MStack_11.field8_0x20._1_1_ = uVar46;
                                pMVar57 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                    ((MethodInfo *)0x0);
                                pCVar21 = (Cube *)MStack_11._17_4_;
                                IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                pVVar23 = (Vector3__Array *)
                                          CONCAT22(MStack_11._7_2_,
                                                   MStack_11.virtualMethodPointer._1_2_);
                                fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                         MStack_11.invoker_method._1_2_);
                                if ((pMVar57 != (MVNetworkGame *)0x0) &&
                                   (this_00 = (pMVar57->fields)._MaterialRepository_k__BackingField,
                                   IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x),
                                   pVVar23 = (Vector3__Array *)
                                             CONCAT22(MStack_11._7_2_,
                                                      MStack_11.virtualMethodPointer._1_2_),
                                   fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                            MStack_11.invoker_method._1_2_),
                                   this_00 != (MVMaterialRepository *)0x0)) {
                                  bVar19 = MVMaterialRepository::
                                           MVMaterialRepository_IsMaterialUnlocked_1
                                                     (this_00,MStack_11.field8_0x20._1_1_,
                                                      (MethodInfo *)0x0);
                                  if (bVar19 != 0) {
                                    uVar46 = CubeModelingStateMachine::
                                             CubeModelingStateMachine_get_CurrentMaterialId
                                                       (e,(MethodInfo *)0x0);
                                    (this->fields).prevMaterial = uVar46;
                                    CubeModelingStateMachine::
                                    CubeModelingStateMachine_set_CurrentMaterialId
                                              (e,MStack_11.field8_0x20._1_1_,(MethodInfo *)0x0);
                                    (this->fields).movingEdgeCube = (this->fields).prevSelectedCube;
                                    func_?();
                                    (this->fields).currentInternalState = 0;
                                    (this->fields).deltaAccum = 0.0;
                                    UnityEngine.CoreModule.dll::UnityEngine::Cursor::
                                    Cursor_1_set_visible(0,(MethodInfo *)0x0);
                                    MStack_11._9_4_ =
                                         CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                                    IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                                    break;
                                  }
                                  pCVar28 = (this->fields).prevSelectedCube;
code_?:
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                           MStack_11.invoker_method._1_2_);
                                  if (((pCVar28 != (CubePickingInfo *)0x0) &&
                                      (pMVar25 = (e->fields)._TargetCubeModel_k__BackingField,
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_),
                                      fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                               MStack_11.invoker_method._1_2_),
                                      pMVar25 != (MVCubeModelBase *)0x0)) &&
                                     (pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_),
                                     fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                              MStack_11.invoker_method._1_2_),
                                     (this->fields).modelCursor != (ModelCursor3D *)0x0)) {
                                    iPos_01.z._1_1_ =
                                         (char)((ushort)(pCVar28->fields).iLocalPos.z >> 8);
                                    iPos_01._0_5_ = *(undefined5 *)&(pCVar28->fields).iLocalPos;
                                    ModelCursor::ModelCursor_SetErrorCursor
                                              ((ModelCursor *)(this->fields).modelCursor,iPos_01,
                                               (pMVar25->fields)._.gameObject,1,(MethodInfo *)0x0);
                                    MStack_11._9_4_ =
                                         CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                                    break;
                                  }
                                }
                              }
                              goto code_?;
                            }
                          }
                        }
                      }
                      break;
                    case 3:
                      if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      bVar19 = MVInputWrapper::MVInputWrapper_GetBooleanControlUp
                                         (KogamaControls__Enum_PointerSelect,(MethodInfo *)0x0);
                      IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                      if (bVar19 == 0) {
                        pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                        pCVar21 = (Cube *)MStack_11._17_4_;
                        pVVar23 = (Vector3__Array *)
                                  CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                        fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                        if (pMVar25 == (MVCubeModelBase *)0x0) goto code_?;
                        bVar19 = DrawPlane::DrawPlane_GetCubePosOnDrawplane
                                           ((pMVar25->fields)._.gameObject,
                                            (IntVector *)&stack0xffffff3c,(MethodInfo *)0x0);
                        MStack_11._9_4_ = CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                        IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                        if (bVar19 != 0) {
                          requestedCubePos_01.z = iVar13;
                          requestedCubePos_01._0_4_ = pVVar12;
                          CVar51 = CubeModelingStateMachine::CubeModelingStateMachine_CanAddCubeAt_1
                                             (e,requestedCubePos_01,(MethodInfo *)0x0);
                          MStack_11._9_4_ =
                               CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                          IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                          if (CVar51 == CanPerformCubeActionResult__Enum_Yes) {
                            pos_09.z = iVar13;
                            pos_09._0_4_ = pVVar12;
                            CubeModelingStateMachine::CubeModelingStateMachine_HandleAudio
                                      (e,pos_09,AudioActions__Enum_CubeAdded,(MethodInfo *)0x0);
                            pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                            MStack_11._31_2_ = iVar13;
                            MStack_11._21_4_ = pVVar12;
                            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor
                                == 0) {
                              func_?();
                            }
                            MStack_11._37_4_ =
                                 MVWorldObject.dll::MV::WorldObject::CubeBase::
                                 CubeBase_get_IdentityCorners((MethodInfo *)0x0);
                            if ((TypeInfo__MV__WorldObject__CubeDataPacker->_1).
                                cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            MStack_11._33_4_ =
                                 MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                                 CubeDataPacker_CornersToByteArray
                                           ((Vector3__Array *)MStack_11._37_4_,(MethodInfo *)0x0);
                            uVar46 = CubeModelingStateMachine::
                                     CubeModelingStateMachine_get_CurrentMaterialId
                                               (e,(MethodInfo *)0x0);
                            MStack_11.token._1_1_ = uVar46;
                            if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            pBVar45 = Cube::Cube_CreateMaterialArray
                                                (MStack_11.token._1_1_,(MethodInfo *)0x0);
                            MStack_11._37_4_ = func_?();
                            Cube::Cube__ctor((Cube *)MStack_11._37_4_,
                                             (Byte__Array *)MStack_11._33_4_,pBVar45,
                                             (MethodInfo *)0x0);
                            pCVar21 = (Cube *)MStack_11._17_4_;
                            IStack_22._0_4_ = CONCAT22(IStack_22.y,IStack_22.x);
                            pVVar23 = (Vector3__Array *)
                                      CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_)
                            ;
                            fVar24 = (float)CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_
                                                    );
                            if (pMVar25 == (MVCubeModelBase *)0x0) goto code_?;
                            pos_01.z._0_1_ = MStack_11.field7_0x1c._3_1_;
                            pos_01._0_4_ = MStack_11._21_4_;
                            pos_01.z._1_1_ = MStack_11.field8_0x20._0_1_;
                            MVCubeModelBase::MVCubeModelBase_AddCube
                                      (pMVar25,pos_01,(CubeBase *)MStack_11._37_4_,(MethodInfo *)0x0
                                      );
code_?:
                            MStack_11._9_4_ =
                                 CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                          }
                        }
                      }
                      else {
                        (this->fields).currentInternalState = 2;
                        MStack_11._9_4_ = CONCAT22(MStack_11._11_2_,MStack_11.invoker_method._1_2_);
                      }
                    }
                    if ((this->fields).movingEdgeCube == (CubePickingInfo *)0x0) {
                      pCVar21 = (Cube *)0x0;
                    }
                    else {
                      pCVar48 = (((this->fields).movingEdgeCube)->fields).cube;
                      pCVar21 = (Cube *)MStack_11._17_4_;
                      pVVar23 = (Vector3__Array *)
                                CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                      fVar24 = (float)MStack_11._9_4_;
                      if (pCVar48 == (Cube *)0x0) goto code_?;
                      pCVar21 = Cube::Cube_Clone(pCVar48,(MethodInfo *)0x0);
                    }
                    (this->fields).prevCubeState = pCVar21;
                    func_?();
                    (this->fields).prevSelectedCube = (e->fields)._SelectedCube_k__BackingField;
                    func_?();
                    if ((this->fields).modelCursor == (ModelCursor3D *)0x0) goto code_?;
                    pVVar12 = (Vector3__Array *)(this->fields).movingEdgeCube;
                    pMVar20 = (this->fields).modelCursor;
                    MStack_11._37_4_ = (e->fields)._SelectedCube_k__BackingField;
                    pMVar25 = (e->fields)._TargetCubeModel_k__BackingField;
                    pCVar21 = (Cube *)MStack_11._17_4_;
                    MStack_11._21_4_ = pVVar12;
                    pVVar23 = (Vector3__Array *)
                              CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                    fVar24 = (float)MStack_11._9_4_;
                    if (pMVar25 != (MVCubeModelBase *)0x0) {
                      pMVar25 = (MVCubeModelBase *)(pMVar25->fields)._.gameObject;
                      iVar42 = (this->fields).currentInternalState;
                      IStack_22.z = (int16_t)iVar42;
                      uStack_35 = (undefined2)((uint)iVar42 >> 0x10);
                      MStack_11._33_4_ = pMVar25;
                      if (pVVar12 == (Vector3__Array *)0x0) {
                        pFVar58 = (pMVar20->fields)._.faceCursor;
                        if ((Vector3__Array *)MStack_11._37_4_ == (Vector3__Array *)0x0) {
                          pVVar23 = (Vector3__Array *)
                                    CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                          if ((pFVar58 != (FaceCursor *)0x0) &&
                             (pGVar27 = (pFVar58->fields).gameObject,
                             pVVar23 = (Vector3__Array *)
                                       CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_
                                               ), pGVar27 != (GameObject *)0x0)) {
                            IStack_22.z = -0x40d;
                            uStack_35 = 0x1044;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar27,0,(MethodInfo *)0x0);
                            pIVar26 = (pMVar20->fields).indentArea;
                            pCVar21 = (Cube *)MStack_11._17_4_;
                            pVVar23 = (Vector3__Array *)
                                      CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_)
                            ;
                            fVar24 = (float)MStack_11._9_4_;
                            if ((pIVar26 != (IndentArea *)0x0) &&
                               (pGVar27 = (pIVar26->fields).gameObject,
                               pVVar23 = (Vector3__Array *)
                                         CONCAT22(MStack_11._7_2_,
                                                  MStack_11.virtualMethodPointer._1_2_),
                               pGVar27 != (GameObject *)0x0)) {
                              UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                              GameObject_SetActive(pGVar27,0,(MethodInfo *)0x0);
code_?:
                              this_01 = (pMVar20->fields)._.errorCursor;
                              pCVar21 = (Cube *)MStack_11._17_4_;
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)MStack_11._9_4_;
                              if (this_01 != (CellCursor *)0x0) {
                                CellCursor::CellCursor_UpdateCursor(this_01,(MethodInfo *)0x0);
                                uVar59 = MStack_11._37_4_;
                                if (CONCAT22(uStack_35,IStack_22.z) == 3) {
                                  fVar60 = 0.0;
                                  fVar39 = 0.0;
                                  fVar61 = 0.0;
                                  bVar19 = DrawPlane::DrawPlane_Pick
                                                     ((Vector3 *)&stack0xffffff14,(MethodInfo *)0x0)
                                  ;
                                  if (bVar19 == 0) {
code_?:
                                    *unaff_FS_OFFSET = uStack_6;
                                    return;
                                  }
                                  pGVar62 = MVGameControllerBase::
                                            MVGameControllerBase_get_GameEventManager
                                                      ((MethodInfo *)0x0);
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  fVar24 = (float)MStack_11._9_4_;
                                  if (((pGVar62 != (GameEventManager *)0x0) &&
                                      (pGVar63 = (pGVar62->fields).AvatarCommandsBuildMode,
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_),
                                      pGVar63 !=
                                      (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                     (pGVar64 = (pGVar63->fields).LaserCommands,
                                     pVVar23 = (Vector3__Array *)
                                               CONCAT22(MStack_11._7_2_,
                                                        MStack_11.virtualMethodPointer._1_2_),
                                     pGVar64 !=
                                     (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                      *)0x0)) {
                                    GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                    ::
                                    GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                              (pGVar64,0.2,(MethodInfo *)0x0);
                                    pGVar62 = MVGameControllerBase::
                                              MVGameControllerBase_get_GameEventManager
                                                        ((MethodInfo *)0x0);
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)MStack_11._9_4_;
                                    if (((pGVar62 != (GameEventManager *)0x0) &&
                                        (pGVar63 = (pGVar62->fields).AvatarCommandsBuildMode,
                                        pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_),
                                        pGVar63 !=
                                        (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                       (pGVar64 = (pGVar63->fields).LaserCommands,
                                       pVVar23 = (Vector3__Array *)
                                                 CONCAT22(MStack_11._7_2_,
                                                          MStack_11.virtualMethodPointer._1_2_),
                                       pGVar64 !=
                                       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                        *)0x0)) {
                                      to_00.y = fVar61;
                                      to_00.x = fVar39;
                                      to_00.z = fVar60;
                                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                      ::
                                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                (pGVar64,to_00,(MethodInfo *)0x0);
                                      *unaff_FS_OFFSET = uStack_6;
                                      return;
                                    }
                                  }
                                }
                                else if (pVVar12 == (Vector3__Array *)0x0) {
                                  if ((char)MStack_11.klass == '\0') {
                                    if ((Vector3__Array *)MStack_11._37_4_ == (Vector3__Array *)0x0)
                                    goto code_?;
                                    pGVar62 = MVGameControllerBase::
                                              MVGameControllerBase_get_GameEventManager
                                                        ((MethodInfo *)0x0);
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    fVar24 = (float)MStack_11._9_4_;
                                    if (((pGVar62 != (GameEventManager *)0x0) &&
                                        (pGVar63 = (pGVar62->fields).AvatarCommandsBuildMode,
                                        pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_),
                                        pGVar63 !=
                                        (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                       (pGVar64 = (pGVar63->fields).LaserCommands,
                                       pVVar23 = (Vector3__Array *)
                                                 CONCAT22(MStack_11._7_2_,
                                                          MStack_11.virtualMethodPointer._1_2_),
                                       pGVar64 !=
                                       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                        *)0x0)) {
                                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                      ::
                                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                (pGVar64,*(Vector3 *)
                                                          &((Vector3 *)(uVar59 + 0x10))[1].z,
                                                 (MethodInfo *)0x0);
                                      *unaff_FS_OFFSET = uStack_6;
                                      return;
                                    }
                                  }
                                  else {
                                    pGVar62 = MVGameControllerBase::
                                              MVGameControllerBase_get_GameEventManager
                                                        ((MethodInfo *)0x0);
code_?:
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = (Vector3__Array *)MStack_11._5_4_;
                                    fVar24 = (float)MStack_11._9_4_;
                                    if (((pGVar62 != (GameEventManager *)0x0) &&
                                        (pGVar63 = (pGVar62->fields).AvatarCommandsBuildMode,
                                        pGVar63 !=
                                        (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
                                       (pGVar64 = (pGVar63->fields).LaserCommands,
                                       pGVar64 !=
                                       (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                        *)0x0)) {
                                      GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                      ::
                                      GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_ActivateLaserForDuration
                                                (pGVar64,0.2,(MethodInfo *)0x0);
                                      *unaff_FS_OFFSET = uStack_6;
                                      return;
                                    }
                                  }
                                }
                                else {
                                  if (cRam_? == '\0') {
                                    func_?();
                                    func_?();
                                    cRam_? = '\x01';
                                  }
                                  pCVar21 = ((CubePickingInfo__Fields *)&pVVar12->bounds)->cube;
                                  MStack_11.invoker_method._1_2_ = (int16_t)pVVar12->max_length;
                                  MStack_11._11_2_ = SUB42(pVVar12->max_length >> 0x10,0);
                                  fVar24 = pVVar12->vector[2].z;
                                  IStack_22.z = SUB42(fVar24,0);
                                  uStack_35 = (undefined2)((uint)fVar24 >> 0x10);
                                  MStack_11._31_2_ = *(int16_t *)&pVVar12->vector[3].x;
                                  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                    func_?();
                                  }
                                  uVar59 = MStack_11._33_4_;
                                  iVector_01.y = uStack_35;
                                  iVector_01.x = IStack_22.z;
                                  iVector_01.z = MStack_11._31_2_;
                                  pVVar65 = Cube::Cube_GetFaceVerticesWorld
                                                      ((GameObject *)MStack_11._33_4_,pCVar21,
                                                       CONCAT22(MStack_11._11_2_,
                                                                MStack_11.invoker_method._1_2_),
                                                       iVector_01,(MethodInfo *)0x0);
                                  pVVar23 = (Vector3__Array *)
                                            CONCAT22(MStack_11._7_2_,
                                                     MStack_11.virtualMethodPointer._1_2_);
                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                  fVar24 = (float)MStack_11._9_4_;
                                  if (pVVar65 != (Vector3__Array *)0x0) {
                                    pVVar66 = pVVar23;
                                    if ((pVVar65->max_length == 0) || (pVVar65->max_length < 2))
                                    goto code_?;
                                    uVar67 = pVVar65->vector[1].x;
                                    uVar68 = pVVar65->vector[1].y;
                                    uVar69 = pVVar65->vector[0].x;
                                    uVar70 = pVVar65->vector[0].y;
                                    if (pVVar65->max_length < 3) goto code_?;
                                    uVar71 = pVVar65->vector[2].x;
                                    uVar72 = pVVar65->vector[2].y;
                                    if (pVVar65->max_length < 4) goto code_?;
                                    uVar73 = pVVar65->vector[3].x;
                                    uVar74 = pVVar65->vector[3].y;
                                    pVVar23 = (Vector3__Array *)
                                              (((float)uVar73 +
                                               (float)uVar71 + (float)uVar67 + (float)uVar69) *
                                              _UNK_?);
                                    pMVar25 = (MVCubeModelBase *)
                                              (((float)uVar74 +
                                               (float)uVar72 + (float)uVar68 + (float)uVar70) *
                                              _UNK_?);
                                    fVar39 = (pVVar65->vector[3].z +
                                             pVVar65->vector[2].z +
                                             pVVar65->vector[1].z + pVVar65->vector[0].z) *
                                             _UNK_?;
                                    MStack_11._33_4_ = pMVar25;
                                    MStack_11._37_4_ = pVVar23;
                                    if (pVVar12->vector[0].x == 0.0) {
                                      IStack_22.x = 0;
                                      IStack_22.y = 0;
                                      IStack_22.z = 0;
                                      uStack_35 = 0;
                                      pVVar12 = pVVar23;
                                      pMVar75 = pMVar25;
                                      if (cRam_? == '\0') {
                                        func_?();
                                        cRam_? = '\x01';
                                      }
                                      pVVar76 = TypeInfo__UnityEngine__Vector3->static_fields;
                                      pCStack_49 = (CanPerformCubeActionResult__Enum__Class *)
                                                   (pVVar76->upVector).x;
                                      unique0x0000a404 = (MonitorData *)(pVVar76->upVector).y;
                                      fVar24 = (pVVar76->upVector).z;
                                      fVar61 = (float)pCStack_49 + (float)MStack_11._37_4_;
                                      fVar60 = (float)unique0x0000a404 + (float)MStack_11._33_4_;
                                      if ((TypeInfo__UnityEngine__Debug->_1).
                                          cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      start_00.y._0_1_ = (char)pMVar25;
                                      start_00.x = (float)pVVar23;
                                      start_00.y._1_1_ = (char)((uint)pMVar25 >> 8);
                                      start_00.y._2_2_ = (short)((uint)pMVar25 >> 0x10);
                                      start_00.z = fVar39;
                                      end_00.y._0_2_ = SUB42(fVar60,0);
                                      end_00.x = fVar61;
                                      end_00.y._2_2_ = (short)((uint)fVar60 >> 0x10);
                                      end_00.z = fVar24 + fVar39;
                                      color_00.g = (float)_UNK_?;
                                      color_00.r = (float)_UNK_?;
                                      color_00.b = (float)_UNK_?;
                                      color_00.a._0_1_ = (char)_UNK_?;
                                      color_00.a._1_1_ = (char)((uint)_UNK_? >> 8);
                                      color_00.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                                      UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                      Debug_2_DrawLine_1(start_00,end_00,color_00,(MethodInfo *)0x0)
                                      ;
                                      pVVar23 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_);
code_?:
                                      MStack_11._5_4_ = pVVar23;
                                      pGVar62 = MVGameControllerBase::
                                                MVGameControllerBase_get_GameEventManager
                                                          ((MethodInfo *)0x0);
                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                      pVVar23 = (Vector3__Array *)MStack_11._5_4_;
                                      fVar24 = (float)MStack_11._9_4_;
                                      if (((pGVar62 != (GameEventManager *)0x0) &&
                                          (pGVar63 = (pGVar62->fields).AvatarCommandsBuildMode,
                                          pGVar63 !=
                                          (GameEventManager_AvatarCommandsBuildModeManager *)0x0))
                                         && (pGVar64 = (pGVar63->fields).LaserCommands,
                                            pGVar64 !=
                                            (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager
                                             *)0x0)) {
                                        to.y._0_2_ = (short)pMVar75;
                                        to.x = (float)pVVar12;
                                        to.y._2_2_ = (short)((uint)pMVar75 >> 0x10);
                                        to.z._0_1_ = SUB41(fVar39,0);
                                        to.z._1_1_ = (char)((uint)fVar39 >> 8);
                                        to.z._2_2_ = (short)((uint)fVar39 >> 0x10);
                                        GameEventManager+AvatarCommandsBuildModeManager+LaserCommandsManager
                                        ::
                                        GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager_UpdatePosition
                                                  (pGVar64,to,(MethodInfo *)0x0);
                                        pGVar62 = MVGameControllerBase::
                                                  MVGameControllerBase_get_GameEventManager
                                                            ((MethodInfo *)0x0);
                                        goto code_?;
                                      }
                                    }
                                    else {
                                      MStack_11._17_4_ =
                                           ((CubePickingInfo__Fields *)&pVVar12->bounds)->cube;
                                      FVar44 = pVVar12->max_length;
                                      fVar24 = pVVar12->vector[0].x;
                                      MStack_11.invoker_method._1_2_ = SUB42(fVar24,0);
                                      MStack_11._11_2_ = SUB42((uint)fVar24 >> 0x10,0);
                                      fVar24 = pVVar12->vector[2].z;
                                      IStack_22.z = SUB42(fVar24,0);
                                      uStack_35 = (undefined2)((uint)fVar24 >> 0x10);
                                      MStack_11._31_2_ = *(int16_t *)&pVVar12->vector[3].x;
                                      if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                                        func_?();
                                      }
                                      iVector_00.y = uStack_35;
                                      iVector_00.x = IStack_22.z;
                                      iVector_00.z = MStack_11._31_2_;
                                      pVVar65 = Cube::Cube_GetEdgeVerticesWorld
                                                          ((GameObject *)uVar59,
                                                           (Cube *)MStack_11._17_4_,FVar44,
                                                           CONCAT22(MStack_11._11_2_,
                                                                    MStack_11.invoker_method._1_2_),
                                                           iVector_00,(MethodInfo *)0x0);
                                      pVVar66 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_);
                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                      if (*(bool *)&pVVar12->vector[0].y == 0) {
                                        pVVar23 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_);
                                        fVar24 = (float)CONCAT22(MStack_11._11_2_,
                                                                 MStack_11.invoker_method._1_2_);
                                        if (pVVar65 != (Vector3__Array *)0x0) {
                                          if (*(bool *)((int)&pVVar12->vector[0].y + 1) == 0) {
                                            if ((pVVar65->max_length == 0) ||
                                               (pVVar65->max_length < 2)) goto code_?;
                                            uVar77 = pVVar65->vector[1].x;
                                            uVar78 = pVVar65->vector[1].y;
                                            uVar79 = pVVar65->vector[0].x;
                                            uVar80 = pVVar65->vector[0].y;
                                            MStack_11._9_4_ =
                                                 (pVVar65->vector[1].z + pVVar65->vector[0].z) *
                                                 _UNK_?;
                                            MStack_11._1_4_ =
                                                 ((float)uVar77 + (float)uVar79) * _UNK_?;
                                            pVVar23 = (Vector3__Array *)
                                                      (((float)uVar78 + (float)uVar80) *
                                                      _UNK_?);
                                          }
                                          else {
                                            if (pVVar65->max_length < 2) goto code_?;
                                            uVar81 = pVVar65->vector[1].x;
                                            pVVar23 = (Vector3__Array *)pVVar65->vector[1].y;
                                            MStack_11._9_4_ = pVVar65->vector[1].z;
                                            MStack_11._1_4_ = uVar81;
                                          }
code_?:
                                          fVar39 = (float)MStack_11._9_4_ +
                                                   (fVar39 - (float)MStack_11._9_4_) * _UNK_?
                                          ;
                                          pVVar12 = (Vector3__Array *)
                                                    ((float)MStack_11._1_4_ +
                                                    ((float)MStack_11._37_4_ -
                                                    (float)MStack_11._1_4_) * _UNK_?);
                                          pMVar75 = (MVCubeModelBase *)
                                                    ((float)pVVar23 +
                                                    ((float)MStack_11._33_4_ - (float)pVVar23) *
                                                    _UNK_?);
                                          goto code_?;
                                        }
                                      }
                                      else {
                                        pVVar23 = pVVar66;
                                        fVar24 = (float)MStack_11._9_4_;
                                        if (pVVar65 != (Vector3__Array *)0x0) {
                                          if (pVVar65->max_length == 0) goto code_?;
                                          uVar82 = pVVar65->vector[0].x;
                                          uVar83 = pVVar65->vector[0].y;
                                          fVar60 = pVVar65->vector[0].z;
                                          MStack_11.virtualMethodPointer._1_2_ = (short)uVar83;
                                          MStack_11._7_2_ = SUB42((uint)uVar83 >> 0x10,0);
                                          IStack_22.x = (int16_t)uVar82;
                                          IStack_22.y = (int16_t)((uint)uVar82 >> 0x10);
                                          fVar24 = pVVar65->vector[0].x;
                                          fVar61 = pVVar65->vector[0].y;
                                          MStack_11.invoker_method._1_2_ = SUB42(fVar60,0);
                                          MStack_11._11_2_ = SUB42((uint)fVar60 >> 0x10,0);
                                          IStack_22.z = MStack_11.virtualMethodPointer._1_2_;
                                          uStack_35 = MStack_11._7_2_;
                                          fVar84 = fVar60;
                                          MStack_11._1_4_ = uVar82;
                                          if (cRam_? == '\0') {
                                            func_?();
                                            cRam_? = '\x01';
                                          }
                                          pVVar76 = TypeInfo__UnityEngine__Vector3->static_fields;
                                          uVar85 = (pVVar76->upVector).x;
                                          uVar86 = (pVVar76->upVector).y;
                                          stack0xffffff5c = (MonitorData *)((float)uVar86 + fVar61);
                                          pCStack_49 = (CanPerformCubeActionResult__Enum__Class *)
                                                       ((float)uVar85 + fVar24);
                                          fVar84 = (pVVar76->upVector).z + fVar84;
                                          if ((TypeInfo__UnityEngine__Debug->_1).
                                              cctor_finished_or_no_cctor == 0) {
                                            func_?();
                                          }
                                          start.x._2_2_ = IStack_22.y;
                                          start.x._0_2_ = IStack_22.x;
                                          start.y._0_2_ = IStack_22.z;
                                          start.y._2_2_ = uStack_35;
                                          start.z = fVar60;
                                          end.z = fVar84;
                                          end.x = (float)pCStack_49;
                                          end.y = (float)stack0xffffff5c;
                                          color.g = (float)_UNK_?;
                                          color.r = (float)_UNK_?;
                                          color.b = (float)_UNK_?;
                                          color.a._0_1_ = (char)_UNK_?;
                                          color.a._1_1_ = (char)((uint)_UNK_? >> 8);
                                          color.a._2_2_ = (short)((uint)_UNK_? >> 0x10);
                                          UnityEngine.CoreModule.dll::UnityEngine::Debug::
                                          Debug_2_DrawLine_1(start,end,color,(MethodInfo *)0x0);
                                          pVVar23 = (Vector3__Array *)
                                                    CONCAT22(MStack_11._7_2_,
                                                             MStack_11.virtualMethodPointer._1_2_);
                                          goto code_?;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        else {
                          pVVar23 = (Vector3__Array *)
                                    CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                          if ((pFVar58 != (FaceCursor *)0x0) &&
                             (pGVar27 = (pFVar58->fields).gameObject,
                             pVVar23 = (Vector3__Array *)
                                       CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_
                                               ), pGVar27 != (GameObject *)0x0)) {
                            IStack_22.z = -0x3c1;
                            uStack_35 = 0x1044;
                            UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_SetActive(pGVar27,1,(MethodInfo *)0x0);
                            pVVar23 = (Vector3__Array *)
                                      CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_)
                            ;
                            pFVar58 = (pMVar20->fields)._.faceCursor;
                            pVVar66 = (Vector3__Array *)MStack_11._37_4_;
joined_?:
                            pCVar21 = (Cube *)MStack_11._17_4_;
                            fVar24 = (float)MStack_11._9_4_;
                            if (pFVar58 != (FaceCursor *)0x0) {
                              FaceCursor::FaceCursor_UpdateCursor
                                        (pFVar58,(CubePickingInfo *)pVVar66,
                                         (GameObject *)MStack_11._33_4_,(MethodInfo *)0x0);
                              goto code_?;
                            }
                          }
                        }
                      }
                      else {
                        MStack_11._25_4_ = (pMVar20->fields).indentArea;
                        pVVar23 = (Vector3__Array *)
                                  CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                        if ((IndentArea *)MStack_11._25_4_ != (IndentArea *)0x0) {
                          if (cRam_? == '\0') {
                            func_?();
                            func_?();
                            IStack_22.z = -0x36b;
                            uStack_35 = 0x1044;
                            func_?();
                            IStack_22.z = -0x1c8c;
                            uStack_35 = 0x119b;
                            IStack_22.x = -0x361;
                            IStack_22.y = 0x1044;
                            func_?();
                            IStack_22.x = -0x204c;
                            IStack_22.y = 0x119b;
                            func_?();
                            func_?();
                            cRam_? = '\x01';
                          }
                          MStack_11._17_4_ = ((CubePickingInfo__Fields *)&pVVar12->bounds)->cube;
                          FVar44 = pVVar12->max_length;
                          MStack_11._21_4_ = pVVar12->vector[2].z;
                          iVar13 = *(int16_t *)&pVVar12->vector[3].x;
                          MStack_11._31_2_ = iVar13;
                          if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
                            func_?();
                          }
                          iVector_03.z._0_1_ = MStack_11.field7_0x1c._3_1_;
                          iVector_03._0_4_ = MStack_11._21_4_;
                          iVector_03.z._1_1_ = MStack_11.field8_0x20._0_1_;
                          MStack_11._29_4_ =
                               Cube::Cube_GetFaceVerticesWorld
                                         ((GameObject *)pMVar25,(Cube *)MStack_11._17_4_,FVar44,
                                          iVector_03,(MethodInfo *)0x0);
                          this_03 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                     *)func_?();
                          mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::
                          Metadata::__Il2CppFullySharedGenericType]::
                          LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                                    ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                                      *)this_03,
                                     MethodInfo__System__Collections__Generic__List<int>__List__);
                          pGVar27 = ((IndentArea__Fields *)(MStack_11._25_4_ + 8))->gameObject;
                          pCVar21 = (Cube *)MStack_11._17_4_;
                          pVVar23 = (Vector3__Array *)
                                    CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_);
                          fVar24 = (float)MStack_11._9_4_;
                          if (pGVar27 != (GameObject *)0x0) {
                            this_04 = (MeshFilter *)
                                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponent_1
                                                (pGVar27,
                                                 UnityEngine__MeshFilter_MethodInfo__UnityEngine__GameObject__GetComponent<UnityEngine::MeshFilter>__
                                                );
                            pCVar21 = (Cube *)MStack_11._17_4_;
                            pVVar23 = (Vector3__Array *)
                                      CONCAT22(MStack_11._7_2_,MStack_11.virtualMethodPointer._1_2_)
                            ;
                            fVar24 = (float)MStack_11._9_4_;
                            if (this_04 != (MeshFilter *)0x0) {
                              MStack_11._21_4_ =
                                   UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::
                                   MeshFilter_get_mesh(this_04,(MethodInfo *)0x0);
                              pCVar21 = (Cube *)MStack_11._17_4_;
                              pVVar23 = (Vector3__Array *)
                                        CONCAT22(MStack_11._7_2_,
                                                 MStack_11.virtualMethodPointer._1_2_);
                              fVar24 = (float)MStack_11._9_4_;
                              if ((Vector3__Array *)MStack_11._21_4_ != (Vector3__Array *)0x0) {
                                UnityEngine.CoreModule.dll::UnityEngine::Mesh::Mesh_Clear
                                          ((Mesh *)MStack_11._21_4_,(MethodInfo *)0x0);
                                pMVar40 = 
                                MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                pVVar66 = (Vector3__Array *)
                                          CONCAT22(MStack_11._7_2_,
                                                   MStack_11.virtualMethodPointer._1_2_);
                                pCVar21 = (Cube *)MStack_11._17_4_;
                                pVVar23 = (Vector3__Array *)
                                          CONCAT22(MStack_11._7_2_,
                                                   MStack_11.virtualMethodPointer._1_2_);
                                fVar24 = (float)MStack_11._9_4_;
                                if (this_03 !=
                                    (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                                     *)0x0) {
                                  piVar87 = &(this_03->fields)._version;
                                  *piVar87 = *piVar87 + 1;
                                  pMVar88 = (this_03->fields)._items;
                                  uVar89 = (this_03->fields)._size;
                                  pVVar23 = pVVar66;
                                  if (pMVar88 !=
                                      (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                                      0x0) {
                                    if (uVar89 < pMVar88->max_length) {
                                      (this_03->fields)._size = uVar89 + 1;
                                      if (pMVar88->max_length <= uVar89) goto code_?;
                                      (&pMVar88->vector[0].index)[uVar89] = 0;
                                    }
                                    else {
                                      mscorlib.dll::System::Collections::Generic::List`1[System::
                                      Int32]::List_1_System_Int32__AddWithResize
                                                ((List_1_System_Int32_ *)this_03,0,
                                                 pMVar40->klass->rgctx_data[0xe].method);
                                    }
                                    pMVar40 = 
                                    MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                    pVVar66 = (Vector3__Array *)
                                              CONCAT22(MStack_11._7_2_,
                                                       MStack_11.virtualMethodPointer._1_2_);
                                    piVar87 = &(this_03->fields)._version;
                                    *piVar87 = *piVar87 + 1;
                                    pMVar88 = (this_03->fields)._items;
                                    uVar89 = (this_03->fields)._size;
                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                    pVVar23 = pVVar66;
                                    fVar24 = (float)MStack_11._9_4_;
                                    if (pMVar88 !=
                                        (MultiColumnCollectionHeader_ViewState_ColumnState__Array *)
                                        0x0) {
                                      if (uVar89 < pMVar88->max_length) {
                                        (this_03->fields)._size = uVar89 + 1;
                                        if (pMVar88->max_length <= uVar89) goto code_?;
                                        (&pMVar88->vector[0].index)[uVar89] = 3;
                                      }
                                      else {
                                        mscorlib.dll::System::Collections::Generic::List`1[System::
                                        Int32]::List_1_System_Int32__AddWithResize
                                                  ((List_1_System_Int32_ *)this_03,3,
                                                   pMVar40->klass->rgctx_data[0xe].method);
                                      }
                                      pMVar40 = 
                                      MethodInfo__System__Collections__Generic__List<int>__Add_int_;
                                      pVVar66 = (Vector3__Array *)
                                                CONCAT22(MStack_11._7_2_,
                                                         MStack_11.virtualMethodPointer._1_2_);
                                      piVar87 = &(this_03->fields)._version;
                                      *piVar87 = *piVar87 + 1;
                                      pMVar88 = (this_03->fields)._items;
                                      uVar89 = (this_03->fields)._size;
                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                      pVVar23 = pVVar66;
                                      fVar24 = (float)MStack_11._9_4_;
                                      if (pMVar88 !=
                                          (MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                           *)0x0) {
                                        if (uVar89 < pMVar88->max_length) {
                                          (this_03->fields)._size = uVar89 + 1;
                                          if (pMVar88->max_length <= uVar89) goto code_?;
                                          (&pMVar88->vector[0].index)[uVar89] = 2;
                                        }
                                        else {
                                          mscorlib.dll::System::Collections::Generic::List`1[System
                                          ::Int32]::List_1_System_Int32__AddWithResize
                                                    ((List_1_System_Int32_ *)this_03,2,
                                                     pMVar40->klass->rgctx_data[0xe].method);
                                        }
                                        pMVar40 = 
                                        MethodInfo__System__Collections__Generic__List<int>__Add_int_
                                        ;
                                        pVVar66 = (Vector3__Array *)
                                                  CONCAT22(MStack_11._7_2_,
                                                           MStack_11.virtualMethodPointer._1_2_);
                                        piVar87 = &(this_03->fields)._version;
                                        *piVar87 = *piVar87 + 1;
                                        pMVar88 = (this_03->fields)._items;
                                        uVar89 = (this_03->fields)._size;
                                        pCVar21 = (Cube *)MStack_11._17_4_;
                                        pVVar23 = pVVar66;
                                        fVar24 = (float)MStack_11._9_4_;
                                        if (pMVar88 !=
                                            (MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                             *)0x0) {
                                          if (uVar89 < pMVar88->max_length) {
                                            (this_03->fields)._size = uVar89 + 1;
                                            if (pMVar88->max_length <= uVar89)
                                            goto code_?;
                                            (&pMVar88->vector[0].index)[uVar89] = 2;
                                          }
                                          else {
                                            mscorlib.dll::System::Collections::Generic::
                                            List`1[System::Int32]::
                                            List_1_System_Int32__AddWithResize
                                                      ((List_1_System_Int32_ *)this_03,2,
                                                       pMVar40->klass->rgctx_data[0xe].method);
                                          }
                                          pMVar40 = 
                                          MethodInfo__System__Collections__Generic__List<int>__Add_int_
                                          ;
                                          pVVar66 = (Vector3__Array *)
                                                    CONCAT22(MStack_11._7_2_,
                                                             MStack_11.virtualMethodPointer._1_2_);
                                          piVar87 = &(this_03->fields)._version;
                                          *piVar87 = *piVar87 + 1;
                                          pMVar88 = (this_03->fields)._items;
                                          uVar89 = (this_03->fields)._size;
                                          pCVar21 = (Cube *)MStack_11._17_4_;
                                          pVVar23 = pVVar66;
                                          fVar24 = (float)MStack_11._9_4_;
                                          if (pMVar88 !=
                                              (MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                               *)0x0) {
                                            if (uVar89 < pMVar88->max_length) {
                                              (this_03->fields)._size = uVar89 + 1;
                                              if (pMVar88->max_length <= uVar89)
                                              goto code_?;
                                              (&pMVar88->vector[0].index)[uVar89] = 1;
                                            }
                                            else {
                                              mscorlib.dll::System::Collections::Generic::
                                              List`1[System::Int32]::
                                              List_1_System_Int32__AddWithResize
                                                        ((List_1_System_Int32_ *)this_03,1,
                                                         pMVar40->klass->rgctx_data[0xe].method);
                                            }
                                            pMVar40 = 
                                            MethodInfo__System__Collections__Generic__List<int>__Add_int_
                                            ;
                                            pVVar66 = (Vector3__Array *)
                                                      CONCAT22(MStack_11._7_2_,
                                                               MStack_11.virtualMethodPointer._1_2_)
                                            ;
                                            piVar87 = &(this_03->fields)._version;
                                            *piVar87 = *piVar87 + 1;
                                            pMVar88 = (this_03->fields)._items;
                                            uVar89 = (this_03->fields)._size;
                                            pCVar21 = (Cube *)MStack_11._17_4_;
                                            pVVar23 = pVVar66;
                                            fVar24 = (float)MStack_11._9_4_;
                                            if (pMVar88 !=
                                                (MultiColumnCollectionHeader_ViewState_ColumnState__Array
                                                 *)0x0) {
                                              if (uVar89 < pMVar88->max_length) {
                                                (this_03->fields)._size = uVar89 + 1;
                                                if (pMVar88->max_length <= uVar89)
                                                goto code_?;
                                                (&pMVar88->vector[0].index)[uVar89] = 0;
                                              }
                                              else {
                                                mscorlib.dll::System::Collections::Generic::
                                                List`1[System::Int32]::
                                                List_1_System_Int32__AddWithResize
                                                          ((List_1_System_Int32_ *)this_03,0,
                                                           pMVar40->klass->rgctx_data[0xe].method);
                                              }
                                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                              Mesh_set_vertices((Mesh *)MStack_11._21_4_,
                                                                (Vector3__Array *)MStack_11._29_4_,
                                                                (MethodInfo *)0x0);
                                              value_02 = IndentArea::IndentArea_SetUVs
                                                                   ((IndentArea *)MStack_11._25_4_,
                                                                    (MethodInfo *)0x0);
                                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                              Mesh_set_uv((Mesh *)MStack_11._21_4_,value_02,
                                                          (MethodInfo *)0x0);
                                              pMVar88 = mscorlib.dll::System::Collections::Generic::
                                                        List`1[UnityEngine::UIElements::Internal::
                                                                                                                
                                                  MultiColumnCollectionHeader+ViewState+ColumnState]
                                                  ::
                                                  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState__ToArray
                                                            (this_03,
                                                  MethodInfo__System__Collections__Generic__List<int>__ToArray__
                                                  );
                                              uVar59 = MStack_11._21_4_;
                                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                              Mesh_set_triangles((Mesh *)MStack_11._21_4_,
                                                                 (Int32__Array *)pMVar88,
                                                                 (MethodInfo *)0x0);
                                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                              Mesh_RecalculateNormals
                                                        ((Mesh *)uVar59,(MethodInfo *)0x0);
                                              UnityEngine.CoreModule.dll::UnityEngine::Mesh::
                                              Mesh_RecalculateBounds
                                                        ((Mesh *)uVar59,(MethodInfo *)0x0);
                                              pCVar21 = (Cube *)MStack_11._17_4_;
                                              pVVar23 = (Vector3__Array *)
                                                        CONCAT22(MStack_11._7_2_,
                                                                 MStack_11.virtualMethodPointer.
                                                                 _1_2_);
                                              fVar24 = (float)MStack_11._9_4_;
                                              if ((Vector3__Array *)MStack_11._29_4_ !=
                                                  (Vector3__Array *)0x0) {
                                                pVVar66 = (Vector3__Array *)
                                                          CONCAT22(MStack_11._7_2_,
                                                                   MStack_11.virtualMethodPointer.
                                                                   _1_2_);
                                                if (*(il2cpp_array_size_t *)(MStack_11._29_4_ + 0xc)
                                                    < 3) goto code_?;
                                                uVar90 = ((Vector3 *)(MStack_11._29_4_ + 0x10))->y;
                                                uVar91 = ((Vector3 *)(MStack_11._29_4_ + 0x10))[2].x;
                                                uVar92 = ((Vector3 *)(MStack_11._29_4_ + 0x10))[2].y
                                                ;
                                                MStack_11._9_4_ =
                                                     ((Vector3 *)(MStack_11._29_4_ + 0x10))[2].z;
                                                MStack_11.virtualMethodPointer._1_2_ = (short)uVar92
                                                ;
                                                MStack_11._7_2_ = SUB42((uint)uVar92 >> 0x10,0);
                                                MStack_11._1_4_ = uVar91;
                                                pVVar66 = (Vector3__Array *)uVar92;
                                                if (*(il2cpp_array_size_t *)(MStack_11._29_4_ + 0xc)
                                                    == 0) goto code_?;
                                                uVar93 = ((Vector3 *)(MStack_11._29_4_ + 0x10))->y;
                                                MStack_11._21_4_ =
                                                     (float)uVar93 +
                                                     ((float)uVar92 - (float)uVar90) * _UNK_?
                                                ;
                                                pGVar27 = ((IndentArea__Fields *)
                                                          (MStack_11._25_4_ + 8))->gameObject;
                                                pVVar23 = (Vector3__Array *)uVar92;
                                                fVar24 = (float)MStack_11._9_4_;
                                                if (pGVar27 != (GameObject *)0x0) {
                                                  MStack_11._17_4_ =
                                                       UnityEngine.CoreModule.dll::UnityEngine::
                                                       GameObject::GameObject_get_transform
                                                                 (pGVar27,(MethodInfo *)0x0);
                                                  if (cRam_? == '\0') {
                                                    func_?();
                                                    cRam_? = '\x01';
                                                  }
                                                  pVVar76 = TypeInfo__UnityEngine__Vector3->
                                                            static_fields;
                                                  uVar94 = (pVVar76->oneVector).x;
                                                  uVar95 = (pVVar76->oneVector).y;
                                                  fVar24 = ((IndentArea__Fields *)
                                                           (MStack_11._25_4_ + 8))->size;
                                                  MStack_11._1_4_ = (float)uVar94 * fVar24;
                                                  pVVar23 = (Vector3__Array *)
                                                            ((float)uVar95 * fVar24);
                                                  MStack_11.virtualMethodPointer._1_2_ =
                                                       (short)pVVar23;
                                                  MStack_11._7_2_ = SUB42((uint)pVVar23 >> 0x10,0);
                                                  fVar24 = (pVVar76->oneVector).z * fVar24;
                                                  MStack_11._11_2_ = SUB42((uint)fVar24 >> 0x10,0);
                                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                                  if ((Cube *)MStack_11._17_4_ != (Cube *)0x0) {
                                                    value_00.y._0_2_ =
                                                         MStack_11.virtualMethodPointer._1_2_;
                                                    value_00.x = (float)MStack_11._1_4_;
                                                    value_00.y._2_2_ = MStack_11._7_2_;
                                                    value_00.z._0_1_ = SUB41(fVar24,0);
                                                    value_00.z._1_1_ = (char)((uint)fVar24 >> 8);
                                                    value_00.z._2_2_ = MStack_11._11_2_;
                                                    MStack_11._5_4_ = pVVar23;
                                                    MStack_11._9_4_ = fVar24;
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_localScale
                                                              ((Transform *)MStack_11._17_4_,
                                                               value_00,(MethodInfo *)0x0);
                                                    pGVar27 = ((IndentArea__Fields *)
                                                              (MStack_11._25_4_ + 8))->gameObject;
                                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                                    pVVar23 = (Vector3__Array *)MStack_11._5_4_;
                                                    fVar24 = (float)MStack_11._9_4_;
                                                    if (pGVar27 != (GameObject *)0x0) {
                                                      MStack_11._17_4_ =
                                                           UnityEngine.CoreModule.dll::UnityEngine::
                                                           GameObject::GameObject_get_transform
                                                                     (pGVar27,(MethodInfo *)0x0);
                                                      pVVar65 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Mesh::Mesh_get_vertices
                                                                          ((Mesh *)uVar59,
                                                                           (MethodInfo *)0x0);
                                                      pCVar21 = (Cube *)MStack_11._17_4_;
                                                      pVVar23 = (Vector3__Array *)MStack_11._5_4_;
                                                      fVar24 = (float)MStack_11._9_4_;
                                                      if (pVVar65 != (Vector3__Array *)0x0) {
                                                        pVVar66 = (Vector3__Array *)MStack_11._5_4_;
                                                        if (pVVar65->max_length == 0)
                                                        goto code_?;
                                                        if ((Cube *)MStack_11._17_4_ != (Cube *)0x0)
                                                        {
                                                          pVVar30 = UnityEngine.CoreModule.dll::
                                                                    UnityEngine::Transform::
                                                                    Transform_TransformPoint
                                                                              ((Vector3 *)
                                                                               &stack0xffffff48,
                                                                               (Transform *)
                                                                               MStack_11._17_4_,
                                                                               pVVar65->vector[0],
                                                                               (MethodInfo *)0x0);
                                                          uVar96 = pVVar30->x;
                                                          uVar97 = pVVar30->y;
                                                          MStack_11._9_4_ = pVVar30->z;
                                                          MStack_11.virtualMethodPointer._1_2_ =
                                                               (short)uVar97;
                                                          MStack_11._7_2_ =
                                                               SUB42((uint)uVar97 >> 0x10,0);
                                                          pGVar27 = ((IndentArea__Fields *)
                                                                    (MStack_11._25_4_ + 8))->
                                                                    gameObject;
                                                          MStack_11._1_4_ = uVar96;
                                                          pCVar21 = (Cube *)MStack_11._17_4_;
                                                          pVVar23 = (Vector3__Array *)uVar97;
                                                          fVar24 = (float)MStack_11._9_4_;
                                                          if (pGVar27 != (GameObject *)0x0) {
                                                            MStack_11._17_4_ =
                                                                 UnityEngine.CoreModule.dll::
                                                                 UnityEngine::GameObject::
                                                                 GameObject_get_transform
                                                                           (pGVar27,(MethodInfo *)
                                                                                    0x0);
                                                            pVVar65 = UnityEngine.CoreModule.dll::
                                                                      UnityEngine::Mesh::
                                                                      Mesh_get_vertices((Mesh *)
                                                  uVar59,(MethodInfo *)0x0);
                                                  pVVar66 = (Vector3__Array *)
                                                            CONCAT22(MStack_11._7_2_,
                                                                     MStack_11.virtualMethodPointer.
                                                                     _1_2_);
                                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                                  pVVar23 = (Vector3__Array *)
                                                            CONCAT22(MStack_11._7_2_,
                                                                     MStack_11.virtualMethodPointer.
                                                                     _1_2_);
                                                  fVar24 = (float)MStack_11._9_4_;
                                                  if (pVVar65 != (Vector3__Array *)0x0) {
                                                    if (pVVar65->max_length < 3)
                                                    goto code_?;
                                                    pVVar23 = pVVar66;
                                                    if ((Cube *)MStack_11._17_4_ != (Cube *)0x0) {
                                                      pMVar20 = (ModelCursor3D *)
                                                                pVVar65->vector[2].z;
                                                      pVVar30 = (Vector3 *)&stack0xffffff48;
                                                      pVVar98 = UnityEngine.CoreModule.dll::
                                                                UnityEngine::Transform::
                                                                Transform_TransformPoint
                                                                          (pVVar30,(Transform *)
                                                                                   MStack_11._17_4_,
                                                                           pVVar65->vector[2],
                                                                           (MethodInfo *)0x0);
                                                      pVVar23 = (Vector3__Array *)
                                                                CONCAT22(MStack_11._7_2_,
                                                                         MStack_11.
                                                                         virtualMethodPointer._1_2_)
                                                      ;
                                                      uVar99 = pVVar98->x;
                                                      uVar100 = pVVar98->y;
                                                      pCVar21 = (Cube *)((float)MStack_11._1_4_ +
                                                                        ((float)uVar99 -
                                                                        (float)MStack_11._1_4_) *
                                                                        _UNK_?);
                                                      MStack_11._29_4_ =
                                                           (float)pVVar23 +
                                                           ((float)uVar100 - (float)pVVar23) *
                                                           _UNK_?;
                                                      MStack_11._9_4_ =
                                                           (float)MStack_11._9_4_ +
                                                           (pVVar98->z - (float)MStack_11._9_4_) *
                                                           _UNK_?;
                                                      pGVar27 = ((IndentArea__Fields *)
                                                                (MStack_11._25_4_ + 8))->gameObject;
                                                      fVar24 = (float)MStack_11._9_4_;
                                                      if (pGVar27 != (GameObject *)0x0) {
                                                        stack0xffffff5c = (MonitorData *)pGVar27;
                                                        pCStack_49 = (
                                                  CanPerformCubeActionResult__Enum__Class *)
                                                  &UNK_?;
                                                  pCVar48 = (Cube *)MStack_11._17_4_;
                                                  MStack_11._17_4_ = pCVar21;
                                                  pTVar33 = UnityEngine.CoreModule.dll::UnityEngine
                                                            ::GameObject::GameObject_get_transform
                                                                      (pGVar27,(MethodInfo *)0x0);
                                                  pCVar21 = (Cube *)MStack_11._17_4_;
                                                  pVVar23 = (Vector3__Array *)
                                                            CONCAT22(MStack_11._7_2_,
                                                                     MStack_11.virtualMethodPointer.
                                                                     _1_2_);
                                                  fVar24 = (float)MStack_11._9_4_;
                                                  if (pTVar33 != (Transform *)0x0) {
                                                    stack0xffffff5c = (MonitorData *)&UNK_?;
                                                    pVVar98 = UnityEngine.CoreModule.dll::
                                                              UnityEngine::Transform::
                                                              Transform_get_position
                                                                        ((Vector3 *)&stack0xffffff48
                                                                         ,pTVar33,(MethodInfo *)0x0)
                                                    ;
                                                    uVar101 = pVVar98->x;
                                                    uVar102 = pVVar98->y;
                                                    uVar103 = pVVar12->vector[0].z;
                                                    uVar104 = pVVar12->vector[1].x;
                                                    value_01.y = (float)uVar102 +
                                                                 (float)uVar104 * _UNK_? +
                                                                 ((float)MStack_11._21_4_ -
                                                                 (float)MStack_11._29_4_);
                                                    value_01.x = (float)uVar101 +
                                                                 (float)uVar103 * _UNK_? +
                                                                 ((float)pCVar48 -
                                                                 (float)MStack_11._17_4_);
                                                    value_01.z = pVVar98->z +
                                                                 pVVar12->vector[1].y *
                                                                 _UNK_? +
                                                                 ((float)pVVar30 -
                                                                 (float)MStack_11._9_4_);
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    Transform::Transform_set_position
                                                              (pTVar33,value_01,(MethodInfo *)0x0);
                                                    pFVar58 = (pMVar20->fields)._.faceCursor;
                                                    pCVar21 = (Cube *)MStack_11._17_4_;
                                                    pVVar23 = (Vector3__Array *)
                                                              CONCAT22(MStack_11._7_2_,
                                                                       MStack_11.
                                                                       virtualMethodPointer._1_2_);
                                                    fVar24 = (float)MStack_11._9_4_;
                                                    if ((pFVar58 != (FaceCursor *)0x0) &&
                                                       (pGVar27 = (pFVar58->fields).gameObject,
                                                       pVVar23 = (Vector3__Array *)
                                                                 CONCAT22(MStack_11._7_2_,
                                                                          MStack_11.
                                                                          virtualMethodPointer._1_2_
                                                                         ),
                                                       pGVar27 != (GameObject *)0x0)) {
                                                      IStack_22.z = 0x330;
                                                      uStack_35 = 0x1045;
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_SetActive
                                                                (pGVar27,1,(MethodInfo *)0x0);
                                                      pVVar23 = (Vector3__Array *)
                                                                CONCAT22(MStack_11._7_2_,
                                                                         MStack_11.
                                                                         virtualMethodPointer._1_2_)
                                                      ;
                                                      pFVar58 = (pMVar20->fields)._.faceCursor;
                                                      pVVar66 = pVVar12;
                                                      goto joined_?;
                                                    }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  MStack_11._17_4_ = pCVar21;
  MStack_11._5_4_ = pVVar23;
  MStack_11._9_4_ = fVar24;
  func_?();
  func_?();
  func_?();
  pVVar66 = (Vector3__Array *)MStack_11._5_4_;
code_?:
  MStack_11._5_4_ = pVVar66;
  func_?();
  cVar105 = uStack_6._1_1_ + (char)((uint)&stack0xfffffffc >> 8);
  uStack_6._0_2_ = CONCAT11(cVar105 + !CARRY1(unaff_BL,extraout_DH),(undefined1)uStack_6);
  pcVar106 = (code *)swi(3);
  (*pcVar106)();
  return;
}


/* Void Exit(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_Exit
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MaterialsControllerEditMode);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CubeModelTool);
    cRam_? = '\x01';
  }
  TypeInfo__CubeModelTool->static_fields->cubeCount = 0;
  TypeInfo__CubeModelTool->static_fields->cubeChange = 0;
  if ((this->fields).currentInternalState == 0) {
    (this->fields).currentInternalState = 2;
    if (e == (CubeModelingStateMachine *)0x0) goto code_?;
    CubeModelingStateMachine::CubeModelingStateMachine_set_CurrentMaterialId
              (e,(this->fields).prevMaterial,(MethodInfo *)0x0);
    TypeInfo__MaterialsControllerEditMode->static_fields->targetMaterial =
         (this->fields).prevMaterial;
    if ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0) {
      this_00 = (((this->fields).movingEdgeCube)->fields).cube;
      if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MV__WorldObject__CubeBase);
      }
      value = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_IdentityCorners
                        ((MethodInfo *)0x0);
      if (this_00 == (Cube *)0x0) goto code_?;
      MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_set_Corners
                ((CubeBase *)this_00,value,(MethodInfo *)0x0);
      pCVar1 = (this->fields).movingEdgeCube;
      if ((pCVar1 == (CubePickingInfo *)0x0) ||
         (this_01 = (e->fields)._TargetCubeModel_k__BackingField, this_01 == (MVCubeModelBase *)0x0)
         ) goto code_?;
      MVCubeModelBase::MVCubeModelBase_CornersChanged
                (this_01,(pCVar1->fields).iLocalPos,(pCVar1->fields).cube,(MethodInfo *)0x0);
    }
    unaff_EBP = &(this->fields).movingEdgeCube;
    (this->fields).movingEdgeCube = (CubePickingInfo *)0x0;
    func_?(unaff_EBP);
    (this->fields).edgeHasMoved = 0;
  }
  (*(code *)(this->klass->vtable).HideCursor.method)(this,this->klass[1]._0.image);
  UnityEngine.CoreModule.dll::UnityEngine::Cursor::Cursor_1_set_visible(1,(MethodInfo *)0x0);
  pGVar2 = MVGameControllerBase::MVGameControllerBase_get_GameEventManager((MethodInfo *)0x0);
  if (((pGVar2 != (GameEventManager *)0x0) &&
      (pGVar3 = (pGVar2->fields).AvatarCommandsBuildMode,
      pGVar3 != (GameEventManager_AvatarCommandsBuildModeManager *)0x0)) &&
     (pGVar4 = (pGVar3->fields).LaserCommands,
     pGVar4 != (GameEventManager_AvatarCommandsBuildModeManager_LaserCommandsManager *)0x0)) {
    if ((pGVar4->fields).OnChangeState != (Action_1_LaserPointerState_ *)0x0) {
      pAVar5 = (pGVar4->fields).OnChangeState;
      (*(pAVar5->fields)._._.invoke_impl)
                ((pAVar5->fields)._._.method_code,0,(pAVar5->fields)._._.method,unaff_EBP);
    }
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* IntVector GetCubePosNeighborOppositeFace(IntVector, Face) */

IntVector Assembly-CSharp.dll::EditCubes::EditCubes_GetCubePosNeighborOppositeFace
                    (IntVector localPos,Face__Enum face,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Cube);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  *(undefined4 *)localPos._0_4_ = 0;
  *(undefined2 *)(localPos._0_4_ + 4) = 0;
  if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MV__WorldObject__IntVector);
  }
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)localPos._0_4_,CONCAT22(in_stack_1,localPos.z),
             CONCAT22((undefined2)face,in_stack_1),face,(MethodInfo *)0x0);
  if ((TypeInfo__Cube->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  pVVar2 = Cube::Cube_GetFaceAxis((Vector3 *)&puStack_3,(Face__Enum)method,(MethodInfo *)0x0);
  uVar4 = pVVar2->x;
  uVar5 = pVVar2->y;
  fVar6 = pVVar2->z;
  *(short *)localPos._0_4_ = *(short *)localPos._0_4_ - (short)(int)(float)uVar4;
  *(short *)(localPos._0_4_ + 2) = *(short *)(localPos._0_4_ + 2) - (short)(int)(float)uVar5;
  *(short *)(localPos._0_4_ + 4) = *(short *)(localPos._0_4_ + 4) - (short)(int)fVar6;
  IVar7.z = extraout_DX;
  IVar7.x = localPos.x;
  IVar7.y = localPos.y;
  return IVar7;
}


/* Boolean GotoMultiChangeCubes() */

bool Assembly-CSharp.dll::EditCubes::EditCubes_GotoMultiChangeCubes
               (EditCubes *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVInputWrapper);
    func_?(&StringLiteral_Mouse_Y);
    func_?(&StringLiteral_Mouse_X);
    cRam_? = '\x01';
  }
  if ((this->fields).prevSelectedCube != (CubePickingInfo *)0x0) {
    if ((TypeInfo__MVInputWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MVInputWrapper);
    }
    fVar1 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_X,(MethodInfo *)0x0);
    fVar1 = (float)((uint)fVar1 & _UNK_?);
    fVar2 = MVInputWrapper::MVInputWrapper_GetAxisWithoutSensitivity
                      (StringLiteral_Mouse_Y,(MethodInfo *)0x0);
    if ((fVar1 != 0.0) || ((float)((uint)fVar2 & _UNK_?) != 0.0)) {
      return 1;
    }
  }
  return 0;
}


/* Void HideCursor() */

void Assembly-CSharp.dll::EditCubes::EditCubes_HideCursor(EditCubes *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppImage *)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pIStack_1 = pMStack_2->klass[1]._0.image;
    (*(code *)(pMStack_2->klass->vtable).Remove.method)();
    return;
  }
  uVar3 = func_?(&puStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetEditDetail(CubeModelingStateMachine) */

void Assembly-CSharp.dll::EditCubes::EditCubes_SetEditDetail
               (EditCubes *this,CubeModelingStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SharedCubeFunctions);
    cRam_? = '\x01';
  }
  if (e != (CubeModelingStateMachine *)0x0) {
    if (((e->fields)._SelectedCube_k__BackingField == (CubePickingInfo *)0x0) ||
       ((this->fields).movingEdgeCube != (CubePickingInfo *)0x0)) {
      return;
    }
    pMVar1 = (e->fields)._TargetCubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelBase *)0x0) {
      gameObject = (pMVar1->fields)._.gameObject;
      pCVar2 = (e->fields)._SelectedCube_k__BackingField;
      uStack_3._0_2_ = (pCVar2->fields).iLocalPos.x;
      uStack_3._2_2_ = (pCVar2->fields).iLocalPos.y;
      iVar4 = (pCVar2->fields).iLocalPos.z;
      if ((TypeInfo__SharedCubeFunctions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__SharedCubeFunctions);
      }
      iVector.z = iVar4;
      iVector.x = (undefined2)uStack_3;
      iVector.y = uStack_3._2_2_;
      pVVar5 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                         (&VStack_6,gameObject,iVector,(MethodInfo *)0x0);
      fVar7 = pVVar5->z;
      this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_00 != (MainCameraManager *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 != (Transform *)0x0) {
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&puStack_8,this_01,(MethodInfo *)0x0);
          VStack_6.x = pVVar5->x;
          VStack_6.y = pVVar5->y;
          VStack_6.z = pVVar5->z - fVar7;
          fVar9 = (float10)func_?();
          pMVar1 = (e->fields)._TargetCubeModel_k__BackingField;
          if (pMVar1 != (MVCubeModelBase *)0x0) {
            puVar10 = (undefined8 *)
                     (*(code *)(pMVar1->klass->vtable).get_Scale.method)
                               (&puStack_8,(short)pMVar1,
                                (pMVar1->klass->vtable).set_Scale.methodPtr);
            pMVar11 = (this->fields).modelCursor;
            if ((float)((ulonglong)*puVar10 >> 0x20) * _UNK_? < (float)fVar9) {
              (this->fields).mouseSensitivity = 0.1325;
              if ((pMVar11 != (ModelCursor3D *)0x0) &&
                 (pIVar12 = (pMVar11->fields).indentArea, pIVar12 != (IndentArea *)0x0)) {
                (pIVar12->fields).size = 1.0;
                return;
              }
            }
            else {
              (this->fields).mouseSensitivity = 0.0225;
              if ((pMVar11 != (ModelCursor3D *)0x0) &&
                 (pIVar12 = (pMVar11->fields).indentArea, pIVar12 != (IndentArea *)0x0)) {
                (pIVar12->fields).size = 0.5;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* EditCubes() */

void Assembly-CSharp.dll::EditCubes::EditCubes__ctor(EditCubes *this,MethodInfo *method)

{
  (this->fields).currentInternalState = 2;
  return;
}


/* Boolean get_CursorVisible() */

bool Assembly-CSharp.dll::EditCubes::EditCubes_get_CursorVisible(EditCubes *this,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).set_CursorVisible.methodPtr;
    bVar3 = (*(code *)(pMStack_2->klass->vtable).get_CursorVisible.method)();
    return bVar3;
  }
  uVar4 = func_?(&puStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar3 = (*pcVar6)();
  return bVar3;
}


/* Void set_CursorVisible(Boolean) */

void Assembly-CSharp.dll::EditCubes::EditCubes_set_CursorVisible
               (EditCubes *this,bool value,MethodInfo *method)

{
  pIStack_1 = (Il2CppMethodPointer)&stack0xfffffffc;
  pMStack_2 = (this->fields).modelCursor;
  if (pMStack_2 != (ModelCursor3D *)0x0) {
    pIStack_1 = (pMStack_2->klass->vtable).Remove.methodPtr;
    uStack_3 = _value;
    (*(code *)(pMStack_2->klass->vtable).set_CursorVisible.method)();
    return;
  }
  uVar4 = func_?(&pMStack_2);
  func_?(uVar4);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

