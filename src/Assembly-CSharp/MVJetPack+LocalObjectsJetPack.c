
/* Void Destroy() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Destroy
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Destroy
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields).owner;
  if ((pMVar1 != (MVJetPack *)0x0) &&
     (pMVar2 = (pMVar1->fields).Health, pMVar2 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pMVar3 = (pMVar2->fields)._._.OnChange;
    this_00 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_00,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
             mscorlib.dll::System::Delegate::Delegate_Remove
                       ((Delegate *)pMVar3,(Delegate *)this_00,(MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar2->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar5 = pMVar3;
      if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar5 = pMVar4;
      }
      if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      (pMVar2->fields)._._.OnChange = pMVar5;
      pMVar5 = pMVar3;
      if (pMVar4->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar5 = pMVar4;
      }
      if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar7 = (uint)((ulonglong)&(pMVar2->fields)._._.OnChange >> 0xc);
      lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
      do {
        uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
        puVar10 = (ulonglong *)(lVar8 + 0xADDR);
        LOCK();
        bVar11 = uVar9 == *puVar10;
        if (bVar11) {
          *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
        }
        UNLOCK();
      } while (!bVar11);
    }
    pMVar12 = (this->fields).avatarPickupOwner;
    if (pMVar12 != (MVPickupOwner *)0x0) {
      source = (pMVar12->fields).onHandleFiring;
      this_01 = (UnityAction_1_System_ByteEnum_ *)
                FUN_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
      UnityAction_1_System_ByteEnum___ctor
                (this_01,(Object *)this,MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,
                 (MethodInfo *)0x0);
      pMVar4 = (MVRuntimeDataVariable_OnChangeDelegate *)
               mscorlib.dll::System::Delegate::Delegate_Remove
                         ((Delegate *)source,(Delegate *)this_01,(MethodInfo *)0x0);
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (pMVar12->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
      }
      else {
        pMVar5 = pMVar3;
        if ((MVPickupOwner_OnHandleFiringDelegate__Class *)pMVar4->klass ==
            TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
          pMVar5 = pMVar4;
        }
        if (pMVar5 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        (pMVar12->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)pMVar5;
        if ((MVPickupOwner_OnHandleFiringDelegate__Class *)pMVar4->klass ==
            TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
          pMVar3 = pMVar4;
        }
        if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?(pMVar4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar7 = (uint)((ulonglong)&(pMVar12->fields).onHandleFiring >> 0xc);
        lVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6) * 8;
        do {
          uVar9 = *(ulonglong *)(lVar8 + 0xADDR);
          puVar10 = (ulonglong *)(lVar8 + 0xADDR);
          LOCK();
          bVar11 = uVar9 == *puVar10;
          if (bVar11) {
            *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
          }
          UNLOCK();
        } while (!bVar11);
      }
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void Enter() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Enter
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase_Enter
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  pJVar1 = (this->fields).vehicleMotor;
  (this->fields).leaveMode = 0;
  if (pJVar1 != (JetPackMotor *)0x0) {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__System__Action<MVControllerColliderHit>);
      LOCK();
      UNLOCK();
      FUN_?(&TypeInfo__IMoveHitHandler);
      LOCK();
      UNLOCK();
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
          this_01 = (UnityAction_1_System_ByteEnum_ *)
                    FUN_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
          UnityAction_1_System_ByteEnum___ctor
                    (this_01,(Object *)this,
                     MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,(MethodInfo *)0x0);
          pMVar4 = (MVPickupOwner_OnHandleFiringDelegate *)
                   mscorlib.dll::System::Delegate::Delegate_Combine
                             ((Delegate *)pMVar4,(Delegate *)this_01,(MethodInfo *)0x0);
          if (pMVar4 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
            (pMVar3->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
          }
          else {
            pMVar5 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
            if (pMVar4->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
              pMVar5 = pMVar4;
            }
            if (pMVar5 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
              FUN_?(pMVar4,TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
            (pMVar3->fields).onHandleFiring = pMVar5;
            pMVar5 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
            if (pMVar4->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
              pMVar5 = pMVar4;
            }
            if (pMVar5 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
              FUN_?();
              pcVar6 = (code *)swi(3);
              (*pcVar6)();
              return;
            }
          }
          if (iRam_? != 0) {
            uVar7 = (uint)((ulonglong)&(pMVar3->fields).onHandleFiring >> 0xc);
            puVar8 = (ulonglong *)((ulonglong)((uVar7 & 0x1fffff) >> 6) * 8 + 0xADDR);
            do {
              uVar9 = *puVar8;
              LOCK();
              uVar10 = *puVar8;
              if (uVar9 == uVar10) {
                *puVar8 = uVar9 | 1L << (uVar7 & 0x3f);
              }
              UNLOCK();
            } while (uVar9 != uVar10);
          }
          return;
        }
      }
    }
  }
  FUN_?();
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
    fVar2 = (pJVar1->fields).waterProximity;
    if (_UNK_? < fVar2) {
      thrust = 0;
    }
    bVar3 = thrust;
    if (((this->fields).leaveMode != 0) && (bVar3 = 1, _UNK_? < fVar2)) {
      bVar3 = thrust;
    }
    pMVar4 = (this->fields).owner;
    if (pMVar4 != (MVJetPack *)0x0) {
      cVar5 = (*(pMVar4->klass->vtable).get_IsDead.methodPtr)
                        (pMVar4,(pMVar4->klass->vtable).get_IsDead.method);
      bVar6 = 0;
      if (cVar5 == '\0') {
        bVar6 = bVar3;
      }
      return bVar6;
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
  return bVar3;
}


/* Quaternion FiringDirectionRotation() */

Quaternion *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
MVJetPack_LocalObjectsJetPack_FiringDirectionRotation
          (Quaternion *__return_storage_ptr__,MVJetPack_LocalObjectsJetPack *this,MethodInfo *method
          )

