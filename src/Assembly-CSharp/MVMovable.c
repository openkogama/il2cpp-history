
/* Void AddMovableChild(MVMovable) */

void Assembly-CSharp.dll::MVMovable::MVMovable_AddMovableChild
               (MVMovable *this,MVMovable *child,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).MoveableChildren;
  if (this_00 != (List_1_MVMovable_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)child,
               MethodInfo__System__Collections__Generic__List<MVMovable>__Add_MVMovable_);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Destroy() */

void Assembly-CSharp.dll::MVMovable::MVMovable_Destroy(MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((this_00 == (MVWorldObjectClientManager *)0x0) ||
     (this_01 = (MoveableController *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                KeyValuePair`2[System::Object,System::Object],System::Object]::
                Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                            *)this_00,(MethodInfo *)0x0), this_01 == (MoveableController *)0x0)) {
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  MoveableController::MoveableController_RemoveMovable(this_01,(MVMovable *)0x0,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pOVar2 = *(Object_1 **)(in_stack_3 + 0x88);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    (pOVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar4 != 0) {
    pOVar2 = *(Object_1 **)(in_stack_3 + 0x88);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1(pOVar2,(MethodInfo *)0x0);
  }
  if (*(char *)(in_stack_3 + 0xcc) == '\0') {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar5 != (MVNetworkGame *)0x0) &&
       (pRVar6 = (RuntimeVariableNetworkManager *)
                 ShootableButton::ShootableButton_get_InputSignalReceiver
                           ((ShootableButton *)pMVar5,(MethodInfo *)0x0),
       pRVar6 != (RuntimeVariableNetworkManager *)0x0)) {
      bVar4 = RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_ContainsRuntimeVariables
                        (pRVar6,*(int32_t *)(in_stack_3 + 8),(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar5 != (MVNetworkGame *)0x0) &&
         (pRVar6 = (RuntimeVariableNetworkManager *)
                   ShootableButton::ShootableButton_get_InputSignalReceiver
                             ((ShootableButton *)pMVar5,(MethodInfo *)0x0),
         pRVar6 != (RuntimeVariableNetworkManager *)0x0)) {
        RuntimeVariableNetworkManager::RuntimeVariableNetworkManager_RemoveRuntimeDataVariables
                  (pRVar6,*(int32_t *)(in_stack_3 + 8),(MethodInfo *)0x0);
        return;
      }
    }
    func_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}


/* String GetParamPath(String) */

String * Assembly-CSharp.dll::MVMovable::MVMovable_GetParamPath
                   (MVMovable *this,String *param,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (param != (String *)0x0) {
    pSVar1 = (String *)
             (*(code *)(param->klass->vtable).ToString.method)
                       (param,(param->klass->vtable).GetTypeCode.methodPtr);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    pSVar1 = mscorlib.dll::System::String::String_Concat_2
                       (StringLiteral_BlueprintData_,pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar2)();
  return pSVar1;
}


/* Void Initialize() */

void Assembly-CSharp.dll::MVMovable::MVMovable_Initialize(MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVBlueprintBase::MVBlueprintBase_Initialize((MVBlueprintBase *)this,(MethodInfo *)0x0);
  MVMovable_InitializeCommon(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = (MoveableController *)
              System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
              ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
              ::
              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                          *)this_01,(MethodInfo *)0x0);
    if (this_02 != (MoveableController *)0x0) {
      MoveableController::MoveableController_AddMovable(this_02,this,0,(MethodInfo *)0x0);
      this_00 = (this->fields)._._._.gameObject;
      if (this_00 != (GameObject *)0x0) {
        this_03 = (MovableVisualization *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_85
                            (this_00,
                             MovableVisualization_MethodInfo__UnityEngine__GameObject__AddComponent<MovableVisualization>__
                            );
        (this->fields).movableVisualization = this_03;
        if (this_03 != (MovableVisualization *)0x0) {
          MovableVisualization::MovableVisualization_Init
                    (this_03,(MVCubeModelBase *)(this->fields)._CubeModel_k__BackingField,
                     (MethodInfo *)0x0);
          pMStack1 = (this->fields)._CubeModel_k__BackingField;
          if (pMStack1 != (MVCubeModelInstance *)0x0) {
            pIStack2 = (pMStack1->klass->vtable).GetTargetPosition.methodPtr;
            puStack3 = (undefined *)0x0;
            (*(code *)(pMStack1->klass->vtable).set_Visible.method)();
            (*(code *)(this->klass->vtable).set_Visible.method)();
            return;
          }
        }
      }
    }
  }
  pIStack2 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void InitializeCommon() */

void Assembly-CSharp.dll::MVMovable::MVMovable_InitializeCommon(MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVMovable_ReadWOData(this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (pMVar1 == (MVCubeModelInstance *)0x0) {
    return;
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    uVar3._0_4_ = pVVar2->x;
    uVar3._4_4_ = pVVar2->y;
    (*(code *)(pMVar1->klass->vtable).set_Position.method)(pMVar1,uVar3);
    pMVar1 = (this->fields)._CubeModel_k__BackingField;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                       ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      (*(code *)(pMVar1->klass->vtable).set_Rotation.method)(pMVar1,pQVar4->x,pQVar4->y);
      pMVar1 = (this->fields)._CubeModel_k__BackingField;
      if (pMVar1 != (MVCubeModelInstance *)0x0) {
        pQVar4 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                           ((Quaternion *)&stack0xffffffec,(MVWorldObjectClient *)pMVar1,
                            (MethodInfo *)0x0);
        fVar5 = pQVar4->y;
        fVar6 = pQVar4->z;
        fVar7 = pQVar4->w;
        (this->fields).orgRotation.x = pQVar4->x;
        (this->fields).orgRotation.y = fVar5;
        (this->fields).orgRotation.z = fVar6;
        (this->fields).orgRotation.w = fVar7;
        return;
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void InitializeInventory() */

void Assembly-CSharp.dll::MVMovable::MVMovable_InitializeInventory
               (MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVGroup::MVGroup_InitializeInventory((MVGroup *)this,(MethodInfo *)0x0);
  MVMovable_InitializeCommon(this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = (MoveableController *)
              System.Core.dll::System::Linq::Enumerable+<CreateSelectIterator>c__Iterator10`2[System
              ::Collections::Generic::KeyValuePair`2[System::Object,System::Object],System::Object]
              ::
              Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                        ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                          *)this_00,(MethodInfo *)0x0);
    if (this_01 != (MoveableController *)0x0) {
      MoveableController::MoveableController_AddMovable(this_01,this,1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Move(Single, Int32) */

void Assembly-CSharp.dll::MVMovable::MVMovable_Move
               (MVMovable *this,float directionFactor,int32_t breakid,MethodInfo *method)

{
  pMVar1 = this;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff70;
  puVar6 = &stack0xffffff70;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar6 = puStack_5;
  }
  puStack_5 = puVar6;
  func_?();
  if ((this->fields)._CubeModel_k__BackingField == (MVCubeModelInstance *)0x0)
  goto code_?;
  puStack_7 = (undefined4 *)&stack0xffffff70;
  puStack_5 = &stack0xffffff70;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_7 = (undefined4 *)&stack0xffffff70, puStack_5 = &stack0xffffff70,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_7 = (undefined4 *)&stack0xffffff70;
    puStack_5 = &stack0xffffff70;
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar8 == (MVWorldObjectClientManager *)0x0) ||
     (pOVar9 = System.Core.dll::System::Linq::
               Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
               KeyValuePair`2[System::Object,System::Object],System::Object]::
               Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                         ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                           *)pMVar8,(MethodInfo *)0x0), pOVar9 == (Object *)0x0))
  goto code_?;
  pMVar10 = (MVMovable *)pOVar9[2].monitor;
  if ((this->fields).pausedMovement == 0) {
    this = pMVar10;
    if (directionFactor < 0.0) {
      fStack_11 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                            ((MethodInfo *)0x0);
      this = (MVMovable *)((float)pMVar10 - fStack_11);
    }
    fVar12 = (pMVar1->fields).timeToEnd;
    (pMVar1->fields).linearTime = 0.0;
    (pMVar1->fields).fraction = 0.0;
    if (fVar12 != 0.0) {
      dStack_13 = (double)(fVar12 + fVar12);
      fVar14 = (float10)func_?();
      fVar15 = _UNK_?;
      fVar12 = (pMVar1->fields).timeToEnd;
      dStack_13 = (double)fVar14;
      (pMVar1->fields).linearTime = (float)fVar14;
      fVar16 = (float)fVar14 / fVar12;
      (pMVar1->fields).fraction = fVar16;
      if (fVar15 < fVar12) {
        (pMVar1->fields).fraction = _UNK_? - fVar16;
      }
    }
  }
  else {
    (this->fields).linearTime = (this->fields).timeToEnd * (this->fields).fraction;
    this = pMVar10;
  }
  method_00 = pMVar1;
  pdVar17 = (double *)(*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)();
  pMVar10 = (pMVar1->fields).parentMover;
  dStack_13 = *pdVar17;
  fStack_11 = *(float *)(pdVar17 + 1);
  if (pMVar10 != (MVMovable *)0x0) {
    pMVar18 = (pMVar10->fields)._CubeModel_k__BackingField;
    if (pMVar18 == (MVCubeModelInstance *)0x0) goto code_?;
    puVar19 = (undefined8 *)(*(code *)(pMVar18->klass->vtable).get_WorldPosition_1.method)();
    uStack_20 = *puVar19;
    pOStack_21 = *(Object__Class **)(puVar19 + 1);
    pMVar10 = (pMVar1->fields).parentMover;
    if ((pMVar10 == (MVMovable *)0x0) ||
       (pMVar18 = (pMVar10->fields)._CubeModel_k__BackingField, pMVar18 == (MVCubeModelInstance *)0x0))
    goto code_?;
    pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&stack0xffffff8c,(MVWorldObjectClient *)pMVar18,
                         (MethodInfo *)0x0);
    fVar12 = pQVar22->y;
    fVar15 = pQVar22->z;
    fVar16 = pQVar22->w;
    puVar19 = (undefined8 *)
              (*(code *)(pMVar1->klass->vtable).get_WorldPosition_1.method)(&VStack_23,pMVar1);
    pMVar10 = (pMVar1->fields).parentMover;
    uStack_24 = *puVar19;
    fStack_11 = *(float *)(puVar19 + 1);
    if (pMVar10 == (MVMovable *)0x0) goto code_?;
    pMVar25 = pMVar10->klass;
    pLVar26 = (List_1_UnityEngine_Color32_ *)(pMVar25->vtable).set_WorldPosition.methodPtr;
    puVar19 = (undefined8 *)(*(code *)(pMVar25->vtable).get_WorldPosition_1.method)();
    dStack_13 = (double)*puVar19;
    fVar27 = *(float *)(puVar19 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fStack_11;
    a.x = (float)(undefined4)uStack_24;
    a.y = uStack_24._4_4_;
    b.z = fVar27;
    b._0_8_ = dStack_13;
    pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                        (&VStack_23,a,b,(MethodInfo *)0x0);
    dStack_13._0_4_ = pVVar28->x;
    dStack_13._4_4_ = pVVar28->y;
    fVar27 = pVVar28->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    rotation.y = fVar12;
    rotation.x = (float)pLVar26;
    rotation.z = fVar15;
    rotation.w = fVar16;
    point.z = fVar27;
    point._0_8_ = dStack_13;
    pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_23,rotation,point,(MethodInfo *)0x0);
    a_03.z = (float)pOStack_21;
    a_03.x = (float)(undefined4)uStack_20;
    a_03.y = uStack_20._4_4_;
    pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                        (&VStack_23,a_03,*pVVar28,(MethodInfo *)0x0);
    dStack_13 = *(double *)pVVar28;
    fStack_11 = pVVar28->z;
  }
  if ((pMVar1->fields).timeToEnd <= _UNK_?) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                        (&VStack_23,(MethodInfo *)0x0);
    fVar15 = pVVar28->y;
    fVar12 = pVVar28->z;
    (pMVar1->fields).localPos.x = pVVar28->x;
    (pMVar1->fields).localPos.y = fVar15;
    (pMVar1->fields).localPos.z = fVar12;
  }
  else {
    if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
      func_?();
    }
    TypeInfo__MVMovable->static_fields->direction = 1.0;
    fVar12 = (pMVar1->fields).timeToEnd;
    pfVar29 = &(pMVar1->fields).linearTime;
    pMVar30 = (pMVar1->klass->vtable).get_WorldVelocity.method;
    if (*pfVar29 <= fVar12 && fVar12 != *pfVar29) {
      puVar19 = (undefined8 *)(*(code *)pMVar30)();
      fVar12 = (pMVar1->fields).linearTime;
      uStack_20 = CONCAT44(fVar12,(undefined4)uStack_20);
      uStack_24 = *puVar19;
      fVar15 = *(float *)(puVar19 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
        fVar12 = uStack_20._4_4_;
      }
      a_02.z = fVar15;
      a_02.x = (float)(undefined4)uStack_24;
      a_02.y = uStack_24._4_4_;
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          (&VStack_23,a_02,fVar12,(MethodInfo *)0x0);
      fVar15 = pVVar28->y;
      fVar12 = pVVar28->z;
      (pMVar1->fields).localPos.x = pVVar28->x;
      (pMVar1->fields).localPos.y = fVar15;
      (pMVar1->fields).localPos.z = fVar12;
    }
    else {
      puVar19 = (undefined8 *)(*(code *)pMVar30)();
      fVar12 = (pMVar1->fields).linearTime;
      uStack_20 = CONCAT44(fVar12,(undefined4)uStack_20);
      uStack_24 = *puVar19;
      fVar15 = *(float *)(puVar19 + 1);
      pOStack_21 = (Object__Class *)(pMVar1->fields).timeToEnd;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
        fVar12 = uStack_20._4_4_;
      }
      a_01.z = fVar15;
      a_01.x = (float)(undefined4)uStack_24;
      a_01.y = uStack_24._4_4_;
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          (&VStack_23,a_01,((float)pOStack_21 + (float)pOStack_21) - fVar12,
                           (MethodInfo *)0x0);
      fVar15 = pVVar28->y;
      fVar12 = pVVar28->z;
      (pMVar1->fields).localPos.x = pVVar28->x;
      (pMVar1->fields).localPos.y = fVar15;
      (pMVar1->fields).localPos.z = fVar12;
      if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVMovable);
      }
      TypeInfo__MVMovable->static_fields->direction = -1.0;
    }
    if (_UNK_? < directionFactor) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      pMVar8 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar8 == (MVWorldObjectClientManager *)0x0) ||
         (pOVar9 = System.Core.dll::System::Linq::
                   Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                   KeyValuePair`2[System::Object,System::Object],System::Object]::
                   Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                             ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                               *)pMVar8,(MethodInfo *)0x0), pOVar9 == (Object *)0x0))
      goto code_?;
      pOStack_21 = pOVar9[1].klass;
      pSVar31 = DayNightCycle::DayNightCycle_get_CurrentStarsParam
                          ((DayNightCycle *)pMVar1,(MethodInfo *)method_00);
      uStack_24 = CONCAT44(pSVar31,(undefined4)uStack_24);
      if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
        func_?();
      }
      uStack_20 = CONCAT44(TypeInfo__MVMovable->static_fields->direction,(undefined4)uStack_20);
      puVar19 = (undefined8 *)(*(code *)(pMVar1->klass->vtable).get_WorldVelocity.method)();
      VStack_23._4_8_ = *puVar19;
      fVar12 = *(float *)(puVar19 + 1);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_00.z = fVar12;
      a_00.x = VStack_23.y;
      a_00.y = VStack_23.z;
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                          ((Vector3 *)&stack0xffffff90,uStack_20._4_4_,a_00,(MethodInfo *)0x0);
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffff90,*pVVar28,directionFactor,(MethodInfo *)0x0);
      VStack_23.y = pVVar28->x;
      VStack_23.z = pVVar28->y;
      fVar12 = pVVar28->z;
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      uStack_20 = CONCAT44(fVar15,(undefined4)uStack_20);
      a_05.z = fVar12;
      a_05.x = VStack_23.y;
      a_05.y = VStack_23.z;
      pVVar28 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                          ((Vector3 *)&stack0xffffff90,a_05,fVar15,(MethodInfo *)0x0);
      if (pOStack_21 == (Object__Class *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__set_Item
                ((Dictionary_2_System_Int32_UnityEngine_Vector3_ *)pOStack_21,
                 (int32_t)uStack_24._4_4_,*pVVar28,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                );
    }
  }
  VStack_23.y = (pMVar1->fields).localPos.x;
  VStack_23.z = (pMVar1->fields).localPos.y;
  pMVar18 = (pMVar1->fields)._CubeModel_k__BackingField;
  uStack_24 = CONCAT44((pMVar1->fields).localPos.z,(undefined4)uStack_24);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a_04.z = fStack_11;
  a_04._0_8_ = dStack_13;
  b_00.z = uStack_24._4_4_;
  b_00.x = VStack_23.y;
  b_00.y = VStack_23.z;
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
            ((Vector3 *)&stack0xffffff90,a_04,b_00,(MethodInfo *)0x0);
  if (pMVar18 != (MVCubeModelInstance *)0x0) {
    (*(code *)(pMVar18->klass->vtable).set_WorldPosition.method)();
    method_01 = (MethodInfo *)0x0;
    pMVar30 = (MethodInfo *)&UNK_?;
    pVVar28 = MVMovable_get_AngularVelocity((Vector3 *)&stack0xffffff90,pMVar1,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
              ((Vector3 *)&stack0xffffff90,*pVVar28,(float)this,(MethodInfo *)0x0);
    fVar14 = (float10)func_?();
    MVMovable_get_AngularVelocity((Vector3 *)&stack0xffffff90,pMVar1,(MethodInfo *)0x0);
    method_02 = (Quaternion__Class *)&UNK_?;
    puVar19 = (undefined8 *)func_?();
    VStack_23._4_8_ = *puVar19;
    fVar12 = *(float *)(puVar19 + 1);
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Quaternion);
    }
    axis.z = fVar12;
    axis.x = VStack_23.y;
    axis.y = VStack_23.z;
    pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                        ((Quaternion *)&stack0xffffff8c,(float)fVar14 * _UNK_?,axis,
                         (MethodInfo *)0x0);
    fVar12 = pQVar22->x;
    VStack_23.x = pQVar22->y;
    VStack_23.y = pQVar22->z;
    VStack_23.z = pQVar22->w;
    pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                        ((Quaternion *)&stack0xffffff8c,(MVWorldObjectClient *)pMVar1,
                         (MethodInfo *)0x0);
    pLVar26 = (List_1_UnityEngine_Color32_ *)pQVar22->x;
    fVar15 = pQVar22->y;
    fVar16 = pQVar22->z;
    fVar27 = pQVar22->w;
    if ((pMVar1->fields).parentMoverID != -1) {
      pMVar10 = (pMVar1->fields).parentMover;
      if ((pMVar10 == (MVMovable *)0x0) ||
         (pMVar18 = (pMVar10->fields)._CubeModel_k__BackingField, pMVar18 == (MVCubeModelInstance *)0x0
         )) goto code_?;
      pMVar30 = (MethodInfo *)&UNK_?;
      pQVar22 = MVWorldObjectClient::MVWorldObjectClient_get_SyncRot
                          ((Quaternion *)&stack0xffffff8c,(MVWorldObjectClient *)pMVar18,method_01);
      pLVar26 = (List_1_UnityEngine_Color32_ *)pQVar22->x;
      fVar15 = pQVar22->y;
      fVar16 = pQVar22->z;
      fVar27 = pQVar22->w;
    }
    if ((pMVar1->fields).pausedMovement == 0) {
      pMVar18 = (pMVar1->fields)._CubeModel_k__BackingField;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        method_02 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      lhs.y = fVar15;
      lhs.x = (float)pLVar26;
      lhs.z = fVar16;
      lhs.w = fVar27;
      rhs.y = VStack_23.x;
      rhs.x = fVar12;
      rhs.z = VStack_23.y;
      rhs.w = VStack_23.z;
      pQVar22 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                          ((Quaternion *)&stack0xffffff8c,lhs,rhs,(MethodInfo *)0x0);
      if (pMVar18 == (MVCubeModelInstance *)0x0) goto code_?;
      MVWorldObjectClient::MVWorldObjectClient_set_SyncRot
                ((MVWorldObjectClient *)pMVar18,*pQVar22,pMVar30);
    }
    pMVar18 = (pMVar1->fields)._CubeModel_k__BackingField;
    if (pMVar18 != (MVCubeModelInstance *)0x0) {
      pIVar32 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                Collection_1_VoxelHit__get_Items
                          ((Collection_1_VoxelHit_ *)pMVar18,(MethodInfo *)method_02);
      if ((IList_1_VoxelHit_ *)breakid != pIVar32) {
        pLVar26 = (List_1_UnityEngine_Color32_ *)(pMVar1->fields).MoveableChildren;
        if (pLVar26 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
        pLVar33 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                  List_1_UnityEngine_Color32__GetEnumerator
                            ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffff8c,pLVar26,
                             MethodInfo__System__Collections__Generic__List<MVMovable>__GetEnumerator__
                            );
        pMVar30 = (MethodInfo *)(pLVar33->current).rgba;
        uStack_2 = 0;
        while (cVar34 = func_?(), cVar34 != '\0') {
          pMVar1 = (MVMovable *)
                    mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                    Serialization::JsonProperty]::
                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                               &stack0xffffff7c,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__get_Current__
                              );
          if (pMVar1 == (MVMovable *)0x0) goto code_?;
          MVMovable_Move(pMVar1,directionFactor,breakid,pMVar30);
        }
        *puStack_7 = 0x2b7;
        uStack_2 = 0xffffffff;
        func_?();
      }
code_?:
      *unaff_FS_OFFSET = uStack_4;
      return;
    }
  }
code_?:
  func_?();
  func_?();
  pcVar35 = (code *)swi(3);
  (*pcVar35)();
  return;
}


/* Void OnDataUpdate() */

void Assembly-CSharp.dll::MVMovable::MVMovable_OnDataUpdate(MVMovable *this,MethodInfo *method)

{
  MVBlueprintBase::MVBlueprintBase_OnDataUpdate((MVBlueprintBase *)this,(MethodInfo *)0x0);
  uVar1 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &stack0xfffffff8;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  KStack_2.key = 0;
  KStack_2.value = 0;
  iStack_3 = 0;
  KStack_4.key = 0;
  KStack_4.value = (Object *)0x0;
  func_?();
  puStack_5 = (undefined4 *)&stack0xffffff68;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_5 = (undefined4 *)&stack0xffffff68, (TypeInfo__System__String->_1).cctor_started == 0
     )) {
    puStack_5 = (undefined4 *)&stack0xffffff68;
    func_?(TypeInfo__System__String);
  }
  pDVar6 = (in_stack_7->fields)._.blueprintData;
  if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    uVar8 = 0x1020;
    uVar9 = func_?(unaff_ESI,0);
    bVar10 = (byte)((ulonglong)uVar9 >> 0x20) & bRam_?;
    puVar11 = (undefined1 *)CONCAT31((int3)((ulonglong)uVar9 >> 0x28),bVar10);
    *(byte *)uVar9 = *(byte *)uVar9 & bVar10;
    uVar12 = in((ushort)puVar11);
    pbVar13 = (byte *)(CONCAT31((int3)((ulonglong)uVar9 >> 8),uVar12) + 0x161e1020);
    *pbVar13 = *pbVar13 & bVar10;
    sVar14 = ((ushort)puVar11 & 3) - (*(ushort *)&unaff_ESI->klass & 3);
    *(ushort *)&unaff_ESI->klass = *(short *)&unaff_ESI->klass + (ushort)(0 < sVar14) * sVar14;
    *pbVar13 = *pbVar13 & bVar10;
    uRam_? = SUB41(pbVar13,0);
    *pbVar13 = *pbVar13 & bVar10;
    *pbVar13 = *pbVar13 & bVar10;
    *puVar11 = *puVar11;
    pcVar15 = (code *)swi(3);
    (*pcVar15)(CONCAT22(uVar8,in_SS));
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
  Dictionary_2_WinningConditionType_System_Object__GetEnumerator
            ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
             &stack0xffffff88,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar6,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
            );
  do {
    do {
      cVar16 = func_?(&stack0xffffff74,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             );
      if (cVar16 == '\0') {
        *puStack_5 = 0x2e1;
        func_?(&stack0xffffff74,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       );
        MVMovable_RecalcTimeToEnd(in_stack_7,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uVar1;
        return;
      }
      KStack_2 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffff74,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      piVar17 = (int *)func_?();
      if (piVar17 == (int *)0x0) goto code_?;
      pSStack_18 = (String *)
                   (**(code **)(*piVar17 + 0xd8))(piVar17,*(undefined4 *)(*piVar17 + 0xdc));
      piVar17 = (int *)func_?(&KStack_2,
                                       MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                                      );
      if (piVar17 == (int *)0x0) goto code_?;
      unaff_ESI = (MVMovable *)
                  (**(code **)(*piVar17 + 0xd8))(piVar17,*(undefined4 *)(*piVar17 + 0xdc));
      uStack_19 = CONCAT44(unaff_ESI,(undefined4)uStack_19);
      method_00 = (MethodInfo *)&UNK_?;
      pSStack_20 = (ScaleAnimationBase *)
                   func_?(TypeInfo__MVMovable___ReadWOData_c__AnonStorey1);
      ScaleAnimationBase::ScaleAnimationBase_Play(pSStack_20,0.0,method_00);
    } while (unaff_ESI == (MVMovable *)0x0);
    if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVMovable);
    }
    if (TypeInfo__MVMovable->static_fields->__f__switch_map2 ==
        (Dictionary_2_System_String_System_Int32_ *)0x0) {
      pDVar21 = (Dictionary_2_System_String_System_Int32_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object___ctor_3
                ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar21,8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary_int_
                );
      unaff_ESI = (MVMovable *)0x0;
      if (pDVar21 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,
                 (Object *)StringLiteral_Rotation,0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,
                 (Object *)StringLiteral_Velocity,1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,
                 (Object *)StringLiteral_AngularVelocity,2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,
                 (Object *)StringLiteral_AngularDirection,3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,
                 (Object *)StringLiteral_AngularSpeed,4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,
                 (Object *)StringLiteral_Distance,5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,
                 (Object *)StringLiteral_ParentID,6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,
                 (Object *)StringLiteral_ChildrenMap,7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVMovable);
      }
      TypeInfo__MVMovable->static_fields->__f__switch_map2 = pDVar21;
      unaff_ESI = uStack_19._4_4_;
    }
    if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVMovable);
    }
    pDVar21 = TypeInfo__MVMovable->static_fields->__f__switch_map2;
    if (pDVar21 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
    bVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__TryGetValue
                      ((Dictionary_2_System_Object_System_Int32_ *)pDVar21,(Object *)unaff_ESI,
                       &iStack_3,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__TryGetValue_System__String__System__Int32__
                      );
    if (bVar22 != 0) {
      switch(iStack_3) {
      case 0:
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar23 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_24,pSStack_18,(MethodInfo *)0x0);
        uStack_19._0_4_ = pVVar23->x;
        uStack_19._4_4_ = (MVMovable *)pVVar23->y;
        unaff_ESI = (MVMovable *)pVVar23->z;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        euler.z = (float)unaff_ESI;
        euler.x = (float)(undefined4)uStack_19;
        euler.y = (float)uStack_19._4_4_;
        pQVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                            ((Quaternion *)&stack0xffffff8c,euler,(MethodInfo *)0x0);
        fVar26 = pQVar25->y;
        fVar27 = pQVar25->z;
        fVar28 = pQVar25->w;
        (in_stack_7->fields).orgRotation.x = pQVar25->x;
        (in_stack_7->fields).orgRotation.y = fVar26;
        (in_stack_7->fields).orgRotation.z = fVar27;
        (in_stack_7->fields).orgRotation.w = fVar28;
        break;
      case 1:
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar23 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_29,pSStack_18,(MethodInfo *)0x0);
        fVar27 = pVVar23->y;
        fVar26 = pVVar23->z;
        (in_stack_7->fields).velocity.x = pVVar23->x;
        (in_stack_7->fields).velocity.y = fVar27;
        (in_stack_7->fields).velocity.z = fVar26;
        break;
      case 2:
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Movable_still_deprecated_data_An,(MethodInfo *)0x0);
        break;
      case 3:
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar23 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_30,pSStack_18,(MethodInfo *)0x0);
        fVar27 = pVVar23->y;
        fVar26 = pVVar23->z;
        (in_stack_7->fields).angularDirection.x = pVVar23->x;
        (in_stack_7->fields).angularDirection.y = fVar27;
        (in_stack_7->fields).angularDirection.z = fVar26;
        break;
      case 4:
        pDVar6 = (in_stack_7->fields)._.blueprintData;
        if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  ((Dictionary_2_System_Type_Pool_ *)pDVar6,(Type *)StringLiteral_AngularSpeed,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pfVar31 = (float *)func_?();
        (in_stack_7->fields).angularSpeed = *pfVar31;
        break;
      case 5:
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        fVar26 = mscorlib.dll::System::Convert::Convert_ToSingle_9(pSStack_18,(MethodInfo *)0x0);
        uStack_19 = CONCAT44(fVar26,(undefined4)uStack_19);
        (in_stack_7->fields).distance = fVar26;
        break;
      case 6:
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        pvVar32 = (void *)mscorlib.dll::System::Convert::Convert_ToInt32_10
                                    (pSStack_18,(MethodInfo *)0x0);
        if (pSStack_20 == (ScaleAnimationBase *)0x0) goto code_?;
        (pSStack_20->fields)._._._._.m_CachedPtr = pvVar32;
        if ((void *)(in_stack_7->fields).parentMoverID != pvVar32) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
             (pOVar33 = System.Core.dll::System::Linq::
                        Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                        Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                    *)this_01,(MethodInfo *)0x0), pOVar33 == (Object *)0x0))
          goto code_?;
          uStack_19 = CONCAT44(pOVar33[1].monitor,(undefined4)uStack_19);
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)pSStack_20,
                     MethodInfo__MVMovable___ReadWOData_c__AnonStorey1____m__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                     ,
                     MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>__Func_System__Object__void__
                    );
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                             ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                              uStack_19._4_4_,
                              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                               *)this_02,
                              System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                             );
          KStack_4 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_6
                                ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                                 System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                                );
          unaff_ESI = (MVMovable *)func_?();
          if (unaff_ESI == (MVMovable *)0x0) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            unaff_ESI = (MVMovable *)
                        mscorlib.dll::System::String::String_Concat_2
                                  (StringLiteral_Couldn_t_find_parent_,pSStack_18,(MethodInfo *)0x0)
            ;
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)unaff_ESI,(MethodInfo *)0x0);
          }
          else {
            this_00 = (in_stack_7->fields).parentMover;
            if (this_00 != (MVMovable *)0x0) {
              MVMovable_RemoveMovableChild(this_00,in_stack_7,(MethodInfo *)0x0);
            }
            (in_stack_7->fields).parentMoverID =
                 (int32_t)(pSStack_20->fields)._._._._.m_CachedPtr;
            (in_stack_7->fields).parentMover = unaff_ESI;
            MVMovable_AddMovableChild(unaff_ESI,in_stack_7,(MethodInfo *)0x0);
          }
        }
        break;
      case 7:
        pDVar6 = (in_stack_7->fields)._.childIdMap;
        if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        bVar22 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                            *)pDVar6,StringLiteral_movable,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar22 != 0) {
          pDVar6 = (in_stack_7->fields)._.childIdMap;
          if (pDVar6 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
          Dictionary_2_System_Type_Pool__get_Item
                    ((Dictionary_2_System_Type_Pool_ *)pDVar6,(Type *)StringLiteral_movable,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
          piVar34 = (int32_t *)func_?();
          uStack_19 = CONCAT44(*piVar34,(undefined4)uStack_19);
          MVGroup::MVGroup_GetChild((MVGroup *)in_stack_7,*piVar34,(MethodInfo *)0x0);
          pMVar35 = (MVCubeModelInstance *)func_?();
          (in_stack_7->fields)._CubeModel_k__BackingField = pMVar35;
          if (pMVar35 == (MVCubeModelInstance *)0x0) {
            args = (Object__Array *)func_?(TypeInfo__System__Object,5);
            unaff_ESI = (MVMovable *)0x0;
            if (args == (Object__Array *)0x0) goto code_?;
            func_?(args,StringLiteral_Movable_);
            func_?(0,StringLiteral_Movable_);
            iStack_36 = (in_stack_7->fields)._._._._.id;
            uVar37 = func_?(TypeInfo__System__Int32,&iStack_36);
            func_?(args,uVar37);
            func_?(1,uVar37);
            func_?(args,StringLiteral__init___Could_not_find_child_);
            func_?(2,StringLiteral__init___Could_not_find_child_);
            uStack_38 = uStack_19._4_4_;
            uVar37 = func_?(TypeInfo__System__Int32,&uStack_38);
            func_?(args,uVar37);
            func_?(3,uVar37);
            func_?(args,StringLiteral__to_move__If_this_is_a_new_movab);
            func_?(4,StringLiteral__to_move__If_this_is_a_new_movab);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            unaff_ESI = (MVMovable *)
                        mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)unaff_ESI,(MethodInfo *)0x0);
          }
        }
      }
    }
  } while( true );
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::MVMovable::MVMovable_OnEnterObject
               (MVMovable *this,EditorStateMachine *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
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
          id = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)pMVar2,(MethodInfo *)0x0);
          EditorStateMachine::EditorStateMachine_SelectWO(e,(int32_t)id,0,1,(MethodInfo *)0x0);
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
    func_?(_UNK_?);
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Void ReadWOData() */

void Assembly-CSharp.dll::MVMovable::MVMovable_ReadWOData(MVMovable *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff60;
  puVar5 = &stack0xffffff60;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  KStack_6.key = 0;
  KStack_6.value = 0;
  iStack_7 = 0;
  KStack_8.key = 0;
  KStack_8.value = (Object *)0x0;
  func_?();
  puStack_9 = (undefined4 *)&stack0xffffff60;
  puStack_4 = &stack0xffffff60;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_9 = (undefined4 *)&stack0xffffff60, puStack_4 = &stack0xffffff60,
     (TypeInfo__System__String->_1).cctor_started == 0)) {
    puStack_9 = (undefined4 *)&stack0xffffff60;
    puStack_4 = &stack0xffffff60;
    func_?(TypeInfo__System__String);
  }
  pDVar10 = (this->fields)._.blueprintData;
  if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?(0);
    uVar11 = 0x1020;
    uVar12 = func_?(unaff_ESI,0);
    bVar13 = (byte)((ulonglong)uVar12 >> 0x20) & bRam_?;
    puVar5 = (undefined1 *)CONCAT31((int3)((ulonglong)uVar12 >> 0x28),bVar13);
    *(byte *)uVar12 = *(byte *)uVar12 & bVar13;
    uVar14 = in((ushort)puVar5);
    pbVar15 = (byte *)(CONCAT31((int3)((ulonglong)uVar12 >> 8),uVar14) + 0x161e1020);
    *pbVar15 = *pbVar15 & bVar13;
    sVar16 = ((ushort)puVar5 & 3) - (*(ushort *)&unaff_ESI->klass & 3);
    *(ushort *)&unaff_ESI->klass = *(short *)&unaff_ESI->klass + (ushort)(0 < sVar16) * sVar16;
    *pbVar15 = *pbVar15 & bVar13;
    uRam_? = SUB41(pbVar15,0);
    *pbVar15 = *pbVar15 & bVar13;
    *pbVar15 = *pbVar15 & bVar13;
    *puVar5 = *puVar5;
    pcVar17 = (code *)swi(3);
    (*pcVar17)(CONCAT22(uVar11,in_SS));
    return;
  }
  mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]::
  Dictionary_2_WinningConditionType_System_Object__GetEnumerator
            ((Dictionary_2_TKey_TValue_Enumerator_WinningConditionType_System_Object_ *)
             &stack0xffffff80,(Dictionary_2_WinningConditionType_System_Object_ *)pDVar10,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__GetEnumerator__
            );
  uStack_1 = 0;
  do {
    do {
      cVar18 = func_?(&stack0xffffff6c,
                              MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__MoveNext__
                             );
      if (cVar18 == '\0') {
        *puStack_9 = 0x2e1;
        uStack_1 = 0xffffffff;
        func_?(&stack0xffffff6c,
                        MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__Dispose__
                       );
        MVMovable_RecalcTimeToEnd(this,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      KStack_6 = LevelRewardsManager::LevelRewardsManager_get_NextReward
                            ((LevelRewardsManager *)&stack0xffffff6c,
                             MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___Enumerator<System::Object,_System::Object>__get_Current__
                            );
      piVar19 = (int *)func_?();
      if (piVar19 == (int *)0x0) goto code_?;
      pSStack_20 = (String *)
                   (**(code **)(*piVar19 + 0xd8))(piVar19,*(undefined4 *)(*piVar19 + 0xdc));
      piVar19 = (int *)func_?(&KStack_6,
                                       MethodInfo__System__Collections__Generic__KeyValuePair<System::Object,_System::Object>__get_Key__
                                      );
      if (piVar19 == (int *)0x0) goto code_?;
      unaff_ESI = (MVMovable *)
                  (**(code **)(*piVar19 + 0xd8))(piVar19,*(undefined4 *)(*piVar19 + 0xdc));
      uStack_21 = CONCAT44(unaff_ESI,(undefined4)uStack_21);
      method_00 = (MethodInfo *)&UNK_?;
      pSStack_22 = (ScaleAnimationBase *)
                   func_?(TypeInfo__MVMovable___ReadWOData_c__AnonStorey1);
      ScaleAnimationBase::ScaleAnimationBase_Play(pSStack_22,0.0,method_00);
    } while (unaff_ESI == (MVMovable *)0x0);
    if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVMovable);
    }
    if (TypeInfo__MVMovable->static_fields->__f__switch_map2 ==
        (Dictionary_2_System_String_System_Int32_ *)0x0) {
      pDVar23 = (Dictionary_2_System_String_System_Int32_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::String,_int>
                               );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[WinningConditionType,System::Object]
      ::Dictionary_2_WinningConditionType_System_Object___ctor_3
                ((Dictionary_2_WinningConditionType_System_Object_ *)pDVar23,8,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Dictionary_int_
                );
      unaff_ESI = (MVMovable *)0x0;
      if (pDVar23 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,
                 (Object *)StringLiteral_Rotation,0,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,
                 (Object *)StringLiteral_Velocity,1,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,
                 (Object *)StringLiteral_AngularVelocity,2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,
                 (Object *)StringLiteral_AngularDirection,3,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,
                 (Object *)StringLiteral_AngularSpeed,4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,
                 (Object *)StringLiteral_Distance,5,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,
                 (Object *)StringLiteral_ParentID,6,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
      Dictionary_2_System_Object_System_Int32__Add
                ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,
                 (Object *)StringLiteral_ChildrenMap,7,
                 MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__Add_System__String__int_
                );
      if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVMovable);
      }
      TypeInfo__MVMovable->static_fields->__f__switch_map2 = pDVar23;
      unaff_ESI = uStack_21._4_4_;
    }
    if ((((uint)(TypeInfo__MVMovable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVMovable->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVMovable);
    }
    pDVar23 = TypeInfo__MVMovable->static_fields->__f__switch_map2;
    if (pDVar23 == (Dictionary_2_System_String_System_Int32_ *)0x0) goto code_?;
    bVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Int32]::
            Dictionary_2_System_Object_System_Int32__TryGetValue
                      ((Dictionary_2_System_Object_System_Int32_ *)pDVar23,(Object *)unaff_ESI,
                       &iStack_7,
                       MethodInfo__System__Collections__Generic__Dictionary<System::String,_int>__TryGetValue_System__String__System__Int32__
                      );
    if (bVar24 != 0) {
      switch(iStack_7) {
      case 0:
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_26,pSStack_20,(MethodInfo *)0x0);
        uStack_21._0_4_ = pVVar25->x;
        uStack_21._4_4_ = (MVMovable *)pVVar25->y;
        unaff_ESI = (MVMovable *)pVVar25->z;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        euler.z = (float)unaff_ESI;
        euler.x = (float)(undefined4)uStack_21;
        euler.y = (float)uStack_21._4_4_;
        pQVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Euler_1
                            ((Quaternion *)&stack0xffffff84,euler,(MethodInfo *)0x0);
        fVar28 = pQVar27->y;
        fVar29 = pQVar27->z;
        fVar30 = pQVar27->w;
        (this->fields).orgRotation.x = pQVar27->x;
        (this->fields).orgRotation.y = fVar28;
        (this->fields).orgRotation.z = fVar29;
        (this->fields).orgRotation.w = fVar30;
        break;
      case 1:
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_31,pSStack_20,(MethodInfo *)0x0);
        fVar29 = pVVar25->y;
        fVar28 = pVVar25->z;
        (this->fields).velocity.x = pVVar25->x;
        (this->fields).velocity.y = fVar29;
        (this->fields).velocity.z = fVar28;
        break;
      case 2:
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                  ((Object *)StringLiteral_Movable_still_deprecated_data_An,(MethodInfo *)0x0);
        break;
      case 3:
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar25 = Extensions::Extensions_ToVector3FromSerializeString
                            (&VStack_32,pSStack_20,(MethodInfo *)0x0);
        fVar29 = pVVar25->y;
        fVar28 = pVVar25->z;
        (this->fields).angularDirection.x = pVVar25->x;
        (this->fields).angularDirection.y = fVar29;
        (this->fields).angularDirection.z = fVar28;
        break;
      case 4:
        pDVar10 = (this->fields)._.blueprintData;
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
        Dictionary_2_System_Type_Pool__get_Item
                  ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)StringLiteral_AngularSpeed,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                  );
        pfVar33 = (float *)func_?();
        (this->fields).angularSpeed = *pfVar33;
        break;
      case 5:
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        fVar28 = mscorlib.dll::System::Convert::Convert_ToSingle_9(pSStack_20,(MethodInfo *)0x0);
        uStack_21 = CONCAT44(fVar28,(undefined4)uStack_21);
        (this->fields).distance = fVar28;
        break;
      case 6:
        if ((((uint)(TypeInfo__System__Convert->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__Convert->_1).cctor_started == 0)) {
          func_?();
        }
        pvVar34 = (void *)mscorlib.dll::System::Convert::Convert_ToInt32_10
                                    (pSStack_20,(MethodInfo *)0x0);
        if (pSStack_22 == (ScaleAnimationBase *)0x0) goto code_?;
        (pSStack_22->fields)._._._._.m_CachedPtr = pvVar34;
        if ((void *)(this->fields).parentMoverID != pvVar34) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if ((this_01 == (MVWorldObjectClientManager *)0x0) ||
             (pOVar35 = System.Core.dll::System::Linq::
                        Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::
                        Generic::KeyValuePair`2[System::Object,System::Object],System::Object]::
                        Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                  ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                    *)this_01,(MethodInfo *)0x0), pOVar35 == (Object *)0x0))
          goto code_?;
          uStack_21 = CONCAT44(pOVar35[1].monitor,(undefined4)uStack_21);
          this_02 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_02,(Object *)pSStack_22,
                     MethodInfo__MVMovable___ReadWOData_c__AnonStorey1____m__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                     ,
                     MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>__Func_System__Object__void__
                    );
          source = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                             ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)
                              uStack_21._4_4_,
                              (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                               *)this_02,
                              System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                             );
          KStack_8 = System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_6
                                ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                                 System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                                );
          unaff_ESI = (MVMovable *)func_?();
          if (unaff_ESI == (MVMovable *)0x0) {
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            unaff_ESI = (MVMovable *)
                        mscorlib.dll::System::String::String_Concat_2
                                  (StringLiteral_Couldn_t_find_parent_,pSStack_20,(MethodInfo *)0x0)
            ;
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                      ((Object *)unaff_ESI,(MethodInfo *)0x0);
          }
          else {
            this_00 = (this->fields).parentMover;
            if (this_00 != (MVMovable *)0x0) {
              MVMovable_RemoveMovableChild(this_00,this,(MethodInfo *)0x0);
            }
            (this->fields).parentMoverID = (int32_t)(pSStack_22->fields)._._._._.m_CachedPtr;
            (this->fields).parentMover = unaff_ESI;
            MVMovable_AddMovableChild(unaff_ESI,this,(MethodInfo *)0x0);
          }
        }
        break;
      case 7:
        pDVar10 = (this->fields)._.childIdMap;
        if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
        bVar24 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                KogamaSettingWrapperBase]::
                Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                          ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                            *)pDVar10,StringLiteral_movable,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                          );
        if (bVar24 != 0) {
          pDVar10 = (this->fields)._.childIdMap;
          if (pDVar10 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
          Dictionary_2_System_Type_Pool__get_Item
                    ((Dictionary_2_System_Type_Pool_ *)pDVar10,(Type *)StringLiteral_movable,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                    );
          piVar36 = (int32_t *)func_?();
          uStack_21 = CONCAT44(*piVar36,(undefined4)uStack_21);
          MVGroup::MVGroup_GetChild((MVGroup *)this,*piVar36,(MethodInfo *)0x0);
          pMVar37 = (MVCubeModelInstance *)func_?();
          (this->fields)._CubeModel_k__BackingField = pMVar37;
          if (pMVar37 == (MVCubeModelInstance *)0x0) {
            args = (Object__Array *)func_?(TypeInfo__System__Object,5);
            unaff_ESI = (MVMovable *)0x0;
            if (args == (Object__Array *)0x0) goto code_?;
            func_?(args,StringLiteral_Movable_);
            func_?(0,StringLiteral_Movable_);
            iStack_38 = (this->fields)._._._._.id;
            uVar39 = func_?(TypeInfo__System__Int32,&iStack_38);
            func_?(args,uVar39);
            func_?(1,uVar39);
            func_?(args,StringLiteral__init___Could_not_find_child_);
            func_?(2,StringLiteral__init___Could_not_find_child_);
            uStack_40 = uStack_21._4_4_;
            uVar39 = func_?(TypeInfo__System__Int32,&uStack_40);
            func_?(args,uVar39);
            func_?(3,uVar39);
            func_?(args,StringLiteral__to_move__If_this_is_a_new_movab);
            func_?(4,StringLiteral__to_move__If_this_is_a_new_movab);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?(TypeInfo__System__String);
            }
            unaff_ESI = (MVMovable *)
                        mscorlib.dll::System::String::String_Concat_5(args,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Debug);
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)unaff_ESI,(MethodInfo *)0x0);
          }
        }
      }
    }
  } while( true );
}


