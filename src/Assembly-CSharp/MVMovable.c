
/* Void AddMovableChild(MVMovable) */

void Assembly-CSharp.dll::MVMovable::MVMovable_AddMovableChild
               (MVMovable *this,MVMovable *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).MoveableChildren;
  if (this_00 != (List_1_MVMovable_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)this_00,(Object *)child,
               MethodInfo__System__Collections__Generic__List<MVMovable>__Add_MVMovable_);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVMovable::MVMovable_Destroy(MVMovable *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar2 = (pMVar1->fields)._MoveableController_k__BackingField,
     pMVar2 != (MoveableController *)0x0)) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                     );
      func_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                     );
      cRam_? = '\x01';
    }
    if ((this != (MVMovable *)0x0) &&
       (pDVar3 = (pMVar2->fields).MoveControllers,
       pDVar3 != (Dictionary_2_System_Int32_MVMovable_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(this->fields)._._._.goId,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_);
      this_00 = (pMVar2->fields).Velocities;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]
        ::Dictionary_2_System_Int32_UnityEngine_Vector3__Remove
                  (this_00,(this->fields)._._._.goId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                  );
        pMVar4 = (this->fields)._CubeModel_k__BackingField;
        if (pMVar4 != (MVCubeModelInstance *)0x0) {
          pDVar3 = (pMVar2->fields).CubeModelMovableMap;
          if (pDVar3 == (Dictionary_2_System_Int32_MVMovable_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(pMVar4->fields)._._._.id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                    );
        }
        MVWorldObjectClient::MVWorldObjectClient_Destroy
                  ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
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


/* String GetParamPath(String) */

String * Assembly-CSharp.dll::MVMovable::MVMovable_GetParamPath
                   (MVMovable *this,String *param,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (param != (String *)0x0) {
    pSVar1 = (String *)(*(code *)(param->klass->vtable).ToString.method)();
    pSVar1 = mscorlib.dll::System::String::String_Concat_3
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar3)();
  return pSVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVMovable::MVMovable_Initialize(MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MovableVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<MovableVisualization>__
                   );
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVMovable_InitializeCommon(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (this_00 = (pMVar1->fields)._MoveableController_k__BackingField,
     this_00 != (MoveableController *)0x0)) {
    MoveableController::MoveableController_AddMovable(this_00,this,0,(MethodInfo *)0x0);
    this_01 = (this->fields)._._._.gameObject;
    if (this_01 != (GameObject *)0x0) {
      pMVar2 = (MovableVisualization *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (this_01,
                          MovableVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<MovableVisualization>__
                         );
      ppMVar3 = &(this->fields).movableVisualization;
      *ppMVar3 = pMVar2;
      func_?();
      pMVar2 = *ppMVar3;
      if (pMVar2 != (MovableVisualization *)0x0) {
        MovableVisualization::MovableVisualization_Init
                  (pMVar2,(MVCubeModelBase *)(this->fields)._CubeModel_k__BackingField,
                   (MethodInfo *)0x0);
        pMVar4 = (this->fields)._CubeModel_k__BackingField;
        if (pMVar4 != (MVCubeModelInstance *)0x0) {
          (*(code *)(pMVar4->klass->vtable).set_Visible.method)();
          (*(code *)(this->klass->vtable).set_Visible.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVMovable::MVMovable_InitializeCommon(MVMovable *this,MethodInfo *method)

{
  MVMovable_ReadWOData(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (pMVar1 == (MVCubeModelInstance *)0x0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3._0_4_ = (pVVar2->zeroVector).x;
  uVar3._4_4_ = (pVVar2->zeroVector).y;
  (*(code *)(pMVar1->klass->vtable).set_Position.method)
            (pMVar1,uVar3,(pVVar2->zeroVector).z,(pMVar1->klass->vtable).get_Rotation.methodPtr);
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar4 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    (*(code *)(pMVar1->klass->vtable).set_Rotation.method)
              (pMVar1,(pQVar4->identityQuaternion).x,(pQVar4->identityQuaternion).y,
               (pQVar4->identityQuaternion).z,(pQVar4->identityQuaternion).w,
               (pMVar1->klass->vtable).get_Scale.methodPtr);
    pMVar1 = (this->fields)._CubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pQVar5 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                         (&QStack_6,(MVWorldObjectClient *)pMVar1,(MethodInfo *)0x0);
      fVar7 = pQVar5->y;
      fVar8 = pQVar5->z;
      fVar9 = pQVar5->w;
      (this->fields).orgRotation.x = pQVar5->x;
      (this->fields).orgRotation.y = fVar7;
      (this->fields).orgRotation.z = fVar8;
      (this->fields).orgRotation.w = fVar9;
      return;
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVMovable::MVMovable_InitializeInventory
               (MVMovable *this,MethodInfo *method)

{
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  MVMovable_InitializeCommon(this,(MethodInfo *)0x0);
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar1 != (MVWorldObjectClientManager *)0x0) &&
     (pMVar2 = (pMVar1->fields)._MoveableController_k__BackingField,
     pMVar2 != (MoveableController *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?();
      func_?(&StringLiteral__without_a_cube_model);
      func_?(&StringLiteral__MoveableController__trying_add_);
      cRam_? = '\x01';
    }
    if ((this != (MVMovable *)0x0) &&
       (this_00 = (pMVar2->fields).Velocities,
       this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__Add
                (this_00,(this->fields)._._._.goId,(this->fields).velocity,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Add_int__UnityEngine__Vector3_
                );
      this_01 = (pMVar2->fields).MoveControllers;
      if (this_01 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)this_01,(this->fields)._._._.goId,
                   (Object *)this,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                  );
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Move(Single, Int32) */

void Assembly-CSharp.dll::MVMovable::MVMovable_Move
               (MVMovable *this,float directionFactor,int32_t breakid,MethodInfo *method)

{
  this_02 = this;
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff68;
  puVar5 = &stack0xffffff68;
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0)
  goto code_?;
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar6 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar7 = (pMVar6->fields)._MoveableController_k__BackingField,
     pMVar7 == (MoveableController *)0x0)) goto code_?;
  pMVar8 = (MVMovable *)(pMVar7->fields).time;
  if ((this->fields).pausedMovement == 0) {
    this = pMVar8;
    if (directionFactor < 0.0) {
      fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                            ((MethodInfo *)0x0);
      this = (MVMovable *)((float)pMVar8 - fStack_9);
    }
    fVar10 = (this_02->fields).timeToEnd;
    bVar11 = fVar10 != _UNK_?;
    (this_02->fields).linearTime = 0.0;
    (this_02->fields).fraction = 0.0;
    if (bVar11) {
      uStack_12 = (double)(fVar10 + fVar10);
      fVar13 = (float10)func_?();
      fVar14 = _UNK_?;
      fVar10 = (this_02->fields).timeToEnd;
      fStack_9 = (float)fVar13;
      (this_02->fields).linearTime = fStack_9;
      fVar15 = fStack_9 / fVar10;
      (this_02->fields).fraction = fVar15;
      if (fVar14 < fVar10) {
        (this_02->fields).fraction = _UNK_? - fVar15;
      }
    }
  }
  else {
    (this->fields).linearTime = (this->fields).timeToEnd * (this->fields).fraction;
    this = pMVar8;
  }
  method_00 = (MethodInfo *)(this_02->klass->vtable).set_WorldPosition.methodPtr;
  puVar16 = (undefined8 *)(*(code *)(this_02->klass->vtable).get_WorldPosition_1.method)();
  pMVar8 = (this_02->fields).parentMover;
  uStack_17 = *puVar16;
  fStack_18 = *(float *)(puVar16 + 1);
  if (pMVar8 != (MVMovable *)0x0) {
    pMVar19 = (pMVar8->fields)._CubeModel_k__BackingField;
    if (pMVar19 == (MVCubeModelInstance *)0x0) goto code_?;
    puVar16 = (undefined8 *)(*(code *)(pMVar19->klass->vtable).get_WorldPosition_1.method)();
    uStack_20 = *puVar16;
    fStack_21 = *(float *)(puVar16 + 1);
    pMVar8 = (this_02->fields).parentMover;
    if ((pMVar8 == (MVMovable *)0x0) ||
       (pMVar19 = (pMVar8->fields)._CubeModel_k__BackingField, pMVar19 == (MVCubeModelInstance *)0x0))
    goto code_?;
    pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&LStack_23,(MVWorldObjectClient *)pMVar19,(MethodInfo *)0x0);
    LStack_23._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pQVar22->x;
    LStack_23._index = (int32_t)pQVar22->y;
    LStack_23._version = (int32_t)pQVar22->z;
    LStack_23._current = (RegexCharClass_SingleRange)pQVar22->w;
    puVar16 = (undefined8 *)(*(code *)(this_02->klass->vtable).get_WorldPosition_1.method)();
    pMVar8 = (this_02->fields).parentMover;
    uStack_12._4_4_ = *(List_1_T_Enumerator_System_Object_ **)(puVar16 + 1);
    fStack_24 = (float)*puVar16;
    uStack_12._0_4_ = (float)((ulonglong)*puVar16 >> 0x20);
    if (pMVar8 == (MVMovable *)0x0) goto code_?;
    puVar16 = (undefined8 *)(*(code *)(pMVar8->klass->vtable).get_WorldPosition_1.method)();
    uVar25 = *puVar16;
    uStack_26._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
    uStack_26._0_4_ = (float)uVar25;
    fStack_27 = (float)uStack_12._4_4_ - *(float *)(puVar16 + 1);
    rotation.y = (float)LStack_23._index;
    rotation.x = (float)LStack_23._list;
    rotation.z = (float)LStack_23._version;
    rotation.w = (float)LStack_23._current;
    point.y = (float)uStack_12 - uStack_26._4_4_;
    point.x = fStack_24 - (float)uStack_26;
    point.z = fStack_27;
    uStack_26 = uVar25;
    pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_29,rotation,point,(MethodInfo *)0x0);
    uStack_26._0_4_ = pVVar28->x;
    uStack_26._4_4_ = pVVar28->y;
    fStack_27 = pVVar28->z;
    fStack_21 = fStack_27 + fStack_21;
    uStack_17 = CONCAT44(uStack_26._4_4_ + uStack_20._4_4_,(float)uStack_26 + (float)uStack_20);
    fStack_18 = fStack_21;
  }
  if (_UNK_? < (this_02->fields).timeToEnd) {
    if ((TypeInfo__MVMovable->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    TypeInfo__MVMovable->static_fields->direction = 1.0;
    fVar10 = (this_02->fields).timeToEnd;
    pfVar30 = &(this_02->fields).linearTime;
    pMVar31 = (this_02->klass->vtable).get_WorldVelocity.method;
    if (*pfVar30 <= fVar10 && fVar10 != *pfVar30) {
      puVar16 = (undefined8 *)(*(code *)pMVar31)();
      uVar25 = *puVar16;
      fVar10 = (this_02->fields).linearTime;
      uStack_20._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
      uStack_20._0_4_ = (float)uVar25;
      fStack_21 = *(float *)(puVar16 + 1) * fVar10;
      (this_02->fields).localPos.x = (float)uStack_20 * fVar10;
      (this_02->fields).localPos.y = uStack_20._4_4_ * fVar10;
      (this_02->fields).localPos.z = fStack_21;
      uStack_20 = uVar25;
    }
    else {
      puVar16 = (undefined8 *)(*(code *)pMVar31)();
      fVar10 = (this_02->fields).timeToEnd;
      uVar25 = *puVar16;
      fVar10 = (fVar10 + fVar10) - (this_02->fields).linearTime;
      uStack_20._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
      uStack_20._0_4_ = (float)uVar25;
      fStack_21 = *(float *)(puVar16 + 1) * fVar10;
      (this_02->fields).localPos.x = (float)uStack_20 * fVar10;
      (this_02->fields).localPos.y = uStack_20._4_4_ * fVar10;
      (this_02->fields).localPos.z = fStack_21;
      uStack_20 = uVar25;
      if ((TypeInfo__MVMovable->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__MVMovable->static_fields->direction = -1.0;
    }
    if (_UNK_? < directionFactor) {
      pMVar6 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar6 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar7 = (pMVar6->fields)._MoveableController_k__BackingField,
         pMVar7 == (MoveableController *)0x0)) goto code_?;
      this_00 = (pMVar7->fields).Velocities;
      uStack_12._4_4_ = (List_1_T_Enumerator_System_Object_ *)(this_02->fields)._._._.goId;
      if ((TypeInfo__MVMovable->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fStack_9 = TypeInfo__MVMovable->static_fields->direction;
      puVar16 = (undefined8 *)(*(code *)(this_02->klass->vtable).get_WorldVelocity.method)();
      uVar25 = *puVar16;
      fStack_21 = *(float *)(puVar16 + 1);
      uStack_20._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
      uStack_20._0_4_ = (float)uVar25;
      fStack_32 = fStack_21 * fStack_9 * directionFactor;
      fStack_33 = uStack_20._4_4_ * fStack_9 * directionFactor;
      fStack_34 = (float)uStack_20 * fStack_9 * directionFactor;
      uStack_20 = uVar25;
      fStack_9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                            ((MethodInfo *)0x0);
      fStack_21 = fStack_32 * fStack_9;
      uStack_20 = CONCAT44(fStack_33 * fStack_9,fStack_34 * fStack_9);
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
      value_00.y = fStack_33 * fStack_9;
      value_00.x = fStack_34 * fStack_9;
      value_00.z = fStack_21;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__set_Item
                (this_00,(int32_t)uStack_12._4_4_,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                );
    }
  }
  else {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pVVar35 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar14 = (pVVar35->zeroVector).y;
    fVar10 = (pVVar35->zeroVector).z;
    (this_02->fields).localPos.x = (pVVar35->zeroVector).x;
    (this_02->fields).localPos.y = fVar14;
    (this_02->fields).localPos.z = fVar10;
  }
  uVar36 = (this_02->fields).localPos.x;
  uVar37 = (this_02->fields).localPos.y;
  pMVar19 = (this_02->fields)._CubeModel_k__BackingField;
  fStack_21 = fStack_18 + (this_02->fields).localPos.z;
  uStack_20 = CONCAT44(uStack_17._4_4_ + (float)uVar37,(float)uStack_17 + (float)uVar36);
  if (pMVar19 != (MVCubeModelInstance *)0x0) {
    (*(code *)(pMVar19->klass->vtable).set_WorldPosition.method)();
    uStack_20._0_4_ = (this_02->fields).angularDirection.x;
    uStack_20._4_4_ = (this_02->fields).angularDirection.y;
    fVar10 = (this_02->fields).angularSpeed;
    fStack_21 = (this_02->fields).angularDirection.z * fVar10 * (float)this;
    uStack_17 = CONCAT44(uStack_20._4_4_ * fVar10 * (float)this,
                         (float)uStack_20 * fVar10 * (float)this);
    fStack_18 = fStack_21;
    fVar13 = (float10)func_?();
    uStack_20._0_4_ = (this_02->fields).angularDirection.x;
    uStack_20._4_4_ = (this_02->fields).angularDirection.y;
    fVar10 = (this_02->fields).angularSpeed;
    fStack_21 = (this_02->fields).angularDirection.z * fVar10;
    uStack_17 = CONCAT44(uStack_20._4_4_ * fVar10,(float)uStack_20 * fVar10);
    fStack_18 = fStack_21;
    pVVar28 = (Vector3 *)func_?();
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&LStack_23,(float)fVar13 * _UNK_?,*pVVar28,
                         (MethodInfo *)0x0);
    fStack_38 = pQVar22->x;
    VStack_29.x = pQVar22->y;
    VStack_29.y = pQVar22->z;
    VStack_29.z = pQVar22->w;
    pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&LStack_23,(MVWorldObjectClient *)this_02,(MethodInfo *)0x0);
    fStack_39 = pQVar22->x;
    uStack_20._0_4_ = pQVar22->y;
    uStack_20._4_4_ = pQVar22->z;
    fStack_21 = pQVar22->w;
    if ((this_02->fields).parentMoverID != -1) {
      pMVar8 = (this_02->fields).parentMover;
      if ((pMVar8 == (MVMovable *)0x0) ||
         (pMVar19 = (pMVar8->fields)._CubeModel_k__BackingField, pMVar19 == (MVCubeModelInstance *)0x0
         )) goto code_?;
      pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                          ((Quaternion *)&LStack_23,(MVWorldObjectClient *)pMVar19,(MethodInfo *)0x0)
      ;
      fStack_39 = pQVar22->x;
      uStack_20._0_4_ = pQVar22->y;
      uStack_20._4_4_ = pQVar22->z;
      fStack_21 = pQVar22->w;
    }
    if ((this_02->fields).pausedMovement == 0) {
      pMVar19 = (this_02->fields)._CubeModel_k__BackingField;
      fVar10 = ((VStack_29.z * fStack_21 - fStack_38 * fStack_39) - VStack_29.x * (float)uStack_20)
               - VStack_29.y * uStack_20._4_4_;
      fVar15 = (VStack_29.x * fStack_39 + VStack_29.z * uStack_20._4_4_ + fStack_21 * VStack_29.y) -
               (float)uStack_20 * fStack_38;
      fVar14 = uStack_20._4_4_ * VStack_29.x;
      VStack_29.x = (uStack_20._4_4_ * fStack_38 +
                    VStack_29.z * (float)uStack_20 + fStack_21 * VStack_29.x) -
                    VStack_29.y * fStack_39;
      fStack_38 = (VStack_29.y * (float)uStack_20 + VStack_29.z * fStack_39 + fStack_21 * fStack_38)
                  - fVar14;
      VStack_29.y = fVar15;
      VStack_29.z = fVar10;
      if (pMVar19 == (MVCubeModelInstance *)0x0) goto code_?;
      value.y = VStack_29.x;
      value.x = fStack_38;
      value.z = fVar15;
      value.w = fVar10;
      MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                ((MVWorldObjectClient *)pMVar19,value,(MethodInfo *)0x0);
    }
    pMVar19 = (this_02->fields)._CubeModel_k__BackingField;
    if (pMVar19 != (MVCubeModelInstance *)0x0) {
      if (breakid != (pMVar19->fields)._._._.id) {
        this_01 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                  (this_02->fields).MoveableChildren;
        if (this_01 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
        goto code_?;
        pLVar40 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            (&LStack_23,this_01,
                             MethodInfo__System__Collections__Generic__List<MVMovable>__GetEnumerator__
                            );
        uStack_12._0_4_ = 0.0;
        LStack_41._list = (List_1_System_Object_ *)pLVar40->_list;
        LStack_41._index = pLVar40->_index;
        LStack_41._version = pLVar40->_version;
        LStack_41._current = *(Object **)&pLVar40->_current;
        uStack_1 = 1;
        uStack_12._4_4_ = &LStack_41;
        while( true ) {
          bVar42 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_41,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                             );
          if (bVar42 == 0) break;
          if ((RegexCharClass_SingleRange)LStack_41._current == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          MVMovable_Move((MVMovable *)LStack_41._current,directionFactor,breakid,(MethodInfo *)0x0);
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_41,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__Dispose__
                   ,method_00);
      }
code_?:
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
  }
code_?:
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVMovable::MVMovable_OnDataUpdate(MVMovable *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  method = (MethodInfo *)0x0;
  puStack_1 = (undefined1 *)&this;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff40;
  ppMVar5 = &this;
  puVar6 = &stack0xffffff40;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?();
    func_?(&
                    System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__String);
    func_?();
    func_?(&TypeInfo__MVMovable____c__DisplayClass64_0);
    func_?(&StringLiteral_AngularDirection);
    func_?(&StringLiteral_Movable_still_deprecated_data_An);
    func_?(&StringLiteral_ParentID);
    func_?(&StringLiteral_AngularVelocity);
    func_?(&StringLiteral__init___Could_not_find_child_);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_Distance);
    func_?(&StringLiteral_AngularSpeed);
    func_?(&StringLiteral_movable);
    func_?(&StringLiteral_Rotation);
    func_?(&StringLiteral_Movable_);
    func_?(&StringLiteral_Velocity);
    func_?(&StringLiteral__to_move__If_this_is_a_new_movab);
    func_?(&StringLiteral_Couldn_t_find_parent_);
    cRam_? = '\x01';
    ppMVar5 = (MVMovable **)puStack_1;
    puVar6 = puStack_4;
  }
  puStack_4 = puVar6;
  puStack_1 = (undefined1 *)ppMVar5;
  IStack_7.m_value = 0;
  method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
               *)(in_stack_8->fields)._.blueprintData;
  if (method_01 ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)0x0)
  {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  method_00.m_Index = (int32_t)&UNK_?;
  pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
            ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                      (&DStack_11,(Dictionary_2_System_UInt32_System_Object_ *)method_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                      );
  pDStack_12 = &DStack_13;
  uStack_14 = 0;
  DStack_13._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar10->_dictionary;
  DStack_13._version = pDVar10->_version;
  DStack_13._index = pDVar10->_index;
  DStack_13._current.key = (Object *)(pDVar10->_current).key;
  DStack_13._current.value = (pDVar10->_current).value;
  DStack_13._getEnumeratorRetType = pDVar10->_getEnumeratorRetType;
code_?:
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_13,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar15 == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_13,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,(MethodInfo *)method_00.m_Index);
      MVMovable_RecalcTimeToEnd(in_stack_8,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pFStack_16 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                  *)DStack_13._current.key;
    pMStack_17 = (MVMovable *)DStack_13._current.value;
    if ((MVMovable *)DStack_13._current.value == (MVMovable *)0x0) break;
    pSStack_18 = (String__Array *)
                 (*(code *)(((MVMovable__Class *)(DStack_13._current.value)->klass)->vtable).
                           ToString.method)();
    method_00.m_Index = func_?(TypeInfo__MVMovable____c__DisplayClass64_0);
    pFStack_19 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                  *)method_00.m_Index;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)method_00.m_Index,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    if (pFStack_16 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)0x0
       ) break;
    s = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)
        (*(code *)(((Dictionary_2_System_UInt32_System_Object___Class *)pFStack_16->klass)->vtable).
                  ToString.method)
                  (pFStack_16,
                   (((Dictionary_2_System_UInt32_System_Object___Class *)pFStack_16->klass)->vtable)
                   .get_Item.methodPtr);
    method_01 = pFStack_16;
    pFStack_16 = s;
    uVar20 = UnityEngine.IMGUIModule.dll::<PrivateImplementationDetails>::
             _PrivateImplementationDetails__5_ComputeStringHash((String *)s,(MethodInfo *)0x0);
    if (uVar20 < 0x6742174f) {
      if (uVar20 < 0xe39723d) {
        if (uVar20 != 0x232777f) goto code_?;
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_16,StringLiteral_Rotation,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          pVVar21 = Extensions::Extensions_ToVector3FromSerializeString
                              (&VStack_22,(String *)pSStack_18,(MethodInfo *)0x0);
          uVar23._0_4_ = pVVar21->x;
          uVar23._4_4_ = pVVar21->y;
          method_00.m_Index = 0;
          pfVar24 = (float *)func_?(&DStack_11._index,uVar23,pVVar21->z);
          fVar25 = pfVar24[1];
          fVar26 = pfVar24[2];
          fVar27 = pfVar24[3];
          (in_stack_8->fields).orgRotation.x = *pfVar24;
          (in_stack_8->fields).orgRotation.y = fVar25;
          (in_stack_8->fields).orgRotation.z = fVar26;
          (in_stack_8->fields).orgRotation.w = fVar27;
        }
      }
      else if (uVar20 == 0x4ae426e8) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_16,StringLiteral_ParentID,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          pcVar28 = (char *)mscorlib.dll::System::Convert::Convert_ToInt32_14
                                      ((String *)pSStack_18,(MethodInfo *)0x0);
          if (pFStack_19 ==
              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
               *)0x0) break;
          (pFStack_19->_0).name = pcVar28;
          if ((char *)(in_stack_8->fields).parentMoverID != pcVar28) {
            pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if ((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
               (pMVar30 = (pMVar29->fields)._MoveableController_k__BackingField,
               pMVar30 == (MoveableController *)0x0)) break;
            pMStack_17 = (MVMovable *)(pMVar30->fields).MoveControllers;
            method_00.m_Index =
                 (int32_t)
                 TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
            ;
            pFStack_16 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                          *)func_?();
            mscorlib.dll::System::Predicate`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                      ((Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                       pFStack_16,(Object *)pFStack_19,
                       MethodInfo__MVMovable____c__DisplayClass64_0___ReadWOData_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                       ,(MethodInfo *)0x0);
            source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                               ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                                pMStack_17,pFStack_16,
                                System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                               );
            KVar31 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                               ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                                System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                               );
            pMStack_17 = (MVMovable *)KVar31.value;
            if (pMStack_17 == (MVMovable *)0x0) {
              pMStack_17 = (MVMovable *)
                           mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral_Couldn_t_find_parent_,(String *)pSStack_18,
                                      (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pMStack_17,(MethodInfo *)0x0);
            }
            else {
              pMVar32 = (in_stack_8->fields).parentMover;
              if (pMVar32 != (MVMovable *)0x0) {
                MVMovable_RemoveMovableChild(pMVar32,in_stack_8,(MethodInfo *)0x0);
              }
              ppMVar5 = &(in_stack_8->fields).parentMover;
              (in_stack_8->fields).parentMoverID = (int32_t)(pFStack_19->_0).name;
              *ppMVar5 = pMStack_17;
              func_?(ppMVar5,pMStack_17);
              pMVar32 = (in_stack_8->fields).parentMover;
              if (pMVar32 == (MVMovable *)0x0) break;
              MVMovable_AddMovableChild(pMVar32,in_stack_8,(MethodInfo *)0x0);
            }
          }
        }
      }
      else if ((uVar20 == 0x6742174e) &&
              (bVar15 = mscorlib.dll::System::String::String_op_Equality
                                 ((String *)pFStack_16,StringLiteral_AngularDirection,
                                  (MethodInfo *)0x0), bVar15 != 0)) {
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        pVVar21 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_33,(String *)pSStack_18,(MethodInfo *)0x0);
        fVar26 = pVVar21->y;
        fVar25 = pVVar21->z;
        (in_stack_8->fields).angularDirection.x = pVVar21->x;
        (in_stack_8->fields).angularDirection.y = fVar26;
        (in_stack_8->fields).angularDirection.z = fVar25;
      }
    }
    else if (uVar20 < 0x7c2c901f) {
      if (uVar20 == 0x6f661c94) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_16,StringLiteral_AngularSpeed,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (in_stack_8->fields)._.blueprintData;
          if ((pDVar34 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
             (method_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                    (pDVar34,(Object *)StringLiteral_AngularSpeed,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    ), method_00.m_Index == 0)) break;
          pIVar35 = (Int32__Class *)TypeInfo__System__Single;
          if (*(Il2CppClass **)(*(int *)method_00.m_Index + 0x20) !=
              (TypeInfo__System__Single->_0).element_class) goto code_?;
          pfVar24 = (float *)func_?();
          (in_stack_8->fields).angularSpeed = *pfVar24;
        }
      }
      else if ((uVar20 == 0x7c2c901e) &&
              (bVar15 = mscorlib.dll::System::String::String_op_Equality
                                 ((String *)pFStack_16,StringLiteral_AngularVelocity,
                                  (MethodInfo *)0x0), bVar15 != 0)) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Movable_still_deprecated_data_An,(MethodInfo *)0x0);
      }
    }
    else if (uVar20 == 0xba408252) {
      bVar15 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)pFStack_16,StringLiteral_Velocity,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        pVVar21 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_36,(String *)pSStack_18,(MethodInfo *)0x0);
        fVar26 = pVVar21->y;
        fVar25 = pVVar21->z;
        (in_stack_8->fields).velocity.x = pVVar21->x;
        (in_stack_8->fields).velocity.y = fVar26;
        (in_stack_8->fields).velocity.z = fVar25;
      }
    }
    else if ((uVar20 == 0xd3d96082) &&
            (bVar15 = mscorlib.dll::System::String::String_op_Equality
                               ((String *)pFStack_16,StringLiteral_Distance,(MethodInfo *)0x0),
            bVar15 != 0)) {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pFStack_19 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                    *)mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pFStack_19 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                    *)mscorlib.dll::System::Convert::Convert_ToSingle_13
                                ((String *)pSStack_18,(IFormatProvider *)pFStack_19,
                                 (MethodInfo *)0x0);
      (in_stack_8->fields).distance = (float)pFStack_19;
    }
  }
  goto code_?;
code_?:
  if ((uVar20 == 0xe39723c) &&
     (bVar15 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)pFStack_16,StringLiteral_ChildrenMap,(MethodInfo *)0x0),
     bVar15 != 0)) {
    pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (in_stack_8->fields)._.childIdMap;
    if (pDVar34 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      (pDVar34,(Object *)StringLiteral_movable,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar15 != 0) {
      pDVar34 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (in_stack_8->fields)._.childIdMap;
      if ((pDVar34 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (method_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (pDVar34,(Object *)StringLiteral_movable,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ), method_00.m_Index == 0)) goto code_?;
      pIVar35 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*(int *)method_00.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) {
code_?:
        func_?(method_00.m_Index,pIVar35);
        goto code_?;
      }
      puVar37 = (undefined4 *)func_?(method_00.m_Index);
      method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                   *)*puVar37;
      method_00.m_Index = (int32_t)&UNK_?;
      IStack_7.m_value = (int32_t)method_01;
      pMStack_17 = (MVMovable *)
                   MVGroup::MVGroup_GetChild
                             ((MVGroup *)in_stack_8,(int32_t)method_01,(MethodInfo *)0x0);
      if ((pMStack_17 != (MVMovable *)0x0) &&
         ((bStack_38 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment,
          (pMStack_17->klass->_1).naturalAligment < bStack_38 ||
          ((MVCubeModelInstance__Class *)(pMStack_17->klass->_1).typeHierarchy[bStack_38 - 1] !=
           TypeInfo__MVCubeModelInstance)))) goto code_?;
      (in_stack_8->fields)._CubeModel_k__BackingField = (MVCubeModelInstance *)pMStack_17;
      func_?();
      if ((in_stack_8->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
        pSVar39 = TypeInfo__System__String;
        pSStack_18 = (String__Array *)func_?(TypeInfo__System__String,5);
        if (pSStack_18 == (String__Array *)0x0) goto code_?;
        func_?(0,StringLiteral_Movable_);
        pSVar40 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&in_stack_8->fields,(MethodInfo *)0x0);
        method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                     *)0x1;
        func_?(1,pSVar40);
        func_?(2,StringLiteral__init___Could_not_find_child_);
        pSVar40 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_7,(MethodInfo *)0x0);
        method_00.m_Index = 3;
        func_?(3,pSVar40);
        uVar23 = 0x4103203cf;
        pSVar40 = StringLiteral__to_move__If_this_is_a_new_movab;
        func_?();
        pMStack_17 = (MVMovable *)
                     mscorlib.dll::System::String::String_Concat_6(pSStack_18,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug,pSVar39,uVar23,pSVar40);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pMStack_17,(MethodInfo *)0x0);
      }
    }
  }
  goto code_?;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovable::MVMovable_OnEnterObject
               (MVMovable *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    pMVar1 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0);
    if (pMVar1 != (MVCameraBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).FocusOnObject.method)
                (pMVar1,(this->fields)._CubeModel_k__BackingField,0x40000000,0,0,0,0);
      if (e != (EditorStateMachine *)0x0) {
        EditorStateMachine::EditorStateMachine_EnterGroup(e,(MVGroup *)this,(MethodInfo *)0x0);
        pMVar2 = (this->fields)._CubeModel_k__BackingField;
        if (pMVar2 != (MVCubeModelInstance *)0x0) {
          EditorStateMachine::EditorStateMachine_SelectWO
                    (e,(pMVar2->fields)._._._.id,0,1,(MethodInfo *)0x0);
          value = (Object *)func_?(TypeInfo__EditorEvent);
          FSMEntity::FSMEntity_set_Event((FSMEntity *)e,value,(MethodInfo *)0x0);
          pMVar2 = (this->fields)._CubeModel_k__BackingField;
          if (pMVar2 != (MVCubeModelInstance *)0x0) {
            (*(code *)(pMVar2->klass->vtable).set_Visible.method)();
            return 1;
          }
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean OnExitObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovable::MVMovable_OnExitObject
               (MVMovable *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__EditorEvent);
    cRam_? = '\x01';
  }
  this_00 = e;
  if (e != (EditorStateMachine *)0x0) {
    EditorStateMachine::EditorStateMachine_ExitGroupToRoot(e,(MethodInfo *)0x0);
    e = (EditorStateMachine *)0x2f;
    value = (Object *)func_?(TypeInfo__EditorEvent,&e);
    FSMEntity::FSMEntity_set_Event((FSMEntity *)this_00,value,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._CubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      (*(code *)(pMVar1->klass->vtable).set_Visible.method)
                (pMVar1,0,(pMVar1->klass->vtable).GetTargetPosition.methodPtr);
      return 1;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ReadWOData() */

void Assembly-CSharp.dll::MVMovable::MVMovable_ReadWOData(MVMovable *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff38;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff38;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Convert);
    func_?(&TypeInfo__System__Globalization__CultureInfo);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                   );
    func_?();
    func_?(&
                    System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Value__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                   );
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__System__String);
    func_?(&TypeInfo__System__String);
    func_?();
    func_?(&TypeInfo__MVMovable____c__DisplayClass64_0);
    func_?(&StringLiteral_AngularDirection);
    func_?(&StringLiteral_Movable_still_deprecated_data_An);
    func_?(&StringLiteral_ParentID);
    func_?(&StringLiteral_AngularVelocity);
    func_?(&StringLiteral__init___Could_not_find_child_);
    func_?(&StringLiteral_ChildrenMap);
    func_?(&StringLiteral_Distance);
    func_?(&StringLiteral_AngularSpeed);
    func_?(&StringLiteral_movable);
    func_?(&StringLiteral_Rotation);
    func_?(&StringLiteral_Movable_);
    func_?(&StringLiteral_Velocity);
    func_?(&StringLiteral__to_move__If_this_is_a_new_movab);
    func_?(&StringLiteral_Couldn_t_find_parent_);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  IStack_8.m_value = 0;
  method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
               *)(this->fields)._.blueprintData;
  if (method_01 ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)0x0)
  {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  method_00.m_Index = (int32_t)&UNK_?;
  pDVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
            ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                      (&DStack_11,(Dictionary_2_System_UInt32_System_Object_ *)method_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                      );
  pDStack_12 = &DStack_13;
  uStack_14 = 0;
  DStack_13._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar10->_dictionary;
  DStack_13._version = pDVar10->_version;
  DStack_13._index = pDVar10->_index;
  DStack_13._current.key = (Object *)(pDVar10->_current).key;
  DStack_13._current.value = (pDVar10->_current).value;
  DStack_13._getEnumeratorRetType = pDVar10->_getEnumeratorRetType;
  uStack_2 = 1;
code_?:
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
             ::Object,System::Object]::
             Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                       (&DStack_13,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                       );
    if (bVar15 == 0) {
      uStack_2 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_13,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,(MethodInfo *)method_00.m_Index);
      uStack_2 = 0xffffffff;
      MVMovable_RecalcTimeToEnd(this,(MethodInfo *)0x0);
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
    pFStack_16 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                  *)DStack_13._current.key;
    pMStack_17 = (MVMovable *)DStack_13._current.value;
    if ((MVMovable *)DStack_13._current.value == (MVMovable *)0x0) break;
    pSStack_18 = (String__Array *)
                 (*(code *)(((MVMovable__Class *)(DStack_13._current.value)->klass)->vtable).
                           ToString.method)();
    method_00.m_Index = func_?(TypeInfo__MVMovable____c__DisplayClass64_0);
    pFStack_19 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                  *)method_00.m_Index;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)method_00.m_Index,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    if (pFStack_16 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)0x0
       ) break;
    s = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)
        (*(code *)(((Dictionary_2_System_UInt32_System_Object___Class *)pFStack_16->klass)->vtable).
                  ToString.method)
                  (pFStack_16,
                   (((Dictionary_2_System_UInt32_System_Object___Class *)pFStack_16->klass)->vtable)
                   .get_Item.methodPtr);
    method_01 = pFStack_16;
    pFStack_16 = s;
    uVar20 = UnityEngine.IMGUIModule.dll::<PrivateImplementationDetails>::
             _PrivateImplementationDetails__5_ComputeStringHash((String *)s,(MethodInfo *)0x0);
    if (uVar20 < 0x6742174f) {
      if (uVar20 < 0xe39723d) {
        if (uVar20 != 0x232777f) goto code_?;
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                           ((String *)pFStack_16,StringLiteral_Rotation,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          pVVar21 = Extensions::Extensions_ToVector3FromSerializeString
                              (&VStack_22,(String *)pSStack_18,(MethodInfo *)0x0);
          uVar23._0_4_ = pVVar21->x;
          uVar23._4_4_ = pVVar21->y;
          method_00.m_Index = 0;
          pfVar24 = (float *)func_?(&DStack_11._index,uVar23,pVVar21->z);
          fVar25 = pfVar24[1];
          fVar26 = pfVar24[2];
          fVar27 = pfVar24[3];
          (this->fields).orgRotation.x = *pfVar24;
          (this->fields).orgRotation.y = fVar25;
          (this->fields).orgRotation.z = fVar26;
          (this->fields).orgRotation.w = fVar27;
        }
      }
      else if (uVar20 == 0x4ae426e8) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                           ((String *)pFStack_16,StringLiteral_ParentID,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          pcVar28 = (char *)mscorlib.dll::System::Convert::Convert_ToInt32_14
                                      ((String *)pSStack_18,(MethodInfo *)0x0);
          if (pFStack_19 ==
              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
               *)0x0) break;
          (pFStack_19->_0).name = pcVar28;
          if ((char *)(this->fields).parentMoverID != pcVar28) {
            pMVar29 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if ((pMVar29 == (MVWorldObjectClientManager *)0x0) ||
               (pMVar30 = (pMVar29->fields)._MoveableController_k__BackingField,
               pMVar30 == (MoveableController *)0x0)) break;
            pMStack_17 = (MVMovable *)(pMVar30->fields).MoveControllers;
            method_00.m_Index =
                 (int32_t)
                 TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
            ;
            pFStack_16 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                          *)func_?();
            mscorlib.dll::System::Predicate`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                      ((Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                       pFStack_16,(Object *)pFStack_19,
                       MethodInfo__MVMovable____c__DisplayClass64_0___ReadWOData_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                       ,(MethodInfo *)0x0);
            source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                               ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                                pMStack_17,pFStack_16,
                                System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                               );
            KVar31 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                               ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                                System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                               );
            pMStack_17 = (MVMovable *)KVar31.value;
            if (pMStack_17 == (MVMovable *)0x0) {
              pMStack_17 = (MVMovable *)
                           mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral_Couldn_t_find_parent_,(String *)pSStack_18,
                                      (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pMStack_17,(MethodInfo *)0x0);
            }
            else {
              pMVar32 = (this->fields).parentMover;
              if (pMVar32 != (MVMovable *)0x0) {
                MVMovable_RemoveMovableChild(pMVar32,this,(MethodInfo *)0x0);
              }
              ppMVar33 = &(this->fields).parentMover;
              (this->fields).parentMoverID = (int32_t)(pFStack_19->_0).name;
              *ppMVar33 = pMStack_17;
              func_?(ppMVar33,pMStack_17);
              pMVar32 = (this->fields).parentMover;
              if (pMVar32 == (MVMovable *)0x0) break;
              MVMovable_AddMovableChild(pMVar32,this,(MethodInfo *)0x0);
            }
          }
        }
      }
      else if ((uVar20 == 0x6742174e) &&
              (bVar15 = mscorlib.dll::System::String::String_op_Equality
                                  ((String *)pFStack_16,StringLiteral_AngularDirection,
                                   (MethodInfo *)0x0), bVar15 != 0)) {
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        pVVar21 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_34,(String *)pSStack_18,(MethodInfo *)0x0);
        fVar26 = pVVar21->y;
        fVar25 = pVVar21->z;
        (this->fields).angularDirection.x = pVVar21->x;
        (this->fields).angularDirection.y = fVar26;
        (this->fields).angularDirection.z = fVar25;
      }
    }
    else if (uVar20 < 0x7c2c901f) {
      if (uVar20 == 0x6f661c94) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                           ((String *)pFStack_16,StringLiteral_AngularSpeed,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          pDVar35 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this->fields)._.blueprintData;
          if ((pDVar35 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
             (method_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Object,UnityEngine::UIElements::TextureId]::
                          Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                    (pDVar35,(Object *)StringLiteral_AngularSpeed,
                                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                    ), method_00.m_Index == 0)) break;
          pIVar36 = (Int32__Class *)TypeInfo__System__Single;
          if (*(Il2CppClass **)(*(int *)method_00.m_Index + 0x20) !=
              (TypeInfo__System__Single->_0).element_class) goto code_?;
          pfVar24 = (float *)func_?();
          (this->fields).angularSpeed = *pfVar24;
        }
      }
      else if ((uVar20 == 0x7c2c901e) &&
              (bVar15 = mscorlib.dll::System::String::String_op_Equality
                                  ((String *)pFStack_16,StringLiteral_AngularVelocity,
                                   (MethodInfo *)0x0), bVar15 != 0)) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)StringLiteral_Movable_still_deprecated_data_An,(MethodInfo *)0x0);
      }
    }
    else if (uVar20 == 0xba408252) {
      bVar15 = mscorlib.dll::System::String::String_op_Equality
                         ((String *)pFStack_16,StringLiteral_Velocity,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        pVVar21 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_37,(String *)pSStack_18,(MethodInfo *)0x0);
        fVar26 = pVVar21->y;
        fVar25 = pVVar21->z;
        (this->fields).velocity.x = pVVar21->x;
        (this->fields).velocity.y = fVar26;
        (this->fields).velocity.z = fVar25;
      }
    }
    else if ((uVar20 == 0xd3d96082) &&
            (bVar15 = mscorlib.dll::System::String::String_op_Equality
                                ((String *)pFStack_16,StringLiteral_Distance,(MethodInfo *)0x0),
            bVar15 != 0)) {
      if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Globalization__CultureInfo);
      }
      pFStack_19 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                    *)mscorlib.dll::System::Globalization::CultureInfo::
                      CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
      if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Convert);
      }
      pFStack_19 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                    *)mscorlib.dll::System::Convert::Convert_ToSingle_13
                                ((String *)pSStack_18,(IFormatProvider *)pFStack_19,
                                 (MethodInfo *)0x0);
      (this->fields).distance = (float)pFStack_19;
    }
  }
  goto code_?;