{
  pMVar1 = (this->fields).avatarPickupOwner;
  if (pMVar1 == (MVPickupOwner *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pQVar3 = (Quaternion *)(*pcVar2)();
    return pQVar3;
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                     (&VStack_5,&(pMVar1->fields).lookDirection,method);
  uVar6._0_4_ = pVVar4->x;
  uVar6._4_4_ = pVVar4->y;
  fStack_7 = pVVar4->z;
  if (cRam_? == '\0') {
    uStack_8 = uVar6;
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_10._0_4_ = (pVVar9->upVector).x;
  uStack_10._4_4_ = (pVVar9->upVector).y;
  fStack_11 = (pVVar9->upVector).z;
  uStack_8 = uVar6 & 0xffffffff;
  uStack_12 = 0;
  uStack_13 = 0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar14 = func_?(&UNK_?);
    FUN_?(uVar14,0);
    pcVar2 = (code *)swi(3);
    pQVar3 = (Quaternion *)(*pcVar2)();
    return pQVar3;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&uStack_8,&uStack_10,&uStack_12);
  __return_storage_ptr__->x = (float)(undefined4)uStack_12;
  __return_storage_ptr__->y = (float)uStack_12._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_13;
  __return_storage_ptr__->w = (float)uStack_13._4_4_;
  return __return_storage_ptr__;
}


/* IInputToPlayerMovement FixedUpdate(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_FixedUpdate
          (MVJetPack_LocalObjectsJetPack *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__IInputToPlayerMovement);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = MVJetPack_LocalObjectsJetPack_HandleWalkMode(this,movementMap,(MethodInfo *)0x0);
  bVar2 = 0;
  if (pIVar1 != (IInputToPlayerMovement *)0x0) {
    bVar2 = FUN_?(1,TypeInfo__IInputToPlayerMovement);
  }
  pJVar3 = (this->fields).vehicleMotor;
  if (pJVar3 != (JetPackMotor *)0x0) {
    if (_UNK_? < (pJVar3->fields).waterProximity) {
      bVar2 = 0;
    }
    bVar4 = bVar2;
    if (((this->fields).leaveMode != 0) &&
       (bVar4 = 1, _UNK_? < (pJVar3->fields).waterProximity)) {
      bVar4 = bVar2;
    }
    pMVar5 = (this->fields).owner;
    if (pMVar5 != (MVJetPack *)0x0) {
      cVar6 = (*(pMVar5->klass->vtable).get_IsDead.methodPtr)
                         (pMVar5,(pMVar5->klass->vtable).get_IsDead.method);
      bVar2 = 0;
      if (cVar6 == '\0') {
        bVar2 = bVar4;
      }
      MVJetPack_LocalObjectsJetPack_OverheatUpdate(this,bVar2,(MethodInfo *)0x0);
      if ((this->fields).walkMode == 0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        bVar4 = 0;
        pQVar7 = TypeInfo__UnityEngine__Quaternion->static_fields;
        fVar8 = (pQVar7->identityQuaternion).x;
        fVar9 = (pQVar7->identityQuaternion).y;
        fVar10 = (pQVar7->identityQuaternion).z;
        fVar11 = (pQVar7->identityQuaternion).w;
        if (pIVar1 != (IInputToPlayerMovement *)0x0) {
          this_00 = (this->fields).mainCamera;
          if (this_00 == (Camera *)0x0) goto code_?;
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this_00,(MethodInfo *)0x0);
          puVar12 = (ulonglong *)FUN_?(&VStack_13,0,TypeInfo__IInputToPlayerMovement);
          uVar14 = *puVar12;
          fVar15 = (float)uVar14;
          fVar16 = (float)(uVar14 >> 0x20);
          fVar17 = *(float *)(puVar12 + 1);
          VStack_18._0_8_ = uVar14;
          VStack_18.z = fVar17;
          fVar19 = (float)FUN_?(&VStack_18);
          if (0.0 < fVar19) {
            if (obj == (Transform *)0x0) goto code_?;
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            QStack_20.x = 0.0;
            QStack_20.y = 0.0;
            QStack_20.z = 0.0;
            QStack_20.w = 0.0;
            pvVar21 = (obj->fields)._._.m_CachedPtr;
            if (pvVar21 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
              pcVar22 = (code *)swi(3);
              pIVar1 = (IInputToPlayerMovement *)(*pcVar22)();
              return pIVar1;
            }
            pcVar22 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
              uVar23 = func_?(&UNK_?);
              FUN_?(uVar23,0);
              pcVar22 = (code *)swi(3);
              pIVar1 = (IInputToPlayerMovement *)(*pcVar22)();
              return pIVar1;
            }
            pcRam_? = pcVar22;
            (*pcRam_?)(pvVar21,&QStack_20);
            aQStack_24[0].x = QStack_20.x;
            aQStack_24[0].y = QStack_20.y;
            aQStack_24[0].z = QStack_20.z;
            aQStack_24[0].w = QStack_20.w;
            VStack_18._0_8_ = uVar14;
            VStack_18.z = fVar17;
            pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                (&VStack_13,aQStack_24,&VStack_18,(MethodInfo *)0x0);
            uVar14._0_4_ = pVVar25->x;
            uVar14._4_4_ = pVVar25->y;
            fVar17 = pVVar25->z;
            VStack_18._0_8_ = uVar14 & 0xffffffff;
            VStack_13._0_8_ = VStack_18._0_8_;
            VStack_13.z = fVar17;
            fVar19 = (float)FUN_?(&VStack_13);
            if (_UNK_? < fVar19) {
              fVar15 = VStack_18.x / fVar19;
              fVar16 = 0.0 / fVar19;
              fVar17 = fVar17 / fVar19;
            }
            else {
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Vector3);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
              fVar15 = (pVVar26->zeroVector).x;
              fVar16 = (pVVar26->zeroVector).y;
              fVar17 = (pVVar26->zeroVector).z;
            }
          }
          pJVar3 = (this->fields).vehicleMotor;
          if (pJVar3 == (JetPackMotor *)0x0) goto code_?;
          pJVar27 = pJVar3->klass;
          method_00 = (pJVar27->vtable).get_Velocity.method;
          puVar12 = (ulonglong *)(*(pJVar27->vtable).get_Velocity.methodPtr)(&VStack_18);
          VStack_13._0_8_ = *puVar12;
          fVar19 = (float)((ulonglong)VStack_13._0_8_ >> 0x20);
          if ((_UNK_? <
               fVar19 * fVar19 + VStack_13.x * VStack_13.x +
               *(float *)(puVar12 + 1) * *(float *)(puVar12 + 1)) || ((this->fields).wasFiring != 0)
             ) {
            pMVar28 = (this->fields).avatarPickupOwner;
            if (pMVar28 == (MVPickupOwner *)0x0) goto code_?;
            pVVar25 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_normalized
                                ((Vector3 *)&QStack_20,&(pMVar28->fields).lookDirection,method_00);
            uVar29._0_4_ = pVVar25->x;
            uVar29._4_4_ = pVVar25->y;
            fVar8 = pVVar25->z;
            if (cRam_? == '\0') {
              VStack_13._0_8_ = uVar29;
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar26 = TypeInfo__UnityEngine__Vector3->static_fields;
            VStack_13.x = (pVVar26->upVector).x;
            VStack_13.y = (pVVar26->upVector).y;
            VStack_13.z = (pVVar26->upVector).z;
            VStack_18._0_8_ = uVar29 & 0xffffffff;
            aQStack_24[0].x = 0.0;
            aQStack_24[0].y = 0.0;
            aQStack_24[0].z = 0.0;
            aQStack_24[0].w = 0.0;
            pcVar22 = pcRam_?;
            VStack_18.z = fVar8;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar22 = (code *)FUN_?(&UNK_?), pcVar22 == (code *)0x0)) {
              uVar23 = func_?(&UNK_?);
              FUN_?(uVar23,0);
              pcVar22 = (code *)swi(3);
              pIVar1 = (IInputToPlayerMovement *)(*pcVar22)();
              return pIVar1;
            }
            pcRam_? = pcVar22;
            (*pcRam_?)(&VStack_18,&VStack_13,aQStack_24);
            bVar4 = 1;
            fVar8 = aQStack_24[0].x;
            fVar9 = aQStack_24[0].y;
            fVar10 = aQStack_24[0].z;
            fVar11 = aQStack_24[0].w;
          }
          pJVar3 = (this->fields).vehicleMotor;
          if (pJVar3 == (JetPackMotor *)0x0) goto code_?;
          (pJVar3->fields)._InputMoveDirection_k__BackingField.x = fVar15;
          (pJVar3->fields)._InputMoveDirection_k__BackingField.y = fVar16;
          (pJVar3->fields)._InputMoveDirection_k__BackingField.z = fVar17;
        }
        pJVar3 = (this->fields).vehicleMotor;
        if (pJVar3 != (JetPackMotor *)0x0) {
          (pJVar3->fields)._Thrust_k__BackingField = bVar2;
          pJVar3 = (this->fields).vehicleMotor;
          if (pJVar3 != (JetPackMotor *)0x0) {
            aQStack_24[0].y = fVar9;
            aQStack_24[0].x = fVar8;
            aQStack_24[0].w = fVar11;
            aQStack_24[0].z = fVar10;
            JetPackMotor::JetPackMotor_FixedUpdateFunction
                      (pJVar3,aQStack_24,bVar4,(MethodInfo *)0x0);
            return pIVar1;
          }
        }
      }
      else {
        pMVar30 = (this->fields).vehicleUser;
        if (pMVar30 != (MVAvatarLocal *)0x0) {
          pJVar3 = (this->fields).vehicleMotor;
          this_01 = (pMVar30->fields).avatarMotor;
          if ((pJVar3 != (JetPackMotor *)0x0) &&
             (pVVar25 = JetPackMotor::JetPackMotor_get_Impulses
                                  ((Vector3 *)&QStack_20,pJVar3,(MethodInfo *)0x0),
             this_01 != (AvatarMotor *)0x0)) {
            VStack_13.x = pVVar25->x;
            VStack_13.y = pVVar25->y;
            VStack_13.z = pVVar25->z;
            MVRigidBody::MVRigidBody_AddImpulse_1
                      ((MVRigidBody *)this_01,&VStack_13,0,(MethodInfo *)0x0);
            return pIVar1;
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar22 = (code *)swi(3);
  pIVar1 = (IInputToPlayerMovement *)(*pcVar22)();
  return pIVar1;
}


/* IInputToPlayerMovement HandleWalkMode(IInputToPlayerMovement) */

IInputToPlayerMovement *
Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_HandleWalkMode
          (MVJetPack_LocalObjectsJetPack *this,IInputToPlayerMovement *movementMap,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__IInputToPlayerMovement);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Vehicle_is_stuck);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Idle);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (movementMap == (IInputToPlayerMovement *)0x0) {
    return (IInputToPlayerMovement *)0x0;
  }
  cVar1 = FUN_?(1,TypeInfo__IInputToPlayerMovement);
  piVar2 = &(this->fields).framesGrounded;
  *piVar2 = *piVar2 + 1;
  if (cVar1 == '\0') {
    pMVar3 = (this->fields).vehicleUser;
    if ((pMVar3 == (MVAvatarLocal *)0x0) ||
       (pAVar4 = (pMVar3->fields).avatarMotor, pAVar4 == (AvatarMotor *)0x0))
    goto code_?;
    cVar1 = (*(pAVar4->klass->vtable).get_Grounded.methodPtr)
                      (pAVar4,(pAVar4->klass->vtable).get_Grounded.method);
    if ((cVar1 == '\0') && ((this->fields).walkMode != 0)) goto code_?;
    pJVar5 = (this->fields).vehicleMotor;
    if (pJVar5 == (JetPackMotor *)0x0) goto code_?;
    cVar1 = (*(pJVar5->klass->vtable).get_Grounded.methodPtr)();
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
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                  ((Object *)StringLiteral_Vehicle_is_stuck,(MethodInfo *)0x0);
      }
    }
    return movementMap;
  }