/* Void RecalcTimeToEnd() */

void Assembly-CSharp.dll::MVMovable::MVMovable_RecalcTimeToEnd(MVMovable *this,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  puVar3 = (undefined8 *)
           (*(code *)(this->klass->vtable).get_WorldVelocity.method)
                     (auStack_4,this,this->klass[1]._0.image);
  uStack_2 = *puVar3;
  uStack_1 = *(undefined4 *)(puVar3 + 1);
  fVar5 = (float10)func_?(&uStack_2,0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).MoveableChildren;
  if (this_00 != (List_1_UnityEngine_Color32_ *)0x0) {
    item._4_4_ = MethodInfo__System__Collections__Generic__List<MVMovable>__Remove_MVMovable_;
    item.rgba = (int32_t)child;
    mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
    List_1_UnityEngine_Color32__Remove(this_00,item,unaff_EBP);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void SetAngularDirection(Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetAngularDirection
               (MVMovable *this,Vector3 angularDirection,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  vec = angularDirection;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).angularDirection.x = angularDirection.x;
  (this->fields).angularDirection.y = angularDirection.y;
  (this->fields).angularDirection.z = angularDirection.z;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    value = (Theme *)Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,StringLiteral_AngularDirection,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      keyPath = MVMovable_GetParamPath(this,StringLiteral_AngularDirection,(MethodInfo *)0x0);
      value_00 = (Object *)func_?();
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_01,(int32_t)worldObjectID,keyPath,value_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetAngularSpeed(Single, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetAngularSpeed
               (MVMovable *this,float angularSpeed,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).angularSpeed = angularSpeed;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    _updateWOData = angularSpeed;
    value = (Theme *)func_?(TypeInfo__System__Single,&updateWOData);
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,StringLiteral_AngularSpeed,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      keyPath = MVMovable_GetParamPath(this,StringLiteral_AngularSpeed,(MethodInfo *)0x0);
      _updateWOData = angularSpeed;
      value_00 = (Object *)func_?(TypeInfo__System__Single,&updateWOData);
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_01,(int32_t)worldObjectID,keyPath,value_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetDistance(Single, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetDistance
               (MVMovable *this,float distance,bool updateWOData,bool syncServer,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).distance = distance;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    _updateWOData = distance;
    value = (Theme *)func_?(TypeInfo__System__Single,&updateWOData);
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,StringLiteral_Distance,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      keyPath = MVMovable_GetParamPath(this,StringLiteral_Distance,(MethodInfo *)0x0);
      _updateWOData = distance;
      value_00 = (Object *)func_?(TypeInfo__System__Single,&updateWOData);
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_01,(int32_t)worldObjectID,keyPath,value_00,(MethodInfo *)0x0);
    }
  }
  MVMovable_RecalcTimeToEnd(this,(MethodInfo *)0x0);
  return;
}


/* Void SetOrgRotation(Quaternion, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetOrgRotation
               (MVMovable *this,Quaternion orgRotation,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).orgRotation.x = orgRotation.x;
  (this->fields).orgRotation.y = orgRotation.y;
  (this->fields).orgRotation.z = orgRotation.z;
  (this->fields).orgRotation.w = orgRotation.w;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    puVar1 = (undefined8 *)func_?(&puStack_2,&orgRotation,0);
    uVar3 = *puVar1;
    fVar4 = *(float *)(puVar1 + 1);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    vec.z = fVar4;
    vec.x = (float)(int)uVar3;
    vec.y = (float)(int)((ulonglong)uVar3 >> 0x20);
    value = (Theme *)Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,StringLiteral_Rotation,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      keyPath = MVMovable_GetParamPath(this,StringLiteral_Rotation,(MethodInfo *)0x0);
      puStack_2 = (undefined *)orgRotation.y;
      value_00 = (Object *)func_?();
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_01,(int32_t)worldObjectID,keyPath,value_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void SetParentMoverID(Int32, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetParentMoverID
               (MVMovable *this,int32_t parentMoverID,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_01 = TypeInfo__MVMovable___SetParentMoverID_c__AnonStorey0;
  this_02 = (ScaleAnimationBase *)func_?();
  pSVar1 = this_02;
  ScaleAnimationBase::ScaleAnimationBase_Play(this_02,0.0,(MethodInfo *)method_01);
  if (this_02 != (ScaleAnimationBase *)0x0) {
    (this_02->fields)._._._._.m_CachedPtr = (void *)parentMoverID;
    if ((this->fields).parentMoverID != parentMoverID) {
      this_06 = (MVMovable *)0x0;
      if (parentMoverID != -1) {
        this_02 = pSVar1;
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
          this_02 = pSVar1;
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_03 == (MVWorldObjectClientManager *)0x0) ||
           (pOVar2 = System.Core.dll::System::Linq::
                     Enumerable+<CreateSelectIterator>c__Iterator10`2[System::Collections::Generic::
                     KeyValuePair`2[System::Object,System::Object],System::Object]::
                     Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                               ((Enumerable_CreateSelectIterator_c_Iterator10_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_System_Object_
                                 *)this_03,(MethodInfo *)0x0), pOVar2 == (Object *)0x0))
        goto code_?;
        pIVar3 = (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)pOVar2[1].monitor;
        this_04 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                   *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (this_04,(Object *)this_02,
                   MethodInfo__MVMovable___SetParentMoverID_c__AnonStorey0____m__0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                   ,
                   MethodInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>__Func_System__Object__void__
                  );
        pIVar3 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_17
                           (pIVar3,(Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                                    *)this_04,
                            System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                           );
        System.Core.dll::System::Linq::Enumerable::Enumerable_FirstOrDefault_6
                  ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)pIVar3,
                   System__Collections__Generic__KeyValuePair<int,_MVMovable>_MethodInfo__System__Linq__Enumerable__FirstOrDefault<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_
                  );
        this_06 = (MVMovable *)func_?(&stack0xfffffff0);
        if (this_06 == (MVMovable *)0x0) {
          parentMoverID = (int32_t)(this_02->fields)._._._._.m_CachedPtr;
          pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&parentMoverID);
          if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__System__String->_1).cctor_started == 0)) {
            func_?(TypeInfo__System__String);
          }
          pSVar4 = mscorlib.dll::System::String::String_Concat
                             ((Object *)StringLiteral_Couldn_t_find_parent_,pOVar2,(MethodInfo *)0x0
                             );
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)pSVar4,(MethodInfo *)0x0);
          return;
        }
      }
      this_00 = (this->fields).parentMover;
      if (this_00 != (MVMovable *)0x0) {
        MVMovable_RemoveMovableChild(this_00,this,(MethodInfo *)0x0);
      }
      (this->fields).parentMoverID = (int32_t)(this_02->fields)._._._._.m_CachedPtr;
      (this->fields).parentMover = this_06;
      if (this_06 != (MVMovable *)0x0) {
        MVMovable_AddMovableChild(this_06,this,(MethodInfo *)0x0);
      }
    }
    if (updateWOData == 0) {
      return;
    }
    parentMoverID = (int32_t)(this_02->fields)._._._._.m_CachedPtr;
    this_01 = (this->fields)._.blueprintData;
    value = (Theme *)func_?(TypeInfo__System__Int32,&parentMoverID);
    if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_01,StringLiteral_ParentMoverID,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      if (syncServer == 0) {
        return;
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_05 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      method_00 = (MethodInfo *)
                  mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                  Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0)
      ;
      pSVar4 = MVMovable_GetParamPath(this,StringLiteral_ParentMoverID,method_00);
      parentMoverID = (int32_t)(this_02->fields)._._._._.m_CachedPtr;
      worldObjectID = &parentMoverID;
      pOVar2 = (Object *)func_?();
      if (this_05 != (MVNetworkGame_OperationRequests *)0x0) {
        MVNetworkGame+OperationRequests::
        MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                  (this_05,(int32_t)worldObjectID,pSVar4,pOVar2,(MethodInfo *)0x0);
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


/* Void SetVelocity(Vector3, Boolean, Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetVelocity
               (MVMovable *this,Vector3 velocity,bool updateWOData,bool syncServer,
               MethodInfo *method)

{
  vec = velocity;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).velocity.x = velocity.x;
  (this->fields).velocity.y = velocity.y;
  (this->fields).velocity.z = velocity.z;
  if (updateWOData != 0) {
    this_00 = (this->fields)._.blueprintData;
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    value = (Theme *)Extensions::Extensions_ToSerializeString(vec,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
      func_?(0);
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              ((Dictionary_2_System_String_Theme_ *)this_00,StringLiteral_Velocity,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if (syncServer != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
      worldObjectID =
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
      keyPath = MVMovable_GetParamPath(this,StringLiteral_Velocity,(MethodInfo *)0x0);
      value_00 = (Object *)func_?(TypeInfo__UnityEngine__Vector3,&stack0xfffffff0);
      if (this_01 == (MVNetworkGame_OperationRequests *)0x0) goto code_?;
      MVNetworkGame+OperationRequests::MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial
                (this_01,(int32_t)worldObjectID,keyPath,value_00,(MethodInfo *)0x0);
    }
  }
  MVMovable_RecalcTimeToEnd(this,(MethodInfo *)0x0);
  return;
}


/* Void SetVisible(Boolean) */

void Assembly-CSharp.dll::MVMovable::MVMovable_SetVisible
               (MVMovable *this,bool newVisible,MethodInfo *method)

{
  this_00 = (this->fields).movableVisualization;
  if (this_00 == (MovableVisualization *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  bVar2 = (this_00->fields).isVisible;
  if (newVisible == 0) {
    if (bVar2 != 0) {
      MovableVisualization::MovableVisualization_SetMeshRenderers
                (this_00,0,(this_00->fields).cmbClone,(MethodInfo *)0x0);
      return;
    }
  }
  else if ((bVar2 == 0) && ((this_00->fields).canBeVisible != 0)) {
    MovableVisualization::MovableVisualization_SetMeshRenderers
              (this_00,1,(this_00->fields).cmbClone,(MethodInfo *)0x0);
  }
  return;
}


/* Void SyncProperties() */

void Assembly-CSharp.dll::MVMovable::MVMovable_SyncProperties(MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_String_Theme_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_00,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
    Dictionary_2_System_String_Theme__set_Item
              (this_00,StringLiteral_BlueprintData,(Theme *)(this->fields)._.blueprintData,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_OperationRequests((MethodInfo *)0x0);
    mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
    Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this,(MethodInfo *)0x0);
    if (pMVar1 != (MVNetworkGame_OperationRequests *)0x0) {
      if (cRam_? == '\0') {
        pDStack2 = (Dictionary_2_System_Byte_System_Object___Class *)_UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      pDStack2 =
           TypeInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>;
      this_01 = (Dictionary_2_System_Byte_System_Object_ *)func_?();
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
                 MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Dictionary__
                );
      value = (Object *)func_?();
      if (this_01 != (Dictionary_2_System_Byte_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (this_01,0x16,value,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Byte,System::Object]::
        Dictionary_2_System_Byte_System_Object__Add
                  (this_01,0x12,(Object *)this_00,
                   MethodInfo__System__Collections__Generic__Dictionary<unsigned_char,_System::Object>__Add_unsigned_char__System__Object_
                  );
        pPVar3 = (pMVar1->fields).peer;
        if ((((uint)(TypeInfo__ExitGames__Client__Photon__SendOptions->vtable).Equals.methodPtr &
             0x2000000) != 0) &&
           ((TypeInfo__ExitGames__Client__Photon__SendOptions->_1).cctor_started == 0)) {
          pDStack2 =
               (Dictionary_2_System_Byte_System_Object___Class *)
               TypeInfo__ExitGames__Client__Photon__SendOptions;
          func_?();
        }
        if (pPVar3 != (PhotonPeer *)0x0) {
          pPVar4 = pPVar3->klass;
          pDStack2 = (Dictionary_2_System_Byte_System_Object___Class *)pPVar4[1]._0.image;
          (*(code *)(pPVar4->vtable).SendOperation.method)();
          return;
        }
      }
    }
  }
  pDStack2 = (Dictionary_2_System_Byte_System_Object___Class *)0x0;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVMovable() */

void Assembly-CSharp.dll::MVMovable::MVMovable__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MVMovable>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<MVMovable>__List__);
  (this->fields).MoveableChildren = (List_1_MVMovable_ *)this_00;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  (this->fields).localPos.x = pVVar1->x;
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
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  VStack_1.y = (this->fields).angularDirection.x;
  VStack_1.z = (this->fields).angularDirection.y;
  fVar2 = (this->fields).angularSpeed;
  fVar3 = (this->fields).angularDirection.z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = fVar3;
  a.x = VStack_1.y;
  a.y = VStack_1.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&VStack_1,a,fVar2,(MethodInfo *)0x0);
  fVar3 = pVVar4->y;
  fVar2 = pVVar4->z;
  __return_storage_ptr__->x = pVVar4->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Int32 get_CubeModelID() */

int32_t Assembly-CSharp.dll::MVMovable::MVMovable_get_CubeModelID
                  (MVMovable *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._CubeModel_k__BackingField;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    return (pMVar1->fields)._._._.id;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}


/* Single get_Distance() */

float Assembly-CSharp.dll::MVMovable::MVMovable_get_Distance(MVMovable *this,MethodInfo *method)

{
  return (this->fields).distance;
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
  pMVar1 = (this->fields).movableVisualization;
  if (pMVar1 == (MovableVisualization *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((pMVar1->fields).isVisible == 0) {
    return 0;
  }
  return (pMVar1->fields).canBeVisible != 0;
}


/* Vector3 get_WorldVelocity() */

Vector3 * Assembly-CSharp.dll::MVMovable::MVMovable_get_WorldVelocity
                    (Vector3 *__return_storage_ptr__,MVMovable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = PrefabPool::PrefabPool_get_MVPointLightPrefab((PrefabPool *)this,(MethodInfo *)0x0);
  if (this_00 != (MVPointLightObject *)0x0) {
    pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localToWorldMatrix
                        ((Matrix4x4 *)&stack0xffffff6c,(Transform *)this_00,(MethodInfo *)0x0);
    fVar2 = pMVar1->m00;
    fVar3 = pMVar1->m10;
    fVar4 = pMVar1->m20;
    fVar5 = pMVar1->m30;
    fVar6 = pMVar1->m01;
    fVar7 = pMVar1->m11;
    fVar8 = pMVar1->m21;
    fVar9 = pMVar1->m31;
    fVar10 = pMVar1->m02;
    fVar11 = pMVar1->m12;
    fVar12 = pMVar1->m22;
    fVar13 = pMVar1->m32;
    fVar14 = pMVar1->m03;
    fVar15 = pMVar1->m13;
    fVar16 = pMVar1->m23;
    fVar17 = pMVar1->m33;
    fStack_18 = (this->fields).velocity.x;
    fStack_19 = (this->fields).velocity.y;
    fVar20 = (this->fields).velocity.z;
    if ((((uint)(TypeInfo__UnityEngine__Vector4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector4->_1).cctor_started == 0)) {
      func_?();
    }
    v.z = fVar20;
    v.x = fStack_18;
    v.y = fStack_19;
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit
                        ((Vector4 *)auStack_22,v,(MethodInfo *)0x0);
    auStack_22._0_4_ = pVVar21->x;
    auStack_22._4_4_ = pVVar21->y;
    fStack_18 = pVVar21->z;
    fStack_19 = pVVar21->w;
    if ((((uint)(TypeInfo__UnityEngine__Matrix4x4->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Matrix4x4->_1).cctor_started == 0)) {
      func_?();
    }
    lhs.m10 = fVar3;
    lhs.m00 = fVar2;
    lhs.m20 = fVar4;
    lhs.m30 = fVar5;
    lhs.m01 = fVar6;
    lhs.m11 = fVar7;
    lhs.m21 = fVar8;
    lhs.m31 = fVar9;
    lhs.m02 = fVar10;
    lhs.m12 = fVar11;
    lhs.m22 = fVar12;
    lhs.m32 = fVar13;
    lhs.m03 = fVar14;
    lhs.m13 = fVar15;
    lhs.m23 = fVar16;
    lhs.m33 = fVar17;
    vector.y = (float)auStack_22._4_4_;
    vector.x = (float)auStack_22._0_4_;
    vector.z = fStack_18;
    vector.w = fStack_19;
    pVVar21 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_op_Multiply_1
                        ((Vector4 *)&stack0xffffffdc,lhs,vector,(MethodInfo *)0x0);
    pVVar23 = UnityEngine.CoreModule.dll::UnityEngine::Vector4::Vector4_op_Implicit_1
                        ((Vector3 *)(auStack_22 + 4),*pVVar21,(MethodInfo *)0x0);
    fVar2 = pVVar23->y;
    fVar20 = pVVar23->z;
    __return_storage_ptr__->x = pVVar23->x;
    __return_storage_ptr__->y = fVar2;
    __return_storage_ptr__->z = fVar20;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pVVar23 = (Vector3 *)(*pcVar24)();
  return pVVar23;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).movableVisualization;
  (this->fields).isVisible = value;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
    MovableVisualization::MovableVisualization_set_Visible(pMVar1,value,(MethodInfo *)0x0);
  }
  return;
}

