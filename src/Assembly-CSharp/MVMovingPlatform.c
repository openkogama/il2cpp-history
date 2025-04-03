
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
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
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
    pMStack_6 = (this->fields)._._CubeModel_k__BackingField;
    this_00 = (Func_1_Object_ *)func_?();
    mscorlib.dll::System::Func`1[Object]::Func_1_Object___ctor
              (this_00,value,MethodInfo__MVMovingPlatform____c__DisplayClass7_0___Initialize_b__0__,
               (MethodInfo *)0x0);
    if (pMStack_6 != (MVCubeModelInstance *)0x0) {
      ppFVar7 = &(pMStack_6->fields)._._ModelingConstraintBuilder_k__BackingField;
      *ppFVar7 = (Func_1_IModelingConstraint_ *)this_00;
      func_?(ppFVar7,this_00);
      pMVar8 = (this->fields)._._CubeModel_k__BackingField;
      if (pMVar8 != (MVCubeModelInstance *)0x0) {
        piVar9 = &(pMVar8->fields)._._.interactionFlags;
        *(uint *)piVar9 = (uint)*piVar9 & 0xfffffff7;
        *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4) =
             *(undefined4 *)((int)&(pMVar8->fields)._._.interactionFlags + 4);
        pMVar8 = (this->fields)._._CubeModel_k__BackingField;
        this_01 = (EventHandler_1_Object_ *)
                  func_?(TypeInfo__System__EventHandler<EditStateEventArgs>);
        mscorlib.dll::System::EventHandler`1[Object]::EventHandler_1_Object___ctor
                  (this_01,(Object *)this,
                   MethodInfo__MVMovingPlatform__MVCubeModelBase_BeingEditedChanged_System__Object__EditStateEventArgs_
                   ,(MethodInfo *)0x0);
        if (pMVar8 != (MVCubeModelInstance *)0x0) {
          MVCubeModelBase::MVCubeModelBase_add_BeingEditedChanged
                    ((MVCubeModelBase *)pMVar8,(EventHandler_1_EditStateEventArgs_ *)this_01,
                     (MethodInfo *)0x0);
          pMVar8 = (this->fields)._._CubeModel_k__BackingField;
          this_02 = (UnityAction_1_UnityEngine_Vector2_ *)
                    func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                   );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
          UnityAction_1_UnityEngine_Vector2___ctor
                    (this_02,(Object *)this,
                     MethodInfo__MVMovingPlatform__OnStateChanged_UnityEngine__CullingGroupEvent_,
                     (MethodInfo *)0x0);
          if (pMVar8 != (MVCubeModelInstance *)0x0) {
            MVCubeModelInstance::MVCubeModelInstance_SetupCulling
                      (pMVar8,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_02,
                       (MethodInfo *)0x0);
            pMVar8 = (this->fields)._._CubeModel_k__BackingField;
            if (pMVar8 != (MVCubeModelInstance *)0x0) {
              MVCubeModelInstance::MVCubeModelInstance_SetCullDistanceBand
                        (pMVar8,2,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
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
    bVar2 = (TypeInfo__MVCubeModelBase->_1).naturalAligment;
    pMVar1 = TypeInfo__MVCubeModelBase;
    if ((bVar2 <= (sender->klass->_1).naturalAligment) &&
       ((MVCubeModelBase__Class *)(sender->klass->_1).typeHierarchy[bVar2 - 1] ==
        TypeInfo__MVCubeModelBase)) {
      (this->fields)._.pausedMovement = *(bool *)&sender[0x1c].monitor;
      return;
    }
  }
  func_?(sender,pMVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void MoveBetweenNodes(MVMovingPlatformNode, MVMovingPlatformNode) */

void Assembly-CSharp.dll::MVMovingPlatform::MVMovingPlatform_MoveBetweenNodes
               (MVMovingPlatform *this,MVMovingPlatformNode *start,MVMovingPlatformNode *end,
               MethodInfo *method)

{
  ppMVar1 = &(this->fields).start;
  *ppMVar1 = start;
  func_?(ppMVar1,start);
  ppMVar1 = &(this->fields).end;
  *ppMVar1 = end;
  func_?(ppMVar1,end);
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
  pUVar1 = (this->fields)._._._._.SelectedChanged;
  if (pUVar1 != (UnityAction_2_MVWorldObjectClient_SelectedEventArgs_ *)0x0) {
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
                       (&QStack_3.z,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr);
    pMVar1 = (this->fields).start;
    fStack_4 = *(float *)(puVar2 + 1);
    fVar5 = (float)*puVar2;
    fVar6 = (float)((ulonglong)*puVar2 >> 0x20);
    if (pMVar1 != (MVMovingPlatformNode *)0x0) {
      puVar2 = (undefined8 *)
               (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                         (&QStack_3.z,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr);
      uVar7 = *puVar2;
      uStack_8._0_4_ = (float)uVar7;
      fVar5 = fVar5 - (float)uStack_8;
      uStack_8._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
      QStack_3.w = fVar6 - uStack_8._4_4_;
      fVar6 = fStack_4 - *(float *)(puVar2 + 1);
      QStack_3.x = fVar6;
      pMVar1 = (this->fields).start;
      fStack_4 = 0.0;
      fStack_9 = 0.0;
      uStack_8 = uVar7;
      QStack_3.z = fVar5;
      afStack_10[0] = fVar6;
      if (pMVar1 != (MVMovingPlatformNode *)0x0) {
        fVar11 = fVar6;
        puVar2 = (undefined8 *)
                 (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)
                           (&uStack_8,pMVar1,(pMVar1->klass->vtable).set_WorldPosition.methodPtr);
        (*(code *)(this->klass->vtable).set_WorldPosition.method)
                  (this,(int)*puVar2,(int)((ulonglong)*puVar2 >> 0x20),*(undefined4 *)(puVar2 + 1),
                   (this->klass->vtable).get_IsTransformDefined.methodPtr);
        fVar12 = 0.0;
        fStack_4 = fVar6;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                  ((Vector3 *)&stack0xffffffc0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar13 = (double)(fStack_4 * fStack_4 + fStack_9 * fStack_9 +
                        (float)uStack_8 * (float)uStack_8);
        if (dVar13 < 0.0) {
          func_?();
        }
        else {
          dVar13 = SQRT(dVar13);
        }
        if (_UNK_? < (float)dVar13) {
          if (cRam_? == '\0') {
            func_?(&TypeInfo__UnityEngine__Vector3);
            cRam_? = '\x01';
          }
          forward.y = fStack_9;
          forward.x = fStack_4;
          forward.z = (float)uStack_8;
          pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                             (&QStack_3,forward,
                              TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                              (MethodInfo *)0x0);
          fVar11 = pQVar14->z;
          fVar5 = pQVar14->w;
          fVar12 = 0.0;
          MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                    ((MVWorldObjectClient *)this,*pQVar14,(MethodInfo *)0x0);
        }
        QStack_3.x = (this->fields)._.velocity.x;
        QStack_3.y = (this->fields)._.velocity.y;
        QStack_3.z = (this->fields)._.velocity.z;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar13 = (double)(QStack_3.y * QStack_3.y + QStack_3.x * QStack_3.x +
                        QStack_3.z * QStack_3.z);
        if (dVar13 < 0.0) {
          func_?();
        }
        else {
          dVar13 = SQRT(dVar13);
        }
        fVar6 = (float)dVar13;
        if (fVar6 <= 0.0) {
          pfVar15 = (float *)func_?(&QStack_3,afStack_10,0);
          fStack_4 = *pfVar15;
          fStack_9 = pfVar15[1];
          fVar16 = pfVar15[2];
        }
        else {
          puVar2 = (undefined8 *)func_?(&fStack_4,afStack_10,0);
          QStack_3._0_8_ = *puVar2;
          fVar16 = *(float *)(puVar2 + 1) * fVar6;
          fStack_4 = QStack_3.x * fVar6;
          fStack_9 = QStack_3.y * fVar6;
          QStack_3.z = fVar16;
        }
        uStack_8 = 0;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        auVar17._0_8_ = (double)(fVar11 * fVar11 + fVar5 * fVar5 + fVar12 * fVar12);
        auVar17._8_8_ = 0;
        if (auVar17._0_8_ < 0.0) {
          func_?();
          dVar13 = auVar17._0_8_;
        }
        else {
          dVar13 = SQRT(auVar17._0_8_);
        }
        fVar5 = (float)dVar13;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         );
          func_?(&TypeInfo__System__Single);
          func_?(&StringLiteral_Distance);
          cRam_? = '\x01';
        }
        (this->fields)._.distance = fVar5;
        MVMovable::MVMovable_RecalcTimeToEnd((MVMovable *)this,(MethodInfo *)0x0);
        pVVar18 = (Vector3 *)func_?(&QStack_3.z,auStack_19,0);
        pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)auStack_19,*pVVar18,(MethodInfo *)0x0);
        fVar5 = pQVar14->x;
        fVar6 = pQVar14->y;
        fStack20 = pQVar14->z;
        fStack21 = pQVar14->w;
        if (cRam_? == '\0') {
          func_?();
          func_?(&TypeInfo__Extensions);
          func_?(&TypeInfo__UnityEngine__Quaternion);
          func_?(&StringLiteral_Rotation);
          cRam_? = '\x01';
        }
        (this->fields)._.orgRotation.x = fVar5;
        (this->fields)._.orgRotation.y = fVar6;
        (this->fields)._.orgRotation.z = fStack20;
        (this->fields)._.orgRotation.w = fStack21;
        if (cRam_? == '\0') {
          func_?();
          func_?(&TypeInfo__Extensions);
          func_?(&TypeInfo__UnityEngine__Vector3);
          func_?(&StringLiteral_Velocity);
          cRam_? = '\x01';
        }
        (this->fields)._.velocity.x = QStack_3.w;
        (this->fields)._.velocity.y = afStack_10[0];
        (this->fields)._.velocity.z = fVar16;
        MVMovable::MVMovable_RecalcTimeToEnd((MVMovable *)this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  ppLVar1 = &(this->fields)._.MoveableChildren;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3,unaff_EBP);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._.localPos.x = (pVVar2->zeroVector).x;
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
  pMVar1 = (this->fields).end;
  if ((pMVar1 == (MVMovingPlatformNode *)0x0) ||
     ((this->fields).start == (MVMovingPlatformNode *)0x0)) {
    fVar2 = (this->fields)._.velocity.y;
    fVar3 = (this->fields)._.velocity.z;
    __return_storage_ptr__->x = (this->fields)._.velocity.x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  puVar4 = (undefined8 *)
           (*(code *)(pMVar1->klass->vtable).get_Position.method)
                     (&uStack_5,pMVar1,(pMVar1->klass->vtable).set_Position.methodPtr);
  pMVar1 = (this->fields).start;
  uStack_6 = *puVar4;
  fStack_7 = *(float *)(puVar4 + 1);
  if (pMVar1 != (MVMovingPlatformNode *)0x0) {
    puVar4 = (undefined8 *)
             (*(code *)(pMVar1->klass->vtable).get_Position.method)
                       (&VStack_8.y,pMVar1,(pMVar1->klass->vtable).set_Position.methodPtr);
    uStack_5._0_4_ = (float)*puVar4;
    uStack_5._4_4_ = (float)((ulonglong)*puVar4 >> 0x20);
    fStack_9 = fStack_7 - *(float *)(puVar4 + 1);
    uStack_5 = CONCAT44(uStack_6._4_4_ - uStack_5._4_4_,(float)uStack_6 - (float)uStack_5);
    fStack_7 = fStack_9;
    puVar4 = (undefined8 *)func_?(&VStack_8.y,&uStack_5,0);
    uStack_5 = *puVar4;
    fStack_9 = *(float *)(puVar4 + 1);
    fStack_7 = (this->fields)._.velocity.z;
    uStack_6._0_4_ = (this->fields)._.velocity.x;
    uStack_6._4_4_ = (this->fields)._.velocity.y;
    fVar10 = (float10)func_?(&uStack_6,0);
    fStack_11 = (float)fVar10;
    fVar3 = (float)uStack_5 * fStack_11;
    fStack_12 = uStack_5._4_4_ * fStack_11;
    fStack_11 = fStack_9 * fStack_11;
    pMVar1 = (this->fields).start;
    if ((pMVar1 != (MVMovingPlatformNode *)0x0) &&
       (this_00 = (pMVar1->fields)._.transform, this_00 != (Transform *)0x0)) {
      pMVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                         ((Matrix4x4 *)&stack0xffffff8c,this_00,(MethodInfo *)0x0);
      VStack_8.y = fStack_12;
      VStack_8.z = fStack_11;
      VStack_8.w = 0.0;
      vector.y = fStack_12;
      vector.x = fVar3;
      vector.z = fStack_11;
      vector.w = 0.0;
      VStack_8.x = fVar3;
      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                         (&VStack_8,*pMVar13,vector,(MethodInfo *)0x0);
      fVar3 = pVVar14->y;
      fVar2 = pVVar14->z;
      __return_storage_ptr__->x = pVVar14->x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar2;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar16 = (Vector3 *)(*pcVar15)();
  return pVVar16;
}

