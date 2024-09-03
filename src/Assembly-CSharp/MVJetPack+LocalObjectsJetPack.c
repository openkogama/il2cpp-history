
/* Void Destroy() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Destroy
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    func_?(&MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).owner;
  if (pMVar1 == (MVJetPack *)0x0) {
code_?:
    pMStack2 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  }
  else {
    pMVar3 = (pMVar1->fields).Health;
    if (pMVar3 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    pMVar4 = (pMVar3->fields)._._.OnChange;
    this_00 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_00,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMStack2 =
         (MVRuntimeDataVariable_OnChangeDelegate *)
         mscorlib.dll::System::Delegate::Delegate_Remove
                   ((Delegate *)pMVar4,(Delegate *)this_00,(MethodInfo *)0x0);
    pMStack5 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0;
    if (pMStack2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar3->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      pMStack2 = (MVRuntimeDataVariable_OnChangeDelegate *)&(pMVar3->fields)._._.OnChange;
      func_?();
      return;
    }
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)pMStack5;
    if (pMStack2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar4 = pMStack2;
    }
    pMStack5 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar3->fields)._._.OnChange = pMVar4;
    pMStack5 =
         (MVRuntimeDataVariable_OnChangeDelegate__Class *)
         (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMStack5 = (MVRuntimeDataVariable_OnChangeDelegate__Class *)pMStack2;
    }
    unaff_ESI = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMStack5 != (MVRuntimeDataVariable_OnChangeDelegate__Class *)0x0)
    goto code_?;
  }
  pMStack5 = unaff_ESI;
  pMStack2 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  pMStack5 = extraout_ECX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Enter
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_);
    func_?(&TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = (MVPickupOwner_OnHandleFiringDelegate__Class *)(this->fields).vehicleMotor;
  (this->fields).leaveMode = 0;
  if (pMVar1 == (MVPickupOwner_OnHandleFiringDelegate__Class *)0x0) {
code_?:
    pMStack2 = (MVPickupOwner_OnHandleFiringDelegate *)func_?();
  }
  else {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<MVControllerColliderHit>);
      func_?(&TypeInfo__IMoveHitHandler);
      cRam_? = '\x01';
    }
    *(undefined1 *)((int)&(pMVar1->_1).instance_size + 2) = 0;
    this_00 = (this->fields).triggerHandler;
    if (this_00 == (MVTriggerHandler *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,1,(MethodInfo *)0x0);
    pMVar3 = (this->fields).vehicleUser;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    (pMVar3->fields)._ForceRotateAvatarToFiringDirection_k__BackingField = 1;
    pMVar4 = (this->fields).avatarPickupOwner;
    if (pMVar4 == (MVPickupOwner *)0x0) goto code_?;
    pMVar5 = (pMVar4->fields).onHandleFiring;
    this_01 = (UnityAction_1_System_Int32Enum_ *)func_?();
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (this_01,(Object *)this,MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,
               (MethodInfo *)0x0);
    pMStack2 =
         (MVPickupOwner_OnHandleFiringDelegate *)
         mscorlib.dll::System::Delegate::Delegate_Combine
                   ((Delegate *)pMVar5,(Delegate *)this_01,(MethodInfo *)0x0);
    if (pMStack2 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
      (pMVar4->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
code_?:
      func_?();
      return;
    }
    pMVar5 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
      pMVar5 = pMStack2;
    }
    pMStack6 = TypeInfo__MVPickupOwner__OnHandleFiringDelegate;
    if (pMVar5 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
    (pMVar4->fields).onHandleFiring = pMVar5;
    pMVar5 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
    if (pMStack2->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
      pMVar5 = pMStack2;
    }
    pMVar1 = TypeInfo__MVPickupOwner__OnHandleFiringDelegate;
    if (pMVar5 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) goto code_?;
  }
  pMStack6 = pMVar1;
  pMStack2 = (MVPickupOwner_OnHandleFiringDelegate *)func_?();
  pMStack6 = extraout_ECX;
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Boolean EvaluateThrust(Boolean) */

bool Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
     MVJetPack_LocalObjectsJetPack_EvaluateThrust
               (MVJetPack_LocalObjectsJetPack *this,bool thrust,MethodInfo *method)

