
/* Void Destroy() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Destroy
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVJetPack *)0x0) {
    pMVar2 = (pMVar1->fields).Health;
    if (pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0) {
      pMVar3 = (pMVar2->fields)._._.OnChange;
      pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar4,(Object *)this,
                 MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
                 (MethodInfo *)0x0);
      pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar3,(Delegate *)pUVar4,(MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      if (pMVar5 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        if (pMVar5->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar3 = pMVar5;
        }
        pMVar6 = (MVPickupOwner_OnHandleFiringDelegate__Class *)
                 TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
        if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      }
      (pMVar2->fields)._._.OnChange = pMVar3;
      pMVar7 = (this->fields).avatarPickupOwner;
      if (pMVar7 != (MVPickupOwner *)0x0) {
        source = (pMVar7->fields).onHandleFiring;
        pUVar4 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar4,(Object *)this,MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,
                   (MethodInfo *)0x0);
        pMVar5 = (MVRuntimeDataVariable_OnChangeDelegate *)
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)pUVar4,(MethodInfo *)0x0);
        pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
code_?:
          (pMVar7->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)pMVar3;
          return;
        }
        if ((MVPickupOwner_OnHandleFiringDelegate__Class *)pMVar5->klass ==
            TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
          pMVar3 = pMVar5;
        }
        pMVar6 = TypeInfo__MVPickupOwner__OnHandleFiringDelegate;
        if (pMVar3 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        goto code_?;
      }
    }
  }
  func_?(0);
  pMVar5 = extraout_ECX;
  pMVar6 = (MVPickupOwner_OnHandleFiringDelegate__Class *)extraout_EDX;
code_?:
  func_?(pMVar5,pMVar6);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Enter
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  this_00 = (this->fields).vehicleMotor;
  (this->fields).leaveMode = 0;
  if (this_00 != (JetPackMotor *)0x0) {
    JetPackMotor::JetPackMotor_set_LeaveMode(this_00,0,(MethodInfo *)0x0);
    this_01 = (this->fields).triggerHandler;
    if (this_01 != (MVTriggerHandler *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_01,1,(MethodInfo *)0x0);
      this_02 = (this->fields).vehicleUser;
      if (this_02 != (MVAvatarLocal *)0x0) {
        MVAvatarLocal::MVAvatarLocal_set_ForceRotateAvatarToFiringDirection
                  (this_02,1,(MethodInfo *)0x0);
        pMVar1 = (this->fields).avatarPickupOwner;
        if (pMVar1 != (MVPickupOwner *)0x0) {
          pMStack2 = TypeInfo__MVPickupOwner__OnHandleFiringDelegate;
          a = (pMVar1->fields).onHandleFiring;
          this_03 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (this_03,(Object *)this,
                     MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,(MethodInfo *)0x0);
          pDStack3 =
               mscorlib.dll::System::Delegate::Delegate_Combine
                         ((Delegate *)a,(Delegate *)this_03,(MethodInfo *)0x0);
          if (pDStack3 == (Delegate *)0x0) {
            _UNK_? = (Delegate *)0x0;
            return;
          }
          pDVar4 = (Delegate *)0x0;
          if ((MVPickupOwner_OnHandleFiringDelegate__Class *)pDStack3->klass ==
              TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
            pDVar4 = pDStack3;
          }
          pMStack5 = TypeInfo__MVPickupOwner__OnHandleFiringDelegate;
          if (pDVar4 != (Delegate *)0x0) {
            _UNK_? = pDVar4;
            return;
          }
          goto code_?;
        }
      }
    }
  }
  pMStack2 = (MVPickupOwner_OnHandleFiringDelegate__Class *)0x0;
  func_?();
  pDStack3 = extraout_ECX;
  pMStack5 = extraout_EDX;
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Boolean EvaluateThrust(Boolean) */

bool Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
     MVJetPack_LocalObjectsJetPack_EvaluateThrust
               (MVJetPack_LocalObjectsJetPack *this,bool thrust,MethodInfo *method)