code_?:
  if ((uVar20 == 0xe39723c) &&
     (bVar15 = mscorlib.dll::System::String::String_op_Equality
                         ((String *)pFStack_16,StringLiteral_ChildrenMap,(MethodInfo *)0x0),
     bVar15 != 0)) {
    pDVar35 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
             (this->fields)._.childIdMap;
    if (pDVar35 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                       (pDVar35,(Object *)StringLiteral_movable,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                       );
    if (bVar15 != 0) {
      pDVar35 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (this->fields)._.childIdMap;
      if ((pDVar35 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) ||
         (method_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (pDVar35,(Object *)StringLiteral_movable,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                ), method_00.m_Index == 0)) goto code_?;
      pIVar36 = TypeInfo__System__Int32;
      if (*(Il2CppClass **)(*(int *)method_00.m_Index + 0x20) !=
          (TypeInfo__System__Int32->_0).element_class) {
code_?:
        func_?(method_00.m_Index,pIVar36);
        goto code_?;
      }
      puVar38 = (undefined4 *)func_?(method_00.m_Index);
      method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                   *)*puVar38;
      method_00.m_Index = (int32_t)&UNK_?;
      IStack_8.m_value = (int32_t)method_01;
      pMStack_17 = (MVMovable *)
                   MVGroup::MVGroup_GetChild((MVGroup *)this,(int32_t)method_01,(MethodInfo *)0x0);
      if ((pMStack_17 != (MVMovable *)0x0) &&
         ((bStack_39 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment,
          (pMStack_17->klass->_1).naturalAligment < bStack_39 ||
          ((MVCubeModelInstance__Class *)(pMStack_17->klass->_1).typeHierarchy[bStack_39 - 1] !=
           TypeInfo__MVCubeModelInstance)))) goto code_?;
      (this->fields)._CubeModel_k__BackingField = (MVCubeModelInstance *)pMStack_17;
      func_?();
      if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
        pSVar40 = TypeInfo__System__String;
        pSStack_18 = (String__Array *)func_?(TypeInfo__System__String,5);
        if (pSStack_18 == (String__Array *)0x0) goto code_?;
        func_?(0,StringLiteral_Movable_);
        pSVar41 = mscorlib.dll::System::Int32::Int32_ToString
                            ((Int32 *)&this->fields,(MethodInfo *)0x0);
        method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                     *)0x1;
        func_?(1,pSVar41);
        func_?(2,StringLiteral__init___Could_not_find_child_);
        pSVar41 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
        method_00.m_Index = 3;
        func_?(3,pSVar41);
        uVar23 = 0x4103203cf;
        pSVar41 = StringLiteral__to_move__If_this_is_a_new_movab;
        func_?();
        pMStack_17 = (MVMovable *)
                     mscorlib.dll::System::String::String_Concat_6(pSStack_18,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug,pSVar40,uVar23,pSVar41);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pMStack_17,(MethodInfo *)0x0);
      }
    }
  }
  goto code_?;
}