{
  pJVar1 = (this->fields).vehicleMotor;
  if (pJVar1 != (JetPackMotor *)0x0) {
    if (_UNK_? < (pJVar1->fields).waterProximity) {
      thrust = 0;
    }
    bVar2 = thrust;
    if (((this->fields).leaveMode != 0) &&
       (bVar2 = 1, _UNK_? < (((this->fields).vehicleMotor)->fields).waterProximity)) {
      bVar2 = thrust;
    }
    pMVar3 = (this->fields).owner;
    if (pMVar3 != (MVJetPack *)0x0) {
      cVar4 = (*(code *)(pMVar3->klass->vtable).get_IsDead.method)
                        (pMVar3,(pMVar3->klass->vtable).get_IsInSpawner.methodPtr);
      bVar5 = 0;
      if (cVar4 == '\0') {
        bVar5 = bVar2;
      }
      return bVar5;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
}


/* Quaternion FiringDirectionRotation() */

Quaternion *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
MVJetPack_LocalObjectsJetPack_FiringDirectionRotation
          (Quaternion *__return_storage_ptr__,MVJetPack_LocalObjectsJetPack *this,MethodInfo *method
          )

{
  this_00 = (this->fields).avatarPickupOwner;
  if (this_00 != (MVPickupOwner *)0x0) {
    pVVar1 = MVPickupOwner::MVPickupOwner_get_LookDirection
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar1->x;
    uVar2._4_4_ = pVVar1->y;
    forward.z = pVVar1->z;
    forward.x = (float)(int)(uVar2 & 0xffffffff);
    forward.y = (float)(int)((uVar2 & 0xffffffff) >> 0x20);
    pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)&stack0xffffffe0,forward,(MethodInfo *)0x0);
    fVar4 = pQVar3->y;
    fVar5 = pQVar3->z;
    fVar6 = pQVar3->w;
    __return_storage_ptr__->x = pQVar3->x;
    __return_storage_ptr__->y = fVar4;
    __return_storage_ptr__->z = fVar5;
    __return_storage_ptr__->w = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pQVar3 = (Quaternion *)(*pcVar7)();
  return pQVar3;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_FixedUpdate
          (MVJetPack_LocalObjectsJetPack *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IInputToPlayerMovement);
    cRam_? = '\x01';
  }
  pIVar1 = MVJetPack_LocalObjectsJetPack_HandleWalkMode(this,movementMap,(MethodInfo *)0x0);
  uVar2 = 0;
  pIStack_3 = pIVar1;
  if (pIVar1 != (IInputToPlayerMovement *)0x0) {
    uVar2 = func_?(1,TypeInfo__IInputToPlayerMovement,pIVar1);
  }
  pJVar4 = (this->fields).vehicleMotor;
  if (pJVar4 != (JetPackMotor *)0x0) {
    fVar5 = (pJVar4->fields).waterProximity;
    uVar2 = uVar2 & 0xff;
    if (_UNK_? < fVar5) {
      uVar2 = 0;
    }
    if ((this->fields).leaveMode != 0) {
      bVar6 = 1;
      if (_UNK_? < fVar5) {
        bVar6 = (byte)uVar2;
      }
      uVar2 = (uint)bVar6;
    }
    pMVar7 = (this->fields).owner;
    if (pMVar7 != (MVJetPack *)0x0) {
      cVar8 = (*(code *)(pMVar7->klass->vtable).get_IsDead.method)
                         (pMVar7,(pMVar7->klass->vtable).get_IsInSpawner.methodPtr);
      uStack_9 = 0;
      if (cVar8 == '\0') {
        uStack_9 = uVar2;
      }
      MVJetPack_LocalObjectsJetPack_OverheatUpdate(this,(bool)uStack_9,(MethodInfo *)0x0);
      if ((this->fields).walkMode == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        movementMap._0_1_ = 0;
        bVar10 = (bool)movementMap;
        movementMap._0_1_ = 0;
        pQVar11 = TypeInfo__UnityEngine__Quaternion->static_fields;
        pIVar12 = (IInputToPlayerMovement *)(pQVar11->identityQuaternion).x;
        puVar13 = (undefined8 *)(pQVar11->identityQuaternion).y;
        fVar5 = (pQVar11->identityQuaternion).z;
        fVar14 = (pQVar11->identityQuaternion).w;
        if (pIVar1 != (IInputToPlayerMovement *)0x0) {
          this_00 = (this->fields).mainCamera;
          if (this_00 == (Camera *)0x0) goto code_?;
          pTStack_15 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_00,(MethodInfo *)0x0);
          uVar16 = 0;
          pIVar17 = pIVar1->klass;
          uStack_18 = CONCAT44(pIVar17,(undefined4)uStack_18);
          uStack_19 = 0;
          uVar20._0_1_ = (pIVar17->_1).rank;
          uVar20._1_1_ = (pIVar17->_1).minimumAlignment;
          if (uVar20 != 0) {
            do {
              pIVar1 = pIStack_3;
              if (pIVar17->interfaceOffsets[uVar16].interfaceType ==
                  (Il2CppClass *)TypeInfo__IInputToPlayerMovement) {
                ppMVar21 = &(&(pIStack_3->klass->vtable).get_Direction)
                            [pIStack_3->klass->interfaceOffsets[uVar16].offset].method;
                goto code_?;
              }
              uVar16 = uVar16 + 1;
            } while (uVar16 < uVar20);
          }
          ppMVar21 = (MethodInfo **)func_?(pIVar1);
code_?:
          puVar13 = (undefined8 *)ppMVar21[1];
          pIVar12 = pIVar1;
          puVar22 = (ulonglong *)(*(code *)*ppMVar21)(auStack_23 + 4);
          uStack_24 = *puVar22;
          fVar25 = *(float *)(puVar22 + 1);
          fStack_26 = fVar25;
          uStack_18 = uStack_24;
          fVar27 = (float10)func_?(&uStack_24,0);
          pIStack_3 = (IInputToPlayerMovement *)(float)fVar27;
          if (0.0 < (float)pIStack_3) {
            if (pTStack_15 == (Transform *)0x0) goto code_?;
            pQVar28 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)auStack_23,pTStack_15,(MethodInfo *)0x0);
            point.z = fVar25;
            point.x = (float)(undefined4)uStack_18;
            point.y = (float)uStack_18._4_4_;
            pVVar29 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)(auStack_23 + 4),*pQVar28,point,(MethodInfo *)0x0);
            fVar5 = 0.0;
            uVar30._0_4_ = pVVar29->x;
            uVar30._4_4_ = pVVar29->y;
            fStack_26 = pVVar29->z;
            puVar13 = &uStack_24;
            pIVar12 = (IInputToPlayerMovement *)(auStack_23 + 4);
            uStack_24 = uVar30 & 0xffffffff;
            puVar22 = (ulonglong *)func_?();
            uStack_18 = *puVar22;
            fVar25 = *(float *)(puVar22 + 1);
          }
          pJVar4 = (this->fields).vehicleMotor;
          if (pJVar4 == (JetPackMotor *)0x0) goto code_?;
          puVar22 = (ulonglong *)
                    (*(code *)(pJVar4->klass->vtable).get_Velocity.method)
                              (auStack_23 + 4,pJVar4,
                               (pJVar4->klass->vtable).get_IsMovementLocked.methodPtr);
          uVar30 = *puVar22;
          fStack_26 = *(float *)(puVar22 + 1);
          uStack_24._0_4_ = (float)uVar30;
          uStack_24._4_4_ = (float)(uVar30 >> 0x20);
          uStack_24 = uVar30;
          if ((_UNK_? <
               uStack_24._4_4_ * uStack_24._4_4_ + (float)uStack_24 * (float)uStack_24 +
               fStack_26 * fStack_26) || (movementMap._0_1_ = bVar10, (this->fields).wasFiring != 0)
             ) {
            this_01 = (this->fields).avatarPickupOwner;
            if (this_01 == (MVPickupOwner *)0x0) goto code_?;
            pVVar29 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                ((Vector3 *)(auStack_23 + 4),this_01,(MethodInfo *)0x0);
            uVar31._0_4_ = pVVar29->x;
            uVar31._4_4_ = pVVar29->y;
            uStack_24 = uVar31 & 0xffffffff;
            forward.z = pVVar29->z;
            forward.x = (float)(int)(uVar31 & 0xffffffff);
            forward.y = (float)(int)((uVar31 & 0xffffffff) >> 0x20);
            pQVar28 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                                ((Quaternion *)&stack0xffffffb8,forward,(MethodInfo *)0x0);
            movementMap._0_1_ = 1;
            pIVar12 = (IInputToPlayerMovement *)pQVar28->x;
            puVar13 = (undefined8 *)pQVar28->y;
            fVar5 = pQVar28->z;
            fVar14 = pQVar28->w;
          }
          pJVar4 = (this->fields).vehicleMotor;
          if (pJVar4 == (JetPackMotor *)0x0) goto code_?;
          (pJVar4->fields)._InputMoveDirection_k__BackingField.x = (float)(undefined4)uStack_18;
          (pJVar4->fields)._InputMoveDirection_k__BackingField.y = (float)uStack_18._4_4_;
          (pJVar4->fields)._InputMoveDirection_k__BackingField.z = fVar25;
        }
        pJVar4 = (this->fields).vehicleMotor;
        if (pJVar4 != (JetPackMotor *)0x0) {
          (pJVar4->fields)._Thrust_k__BackingField = (bool)uStack_9;
          pJVar4 = (this->fields).vehicleMotor;
          if (pJVar4 != (JetPackMotor *)0x0) {
            setQuaternion.y = (float)puVar13;
            setQuaternion.x = (float)pIVar12;
            setQuaternion.z = fVar5;
            setQuaternion.w = fVar14;
            JetPackMotor::JetPackMotor_FixedUpdateFunction
                      (pJVar4,setQuaternion,(bool)movementMap,(MethodInfo *)0x0);
            return pIVar1;
          }
        }
      }
      else {
        pMVar32 = (this->fields).vehicleUser;
        if (pMVar32 != (MVAvatarLocal *)0x0) {
          this_02 = (pMVar32->fields).avatarMotor;
          pJVar4 = (this->fields).vehicleMotor;
          if ((pJVar4 != (JetPackMotor *)0x0) &&
             (pVVar29 = JetPackMotor::JetPackMotor_get_Impulses
                                  ((Vector3 *)(auStack_23 + 4),pJVar4,(MethodInfo *)0x0),
             this_02 != (AvatarMotor *)0x0)) {
            MVRigidBody::MVRigidBody_AddImpulse_1
                      ((MVRigidBody *)this_02,*pVVar29,0,(MethodInfo *)0x0);
            return pIVar1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar33 = (code *)swi(3);
  pIVar1 = (IInputToPlayerMovement *)(*pcVar33)();
  return pIVar1;
}


/* IInputToPlayerMovement HandleWalkMode(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_HandleWalkMode
          (MVJetPack_LocalObjectsJetPack *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__IInputToPlayerMovement);
    func_?(&StringLiteral_Vehicle_is_stuck);
    func_?(&StringLiteral_Idle);
    cRam_? = '\x01';
  }
  if (movementMap == (IInputToPlayerMovement *)0x0) {
    return (IInputToPlayerMovement *)0x0;
  }
  cVar1 = func_?(1,TypeInfo__IInputToPlayerMovement,movementMap);
  piVar2 = &(this->fields).framesGrounded;
  *piVar2 = *piVar2 + 1;
  if (cVar1 == '\0') {
    pMVar3 = (this->fields).vehicleUser;
    if ((pMVar3 == (MVAvatarLocal *)0x0) ||
       (pAVar4 = (pMVar3->fields).avatarMotor, pAVar4 == (AvatarMotor *)0x0)) goto code_?;
    cVar1 = (*(code *)(pAVar4->klass->vtable).get_Grounded.method)
                      (pAVar4,(pAVar4->klass->vtable).get_Velocity.methodPtr);
    if ((cVar1 == '\0') && ((this->fields).walkMode != 0)) goto code_?;
    pJVar5 = (this->fields).vehicleMotor;
    if (pJVar5 == (JetPackMotor *)0x0) goto code_?;
    cVar1 = (*(code *)(pJVar5->klass->vtable).get_Grounded.method)
                      (pJVar5,(pJVar5->klass->vtable).get_Velocity.methodPtr);
    if (cVar1 == '\0') goto code_?;
    if ((this->fields).framesGrounded <= (this->fields).framesGroundedThreshold)
    goto code_?;
    (this->fields).walkMode = 1;
  }
  else {
code_?:
    (this->fields).framesGrounded = 0;
code_?:
    pMVar3 = (this->fields).vehicleUser;
    (this->fields).walkMode = 0;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar3,StringLiteral_Idle,(MethodInfo *)0x0);
  }
  pMVar3 = (this->fields).vehicleUser;
  if ((pMVar3 != (MVAvatarLocal *)0x0) &&
     (pAVar4 = (pMVar3->fields).avatarMotor, pAVar4 != (AvatarMotor *)0x0)) {
    bVar6 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                      ((Behaviour *)pAVar4,(MethodInfo *)0x0);
    if (bVar6 != (this->fields).walkMode) {
      pMVar3 = (this->fields).vehicleUser;
      if ((pMVar3 == (MVAvatarLocal *)0x0) ||
         (pAVar4 = (pMVar3->fields).avatarMotor, pAVar4 == (AvatarMotor *)0x0))
      goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)pAVar4,(this->fields).walkMode,(MethodInfo *)0x0);
    }
    if ((this->fields).walkMode == 0) {
      pJVar5 = (this->fields).vehicleMotor;
      if ((pJVar5 == (JetPackMotor *)0x0) ||
         (this_00 = (pJVar5->fields).stuckEvaluator, this_00 == (MVRigidBody_StuckEvaluator *)0x0))
      goto code_?;
      bVar6 = MVRigidBody+StuckEvaluator::MVRigidBody_StuckEvaluator_Update
                        (this_00,(MethodInfo *)0x0);
      if (bVar6 != 0) {
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Vehicle_is_stuck,(MethodInfo *)0x0);
      }
    }
    return movementMap;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  pIVar8 = (IInputToPlayerMovement *)(*pcVar7)();
  return pIVar8;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Leave
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_);
    func_?(&TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Leave
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).vehicleMotor;
  (this->fields).walkMode = 0;
  (this->fields).leaveMode = 1;
  if (this_00 != (JetPackMotor *)0x0) {
    JetPackMotor::JetPackMotor_set_LeaveMode(this_00,1,(MethodInfo *)0x0);
    pMVar1 = (this->fields).vehicleUser;
    if (pMVar1 != (MVAvatarLocal *)0x0) {
      MVAvatarLocal::MVAvatarLocal_SetCharacterController
                (pMVar1,(this->fields).avatarController,(MethodInfo *)0x0);
      pMVar1 = (this->fields).vehicleUser;
      if (pMVar1 != (MVAvatarLocal *)0x0) {
        (pMVar1->fields)._ForceRotateAvatarToFiringDirection_k__BackingField = 0;
        pMVar2 = (this->fields).owner;
        if (pMVar2 != (MVJetPack *)0x0) {
          (pMVar2->fields)._._._._.interactionDataHandlerBase = (InteractionDataHandlerBase *)0x0;
          func_?();
          return;
        }
      }
    }
  }
  func_?();
  func_?();
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OverheatUpdate(Boolean) */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
     MVJetPack_LocalObjectsJetPack_OverheatUpdate
               (MVJetPack_LocalObjectsJetPack *this,bool thrust,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MVJetPack__JetModeType);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pMVar2 = (this->fields).owner;
  if ((pMVar2 == (MVJetPack *)0x0) ||
     (pMVar3 = (pMVar2->fields).JetMode, pMVar3 == (MVRuntimeDataVariable *)0x0))
  goto code_?;
  pOVar4 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar3,(MethodInfo *)0x0);
  if (thrust == 0) {
    if (pOVar4 == (Object *)0x0) goto code_?;
    unaff_EDI = TypeInfo__MVJetPack__JetModeType;
    if ((pOVar4->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class)
    {
code_?:
      func_?(pOVar4,unaff_EDI);
      goto code_?;
    }
    pbVar5 = (byte *)func_?(pOVar4);
    iVar6 = (uint)*pbVar5 << 8;
    fVar7 = (pMVar1->fields).thrustTime;
    this = (MVJetPack_LocalObjectsJetPack *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pMVar1->fields).thrustTime = fVar7 - (float)this * (pMVar1->fields).coolDownFactor;
  }
  else {
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((pOVar4->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class)
    {
      func_?(pOVar4,TypeInfo__MVJetPack__JetModeType);
      pOVar4 = extraout_EDX;
      goto code_?;
    }
    pbVar5 = (byte *)func_?(pOVar4);
    this = (MVJetPack_LocalObjectsJetPack *)(pMVar1->fields).thrustTime;
    bVar8 = *pbVar5;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    iVar6 = CONCAT31((uint3)bVar8,1);
    (pMVar1->fields).thrustTime = fVar7 + (float)this;
  }
  uVar9 = (undefined2)iVar6;
  fVar7 = (pMVar1->fields).thrustTime;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if (_UNK_? < fVar7) {
    fVar7 = _UNK_?;
  }
  pfVar10 = &(pMVar1->fields).thrustTimeOverheatThreshold;
  (pMVar1->fields).thrustTime = fVar7;
  if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
    pMVar2 = (pMVar1->fields).owner;
    if ((pMVar2 == (MVJetPack *)0x0) ||
       (pMVar11 = (pMVar2->fields).Health, pMVar11 == (MVRuntimeDataVariableClampedFloat *)0x0))
    goto code_?;
    this = (MVJetPack_LocalObjectsJetPack *)(pMVar11->klass->vtable).get_Value.method;
    fVar12 = (float10)(*(code *)this)(pMVar11,(pMVar11->klass->vtable).set_Value.methodPtr);
    pMVar2 = (pMVar1->fields).owner;
    fVar7 = (float)fVar12;
    if ((pMVar2 == (MVJetPack *)0x0) ||
       (pMVar13 = (pMVar2->fields).Health, pMVar13 == (MVRuntimeDataVariableClampedFloat *)0x0))
    goto code_?;
    this = (MVJetPack_LocalObjectsJetPack *)(pMVar13->klass->vtable).get_Value.method;
    fVar12 = (float10)(*(code *)this)(pMVar13,(pMVar13->klass->vtable).set_Value.methodPtr);
    this = (MVJetPack_LocalObjectsJetPack *)(float)fVar12;
    (*(code *)(pMVar11->klass->vtable).set_Value.method)
              (pMVar11,fVar7 - (float)this,pMVar11->klass[1]._0.image);
  }
  else if ((pMVar1->fields).thrustTimeOverheatThreshold - (pMVar1->fields).thrustTimeWarning <
           fVar7) {
    pMVar14 = (pMVar1->fields).avatarPickupOwner;
    uVar9 = (undefined2)CONCAT31((int3)((uint)iVar6 >> 8),2);
    if (pMVar14 == (MVPickupOwner *)0x0) goto code_?;
    pPVar15 = (pMVar14->fields).currentItem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)pPVar15,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar16 != 0) {
      pMVar14 = (pMVar1->fields).avatarPickupOwner;
      if ((pMVar14 == (MVPickupOwner *)0x0) ||
         (pPVar15 = (pMVar14->fields).currentItem, pPVar15 == (PickupItem *)0x0))
      goto code_?;
      cVar17 = (*(code *)(pPVar15->klass->vtable).get_FirstPerson.method)
                         (pPVar15,(pPVar15->klass->vtable).get_GunMode.methodPtr);
      if (cVar17 != '\0') {
        pMVar14 = (pMVar1->fields).avatarPickupOwner;
        if ((pMVar14 == (MVPickupOwner *)0x0) ||
           (pPVar15 = (pMVar14->fields).currentItem, pPVar15 == (PickupItem *)0x0))
        goto code_?;
        if ((pPVar15->fields)._IsHolstered_k__BackingField == 0) goto code_?;
      }
      pJVar18 = (pMVar1->fields).jetPackVisualization;
      if ((pJVar18 == (JetPackVisualization *)0x0) ||
         (this_00 = (pJVar18->fields).vehicleBlinker, this_00 == (VehicleBlinker *)0x0))
      goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.3,(MethodInfo *)0x0);
    }