code_?:
  FUN_?();
  pcVar7 = (code *)swi(3);
  pIVar8 = (IInputToPlayerMovement *)(*pcVar7)();
  return pIVar8;
}


/* Void Leave() */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_Leave
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
    LOCK();
    UNLOCK();
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
          bVar3 = iRam_? != 0;
          (pMVar2->fields)._._._._.interactionDataHandlerBase = (InteractionDataHandlerBase *)0x0;
          if (bVar3) {
            uVar4 = (uint)((ulonglong)&(pMVar2->fields)._._._._.interactionDataHandlerBase >> 0xc);
            lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
            do {
              uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
              puVar7 = (ulonglong *)(lVar5 + 0xADDR);
              LOCK();
              bVar3 = uVar6 == *puVar7;
              if (bVar3) {
                *puVar7 = uVar6 | 1L << (ulonglong)(uVar4 & 0x3f);
              }
              UNLOCK();
            } while (!bVar3);
          }
          pMVar8 = (this->fields).avatarPickupOwner;
          if (pMVar8 != (MVPickupOwner *)0x0) {
            pMVar9 = (pMVar8->fields).onHandleFiring;
            this_01 = (UnityAction_1_System_ByteEnum_ *)
                      FUN_?(TypeInfo__MVPickupOwner__OnHandleFiringDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::ByteEnum]::
            UnityAction_1_System_ByteEnum___ctor
                      (this_01,(Object *)this,
                       MethodInfo__MVJetPack__LocalObjectsJetPack__OnFiring_bool_,(MethodInfo *)0x0)
            ;
            pMVar9 = (MVPickupOwner_OnHandleFiringDelegate *)
                     mscorlib.dll::System::Delegate::Delegate_Remove
                               ((Delegate *)pMVar9,(Delegate *)this_01,(MethodInfo *)0x0);
            if (pMVar9 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
              (pMVar8->fields).onHandleFiring = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
            }
            else {
              pMVar10 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
              if (pMVar9->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
                pMVar10 = pMVar9;
              }
              if (pMVar10 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
                FUN_?(pMVar9);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
              (pMVar8->fields).onHandleFiring = pMVar10;
              pMVar10 = (MVPickupOwner_OnHandleFiringDelegate *)0x0;
              if (pMVar9->klass == TypeInfo__MVPickupOwner__OnHandleFiringDelegate) {
                pMVar10 = pMVar9;
              }
              if (pMVar10 == (MVPickupOwner_OnHandleFiringDelegate *)0x0) {
                FUN_?(pMVar9);
                pcVar11 = (code *)swi(3);
                (*pcVar11)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar4 = (uint)((ulonglong)&(pMVar8->fields).onHandleFiring >> 0xc);
              lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
              do {
                uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
                puVar7 = (ulonglong *)(lVar5 + 0xADDR);
                LOCK();
                bVar3 = uVar6 == *puVar7;
                if (bVar3) {
                  *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
                }
                UNLOCK();
              } while (!bVar3);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OverheatUpdate(Boolean) */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::
     MVJetPack_LocalObjectsJetPack_OverheatUpdate
               (MVJetPack_LocalObjectsJetPack *this,bool thrust,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVJetPack__JetModeType);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).owner;
  if ((pMVar1 == (MVJetPack *)0x0) ||
     (pMVar2 = (pMVar1->fields).JetMode, pMVar2 == (MVRuntimeDataVariable *)0x0))
  goto code_?;
  pOVar3 = ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                      ((pMVar2->fields).value,(MethodInfo *)0x0);
  cVar4 = '\0';
  if (thrust == 0) {
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class)
    {
      FUN_?(pOVar3,TypeInfo__MVJetPack__JetModeType);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar6 = *(char *)&pOVar3[1].klass;
    fVar7 = (this->fields).thrustTime;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    fVar9 = (float)(*pcRam_?)();
    fVar7 = fVar7 - fVar9 * (this->fields).coolDownFactor;
  }
  else {
    if (pOVar3 == (Object *)0x0) goto code_?;
    if ((pOVar3->klass->_0).element_class != (TypeInfo__MVJetPack__JetModeType->_0).element_class)
    {
      FUN_?(pOVar3);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    cVar6 = *(char *)&pOVar3[1].klass;
    fVar9 = (this->fields).thrustTime;
    pcVar5 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
      uVar8 = func_?(&UNK_?);
      FUN_?(uVar8,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pcRam_? = pcVar5;
    cVar4 = '\x01';
    fVar7 = (float)(*pcRam_?)();
    fVar7 = fVar7 + fVar9;
  }
  (this->fields).thrustTime = fVar7;
  if (fVar7 < 0.0) {
    fVar7 = 0.0;
  }
  else if (_UNK_? < fVar7) {
    fVar7 = _UNK_?;
  }
  pfVar10 = &(this->fields).thrustTimeOverheatThreshold;
  (this->fields).thrustTime = fVar7;
  if (*pfVar10 <= fVar7 && fVar7 != *pfVar10) {
    pMVar1 = (this->fields).owner;
    if ((pMVar1 == (MVJetPack *)0x0) ||
       (pMVar11 = (pMVar1->fields).Health, pMVar11 == (MVRuntimeDataVariableClampedFloat *)0x0))
    goto code_?;
    fVar9 = (float)(*(pMVar11->klass->vtable).get_Value.methodPtr)
                              (pMVar11,(pMVar11->klass->vtable).get_Value.method);
    pMVar1 = (this->fields).owner;
    if ((pMVar1 == (MVJetPack *)0x0) ||
       (pMVar12 = (pMVar1->fields).Health, pMVar12 == (MVRuntimeDataVariableClampedFloat *)0x0))
    goto code_?;
    fVar7 = (float)(*(pMVar12->klass->vtable).get_Value.methodPtr)
                              (pMVar12,(pMVar12->klass->vtable).get_Value.method);
    (*(pMVar11->klass->vtable).set_Value.methodPtr)(pMVar11,fVar9 - fVar7);
  }
  else if ((this->fields).thrustTimeOverheatThreshold - (this->fields).thrustTimeWarning < fVar7) {
    pMVar13 = (this->fields).avatarPickupOwner;
    cVar4 = '\x02';
    if (pMVar13 == (MVPickupOwner *)0x0) goto code_?;
    pPVar14 = (pMVar13->fields).currentItem;
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (cRam_? == '\0') {
      FUN_?();
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if (pPVar14 != (PickupItem *)0x0) {
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pPVar14->fields)._._._._.m_CachedPtr != (void *)0x0) {
        pMVar13 = (this->fields).avatarPickupOwner;
        if ((pMVar13 == (MVPickupOwner *)0x0) ||
           (pPVar14 = (pMVar13->fields).currentItem, pPVar14 == (PickupItem *)0x0))
        goto code_?;
        cVar15 = (*(pPVar14->klass->vtable).get_FirstPerson.methodPtr)();
        if (cVar15 != '\0') {
          pMVar13 = (this->fields).avatarPickupOwner;
          if ((pMVar13 == (MVPickupOwner *)0x0) ||
             (pPVar14 = (pMVar13->fields).currentItem, pPVar14 == (PickupItem *)0x0))
          goto code_?;
          if ((pPVar14->fields)._IsHolstered_k__BackingField == 0) goto code_?;
        }
        pJVar16 = (this->fields).jetPackVisualization;
        if ((pJVar16 == (JetPackVisualization *)0x0) ||
           (this_00 = (pJVar16->fields).vehicleBlinker, this_00 == (VehicleBlinker *)0x0))
        goto code_?;
        BlinkerBase::BlinkerBase_StartBlinking
                  ((BlinkerBase *)this_00,BlinkType__Enum_Damage,_UNK_?,(MethodInfo *)0x0);
      }
    }
code_?:
    pJVar17 = (this->fields).vehicleMotor;
    if (pJVar17 == (JetPackMotor *)0x0) goto code_?;
    if ((pJVar17->fields).leaveMode == 0) {
      pMVar18 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if ((((pMVar18 == (MainCameraManager *)0x0) ||
           (pMVar19 = (pMVar18->fields).cameraController, pMVar19 == (MVCameraController *)0x0)) ||
          (this_01 = (pMVar19->fields).cameraStack, this_01 == (MVCameraController_CameraStack *)0x0)
          ) || (pMVar20 = MVCameraController+CameraStack::
                          MVCameraController_CameraStack_get_CurCamera(this_01,(MethodInfo *)0x0),
               pMVar20 == (MVCameraBase *)0x0)) goto code_?;
      iVar21 = (*(pMVar20->klass->vtable).__unknown.methodPtr)
                         (pMVar20,(pMVar20->klass->vtable).__unknown.method);
      if (iVar21 == 0x10) {
        pJVar16 = (this->fields).jetPackVisualization;
        if (pJVar16 == (JetPackVisualization *)0x0) goto code_?;
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__NotificationController);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar8 = func_?(&UNK_?);
          FUN_?(uVar8,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        fVar9 = (float)(*pcRam_?)();
        if (TypeRef__System__Activator__T._0_4_ <
            fVar9 - (pJVar16->fields).lastOverHeatNotificationTime) {
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar8 = func_?(&UNK_?);
            FUN_?(uVar8,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          fVar9 = (float)(*pcRam_?)();
          (pJVar16->fields).lastOverHeatNotificationTime = fVar9;
          if (*(int *)&(TypeInfo__NotificationController->_1).field_0x1c == 0) {
            FUN_?();
          }
          NotificationController::NotificationController_PushNotification_1
                    (NotificationType__Enum_JetPackOverheating,NotificationLifetime__Enum_High,
                     (MethodInfo *)0x0);
        }
      }
    }
  }
  if (cVar6 == cVar4) {
    return;
  }
  pMVar1 = (this->fields).owner;
  if (pMVar1 != (MVJetPack *)0x0) {
    pMVar2 = (pMVar1->fields).JetMode;
    acStackX_8[0] = cVar4;
    pOVar3 = (Object *)FUN_?(uRam_?,acStackX_8);
    if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value(pMVar2,pOVar3,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void RefillEnergy(VehicleEnergyRefill) */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_RefillEnergy
               (MVJetPack_LocalObjectsJetPack *this,VehicleEnergyRefill *vehicleEnergyRefill,
               MethodInfo *method)

{
  pJVar1 = (this->fields).vehicleMotor;
  if ((pJVar1 != (JetPackMotor *)0x0) &&
     (this_00 = (pJVar1->fields).vehicleEnergyContainer, this_00 != (VehicleEnergyContainer *)0x0))
  {
    aVStack_2[0].spawnerId = vehicleEnergyRefill->spawnerId;
    aVStack_2[0].prediction = vehicleEnergyRefill->prediction;
    aVStack_2[0]._5_3_ = *(undefined3 *)&vehicleEnergyRefill->field_0x5;
    aVStack_2[0].amount = vehicleEnergyRefill->amount;
    WorldObjectTypes::VehicleEnergy::VehicleEnergyContainer::VehicleEnergyContainer_RefillEnergy
              (this_00,aVStack_2,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
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
  if ((pJVar1 == (JetPackMotor *)0x0) ||
     (pVVar2 = (pJVar1->fields).vehicleEnergyContainer, pVVar2 == (VehicleEnergyContainer *)0x0)) {
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                  ,CONCAT44(in_register_00000014,spawnerId),0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar4 = (pVVar2->fields).predictions;
  if (pDVar4 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                 *)0x0) {
    uVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes
            ::VehicleEnergy::VehicleEnergyRefillPrediction]::
            Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__FindEntry
                      (pDVar4,spawnerId,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__TryGetValue_int__WorldObjectTypes__VehicleEnergy__VehicleEnergyRefillPrediction__
                       ->klass->rgctx_data[0x21].method);
    if ((int)uVar5 < 0) {
      return;
    }
    pDVar6 = (pDVar4->fields)._entries;
    if (pDVar6 != (Dictionary_2_TKey_TValue_Entry_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction___Array
                   *)0x0) {
      if ((uint)pDVar6->max_length <= uVar5) {
        FUN_?();
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      fVar7 = pDVar6->vector[(int)uVar5].value.vehicleEnergyRefill.amount;
      if (cRam_? == '\0') {
        FUN_?(&
                      MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      fVar7 = (pVVar2->fields).energyStorage - fVar7 * (pVVar2->fields).originalEnergyStorage;
      (pVVar2->fields).energyStorage = fVar7;
      if (fVar7 < 0.0) {
        (pVVar2->fields).energyStorage = 0.0;
      }
      pDVar4 = (pVVar2->fields).predictions;
      if (pDVar4 != (Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,WorldObjectTypes::
        VehicleEnergy::VehicleEnergyRefillPrediction]::
        Dictionary_2_System_Int32_WorldObjectTypes_VehicleEnergy_VehicleEnergyRefillPrediction__Remove
                  (pDVar4,spawnerId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_WorldObjectTypes::VehicleEnergy::VehicleEnergyRefillPrediction>__Remove_int_
                  );
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
    if (((pJVar1 == (JetPackMotor *)0x0) ||
        (pSVar2 = (pJVar1->fields).smoothController, pSVar2 == (SmoothCharacterController *)0x0)) ||
       (this_00 = (pSVar2->fields).smoothPhysicsMovement, this_00 == (SmoothPhysicsMovement *)0x0))
    {
      FUN_?();
      pcVar3 = (code *)swi(3);
      pIVar4 = (InputToInGameAction *)(*pcVar3)();
      return pIVar4;
    }
    SmoothPhysicsMovement::SmoothPhysicsMovement_SmoothMove(this_00,(MethodInfo *)0x0);
  }
  return interactionInput;
}


/* Boolean UsesEnergy() */

bool Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_UsesEnergy
               (MVJetPack_LocalObjectsJetPack *this,MethodInfo *method)

{
  pJVar1 = (this->fields).vehicleMotor;
  if ((pJVar1 != (JetPackMotor *)0x0) &&
     (pVVar2 = (pJVar1->fields).vehicleEnergyContainer, pVVar2 != (VehicleEnergyContainer *)0x0)) {
    return (pVVar2->fields)._UsingEnergy_k__BackingField;
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  bVar4 = (*pcVar3)();
  return bVar4;
}


/* Boolean WalkMode(Boolean) */

bool Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack_WalkMode
               (MVJetPack_LocalObjectsJetPack *this,bool thrust,MethodInfo *method)

{
  piVar1 = &(this->fields).framesGrounded;
  *piVar1 = *piVar1 + 1;
  if (thrust != 0) {
    (this->fields).framesGrounded = 0;
    return 0;
  }
  pMVar2 = (this->fields).vehicleUser;
  if ((pMVar2 != (MVAvatarLocal *)0x0) &&
     (pAVar3 = (pMVar2->fields).avatarMotor, pAVar3 != (AvatarMotor *)0x0)) {
    cVar4 = (*(pAVar3->klass->vtable).get_Grounded.methodPtr)
                      (pAVar3,(pAVar3->klass->vtable).get_Grounded.method);
    if ((cVar4 == '\0') && ((this->fields).walkMode != 0)) {
      return 0;
    }
    pJVar5 = (this->fields).vehicleMotor;
    if (pJVar5 != (JetPackMotor *)0x0) {
      cVar4 = (*(pJVar5->klass->vtable).get_Grounded.methodPtr)
                        (pJVar5,(pJVar5->klass->vtable).get_Grounded.method);
      if (cVar4 == '\0') {
        (this->fields).framesGrounded = 0;
        return 0;
      }
      return (this->fields).framesGroundedThreshold < (this->fields).framesGrounded;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* MVJetPack+LocalObjectsJetPack(MVJetPack, MVAvatarLocal, JetPackParameters, VehicleSeatBase) */

void Assembly-CSharp.dll::MVJetPack+LocalObjectsJetPack::MVJetPack_LocalObjectsJetPack__ctor
               (MVJetPack_LocalObjectsJetPack *this,MVJetPack *vehicleBase,
               MVAvatarLocal *vehicleUser,JetPackParameters *jetPackTypeParameters,
               VehicleSeatBase *seat,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&JetPackMotor_MethodInfo__UnityEngine__GameObject__AddComponent<JetPackMotor>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVEquipableProxy_MethodInfo__UnityEngine__GameObject__AddComponent<MVEquipableProxy>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  JetPackVisualization_MethodInfo__UnityEngine__GameObject__GetComponentInChildren<JetPackVisualization>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  AvatarInteractable_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    LOCK();
    UNLOCK();
    FUN_?(&MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&
                  SmoothCharacterController_MethodInfo__UnityEngine__GameObject__GetComponent<SmoothCharacterController>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_Failed_to_get_component__Cant_cr);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVStack_1 = (VehicleInteractable *)0x0;
  pSStack_2 = (SmoothCharacterController *)0x0;
  auStack_3._8_4_ = 0;
  fStack_4 = 0.0;
  uStack_5._0_4_ = 0.0;
  uStack_5._4_4_ = 0.0;
  auStack_3[0] = 0;
  auStack_3._1_3_ = 0;
  auStack_3._4_4_ = 0;
  (this->fields).thrustTimeOverheatThreshold = 3.0;
  (this->fields).thrustTimeWarning = 1.0;
  (this->fields).coolDownFactor = 0.5;
  (this->fields).walkMode = 1;
  (this->fields).framesGroundedThreshold = 2;
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  if ((vehicleUser != (MVAvatarLocal *)0x0) &&
     (pGVar6 = (vehicleUser->fields)._._._.gameObject, pGVar6 != (GameObject *)0x0)) {
    pSVar7 = (SmoothCharacterController *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar6,
                         SmoothCharacterController_MethodInfo__UnityEngine__GameObject__GetComponent<SmoothCharacterController>__
                        );
    bVar8 = iRam_? != 0;
    (this->fields).avatarController = pSVar7;
    if (bVar8) {
      uVar9 = (uint)((ulonglong)&(this->fields).avatarController >> 0xc);
      uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
      do {
        uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
        puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar11 == *puVar12;
        if (bVar8) {
          *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    pGVar6 = (vehicleUser->fields)._._._.gameObject;
    if (pGVar6 != (GameObject *)0x0) {
      pAVar13 = (AvatarInteractable *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (pGVar6,
                           AvatarInteractable_MethodInfo__UnityEngine__GameObject__GetComponent<AvatarInteractable>__
                          );
      pGVar6 = (vehicleUser->fields)._._._.gameObject;
      if (pGVar6 != (GameObject *)0x0) {
        pOVar14 = (Object__Class *)
                  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                            (pGVar6,
                             MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__
                            );
        pGVar6 = (vehicleUser->fields)._._._.gameObject;
        if (pGVar6 != (GameObject *)0x0) {
          pMVar15 = (MVPickupOwner *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (pGVar6,
                               MVPickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<MVPickupOwner>__
                              );
          bVar8 = iRam_? != 0;
          (this->fields).avatarPickupOwner = pMVar15;
          if (bVar8) {
            uVar9 = (uint)((ulonglong)&(this->fields).avatarPickupOwner >> 0xc);
            uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
            do {
              uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
              puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
              LOCK();
              bVar8 = uVar11 == *puVar12;
              if (bVar8) {
                *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
              }
              UNLOCK();
            } while (!bVar8);
          }
          pSVar7 = (this->fields).avatarController;
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__UnityEngine__Object);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          if (pSVar7 != (SmoothCharacterController *)0x0) {
            if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((pSVar7->fields)._._._._.m_CachedPtr != (void *)0x0) {
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                FUN_?();
              }
              if (cRam_? == '\0') {
                FUN_?(&TypeInfo__UnityEngine__Object);
                LOCK();
                UNLOCK();
                cRam_? = '\x01';
              }
              if (pAVar13 != (AvatarInteractable *)0x0) {
                if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                  FUN_?();
                }
                if ((void *)(pAVar13->fields)._._._._._._._ != (void *)0x0) {
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  if (cRam_? == '\0') {
                    FUN_?(&TypeInfo__UnityEngine__Object);
                    LOCK();
                    UNLOCK();
                    cRam_? = '\x01';
                  }
                  if (pOVar14 != (Object__Class *)0x0) {
                    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                      FUN_?();
                    }
                    if ((pOVar14->_0).name != (char *)0x0) {
                      pMVar15 = (this->fields).avatarPickupOwner;
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                        FUN_?();
                      }
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__UnityEngine__Object);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      if (pMVar15 != (MVPickupOwner *)0x0) {
                        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
                          FUN_?();
                        }
                        if ((pMVar15->fields)._._._._._.m_CachedPtr != (void *)0x0) {
                          pSVar7 = (this->fields).avatarController;
                          if (((vehicleBase != (MVJetPack *)0x0) &&
                              (pGVar6 = (vehicleBase->fields)._._._._.gameObject,
                              seat != (VehicleSeatBase *)0x0)) &&
                             (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                        Component_get_gameObject
                                                  ((Component *)seat,(MethodInfo *)0x0),
                             pSVar7 != (SmoothCharacterController *)0x0)) {
                            if (cRam_? == '\0') {
                              FUN_?(&
                                            SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                                           );
                              LOCK();
                              UNLOCK();
                              cRam_? = '\x01';
                            }
                            if ((pGVar6 != (GameObject *)0x0) &&
                               (this_01 = (SmoothCharacterController *)
                                          UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_AddComponent_1
                                                    (pGVar6,
                                                  SmoothCharacterController_MethodInfo__UnityEngine__GameObject__AddComponent<SmoothCharacterController>__
                                                  ), this_01 != (SmoothCharacterController *)0x0)) {
                              SmoothCharacterController::SmoothCharacterController_Init
                                        (this_01,pGVar6,(CullingSubscriberBase *)0x0,
                                         (MVWorldObjectClient *)vehicleBase,(MethodInfo *)0x0);
                              pMVar16 = (pSVar7->fields).controller;
                              pMVar17 = (this_01->fields).controller;
                              if (pMVar16 != (MvCharacterController *)0x0) {
                                fVar18 = (pMVar16->fields).elipsoidRadius.y;
                                fVar19 = (pMVar16->fields).elipsoidRadius.x;
                                if ((this_00 != (GameObject *)0x0) &&
                                   (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                          GameObject_get_transform(this_00,(MethodInfo *)0x0),
                                   obj != (Transform *)0x0)) {
                                  if (cRam_? == '\0') {
                                    FUN_?(&
                                                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                                 );
                                    LOCK();
                                    UNLOCK();
                                    cRam_? = '\x01';
                                  }
                                  uStack_20 = 0;
                                  fStack_21 = 0.0;
                                  pvVar22 = (obj->fields)._._.m_CachedPtr;
                                  if (pvVar22 == (void *)0x0) {
                                    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                                    ThrowHelper_2_ThrowNullReferenceException
                                              ((Object *)obj,(MethodInfo *)0x0);
                                    pcVar23 = (code *)swi(3);
                                    (*pcVar23)();
                                    return;
                                  }
                                  pcVar23 = pcRam_?;
                                  if ((pcRam_? == (code *)0x0) &&
                                     (pcVar23 = (code *)FUN_?(&UNK_?),
                                     pcVar23 == (code *)0x0)) {
                                    uVar24 = func_?(&UNK_?);
                                    FUN_?(uVar24,0);
                                    pcVar23 = (code *)swi(3);
                                    (*pcVar23)();
                                    return;
                                  }
                                  pcRam_? = pcVar23;
                                  (*pcRam_?)(pvVar22,&uStack_20);
                                  if (pMVar17 != (MvCharacterController *)0x0) {
                                    fVar18 = (fVar18 + fVar18) * _UNK_?;
                                    (pMVar17->fields).center.x = (float)(undefined4)uStack_20;
                                    (pMVar17->fields).center.y = (float)uStack_20._4_4_;
                                    (pMVar17->fields).center.z = fStack_21;
                                    (pMVar17->fields).elipsoidRadius.x = fVar19;
                                    (pMVar17->fields).elipsoidRadius.y = fVar18;
                                    (pMVar17->fields).centerBase.x = (float)(undefined4)uStack_20;
                                    (pMVar17->fields).centerBase.y = (float)uStack_20._4_4_;
                                    (pMVar17->fields).centerBase.z = fStack_21;
                                    (pMVar17->fields).elipsoidRadius.z = fVar19;
                                    fVar18 = (pMVar17->fields).elipsoidRadius.y;
                                    (pMVar17->fields).radiusBase.x =
                                         (pMVar17->fields).elipsoidRadius.x;
                                    (pMVar17->fields).radiusBase.y = fVar18;
                                    (pMVar17->fields).radiusBase.z = fVar19;
                                    MVAvatarLocal::MVAvatarLocal_SetCharacterController
                                              (vehicleUser,this_01,(MethodInfo *)0x0);
                                    if (jetPackTypeParameters != (JetPackParameters *)0x0) {
                                      (this->fields).thrustTimeOverheatThreshold =
                                           (jetPackTypeParameters->fields).
                                           thrustTimeOverheatThreshold;
                                      (this->fields).coolDownFactor =
                                           (jetPackTypeParameters->fields).coolDownFactor;
                                      pMVar25 = (vehicleBase->fields).Health;
                                      if (pMVar25 != (MVRuntimeDataVariableClampedFloat *)0x0) {
                                        pMVar26 = (pMVar25->fields)._._.OnChange;
                                        this_02 = (UnityAction_1_System_Object_ *)
                                                  FUN_?(
                                                  TypeInfo__MVRuntimeDataVariable__OnChangeDelegate)
                                        ;
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`1[System::Object]::
                                        UnityAction_1_System_Object___ctor
                                                  (this_02,(Object *)this,
                                                                                                      
                                                  MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_
                                                  ,(MethodInfo *)0x0);
                                        pMVar26 = (MVRuntimeDataVariable_OnChangeDelegate *)
                                                  mscorlib.dll::System::Delegate::Delegate_Combine
                                                            ((Delegate *)pMVar26,(Delegate *)this_02
                                                             ,(MethodInfo *)0x0);
                                        if (pMVar26 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0
                                           ) {
                                          (pMVar25->fields)._._.OnChange =
                                               (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                                        }
                                        else {
                                          pMVar27 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                                          if (pMVar26->klass ==
                                              TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                            pMVar27 = pMVar26;
                                          }
                                          if (pMVar27 ==
                                              (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                            FUN_?();
                                            pcVar23 = (code *)swi(3);
                                            (*pcVar23)();
                                            return;
                                          }
                                          (pMVar25->fields)._._.OnChange = pMVar27;
                                          pMVar27 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
                                          if (pMVar26->klass ==
                                              TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
                                            pMVar27 = pMVar26;
                                          }
                                          if (pMVar27 ==
                                              (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                                            FUN_?();
                                            pcVar23 = (code *)swi(3);
                                            (*pcVar23)();
                                            return;
                                          }
                                        }
                                        func_?(&(pMVar25->fields)._._.OnChange);
                                        pGVar6 = (vehicleBase->fields)._._._._.gameObject;
                                        if (pGVar6 != (GameObject *)0x0) {
                                          pJVar28 = (JetPackVisualization *)FUN_?(pGVar6);
                                          (this->fields).jetPackVisualization = pJVar28;
                                          func_?(&(this->fields).jetPackVisualization);
                                          pVVar29 = (VehicleInteractable *)
                                                    UnityEngine.CoreModule.dll::UnityEngine::
                                                    GameObject::GameObject_AddComponent_1
                                                              (pGVar6,
                                                  VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                                                  );
                                          if (pVVar29 != (VehicleInteractable *)0x0) {
                                            pMVar25 = (vehicleBase->fields).shield;
                                            FUN_?(pMVar25,pVVar29,
                                                          (vehicleBase->fields).Modifiers,
                                                          (vehicleBase->fields).Health,0,pMVar25,0);
                                            this_03 = (JetPackMotor *)
                                                      UnityEngine.CoreModule.dll::UnityEngine::
                                                      GameObject::GameObject_AddComponent_1
                                                                (pGVar6,
                                                  JetPackMotor_MethodInfo__UnityEngine__GameObject__AddComponent<JetPackMotor>__
                                                  );
                                            if (iRam_? != 0) {
                                              uVar9 = (uint)((ulonglong)&pAStack_30 >> 0xc);
                                              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
                                              do {
                                                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                                                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                                                LOCK();
                                                bVar8 = uVar11 == *puVar12;
                                                if (bVar8) {
                                                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar8);
                                            }
                                            if (iRam_? != 0) {
                                              uVar9 = (uint)((ulonglong)&pVStack_1 >> 0xc);
                                              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
                                              do {
                                                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                                                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                                                LOCK();
                                                bVar8 = uVar11 == *puVar12;
                                                if (bVar8) {
                                                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar8);
                                            }
                                            if (iRam_? != 0) {
                                              uVar9 = (uint)((ulonglong)&pSStack_2 >> 0xc);
                                              uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
                                              do {
                                                uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
                                                puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
                                                LOCK();
                                                bVar8 = uVar11 == *puVar12;
                                                if (bVar8) {
                                                  *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                                                }
                                                UNLOCK();
                                              } while (!bVar8);
                                            }
                                            auStack_3._8_4_ =
                                                 (vehicleBase->fields)._.
                                                 _VehicleEnergyContainerConfig_k__BackingField.
                                                 consumption;
                                            uStack_5._0_4_ =
                                                 (jetPackTypeParameters->fields).thrustStrength;
                                            uStack_5._4_4_ =
                                                 (jetPackTypeParameters->fields).density;
                                            auStack_3[0] =
                                                 (vehicleBase->fields)._.
                                                 _VehicleEnergyContainerConfig_k__BackingField.
                                                 usingEnergy;
                                            auStack_3._1_3_ =
                                                 *(undefined3 *)
                                                  &(vehicleBase->fields)._.
                                                   _VehicleEnergyContainerConfig_k__BackingField.
                                                   field_0x1;
                                            auStack_3._4_4_ =
                                                 (vehicleBase->fields)._.
                                                 _VehicleEnergyContainerConfig_k__BackingField.
                                                 storage;
                                            fStack_4 = (jetPackTypeParameters->fields).
                                                        outOfEnergyThrustMax;
                                            pAStack_30 = pAVar13;
                                            pVStack_1 = pVVar29;
                                            pSStack_2 = this_01;
                                            if (this_03 != (JetPackMotor *)0x0) {
                                              JStack_31.thrustStrength = (float)uStack_5;
                                              JStack_31.density = uStack_5._4_4_;
                                              JStack_31.vehicleEnergyContainerConfig.consumption =
                                                   auStack_3._8_4_;
                                              JStack_31.outOfEnergyThrustMax = fStack_4;
                                              JStack_31.interactableLocal = pAVar13;
                                              JStack_31.vehicleInteractable = pVVar29;
                                              JStack_31.avatarController = this_01;
                                              JStack_31.vehicleEnergyContainerConfig._0_8_ =
                                                   auStack_3._0_8_;
                                              JetPackMotor::JetPackMotor_Init
                                                        (this_03,(vehicleBase->fields).JetMode,
                                                         &JStack_31,(MethodInfo *)0x0);
                                              pOVar32 = UnityEngine.CoreModule.dll::UnityEngine::
                                                        GameObject::GameObject_AddComponent_1
                                                                  (pGVar6,
                                                  MVEquipableProxy_MethodInfo__UnityEngine__GameObject__AddComponent<MVEquipableProxy>__
                                                  );
                                              if (pOVar32 != (Object *)0x0) {
                                                bVar8 = iRam_? != 0;
                                                pOVar32[3].klass = pOVar14;
                                                if (bVar8) {
                                                  uVar9 = (uint)((ulonglong)(pOVar32 + 3) >> 0xc);
                                                  uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
                                                  do {
                                                    uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR)
                                                    ;
                                                    puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR)
                                                    ;
                                                    LOCK();
                                                    bVar8 = uVar11 == *puVar12;
                                                    if (bVar8) {
                                                      *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
                                                    }
                                                    UNLOCK();
                                                  } while (!bVar8);
                                                }
                                                pMVar33 = (MVTriggerHandler *)
                                                          UnityEngine.CoreModule.dll::UnityEngine::
                                                          GameObject::GameObject_AddComponent_1
                                                                    (pGVar6,
                                                  MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                                  );
                                                (this->fields).triggerHandler = pMVar33;
                                                func_?(&(this->fields).triggerHandler);
                                                pLVar34 = (this->fields)._.localComponents;
                                                if (pLVar34 != (List_1_UnityEngine_Component_ *)0x0)
                                                {
                                                  FUN_?(pLVar34,(this->fields).triggerHandler
                                                               );
                                                  pLVar34 = (this->fields)._.localComponents;
                                                  if (pLVar34 != (List_1_UnityEngine_Component_ *)0x0
                                                     ) {
                                                    FUN_?(pLVar34,pVVar29);
                                                    pLVar34 = (this->fields)._.localComponents;
                                                    if (pLVar34 != (List_1_UnityEngine_Component_ *)
                                                                  0x0) {
                                                      FUN_?(pLVar34,this_03);
                                                      pLVar34 = (this->fields)._.localComponents;
                                                      if ((pLVar34 != (List_1_UnityEngine_Component_
                                                                      *)0x0) &&
                                                         (FUN_?(pLVar34,this_01),
                                                         (this->fields)._.localComponents !=
                                                         (List_1_UnityEngine_Component_ *)0x0)) {
                                                        FUN_?();
                                                        (this->fields).vehicleMotor = this_03;
                                                        func_?(&(this->fields).
                                                                             vehicleMotor);
                                                        (this->fields).owner = vehicleBase;
                                                        func_?(&(this->fields).owner);
                                                        (this->fields).vehicleUser = vehicleUser;
                                                        func_?();
                                                        pCVar35 = UnityEngine.CoreModule.dll::
                                                                  UnityEngine::Camera::
                                                                  Camera_get_main((MethodInfo *)0x0)
                                                        ;
                                                        (this->fields).mainCamera = pCVar35;
                                                        func_?(&(this->fields).
                                                                             mainCamera);
                                                        pMVar36 = (this->fields).owner;
                                                        pIVar37 = MVWorldObjectClient::
                                                                                                                                    
                                                  MVWorldObjectClient_get_InteractionDataHandlerBase
                                                            ((MVWorldObjectClient *)vehicleUser,
                                                             (MethodInfo *)0x0);
                                                  if (pMVar36 != (MVJetPack *)0x0) {
                                                    (pMVar36->fields)._._._._.
                                                    interactionDataHandlerBase = pIVar37;
                                                    func_?(&(pMVar36->fields)._._._._.
                                                                         interactionDataHandlerBase)
                                                    ;
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
                            }
                          }
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
            FUN_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)StringLiteral_Failed_to_get_component__Cant_cr,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
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
  FUN_?();
  pcVar2 = (code *)swi(3);
  iVar3 = (*pcVar2)();
  return iVar3;
}