/* Void RecalcTimeToEnd() */

void Assembly-CSharp.dll::MVMovable::MVMovable_RecalcTimeToEnd(MVMovable *this,MethodInfo *method)

{
  puVar1 = (undefined8 *)
           (*(code *)(this->klass->vtable).get_WorldVelocity.method)
                     (auStack_2,this,this->klass[1]._0.image);
  uVar3 = *puVar1;
  fVar4 = *(float *)(puVar1 + 1);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fStack_5 = (float)((ulonglong)uVar3 >> 0x20);
  fStack_6 = (float)uVar3;
  dVar7 = (double)(fStack_5 * fStack_5 + fStack_6 * fStack_6 + fVar4 * fVar4);
  if (dVar7 < 0.0) {
    func_?();
  }
  else {
    dVar7 = SQRT(dVar7);
  }
  (this->fields).timeToEnd = 0.0;
  if (_UNK_? < (float)dVar7) {
    (this->fields).timeToEnd = (this->fields).distance / (float)dVar7;
  }
  return;
}


/* Void RemoveMovableChild(MVMovable) */

void Assembly-CSharp.dll::MVMovable::MVMovable_RemoveMovableChild
               (MVMovable *this,MVMovable *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).MoveableChildren;
  if (this_00 != (List_1_MVMovable_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Remove
              ((List_1_System_Object_ *)this_00,(Object *)child,
               MethodInfo__System__Collections__Generic__List<MVMovable>__Remove_MVMovable_);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAngularDirection(Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetAngularDirection
               (MVMovable *this,Vector3 angularDirection,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  vec = angularDirection;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_AngularDirection);
    cRam_? = '\x01';
  }
  (this->fields).angularDirection.x = angularDirection.x;
  (this->fields).angularDirection.y = angularDirection.y;
  (this->fields).angularDirection.z = angularDirection.z;
  if (updateWOData == 0) {
    return;
  }
  this_00 = (this->fields)._.blueprintData;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  pSVar1 = Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_AngularDirection,(Object *)pSVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer == 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pSVar1 = StringLiteral_AngularDirection;
    worldObjectID = (this->fields)._._._._.id;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pSVar1 != (String *)0x0) {
      pSVar1 = (String *)(*(code *)(pSVar1->klass->vtable).ToString.method)();
      pSVar1 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
      value = (Object *)func_?();
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_01,worldObjectID,pSVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAngularSpeed(Single, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetAngularSpeed
               (MVMovable *this,float angularSpeed,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_AngularSpeed);
    cRam_? = '\x01';
  }
  (this->fields).angularSpeed = angularSpeed;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    _updateWOData = angularSpeed;
    pOVar1 = (Object *)func_?(TypeInfo__System__Single,&updateWOData);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_AngularSpeed,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      if (syncServer == 0) {
        return;
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar2 = StringLiteral_AngularSpeed;
      worldObjectID = (this->fields)._._._._.id;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (pSVar2 != (String *)0x0) {
        pSVar2 = (String *)(*(code *)(pSVar2->klass->vtable).ToString.method)(pSVar2);
        pSVar2 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
        _updateWOData = angularSpeed;
        pOVar1 = (Object *)func_?(TypeInfo__System__Single,&updateWOData);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_01,worldObjectID,pSVar2,pOVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}


/* Void SetDistance(Single, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetDistance
               (MVMovable *this,float distance,bool updateWOData,bool syncServer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_Distance);
    cRam_? = '\x01';
  }
  (this->fields).distance = distance;
  if (updateWOData == 0) {
code_?:
    MVMovable_RecalcTimeToEnd(this,(MethodInfo *)0x0);
    return;
  }
  this_00 = (this->fields)._.blueprintData;
  _updateWOData = distance;
  pOVar1 = (Object *)func_?(TypeInfo__System__Single,&updateWOData);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_Distance,pOVar1,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer == 0) goto code_?;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pSVar2 = StringLiteral_Distance;
    worldObjectID = (this->fields)._._._._.id;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_BlueprintData_);
      cRam_? = '\x01';
    }
    if (pSVar2 != (String *)0x0) {
      pSVar2 = (String *)
               (*(code *)(pSVar2->klass->vtable).ToString.method)
                         (pSVar2,(pSVar2->klass->vtable).CompareTo.methodPtr);
      pSVar2 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar2,(MethodInfo *)0x0);
      _updateWOData = distance;
      pOVar1 = (Object *)func_?(TypeInfo__System__Single,&updateWOData);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_01,worldObjectID,pSVar2,pOVar1,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SetOrgRotation(Quaternion, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetOrgRotation
               (MVMovable *this,Quaternion orgRotation,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__UnityEngine__Quaternion);
    func_?(&StringLiteral_Rotation);
    cRam_? = '\x01';
  }
  (this->fields).orgRotation.x = orgRotation.x;
  (this->fields).orgRotation.y = orgRotation.y;
  (this->fields).orgRotation.z = orgRotation.z;
  (this->fields).orgRotation.w = orgRotation.w;
  if (updateWOData == 0) {
    return;
  }
  this_00 = (this->fields)._.blueprintData;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_ToEulerRad
                     ((Vector3 *)&stack0xffffffe4,orgRotation,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  uVar3 = pVVar1->y;
  euler.y = (float)uVar3 * _UNK_?;
  euler.x = (float)uVar2 * _UNK_?;
  euler.z = pVVar1->z * _UNK_?;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Internal_MakePositive
                     ((Vector3 *)&stack0xffffffd8,euler,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar1->x;
  uVar4._4_4_ = pVVar1->y;
  fVar5 = pVVar1->z;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  vec.z = fVar5;
  vec.x = (float)(int)uVar4;
  vec.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  pSVar6 = Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_Rotation,(Object *)pSVar6,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer == 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pSVar6 = StringLiteral_Rotation;
    worldObjectID = (this->fields)._._._._.id;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pSVar6 != (String *)0x0) {
      pSVar6 = (String *)(*(code *)(pSVar6->klass->vtable).ToString.method)();
      pSVar6 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
      value = (Object *)func_?();
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_01,worldObjectID,pSVar6,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetParentMoverID(Int32, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetParentMoverID
               (MVMovable *this,int32_t parentMoverID,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                   );
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                   );
    func_?(&
                    MethodInfo__MVMovable____c__DisplayClass62_0___SetParentMoverID_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                   );
    func_?(&TypeInfo__MVMovable____c__DisplayClass62_0);
    func_?(&StringLiteral_ParentMoverID);
    func_?(&StringLiteral_Couldn_t_find_parent_);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__MVMovable____c__DisplayClass62_0;
  pOVar1 = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (pOVar1,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  iVar2 = parentMoverID;
  if (pOVar1 != (Object *)0x0) {
    this_04 = pOVar1 + 1;
    this_04->klass = (Object__Class *)parentMoverID;
    if ((this->fields).parentMoverID != parentMoverID) {
      parentMoverID = 0;
      if (iVar2 != -1) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
           (pMVar4 = (pMVar3->fields)._MoveableController_k__BackingField,
           pMVar4 == (MoveableController *)0x0)) goto code_?;
        source = (pMVar4->fields).MoveControllers;
        this_02 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                  func_?(
                                 TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                                 );
        mscorlib.dll::System::Predicate`1[System::Xml::Schema::
        XmlSchemaObjectTable+XmlSchemaObjectEntry]::
        Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                  (this_02,pOVar1,
                   MethodInfo__MVMovable____c__DisplayClass62_0___SetParentMoverID_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                   ,(MethodInfo *)0x0);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                              ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                                *)this_02,
                               System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                              );
        KVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                          ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source_00,
                           System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                          );
        parentMoverID = (int32_t)KVar5.value;
        if ((Object *)parentMoverID == (Object *)0x0) {
          pSVar6 = mscorlib.dll::System::Int32::Int32_ToString((Int32 *)this_04,(MethodInfo *)0x0);
          pSVar6 = mscorlib.dll::System::String::String_Concat_3
                             (StringLiteral_Couldn_t_find_parent_,pSVar6,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar6,(MethodInfo *)0x0);
          return;
        }
      }
      this_00 = (this->fields).parentMover;
      ppMVar7 = &(this->fields).parentMover;
      if (this_00 != (MVMovable *)0x0) {
        MVMovable_RemoveMovableChild(this_00,this,(MethodInfo *)0x0);
      }
      (this->fields).parentMoverID = (int32_t)this_04->klass;
      *ppMVar7 = (MVMovable *)parentMoverID;
      func_?(ppMVar7,parentMoverID);
      if (*ppMVar7 != (MVMovable *)0x0) {
        MVMovable_AddMovableChild(*ppMVar7,this,(MethodInfo *)0x0);
      }
    }
    if (updateWOData == 0) {
      return;
    }
    parentMoverID = (int32_t)this_04->klass;
    this_01 = (this->fields)._.blueprintData;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&parentMoverID);
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_01,(Object *)StringLiteral_ParentMoverID,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      if (syncServer == 0) {
        return;
      }
      this_03 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar6 = StringLiteral_ParentMoverID;
      iVar2 = (this->fields)._._._._.id;
      if (cRam_? == '\0') {
        func_?(&StringLiteral_BlueprintData_);
        cRam_? = '\x01';
      }
      if (pSVar6 != (String *)0x0) {
        pSVar6 = (String *)
                 (*(code *)(pSVar6->klass->vtable).ToString.method)
                           (pSVar6,(pSVar6->klass->vtable).CompareTo.methodPtr);
        pSVar6 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_BlueprintData_,pSVar6,(MethodInfo *)0x0);
        parentMoverID = (int32_t)this_04->klass;
        pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&parentMoverID);
        if (this_03 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_03,iVar2,pSVar6,pOVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void SetVelocity(Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetVelocity
               (MVMovable *this,Vector3 velocity,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  vec = velocity;
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_Velocity);
    cRam_? = '\x01';
  }
  (this->fields).velocity.x = velocity.x;
  (this->fields).velocity.y = velocity.y;
  (this->fields).velocity.z = velocity.z;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    pSVar1 = Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_Velocity,(Object *)pSVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      if (syncServer == 0) goto code_?;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar1 = StringLiteral_Velocity;
      this = (MVMovable *)(this->fields)._._._._.id;
      if (cRam_? == '\0') {
        this = (MVMovable *)&StringLiteral_BlueprintData_;
        func_?();
        cRam_? = '\x01';
      }
      if (pSVar1 != (String *)0x0) {
        pSVar1 = (String *)
                 (*(code *)(pSVar1->klass->vtable).ToString.method)
                           (pSVar1,(pSVar1->klass->vtable).CompareTo.methodPtr);
        pSVar1 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
        value = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xfffffff0);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_02,(int32_t)this,pSVar1,value,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    func_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
code_?:
  MVMovable_RecalcTimeToEnd(this_01,(MethodInfo *)0x0);
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetVisible
               (MVMovable *this,bool newVisible,MethodInfo *method)

{
  this_00 = (this->fields).movableVisualization;
  if (this_00 == (MovableVisualization *)0x0) {
    uVar1 = func_?(&stack0xfffffff0);
    func_?(uVar1);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (newVisible == 0) {
    if ((this_00->fields).isVisible != 0) {
      MovableVisualization::MovableVisualization_SetMeshRenderers
                (this_00,0,(this_00->fields).cmbClone,(MethodInfo *)0x0);
    }
  }
  else if (((this_00->fields).isVisible == 0) && ((this_00->fields).canBeVisible != 0)) {
    MovableVisualization::MovableVisualization_SetMeshRenderers
              (this_00,1,(this_00->fields).cmbClone,(MethodInfo *)0x0);
    return;
  }
  return;
}


/* Void SyncProperties() */

void Assembly-CSharp.dll::MVMovable::MVMovable_SyncProperties(MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_BlueprintData);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_00 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              ((Dictionary_2_System_Object_System_Object_ *)this_00,
               (Object *)StringLiteral_BlueprintData,(Object *)(this->fields)._.blueprintData,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
      MVNetworkGame+OperationRequests::
      MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                (this_01,(this->fields)._._._._.id,
                 (Dictionary_2_System_Object_System_Object_ *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void UpdateMoverSubTree(Single, Int32) */

void Assembly-CSharp.dll::MVMovable::MVMovable_UpdateMoverSubTree
               (MVMovable *this,float directionFactor,int32_t breakid,MethodInfo *method)

{
  pMVar1 = (this->fields).parentMover;
  while( true ) {
    if (pMVar1 == (MVMovable *)0x0) {
      MVMovable_Move(this,directionFactor,breakid,(MethodInfo *)0x0);
      return;
    }
    this = (this->fields).parentMover;
    if (this == (MVMovable *)0x0) break;
    pMVar1 = (this->fields).parentMover;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateMoverTree(Single) */

void Assembly-CSharp.dll::MVMovable::MVMovable_UpdateMoverTree
               (MVMovable *this,float directionFactor,MethodInfo *method)

{
  pMVar1 = (this->fields).parentMover;
  while( true ) {
    if (pMVar1 == (MVMovable *)0x0) {
      MVMovable_Move(this,directionFactor,0,(MethodInfo *)0x0);
      return;
    }
    this = (this->fields).parentMover;
    if (this == (MVMovable *)0x0) break;
    pMVar1 = (this->fields).parentMover;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* MVMovable() */

void Assembly-CSharp.dll::MVMovable::MVMovable__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVMovable);
    cRam_? = '\x01';
  }
  TypeInfo__MVMovable->static_fields->direction = 1.0;
  return;
}


/* MVMovable(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::MVMovable::MVMovable__ctor
               (MVMovable *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__List__);
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
  ppLVar1 = &(this->fields).MoveableChildren;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields).localPos.x = (pVVar2->zeroVector).x;
  (this->fields).localPos.y = fVar3;
  (this->fields).localPos.z = fVar4;
  (this->fields).distance = 5.0;
  (this->fields).parentMoverID = -1;
  (this->fields).isVisible = 1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar5 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar6 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar6 = (uint)*piVar6 | 0x2000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar5;
  return;
}


/* Vector3 get_AngularDirection() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_AngularDirection
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  fVar1 = (this->fields).angularDirection.y;
  fVar2 = (this->fields).angularDirection.z;
  __return_storage_ptr__->x = (this->fields).angularDirection.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Single get_AngularSpeed() */

float Assembly-CSharp.dll::MVMovable::MVMovable_get_AngularSpeed(MVMovable *this,MethodInfo *method)

{
  return (this->fields).angularSpeed;
}


/* Vector3 get_AngularVelocity() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_AngularVelocity
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  uVar1 = (this->fields).angularDirection.x;
  uVar2 = (this->fields).angularDirection.y;
  fVar3 = (this->fields).angularDirection.z;
  fVar4 = (this->fields).angularSpeed;
  __return_storage_ptr__->x = (float)uVar1 * fVar4;
  __return_storage_ptr__->y = (float)uVar2 * fVar4;
  __return_storage_ptr__->z = fVar3 * fVar4;
  return __return_storage_ptr__;
}


/* Int32 get_CubeModelID() */

int32_t Assembly-CSharp.dll::MVMovable::MVMovable_get_CubeModelID
                  (MVMovable *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields)._CubeModel_k__BackingField;
  if (pMVar2 != (MVCubeModelInstance *)0x0) {
    return (pMVar2->fields)._._._.id;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}


/* Boolean get_IsRoot() */

bool Assembly-CSharp.dll::MVMovable::MVMovable_get_IsRoot(MVMovable *this,MethodInfo *method)

{
  return (this->fields).parentMover == (MVMovable *)0x0;
}


/* Quaternion get_OrgRotation() */

Quaternion *
Assembly-CSharp.dll::MVMovable::MVMovable_get_OrgRotation
          (Quaternion *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  fVar1 = (this->fields).orgRotation.y;
  fVar2 = (this->fields).orgRotation.z;
  fVar3 = (this->fields).orgRotation.w;
  __return_storage_ptr__->x = (this->fields).orgRotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* MVMovable get_ParentMover() */

MVMovable *
Assembly-CSharp.dll::MVMovable::MVMovable_get_ParentMover(MVMovable *this,MethodInfo *method)

{
  return (this->fields).parentMover;
}


/* Int32 get_ParentMoverID() */

int32_t Assembly-CSharp.dll::MVMovable::MVMovable_get_ParentMoverID
                  (MVMovable *this,MethodInfo *method)

{
  return (this->fields).parentMoverID;
}


/* Boolean get_PausedMovement() */

bool Assembly-CSharp.dll::MVMovable::MVMovable_get_PausedMovement
               (MVMovable *this,MethodInfo *method)

{
  return (this->fields).pausedMovement;
}


/* MVMovable get_RootMover() */

MVMovable *
Assembly-CSharp.dll::MVMovable::MVMovable_get_RootMover(MVMovable *this,MethodInfo *method)

{
  do {
    pMVar1 = this;
    this = (this->fields).parentMover;
  } while (this != (MVMovable *)0x0);
  return pMVar1;
}


/* Vector3 get_Velocity() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_Velocity
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  fVar1 = (this->fields).velocity.y;
  fVar2 = (this->fields).velocity.z;
  __return_storage_ptr__->x = (this->fields).velocity.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Boolean get_Visible() */

bool Assembly-CSharp.dll::MVMovable::MVMovable_get_Visible(MVMovable *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).movableVisualization;
  if (pMVar2 == (MovableVisualization *)0x0) {
    uVar3 = func_?(auStack_4);
    func_?(uVar3);
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  if ((pMVar2->fields).isVisible == 0) {
    return 0;
  }
  return (pMVar2->fields).canBeVisible;
}


/* Vector3 get_WorldVelocity() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_WorldVelocity
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  this_00 = (this->fields)._._._.transform;
  if (this_00 != (Transform *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                       ((Matrix4x4 *)&stack0xffffffa0,this_00,(MethodInfo *)0x0);
    pVVar2 = &(this->fields).velocity;
    uStack_3._0_4_ = pVVar2->x;
    uStack_3._4_4_ = pVVar2->y;
    VStack_4.z = (this->fields).velocity.z;
    VStack_4.x = (float)(undefined4)uStack_3;
    VStack_4.y = (float)uStack_3._4_4_;
    VStack_4.w = 0.0;
    vector.w = 0.0;
    vector.x = pVVar2->x;
    vector.y = pVVar2->y;
    vector.z = pVVar2->z;
    fStack_5 = VStack_4.z;
    pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                       (&VStack_4,*pMVar1,vector,(MethodInfo *)0x0);
    fVar7 = pVVar6->y;
    fVar8 = pVVar6->z;
    __return_storage_ptr__->x = pVVar6->x;
    __return_storage_ptr__->y = fVar7;
    __return_storage_ptr__->z = fVar8;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar2 = (Vector3 *)(*pcVar9)();
  return pVVar2;
}


/* Void set_PausedMovement(Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_set_PausedMovement
               (MVMovable *this,bool value,MethodInfo *method)

{
  (this->fields).pausedMovement = value;
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_set_Visible
               (MVMovable *this,bool value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).movableVisualization;
  (this->fields).isVisible = value;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pMVar1 = (this->fields).movableVisualization;
    if (pMVar1 == (MovableVisualization *)0x0) {
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    (pMVar1->fields).canBeVisible = value;
    MovableVisualization::MovableVisualization_SetMeshRenderers
              (pMVar1,value,(pMVar1->fields).cmbClone,(MethodInfo *)0x0);
  }
  return;
}

