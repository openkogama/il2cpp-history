
/* Void Awake() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Awake
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_2,10.0,(MethodInfo *)0x0);
  AVar3 = pOVar1->hiddenValue;
  pBVar4 = pOVar1->hiddenValueOld;
  fVar5 = pOVar1->fakeValue;
  bVar6 = pOVar1->inited;
  uVar7 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).speed.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).speed.hiddenValue = AVar3;
  (this->fields).speed.hiddenValueOld = pBVar4;
  (this->fields).speed.fakeValue = fVar5;
  (this->fields).speed.inited = bVar6;
  *(undefined3 *)&(this->fields).speed.field_0x11 = uVar7;
  func_?(&(this->fields).speed.hiddenValueOld,0);
  return;
}


/* Void DoRespawn() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_DoRespawn
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).clearEffectsBecauseOfReset != 0) {
    this_00 = (this->fields).GhostVisualization;
    if (this_00 == (AdvancedGhostVisualizaton *)0x0) goto code_?;
    AdvancedGhostVisualizaton::AdvancedGhostVisualizaton_PlayEffect
              (this_00,AdvancedGhostVisualizaton_Effect__Enum_None,0.0,(MethodInfo *)0x0);
  }
  pTStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
  pAVar2 = (this->fields).networkedValues;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (pAVar2 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    pFVar4 = (pAVar2->fields).patrolPattern;
    pOStack_5 = (ObscuredFloat__Class *)
                 WaitForTicks::WaitForTicks_GetEnvironmentTick
                           ((int)((float)((uint)fVar3 ^
                                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                         ) * _UNK_?),(MethodInfo *)0x0);
    pAVar6 = (pAVar2->fields).ghostBehaviour;
    if (pAVar6 != (AdvancedGhostBehaviour *)0x0) {
      iVar7 = (pAVar6->fields).speed.currentCryptoKey;
      AVar8 = (pAVar6->fields).speed.hiddenValue;
      pBVar9 = (pAVar6->fields).speed.hiddenValueOld;
      fVar3 = (pAVar6->fields).speed.fakeValue;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        pOStack_5 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
        func_?();
      }
      value.hiddenValue = AVar8;
      value.currentCryptoKey = iVar7;
      value.hiddenValueOld = pBVar9;
      value.fakeValue = fVar3;
      value.inited = (pAVar6->fields).speed.inited;
      value._17_3_ = *(undefined3 *)&(pAVar6->fields).speed.field_0x11;
      Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
      ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      pAVar6 = (pAVar2->fields).ghostBehaviour;
      if (pAVar6 != (AdvancedGhostBehaviour *)0x0) {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pAVar6,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                    (this_03,(MethodInfo *)0x0);
          if (pFVar4 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0
             ) {
            pVVar10 = (Vector3 *)
                     (*(pFVar4->fields)._._.invoke_impl)
                               (&stack0xffffffdc,(pFVar4->fields)._._.method_code,pOStack_5);
            if (pTStack_1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTStack_1,*pVVar10,(MethodInfo *)0x0);
              pAVar2 = (this->fields).networkedValues;
              if (pAVar2 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
                pVVar10 = &(pAVar2->fields).nextPosition;
                fVar11 = pVVar10->y;
                fVar3 = (pAVar2->fields).nextPosition.z;
                targetPos = *pVVar10;
                this_01 = (this->fields).advancedGhostMotor;
                (this->fields).nextPosition.x = pVVar10->x;
                (this->fields).nextPosition.y = fVar11;
                (this->fields).nextPosition.z = fVar3;
                pVVar10 = AdvancedGhostBehaviour_GetMoveVector
                                   ((Vector3 *)&stack0xffffffdc,this,targetPos,(MethodInfo *)0x0);
                fVar11 = pVVar10->x;
                fVar12 = pVVar10->y;
                fVar3 = pVVar10->z;
                if (this_01 != (AdvancedGhostMotor *)0x0) {
                  MVRigidBody::MVRigidBody_Reset((MVRigidBody *)this_01,(MethodInfo *)0x0);
                  (this_01->fields).velocity.x = fVar11;
                  (this_01->fields).velocity.y = fVar12;
                  (this_01->fields).velocity.z = fVar3;
                  this_02 = (this_01->fields).smoothPhysicsMovement;
                  if (this_02 != (SmoothPhysicsMovement *)0x0) {
                    SmoothPhysicsMovement::SmoothPhysicsMovement_Reset(this_02,(MethodInfo *)0x0);
                    (this->fields).respawn = 0;
                    (this->fields).clearEffectsBecauseOfReset = 0;
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
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void EditModeUpdateCulling() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_EditModeUpdateCulling
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_00 = (this->fields).cullingSubscriberBase;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
    if (this_00 != (CullingSubscriberBase *)0x0) {
      CullingSubscriberBase::CullingSubscriberBase_set_Position(this_00,*pVVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_FixedUpdate
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).advancedGhostMotor;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pVVar3 = AdvancedGhostBehaviour_GetMoveVector
                     ((Vector3 *)&stack0xfffffff0,this,(this->fields).nextPosition,(MethodInfo *)0x0
                     );
  pAVar1 = (this->fields).advancedGhostMotor;
  fVar4 = pVVar3->y;
  fVar5 = pVVar3->z;
  if (pAVar1 != (AdvancedGhostMotor *)0x0) {
    (pAVar1->fields)._MoveDirection_k__BackingField.x = pVVar3->x;
    (pAVar1->fields)._MoveDirection_k__BackingField.y = fVar4;
    (pAVar1->fields)._MoveDirection_k__BackingField.z = fVar5;
    pAVar1 = (this->fields).advancedGhostMotor;
    if (pAVar1 != (AdvancedGhostMotor *)0x0) {
      AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateFunction(pAVar1,(MethodInfo *)0x0);
      this_00 = (this->fields).GhostVisualization;
      if ((this_00 != (AdvancedGhostVisualizaton *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                              ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0
         )) {
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                GameObject_get_activeInHierarchy(this_01,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          pAVar1 = (this->fields).advancedGhostMotor;
          if (pAVar1 == (AdvancedGhostMotor *)0x0) goto code_?;
          AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateRotation(pAVar1,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Vector3 GetMoveVector(Vector3) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_GetMoveVector
                    (Vector3 *__return_storage_ptr__,AdvancedGhostBehaviour *this,Vector3 targetPos,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar2 = (pVVar1->upVector).x;
  uVar3 = (pVVar1->upVector).y;
  fVar4 = targetPos.y + (float)uVar3;
  fVar5 = targetPos.x + (float)uVar2;
  fVar6 = targetPos.z + (pVVar1->upVector).z;
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  end_01.y = fVar4;
  end_01.x = fVar5;
  start_00.y = targetPos.y;
  start_00.x = targetPos.x;
  start_00.z = targetPos.z;
  end_01.z = fVar6;
  color_01.g = (float)_UNK_?;
  color_01.r = (float)_UNK_?;
  color_01.b = _UNK_?;
  color_01.a = _UNK_?;
  fVar6 = targetPos.y;
  fVar4 = targetPos.x;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
            (start_00,end_01,color_01,0.3,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar7 = (pVVar1->rightVector).x;
  uVar8 = (pVVar1->rightVector).y;
  fVar9 = targetPos.y + (float)uVar8;
  fVar5 = targetPos.z + (pVVar1->rightVector).z;
  start_01.y = fVar6;
  start_01.x = targetPos.x;
  start_01.z = targetPos.z;
  end_02.y = fVar9;
  end_02.x = fVar4 + (float)uVar7;
  end_02.z = fVar5;
  color_02.g = (float)_UNK_?;
  color_02.r = (float)_UNK_?;
  color_02.b = _UNK_?;
  color_02.a = _UNK_?;
  fVar6 = _UNK_?;
  VStack_10.z = fVar5;
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
            (start_01,end_02,color_02,0.3,(MethodInfo *)0x0);
  pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (pTVar11 != (Transform *)0x0) {
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_10,pTVar11,(MethodInfo *)0x0);
    uVar13 = pVVar12->x;
    puVar14 = &UNK_?;
    pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar11 != (Transform *)0x0) {
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_15,pTVar11,(MethodInfo *)0x0);
      VStack_10.x = pVVar12->x;
      VStack_10.y = pVVar12->y;
      VStack_10.z = pVVar12->z;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_15.x = (pVVar1->upVector).x;
      VStack_15.y = (pVVar1->upVector).y;
      VStack_15.z = (pVVar1->upVector).z;
      VStack_10.z = VStack_15.z + VStack_10.z;
      start_02.y = (float)puVar14;
      start_02.x = (float)uVar13;
      start_02.z = VStack_10.z;
      end_03.y = VStack_15.y + VStack_10.y;
      end_03.x = VStack_15.x + VStack_10.x;
      end_03.z = VStack_10.z;
      color_03.g = (float)_UNK_?;
      color_03.r = (float)_UNK_?;
      color_03.b = (float)_UNK_?;
      color_03.a = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
                (start_02,end_03,color_03,0.3,(MethodInfo *)0x0);
      pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (pTVar11 != (Transform *)0x0) {
        pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_10,pTVar11,(MethodInfo *)0x0);
        uVar16 = pVVar12->x;
        uVar17 = pVVar12->y;
        fVar4 = pVVar12->z;
        pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (pTVar11 != (Transform *)0x0) {
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_10,pTVar11,(MethodInfo *)0x0);
          VStack_15.x = pVVar12->x;
          VStack_15.y = pVVar12->y;
          VStack_15.z = pVVar12->z;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
          VStack_10.x = (pVVar1->rightVector).x;
          VStack_10.y = (pVVar1->rightVector).y;
          VStack_10.z = (pVVar1->rightVector).z + VStack_15.z;
          start.y = (float)uVar17;
          start.x = (float)uVar16;
          start.z = fVar4;
          end.y = VStack_10.y + VStack_15.y;
          end.x = VStack_10.x + VStack_15.x;
          end.z = VStack_10.z;
          color.g = (float)_UNK_?;
          color.r = (float)_UNK_?;
          color.b = (float)_UNK_?;
          color.a = _UNK_?;
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
                    (start,end,color,0.3,(MethodInfo *)0x0);
          pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)this,(MethodInfo *)0x0);
          if (pTVar11 != (Transform *)0x0) {
            pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                (&VStack_10,pTVar11,(MethodInfo *)0x0);
            end_00.y = fVar5;
            end_00.x = fVar9;
            end_00.z = targetPos.z;
            color_00.g = (float)_UNK_?;
            color_00.r = (float)_UNK_?;
            color_00.b = (float)_UNK_?;
            color_00.a = _UNK_?;
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
                      (*pVVar12,end_00,color_00,0.3,(MethodInfo *)0x0);
            pTVar11 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)this,(MethodInfo *)0x0);
            if (pTVar11 != (Transform *)0x0) {
              pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_15,pTVar11,(MethodInfo *)0x0);
              VStack_10.x = pVVar12->x;
              VStack_10.y = pVVar12->y;
              VStack_10.z = pVVar12->z;
              fVar6 = fVar6 - VStack_10.x;
              fVar4 = targetPos.y - VStack_10.y;
              fVar5 = targetPos.z - VStack_10.z;
              fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                                 ((MethodInfo *)0x0);
              VStack_10.z = fVar5 / fVar9;
              __return_storage_ptr__->x = fVar6 / fVar9;
              __return_storage_ptr__->y = fVar4 / fVar9;
              __return_storage_ptr__->z = VStack_10.z;
              fVar18 = (float10)func_?();
              uVar13 = *(undefined4 *)&(this->fields).speed.inited;
              iVar19 = (this->fields).speed.currentCryptoKey;
              AVar20 = (this->fields).speed.hiddenValue;
              pBVar21 = (this->fields).speed.hiddenValueOld;
              fVar4 = (this->fields).speed.fakeValue;
              fVar6 = (float)fVar18;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              value.hiddenValue = AVar20;
              value.currentCryptoKey = iVar19;
              value.hiddenValueOld = pBVar21;
              value.fakeValue = fVar4;
              value._16_4_ = uVar13;
              fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                       ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
              if (fVar4 < fVar6) {
                puVar22 = (undefined8 *)func_?();
                VStack_10._0_8_ = *puVar22;
                VStack_10.z = *(float *)(puVar22 + 1);
                iVar19 = (this->fields).speed.currentCryptoKey;
                AVar20 = (this->fields).speed.hiddenValue;
                pBVar21 = (this->fields).speed.hiddenValueOld;
                fVar6 = (this->fields).speed.fakeValue;
                if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
                    cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                value_00.hiddenValue = AVar20;
                value_00.currentCryptoKey = iVar19;
                value_00.hiddenValueOld = pBVar21;
                value_00.fakeValue = fVar6;
                value_00.inited = (this->fields).speed.inited;
                value_00._17_3_ = *(undefined3 *)&(this->fields).speed.field_0x11;
                fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredFloat::ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
                __return_storage_ptr__->x = VStack_10.x * fVar6;
                __return_storage_ptr__->y = VStack_10.y * fVar6;
                __return_storage_ptr__->z = VStack_10.z * fVar6;
              }
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar23 = (code *)swi(3);
  pVVar12 = (Vector3 *)(*pcVar23)();
  return pVVar12;
}


/* Void Init(MVCubeModelBase, AdvancedGhostMotor, Func`1[Boolean], Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Init
               (AdvancedGhostBehaviour *this,MVCubeModelBase *body,
               AdvancedGhostMotor *advancedGhostMotor,Func_1_Boolean_ *deathCheckFunc,int32_t woID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdvancedGhostBehaviour__AdvancedGhostPerception);
    func_?(&TypeInfo__AdvancedGhostBehaviour__NetworkedValues);
    cRam_? = '\x01';
  }
  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)this,(MethodInfo *)0x0);
  if (pTVar1 != (Transform *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_GetParent
                       (pTVar1,(MethodInfo *)0x0);
    (this->fields).transformParent = pTVar1;
    func_?(&(this->fields).transformParent,pTVar1);
    value = (AdvancedGhostBehaviour_AdvancedGhostPerception *)
            func_?(TypeInfo__AdvancedGhostBehaviour__AdvancedGhostPerception);
    pAVar2 = value;
    if (cRam_? == '\0') {
      func_?();
      func_?(&TypeInfo__OptimizedPerception);
      cRam_? = '\x01';
    }
    (value->fields).alliedTeam = 4;
    (value->fields).currentWoID = -1;
    (value->fields).perceptionIntervalMilliseconds = 1000;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)value,ExceptionArgument__Enum_obj,in_stack_3);
    (value->fields).ghostBehaviour = this;
    func_?(&(value->fields).ghostBehaviour);
    this_00 = (OptimizedPerception *)func_?(TypeInfo__OptimizedPerception);
    OptimizedPerception::OptimizedPerception__ctor(this_00,(MethodInfo *)0x0);
    (value->fields).perception = this_00;
    func_?(&(value->fields).perception,this_00);
    range = (value->fields).perceptionIntervalMilliseconds;
    this_01 = (DeterministicSyncedInterval *)func_?(TypeInfo__DeterministicSyncedInterval);
    DeterministicSyncedInterval::DeterministicSyncedInterval__ctor
              (this_01,woID,range,(MethodInfo *)0x0);
    (pAVar2->fields).syncedInterval = this_01;
    func_?(&(pAVar2->fields).syncedInterval,this_01);
    (this->fields).perception = pAVar2;
    func_?();
    this_02 = (AdvancedGhostBehaviour_NetworkedValues *)func_?();
    if (cRam_? == '\0') {
      func_?();
      func_?();
      cRam_? = '\x01';
    }
    (this_02->fields).minLookDeltaOffset = 0.1;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
              ((Object *)this_02,ExceptionArgument__Enum_obj,(MethodInfo *)advancedGhostMotor);
    (this_02->fields).ghostBehaviour = this;
    func_?();
    this_03 = (Func_5_Int32_Single_Single_Object_UnityEngine_Vector3_ *)func_?();
    mscorlib.dll::System::Func`5[Int32,Single,Single,Object,UnityEngine::Vector3]::
    Func_5_Int32_Single_Single_Object_UnityEngine_Vector3___ctor
              (this_03,(Object *)this_02,
               MethodInfo__AdvancedGhostBehaviour__NetworkedValues__EaseInEaseOutBackAndForward_int__float__float__UnityEngine__Transform_
               ,(MethodInfo *)0x0);
    (this_02->fields).patrolPattern =
         (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)this_03;
    func_?();
    AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_Update
              (this_02,(MethodInfo *)0x0);
    (this->fields).networkedValues = this_02;
    func_?();
    pAVar4 = (this->fields).networkedValues;
    if (pAVar4 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
      fVar5 = (pAVar4->fields).nextPosition.y;
      fVar6 = (pAVar4->fields).nextPosition.z;
      (this->fields).nextPosition.x = (pAVar4->fields).nextPosition.x;
      (this->fields).nextPosition.y = fVar5;
      (this->fields).nextPosition.z = fVar6;
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)this,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar1,(this->fields).nextPosition,(MethodInfo *)0x0);
        (this->fields).advancedGhostMotor = advancedGhostMotor;
        func_?(&(this->fields).advancedGhostMotor,advancedGhostMotor);
        (this->fields).deathCheckFunc = deathCheckFunc;
        func_?(&(this->fields).deathCheckFunc,deathCheckFunc);
        AdvancedGhostBehaviour_InitBody(this,(MVCubeModelBase *)this,(MethodInfo *)0x0);
        AdvancedGhostBehaviour_SetInitialState(this,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__AdvancedGhostBehaviour__OnStateChange_UnityEngine__CullingGroupEvent_
                         );
          func_?(&TypeInfo__CullingSubscriberBase);
          func_?(&
                          TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                         );
          cRam_? = '\x01';
        }
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             ((Vector3 *)&stack0xffffffe8,pTVar1,(MethodInfo *)0x0);
          uVar8 = pVVar7->x;
          uVar9 = pVVar7->y;
          fVar6 = pVVar7->z;
          this_04 = (UnityAction_1_UnityEngine_Vector2_ *)
                    func_?(
                                   TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                                   );
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
          UnityAction_1_UnityEngine_Vector2___ctor
                    (this_04,(Object *)&(this_02->fields).ghostBehaviour,
                     MethodInfo__AdvancedGhostBehaviour__OnStateChange_UnityEngine__CullingGroupEvent_
                     ,(MethodInfo *)0x0);
          pFVar10 = (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)
                   func_?(TypeInfo__CullingSubscriberBase);
          position.y = (float)uVar9;
          position.x = (float)uVar8;
          position.z = fVar6;
          CullingSubscriberBase::CullingSubscriberBase__ctor_2
                    ((CullingSubscriberBase *)pFVar10,4.0,position,
                     (UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_04,(MethodInfo *)0x0);
          (this_02->fields).patrolPattern = pFVar10;
          func_?();
          pFVar10 = (this_02->fields).patrolPattern;
          if (pFVar10 != (Func_5_Int32_Single_Single_UnityEngine_Transform_UnityEngine_Vector3_ *)0x0
             ) {
            (pFVar10->fields)._._.invoke_impl = (void *)0x3;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void InitBody(MVCubeModelBase) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_InitBody
               (AdvancedGhostBehaviour *this,MVCubeModelBase *body,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    AdvancedGhostBodyRotateWeapon_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostBodyRotateWeapon>__
                   );
    func_?(&GhostBody_MethodInfo__UnityEngine__GameObject__AddComponent<GhostBody>__);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  if (body != (MVCubeModelBase *)0x0) {
    pGVar1 = (body->fields)._.gameObject;
    layer = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                      (StringLiteral_Player,(MethodInfo *)0x0);
    LayerUtil::LayerUtil_SetLayerRecursively_4(pGVar1,layer,(MethodInfo *)0x0);
    pGVar1 = (body->fields)._.gameObject;
    pAVar2 = (this->fields).GhostVisualization;
    if (pGVar1 != (GameObject *)0x0) {
      pGVar3 = (GhostBody *)
               UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (pGVar1,
                          GhostBody_MethodInfo__UnityEngine__GameObject__AddComponent<GhostBody>__);
      if (pAVar2 != (AdvancedGhostVisualizaton *)0x0) {
        (pAVar2->fields).ghostBody = pGVar3;
        func_?();
        pGVar1 = (body->fields)._.gameObject;
        if (pGVar1 != (GameObject *)0x0) {
          pAVar4 = (AdvancedGhostBodyRotateWeapon *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                             (pGVar1,
                              AdvancedGhostBodyRotateWeapon_MethodInfo__UnityEngine__GameObject__AddComponent<AdvancedGhostBodyRotateWeapon>__
                             );
          (this->fields).weapon = pAVar4;
          func_?(&(this->fields).weapon,pAVar4);
          pAVar2 = (this->fields).GhostVisualization;
          if (pAVar2 != (AdvancedGhostVisualizaton *)0x0) {
            pAVar4 = (this->fields).weapon;
            pAVar5 = (pAVar2->fields).weaponHitSound;
            if (pAVar4 != (AdvancedGhostBodyRotateWeapon *)0x0) {
              if (cRam_? == '\0') {
                func_?(&TypeInfo__System__Action<CubeModelChangedEventArgs>);
                func_?(&
                                MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                               );
                cRam_? = '\x01';
              }
              (pAVar4->fields).weaponHitSound = pAVar5;
              func_?(&(pAVar4->fields).weaponHitSound,pAVar5);
              pAVar6 = (body->fields).Changed;
              this_00 = (DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_
                         *)func_?(TypeInfo__System__Action<CubeModelChangedEventArgs>);
              DictionaryWithChangeEvent`2[TKey,TValue]+OnDictionaryChangeDelegate[Unity::IL2CPP::
              Metadata::__Il2CppFullySharedGenericType,Unity::IL2CPP::Metadata::
              __Il2CppFullySharedGenericType]::
              DictionaryWithChangeEvent_2_TKey_TValue_OnDictionaryChangeDelegate_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
                        (this_00,(Object *)pAVar4,
                         MethodInfo__AdvancedGhostBodyRotateWeapon__body_Changed_CubeModelChangedEventArgs_
                         ,(MethodInfo *)0x0);
              pDVar7 = mscorlib.dll::System::Delegate::Delegate_Combine
                                 ((Delegate *)pAVar6,(Delegate *)this_00,(MethodInfo *)0x0);
              if (pDVar7 == (Delegate *)0x0) {
                (body->fields).Changed = (Action_1_CubeModelChangedEventArgs_ *)0x0;
                pAVar4 = (AdvancedGhostBodyRotateWeapon *)0x0;
code_?:
                func_?();
                AdvancedGhostBodyRotateWeapon::AdvancedGhostBodyRotateWeapon_SetupWeaponCollision
                          (pAVar4,(MethodInfo *)0x0);
                return;
              }
              pAVar6 = (Action_1_CubeModelChangedEventArgs_ *)func_?();
              if (pAVar6 != (Action_1_CubeModelChangedEventArgs_ *)0x0) {
                (body->fields).Changed = pAVar6;
                pAVar4 = (AdvancedGhostBodyRotateWeapon *)func_?();
                if (pAVar4 != (AdvancedGhostBodyRotateWeapon *)0x0) goto code_?;
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_OnDestroy
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).cullingSubscriberBase != (CullingSubscriberBase *)0x0) {
    CullingSubscriberBase::CullingSubscriberBase_Destroy
              ((this->fields).cullingSubscriberBase,(MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = (CullingSubscriberBase *)0x0;
    func_?(&(this->fields).cullingSubscriberBase,0);
  }
  return;
}


/* Void OnStateChange(CullingGroupEvent) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_OnStateChange
               (AdvancedGhostBehaviour *this,CullingGroupEvent cullingGroupEvent,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CullingApiWrapper);
    cRam_? = '\x01';
  }
  uVar1 = cullingGroupEvent._4_4_;
  iVar2 = cullingGroupEvent.m_Index;
  pCVar3 = (this->fields).cullingSubscriberBase;
  (this->fields).behaviourOnlyEnabled = 0;
  (this->fields).allVisible = 0;
  if (pCVar3 != (CullingSubscriberBase *)0x0) {
    distanceBandIndex = (pCVar3->fields)._DistanceBandIndex_k__BackingField;
    if ((TypeInfo__CullingApiWrapper->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CullingApiWrapper);
    }
    uVar4 = cullingGroupEvent._4_4_;
    cullingGroupEvent.m_PrevState = (uint8_t)uVar1;
    cullingGroupEvent.m_ThisState = SUB41(uVar1,1);
    cullingGroupEvent._6_2_ = SUB42(uVar1,2);
    cullingGroupEvent_00.m_PrevState = cullingGroupEvent.m_PrevState;
    cullingGroupEvent_00.m_ThisState = cullingGroupEvent.m_ThisState;
    cullingGroupEvent_00._6_2_ = cullingGroupEvent._6_2_;
    cullingGroupEvent_00.m_Index = iVar2;
    cullingGroupEvent._4_4_ = uVar4;
    bVar5 = CullingApiWrapper::CullingApiWrapper_Visible
                      (cullingGroupEvent_00,distanceBandIndex,(MethodInfo *)0x0);
    (this->fields).allVisible = bVar5;
    cullingGroupEvent_01.m_PrevState = cullingGroupEvent.m_PrevState;
    cullingGroupEvent_01.m_ThisState = cullingGroupEvent.m_ThisState;
    cullingGroupEvent_01._6_2_ = cullingGroupEvent._6_2_;
    cullingGroupEvent_01.m_Index = cullingGroupEvent.m_Index;
    bVar5 = CullingApiWrapper::CullingApiWrapper_Visible(cullingGroupEvent_01,3,(MethodInfo *)0x0);
    (this->fields).behaviourOnlyEnabled = bVar5;
    iVar2 = UnityEngine.CoreModule.dll::UnityEngine::CullingGroupEvent::
            CullingGroupEvent_get_currentDistance(&cullingGroupEvent,(MethodInfo *)0x0);
    if (iVar2 < 4) {
      (this->fields).behaviourOnlyEnabled = 1;
    }
    if ((this->fields).lives == 0) {
      cVar6 = '\x01';
    }
    else {
      pFVar7 = (this->fields).deathCheckFunc;
      if (pFVar7 == (Func_1_Boolean_ *)0x0) goto code_?;
      cVar6 = (*(pFVar7->fields)._._.invoke_impl)();
    }
    this_00 = (this->fields).GhostVisualization;
    if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
      pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      if (((this->fields).allVisible == 0) || ((this->fields).wantsVisible == 0)) {
        value = false;
      }
      else {
        value = cVar6 == '\0';
      }
      if (pGVar8 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar8,value,(MethodInfo *)0x0);
        pGVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if (pGVar8 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (pGVar8,(this->fields).behaviourOnlyEnabled != 0 && cVar6 == '\0',
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ReceivedDamage() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_ReceivedDamage
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_00 = (this->fields).GhostVisualization;
  if ((this_00 != (AdvancedGhostVisualizaton *)0x0) &&
     (this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_03 != (GameObject *)0x0)) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_03,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return;
    }
    this_01 = (this_00->fields).receiveDamage;
    if (this_01 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (this_01,(MethodInfo *)0x0);
      this_02 = (this_00->fields).blinker;
      if (this_02 != (AdvancedGhostBlinker *)0x0) {
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_02,BlinkType__Enum_Damage,1.3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ReceivedHealing() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_ReceivedHealing
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  this_00 = (this->fields).GhostVisualization;
  if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_02,(MethodInfo *)0x0);
      if (bVar1 != 0) {
        this_01 = (this_00->fields).blinker;
        if (this_01 == (AdvancedGhostBlinker *)0x0) goto code_?;
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_01,BlinkType__Enum_Healing,1.3,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Reset
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AdvancedGhostBehaviour__Idle);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  (this->fields).respawn = 1;
  handle = TypeRef__AdvancedGhostBehaviour__Idle;
  (this->fields).clearEffectsBecauseOfReset = 1;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  AdvancedGhostBehaviour_SetCurrentState(this,type,(MethodInfo *)0x0);
  AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
  (this->fields).lives = (this->fields).maxLives;
  return;
}


/* Void SetCurrentState(Type) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetCurrentState
               (AdvancedGhostBehaviour *this,Type *type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
    cRam_? = '\x01';
  }
  if ((this->fields).currentState != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    func_?(2,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,
                    (this->fields).currentState,this);
  }
  pOVar1 = mscorlib.dll::System::Activator::Activator_CreateInstance_4(type,(MethodInfo *)0x0);
  pAVar2 = TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState;
  if (pOVar1 == (Object *)0x0) {
    func_?();
  }
  else {
    pAVar3 = (AdvancedGhostBehaviour_IGhostBehaviourState *)
             func_?(pOVar1,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
    if (pAVar3 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
      func_?(0,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,pAVar3,this);
      (this->fields).currentState = pAVar3;
      func_?(&(this->fields).currentState,pAVar3);
      return;
    }
  }
  func_?(pOVar1,pAVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void SetGameMode(Boolean) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetGameMode
               (AdvancedGhostBehaviour *this,bool isPlayMode,MethodInfo *method)

{
  if (isPlayMode == 0) {
    (this->fields).wantsVisible = 0;
    AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
    return;
  }
  AdvancedGhostBehaviour_SetInitialState(this,(MethodInfo *)0x0);
  pAVar1 = (this->fields).perception;
  if ((pAVar1 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) &&
     (this_00 = (pAVar1->fields).syncedInterval, this_00 != (DeterministicSyncedInterval *)0x0)) {
    DeterministicSyncedInterval::DeterministicSyncedInterval_Update(this_00,(MethodInfo *)0x0);
    (this->fields).wantsVisible = 1;
    AdvancedGhostBehaviour_SetVisible(this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetInitialState() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetInitialState
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeRef__AdvancedGhostBehaviour__Dead);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  if ((this->fields).lives != 0) {
    pFVar1 = (this->fields).deathCheckFunc;
    if (pFVar1 == (Func_1_Boolean_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar3 = (*(pFVar1->fields)._._.invoke_impl)
                      ((pFVar1->fields)._._.method_code,(pFVar1->fields)._._.method);
    if (cVar3 == '\0') {
      AdvancedGhostBehaviour_Reset(this,(MethodInfo *)0x0);
      return;
    }
  }
  handle = TypeRef__AdvancedGhostBehaviour__Dead;
  if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Type);
  }
  type = mscorlib.dll::System::Type::Type_GetTypeFromHandle
                   ((RuntimeTypeHandle)handle,(MethodInfo *)0x0);
  AdvancedGhostBehaviour_SetCurrentState(this,type,(MethodInfo *)0x0);
  return;
}


/* Void SetVisible() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetVisible
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if ((this->fields).lives == 0) {
    cVar1 = '\x01';
  }
  else {
    pFVar2 = (this->fields).deathCheckFunc;
    if (pFVar2 == (Func_1_Boolean_ *)0x0) goto code_?;
    cVar1 = (*(pFVar2->fields)._._.invoke_impl)
                      ((pFVar2->fields)._._.method_code,(pFVar2->fields)._._.method);
  }
  this_00 = (this->fields).GhostVisualization;
  if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    if (((this->fields).allVisible == 0) || ((this->fields).wantsVisible == 0)) {
      value = false;
    }
    else {
      value = cVar1 == '\0';
    }
    if (pGVar3 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (pGVar3,value,(MethodInfo *)0x0);
      pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if (pGVar3 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar3,(this->fields).behaviourOnlyEnabled != 0 && cVar1 == '\0',
                   (MethodInfo *)0x0);
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


/* Void SetupCulling() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_SetupCulling
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__AdvancedGhostBehaviour__OnStateChange_UnityEngine__CullingGroupEvent_
                   );
    func_?(&TypeInfo__CullingSubscriberBase);
    func_?(&TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    uVar2 = pVVar1->x;
    uVar3 = pVVar1->y;
    fVar4 = pVVar1->z;
    this_01 = (UnityAction_1_UnityEngine_Vector2_ *)
              func_?(
                             TypeInfo__UnityEngine__Events__UnityAction<UnityEngine::CullingGroupEvent>
                             );
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Vector2]::
    UnityAction_1_UnityEngine_Vector2___ctor
              (this_01,(Object *)this,
               MethodInfo__AdvancedGhostBehaviour__OnStateChange_UnityEngine__CullingGroupEvent_,
               (MethodInfo *)0x0);
    pCVar5 = (CullingSubscriberBase *)func_?(TypeInfo__CullingSubscriberBase);
    position.y = (float)uVar3;
    position.x = (float)uVar2;
    position.z = fVar4;
    CullingSubscriberBase::CullingSubscriberBase__ctor_2
              (pCVar5,4.0,position,(UnityAction_1_UnityEngine_CullingGroupEvent_ *)this_01,
               (MethodInfo *)0x0);
    (this->fields).cullingSubscriberBase = pCVar5;
    func_?();
    pCVar5 = (this->fields).cullingSubscriberBase;
    if (pCVar5 != (CullingSubscriberBase *)0x0) {
      (pCVar5->fields)._DistanceBandIndex_k__BackingField = 3;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_Update
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  pAVar1 = this;
  if ((this->fields).perception == (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    return;
  }
  pAVar2 = (this->fields).perception;
  this_00 = (pAVar2->fields).syncedInterval;
  if (this_00 == (DeterministicSyncedInterval *)0x0) goto code_?;
  bVar3 = DeterministicSyncedInterval::DeterministicSyncedInterval_Update
                     (this_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pAVar4 = (pAVar2->fields).ghostBehaviour;
    if ((pAVar4 == (AdvancedGhostBehaviour *)0x0) ||
       (pAVar5 = (pAVar4->fields).networkedValues,
       pAVar5 == (AdvancedGhostBehaviour_NetworkedValues *)0x0)) goto code_?;
    this_01 = (pAVar2->fields).perception;
    if (this_01 == (OptimizedPerception *)0x0) goto code_?;
    OptimizedPerception::OptimizedPerception_Update
              (this_01,(pAVar5->fields).nextPosition,
               (((pAVar2->fields).ghostBehaviour)->fields).perceptionRadius,(MethodInfo *)0x0);
  }
  pAVar5 = (this->fields).networkedValues;
  if (pAVar5 != (AdvancedGhostBehaviour_NetworkedValues *)0x0) {
    AdvancedGhostBehaviour+NetworkedValues::AdvancedGhostBehaviour_NetworkedValues_Update
              (pAVar5,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      this = (AdvancedGhostBehaviour *)&TypeInfo__System__Type;
      func_?();
      cRam_? = '\x01';
    }
    pAVar6 = (pAVar1->fields).currentState;
    if (pAVar6 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
      pAVar7 = pAVar6->klass;
      uVar8 = 0;
      uVar9._0_1_ = (pAVar7->_1).rank;
      uVar9._1_1_ = (pAVar7->_1).minimumAlignment;
      if (uVar9 != 0) {
        do {
          if (pAVar7->interfaceOffsets[uVar8].interfaceType ==
              (Il2CppClass *)TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState) {
            ppMVar10 = &(&(pAVar6->klass->vtable).Update)
                        [pAVar6->klass->interfaceOffsets[uVar8].offset].method;
            goto code_?;
          }
          uVar8 = uVar8 + 1;
          pAVar1 = this;
        } while (uVar8 < uVar9);
      }
      this = pAVar1;
      ppMVar10 = (MethodInfo **)
                 func_?(pAVar6,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
code_?:
      right = (XNamespace *)(*(code *)*ppMVar10)(pAVar6,this);
      this_02 = (Object *)(this->fields).currentState;
      if (this_02 != (Object *)0x0) {
        left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(this_02,(MethodInfo *)0x0)
        ;
        if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Type);
        }
        bVar3 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                           (left,right,(MethodInfo *)0x0);
        if (bVar3 != 0) {
          AdvancedGhostBehaviour_SetCurrentState(this,(Type *)right,(MethodInfo *)0x0);
        }
        pAVar11 = (this->fields).advancedGhostMotor;
        if ((pAVar11 != (AdvancedGhostMotor *)0x0) &&
           (this_03 = (pAVar11->fields).smoothPhysicsMovement,
           this_03 != (SmoothPhysicsMovement *)0x0)) {
          SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove(this_03,(MethodInfo *)0x0);
          if ((this->fields).respawn == 0) {
            return;
          }
          AdvancedGhostBehaviour_DoRespawn(this,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateBehaviourState() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_UpdateBehaviourState
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState);
    func_?(&TypeInfo__System__Type);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).currentState;
  if (pAVar1 != (AdvancedGhostBehaviour_IGhostBehaviourState *)0x0) {
    pAVar2 = pAVar1->klass;
    uVar3 = 0;
    uVar4._0_1_ = (pAVar2->_1).rank;
    uVar4._1_1_ = (pAVar2->_1).minimumAlignment;
    uVar5 = 0;
    pAVar6 = pAVar1;
    if (uVar4 != 0) {
      do {
        if (pAVar2->interfaceOffsets[uVar3].interfaceType ==
            (Il2CppClass *)TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState) {
          ppMVar7 = &(&(pAVar1->klass->vtable).Update)
                     [pAVar1->klass->interfaceOffsets[uVar3].offset].method;
          goto code_?;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < uVar4);
    }
    ppMVar7 = (MethodInfo **)
              func_?(pAVar1,TypeInfo__AdvancedGhostBehaviour__IGhostBehaviourState,1);
code_?:
    right = (XNamespace *)(*(code *)*ppMVar7)(pAVar1,this,ppMVar7[1]);
    this_00 = (Object *)(this->fields).currentState;
    if (this_00 != (Object *)0x0) {
      left = (XNamespace *)mscorlib.dll::System::Object::Object_GetType(this_00,(MethodInfo *)0x0);
      if ((TypeInfo__System__Type->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__System__Type,pAVar6,pAVar2,uVar5);
      }
      bVar8 = System.Xml.Linq.dll::System::Xml::Linq::XNamespace::XNamespace_op_Inequality
                        (left,right,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        AdvancedGhostBehaviour_SetCurrentState(this,(Type *)right,(MethodInfo *)0x0);
      }
      return;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void UpdatePositionAndRotation() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_UpdatePositionAndRotation
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  pVVar1 = AdvancedGhostBehaviour_GetMoveVector
                     (&VStack_2,this,(this->fields).nextPosition,(MethodInfo *)0x0);
  pAVar3 = (this->fields).advancedGhostMotor;
  fVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  if (pAVar3 != (AdvancedGhostMotor *)0x0) {
    (pAVar3->fields)._MoveDirection_k__BackingField.x = pVVar1->x;
    (pAVar3->fields)._MoveDirection_k__BackingField.y = fVar4;
    (pAVar3->fields)._MoveDirection_k__BackingField.z = fVar5;
    pAVar3 = (this->fields).advancedGhostMotor;
    if (pAVar3 != (AdvancedGhostMotor *)0x0) {
      VStack_2.z = (float)&UNK_?;
      AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateFunction(pAVar3,(MethodInfo *)0x0);
      this_00 = (this->fields).GhostVisualization;
      if (this_00 != (AdvancedGhostVisualizaton *)0x0) {
        this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_00,(MethodInfo *)0x0);
        if (this_01 != (GameObject *)0x0) {
          bVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(this_01,(MethodInfo *)0x0);
          if (bVar6 != 0) {
            pAVar3 = (this->fields).advancedGhostMotor;
            if (pAVar3 == (AdvancedGhostMotor *)0x0) goto code_?;
            AdvancedGhostMotor::AdvancedGhostMotor_FixedUpdateRotation(pAVar3,(MethodInfo *)0x0);
          }
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


/* AdvancedGhostBehaviour() */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour__ctor
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  (this->fields).lives = -1;
  (this->fields).maxLives = -1;
  (this->fields).radius = 10.0;
  (this->fields).perceptionRadius = 15.0;
  (this->fields).minPerceptionRadius = 15.0;
  (this->fields).speedPerceptionFactor = 0.3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}


