
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
  if ((pMVar1 != (MVJetPack *)0x0) &&
     (pMVar2 = (pMVar1->fields).Health, pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pMVar3 = (pMVar2->fields)._._.OnChange;
    this_00 = (UnityAction_1_System_Object_ *)
              func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (this_00 != (UnityAction_1_System_Object_ *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
      UnityAction_1_System_Object___ctor
                (this_00,(Object *)this,
                 MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
                 (MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar2->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
      }
      else {
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
        (pMVar2->fields)._._.OnChange = pMVar4;
        pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
        if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
      }
      func_?();
      pMVar5 = (this->fields).avatarPickupOwner;
      if (pMVar5 != (MVPickupOwner *)0x0) {
        pMVar6 = (pMVar5->fields).onHandleFiring;
        this_01 = (UnityAction_1_System_ByteEnum_ *)
                  func_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
        if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
          UnityAction_1_System_ByteEnum___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,(MethodInfo *)0x0);
          pMVar6 = (MVPickupOwner_OnHandleFiringDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Remove
                             ((Delegate *)pMVar6,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pMVar6 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
            (pMVar5->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
            func_?();
            return;
          }
          pMVar7 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
          if (pMVar6->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
            pMVar7 = pMVar6;
          }
          if (pMVar7 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
            (pMVar5->fields).onHandleFiring = pMVar7;
            pMVar7 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
            if (pMVar6->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
              pMVar7 = pMVar6;
            }
            if (pMVar7 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
              func_?();
              return;
            }
          }
          goto code_?;
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
  pJVar1 = (this->fields).vehicleMotor;
  (this->fields).leaveMode = 0;
  if (pJVar1 != (JetPackMotor *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Action<MVControllerColliderHit>);
      func_?(&TypeInfo__IMoveHitHandler);
      cRam_? = '\x01';
    }
    (pJVar1->fields).leaveMode = 0;
    this_00 = (this->fields).triggerHandler;
    if (this_00 != (MVTriggerHandler *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                ((Behaviour *)this_00,1,(MethodInfo *)0x0);
      pMVar2 = (this->fields).vehicleUser;
      if (pMVar2 != (MVAvatarLocal *)0x0) {
        (pMVar2->fields)._ForceRotateAvatarToFiringDirection_k__BackingField = 1;
        pMVar3 = (this->fields).avatarPickupOwner;
        if (pMVar3 != (MVPickupOwner *)0x0) {
          pMVar4 = (pMVar3->fields).onHandleFiring;
          this_01 = (UnityAction_1_System_ByteEnum_ *)func_?();
          if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
            UnityAction_1_System_ByteEnum___ctor
                      (this_01,(Object *)this,
                       MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,(MethodInfo *)0x0)
            ;
            pMVar4 = (MVPickupOwner_OnHandleFiringDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Combine
                               ((Delegate *)pMVar4,(Delegate *)this_01,(MethodInfo *)0x0);
            uVar5 = CONCAT44(TypeInfo__MVPickupOwner__OnHandleFiringDelegate,pMVar4);
            if (pMVar4 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
              (pMVar3->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
              ppMStack6 = &(pMVar3->fields).onHandleFiring;
              pMStack7 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
              func_?();
              return;
            }
            pMVar8 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
            if (pMVar4->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
              pMVar8 = pMVar4;
            }
            if (pMVar8 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
              (pMVar3->fields).onHandleFiring = pMVar8;
              uVar5 = CONCAT44(TypeInfo__MVPickupOwner__OnHandleFiringDelegate,pMVar4);
              pMStack7 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
              if (pMVar4->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
                pMStack7 = pMVar4;
              }
              if (pMStack7 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
                ppMStack6 = &(pMVar3->fields).onHandleFiring;
                func_?();
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  uVar5 = func_?();
code_?:
  _ppMStack0000000c = uVar5;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
      cVar4 = (*(pMVar3->klass->vtable).get_IsDead.methodPtr)
                        (pMVar3,(pMVar3->klass->vtable).get_IsDead.method);
      if (cVar4 != '\0') {
        bVar2 = 0;
      }
      return bVar2;
    }
  }
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
  pIVar1 = (Il2CppType *)
            MVJetPack_LocalObjectsJetPack_HandleWalkMode(this,movementMap,(MethodInfo *)0x0);
  uVar2 = 0;
  pIStack_3 = pIVar1;
  if (pIVar1 != (Il2CppType *)0x0) {
    uVar2 = func_?(1,TypeInfo__IInputToPlayerMovement,pIVar1);
  }
  pJVar4 = (this->fields).vehicleMotor;
  if (pJVar4 != (JetPackMotor *)0x0) {
    fVar5 = (pJVar4->fields).waterProximity;
    pcVar6 = (char *)(uVar2 & 0xff);
    if (_UNK_? < fVar5) {
      pcVar6 = (char *)0x0;
    }
    if ((this->fields).leaveMode != 0) {
      bVar7 = 1;
      if (_UNK_? < fVar5) {
        bVar7 = (byte)pcVar6;
      }
      pcVar6 = (char *)(uint)bVar7;
    }
    pMVar8 = (this->fields).owner;
    if (pMVar8 != (MVJetPack *)0x0) {
      cVar9 = (*(pMVar8->klass->vtable).get_IsDead.methodPtr)
                         (pMVar8,(pMVar8->klass->vtable).get_IsDead.method);
      if (cVar9 != '\0') {
        pcVar6 = (char *)0x0;
      }
      pcStack_10 = pcVar6;
      MVJetPack_LocalObjectsJetPack_OverheatUpdate(this,(bool)pcVar6,(MethodInfo *)0x0);
      if ((this->fields).walkMode == 0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__UnityEngine__Quaternion);
          cRam_? = '\x01';
        }
        movementMap._0_1_ = 0;
        bVar11 = (bool)movementMap;
        movementMap._0_1_ = 0;
        pQVar12 = TypeInfo__UnityEngine__Quaternion->static_fields;
        pIVar13 = (Il2CppType *)(pQVar12->identityQuaternion).x;
        pMVar14 = (MethodInfo *)(pQVar12->identityQuaternion).y;
        fVar5 = (pQVar12->identityQuaternion).z;
        fVar15 = (pQVar12->identityQuaternion).w;
        if (pIVar1 != (Il2CppType *)0x0) {
          this_00 = (this->fields).mainCamera;
          if (this_00 == (Camera *)0x0) goto code_?;
          pIStack_16 = (Il2CppClass *)
                       UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)this_00,(MethodInfo *)0x0);
          uVar17 = 0;
          _Var6 = (_union_154)(pIVar1->data).__klassIndex;
          uStack_18._4_4_ = _Var6.rgctx_data;
          _Stack_8.genericMethod = (Il2CppGenericMethod *)0x0;
          if (*(uint16_t *)((int)_Var6.rgctx_data + 0xb2) != 0) {
            do {
              pIVar1 = pIStack_3;
              if (_Var6.rgctx_data[0x16].type[uVar17].data.dummy ==
                  (Il2CppClass *)TypeInfo__IInputToPlayerMovement) {
                pVVar19 = &(((IInputToPlayerMovement__Class *)(pIStack_3->data).__klassIndex)->
                           vtable).get_Direction +
                          ((IInputToPlayerMovement__Class *)(pIStack_3->data).__klassIndex)->
                          interfaceOffsets[uVar17].offset;
                goto code_?;
              }
              uVar17 = uVar17 + 1;
            } while (uVar17 < *(uint16_t *)((int)_Var6.rgctx_data + 0xb2));
          }
          pVVar19 = (VirtualInvokeData *)func_?(pIVar1);
code_?:
          pMVar14 = pVVar19->method;
          pIVar13 = pIVar1;
          puVar20 = (ulonglong *)(*pVVar19->methodPtr)(auStack_21 + 4);
          uStack_22 = *puVar20;
          pIVar23 = *(InvokerMethod *)(puVar20 + 1);
          pIStack_24 = pIVar23;
          uStack_18 = uStack_22;
          fVar25 = (float10)func_?(&uStack_22,0);
          pIStack_3 = (Il2CppType *)(float)fVar25;
          if (0.0 < (float)pIStack_3) {
            if (pIStack_16 == (Il2CppClass *)0x0) goto code_?;
            pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                ((Quaternion *)auStack_21,(Transform *)pIStack_16,(MethodInfo *)0x0)
            ;
            point.z = (float)pIVar23;
            point.x = (float)(Il2CppType **)uStack_18;
            point.y = (float)uStack_18._4_4_;
            pVVar27 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)(auStack_21 + 4),*pQVar26,point,(MethodInfo *)0x0);
            fVar5 = 0.0;
            uVar28._0_4_ = pVVar27->x;
            uVar28._4_4_ = pVVar27->y;
            pIStack_24 = (InvokerMethod)pVVar27->z;
            pMVar14 = (MethodInfo *)&uStack_22;
            pIVar13 = (Il2CppType *)(auStack_21 + 4);
            uStack_22 = uVar28 & 0xffffffff;
            puVar20 = (ulonglong *)func_?();
            uStack_18 = *puVar20;
            pIVar23 = *(InvokerMethod *)(puVar20 + 1);
          }
          pJVar4 = (this->fields).vehicleMotor;
          if (pJVar4 == (JetPackMotor *)0x0) goto code_?;
          puVar20 = (ulonglong *)
                    (*(pJVar4->klass->vtable).get_Velocity.methodPtr)
                              (auStack_21 + 4,pJVar4,(pJVar4->klass->vtable).get_Velocity.method);
          uVar28 = *puVar20;
          pIStack_24 = *(InvokerMethod *)(puVar20 + 1);
          uStack_22._0_4_ = (Il2CppMethodPointer)uVar28;
          uStack_22._4_4_ = (Il2CppMethodPointer)(uVar28 >> 0x20);
          uStack_22 = uVar28;
          if ((_UNK_? <
               (float)uStack_22._4_4_ * (float)uStack_22._4_4_ +
               (float)(Il2CppMethodPointer)uStack_22 * (float)(Il2CppMethodPointer)uStack_22 +
               (float)pIStack_24 * (float)pIStack_24) ||
             (movementMap._0_1_ = bVar11, (this->fields).wasFiring != 0)) {
            this_01 = (this->fields).avatarPickupOwner;
            if (this_01 == (MVPickupOwner *)0x0) goto code_?;
            pVVar27 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                ((Vector3 *)(auStack_21 + 4),this_01,(MethodInfo *)0x0);
            uVar29._0_4_ = pVVar27->x;
            uVar29._4_4_ = pVVar27->y;
            uStack_22 = uVar29 & 0xffffffff;
            forward.z = pVVar27->z;
            forward.x = (float)(int)(uVar29 & 0xffffffff);
            forward.y = (float)(int)((uVar29 & 0xffffffff) >> 0x20);
            pQVar26 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                                ((Quaternion *)&stack0xffffffb8,forward,(MethodInfo *)0x0);
            movementMap._0_1_ = 1;
            pIVar13 = (Il2CppType *)pQVar26->x;
            pMVar14 = (MethodInfo *)pQVar26->y;
            fVar5 = pQVar26->z;
            fVar15 = pQVar26->w;
          }
          pJVar4 = (this->fields).vehicleMotor;
          if (pJVar4 == (JetPackMotor *)0x0) goto code_?;
          (pJVar4->fields)._InputMoveDirection_k__BackingField.x = (float)(Il2CppType **)uStack_18;
          (pJVar4->fields)._InputMoveDirection_k__BackingField.y = (float)uStack_18._4_4_;
          (pJVar4->fields)._InputMoveDirection_k__BackingField.z = (float)pIVar23;
          pcVar6 = pcStack_10;
        }
        pJVar4 = (this->fields).vehicleMotor;
        if (pJVar4 != (JetPackMotor *)0x0) {
          (pJVar4->fields)._Thrust_k__BackingField = (bool)pcVar6;
          pJVar4 = (this->fields).vehicleMotor;
          if (pJVar4 != (JetPackMotor *)0x0) {
            setQuaternion.y = (float)pMVar14;
            setQuaternion.x = (float)pIVar13;
            setQuaternion.z = fVar5;
            setQuaternion.w = fVar15;
            JetPackMotor::JetPackMotor_FixedUpdateFunction
                      (pJVar4,setQuaternion,(bool)movementMap,(MethodInfo *)0x0);
            return (IInputToPlayerMovement *)pIVar1;
          }
        }
      }
      else {
        pMVar30 = (this->fields).vehicleUser;
        if (pMVar30 != (MVAvatarLocal *)0x0) {
          this_02 = (pMVar30->fields).avatarMotor;
          pJVar4 = (this->fields).vehicleMotor;
          if ((pJVar4 != (JetPackMotor *)0x0) &&
             (pVVar27 = JetPackMotor::JetPackMotor_get_Impulses
                                  ((Vector3 *)(auStack_21 + 4),pJVar4,(MethodInfo *)0x0),
             this_02 != (AvatarMotor *)0x0)) {
            MVRigidBody::MVRigidBody_AddImpulse_1
                      ((MVRigidBody *)this_02,*pVVar27,0,(MethodInfo *)0x0);
            return (IInputToPlayerMovement *)pIVar1;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar31 = (code *)swi(3);
  pIVar32 = (IInputToPlayerMovement *)(*pcVar31)();
  return pIVar32;
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
    cVar1 = (*(pAVar4->klass->vtable).get_Grounded.methodPtr)
                      (pAVar4,(pAVar4->klass->vtable).get_Grounded.method);
    if ((cVar1 == '\0') && ((this->fields).walkMode != 0)) goto code_?;
    pJVar5 = (this->fields).vehicleMotor;
    if (pJVar5 == (JetPackMotor *)0x0) goto code_?;
    cVar1 = (*(pJVar5->klass->vtable).get_Grounded.methodPtr)
                      (pJVar5,(pJVar5->klass->vtable).get_Grounded.method);
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
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
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
          pMVar3 = (this->fields).avatarPickupOwner;
          if (pMVar3 != (MVPickupOwner *)0x0) {
            this_01 = (UnityAction_1_System_ByteEnum_ *)func_?();
            if (this_01 != (UnityAction_1_System_ByteEnum_ *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
              UnityAction_1_System_ByteEnum___ctor
                        (this_01,(Object *)this,
                         MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,
                         (MethodInfo *)0x0);
              pMVar4 = (MVPickupOwner_OnHandleFiringDelegate *)
                       mscorlib.dll::System::Delegate::Delegate_Remove
                                 ((Delegate *)this,(Delegate *)this_01,(MethodInfo *)0x0);
              uVar5 = CONCAT44(TypeInfo__MVPickupOwner__OnHandleFiringDelegate,pMVar4);
              if (pMVar4 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
                (pMVar3->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
                ppMStack6 = &(pMVar3->fields).onHandleFiring;
                pMStack7 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
                func_?();
                return;
              }
              pMVar8 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
              if (pMVar4->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
                pMVar8 = pMVar4;
              }
              if (pMVar8 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
                (pMVar3->fields).onHandleFiring = pMVar8;
                uVar5 = CONCAT44(TypeInfo__MVPickupOwner__OnHandleFiringDelegate,pMVar4);
                pMStack7 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
                if (pMVar4->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
                  pMStack7 = pMVar4;
                }
                if (pMStack7 != (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
                  ppMStack6 = &(pMVar3->fields).onHandleFiring;
                  func_?();
                  return;
                }
              }
              goto code_?;
            }
          }
        }
      }
    }
  }
  uVar5 = func_?();
code_?:
  _ppMStack00000024 = uVar5;
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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
  if (((pMVar2 == (MVJetPack *)0x0) ||
      (pMVar3 = (pMVar2->fields).JetMode, pMVar3 == (MVRuntimeDataVariable *)0x0)) ||
     (pOVar4 = MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar3,(MethodInfo *)0x0),
     pOVar4 == (Object *)0x0)) goto code_?;
  if ((pOVar4->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class) {
    func_?(pOVar4,TypeInfo__MVJetPack__JetModeType);
    pMVar5 = extraout_ECX;
code_?:
    func_?(pOVar4,pMVar5);
    goto code_?;
  }
  pbVar6 = (byte *)func_?(pOVar4);
  bVar7 = *pbVar6;
  if (thrust == 0) {
    pMVar5 = TypeInfo__MVJetPack__JetModeType;
    if ((pOVar4->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class)
    goto code_?;
    pbVar6 = (byte *)func_?(pOVar4);
    iVar8 = (uint)*pbVar6 << 8;
    fVar9 = (pMVar1->fields).thrustTime;
    this = (MVJetPack_LocalObjectsJetPack *)
           UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    (pMVar1->fields).thrustTime = fVar9 - (float)this * (pMVar1->fields).coolDownFactor;
  }
  else {
    this = (MVJetPack_LocalObjectsJetPack *)(pMVar1->fields).thrustTime;
    fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    iVar8 = CONCAT31((uint3)bVar7,1);
    (pMVar1->fields).thrustTime = fVar9 + (float)this;
  }
  uVar10 = (undefined2)iVar8;
  fVar9 = (pMVar1->fields).thrustTime;
  if (fVar9 < 0.0) {
    fVar9 = 0.0;
  }
  else if (_UNK_? < fVar9) {
    fVar9 = _UNK_?;
  }
  pfVar11 = &(pMVar1->fields).thrustTimeOverheatThreshold;
  (pMVar1->fields).thrustTime = fVar9;
  if (*pfVar11 <= fVar9 && fVar9 != *pfVar11) {
    pMVar2 = (pMVar1->fields).owner;
    if ((pMVar2 == (MVJetPack *)0x0) ||
       (pMVar12 = (pMVar2->fields).Health, pMVar12 == (MVRuntimeDataVariableClampedFloat *)0x0))
    goto code_?;
    this = (MVJetPack_LocalObjectsJetPack *)(pMVar12->klass->vtable).get_Value.methodPtr;
    fVar13 = (float10)(*(code *)this)(pMVar12,(pMVar12->klass->vtable).get_Value.method);
    pMVar2 = (pMVar1->fields).owner;
    fVar9 = (float)fVar13;
    if ((pMVar2 == (MVJetPack *)0x0) ||
       (pMVar14 = (pMVar2->fields).Health, pMVar14 == (MVRuntimeDataVariableClampedFloat *)0x0))
    goto code_?;
    this = (MVJetPack_LocalObjectsJetPack *)(pMVar14->klass->vtable).get_Value.methodPtr;
    fVar13 = (float10)(*(code *)this)(pMVar14,(pMVar14->klass->vtable).get_Value.method);
    this = (MVJetPack_LocalObjectsJetPack *)(float)fVar13;
    (*(pMVar12->klass->vtable).set_Value.methodPtr)
              (pMVar12,fVar9 - (float)this,(pMVar12->klass->vtable).set_Value.method);
  }
  else if ((pMVar1->fields).thrustTimeOverheatThreshold - (pMVar1->fields).thrustTimeWarning <
           fVar9) {
    pMVar15 = (pMVar1->fields).avatarPickupOwner;
    uVar10 = (undefined2)CONCAT31((int3)((uint)iVar8 >> 8),2);
    if (pMVar15 == (MVPickupOwner *)0x0) goto code_?;
    pPVar16 = (pMVar15->fields).currentItem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)pPVar16,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar17 != 0) {
      pMVar15 = (pMVar1->fields).avatarPickupOwner;
      if ((pMVar15 == (MVPickupOwner *)0x0) ||
         (pPVar16 = (pMVar15->fields).currentItem, pPVar16 == (PickupItem *)0x0))
      goto code_?;
      cVar18 = (*(pPVar16->klass->vtable).get_ActivateGunModeOnEquip.methodPtr)
                         (pPVar16,(pPVar16->klass->vtable).get_ActivateGunModeOnEquip.method);
      if (cVar18 != '\0') {
        pMVar15 = (pMVar1->fields).avatarPickupOwner;
        if ((pMVar15 == (MVPickupOwner *)0x0) ||
           (pPVar16 = (pMVar15->fields).currentItem, pPVar16 == (PickupItem *)0x0))
        goto code_?;
        if ((pPVar16->fields)._IsHolstered_k__BackingField == 0) goto code_?;
      }
      pJVar19 = (pMVar1->fields).jetPackVisualization;
      if ((pJVar19 == (JetPackVisualization *)0x0) ||
         (this_00 = (pJVar19->fields).vehicleBlinker, this_00 == (VehicleBlinker *)0x0))
      goto code_?;
      BlinkerBase::BlinkerBase_StartBlinking
                ((BlinkerBase *)this_00,BlinkType__Enum_Damage,0.3,(MethodInfo *)0x0);
    }
code_?:
    pJVar20 = (pMVar1->fields).vehicleMotor;
    if (pJVar20 == (JetPackMotor *)0x0) goto code_?;
    if ((pJVar20->fields).leaveMode == 0) {
      this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((this_01 == (MainCameraManager *)0x0) ||
         (pMVar21 = MainCameraManager::MainCameraManager_get_CurrentCamera
                              (this_01,(MethodInfo *)0x0), pMVar21 == (MVCameraBase *)0x0))
      goto code_?;
      iVar8 = (*(pMVar21->klass->vtable).__unknown.methodPtr)
                         (pMVar21,(pMVar21->klass->vtable).__unknown.method);
      if (iVar8 == 0x10) {
        pJVar19 = (pMVar1->fields).jetPackVisualization;
        if (pJVar19 == (JetPackVisualization *)0x0) goto code_?;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__NotificationController);
          cRam_? = '\x01';
        }
        this = (MVJetPack_LocalObjectsJetPack *)
               UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        if (_UNK_? < (float)this - (pJVar19->fields).lastOverHeatNotificationTime) {
          fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0)
          ;
          (pJVar19->fields).lastOverHeatNotificationTime = fVar9;
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
  if ((char)((ushort)uVar10 >> 8) == (char)uVar10) {
    return;
  }
  pMVar2 = (pMVar1->fields).owner;
  if (pMVar2 != (MVJetPack *)0x0) {
    pMVar3 = (pMVar2->fields).JetMode;
    this = (MVJetPack_LocalObjectsJetPack *)CONCAT13((char)uVar10,this._0_3_);
    pOVar4 = (Object *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    if (pMVar3 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar3,pOVar4,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
    cVar3 = (*(pAVar2->klass->vtable).get_Grounded.methodPtr)
                      (pAVar2,(pAVar2->klass->vtable).get_Grounded.method);
    if ((cVar3 == '\0') && ((this->fields).walkMode != 0)) {
      return 0;
    }
    pJVar4 = (this->fields).vehicleMotor;
    if (pJVar4 != (JetPackMotor *)0x0) {
      cVar3 = (*(pJVar4->klass->vtable).get_Grounded.methodPtr)
                        (pJVar4,(pJVar4->klass->vtable).get_Grounded.method);
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
  if ((vehicleUser == (MVAvatarLocal *)0x0) ||
     (pGVar1 = (vehicleUser->fields)._._._.gameObject, pGVar1 == (GameObject *)0x0)) {
code_?:
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  }
  else {
    pSVar3 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar1,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__GetComponent<SmoothCharacterController>__
                        );
    (this->fields).avatarController = pSVar3;
    func_?(&(this->fields).avatarController,pSVar3);
    pGVar1 = (vehicleUser->fields)._._._.gameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pOStack_4 = (Object_1 *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar1,
                           AvatarInteractable_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarInteractable>__
                          );
    pGVar1 = (vehicleUser->fields)._._._.gameObject;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (pGVar1,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    pGVar1 = (vehicleUser->fields)._._._.gameObject;
    pOStack_5 = x;
    if (pGVar1 == (GameObject *)0x0) goto code_?;
    pMVar6 = (MVPickupOwner *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar1,
                         MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                        );
    (this->fields).avatarPickupOwner = pMVar6;
    func_?(&(this->fields).avatarPickupOwner,pMVar6);
    pSVar3 = (this->fields).avatarController;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pSVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 != 0) {
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                ((Object *)StringLiteral_Failed_to_get_component__Cant_cr,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (pOStack_4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 != 0) goto code_?;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 != 0) goto code_?;
    pMVar6 = (this->fields).avatarPickupOwner;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pMVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar7 != 0) goto code_?;
    pSVar3 = (this->fields).avatarController;
    if (vehicleBase == (MVJetPack *)0x0) goto code_?;
    pSStack_8 = (SmoothCharacterController *)(vehicleBase->fields)._._._._.gameObject;
    if (seat == (VehicleSeatBase *)0x0) goto code_?;
    pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)seat,(MethodInfo *)0x0);
    if (pSVar3 == (SmoothCharacterController *)0x0) goto code_?;
    pSStack_8 = SmoothCharacterController::SmoothCharacterController_Clone
                           (pSVar3,(GameObject *)pSStack_8,pGVar1,(CullingSubscriberBase *)0x0,
                            (MVWorldObjectClient *)vehicleBase,(MethodInfo *)0x0);
    MVAvatarLocal::MVAvatarLocal_SetCharacterController(vehicleUser,pSStack_8,(MethodInfo *)0x0);
    if (jetPackTypeParameters == (JetPackParameters *)0x0) goto code_?;
    (this->fields).thrustTimeOverheatThreshold =
         (jetPackTypeParameters->fields).thrustTimeOverheatThreshold;
    (this->fields).coolDownFactor = (jetPackTypeParameters->fields).coolDownFactor;
    pMVar9 = (vehicleBase->fields).Health;
    if (pMVar9 == (MVRuntimeDataVariableClampedFloat *)0x0) goto code_?;
    pMStack_10 = (pMVar9->fields)._._.OnChange;
    pUStack_11 = (UnityAction_1_System_Object_ *)
                func_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    if (pUStack_11 == (UnityAction_1_System_Object_ *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (pUStack_11,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMStack_10,(Delegate *)pUStack_11,(MethodInfo *)0x0);
    pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar9->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
code_?:
      uStack_13 = CONCAT44(uStack_13._4_4_,pMVar12);
      uStack_14 = CONCAT44(&(pMVar9->fields)._._.OnChange,&UNK_?);
      func_?();
      pGVar1 = (vehicleBase->fields)._._._._.gameObject;
      if (pGVar1 != (GameObject *)0x0) {
        pJVar15 = (JetPackVisualization *)
                  Newtonsoft::Json::Linq::LinqExtensions::LinqExtensions_Values_2
                            ((IEnumerable_1_Newtonsoft_Json_Linq_JToken_ *)pGVar1,
                             JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                            );
        (this->fields).jetPackVisualization = pJVar15;
        func_?(&(this->fields).jetPackVisualization,pJVar15);
        pUStack_11 = (UnityAction_1_System_Object_ *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (pGVar1,
                               VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                              );
        if (pUStack_11 != (UnityAction_1_System_Object_ *)0x0) {
          (*(code *)pUStack_11->klass[1]._0.image)
                    (pUStack_11,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,0,
                     (vehicleBase->fields).shield,0,pUStack_11->klass[1]._0.gc_desc);
          this_00 = (JetPackMotor *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                              (pGVar1,
                               JetPackMotor_MethodInfo__UnityEngine__GameObject__AddComponent<JetPackMotor>__
                              );
          pOStack_16 = pOStack_4;
          uStack_17 = 0;
          uStack_14 = 0;
          uStack_13 = 0;
          uStack_18 = 0;
          func_?(&pOStack_16,pOStack_4);
          uStack_17 = CONCAT44(uStack_17._4_4_,pUStack_11);
          func_?(&uStack_17,pUStack_11);
          uStack_17 = CONCAT44(pSStack_8,(undefined4)uStack_17);
          func_?((int)&uStack_17 + 4,pSStack_8);
          iVar19 = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.consumption;
          fVar20 = (jetPackTypeParameters->fields).thrustStrength;
          fVar21 = (jetPackTypeParameters->fields).density;
          uStack_14 = CONCAT44(fVar21,fVar20);
          uStack_13._0_1_ =
               (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.usingEnergy;
          uStack_13._1_3_ =
               *(undefined3 *)
                &(vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.field_0x1;
          uStack_13._4_4_ =
               (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.storage;
          fVar22 = (jetPackTypeParameters->fields).outOfEnergyThrustMax;
          uStack_18 = CONCAT44(fVar22,iVar19);
          if (this_00 != (JetPackMotor *)0x0) {
            jetPackMotorConfig.vehicleInteractable = (VehicleInteractable *)(undefined4)uStack_17;
            jetPackMotorConfig.interactableLocal = (AvatarInteractable *)pOStack_16;
            jetPackMotorConfig.avatarController = (SmoothCharacterController *)uStack_17._4_4_;
            jetPackMotorConfig.thrustStrength = fVar20;
            jetPackMotorConfig.density = fVar21;
            jetPackMotorConfig.vehicleEnergyContainerConfig._0_4_ = (undefined4)uStack_13;
            jetPackMotorConfig.vehicleEnergyContainerConfig.storage = uStack_13._4_4_;
            jetPackMotorConfig.vehicleEnergyContainerConfig.consumption = iVar19;
            jetPackMotorConfig.outOfEnergyThrustMax = fVar22;
            JetPackMotor::JetPackMotor_Init
                      (this_00,(vehicleBase->fields).JetMode,jetPackMotorConfig,(MethodInfo *)0x0);
            pMStack_10 = (MVRuntimeDataVariable_OnChangeDelegate *)
                         UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                         GameObject_AddComponent_1
                                   (pGVar1,
                                    MVEquipableProxy_MethodInfo__UnityEngine__GameObject__AddComponent<MVEquipableProxy>__
                                   );
            if (pMStack_10 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (pMStack_10->fields)._._.method = pOStack_5;
              func_?(&(pMStack_10->fields)._._.method,pOStack_5);
              pMVar23 = (MVTriggerHandler *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (pGVar1,
                                   MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                  );
              (this->fields).triggerHandler = pMVar23;
              func_?(&(this->fields).triggerHandler,pMVar23);
              pLVar24 = (this->fields)._.localComponents;
              if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)pLVar24,(Object *)(this->fields).triggerHandler,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                          );
                pLVar24 = (this->fields)._.localComponents;
                if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                  List_1_System_Object__Add
                            ((List_1_System_Object_ *)pLVar24,(Object *)pUStack_11,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                            );
                  pLVar24 = (this->fields)._.localComponents;
                  if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                    List_1_System_Object__Add
                              ((List_1_System_Object_ *)pLVar24,(Object *)this_00,
                               MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                              );
                    pLVar24 = (this->fields)._.localComponents;
                    if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                      List_1_System_Object__Add
                                ((List_1_System_Object_ *)pLVar24,(Object *)pSStack_8,
                                 MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                );
                      pLVar24 = (this->fields)._.localComponents;
                      if (pLVar24 != (List_1_UnityEngine_Component_ *)0x0) {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                        List_1_System_Object__Add
                                  ((List_1_System_Object_ *)pLVar24,(Object *)pMStack_10,
                                   MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                                  );
                        (this->fields).vehicleMotor = this_00;
                        func_?(&(this->fields).vehicleMotor,this_00);
                        (this->fields).owner = vehicleBase;
                        func_?(&(this->fields).owner,vehicleBase);
                        (this->fields).vehicleUser = vehicleUser;
                        func_?(&(this->fields).vehicleUser,vehicleUser);
                        pCVar25 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                            ((MethodInfo *)0x0);
                        (this->fields).mainCamera = pCVar25;
                        func_?(&(this->fields).mainCamera,pCVar25);
                        pMVar26 = (this->fields).owner;
                        pIVar27 = MVWorldObjectClient::
                                  MVWorldObjectClient_get_InteractionDataHandlerBase
                                            ((MVWorldObjectClient *)vehicleUser,(MethodInfo *)0x0);
                        if (pMVar26 != (MVJetPack *)0x0) {
                          (pMVar26->fields)._._._._.interactionDataHandlerBase = pIVar27;
                          func_?(&(pMVar26->fields)._._._._.interactionDataHandlerBase,
                                          pIVar27);
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
    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar12 = pMVar2;
    }
    pMVar28 = TypeInfo__MVRuntimeDataVariable__OnChangeDelegate;
    if (pMVar12 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
    (pMVar9->fields)._._.OnChange = pMVar12;
    pMVar12 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar2->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
      pMVar12 = pMVar2;
    }
    if (pMVar12 != (MVRuntimeDataVariable_OnChangeDelegate *)0x0) goto code_?;
  }
  uStack_13 = CONCAT44(uStack_13._4_4_,TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
  uStack_14 = CONCAT44(pMVar2,&UNK_?);
  pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)func_?();
  pMVar28 = extraout_ECX;
code_?:
  uStack_13 = CONCAT44(uStack_13._4_4_,pMVar28);
  uStack_14 = CONCAT44(pMVar2,&UNK_?);
  func_?();
  pcVar29 = (code *)swi(3);
  (*pcVar29)();
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