code_?:
    pJVar19 = (pMVar1->fields).vehicleMotor;
    if (pJVar19 == (JetPackMotor *)0x0) goto code_?;
    if ((pJVar19->fields).leaveMode == 0) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_01 == (MainCameraManager *)0x0) ||
         (pMVar20 = MainCameraManager::MainCameraManager_get_CurrentCamera
                              (this_01,(MethodInfo *)0x0), pMVar20 == (MVCameraBase *)0x0))
      goto code_?;
      iVar6 = (*(code *)(pMVar20->klass->vtable).__unknown.method)
                         (pMVar20,(pMVar20->klass->vtable).Awake.methodPtr);
      if (iVar6 == 0x10) {
        pJVar18 = (pMVar1->fields).jetPackVisualization;
        if (pJVar18 == (JetPackVisualization *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__NotificationController);
          cRam_? = '\x01';
        }
        this = (MVJetPack_LocalObjectsJetPack *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (_UNK_? < (float)this - (pJVar18->fields).lastOverHeatNotificationTime) {
          fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (pJVar18->fields).lastOverHeatNotificationTime = fVar7;
          if ((TypeInfo__NotificationController->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__NotificationController);
          }
          NotificationController::NotificationController_PushNotification_1
                    (NotificationType__Enum_JetPackOverheating,NotificationLifetime__Enum_High,
                     (MethodInfo *)0x0);
        }
      }
    }
  }
  if ((char)((ushort)uVar9 >> 8) == (char)uVar9) {
    return;
  }
  pMVar2 = (pMVar1->fields).owner;
  if (pMVar2 != (MVJetPack *)0x0) {
    pMVar3 = (pMVar2->fields).JetMode;
    this = (MVJetPack_LocalObjectsJetPack *)CONCAT13((char)uVar9,this._0_3_);
    pOVar4 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar3,pOVar4,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar21 = (code *)swi(3);
  (*pcVar21)();
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_RefillEnergy
               (MVJetPack_LocalObjectsJetPack *this,VehicleEnergyRefill vehicleEnergyRefill,
               MethodInfo *method)

{
  pJVar1 = (this->fields).vehicleMotor;
  if ((pJVar1 != (JetPackMotor *)0x0) &&
     (this_00 = (pJVar1->fields).vehicleEnergyContainer, this_00 != (VehicleEnergyContainer *)0x0))
  {
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_RefillEnergy
              (this_00,vehicleEnergyRefill,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void RollbackVehicleRefillEnergyPrediction(Int32) */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
     MVJetPack_LocalObjectsJetPack_RollbackVehicleRefillEnergyPrediction
               (MVJetPack_LocalObjectsJetPack *this,int32_t spawnerId,MethodInfo *method)

{
  pJVar1 = (this->fields).vehicleMotor;
  if ((pJVar1 != (JetPackMotor *)0x0) &&
     (pVVar2 = (pJVar1->fields).vehicleEnergyContainer, pVVar2 != (VehicleEnergyContainer *)0x0)) {
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    fVar3 = 0.0;
    pDVar4 = (pVVar2->fields).predictions;
    if (pDVar4 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                   *)0x0) {
      bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
              Int32,WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction]::
              Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__TryGetValue
                        (pDVar4,spawnerId,(VehicleEnergyRefillPrediction *)&stack0xffffffe0,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                        );
      if (bVar5 != 0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        fVar3 = (pVVar2->fields).energyStorage - fVar3 * (pVVar2->fields).originalEnergyStorage;
        (pVVar2->fields).energyStorage = fVar3;
        if (fVar3 < 0.0) {
          (pVVar2->fields).energyStorage = 0.0;
        }
        pDVar4 = (pVVar2->fields).predictions;
        if (pDVar4 == (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                       *)0x0) goto code_?;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar4,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
      }
      return;
    }
  }
code_?:
  uVar6 = func_?(&stack0xffffffdc);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Update
          (MVJetPack_LocalObjectsJetPack *this,InputToInGameAction *interactionInput,
          MethodInfo *method)

{
  if ((this->fields).walkMode == 0) {
    pJVar1 = (this->fields).vehicleMotor;
    if ((pJVar1 == (JetPackMotor *)0x0) ||
       (this_00 = (pJVar1->fields).smoothController, this_00 == (SmoothCharacterController *)0x0)) {
      uVar2 = func_?(&puStack_3);
      func_?(uVar2);
      pcVar4 = (code *)swi(3);
      pIVar5 = (InputToInGameAction *)(*pcVar4)();
      return pIVar5;
    }
    SmoothCharacterController::SmoothCharacterController_SmoothMove(this_00,(MethodInfo *)0x0);
  }
  return interactionInput;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_UsesEnergy
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pJVar2 = (this->fields).vehicleMotor;
  if ((pJVar2 != (JetPackMotor *)0x0) &&
     (pVVar3 = (pJVar2->fields).vehicleEnergyContainer, pVVar3 != (VehicleEnergyContainer *)0x0)) {
    return (pVVar3->fields)._UsingEnergy_k__BackingField;
  }
  uVar4 = func_?(auStack_5);
  func_?(uVar4);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Boolean WalkMode(Boolean) */

bool Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_WalkMode
               (MVJetPack_LocalObjectsJetPack *this,bool thrust,MethodInfo *method)

{
  (this->fields).framesGrounded = (this->fields).framesGrounded + 1;
  if (thrust != 0) {
code_?:
    (this->fields).framesGrounded = 0;
    return 0;
  }
  pMVar1 = (this->fields).vehicleUser;
  if ((pMVar1 != (MVAvatarLocal *)0x0) &&
     (pAVar2 = (pMVar1->fields).avatarMotor, pAVar2 != (AvatarMotor *)0x0)) {
    cVar3 = (*(code *)(pAVar2->klass->vtable).get_Grounded.method)
                      (pAVar2,(pAVar2->klass->vtable).get_Velocity.methodPtr);
    if ((cVar3 == '\0') && ((this->fields).walkMode != 0)) {
      return 0;
    }
    pJVar4 = (this->fields).vehicleMotor;
    if (pJVar4 != (JetPackMotor *)0x0) {
      cVar3 = (*(code *)(pJVar4->klass->vtable).get_Grounded.method)
                        (pJVar4,(pJVar4->klass->vtable).get_Velocity.methodPtr);
      if (cVar3 != '\0') {
        return (this->fields).framesGroundedThreshold < (this->fields).framesGrounded;
      }
      goto code_?;
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* MVJetPack+LocalObjectsJetPack(MVJetPack, MVAvatarLocal, JetPackParameters, VehicleSeatBase) */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack__ctor
               (MVJetPack_LocalObjectsJetPack *this,MVJetPack *vehicleBase,
               MVAvatarLocal *vehicleUser,JetPackParameters *jetPackTypeParameters,
               VehicleSeatBase *seat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&JetPackMotor_MethodInfo__UnityEngine__GameObject__AddComponent<JetPackMotor>__)
    ;
    func_?(&
                    MVEquipableProxy_MethodInfo__UnityEngine__GameObject__AddComponent<MVEquipableProxy>__
                   );
    func_?(&
                    MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                   );
    func_?(&
                    VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                   );
    func_?(&
                    JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                   );
    func_?(&
                    AvatarInteractable_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarInteractable>__
                   );
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&
                    MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                   );
    func_?(&
                    SmoothCharacterController_MethodInfo__UnityEngine__GameObject__GetComponent<SmoothCharacterController>__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                   );
    func_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    func_?(&StringLiteral_Failed_to_get_component__Cant_cr);
    cRam_? = '\x01';
  }
  (this->fields).thrustTimeOverheatThreshold = 3.0;
  (this->fields).thrustTimeWarning = 1.0;
  (this->fields).coolDownFactor = 0.5;
  (this->fields).walkMode = 1;
  (this->fields).framesGroundedThreshold = 2;
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = vehicleUser;
  if ((vehicleUser == (MVAvatarLocal *)0x0) ||
     (pGVar2 = (vehicleUser->fields)._._._.gameObject, pGVar2 == (GameObject *)0x0)) {
code_?:
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  }
  else {
    pSVar4 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar2,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__GetComponent<SmoothCharacterController>__
                        );
    (this->fields).avatarController = pSVar4;
    func_?(&(this->fields).avatarController,pSVar4);
    pGVar2 = (vehicleUser->fields)._._._.gameObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    pOStack_5 = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar2,
                           AvatarInteractable_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarInteractable>__
                          );
    pGVar2 = (vehicleUser->fields)._._._.gameObject;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    x = (Object__Class *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (pGVar2,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    pGVar2 = (vehicleUser->fields)._._._.gameObject;
    pOStack_6 = x;
    if (pGVar2 == (GameObject *)0x0) goto code_?;
    pMVar7 = (MVPickupOwner *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar2,
                         MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                        );
    (this->fields).avatarPickupOwner = pMVar7;
    func_?(&(this->fields).avatarPickupOwner,pMVar7);
    pSVar4 = (this->fields).avatarController;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pSVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 != 0) {
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                ((Object *)StringLiteral_Failed_to_get_component__Cant_cr,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       (pOStack_5,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 != 0) goto code_?;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 != 0) goto code_?;
    pMVar7 = (this->fields).avatarPickupOwner;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                       ((Object_1 *)pMVar7,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 != 0) goto code_?;
    pSVar4 = (this->fields).avatarController;
    if (vehicleBase == (MVJetPack *)0x0) goto code_?;
    pSStack_9 = (SmoothCharacterController *)(vehicleBase->fields)._._._._.gameObject;
    if (seat == (VehicleSeatBase *)0x0) goto code_?;
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)seat,(MethodInfo *)0x0);
    if (pSVar4 == (SmoothCharacterController *)0x0) goto code_?;
    pSStack_9 = SmoothCharacterController::SmoothCharacterController_Clone
                           (pSVar4,(GameObject *)pSStack_9,pGVar2,(CullingSubscriberBase *)0x0,
                            (MVWorldObjectClient *)vehicleBase,(MethodInfo *)0x0);
    MVAvatarLocal::MVAvatarLocal_SetCharacterController(vehicleUser,pSStack_9,(MethodInfo *)0x0);
    if (jetPackTypeParameters == (JetPackParameters *)0x0) goto code_?;
    (this->fields).thrustTimeOverheatThreshold =
         (jetPackTypeParameters->fields).thrustTimeOverheatThreshold;
    (this->fields).coolDownFactor = (jetPackTypeParameters->fields).coolDownFactor;
    pMVar10 = (vehicleBase->fields).Health;
    if (pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    pMVar11 = (pMVar10->fields)._._.OnChange;
    this_00 = (VideoCapture_OnVideoCaptureResourceCreatedCallback *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Windows::WebCam::
    VideoCapture+OnVideoCaptureResourceCreatedCallback::
    VideoCapture_OnVideoCaptureResourceCreatedCallback__ctor
              (this_00,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar11,(Delegate *)this_00,(MethodInfo *)0x0);
    pMVar11 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar10->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      uStack_12 = CONCAT44(uStack_12._4_4_,pMVar11);
      uStack_13 = CONCAT44(&(pMVar10->fields)._._.OnChange,&UNK_?);
      func_?();
      pGVar2 = (vehicleBase->fields)._._._._.gameObject;
      pMVar1 = (MVAvatarLocal *)vehicleBase;
      if (pGVar2 != (GameObject *)0x0) {
        pJVar14 = (JetPackVisualization *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_GetComponentInChildren_1
                            (pGVar2,
                             JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                            );
        (this->fields).jetPackVisualization = pJVar14;
        func_?(&(this->fields).jetPackVisualization,pJVar14);
        item = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                         (pGVar2,
                          VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                         );
        pMVar1 = (MVAvatarLocal *)vehicleBase;
        if (item != (Object *)0x0) {
          (*(code *)item->klass[1]._0.methods)
                    (item,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,0,
                     (vehicleBase->fields).shield,0,item->klass[1]._0.nestedTypes);
          pJStack_15 = (JetPackMotor *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (pGVar2,
                                 JetPackMotor_MethodInfo__UnityEngine__GameObject__AddComponent<JetPackMotor>__
                                );
          pOStack_16 = pOStack_5;
          uStack_17 = 0;
          uStack_13 = 0;
          uStack_12 = 0;
          uStack_18 = 0;
          func_?(&pOStack_16,pOStack_5);
          uStack_17 = CONCAT44(uStack_17._4_4_,item);
          func_?(&uStack_17,item);
          uStack_17 = CONCAT44(pSStack_9,(undefined4)uStack_17);
          func_?((int)&uStack_17 + 4,pSStack_9);
          iVar19 = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.consumption;
          fVar20 = (jetPackTypeParameters->fields).thrustStrength;
          fVar21 = (jetPackTypeParameters->fields).density;
          uStack_13 = CONCAT44(fVar21,fVar20);
          uStack_12._0_1_ =
               (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.usingEnergy;
          uStack_12._1_3_ =
               *(undefined3 *)
                &(vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.field_0x1;
          uStack_12._4_4_ =
               (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.storage;
          fVar22 = (jetPackTypeParameters->fields).outOfEnergyThrustMax;
          uStack_18 = CONCAT44(fVar22,iVar19);
          pMVar1 = (MVAvatarLocal *)vehicleBase;
          if (pJStack_15 != (JetPackMotor *)0x0) {
            jetPackMotorConfig.vehicleInteractable = (VehicleInteractable *)(undefined4)uStack_17;
            jetPackMotorConfig.interactableLocal = (AvatarInteractable *)pOStack_16;
            jetPackMotorConfig.avatarController = (SmoothCharacterController *)uStack_17._4_4_;
            jetPackMotorConfig.thrustStrength = fVar20;
            jetPackMotorConfig.density = fVar21;
            jetPackMotorConfig.vehicleEnergyContainerConfig._0_4_ = (undefined4)uStack_12;
            jetPackMotorConfig.vehicleEnergyContainerConfig.storage = uStack_12._4_4_;
            jetPackMotorConfig.vehicleEnergyContainerConfig.consumption = iVar19;
            jetPackMotorConfig.outOfEnergyThrustMax = fVar22;
            JetPackMotor::JetPackMotor_Init
                      (pJStack_15,(vehicleBase->fields).JetMode,jetPackMotorConfig,(MethodInfo *)0x0)
            ;
            pOStack_5 = (Object_1 *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (pGVar2,
                                   MVEquipableProxy_MethodInfo__UnityEngine__GameObject__AddComponent<MVEquipableProxy>__
                                  );
            pMVar1 = (MVAvatarLocal *)vehicleBase;
            if (pOStack_5 != (Object_1 *)0x0) {
              pOStack_5[2].klass = (Object_1__Class *)pOStack_6;
              func_?(pOStack_5 + 2,pOStack_6);
              pMVar23 = (MVTriggerHandler *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (pGVar2,
                                   MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                  );
              (this->fields).triggerHandler = pMVar23;
              func_?(&(this->fields).triggerHandler,pMVar23);
              pLVar24 = (this->fields)._.localComponents;
              pMVar1 = (MVAvatarLocal *)vehicleBase;
              if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)pLVar24,(Object *)(this->fields).triggerHandler,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                          );
                pLVar24 = (this->fields)._.localComponents;
                pMVar1 = (MVAvatarLocal *)vehicleBase;
                if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLVar24,item,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                            );
                  pJVar25 = pJStack_15;
                  pLVar24 = (this->fields)._.localComponents;
                  pMVar1 = (MVAvatarLocal *)vehicleBase;
                  if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLVar24,(Object *)pJStack_15,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                              );
                    pLVar24 = (this->fields)._.localComponents;
                    pMVar1 = (MVAvatarLocal *)vehicleBase;
                    if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLVar24,(Object *)pSStack_9,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                );
                      pLVar24 = (this->fields)._.localComponents;
                      pMVar1 = (MVAvatarLocal *)vehicleBase;
                      if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  ((List_1_System_Object_ *)pLVar24,(Object *)pOStack_5,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                  );
                        (this->fields).vehicleMotor = pJVar25;
                        func_?(&(this->fields).vehicleMotor,pJVar25);
                        (this->fields).owner = vehicleBase;
                        func_?(&(this->fields).owner,vehicleBase);
                        (this->fields).vehicleUser = vehicleUser;
                        func_?(&(this->fields).vehicleUser,vehicleUser);
                        pCVar26 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                            ((MethodInfo *)0x0);
                        (this->fields).mainCamera = pCVar26;
                        func_?(&(this->fields).mainCamera,pCVar26);
                        pMVar27 = (this->fields).owner;
                        pIVar28 = MVWorldObjectClient::
                                  MVWorldObjectClient_get_InteractionDataHandlerBase
                                            ((MVWorldObjectClient *)vehicleUser,(MethodInfo *)0x0);
                        pMVar1 = vehicleUser;
                        if (pMVar27 != (MVJetPack *)0x0) {
                          (pMVar27->fields)._._._._.interactionDataHandlerBase = pIVar28;
                          func_?(&(pMVar27->fields)._._._._.interactionDataHandlerBase,
                                          pIVar28);
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
      goto code_?;
    }
    if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar11 = pMVar3;
    }
    pMVar29 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar11 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar10->fields)._._.OnChange = pMVar11;
    pMVar11 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar11 = pMVar3;
    }
    pMVar1 = (MVAvatarLocal *)TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar11 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  uStack_12 = CONCAT44(uStack_12._4_4_,pMVar1);
  uStack_13 = CONCAT44(pMVar3,&UNK_?);
  pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  pMVar29 = extraout_ECX;
code_?:
  uStack_12 = CONCAT44(uStack_12._4_4_,pMVar29);
  uStack_13 = CONCAT44(pMVar3,&UNK_?);
  func_?();
  pcVar30 = (code *)swi(3);
  (*pcVar30)();
  return;
}


/* Int32 get_Id() */

int32_t Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                  (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pMVar2 = (this->fields).owner;
  if (pMVar2 != (MVJetPack *)0x0) {
    return (pMVar2->fields)._._._._._.id;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  iVar6 = (*pcVar5)();
  return iVar6;
}