/* Boolean get_IsDead() */

bool Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_IsDead
               (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  if ((this->fields).lives == 0) {
    return 1;
  }
  pFVar2 = (this->fields).deathCheckFunc;
  if (pFVar2 != (Func_1_Boolean_ *)0x0) {
    puStack_1 = (pFVar2->fields)._._.method;
    pvStack_3 = (pFVar2->fields)._._.method_code;
    bVar4 = (*(pFVar2->fields)._._.invoke_impl)();
    return bVar4;
  }
  uVar5 = func_?(&puStack_6);
  func_?(uVar5);
  pcVar7 = (code *)swi(3);
  bVar4 = (*pcVar7)();
  return bVar4;
}


/* Single get_RoamRadius() */

float Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_RoamRadius
                (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  return (this->fields).perceptionRadius + (this->fields).radius;
}


/* MVTeam get_Team() */

MVTeam__Enum
Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_get_Team
          (AdvancedGhostBehaviour *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).perception;
  if (pAVar2 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    return (pAVar2->fields).alliedTeam;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  MVar6 = (*pcVar5)();
  return MVar6;
}


/* Void set_Lives(Int32) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Lives
               (AdvancedGhostBehaviour *this,int32_t value,MethodInfo *method)

{
  (this->fields).lives = value;
  (this->fields).maxLives = value;
  return;
}


/* Void set_Speed(Single) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Speed
               (AdvancedGhostBehaviour *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,value,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).speed.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).speed.hiddenValue = AVar2;
  (this->fields).speed.hiddenValueOld = pBVar3;
  (this->fields).speed.fakeValue = fVar4;
  (this->fields).speed.inited = bVar5;
  *(undefined3 *)&(this->fields).speed.field_0x11 = uVar6;
  func_?(&(this->fields).speed.hiddenValueOld,0);
  fVar4 = (this->fields).minPerceptionRadius;
  fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1((this->fields).speed,(MethodInfo *)0x0);
  (this->fields).perceptionRadius = fVar7 * (this->fields).speedPerceptionFactor + fVar4;
  return;
}


/* Void set_Team(MVTeam) */

void Assembly-CSharp.dll::AdvancedGhostBehaviour::AdvancedGhostBehaviour_set_Team
               (AdvancedGhostBehaviour *this,MVTeam__Enum value,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pAVar2 = (this->fields).perception;
  if (pAVar2 != (AdvancedGhostBehaviour_AdvancedGhostPerception *)0x0) {
    (pAVar2->fields).alliedTeam = value;
    pAVar3 = (this->fields).weapon;
    if (pAVar3 != (AdvancedGhostBodyRotateWeapon *)0x0) {
      (pAVar3->fields).alliedTeam = value;
      return;
    }
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

