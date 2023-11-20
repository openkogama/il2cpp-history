
/* Void Initialize() */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_Initialize
               (MVMovingPlatform *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__System__EventHandler<EditStateEventArgs>);
    func_?(&TypeInfo__System__Func<IModelingConstraint>);
    func_?(&
                    MethodInfo__MVMovingPlatform__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                   );
    func_?(&MethodInfo__MVMovingPlatform__OnStateChanged_UnityEngine__CullingGroupEvent_);
    func_?(&MethodInfo__MVMovingPlatform____c__DisplayClass7_0___Initialize_b__0__);
    func_?(&TypeInfo__MVMovingPlatform____c__DisplayClass7_0);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    func_?(&StringLiteral_Moving_platform_);
    func_?(&StringLiteral__init___movable_s_cube_model_is_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVMovingPlatform____c__DisplayClass7_0;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)this;
    func_?(value + 1,this);
    MVMovable::MVMovable_Initialize((MVMovable *)this,(MethodInfo *)0x0);
    if ((this->fields)._._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
      pSVar1 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)&this->fields,(MethodInfo *)0x0)
      ;
      pSVar1 = mscorlib.dll::System::String::String_Concat_4
                         (StringLiteral_Moving_platform_,pSVar1,
                          StringLiteral__init___movable_s_cube_model_is_,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                ((Object *)pSVar1,(MethodInfo *)0x0);
      return;
    }
    pMStack_2 = (MonitorData *)0x0;
    iStack_3 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&pMStack_2,-5,-2,-5,(MethodInfo *)0x0);
    value[1].monitor = pMStack_2;
    *(int16_t *)&value[2].klass = iStack_3;
    uVar4._0_2_ = 0;
    uVar4._2_2_ = 0;
    iVar5 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xffffffe8,5,2,5,(MethodInfo *)0x0);
    *(undefined4 *)((int)&value[2].klass + 2) = uVar4;
    *(int16_t *)((int)&value[2].monitor + 2) = iVar5;
    pMVar6 = (this->fields)._._CubeModel_k__BackingField;
    pFStack_7 = (Func_1_Object_ *)func_?();
    mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
              (pFStack_7,value,
               MethodInfo__MVMovingPlatform____c__DisplayClass7_0___Initialize_b__0__,
               (MethodInfo *)0x0);
    if (pMVar6 != (MVCubeModelInstance *)0x0) {
      (pMVar6->fields)._._ModelingConstraintBuilder_k__BackingField =
           (Func_1_IModelingConstraint_ *)pFStack_7;
      func_?(&(pMVar6->fields)._._ModelingConstraintBuilder_k__BackingField,pFStack_7);
      pMVar6 = (this->fields)._._CubeModel_k__BackingField;
      if (pMVar6 != (MVCubeModelInstance *)0x0) {
        piVar8 = &(pMVar6->fields)._._.interactionFlags;
        *(uint *)piVar8 = (uint)*piVar8 & 0xfffffff7;
        *(undefined4 *)((int)&(pMVar6->fields)._._.interactionFlags + 4) =
             *(undefined4 *)((int)&(pMVar6->fields)._._.interactionFlags + 4);
        pMVar6 = (this->fields)._._CubeModel_k__BackingField;
        this_00 = (UnityAction_2_System_Object_System_Object_ *)
                  func_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[System::Object,System::
        Object]::UnityAction_2_System_Object_System_Object___ctor
                  (this_00,(Object *)this,
                   MethodInfo__MVMovingPlatform__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar6 != (MVCubeModelInstance *)0x0) {
          MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                    ((MVCubeModelBase *)pMVar6,(EventHandler_1_EditStateEventArgs_ *)this_00,
                     (MethodInfo *)0x0);
          pMVar6 = (this->fields)._._CubeModel_k__BackingField;
          this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
                    func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                   );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
          UnityAction_1_UnityEngine_Vector2___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVMovingPlatform__OnStateChanged_UnityEngine__CullingGroupEvent_,
                     (MethodInfo *)0x0);
          if (pMVar6 != (MVCubeModelInstance *)0x0) {
            MVCubeModelInstance::MVCubeModelInstance_SetupCulling
                      (pMVar6,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
                       (MethodInfo *)0x0);
            pMVar6 = (this->fields)._._CubeModel_k__BackingField;
            if (pMVar6 != (MVCubeModelInstance *)0x0) {
              MVCubeModelInstance::MVCubeModelInstance_SetCullDistanceBand
                        (pMVar6,2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void MVCubeModelBase_BeingEditedChanged(Object, EditStateEventArgs) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_MVCubeModelBase_BeingEditedChanged
               (MVMovingPlatform *this,Object *sender,EditStateEventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelBase);
    cRam_? = '\x01';
  }
  if (sender == (Object *)0x0) {
    func_?();
    pMVar1 = extraout_EDX;
  }
  else {
    pMVar1 = TypeInfo__MVCubeModelBase;
    if (((TypeInfo__MVCubeModelBase->_1).naturalAligment <= (sender->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)
        (sender->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelBase->_1).naturalAligment - 1] ==
        TypeInfo__MVCubeModelBase)) {
      (this->fields)._.pausedMovement = *(bool *)&sender[0x1c].monitor;
      return;
    }
  }
  func_?(sender,pMVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void MoveBetweenNodes(MVMovingPlatformNode, MVMovingPlatformNode) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_MoveBetweenNodes
               (MVMovingPlatform *this,MVMovingPlatformNode *start,MVMovingPlatformNode *end,
               MethodInfo *method)

{
  (this->fields).start = start;
  func_?(&(this->fields).start,start);
  (this->fields).end = end;
  func_?(&(this->fields).end,end);
  MVMovingPlatform_RecalculateMovement(this,(MethodInfo *)0x0);
  return;
}


/* Void OnSelectedChanged(Boolean) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_OnSelectedChanged
               (MVMovingPlatform *this,bool selected,MethodInfo *method)

{
  (this->fields)._.pausedMovement = selected;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__SelectedEventArgs);
    cRam_? = '\x01';
  }
  if ((this->fields)._._._._.SelectedChanged !=
      (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0) {
    pUVar1 = (this->fields)._._._._.SelectedChanged;
    this_00 = (UxmlObjectListAttributeDescription_1_System_Object_ *)
              func_?(TypeInfo__SelectedEventArgs);
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__EventArgs);
      cRam_? = '\x01';
    }
    if ((TypeInfo__System__EventArgs->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__EventArgs);
    }
    UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
    UxmlObjectListAttributeDescription`1[System::Object]::
    UxmlObjectListAttributeDescription_1_System_Object___ctor(this_00,(MethodInfo *)0x0);
    *(bool *)&(this_00->fields)._._defaultValue_k__BackingField = selected;
    (*(pUVar1->fields)._._.invoke_impl)
              ((pUVar1->fields)._._.method_code,this,this_00,(pUVar1->fields)._._.method);
  }
  return;
}


/* Void OnStateChanged(CullingGroupEvent) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_OnStateChanged
               (MVMovingPlatform *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  this_00 = (this->fields)._._CubeModel_k__BackingField;
  if (this_00 != (MVCubeModelInstance *)0x0) {
    bVar1 = MVCubeModelInstance::MVCubeModelInstance_IsLodVisible
                      (this_00,cullingGroupEvent,(MethodInfo *)0x0);
    this_01 = (this->fields)._.movableVisualization;
    if (this_01 != (MovableVisualization *)0x0) {
      bVar2 = (this_01->fields).isVisible;
      if (bVar1 == 0) {
        if (bVar2 != 0) {
          MovableVisualization::MovableVisualization_SetMeshRenderers
                    (this_01,0,(this_01->fields).cmbClone,(MethodInfo *)0x0);
        }
      }
      else if ((bVar2 == 0) && ((this_01->fields).canBeVisible != 0)) {
        MovableVisualization::MovableVisualization_SetMeshRenderers
                  (this_01,1,(this_01->fields).cmbClone,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RecalculateMovement() */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_RecalculateMovement
               (MVMovingPlatform *this,MethodInfo *method)

{
  pMVar1 = (this->fields).end;
  if (pMVar1 != (MVMovingPlatformNode *)0x0) {
    puVar2 = (undefined8 *)
             (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                       (&VStack_3,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr);
    pMVar1 = (this->fields).start;
    uStack_4 = *puVar2;
    fStack_5 = *(float *)(puVar2 + 1);
    if (pMVar1 != (MVMovingPlatformNode *)0x0) {
      puVar2 = (undefined8 *)
               (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                         (&QStack_6,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr);
      VStack_3._0_8_ = *puVar2;
      fVar7 = (float)uStack_4 - VStack_3.x;
      fVar8 = fStack_5 - *(float *)(puVar2 + 1);
      pMVar1 = (this->fields).start;
      uStack_4 = CONCAT44(uStack_4._4_4_ - VStack_3.y,fVar7);
      fStack_5 = fVar8;
      VStack_3.z = fVar8;
      if (pMVar1 != (MVMovingPlatformNode *)0x0) {
        puVar2 = (undefined8 *)
                 (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                           (&QStack_6,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr);
        (*(code *)(this->klass->vtable).set_WorldPosition.method)
                  (this,(int)*puVar2,(int)((ulonglong)*puVar2 >> 0x20),*(undefined4 *)(puVar2 + 1),
                   (this->klass->vtable).get_WorldRotation_1.methodPtr);
        VStack_3.y = 0.0;
        VStack_3.x = fVar7;
        VStack_3.z = fVar8;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  (&VStack_3,(MethodInfo *)0x0);
        fVar9 = (float10)func_?(&VStack_3,0);
        fStack_10 = (float)fVar9;
        if (_UNK_? < fStack_10) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          forward.z = VStack_3.z;
          forward.x = VStack_3.x;
          forward.y = VStack_3.y;
          pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                             ((Quaternion *)&stack0xffffffa0,forward,
                              TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                              (MethodInfo *)0x0);
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                    ((MVWorldObjectClient *)this,*pQVar11,(MethodInfo *)0x0);
        }
        VStack_3.z = (this->fields)._.velocity.z;
        VStack_3.x = (this->fields)._.velocity.x;
        VStack_3.y = (this->fields)._.velocity.y;
        fVar9 = (float10)func_?(&VStack_3,0);
        fStack_10 = (float)fVar9;
        if (fStack_10 <= 0.0) {
          pfVar12 = (float *)func_?(&QStack_6,&uStack_4,0);
          ppVVar13 = (Vector3__Class **)*pfVar12;
          ppEVar14 = (Extensions__Class **)pfVar12[1];
          fVar8 = pfVar12[2];
        }
        else {
          puVar2 = (undefined8 *)func_?(&QStack_6,&uStack_4,0);
          VStack_3._0_8_ = *puVar2;
          fVar8 = *(float *)(puVar2 + 1) * fStack_10;
          ppVVar13 = (Vector3__Class **)(VStack_3.x * fStack_10);
          ppEVar14 = (Extensions__Class **)(VStack_3.y * fStack_10);
          VStack_3.z = fVar8;
        }
        fVar9 = (float10)func_?(&uStack_4,0);
        fStack_10 = (float)fVar9;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         );
          func_?(&TypeInfo__System__Single);
          func_?(&StringLiteral_Distance);
          cRam_? = '\x01';
        }
        (this->fields)._.distance = fStack_10;
        puVar2 = (undefined8 *)
                 (*(code *)(this->klass->vtable).get_WorldVelocity.method)
                           (&QStack_6,this,this->klass[1]._0.image);
        VStack_3._0_8_ = *puVar2;
        VStack_3.z = *(float *)(puVar2 + 1);
        fVar9 = (float10)func_?(&VStack_3,0);
        fVar7 = _UNK_?;
        fStack_10 = (float)fVar9;
        (this->fields)._.timeToEnd = 0.0;
        if (fVar7 < fStack_10) {
          (this->fields)._.timeToEnd = (this->fields)._.distance / fStack_10;
        }
        pVVar15 = (Vector3 *)func_?(&QStack_6,&uStack_4,0);
        pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           (&QStack_6,*pVVar15,(MethodInfo *)0x0);
        QStack_6.x = pQVar11->x;
        QStack_6.y = pQVar11->y;
        QStack_6.z = pQVar11->z;
        QStack_6.w = pQVar11->w;
        if (cRam_? == '\0') {
          func_?();
          ppEVar14 = &TypeInfo__Extensions;
          func_?();
          ppQVar16 = &TypeInfo__UnityEngine__Quaternion;
          func_?();
          func_?(&StringLiteral_Rotation);
          cRam_? = '\x01';
          ppVVar13 = (Vector3__Class **)ppQVar16;
        }
        (this->fields)._.orgRotation.x = QStack_6.x;
        (this->fields)._.orgRotation.y = QStack_6.y;
        (this->fields)._.orgRotation.z = QStack_6.z;
        (this->fields)._.orgRotation.w = QStack_6.w;
        if (cRam_? == '\0') {
          func_?();
          ppEVar14 = &TypeInfo__Extensions;
          func_?();
          ppVVar13 = &TypeInfo__UnityEngine__Vector3;
          func_?();
          func_?(&StringLiteral_Velocity);
          cRam_? = '\x01';
        }
        (this->fields)._.velocity.x = (float)ppVVar13;
        (this->fields)._.velocity.y = (float)ppEVar14;
        (this->fields)._.velocity.z = fVar8;
        puVar2 = (undefined8 *)(*(code *)(this->klass->vtable).get_WorldVelocity.method)();
        uStack_4 = *puVar2;
        fStack_5 = *(float *)(puVar2 + 1);
        fVar9 = (float10)func_?(&uStack_4,0);
        fVar8 = _UNK_?;
        (this->fields)._.timeToEnd = 0.0;
        if (fVar8 < (float)fVar9) {
          (this->fields)._.timeToEnd = (this->fields)._.distance / (float)fVar9;
        }
        return;
      }
    }
  }
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* MVMovingPlatform(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform__ctor
               (MVMovingPlatform *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMovable);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MVMovable->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MVMovable);
  }
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__List__,unaff_EBP);
    func_?(&TypeInfo__System__Collections__Generic__List<MVMovable>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_MVMovable_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVMovable>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MVMovable>__List__);
  (this->fields)._.MoveableChildren = this_00;
  func_?(&(this->fields)._.MoveableChildren,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3,unaff_EBP);
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._.localPos.x = (pVVar2->zeroVector).x;
  (this->fields)._.localPos.y = fVar3;
  (this->fields)._.localPos.z = fVar4;
  (this->fields)._.distance = 5.0;
  (this->fields)._.parentMoverID = -1;
  (this->fields)._.isVisible = 1;
  if (bVar1) {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    cRam_? = '\x01';
  }
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  (this->fields)._._.idChildMap = (Dictionary_2_System_Object_System_Object_ *)this_01;
  func_?(&(this->fields)._._.idChildMap,this_01);
  MVGroup::MVGroup__ctor_2((MVGroup *)this,data,worldObjects,(MethodInfo *)0x0);
  MVBlueprintBase::MVBlueprintBase_MapDataToFields((MVBlueprintBase *)this,(MethodInfo *)0x0);
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
  if (((this->fields).end == (MVMovingPlatformNode *)0x0) ||
     ((this->fields).start == (MVMovingPlatformNode *)0x0)) {
    fVar1 = (this->fields)._.velocity.y;
    fVar2 = (this->fields)._.velocity.z;
    __return_storage_ptr__->x = (this->fields)._.velocity.x;
    __return_storage_ptr__->y = fVar1;
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  pMVar3 = (this->fields).end;
  pMVar4 = pMVar3->klass;
  puVar5 = (undefined8 *)
           (*(code *)(pMVar4->vtable).get_Position.method)
                     (&uStack_6,pMVar3,(pMVar4->vtable).set_Position.methodPtr);
  pMVar3 = (this->fields).start;
  uStack_7 = *puVar5;
  fStack_8 = *(float *)(puVar5 + 1);
  if (pMVar3 != (MVMovingPlatformNode *)0x0) {
    puVar5 = (undefined8 *)
             (*(code *)(pMVar3->klass->vtable).get_Position.method)
                       (&VStack_9.y,pMVar3,(pMVar3->klass->vtable).set_Position.methodPtr);
    uStack_6._0_4_ = (float)*puVar5;
    uStack_6._4_4_ = (float)((ulonglong)*puVar5 >> 0x20);
    fStack_10 = fStack_8 - *(float *)(puVar5 + 1);
    uStack_6 = CONCAT44(uStack_7._4_4_ - uStack_6._4_4_,(float)uStack_7 - (float)uStack_6);
    fStack_8 = fStack_10;
    puVar5 = (undefined8 *)func_?(&VStack_9.y,&uStack_6,0);
    uStack_6 = *puVar5;
    fStack_10 = *(float *)(puVar5 + 1);
    fStack_8 = (this->fields)._.velocity.z;
    uStack_7._0_4_ = (this->fields)._.velocity.x;
    uStack_7._4_4_ = (this->fields)._.velocity.y;
    fVar11 = (float10)func_?(&uStack_7,0);
    fStack_12 = (float)fVar11;
    fVar2 = (float)uStack_6 * fStack_12;
    fStack_13 = uStack_6._4_4_ * fStack_12;
    fStack_12 = fStack_10 * fStack_12;
    pMVar3 = (this->fields).start;
    if ((pMVar3 != (MVMovingPlatformNode *)0x0) &&
       (this_00 = (pMVar3->fields)._.transform, this_00 != (Transform *)0x0)) {
      pMVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                         ((Matrix4x4 *)&stack0xffffff8c,this_00,(MethodInfo *)0x0);
      VStack_9.y = fStack_13;
      VStack_9.z = fStack_12;
      VStack_9.w = 0.0;
      vector.y = fStack_13;
      vector.x = fVar2;
      vector.z = fStack_12;
      vector.w = 0.0;
      VStack_9.x = fVar2;
      pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                         (&VStack_9,*pMVar14,vector,(MethodInfo *)0x0);
      fVar2 = pVVar15->y;
      fVar1 = pVVar15->z;
      __return_storage_ptr__->x = pVVar15->x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar1;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  pVVar17 = (Vector3 *)(*pcVar16)();
  return pVVar17;
}

