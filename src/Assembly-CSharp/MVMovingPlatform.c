
/* Void Initialize() */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_Initialize
               (MVMovingPlatform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__MVMovingPlatform___Initialize_c__AnonStorey0;
  this_01 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_01,0.0,(MethodInfo *)method_01);
  if (this_01 != (ScaleAnimationBase *)0x0) {
    bVar1 = cRam_? == '\0';
    (this_01->fields).originalScale.y = (float)this;
    if (bVar1) {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
    MVMovable::MVMovable_InitializeCommon((MVMovable *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_02 != (MVWorldObjectClientManager *)0x0) {
      this_03 = (MoveableController *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                KeyValuePair`2[System::Object,System::Object],System::Object]::
                Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                            *)this_02,(MethodInfo *)0x0);
      if (this_03 != (MoveableController *)0x0) {
        MoveableController::MoveableController_AddMovable
                  (this_03,(MVMovable *)this,0,(MethodInfo *)0x0);
        this_00 = (this->fields)._._._._.gameObject;
        if (this_00 != (GameObject *)0x0) {
          this_04 = (MovableVisualization *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                              (this_00,
                               MovableVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<MovableVisualization>__
                              );
          (this->fields)._.movableVisualization = this_04;
          if (this_04 != (MovableVisualization *)0x0) {
            MovableVisualization::MovableVisualization_Init
                      (this_04,(MVCubeModelBase *)(this->fields)._._CubeModel_k__BackingField,
                       (MethodInfo *)0x0);
            pMVar2 = (this->fields)._._CubeModel_k__BackingField;
            if (pMVar2 != (MVCubeModelInstance *)0x0) {
              (*(code *)(pMVar2->klass->vtable).set_Visible.method)
                        (pMVar2,0,(pMVar2->klass->vtable).GetTargetPosition.methodPtr);
              (*(code *)(this->klass->vtable).set_Visible.method)
                        (this,(this->fields)._.isVisible,
                         (this->klass->vtable).GetTargetPosition.methodPtr);
              if ((this->fields)._._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
                pUStack_3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                             *)(this->fields)._._._._._.id;
                arg1 = (Object *)func_?(TypeInfo__System__Int32,&pUStack_3);
                if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0)
                   && ((TypeInfo__System__String->_1).cctor_started == 0)) {
                  func_?(TypeInfo__System__String);
                }
                message = mscorlib.dll::System::String::String_Concat_1
                                    ((Object *)StringLiteral_Moving_platform_,arg1,
                                     (Object *)StringLiteral__init___movable_s_cube_model_is_,
                                     (MethodInfo *)0x0);
                if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
                  func_?();
                }
                UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                          ((Object *)message,(MethodInfo *)0x0);
                return;
              }
              pvVar4 = (void *)0x0;
              uVar5 = 0;
              func_?(&stack0xfffffff0,0xfffffffb,0xfffffffe,0xfffffffb,0);
              (this_01->fields)._._._._.m_CachedPtr = pvVar4;
              *(undefined2 *)&(this_01->fields).state = uVar5;
              uStack_6 = 0;
              uStack_7 = (undefined *)((uint)uStack_7._2_2_ << 0x10);
              func_?(&uStack_6,5,2,5,0);
              *(undefined4 *)((int)&(this_01->fields).state + 2) = uStack_6;
              *(undefined2 *)((int)&(this_01->fields).originalScale.x + 2) = (undefined2)uStack_7;
              pMVar2 = (this->fields)._._CubeModel_k__BackingField;
              pUStack_3 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                           *)func_?(TypeInfo__System__Func<IModelingConstraint>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUStack_3,(Object *)this_01,
                         MethodInfo__MVMovingPlatform___Initialize_c__AnonStorey0____m__0__,
                         MethodInfo__System__Func<IModelingConstraint>__Func_System__Object__void__)
              ;
              if (pMVar2 != (MVCubeModelInstance *)0x0) {
                MVPreviewAvatar::MVPreviewAvatar_set_SpawnRoleCreatorId
                          ((MVPreviewAvatar *)pMVar2,(int32_t)pUStack_3,(MethodInfo *)0x0);
                pMVar2 = (this->fields)._._CubeModel_k__BackingField;
                if (pMVar2 != (MVCubeModelInstance *)0x0) {
                  IVar8 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionFlags
                                    ((MVWorldObjectClient *)pMVar2,(MethodInfo *)0x0);
                  uVar9 = 0;
                  MVWorldObjectClient::MVWorldObjectClient_set_InteractionFlags
                            ((MVWorldObjectClient *)pMVar2,
                             IVar8 & (InteractionFlags__Enum_CanEnterPlay|
                                      InteractionFlags__Enum_CanEarnGamePointsMinor|
                                      InteractionFlags__Enum_CanEarnGamePoints|
                                      InteractionFlags__Enum_CanUseGameRank|
                                      InteractionFlags__Enum_GlobalSounds|
                                      InteractionFlags__Enum_CanCloneRoot|
                                      InteractionFlags__Enum_CanUseTeam|
                                      InteractionFlags__Enum_Sounds|
                                      InteractionFlags__Enum_TranslatbleXZ2D|
                                      InteractionFlags__Enum_CanUseStars|
                                      InteractionFlags__Enum_CanUseLevel|
                                      InteractionFlags__Enum_CanUseGameCoins|
                                      InteractionFlags__Enum_CantAddChildren|
                                      InteractionFlags__Enum_IsUsable|
                                      InteractionFlags__Enum_IsPreview|
                                      InteractionFlags__Enum_CanResetLogic|
                                      InteractionFlags__Enum_HasSettings|
                                      InteractionFlags__Enum_CanAddToInventory|
                                      InteractionFlags__Enum_CanClone|InteractionFlags__Enum_CanEdit
                                      |InteractionFlags__Enum_NotTranslatbleXZ|
                                      InteractionFlags__Enum_NotTranslatbleY|
                                      InteractionFlags__Enum_CanRotateZ|
                                      InteractionFlags__Enum_CanRotateY|
                                      InteractionFlags__Enum_CanRotateX|
                                      InteractionFlags__Enum_DontPushGroupToSelectionStack|
                                      InteractionFlags__Enum_NotUserTransformable|
                                      InteractionFlags__Enum_SelectionRequiresEditGroup|
                                      InteractionFlags__Enum_IsTerrain|
                                      InteractionFlags__Enum_HasCubeModel|
                                     InteractionFlags__Enum_Selectable),method_00);
                  pMVar2 = (this->fields)._._CubeModel_k__BackingField;
                  pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__System__EventHandler<EditStateEventArgs>,
                                              uVar9);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar10,(Object *)this,
                             MethodInfo__MVMovingPlatform__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                             ,
                             MethodInfo__System__EventHandler<EditStateEventArgs>__EventHandler_System__Object__void__
                            );
                  if (pMVar2 != (MVCubeModelInstance *)0x0) {
                    MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                              ((MVCubeModelBase *)pMVar2,
                               (EventHandler_1_EditStateEventArgs_ *)pUVar10,(MethodInfo *)0x0);
                    pMVar2 = (this->fields)._._CubeModel_k__BackingField;
                    pUVar10 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(
                                               TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                               );
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar10,(Object *)this,
                               MethodInfo__MVMovingPlatform__OnStateChanged_UnityEngine__CullingGroupEvent_
                               ,
                               MethodInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>__UnityAction_System__Object__void__
                              );
                    if (pMVar2 != (MVCubeModelInstance *)0x0) {
                      MVCubeModelInstance::MVCubeModelInstance_SetupCulling
                                (pMVar2,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)pUVar10,
                                 (MethodInfo *)0x0);
                      pMVar2 = (this->fields)._._CubeModel_k__BackingField;
                      if (pMVar2 != (MVCubeModelInstance *)0x0) {
                        MVCubeModelInstance::MVCubeModelInstance_SetCullDistanceBand
                                  (pMVar2,2,(MethodInfo *)0x0);
                        return;
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
  func_?(0);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void MVCubeModelBase_BeingEditedChanged(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_MVCubeModelBase_BeingEditedChanged
               (MVMovingPlatform *this,Object *sender,EditStateEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVCubeModelBase;
  if (sender == (Object *)0x0) {
    func_?(0);
    sender = extraout_EDX;
  }
  else {
    bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    if (((sender->klass->_1).naturalAligment < bVar2) ||
       ((MVCubeModelBase__Class *)(sender->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__MVCubeModelBase)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_00 = (MVCubeModelBase *)0x0;
    if (bVar3) {
      this_00 = (MVCubeModelBase *)sender;
    }
    if (this_00 != (MVCubeModelBase *)0x0) {
      bVar4 = MVCubeModelBase::MVCubeModelBase_get_BeingEdited(this_00,(MethodInfo *)0x0);
      (this->fields)._.pausedMovement = bVar4;
      return;
    }
  }
  func_?(sender,pMVar1);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void MoveBetweenNodes(MVMovingPlatformNode, MVMovingPlatformNode) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_MoveBetweenNodes
               (MVMovingPlatform *this,MVMovingPlatformNode *start,MVMovingPlatformNode *end,
               MethodInfo *method)

{
  (this->fields).start = start;
  (this->fields).end = end;
  MVMovingPlatform_RecalculateMovement(this,(MethodInfo *)0x0);
  return;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_OnSelectedChanged
               (MVMovingPlatform *this,bool selected,MethodInfo *method)

{
  (this->fields)._.pausedMovement = selected;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)
            (this->fields)._._._._.SelectedChanged;
  if (this_00 != (Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent_ *)0x0) {
    this_01 = (SelectedEventArgs *)func_?(TypeInfo__SelectedEventArgs);
    SelectedEventArgs::SelectedEventArgs__ctor(this_01,selected,(MethodInfo *)0x0);
    System.Core.dll::System::Action`2[Object,UnityEngine::ReflectionProbe+ReflectionProbeEvent]::
    Action_2_Object_UnityEngine_ReflectionProbe_ReflectionProbeEvent__Invoke
              (this_00,(Object *)this,(ReflectionProbe_ReflectionProbeEvent__Enum)this_01,
               MethodInfo__UnityEngine__Events__UnityAction<MVWorldObjectClient,_SelectedEventArgs>__Invoke_MVWorldObjectClient__SelectedEventArgs_
              );
  }
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_OnStateChanged
               (MVMovingPlatform *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  this_00 = (this->fields)._._CubeModel_k__BackingField;
  if (this_00 != (MVCubeModelInstance *)0x0) {
    newVisible = MVCubeModelInstance::MVCubeModelInstance_IsLodVisible
                           (this_00,cullingGroupEvent,(MethodInfo *)0x0);
    this_01 = (this->fields)._.movableVisualization;
    if (this_01 != (MovableVisualization *)0x0) {
      MovableVisualization::MovableVisualization_ChangeLOD(this_01,newVisible,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void RecalculateMovement() */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_RecalculateMovement
               (MVMovingPlatform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  pMVar4 = (this->fields).end;
  fStack_5 = 0.0;
  uStack_6 = 0;
  fStack_7 = 0.0;
  if (pMVar4 != (MVMovingPlatformNode *)0x0) {
    puVar8 = (undefined8 *)(*(code *)(pMVar4->klass->vtable).get_WorldPosition_1.method)();
    pMVar4 = (this->fields).start;
    uStack_9 = *puVar8;
    fVar10 = *(float *)(puVar8 + 1);
    if (pMVar4 != (MVMovingPlatformNode *)0x0) {
      puVar11 = (ulonglong *)(*(code *)(pMVar4->klass->vtable).get_WorldPosition_1.method)();
      uStack_12 = *puVar11;
      fVar13 = *(float *)(puVar11 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a.z = fVar10;
      a.x = (float)(undefined4)uStack_9;
      a.y = (float)uStack_9._4_4_;
      b.z = fVar13;
      b.x = (float)(undefined4)uStack_12;
      b.y = (float)uStack_12._4_4_;
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&puStack_15,a,b,(MethodInfo *)0x0);
      pMVar4 = (this->fields).start;
      uStack_1._0_4_ = pVVar14->x;
      uStack_1._4_4_ = pVVar14->y;
      fStack_2 = pVVar14->z;
      if (pMVar4 != (MVMovingPlatformNode *)0x0) {
        puVar8 = (undefined8 *)(*(code *)(pMVar4->klass->vtable).get_WorldPosition_1.method)();
        pMVar16 = this;
        (*(code *)(this->klass->vtable).set_WorldPosition.method)
                  (this,*puVar8,*(undefined4 *)(puVar8 + 1),
                   (this->klass->vtable).get_WorldRotation_1.methodPtr);
        fStack_5 = fStack_2;
        uVar17 = 0;
        uStack_3 = uStack_1 & 0xffffffff;
        func_?(&uStack_3,0);
        fVar18 = (float10)func_?(&uStack_3,0);
        fVar10 = fStack_5;
        if (_UNK_? < (float)fVar18) {
          uStack_12 = uStack_3;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3);
          }
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_up
                             ((Vector3 *)&puStack_15,(MethodInfo *)0x0);
          uStack_9._0_4_ = pVVar14->x;
          uStack_9._4_4_ = pVVar14->y;
          fVar13 = pVVar14->z;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Quaternion);
          }
          forward.z = fVar10;
          forward.x = (float)(undefined4)uStack_12;
          forward.y = (float)uStack_12._4_4_;
          upwards.z = fVar13;
          upwards.x = (float)(undefined4)uStack_9;
          upwards.y = (float)uStack_9._4_4_;
          pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                             ((Quaternion *)&fStack_20,forward,upwards,(MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                    ((MVWorldObjectClient *)this,*pQVar19,(MethodInfo *)0x0);
        }
        fStack_7 = (this->fields)._.velocity.z;
        uStack_6._0_4_ = (this->fields)._.velocity.x;
        uStack_6._4_4_ = (this->fields)._.velocity.y;
        fVar18 = (float10)func_?(&uStack_6,0);
        if (0.0 < (float)fVar18) {
          uVar21 = CONCAT44(&puStack_15,&UNK_?);
          puVar8 = (undefined8 *)func_?();
          uStack_9 = *puVar8;
          fVar10 = *(float *)(puVar8 + 1);
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector3,uVar17,pMVar16,uVar21);
          }
          a_00.z = fVar10;
          a_00.x = (float)(undefined4)uStack_9;
          a_00.y = (float)uStack_9._4_4_;
          pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                             ((Vector3 *)&puStack_15,a_00,(float)fVar18,(MethodInfo *)0x0);
        }
        else {
          pVVar14 = (Vector3 *)func_?();
        }
        uStack_12._0_4_ = pVVar14->x;
        uStack_12._4_4_ = pVVar14->y;
        fVar10 = pVVar14->z;
        fVar18 = (float10)func_?(&uStack_1,0);
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        (this->fields)._.distance = (float)fVar18;
        MVMovable::MVMovable_RecalcTimeToEnd((MVMovable *)this,(MethodInfo *)0x0);
        puVar8 = (undefined8 *)func_?();
        uStack_9 = *puVar8;
        fVar13 = *(float *)(puVar8 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        forward_00.z = fVar13;
        forward_00.x = (float)(undefined4)uStack_9;
        forward_00.y = (float)uStack_9._4_4_;
        pQVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&fStack_20,forward_00,(MethodInfo *)0x0);
        fStack_20 = pQVar19->x;
        puStack_15 = (undefined *)pQVar19->y;
        puVar22 = (undefined *)pQVar19->z;
        fVar13 = pQVar19->w;
        if (cRam_? == '\0') {
          puVar22 = &UNK_?;
          fVar13 = _UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        (this->fields)._.orgRotation.x = fStack_20;
        (this->fields)._.orgRotation.y = (float)puStack_15;
        (this->fields)._.orgRotation.z = (float)puVar22;
        (this->fields)._.orgRotation.w = fVar13;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        (this->fields)._.velocity.x = (float)(undefined4)uStack_12;
        (this->fields)._.velocity.y = (float)uStack_12._4_4_;
        (this->fields)._.velocity.z = fVar10;
        MVMovable::MVMovable_RecalcTimeToEnd((MVMovable *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* MVMovingPlatform(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform__ctor
               (MVMovingPlatform *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVMovable);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVMovable>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVMovable>__List__);
  (this->fields)._.MoveableChildren = (List_1_MVMovable_ *)this_00;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields)._.localPos.x = pVVar1->x;
  (this->fields)._.localPos.y = fVar3;
  (this->fields)._.localPos.z = fVar4;
  (this->fields)._.distance = 5.0;
  (this->fields)._.parentMoverID = -1;
  (this->fields)._.isVisible = 1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar5 = *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4);
  piVar6 = &(this->fields)._._._._.interactionFlags;
  *(uint *)piVar6 = (uint)*piVar6 | 0x2000;
  *(undefined4 *)((int)&(this->fields)._._._._.interactionFlags + 4) = uVar5;
  return;
}


/* MVMovingPlatformNode get_End() */

MVMovingPlatformNode *
Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_get_End
          (MVMovingPlatform *this,MethodInfo *method)

{
  return (this->fields).end;
}


/* MVMovingPlatformNode get_Start() */

MVMovingPlatformNode *
Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_get_Start
          (MVMovingPlatform *this,MethodInfo *method)

{
  return (this->fields).start;
}


/* Vector3 get_WorldVelocity() */

Vector3 * Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_get_WorldVelocity
                    (Vector3 *__return_storage_ptr__,MVMovingPlatform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  pMVar4 = (this->fields).end;
  fStack_5 = 0.0;
  if ((pMVar4 != (MVMovingPlatformNode *)0x0) &&
     ((this->fields).start != (MVMovingPlatformNode *)0x0)) {
    puVar6 = (undefined8 *)
              (*(code *)(pMVar4->klass->vtable).get_Position.method)
                        (&fStack_7,pMVar4,(pMVar4->klass->vtable).set_Position.methodPtr);
    pMVar4 = (this->fields).start;
    uStack_8 = *puVar6;
    fVar9 = *(float *)(puVar6 + 1);
    if (pMVar4 != (MVMovingPlatformNode *)0x0) {
      puVar6 = (undefined8 *)
                (*(code *)(pMVar4->klass->vtable).get_Position.method)
                          (auStack_10 + 4,pMVar4,(pMVar4->klass->vtable).set_Position.methodPtr);
      uStack_11 = *puVar6;
      fVar12 = *(float *)(puVar6 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_00.z = fVar9;
      a_00.x = (float)(undefined4)uStack_8;
      a_00.y = (float)uStack_8._4_4_;
      b.z = fVar12;
      b.x = (float)(undefined4)uStack_11;
      b.y = (float)uStack_11._4_4_;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          ((Vector3 *)(auStack_10 + 4),a_00,b,(MethodInfo *)0x0);
      uStack_1._0_4_ = pVVar13->x;
      uStack_1._4_4_ = pVVar13->y;
      fStack_2 = pVVar13->z;
      puVar6 = (undefined8 *)func_?(auStack_10 + 4,&uStack_1,0);
      uStack_8 = *puVar6;
      fVar9 = *(float *)(puVar6 + 1);
      fStack_5 = (this->fields)._.velocity.z;
      uStack_3._0_4_ = (this->fields)._.velocity.x;
      uStack_3._4_4_ = (this->fields)._.velocity.y;
      fVar14 = (float10)func_?(&uStack_3,0);
      a.z = fVar9;
      a.x = (float)(undefined4)uStack_8;
      a.y = (float)uStack_8._4_4_;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)(auStack_10 + 4),a,(float)fVar14,(MethodInfo *)0x0);
      uStack_1._0_4_ = pVVar13->x;
      uStack_1._4_4_ = pVVar13->y;
      fStack_2 = pVVar13->z;
      this_00 = (PrefabPool *)(this->fields).start;
      if (this_00 != (PrefabPool *)0x0) {
        this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
        if (this_01 != (MVPointLightObject *)0x0) {
          pMVar15 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                    Transform_get_localToWorldMatrix
                              ((Matrix4x4 *)&stack0xffffff4c,(Transform *)this_01,(MethodInfo *)0x0)
          ;
          fVar16 = fStack_2;
          fVar9 = pMVar15->m00;
          fStack_7 = pMVar15->m10;
          uStack_11._0_4_ = pMVar15->m20;
          uStack_11._4_4_ = pMVar15->m30;
          fVar12 = pMVar15->m01;
          fVar17 = pMVar15->m11;
          fVar18 = pMVar15->m21;
          fVar19 = pMVar15->m31;
          fVar20 = pMVar15->m02;
          fVar21 = pMVar15->m12;
          fVar22 = pMVar15->m22;
          fVar23 = pMVar15->m32;
          fVar24 = pMVar15->m03;
          fVar25 = pMVar15->m13;
          fVar26 = pMVar15->m23;
          fVar27 = pMVar15->m33;
          uStack_8 = uStack_1;
          if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Vector4);
          }
          v.z = fVar16;
          v.x = (float)(undefined4)uStack_8;
          v.y = (float)uStack_8._4_4_;
          pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit
                              ((Vector4 *)auStack_10,v,(MethodInfo *)0x0);
          auStack_10._0_4_ = pVVar28->x;
          auStack_10._4_4_ = pVVar28->y;
          fStack_29 = pVVar28->z;
          fStack_30 = pVVar28->w;
          if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
            func_?();
          }
          lhs.m10 = fStack_7;
          lhs.m00 = fVar9;
          lhs.m20 = (float)(undefined4)uStack_11;
          lhs.m30 = (float)uStack_11._4_4_;
          lhs.m01 = fVar12;
          lhs.m11 = fVar17;
          lhs.m21 = fVar18;
          lhs.m31 = fVar19;
          lhs.m02 = fVar20;
          lhs.m12 = fVar21;
          lhs.m22 = fVar22;
          lhs.m32 = fVar23;
          lhs.m03 = fVar24;
          lhs.m13 = fVar25;
          lhs.m23 = fVar26;
          lhs.m33 = fVar27;
          vector.y = (float)auStack_10._4_4_;
          vector.x = (float)auStack_10._0_4_;
          vector.z = fStack_29;
          vector.w = fStack_30;
          pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                              ((Vector4 *)&stack0xffffffac,lhs,vector,(MethodInfo *)0x0);
          pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1
                              ((Vector3 *)(auStack_10 + 4),*pVVar28,(MethodInfo *)0x0);
          fVar12 = pVVar13->y;
          fVar9 = pVVar13->z;
          __return_storage_ptr__->x = pVVar13->x;
          __return_storage_ptr__->y = fVar12;
          __return_storage_ptr__->z = fVar9;
          return __return_storage_ptr__;
        }
      }
    }
    func_?(0);
    pcVar31 = (code *)swi(3);
    pVVar13 = (Vector3 *)(*pcVar31)();
    return pVVar13;
  }
  fVar12 = (this->fields)._.velocity.y;
  fVar9 = (this->fields)._.velocity.z;
  __return_storage_ptr__->x = (this->fields)._.velocity.x;
  __return_storage_ptr__->y = fVar12;
  __return_storage_ptr__->z = fVar9;
  return __return_storage_ptr__;
}