{
  pJVar1 = (this->fields).vehicleMotor;
  if (pJVar1 != (JetPackMotor *)0x0) {
    bVar2 = JetPackMotor::JetPackMotor_get_IsUnderWater(pJVar1,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      thrust = 0;
    }
    if ((this->fields).leaveMode != 0) {
      pJVar1 = (this->fields).vehicleMotor;
      if (pJVar1 == (JetPackMotor *)0x0) goto code_?;
      bVar2 = JetPackMotor::JetPackMotor_get_IsUnderWater(pJVar1,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        thrust = 1;
      }
    }
    pMVar3 = (this->fields).owner;
    if (pMVar3 != (MVJetPack *)0x0) {
      cVar4 = (*(code *)(pMVar3->klass->vtable).get_IsDead.method)(pMVar3);
      if (cVar4 != '\0') {
        thrust = 0;
      }
      return thrust;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  bVar2 = (*pcVar5)();
  return bVar2;
}


/* Quaternion FiringDirectionRotation() */

Quaternion *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
MVJetPack_LocalObjectsJetPack_FiringDirectionRotation
          (Quaternion *__return_storage_ptr__,MVJetPack_LocalObjectsJetPack *this,MethodInfo *method
          )

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).avatarPickupOwner;
  if (this_00 != (MVPickupOwner *)0x0) {
    pVVar1 = MVPickupOwner::MVPickupOwner_get_LookDirection
                       ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
    uVar2._0_4_ = pVVar1->x;
    uVar2._4_4_ = pVVar1->y;
    fVar3 = pVVar1->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    forward.z = fVar3;
    forward.x = (float)(int)(uVar2 & 0xffffffff);
    forward.y = (float)(int)((uVar2 & 0xffffffff) >> 0x20);
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)&stack0xffffffe0,forward,(MethodInfo *)0x0);
    fVar3 = pQVar4->y;
    fVar5 = pQVar4->z;
    fVar6 = pQVar4->w;
    __return_storage_ptr__->x = pQVar4->x;
    __return_storage_ptr__->y = fVar3;
    __return_storage_ptr__->z = fVar5;
    __return_storage_ptr__->w = fVar6;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pQVar4 = (Quaternion *)(*pcVar7)();
  return pQVar4;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_FixedUpdate
          (MVJetPack_LocalObjectsJetPack *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  uStack_6 = 0;
  pIVar7 = MVJetPack_LocalObjectsJetPack_HandleWalkMode(this,movementMap,(MethodInfo *)0x0);
  thrust = 0;
  if (pIVar7 != (IInputToPlayerMovement *)0x0) {
    thrust = func_?(1,TypeInfo__IInputToPlayerMovement,pIVar7);
  }
  pJVar8 = (this->fields).vehicleMotor;
  if (pJVar8 != (JetPackMotor *)0x0) {
    bVar9 = JetPackMotor::JetPackMotor_get_IsUnderWater(pJVar8,(MethodInfo *)0x0);
    if (bVar9 != 0) {
      thrust = 0;
    }
    if ((this->fields).leaveMode != 0) {
      pJVar8 = (this->fields).vehicleMotor;
      if (pJVar8 == (JetPackMotor *)0x0) goto code_?;
      bVar9 = JetPackMotor::JetPackMotor_get_IsUnderWater(pJVar8,(MethodInfo *)0x0);
      if (bVar9 == 0) {
        thrust = 1;
      }
    }
    pMVar10 = (this->fields).owner;
    if (pMVar10 != (MVJetPack *)0x0) {
      cVar11 = (*(code *)(pMVar10->klass->vtable).get_IsDead.method)
                         (pMVar10,(pMVar10->klass->vtable).get_IsInSpawner.methodPtr);
      if (cVar11 != '\0') {
        thrust = 0;
      }
      MVJetPack_LocalObjectsJetPack_OverheatUpdate(this,thrust,(MethodInfo *)0x0);
      if ((this->fields).walkMode == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                            ((Quaternion *)&stack0xffffffa4,(MethodInfo *)0x0);
        uStack_13 = uStack_13 & 0xffffff00;
        puVar14 = (undefined1 *)pQVar12->x;
        puVar15 = (ulonglong *)pQVar12->y;
        pIVar16 = (IInputToPlayerMovement *)pQVar12->z;
        fStack_17 = pQVar12->w;
        if (pIVar7 != (IInputToPlayerMovement *)0x0) {
          this_00 = (this->fields).mainCamera;
          if (this_00 == (Camera *)0x0) goto code_?;
          pTStack_18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)this_00,(MethodInfo *)0x0);
          pIVar19 = pIVar7->klass;
          uVar20 = 0;
          fStack_21 = 0.0;
          sVar22._0_1_ = (pIVar19->_1).rank;
          sVar22._1_1_ = (pIVar19->_1).minimumAlignment;
          if (sVar22 != 0) {
            do {
              if (pIVar19->interfaceOffsets[uVar20].interfaceType ==
                  (Il2CppClass *)TypeInfo__IInputToPlayerMovement) {
                ppMVar23 = &(&(pIVar7->klass->vtable).get_Direction)
                            [pIVar19->interfaceOffsets[uVar20].offset].method;
                goto code_?;
              }
              uVar20 = uVar20 + 1;
              uVar24._0_1_ = (pIVar7->klass->_1).rank;
              uVar24._1_1_ = (pIVar7->klass->_1).minimumAlignment;
            } while (uVar20 < uVar24);
          }
          ppMVar23 = (MethodInfo **)func_?();
code_?:
          fStack_17 = (float)ppMVar23[1];
          puVar15 = (ulonglong *)(auStack_25 + 4);
          pIVar16 = pIVar7;
          puVar26 = (undefined8 *)(*(code *)*ppMVar23)();
          puVar14 = (undefined1 *)0x0;
          uStack_1 = *puVar26;
          fStack_2 = *(float *)(puVar26 + 1);
          fVar27 = (float10)func_?(&uStack_1);
          fStack_21 = (float)fVar27;
          if (0.0 < fStack_21) {
            if (pTStack_18 == (Transform *)0x0) goto code_?;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)auStack_25,pTStack_18,(MethodInfo *)0x0);
            fVar28 = fStack_2;
            uStack_29 = (undefined4)uStack_1;
            pTStack_18 = (Transform *)((ulonglong)uStack_1 >> 0x20);
            auStack_25._0_4_ = pQVar12->x;
            auStack_25._4_4_ = pQVar12->y;
            fStack_30 = pQVar12->z;
            fStack_31 = pQVar12->w;
            uVar32 = uStack_1;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
              uVar32 = CONCAT44(pTStack_18,uStack_29);
            }
            rotation.y = (float)auStack_25._4_4_;
            rotation.x = (float)auStack_25._0_4_;
            rotation.z = fStack_30;
            rotation.w = fStack_31;
            point.z = fVar28;
            point.x = (float)(int)uVar32;
            point.y = (float)(int)((ulonglong)uVar32 >> 0x20);
            pVVar33 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)(auStack_25 + 4),rotation,point,(MethodInfo *)0x0);
            pIVar16 = (IInputToPlayerMovement *)0x0;
            uStack_3._0_4_ = pVVar33->x;
            uStack_3._4_4_ = pVVar33->y;
            fStack_4 = pVVar33->z;
            puVar15 = &uStack_3;
            puVar14 = auStack_25 + 4;
            uStack_3 = uStack_3 & 0xffffffff;
            puVar26 = (undefined8 *)func_?();
            uStack_1 = *puVar26;
            fStack_2 = *(float *)(puVar26 + 1);
          }
          pJVar8 = (this->fields).vehicleMotor;
          if (pJVar8 == (JetPackMotor *)0x0) goto code_?;
          puVar26 = (undefined8 *)
                    (*(code *)(pJVar8->klass->vtable).get_Velocity.method)
                              (auStack_25 + 4,pJVar8,
                               (pJVar8->klass->vtable).get_IsMovementLocked.methodPtr);
          uStack_5 = *puVar26;
          uStack_6 = *(undefined4 *)(puVar26 + 1);
          fVar27 = (float10)func_?(&uStack_5,0);
          pTStack_18 = (Transform *)(float)fVar27;
          if ((_UNK_? < (float)pTStack_18) || ((this->fields).wasFiring != 0)) {
            if (cRam_? == '\0') {
              func_?(_UNK_?);
              cRam_? = '\x01';
            }
            this_01 = (this->fields).avatarPickupOwner;
            if (this_01 == (MVPickupOwner *)0x0) goto code_?;
            pVVar33 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                ((Vector3 *)(auStack_25 + 4),this_01,(MethodInfo *)0x0);
            uVar34 = pVVar33->x;
            fVar28 = pVVar33->z;
            uStack_29 = 0;
            uStack_35 = uVar34;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?();
            }
            forward.y = (float)uStack_29;
            forward.x = (float)uStack_35;
            forward.z = fVar28;
            pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                                ((Quaternion *)&stack0xffffffa4,forward,(MethodInfo *)0x0);
            uStack_13 = CONCAT31(uStack_13._1_3_,1);
            puVar14 = (undefined1 *)pQVar12->x;
            puVar15 = (ulonglong *)pQVar12->y;
            pIVar16 = (IInputToPlayerMovement *)pQVar12->z;
            fStack_17 = pQVar12->w;
          }
          pJVar8 = (this->fields).vehicleMotor;
          if (pJVar8 == (JetPackMotor *)0x0) goto code_?;
          value.z = fStack_2;
          value.x = (float)(undefined4)uStack_1;
          value.y = (float)uStack_1._4_4_;
          JetPackMotor::JetPackMotor_set_InputMoveDirection(pJVar8,value,(MethodInfo *)0x0);
        }
        pJVar8 = (this->fields).vehicleMotor;
        if (pJVar8 != (JetPackMotor *)0x0) {
          JetPackMotor::JetPackMotor_set_Thrust(pJVar8,thrust,(MethodInfo *)0x0);
          pJVar8 = (this->fields).vehicleMotor;
          if (pJVar8 != (JetPackMotor *)0x0) {
            setQuaternion.y = (float)puVar15;
            setQuaternion.x = (float)puVar14;
            setQuaternion.z = (float)pIVar16;
            setQuaternion.w = fStack_17;
            JetPackMotor::JetPackMotor_FixedUpdateFunction
                      (pJVar8,setQuaternion,(bool)uStack_13,(MethodInfo *)0x0);
            return pIVar7;
          }
        }
      }
      else {
        this_02 = (this->fields).vehicleUser;
        if (this_02 != (MVAvatarLocal *)0x0) {
          this_03 = MVAvatarLocal::MVAvatarLocal_get_RigidBody(this_02,(MethodInfo *)0x0);
          pJVar8 = (this->fields).vehicleMotor;
          if (pJVar8 != (JetPackMotor *)0x0) {
            pVVar33 = JetPackMotor::JetPackMotor_get_Impulses
                                ((Vector3 *)(auStack_25 + 4),pJVar8,(MethodInfo *)0x0);
            if (this_03 != (MVRigidBody *)0x0) {
              MVRigidBody::MVRigidBody_AddImpulse_1(this_03,*pVVar33,0,(MethodInfo *)0x0);
              return pIVar7;
            }
          }
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar36 = (code *)swi(3);
  pIVar7 = (IInputToPlayerMovement *)(*pcVar36)();
  return pIVar7;
}


/* IInputToPlayerMovement HandleWalkMode(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_HandleWalkMode
          (MVJetPack_LocalObjectsJetPack *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    pMVar4 = MVAvatarLocal::MVAvatarLocal_get_RigidBody(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 == (MVRigidBody *)0x0) goto code_?;
    cVar1 = (*(code *)(pMVar4->klass->vtable).__unknown.method)
                      (pMVar4,(pMVar4->klass->vtable).__unknown_1.methodPtr);
    if ((cVar1 == '\0') && ((this->fields).walkMode != 0)) goto code_?;
    pJVar5 = (this->fields).vehicleMotor;
    if (pJVar5 == (JetPackMotor *)0x0) goto code_?;
    cVar1 = (*(code *)(pJVar5->klass->vtable).get_Grounded.method)
                      (pJVar5,(pJVar5->klass->vtable).get_Velocity.methodPtr);
    if (cVar1 == '\0') goto code_?;
    bVar6 = (this->fields).framesGroundedThreshold < (this->fields).framesGrounded;
  }
  else {
code_?:
    (this->fields).framesGrounded = 0;
code_?:
    bVar6 = false;
  }
  (this->fields).walkMode = bVar6;
  if (bVar6 == false) {
    pMVar3 = (this->fields).vehicleUser;
    if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
    MVAvatarLocal::MVAvatarLocal_SetAnimation(pMVar3,StringLiteral_Idle,(MethodInfo *)0x0);
  }
  pMVar3 = (this->fields).vehicleUser;
  if (pMVar3 != (MVAvatarLocal *)0x0) {
    pMVar4 = MVAvatarLocal::MVAvatarLocal_get_RigidBody(pMVar3,(MethodInfo *)0x0);
    if (pMVar4 != (MVRigidBody *)0x0) {
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_get_enabled
                        ((Behaviour *)pMVar4,(MethodInfo *)0x0);
      bVar8 = (this->fields).walkMode;
      if (bVar7 != bVar8) {
        pMVar3 = (this->fields).vehicleUser;
        if (pMVar3 == (MVAvatarLocal *)0x0) goto code_?;
        pMVar4 = MVAvatarLocal::MVAvatarLocal_get_RigidBody(pMVar3,(MethodInfo *)0x0);
        if (pMVar4 == (MVRigidBody *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  ((Behaviour *)pMVar4,(this->fields).walkMode,(MethodInfo *)0x0);
        bVar8 = (this->fields).walkMode;
      }
      if (bVar8 == 0) {
        pJVar5 = (this->fields).vehicleMotor;
        if (pJVar5 == (JetPackMotor *)0x0) goto code_?;
        bVar8 = JetPackMotor::JetPackMotor_IsStuck(pJVar5,(MethodInfo *)0x0);
        if (bVar8 != 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Vehicle_is_stuck,(MethodInfo *)0x0);
        }
      }
      return movementMap;
    }
  }
code_?:
  func_?(0);
  pcVar9 = (code *)swi(3);
  pIVar10 = (IInputToPlayerMovement *)(*pcVar9)();
  return pIVar10;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Leave
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
        MVAvatarLocal::MVAvatarLocal_set_ForceRotateAvatarToFiringDirection
                  (pMVar1,0,(MethodInfo *)0x0);
        pMVar2 = (this->fields).owner;
        if (pMVar2 != (MVJetPack *)0x0) {
          (pMVar2->fields)._._._._.interactionDataHandlerBase = (InteractionDataHandlerBase *)0x0;
          pMVar3 = (this->fields).avatarPickupOwner;
          if (pMVar3 != (MVPickupOwner *)0x0) {
            pMStack4 = TypeInfo__MVPickupOwner__OnHandleFiringDelegate;
            source = (pMVar3->fields).onHandleFiring;
            this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (this_01,(Object *)this,
                       MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,(MethodInfo *)0x0)
            ;
            pDStack5 =
                 mscorlib.dll::System::Delegate::Delegate_Remove
                           ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
            if (pDStack5 == (Delegate *)0x0) {
              _UNK_? = (Delegate *)0x0;
              return;
            }
            pDVar6 = (Delegate *)0x0;
            if ((MVPickupOwner_OnHandleFiringDelegate__Class *)pDStack5->klass ==
                TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
              pDVar6 = pDStack5;
            }
            pMStack7 = TypeInfo__MVPickupOwner__OnHandleFiringDelegate;
            if (pDVar6 != (Delegate *)0x0) {
              _UNK_? = pDVar6;
              return;
            }
            goto code_?;
          }
        }
      }
    }
  }
  pMStack4 = (MVPickupOwner_OnHandleFiringDelegate__Class *)0x0;
  func_?();
  pDStack5 = extraout_ECX;
  pMStack7 = extraout_EDX;
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OverheatUpdate(Boolean) */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
     MVJetPack_LocalObjectsJetPack_OverheatUpdate
               (MVJetPack_LocalObjectsJetPack *this,bool thrust,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = this;
  pMVar2 = (this->fields).owner;
  if (((pMVar2 == (MVJetPack *)0x0) ||
      (pMVar3 = (pMVar2->fields).JetMode, pMVar3 == (MVRuntimeDataVariable *)0x0)) ||
     (pOVar4 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar3,(MethodInfo *)0x0),
     pOVar4 == (Object *)0x0)) goto code_?;
  if ((pOVar4->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class) {
    func_?(pOVar4,TypeInfo__MVJetPack__JetModeType);
    goto code_?;
  }
  pbVar5 = (byte *)func_?(pOVar4);
  this = (MVJetPack_LocalObjectsJetPack *)(pMVar1->fields).thrustTime;
  bVar6 = *pbVar5;
  iVar7 = (uint)bVar6 << 8;
  fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
  if (thrust == 0) {
    this = (MVJetPack_LocalObjectsJetPack *)((float)this - (pMVar1->fields).coolDownFactor * fVar8)
    ;
  }
  else {
    iVar7 = CONCAT31((uint3)bVar6,1);
    this = (MVJetPack_LocalObjectsJetPack *)(fVar8 + (float)this);
  }
  uVar9 = (undefined2)iVar7;
  (pMVar1->fields).thrustTime = (float)this;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  this = (MVJetPack_LocalObjectsJetPack *)
         UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                   ((float)this,0.0,3.4028235e+38,(MethodInfo *)0x0);
  fVar8 = (pMVar1->fields).thrustTimeOverheatThreshold;
  (pMVar1->fields).thrustTime = (float)this;
  if (fVar8 < (float)this) {
    pMVar2 = (pMVar1->fields).owner;
    if ((pMVar2 == (MVJetPack *)0x0) ||
       (pMVar10 = (pMVar2->fields).Health, pMVar10 == (MVRuntimeDataVariableClampedFloat *)0x0))
    goto code_?;
    fVar11 = (float10)(*(code *)(pMVar10->klass->vtable).get_Value.method)
                                (pMVar10,(pMVar10->klass->vtable).set_Value.methodPtr);
    pMVar2 = (pMVar1->fields).owner;
    this = (MVJetPack_LocalObjectsJetPack *)(float)fVar11;
    if ((pMVar2 == (MVJetPack *)0x0) ||
       (pMVar12 = (pMVar2->fields).Health, pMVar12 == (MVRuntimeDataVariableClampedFloat *)0x0))
    goto code_?;
    fVar11 = (float10)(*(code *)(pMVar12->klass->vtable).get_Value.method)
                                (pMVar12,(pMVar12->klass->vtable).set_Value.methodPtr);
    (*(code *)(pMVar10->klass->vtable).set_Value.method)
              (pMVar10,(float)this - (float)fVar11,pMVar10->klass[1]._0.image);
  }
  else if (fVar8 - (pMVar1->fields).thrustTimeWarning < (float)this) {
    pMVar13 = (pMVar1->fields).avatarPickupOwner;
    uVar9 = (undefined2)CONCAT31((int3)((uint)iVar7 >> 8),2);
    if (pMVar13 == (MVPickupOwner *)0x0) goto code_?;
    x = (Object_1 *)
        GamePointGainEffect::GamePointGainEffect_get_ID
                  ((GamePointGainEffect *)pMVar13,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar14 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar14 != 0) {
      pMVar13 = (pMVar1->fields).avatarPickupOwner;
      if ((pMVar13 == (MVPickupOwner *)0x0) ||
         (piVar15 = (int *)GamePointGainEffect::GamePointGainEffect_get_ID
                                     ((GamePointGainEffect *)pMVar13,(MethodInfo *)0x0),
         piVar15 == (int *)0x0)) goto code_?;
      cVar16 = (**(code **)(*piVar15 + 0x100))(piVar15,*(undefined4 *)(*piVar15 + 0x104));
      if (cVar16 != '\0') {
        pMVar13 = (pMVar1->fields).avatarPickupOwner;
        if ((pMVar13 == (MVPickupOwner *)0x0) ||
           (this_01 = (MvCharacterController *)
                      GamePointGainEffect::GamePointGainEffect_get_ID
                                ((GamePointGainEffect *)pMVar13,(MethodInfo *)0x0),
           this_01 == (MvCharacterController *)0x0)) goto code_?;
        bVar14 = MvCharacterController::MvCharacterController_get_IsGrounded
                           (this_01,(MethodInfo *)0x0);
        if (bVar14 == 0) goto code_?;
      }
      pJVar17 = (pMVar1->fields).jetPackVisualization;
      if (pJVar17 == (JetPackVisualization *)0x0) goto code_?;
      JetPackVisualization::JetPackVisualization_DoOverheatBlinking(pJVar17,(MethodInfo *)0x0);
    }
code_?:
    this_00 = (pMVar1->fields).vehicleMotor;
    if (this_00 == (JetPackMotor *)0x0) goto code_?;
    bVar14 = JetPackMotor::JetPackMotor_get_LeaveMode(this_00,(MethodInfo *)0x0);
    if (bVar14 == 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_02 == (MainCameraManager *)0x0) ||
         (pMVar18 = MainCameraManager::MainCameraManager_get_CurrentCamera
                              (this_02,(MethodInfo *)0x0), pMVar18 == (MVCameraBase *)0x0))
      goto code_?;
      iVar7 = (*(code *)(pMVar18->klass->vtable).__unknown.method)
                         (pMVar18,(pMVar18->klass->vtable).Awake.methodPtr);
      if (iVar7 == 0x10) {
        pJVar17 = (pMVar1->fields).jetPackVisualization;
        if (pJVar17 == (JetPackVisualization *)0x0) goto code_?;
        JetPackVisualization::JetPackVisualization_ShowOverHeatWarning(pJVar17,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* InputToInGameAction Update(InputToInGameAction) */

InputToInGameAction *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Update
          (MVJetPack_LocalObjectsJetPack *this,InputToInGameAction *interactionInput,
          MethodInfo *method)

{
  if ((this->fields).walkMode == 0) {
    this_00 = (this->fields).vehicleMotor;
    if (this_00 == (JetPackMotor *)0x0) {
      func_?();
      pcVar1 = (code *)swi(3);
      pIVar2 = (InputToInGameAction *)(*pcVar1)();
      return pIVar2;
    }
    JetPackMotor::JetPackMotor_FrameUpdate(this_00,(MethodInfo *)0x0);
  }
  return interactionInput;
}


/* Boolean WalkMode(Boolean) */

bool Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_WalkMode
               (MVJetPack_LocalObjectsJetPack *this,bool thrust,MethodInfo *method)

{
  piVar1 = &(this->fields).framesGrounded;
  *piVar1 = *piVar1 + 1;
  if (thrust != 0) {
code_?:
    (this->fields).framesGrounded = 0;
    return 0;
  }
  this_00 = (this->fields).vehicleUser;
  if ((this_00 != (MVAvatarLocal *)0x0) &&
     (pMVar2 = MVAvatarLocal::MVAvatarLocal_get_RigidBody(this_00,(MethodInfo *)0x0),
     pMVar2 != (MVRigidBody *)0x0)) {
    cVar3 = (*(code *)(pMVar2->klass->vtable).__unknown.method)
                      (pMVar2,(pMVar2->klass->vtable).__unknown_1.methodPtr);
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).thrustTimeOverheatThreshold = 3.0;
  (this->fields).thrustTimeWarning = 1.0;
  (this->fields).coolDownFactor = 0.5;
  (this->fields).walkMode = 1;
  (this->fields).framesGroundedThreshold = 2;
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  if ((vehicleUser != (MVAvatarLocal *)0x0) &&
     (pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0),
     pCVar1 != (CelestialParam *)0x0)) {
    pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                       ((GameObject *)pCVar1,
                        SmoothCharacterController_MethodInfo__UnityEngine__GameObject__GetComponent<SmoothCharacterController>__
                       );
    (this->fields).avatarController = (SmoothCharacterController *)pUVar2;
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
    if (pCVar1 != (CelestialParam *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                ((GameObject *)pCVar1,
                 AvatarInteractable_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarInteractable>__
                );
      pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                         ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
      if (pCVar1 != (CelestialParam *)0x0) {
        pUVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                           ((GameObject *)pCVar1,
                            MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                           );
        pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
        if (pCVar1 != (CelestialParam *)0x0) {
          pMVar3 = (MVPickupOwner *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                             ((GameObject *)pCVar1,
                              MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                             );
          pSVar4 = (this->fields).avatarController;
          (this->fields).avatarPickupOwner = pMVar3;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pSVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 == 0) {
            if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
              func_?();
            }
            bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                              ((Object_1 *)&UNK_?,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar5 == 0) {
              if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0
                  ) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                func_?();
              }
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)pUVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar5 == 0) {
                pMVar3 = (this->fields).avatarPickupOwner;
                if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) !=
                     0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                  func_?();
                }
                bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                  ((Object_1 *)pMVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
                if (bVar5 == 0) {
                  pSVar4 = (this->fields).avatarController;
                  if (vehicleUser != (MVAvatarLocal *)0x0) {
                    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                       ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
                    seat_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_get_gameObject
                                        ((Component_1 *)&UNK_?,(MethodInfo *)0x0);
                    if (pSVar4 != (SmoothCharacterController *)0x0) {
                      pSVar4 = SmoothCharacterController::SmoothCharacterController_Clone
                                         (pSVar4,(GameObject *)pCVar1,seat_00,
                                          (CullingSubscriberBase *)0x0,
                                          (MVWorldObjectClient *)vehicleUser,(MethodInfo *)0x0);
                      MVAvatarLocal::MVAvatarLocal_SetCharacterController
                                (vehicleUser,pSVar4,(MethodInfo *)0x0);
                      if (jetPackTypeParameters != (JetPackParameters *)0x0) {
                        (this->fields).thrustTimeOverheatThreshold =
                             (jetPackTypeParameters->fields).thrustTimeOverheatThreshold;
                        (this->fields).coolDownFactor =
                             (jetPackTypeParameters->fields).coolDownFactor;
                        fVar6 = (vehicleUser->fields)._.lineOfFire.m_Origin.x;
                        if (fVar6 != 0.0) {
                          a = *(Delegate **)((int)fVar6 + 0x20);
                          this_01 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                     *)func_?();
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine
                          ::SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                    (this_01,(Object *)this,
                                     MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_
                                     ,(MethodInfo *)0x0);
                          mscorlib.dll::System::Delegate::Delegate_Combine
                                    (a,(Delegate *)this_01,(MethodInfo *)0x0);
                          uVar7 = func_?();
                          pSVar4 = (SmoothCharacterController *)0x0;
                          *(undefined4 *)((int)fVar6 + 0x20) = uVar7;
                          pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                             ((DayNightCycle *)vehicleUser,(MethodInfo *)0x0);
                          if (pCVar1 != (CelestialParam *)0x0) {
                            pUVar8 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                      GameObject_GetComponentsInChildren_29
                                                ((GameObject *)pCVar1,
                                                 JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                                                );
                            (this->fields).jetPackVisualization = (JetPackVisualization *)pUVar8;
                            vehicleInteractable =
                                 (VehicleInteractable *)
                                 UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                 GameObject_AddComponent_85
                                           ((GameObject *)pCVar1,
                                            VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                                           );
                            if (vehicleInteractable != (VehicleInteractable *)0x0) {
                              (*(code *)(vehicleInteractable->klass->vtable).Init.method)();
                              pJVar9 = (JetPackMotor *)
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_AddComponent_85
                                                  ((GameObject *)pCVar1,
                                                                                                      
                                                  JetPackMotor_MethodInfo__UnityEngine__GameObject__AddComponent<JetPackMotor>__
                                                  );
                              if (pJVar9 != (JetPackMotor *)0x0) {
                                JetPackMotor::JetPackMotor_Init
                                          (pJVar9,(AvatarInteractable *)&UNK_?,
                                           vehicleInteractable,pSVar4,
                                           (jetPackTypeParameters->fields).thrustStrength,
                                           (jetPackTypeParameters->fields).density,(MethodInfo *)0x0
                                          );
                                this_02 = (ObjectPool_1_System_Object_ *)
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_AddComponent_85
                                                    ((GameObject *)pCVar1,
                                                                                                          
                                                  MVEquipableProxy_MethodInfo__UnityEngine__GameObject__AddComponent<MVEquipableProxy>__
                                                  );
                                if (this_02 != (ObjectPool_1_System_Object_ *)0x0) {
                                  UnityEngine.UI.dll::UnityEngine::UI::ObjectPool`1[System::Object]
                                  ::ObjectPool_1_System_Object__set_countAll
                                            (this_02,(int32_t)pUVar2,(MethodInfo *)0x0);
                                  item = (MVTriggerHandler *)
                                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                         GameObject_AddComponent_85
                                                   ((GameObject *)pCVar1,
                                                                                                        
                                                  MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                                  );
                                  pLVar10 = (this->fields)._.localComponents;
                                  (this->fields).triggerHandler = item;
                                  if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                                    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]
                                    ::List_1_UIPushOption__Add
                                              ((List_1_UIPushOption_ *)pLVar10,
                                               (UIPushOption__Enum)item,
                                               MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                              );
                                    pJVar9 = (JetPackMotor *)(this->fields)._.localComponents;
                                    if (pJVar9 != (JetPackMotor *)0x0) {
                                      item_00 = 
                                      MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                      ;
                                      mscorlib.dll::System::Collections::Generic::
                                      List`1[UIPushOption]::List_1_UIPushOption__Add
                                                ((List_1_UIPushOption_ *)pJVar9,
                                                 (UIPushOption__Enum)
                                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                 ,
                                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                );
                                      pLVar10 = (this->fields)._.localComponents;
                                      if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                                        mscorlib.dll::System::Collections::Generic::
                                        List`1[UIPushOption]::List_1_UIPushOption__Add
                                                  ((List_1_UIPushOption_ *)pLVar10,
                                                   (UIPushOption__Enum)pJVar9,
                                                                                                      
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                  );
                                        pLVar10 = (this->fields)._.localComponents;
                                        if (pLVar10 != (List_1_UnityEngine_Component_ *)0x0) {
                                          mscorlib.dll::System::Collections::Generic::
                                          List`1[UIPushOption]::List_1_UIPushOption__Add
                                                    ((List_1_UIPushOption_ *)pLVar10,
                                                     (UIPushOption__Enum)item_00,
                                                                                                          
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                  );
                                          this_00 = (this->fields)._.localComponents;
                                          if (this_00 != (List_1_UnityEngine_Component_ *)0x0) {
                                            mscorlib.dll::System::Collections::Generic::
                                            List`1[UIPushOption]::List_1_UIPushOption__Add
                                                      ((List_1_UIPushOption_ *)this_00,
                                                       (UIPushOption__Enum)pLVar10,
                                                                                                              
                                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                                  );
                                            (this->fields).owner = (MVJetPack *)vehicleUser;
                                            (this->fields).vehicleMotor = pJVar9;
                                            (this->fields).vehicleUser =
                                                 (MVAvatarLocal *)&UNK_?;
                                            pCVar11 = UnityEngine.CoreModule.dll::UnityEngine::
                                                      Camera::Camera_get_main((MethodInfo *)0x0);
                                            pMVar12 = (this->fields).owner;
                                            (this->fields).mainCamera = pCVar11;
                                            pIVar13 = MVWorldObjectClient::
                                                                                                            
                                                  MVWorldObjectClient_get_InteractionDataHandlerBase
                                                            ((MVWorldObjectClient *)&UNK_?,
                                                             (MethodInfo *)0x0);
                                            if (pMVar12 != (MVJetPack *)0x0) {
                                              (pMVar12->fields)._._._._.interactionDataHandlerBase =
                                                   pIVar13;
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
                      }
                    }
                  }
                  goto code_?;
                }
              }
            }
          }
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                    ((Object *)StringLiteral_Failed_to_get_component__Cant_cr,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Int32 get_Id() */

int32_t Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_get_Id
                  (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVJetPack *)0x0) {
    return (pMVar1->fields)._._._._._.id;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

