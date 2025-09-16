
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
        if ((this->fields)._CubeModel_k__BackingField != (MVCubeModelInstance *)0x0) {
          pDVar3 = (pMVar2->fields).CubeModelMovableMap;
          if (pDVar3 == (Dictionary_2_System_Int32_MVMovable_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,
                     (((this->fields)._CubeModel_k__BackingField)->fields)._._._.id,
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
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
      (this->fields).movableVisualization = pMVar2;
      func_?();
      pMVar2 = (this->fields).movableVisualization;
      if (pMVar2 != (MovableVisualization *)0x0) {
        MovableVisualization::MovableVisualization_Init
                  (pMVar2,(MVCubeModelBase *)(this->fields)._CubeModel_k__BackingField,
                   (MethodInfo *)0x0);
        pMVar3 = (this->fields)._CubeModel_k__BackingField;
        if (pMVar3 != (MVCubeModelInstance *)0x0) {
          (*(code *)(pMVar3->klass->vtable).set_Visible.method)();
          (*(code *)(this->klass->vtable).set_Visible.method)();
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVMovable::MVMovable_InitializeCommon(MVMovable *this,MethodInfo *method)

{
  MVMovable_ReadWOData(this,(MethodInfo *)0x0);
  if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
    return;
  }
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pMVar2 = pMVar1->klass;
  pVVar3 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar4._0_4_ = (pVVar3->zeroVector).x;
  uVar4._4_4_ = (pVVar3->zeroVector).y;
  (*(code *)(pMVar2->vtable).set_Position.method)
            (pMVar1,uVar4,(pVVar3->zeroVector).z,(pMVar2->vtable).get_Rotation.methodPtr);
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Quaternion);
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    (*(code *)(pMVar1->klass->vtable).set_Rotation.method)
              (pMVar1,(pQVar5->identityQuaternion).x,(pQVar5->identityQuaternion).y,
               (pQVar5->identityQuaternion).z,(pQVar5->identityQuaternion).w,
               (pMVar1->klass->vtable).get_Scale.methodPtr);
    pMVar1 = (this->fields)._CubeModel_k__BackingField;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pQVar6 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                          (&QStack_7,(MVWorldObjectClient *)pMVar1,(MethodInfo *)0x0);
      fVar8 = pQVar6->y;
      fVar9 = pQVar6->z;
      fVar10 = pQVar6->w;
      (this->fields).orgRotation.x = pQVar6->x;
      (this->fields).orgRotation.y = fVar8;
      (this->fields).orgRotation.z = fVar9;
      (this->fields).orgRotation.w = fVar10;
      return;
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
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
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0)
  goto code_?;
  pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar7 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar8 = (pMVar7->fields)._MoveableController_k__BackingField,
     pMVar8 == (MoveableController *)0x0)) goto code_?;
  pMVar9 = (MVMovable *)(pMVar8->fields).time;
  if ((this->fields).pausedMovement == 0) {
    this = pMVar9;
    if (directionFactor < 0.0) {
      fStack_10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                            ((MethodInfo *)0x0);
      this = (MVMovable *)((float)pMVar9 - fStack_10);
    }
    fVar11 = (this_02->fields).timeToEnd;
    bVar12 = fVar11 != _UNK_?;
    (this_02->fields).linearTime = 0.0;
    (this_02->fields).fraction = 0.0;
    if (bVar12) {
      uStack_13 = (double)(fVar11 + fVar11);
      fVar14 = (float10)func_?();
      fStack_10 = (float)fVar14;
      (this_02->fields).linearTime = fStack_10;
      fVar11 = _UNK_?;
      fVar15 = fStack_10 / (this_02->fields).timeToEnd;
      (this_02->fields).fraction = fVar15;
      if (fVar11 < (this_02->fields).timeToEnd) {
        (this_02->fields).fraction = _UNK_? - fVar15;
      }
    }
  }
  else {
    (this->fields).linearTime = (this->fields).timeToEnd * (this->fields).fraction;
    this = pMVar9;
  }
  method_00 = (MethodInfo *)(this_02->klass->vtable).set_WorldPosition.methodPtr;
  puVar16 = (undefined8 *)(*(code *)(this_02->klass->vtable).get_WorldPosition_1.method)();
  uStack_17 = *puVar16;
  fStack_18 = *(float *)(puVar16 + 1);
  if ((this_02->fields).parentMover != (MVMovable *)0x0) {
    pMVar19 = (((this_02->fields).parentMover)->fields)._CubeModel_k__BackingField;
    if (pMVar19 == (MVCubeModelInstance *)0x0) goto code_?;
    puVar16 = (undefined8 *)(*(code *)(pMVar19->klass->vtable).get_WorldPosition_1.method)();
    uStack_20 = *puVar16;
    fStack_21 = *(float *)(puVar16 + 1);
    pMVar9 = (this_02->fields).parentMover;
    if ((pMVar9 == (MVMovable *)0x0) ||
       (pMVar19 = (pMVar9->fields)._CubeModel_k__BackingField, pMVar19 == (MVCubeModelInstance *)0x0))
    goto code_?;
    pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&LStack_23,(MVWorldObjectClient *)pMVar19,(MethodInfo *)0x0);
    LStack_23._list =
         (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)pQVar22->x;
    LStack_23._index = (int32_t)pQVar22->y;
    LStack_23._version = (int32_t)pQVar22->z;
    LStack_23._current = (RegexCharClass_SingleRange)pQVar22->w;
    puVar16 = (undefined8 *)(*(code *)(this_02->klass->vtable).get_WorldPosition_1.method)();
    pMVar9 = (this_02->fields).parentMover;
    uStack_13._4_4_ = *(List_1_T_Enumerator_System_Object_ **)(puVar16 + 1);
    fStack_24 = (float)*puVar16;
    uStack_13._0_4_ = (float)((ulonglong)*puVar16 >> 0x20);
    if (pMVar9 == (MVMovable *)0x0) goto code_?;
    puVar16 = (undefined8 *)(*(code *)(pMVar9->klass->vtable).get_WorldPosition_1.method)();
    uVar25 = *puVar16;
    uStack_26._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
    uStack_26._0_4_ = (float)uVar25;
    fStack_27 = (float)uStack_13._4_4_ - *(float *)(puVar16 + 1);
    rotation.y = (float)LStack_23._index;
    rotation.x = (float)LStack_23._list;
    rotation.z = (float)LStack_23._version;
    rotation.w = (float)LStack_23._current;
    point.y = (float)uStack_13 - uStack_26._4_4_;
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
    fVar11 = (this_02->fields).timeToEnd;
    pfVar30 = &(this_02->fields).linearTime;
    pMVar31 = (this_02->klass->vtable).get_WorldVelocity.method;
    if (*pfVar30 <= fVar11 && fVar11 != *pfVar30) {
      puVar16 = (undefined8 *)(*(code *)pMVar31)();
      uVar25 = *puVar16;
      fVar11 = (this_02->fields).linearTime;
      uStack_20._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
      uStack_20._0_4_ = (float)uVar25;
      fStack_21 = *(float *)(puVar16 + 1) * fVar11;
      (this_02->fields).localPos.x = (float)uStack_20 * fVar11;
      (this_02->fields).localPos.y = uStack_20._4_4_ * fVar11;
      (this_02->fields).localPos.z = fStack_21;
      uStack_20 = uVar25;
    }
    else {
      puVar16 = (undefined8 *)(*(code *)pMVar31)();
      fVar11 = (this_02->fields).timeToEnd;
      uVar25 = *puVar16;
      fVar11 = (fVar11 + fVar11) - (this_02->fields).linearTime;
      uStack_20._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
      uStack_20._0_4_ = (float)uVar25;
      fStack_21 = *(float *)(puVar16 + 1) * fVar11;
      (this_02->fields).localPos.x = (float)uStack_20 * fVar11;
      (this_02->fields).localPos.y = uStack_20._4_4_ * fVar11;
      (this_02->fields).localPos.z = fStack_21;
      uStack_20 = uVar25;
      if ((TypeInfo__MVMovable->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      TypeInfo__MVMovable->static_fields->direction = -1.0;
    }
    if (_UNK_? < directionFactor) {
      pMVar7 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar7 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar8 = (pMVar7->fields)._MoveableController_k__BackingField,
         pMVar8 == (MoveableController *)0x0)) goto code_?;
      this_00 = (pMVar8->fields).Velocities;
      uStack_13._4_4_ = (List_1_T_Enumerator_System_Object_ *)(this_02->fields)._._._.goId;
      if ((TypeInfo__MVMovable->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      fStack_10 = TypeInfo__MVMovable->static_fields->direction;
      puVar16 = (undefined8 *)(*(code *)(this_02->klass->vtable).get_WorldVelocity.method)();
      uVar25 = *puVar16;
      fStack_21 = *(float *)(puVar16 + 1);
      uStack_20._4_4_ = (float)((ulonglong)uVar25 >> 0x20);
      uStack_20._0_4_ = (float)uVar25;
      fStack_32 = fStack_21 * fStack_10 * directionFactor;
      fStack_33 = uStack_20._4_4_ * fStack_10 * directionFactor;
      fStack_34 = (float)uStack_20 * fStack_10 * directionFactor;
      uStack_20 = uVar25;
      fStack_10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                            ((MethodInfo *)0x0);
      fStack_21 = fStack_32 * fStack_10;
      uStack_20 = CONCAT44(fStack_33 * fStack_10,fStack_34 * fStack_10);
      if (this_00 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) goto code_?;
      value_00.y = fStack_33 * fStack_10;
      value_00.x = fStack_34 * fStack_10;
      value_00.z = fStack_21;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__set_Item
                (this_00,(int32_t)uStack_13._4_4_,value_00,
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
    fVar15 = (pVVar35->zeroVector).y;
    fVar11 = (pVVar35->zeroVector).z;
    (this_02->fields).localPos.x = (pVVar35->zeroVector).x;
    (this_02->fields).localPos.y = fVar15;
    (this_02->fields).localPos.z = fVar11;
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
    fVar11 = (this_02->fields).angularSpeed;
    fStack_21 = (this_02->fields).angularDirection.z * fVar11 * (float)this;
    uStack_17 = CONCAT44(uStack_20._4_4_ * fVar11 * (float)this,
                         (float)uStack_20 * fVar11 * (float)this);
    fStack_18 = fStack_21;
    fVar14 = (float10)func_?();
    uStack_20._0_4_ = (this_02->fields).angularDirection.x;
    uStack_20._4_4_ = (this_02->fields).angularDirection.y;
    fVar11 = (this_02->fields).angularSpeed;
    fStack_21 = (this_02->fields).angularDirection.z * fVar11;
    uStack_17 = CONCAT44(uStack_20._4_4_ * fVar11,(float)uStack_20 * fVar11);
    fStack_18 = fStack_21;
    pVVar28 = (Vector3 *)func_?();
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&LStack_23,(float)fVar14 * _UNK_?,*pVVar28,
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
      pMVar9 = (this_02->fields).parentMover;
      if ((pMVar9 == (MVMovable *)0x0) ||
         (pMVar19 = (pMVar9->fields)._CubeModel_k__BackingField, pMVar19 == (MVCubeModelInstance *)0x0
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
      fVar11 = ((VStack_29.z * fStack_21 - fStack_38 * fStack_39) - (float)uStack_20 * VStack_29.x)
               - VStack_29.y * uStack_20._4_4_;
      fVar40 = (fStack_39 * VStack_29.x + VStack_29.z * uStack_20._4_4_ + VStack_29.y * fStack_21) -
               fStack_38 * (float)uStack_20;
      fVar15 = (fStack_38 * uStack_20._4_4_ +
               VStack_29.z * (float)uStack_20 + VStack_29.x * fStack_21) - fStack_39 * VStack_29.y;
      fStack_38 = ((float)uStack_20 * VStack_29.y + VStack_29.z * fStack_39 + fStack_38 * fStack_21)
                  - VStack_29.x * uStack_20._4_4_;
      VStack_29.x = fVar15;
      VStack_29.y = fVar40;
      VStack_29.z = fVar11;
      if (pMVar19 == (MVCubeModelInstance *)0x0) goto code_?;
      value.y = fVar15;
      value.x = fStack_38;
      value.z = fVar40;
      value.w = fVar11;
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
        pLVar41 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                  RegularExpressions::RegexCharClass+SingleRange]::
                  List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                            (&LStack_23,this_01,
                             MethodInfo__System__Collections__Generic__List<MVMovable>__GetEnumerator__
                            );
        uStack_13._0_4_ = 0.0;
        LStack_6._list = (List_1_System_Object_ *)pLVar41->_list;
        LStack_6._index = pLVar41->_index;
        LStack_6._version = pLVar41->_version;
        LStack_6._current = *(Object **)&pLVar41->_current;
        uStack_1 = 1;
        uStack_13._4_4_ = &LStack_6;
        while( true ) {
          bVar42 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                   ::List_1_T_Enumerator_System_Object__MoveNext
                             (&LStack_6,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                             );
          if (bVar42 == 0) break;
          if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
          goto code_?;
          MVMovable_Move((MVMovable *)LStack_6._current,directionFactor,breakid,(MethodInfo *)0x0);
        }
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&LStack_6,
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
  puStack_4 = &stack0xffffff48;
  ppMVar5 = &this;
  puVar6 = &stack0xffffff48;
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
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_7._version = 0;
  DStack_7._index = 0;
  DStack_7._current.key = (Object *)0x0;
  IStack_8.m_value = 0;
  DStack_7._current.value = (Object *)0x0;
  DStack_7._getEnumeratorRetType = 0;
  method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
               *)(in_stack_9->fields)._.blueprintData;
  if (method_01 ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)0x0)
  {
code_?:
    func_?();
code_?:
    func_?();
    func_?();
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  method_00.m_Index = (int32_t)&UNK_?;
  pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
            ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                      (&DStack_12,(Dictionary_2_System_UInt32_System_Object_ *)method_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                      );
  uStack_13 = uStack_13 & 0xffffffff;
  DStack_7._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar11->_dictionary;
  DStack_7._version = pDVar11->_version;
  DStack_7._index = pDVar11->_index;
  DStack_7._current.key = (Object *)(pDVar11->_current).key;
  DStack_7._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
  pDStack_14 = &DStack_7;
code_?:
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_7,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar15 == 0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_7,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,(MethodInfo *)method_00.m_Index);
      puVar16 = (ulonglong *)
                (*(code *)(in_stack_9->klass->vtable).get_WorldVelocity.method)
                          (&VStack_17,in_stack_9,in_stack_9->klass[1]._0.image);
      uStack_13 = *puVar16;
      pDStack_14 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)puVar16[1];
      fVar18 = (float10)func_?(&uStack_13,0);
      fVar19 = _UNK_?;
      (in_stack_9->fields).timeToEnd = 0.0;
      if (fVar19 < (float)fVar18) {
        (in_stack_9->fields).timeToEnd = (in_stack_9->fields).distance / (float)fVar18
        ;
      }
      *unaff_FS_OFFSET = uStack_3;
      return;
    }
    pFStack_20 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                  *)DStack_7._current.key;
    pMStack_21 = (MVMovable *)DStack_7._current.value;
    if ((MVMovable *)DStack_7._current.value == (MVMovable *)0x0) break;
    pSStack_22 = (String__Array *)
                 (*(code *)(((MVMovable__Class *)(DStack_7._current.value)->klass)->vtable).
                           ToString.method)();
    method_00.m_Index = func_?(TypeInfo__MVMovable____c__DisplayClass64_0);
    pFStack_23 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                  *)method_00.m_Index;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)method_00.m_Index,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    if (pFStack_20 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)0x0
       ) break;
    s = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)
        (*(code *)(((Dictionary_2_System_UInt32_System_Object___Class *)pFStack_20->klass)->vtable).
                  ToString.method)
                  (pFStack_20,
                   (((Dictionary_2_System_UInt32_System_Object___Class *)pFStack_20->klass)->vtable)
                   .get_Item.methodPtr);
    method_01 = pFStack_20;
    pFStack_20 = s;
    uVar24 = UnityEngine.IMGUIModule.dll::<PrivateImplementationDetails>::
             _PrivateImplementationDetails__5_ComputeStringHash((String *)s,(MethodInfo *)0x0);
    if (uVar24 < 0x6742174f) {
      if (uVar24 < 0xe39723d) {
        if (uVar24 != 0x232777f) goto code_?;
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_Rotation,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                              (&VStack_17,(String *)pSStack_22,(MethodInfo *)0x0);
          uVar26._0_4_ = pVVar25->x;
          uVar26._4_4_ = pVVar25->y;
          method_00.m_Index = 0;
          pfVar27 = (float *)func_?(&DStack_12._index,uVar26,pVVar25->z);
          fVar19 = pfVar27[1];
          fVar28 = pfVar27[2];
          fVar29 = pfVar27[3];
          (in_stack_9->fields).orgRotation.x = *pfVar27;
          (in_stack_9->fields).orgRotation.y = fVar19;
          (in_stack_9->fields).orgRotation.z = fVar28;
          (in_stack_9->fields).orgRotation.w = fVar29;
        }
      }
      else if (uVar24 == 0x4ae426e8) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_ParentID,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          pcVar30 = (char *)mscorlib.dll::System::Convert::Convert_ToInt32_14
                                      ((String *)pSStack_22,(MethodInfo *)0x0);
          if (pFStack_23 ==
              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
               *)0x0) break;
          (pFStack_23->_0).name = pcVar30;
          if ((char *)(in_stack_9->fields).parentMoverID != pcVar30) {
            pMVar31 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if ((pMVar31 == (MVWorldObjectClientManager *)0x0) ||
               (pMVar32 = (pMVar31->fields)._MoveableController_k__BackingField,
               pMVar32 == (MoveableController *)0x0)) break;
            pMStack_21 = (MVMovable *)(pMVar32->fields).MoveControllers;
            method_00.m_Index =
                 (int32_t)
                 TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
            ;
            pFStack_20 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                          *)func_?();
            mscorlib.dll::System::Predicate`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                      ((Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                       pFStack_20,(Object *)pFStack_23,
                       MethodInfo__MVMovable____c__DisplayClass64_0___ReadWOData_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                       ,(MethodInfo *)0x0);
            source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                               ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                                pMStack_21,pFStack_20,
                                System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                               );
            KVar33 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                               ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                                System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                               );
            pMStack_21 = (MVMovable *)KVar33.value;
            if (pMStack_21 == (MVMovable *)0x0) {
              pMStack_21 = (MVMovable *)
                           mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral_Couldn_t_find_parent_,(String *)pSStack_22,
                                      (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pMStack_21,(MethodInfo *)0x0);
            }
            else {
              if ((in_stack_9->fields).parentMover != (MVMovable *)0x0) {
                MVMovable_RemoveMovableChild
                          ((in_stack_9->fields).parentMover,in_stack_9,
                           (MethodInfo *)0x0);
              }
              (in_stack_9->fields).parentMoverID = (int32_t)(pFStack_23->_0).name;
              (in_stack_9->fields).parentMover = pMStack_21;
              func_?(&(in_stack_9->fields).parentMover,pMStack_21);
              this_00 = (in_stack_9->fields).parentMover;
              if (this_00 == (MVMovable *)0x0) break;
              MVMovable_AddMovableChild(this_00,in_stack_9,(MethodInfo *)0x0);
            }
          }
        }
      }
      else if (uVar24 == 0x6742174e) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_AngularDirection,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                              (&VStack_34,(String *)pSStack_22,(MethodInfo *)0x0);
          fVar28 = pVVar25->y;
          fVar19 = pVVar25->z;
          (in_stack_9->fields).angularDirection.x = pVVar25->x;
          (in_stack_9->fields).angularDirection.y = fVar28;
          (in_stack_9->fields).angularDirection.z = fVar19;
        }
      }
    }
    else if (uVar24 < 0x7c2c901f) {
      if (uVar24 == 0x6f661c94) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_AngularSpeed,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          pDVar35 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (in_stack_9->fields)._.blueprintData;
          if (pDVar35 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
          method_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (pDVar35,(Object *)StringLiteral_AngularSpeed,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
          if (method_00.m_Index == 0) break;
          pIVar36 = (Int32__Class *)TypeInfo__System__Single;
          if (*(Il2CppClass **)(*(int *)method_00.m_Index + 0x20) !=
              (TypeInfo__System__Single->_0).element_class) goto code_?;
          pfVar27 = (float *)func_?();
          (in_stack_9->fields).angularSpeed = *pfVar27;
        }
      }
      else if (uVar24 == 0x7c2c901e) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_AngularVelocity,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Movable_still_deprecated_data_An,(MethodInfo *)0x0);
        }
      }
    }
    else if (uVar24 == 0xba408252) {
      bVar15 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)pFStack_20,StringLiteral_Velocity,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_37,(String *)pSStack_22,(MethodInfo *)0x0);
        fVar28 = pVVar25->y;
        fVar19 = pVVar25->z;
        (in_stack_9->fields).velocity.x = pVVar25->x;
        (in_stack_9->fields).velocity.y = fVar28;
        (in_stack_9->fields).velocity.z = fVar19;
      }
    }
    else if (uVar24 == 0xd3d96082) {
      bVar15 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)pFStack_20,StringLiteral_Distance,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pFStack_23 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                      *)mscorlib.dll::System::Globalization::CultureInfo::
                        CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        pFStack_23 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                      *)mscorlib.dll::System::Convert::Convert_ToSingle_13
                                  ((String *)pSStack_22,(IFormatProvider *)pFStack_23,
                                   (MethodInfo *)0x0);
        (in_stack_9->fields).distance = (float)pFStack_23;
      }
    }
  }
  goto code_?;
code_?:
  if (uVar24 == 0xe39723c) {
    bVar15 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)pFStack_20,StringLiteral_ChildrenMap,(MethodInfo *)0x0);
    if (bVar15 != 0) {
      pDVar35 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
               (in_stack_9->fields)._.childIdMap;
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
                 (in_stack_9->fields)._.childIdMap;
        if (pDVar35 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        method_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar35,(Object *)StringLiteral_movable,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        if (method_00.m_Index == 0) goto code_?;
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
        pMStack_21 = (MVMovable *)
                     MVGroup::MVGroup_GetChild
                               ((MVGroup *)in_stack_9,(int32_t)method_01,(MethodInfo *)0x0);
        pMVar39 = (MVCubeModelInstance *)0x0;
        if (pMStack_21 != (MVMovable *)0x0) {
          pMVar39 = (MVCubeModelInstance *)func_?();
          if (pMVar39 == (MVCubeModelInstance *)0x0) goto code_?;
        }
        (in_stack_9->fields)._CubeModel_k__BackingField = pMVar39;
        func_?();
        if ((in_stack_9->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
          pSVar40 = TypeInfo__System__String;
          pSStack_22 = (String__Array *)func_?(TypeInfo__System__String,5);
          if (pSStack_22 == (String__Array *)0x0) goto code_?;
          func_?(0,StringLiteral_Movable_);
          pSVar41 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&in_stack_9->fields,(MethodInfo *)0x0);
          method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                       *)0x1;
          func_?(1,pSVar41);
          func_?(2,StringLiteral__init___Could_not_find_child_);
          pSVar41 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_8,(MethodInfo *)0x0);
          method_00.m_Index = 3;
          func_?(3,pSVar41);
          uVar26 = 0x410328097;
          pSVar41 = StringLiteral__to_move__If_this_is_a_new_movab;
          func_?();
          pMStack_21 = (MVMovable *)
                       mscorlib.dll::System::String::String_Concat_6(pSStack_22,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug,pSVar40,uVar26,pSVar41);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pMStack_21,(MethodInfo *)0x0);
        }
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
  puStack_5 = &stack0xffffff40;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff40;
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
  DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)0x0;
  DStack_8._version = 0;
  DStack_8._index = 0;
  DStack_8._current.key = (Object *)0x0;
  IStack_9.m_value = 0;
  DStack_8._current.value = (Object *)0x0;
  DStack_8._getEnumeratorRetType = 0;
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
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  method_00.m_Index = (int32_t)&UNK_?;
  pDVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::UInt32,System::Object]
            ::Dictionary_2_System_UInt32_System_Object__GetEnumerator
                      (&DStack_12,(Dictionary_2_System_UInt32_System_Object_ *)method_01,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
                      );
  uStack_13 = uStack_13 & 0xffffffff;
  DStack_8._dictionary = (Dictionary_2_System_Object_System_Object_ *)pDVar11->_dictionary;
  DStack_8._version = pDVar11->_version;
  DStack_8._index = pDVar11->_index;
  DStack_8._current.key = (Object *)(pDVar11->_current).key;
  DStack_8._16_8_ = *(undefined8 *)&(pDVar11->_current).value;
  uStack_2 = 1;
  pDStack_14 = &DStack_8;
code_?:
  while( true ) {
    bVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[TKey,TValue]+Enumerator[System
            ::Object,System::Object]::
            Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object__MoveNext
                      (&DStack_8,
                       MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                      );
    if (bVar15 == 0) {
      uStack_2 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                 ,(MethodInfo *)method_00.m_Index);
      uStack_2 = 0xffffffff;
      puVar16 = (ulonglong *)
                (*(code *)(this->klass->vtable).get_WorldVelocity.method)
                          (&VStack_17,this,this->klass[1]._0.image);
      uStack_13 = *puVar16;
      pDStack_14 = (Dictionary_2_TKey_TValue_Enumerator_System_Object_System_Object_ *)puVar16[1];
      fVar18 = (float10)func_?(&uStack_13,0);
      fVar19 = _UNK_?;
      (this->fields).timeToEnd = 0.0;
      if (fVar19 < (float)fVar18) {
        (this->fields).timeToEnd = (this->fields).distance / (float)fVar18;
      }
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
    pFStack_20 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                  *)DStack_8._current.key;
    pMStack_21 = (MVMovable *)DStack_8._current.value;
    if ((MVMovable *)DStack_8._current.value == (MVMovable *)0x0) break;
    pSStack_22 = (String__Array *)
                 (*(code *)(((MVMovable__Class *)(DStack_8._current.value)->klass)->vtable).
                           ToString.method)();
    method_00.m_Index = func_?(TypeInfo__MVMovable____c__DisplayClass64_0);
    pFStack_23 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                  *)method_00.m_Index;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)method_00.m_Index,ExceptionArgument__Enum_obj,(MethodInfo *)method_01);
    if (pFStack_20 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)0x0
       ) break;
    s = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_ *)
        (*(code *)(((Dictionary_2_System_UInt32_System_Object___Class *)pFStack_20->klass)->vtable).
                  ToString.method)
                  (pFStack_20,
                   (((Dictionary_2_System_UInt32_System_Object___Class *)pFStack_20->klass)->vtable)
                   .get_Item.methodPtr);
    method_01 = pFStack_20;
    pFStack_20 = s;
    uVar24 = UnityEngine.IMGUIModule.dll::<PrivateImplementationDetails>::
             _PrivateImplementationDetails__5_ComputeStringHash((String *)s,(MethodInfo *)0x0);
    if (uVar24 < 0x6742174f) {
      if (uVar24 < 0xe39723d) {
        if (uVar24 != 0x232777f) goto code_?;
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_Rotation,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                              (&VStack_17,(String *)pSStack_22,(MethodInfo *)0x0);
          uVar26._0_4_ = pVVar25->x;
          uVar26._4_4_ = pVVar25->y;
          method_00.m_Index = 0;
          pfVar27 = (float *)func_?(&DStack_12._index,uVar26,pVVar25->z);
          fVar19 = pfVar27[1];
          fVar28 = pfVar27[2];
          fVar29 = pfVar27[3];
          (this->fields).orgRotation.x = *pfVar27;
          (this->fields).orgRotation.y = fVar19;
          (this->fields).orgRotation.z = fVar28;
          (this->fields).orgRotation.w = fVar29;
        }
      }
      else if (uVar24 == 0x4ae426e8) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_ParentID,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__System__Convert);
          }
          pcVar30 = (char *)mscorlib.dll::System::Convert::Convert_ToInt32_14
                                      ((String *)pSStack_22,(MethodInfo *)0x0);
          if (pFStack_23 ==
              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
               *)0x0) break;
          (pFStack_23->_0).name = pcVar30;
          if ((char *)(this->fields).parentMoverID != pcVar30) {
            pMVar31 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
            if ((pMVar31 == (MVWorldObjectClientManager *)0x0) ||
               (pMVar32 = (pMVar31->fields)._MoveableController_k__BackingField,
               pMVar32 == (MoveableController *)0x0)) break;
            pMStack_21 = (MVMovable *)(pMVar32->fields).MoveControllers;
            method_00.m_Index =
                 (int32_t)
                 TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
            ;
            pFStack_20 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                          *)func_?();
            mscorlib.dll::System::Predicate`1[System::Xml::Schema::
            XmlSchemaObjectTable+XmlSchemaObjectEntry]::
            Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                      ((Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                       pFStack_20,(Object *)pFStack_23,
                       MethodInfo__MVMovable____c__DisplayClass64_0___ReadWOData_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                       ,(MethodInfo *)0x0);
            source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                               ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                                pMStack_21,pFStack_20,
                                System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                               );
            KVar33 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                               ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                                System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                               );
            pMStack_21 = (MVMovable *)KVar33.value;
            if (pMStack_21 == (MVMovable *)0x0) {
              pMStack_21 = (MVMovable *)
                           mscorlib.dll::System::String::String_Concat_3
                                     (StringLiteral_Couldn_t_find_parent_,(String *)pSStack_22,
                                      (MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Debug);
              }
              UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                        ((Object *)pMStack_21,(MethodInfo *)0x0);
            }
            else {
              if ((this->fields).parentMover != (MVMovable *)0x0) {
                MVMovable_RemoveMovableChild((this->fields).parentMover,this,(MethodInfo *)0x0);
              }
              (this->fields).parentMoverID = (int32_t)(pFStack_23->_0).name;
              (this->fields).parentMover = pMStack_21;
              func_?(&(this->fields).parentMover,pMStack_21);
              this_00 = (this->fields).parentMover;
              if (this_00 == (MVMovable *)0x0) break;
              MVMovable_AddMovableChild(this_00,this,(MethodInfo *)0x0);
            }
          }
        }
      }
      else if (uVar24 == 0x6742174e) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_AngularDirection,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                              (&VStack_34,(String *)pSStack_22,(MethodInfo *)0x0);
          fVar28 = pVVar25->y;
          fVar19 = pVVar25->z;
          (this->fields).angularDirection.x = pVVar25->x;
          (this->fields).angularDirection.y = fVar28;
          (this->fields).angularDirection.z = fVar19;
        }
      }
    }
    else if (uVar24 < 0x7c2c901f) {
      if (uVar24 == 0x6f661c94) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_AngularSpeed,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          pDVar35 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
                   (this->fields)._.blueprintData;
          if (pDVar35 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0) break;
          method_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Object,UnityEngine::UIElements::TextureId]::
                      Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                                (pDVar35,(Object *)StringLiteral_AngularSpeed,
                                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                                );
          if (method_00.m_Index == 0) break;
          pIVar36 = (Int32__Class *)TypeInfo__System__Single;
          if (*(Il2CppClass **)(*(int *)method_00.m_Index + 0x20) !=
              (TypeInfo__System__Single->_0).element_class) goto code_?;
          pfVar27 = (float *)func_?();
          (this->fields).angularSpeed = *pfVar27;
        }
      }
      else if (uVar24 == 0x7c2c901e) {
        bVar15 = mscorlib.dll::System::String::String_op_Equality
                          ((String *)pFStack_20,StringLiteral_AngularVelocity,(MethodInfo *)0x0);
        if (bVar15 != 0) {
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)StringLiteral_Movable_still_deprecated_data_An,(MethodInfo *)0x0);
        }
      }
    }
    else if (uVar24 == 0xba408252) {
      bVar15 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)pFStack_20,StringLiteral_Velocity,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_37,(String *)pSStack_22,(MethodInfo *)0x0);
        fVar28 = pVVar25->y;
        fVar19 = pVVar25->z;
        (this->fields).velocity.x = pVVar25->x;
        (this->fields).velocity.y = fVar28;
        (this->fields).velocity.z = fVar19;
      }
    }
    else if (uVar24 == 0xd3d96082) {
      bVar15 = mscorlib.dll::System::String::String_op_Equality
                        ((String *)pFStack_20,StringLiteral_Distance,(MethodInfo *)0x0);
      if (bVar15 != 0) {
        if ((TypeInfo__System__Globalization__CultureInfo->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Globalization__CultureInfo);
        }
        pFStack_23 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                      *)mscorlib.dll::System::Globalization::CultureInfo::
                        CultureInfo_get_InvariantCulture((MethodInfo *)0x0);
        if ((TypeInfo__System__Convert->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Convert);
        }
        pFStack_23 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean___Class
                      *)mscorlib.dll::System::Convert::Convert_ToSingle_13
                                  ((String *)pSStack_22,(IFormatProvider *)pFStack_23,
                                   (MethodInfo *)0x0);
        (this->fields).distance = (float)pFStack_23;
      }
    }
  }
  goto code_?;
code_?:
  if (uVar24 == 0xe39723c) {
    bVar15 = mscorlib.dll::System::String::String_op_Equality
                      ((String *)pFStack_20,StringLiteral_ChildrenMap,(MethodInfo *)0x0);
    if (bVar15 != 0) {
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
        if (pDVar35 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
        goto code_?;
        method_00 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                    Object,UnityEngine::UIElements::TextureId]::
                    Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                              (pDVar35,(Object *)StringLiteral_movable,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                              );
        if (method_00.m_Index == 0) goto code_?;
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
        IStack_9.m_value = (int32_t)method_01;
        pMStack_21 = (MVMovable *)
                     MVGroup::MVGroup_GetChild((MVGroup *)this,(int32_t)method_01,(MethodInfo *)0x0)
        ;
        pMVar39 = (MVCubeModelInstance *)0x0;
        if (pMStack_21 != (MVMovable *)0x0) {
          pMVar39 = (MVCubeModelInstance *)func_?();
          if (pMVar39 == (MVCubeModelInstance *)0x0) goto code_?;
        }
        (this->fields)._CubeModel_k__BackingField = pMVar39;
        func_?();
        if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0) {
          pSVar40 = TypeInfo__System__String;
          pSStack_22 = (String__Array *)func_?(TypeInfo__System__String,5);
          if (pSStack_22 == (String__Array *)0x0) goto code_?;
          func_?(0,StringLiteral_Movable_);
          pSVar41 = mscorlib.dll::System::Int32::Int32_ToString
                              ((Int32 *)&this->fields,(MethodInfo *)0x0);
          method_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                       *)0x1;
          func_?(1,pSVar41);
          func_?(2,StringLiteral__init___Could_not_find_child_);
          pSVar41 = mscorlib.dll::System::Int32::Int32_ToString(&IStack_9,(MethodInfo *)0x0);
          method_00.m_Index = 3;
          func_?(3,pSVar41);
          uVar26 = 0x410328097;
          pSVar41 = StringLiteral__to_move__If_this_is_a_new_movab;
          func_?();
          pMStack_21 = (MVMovable *)
                       mscorlib.dll::System::String::String_Concat_6(pSStack_22,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__UnityEngine__Debug,pSVar40,uVar26,pSVar41);
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                    ((Object *)pMStack_21,(MethodInfo *)0x0);
        }
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
  uStack_3 = *puVar1;
  uStack_4 = *(undefined4 *)(puVar1 + 1);
  fVar5 = (float10)func_?(&uStack_3,0);
  fVar6 = _UNK_?;
  (this->fields).timeToEnd = 0.0;
  if (fVar6 < (float)fVar5) {
    (this->fields).timeToEnd = (this->fields).distance / (float)fVar5;
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
    puVar1 = (undefined8 *)
             (*(code *)(this->klass->vtable).get_WorldVelocity.method)
                       (auStack_2,this,this->klass[1]._0.image);
    uStack_3 = *puVar1;
    uStack_4 = *(undefined4 *)(puVar1 + 1);
    fVar5 = (float10)func_?(&uStack_3,0);
    fVar6 = _UNK_?;
    (this->fields).timeToEnd = 0.0;
    if (fVar6 < (float)fVar5) {
      (this->fields).timeToEnd = (this->fields).distance / (float)fVar5;
    }
    return;
  }
  this_00 = (this->fields)._.blueprintData;
  _updateWOData = distance;
  pOVar7 = (Object *)func_?(TypeInfo__System__Single,&updateWOData);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_Distance,pOVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer == 0) goto code_?;
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pSVar8 = StringLiteral_Distance;
    worldObjectID = (this->fields)._._._._.id;
    if (cRam_? == '\0') {
      func_?(&StringLiteral_BlueprintData_);
      cRam_? = '\x01';
    }
    if (pSVar8 != (String *)0x0) {
      pSVar8 = (String *)
               (*(code *)(pSVar8->klass->vtable).ToString.method)
                         (pSVar8,(pSVar8->klass->vtable).CompareTo.methodPtr);
      pSVar8 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar8,(MethodInfo *)0x0);
      _updateWOData = distance;
      pOVar7 = (Object *)func_?(TypeInfo__System__Single,&updateWOData);
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_01,worldObjectID,pSVar8,pOVar7,(MethodInfo *)0x0);
        goto code_?;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
                     ((Vector3 *)&stack0xffffffe4,euler,(MethodInfo *)0x0);
  uVar4._0_4_ = pVVar1->x;
  uVar4._4_4_ = pVVar1->y;
  fVar5 = pVVar1->z;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    puVar6 = &UNK_?;
    func_?();
    uVar4 = CONCAT44(puVar6,(undefined4)uVar4);
  }
  vec.z = fVar5;
  vec.x = (float)(int)uVar4;
  vec.y = (float)(int)((ulonglong)uVar4 >> 0x20);
  pSVar7 = Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__set_Item
              (this_00,(Object *)StringLiteral_Rotation,(Object *)pSVar7,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer == 0) {
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    pSVar7 = StringLiteral_Rotation;
    worldObjectID = (this->fields)._._._._.id;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (pSVar7 != (String *)0x0) {
      pSVar7 = (String *)(*(code *)(pSVar7->klass->vtable).ToString.method)();
      pSVar7 = mscorlib.dll::System::String::String_Concat_3
                         (StringLiteral_BlueprintData_,pSVar7,(MethodInfo *)0x0);
      value = (Object *)func_?();
      if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_01,worldObjectID,pSVar7,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  value = (Object *)func_?();
  pOVar1 = value;
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  if (value != (Object *)0x0) {
    value[1].klass = (Object__Class *)parentMoverID;
    if ((this->fields).parentMoverID != parentMoverID) {
      pMVar2 = (MVMovable *)0x0;
      if (parentMoverID != -1) {
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
           (pMVar4 = (pMVar3->fields)._MoveableController_k__BackingField,
           pMVar4 == (MoveableController *)0x0)) goto code_?;
        source = (pMVar4->fields).MoveControllers;
        this_01 = (Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)
                  func_?(
                                 TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                                 );
        mscorlib.dll::System::Predicate`1[System::Xml::Schema::
        XmlSchemaObjectTable+XmlSchemaObjectEntry]::
        Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                  (this_01,pOVar1,
                   MethodInfo__MVMovable____c__DisplayClass62_0___SetParentMoverID_b__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                   ,(MethodInfo *)0x0);
        source_00 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                              ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                               (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                                *)this_01,
                               System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                              );
        value = pOVar1;
        KVar5 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault
                          ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source_00,
                           System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                          );
        pMVar2 = (MVMovable *)KVar5.value;
        if (pMVar2 == (MVMovable *)0x0) {
          pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)(value + 1),(MethodInfo *)0x0);
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
      if ((this->fields).parentMover != (MVMovable *)0x0) {
        MVMovable_RemoveMovableChild((this->fields).parentMover,this,(MethodInfo *)0x0);
      }
      (this->fields).parentMoverID = (int32_t)value[1].klass;
      (this->fields).parentMover = pMVar2;
      func_?(&(this->fields).parentMover,pMVar2);
      if ((this->fields).parentMover != (MVMovable *)0x0) {
        MVMovable_AddMovableChild((this->fields).parentMover,this,(MethodInfo *)0x0);
      }
    }
    if (updateWOData == 0) {
      return;
    }
    parentMoverID = (int32_t)value[1].klass;
    this_00 = (this->fields)._.blueprintData;
    pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&parentMoverID);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_ParentMoverID,pOVar1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      if (syncServer == 0) {
        return;
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar6 = StringLiteral_ParentMoverID;
      worldObjectID = (this->fields)._._._._.id;
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
        parentMoverID = (int32_t)value[1].klass;
        pOVar1 = (Object *)func_?(TypeInfo__System__Int32,&parentMoverID);
        if (this_02 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_02,worldObjectID,pSVar6,pOVar1,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetVelocity(Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetVelocity
               (MVMovable *this,Vector3 velocity,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  pMVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__UnityEngine__Vector3);
    func_?(&StringLiteral_Velocity);
    cRam_? = '\x01';
  }
  fVar2 = velocity.z;
  (this->fields).velocity.x = velocity.x;
  (this->fields).velocity.y = velocity.y;
  (this->fields).velocity.z = velocity.z;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    vec.z = fVar2;
    vec.x = velocity.x;
    vec.y = velocity.y;
    pSVar3 = Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_Velocity,(Object *)pSVar3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      if (syncServer == 0) goto code_?;
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      pSVar3 = StringLiteral_Velocity;
      this = (MVMovable *)(this->fields)._._._._.id;
      if (cRam_? == '\0') {
        this = (MVMovable *)&StringLiteral_BlueprintData_;
        func_?();
        cRam_? = '\x01';
      }
      if (pSVar3 != (String *)0x0) {
        pSVar3 = (String *)
                 (*(code *)(pSVar3->klass->vtable).ToString.method)
                           (pSVar3,(pSVar3->klass->vtable).CompareTo.methodPtr);
        pSVar3 = mscorlib.dll::System::String::String_Concat_3
                           (StringLiteral_BlueprintData_,pSVar3,(MethodInfo *)0x0);
        value = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xfffffff0);
        if (this_01 != (MVNetworkGame_OperationRequests *)0x0) {
          MVNetworkGame+OperationRequests::
          MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                    (this_01,(int32_t)this,pSVar3,value,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  puVar5 = (undefined8 *)
           (*(code *)(pMVar1->klass->vtable).get_WorldVelocity.method)
                     (&stack0xfffffff0,pMVar1,pMVar1->klass[1]._0.image);
  velocity._0_8_ = *puVar5;
  velocity.z = *(float *)(puVar5 + 1);
  fVar6 = (float10)func_?(&velocity,0);
  fVar2 = _UNK_?;
  (pMVar1->fields).timeToEnd = 0.0;
  if (fVar2 < (float)fVar6) {
    (pMVar1->fields).timeToEnd = (pMVar1->fields).distance / (float)fVar6;
  }
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
  (this->fields).MoveableChildren = this_00;
  func_?(&(this->fields).MoveableChildren,this_00);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar2 = (pVVar1->zeroVector).y;
  fVar3 = (pVVar1->zeroVector).z;
  (this->fields).localPos.x = (pVVar1->zeroVector).x;
  (this->fields).localPos.y = fVar2;
  (this->fields).localPos.z = fVar3;
  (this->fields).distance = 5.0;
  (this->fields).parentMoverID = -1;
  (this->fields).isVisible = 1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  uVar4 = *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4);
  piVar5 = &(this->fields)._._._.interactionFlags;
  *(uint *)piVar5 = (uint)*piVar5 | 0x2000;
  *(undefined4 *)((int)&(this->fields)._._._.interactionFlags + 4) = uVar4;
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
  if ((this->fields).parentMover != (MVMovable *)0x0) {
    this = MVMovable_get_RootMover((this->fields).parentMover,(MethodInfo *)0x0);
  }
  return this;
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

