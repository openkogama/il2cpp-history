
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnBulletHit
               (PickupItemCenterGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__PickupItemCenterGun);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    key = MVWorldObjectClientManager::
          MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                    (pMVar1,voxelHit._36_4_,
                     int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                    );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      this_00 = (pMVar1->fields).worldObjects;
      pOVar2 = (Object *)0x0;
      if (this_00 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__TryGetValue
                  ((Dictionary_2_System_Int32_System_Object_ *)this_00,key,
                   (Object **)&stack0xfffffff8,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                  );
        iVar3 = func_?();
        if (iVar3 == 0) {
          pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                             ((Quaternion *)&stack0xffffffe4,voxelHit._8_12_,(MethodInfo *)0x0);
          position.y = voxelHit.point.x;
          position.x = (float)in_stack_5;
          position.z = voxelHit.point.y;
          OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                    (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,
                     (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
          return;
        }
        pMVar6 = (this->fields)._._.owner;
        if ((pMVar6 != (MVPickupOwner *)0x0) &&
           ((pMVar6->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
          if ((TypeInfo__PickupItemCenterGun->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          if (pOVar2 != (Object *)0x0) {
            iVar3 = func_?();
            if (iVar3 != 0) {
              iVar3 = func_?();
              if (iVar3 != 0) {
                func_?(0,TypeInfo__IBulletImpactVisualizer,iVar3,in_stack_5,
                                voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x
                                ,voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,
                                voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,voxelHit.woId,
                                voxelHit.cube,voxelHit.distance,voxelHit.collider,voxelHit.transform
                                ,voxelHit._60_8_,voxelHit.interactionFlags._4_4_,
                                lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,
                                lineOfFire.m_Direction.x,lineOfFire.m_Direction.y);
                return;
              }
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnFire
               (PickupItemCenterGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&StringLiteral_CenterGun_fire);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._._.muzzlePoint;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uVar4 = pVVar2->y;
    fVar5 = pVVar2->z;
    pBStack_6 = Bullet::Bullet_CreateBullet
                           (PoolEnums__Enum_CenterGunBullet,*pVVar2,(MethodInfo *)0x0);
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (this_00,(MethodInfo *)0x0);
      pMVar7 = (this->fields)._._.owner;
      if (pMVar7 != (MVPickupOwner *)0x0) {
        uVar8 = (pMVar7->fields).lookOrigin.x;
        uVar9 = (pMVar7->fields).lookOrigin.y;
        fVar10 = (pMVar7->fields).lookOrigin.z;
        fStack_11 = (float)uVar8;
        pBStack_12 = (Bullet_OnHitDelegate *)uVar9;
        pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            ((Vector3 *)&stack0xffffffb0,(this->fields)._._.owner,(MethodInfo *)0x0)
        ;
        VStack_3.x = pVVar2->x;
        VStack_3.y = pVVar2->y;
        VStack_3.z = pVVar2->z;
        fVar13 = fStack_11;
        pBVar14 = pBStack_12;
        puVar15 = (undefined8 *)func_?(&stack0xffffffb0);
        uVar16 = *(undefined4 *)(puVar15 + 1);
        uVar17 = (undefined4)*puVar15;
        uVar18 = (undefined4)((ulonglong)*puVar15 >> 0x20);
        if (pBStack_6 != (Bullet *)0x0) {
          pBStack_12 = (pBStack_6->fields).onHit;
          b = (Delegate *)func_?(TypeInfo__Bullet__OnHitDelegate,uVar4,fVar5,fVar13);
          pMVar19 = MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_;
          (b->fields).method_ptr =
               MethodInfo__PickupItemCenterGun__OnBulletHit_VoxelHit__UnityEngine__Ray_->
               virtualMethodPointer;
          (b->fields).method = pMVar19;
          (b->fields).m_target = (Object *)this;
          func_?(&(b->fields).m_target,this);
          uStack_20 = pMVar19->parameters_count;
          (b->fields).method_code = b;
          cVar21 = func_?(pMVar19);
          if ((cVar21 == '\0') || (uStack_20 != 2)) {
            (b->fields).method_code = (b->fields).m_target;
            puVar22 = (b->fields).method_ptr;
          }
          else {
            puVar22 = &UNK_?;
          }
          (b->fields).invoke_impl = puVar22;
          (b->fields).extra_arg = &UNK_?;
          pBVar23 = (Bullet_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBStack_12,b,(MethodInfo *)0x0);
          this_02 = pBStack_6;
          uVar24 = CONCAT44(TypeInfo__Bullet__OnHitDelegate,pBVar23);
          pBVar25 = (Bullet_OnHitDelegate *)0x0;
          if (pBVar23 == (Bullet_OnHitDelegate *)0x0) {
            (pBStack_6->fields).onHit = (Bullet_OnHitDelegate *)0x0;
          }
          else {
            if (pBVar23->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar25 = pBVar23;
            }
            if (pBVar25 == (Bullet_OnHitDelegate *)0x0) goto code_?;
            (pBStack_6->fields).onHit = pBVar25;
            uVar24 = CONCAT44(TypeInfo__Bullet__OnHitDelegate,pBVar23);
            pBVar25 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar23->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar25 = pBVar23;
            }
            if (pBVar25 == (Bullet_OnHitDelegate *)0x0) goto code_?;
          }
          func_?(&(pBStack_6->fields).onHit,pBVar25);
          if (isLocal != 0) {
            pBVar25 = (Bullet_OnHitDelegate *)func_?(TypeInfo__Bullet__OnHitDelegate);
            pMVar19 = MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_;
            (pBVar25->fields)._._.method_ptr =
                 MethodInfo__PickupItemCenterGun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_->
                 virtualMethodPointer;
            (pBVar25->fields)._._.method = pMVar19;
            (pBVar25->fields)._._.m_target = (Object *)this;
            func_?(&(pBVar25->fields)._._.m_target,this);
            uStack_20 = pMVar19->parameters_count;
            (pBVar25->fields)._._.method_code = pBVar25;
            cVar21 = func_?(pMVar19);
            if ((cVar21 == '\0') || (uStack_20 != 2)) {
              (pBVar25->fields)._._.method_code = (pBVar25->fields)._._.m_target;
              puVar22 = (pBVar25->fields)._._.method_ptr;
            }
            else {
              puVar22 = &UNK_?;
            }
            (pBVar25->fields)._._.invoke_impl = puVar22;
            (pBVar25->fields)._._.extra_arg = &UNK_?;
            (pBStack_6->fields).onHitLocal = pBVar25;
            func_?(&(pBStack_6->fields).onHitLocal,pBVar25);
            this_02 = pBStack_6;
          }
          pMVar7 = (this->fields)._._.owner;
          if (pMVar7 != (MVPickupOwner *)0x0) {
            pBStack_6 = (Bullet *)
                         MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                   (pMVar7,(this->fields).projectileSpeed,(MethodInfo *)0x0);
            pBStack_12 = (Bullet_OnHitDelegate *)(this->fields).range;
            pMVar7 = (this->fields)._._.owner;
            if (pMVar7 != (MVPickupOwner *)0x0) {
              pIVar26 = pMVar7->klass[1]._0.image;
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar7->klass->vtable).get_IgnoreWOIDs.method)(pMVar7);
              lineOfFire.m_Direction.z = (float)uVar16;
              lineOfFire.m_Direction.y = (float)uVar18;
              lineOfFire.m_Origin.y = (float)pBVar14;
              lineOfFire.m_Origin.x = (float)pIVar26;
              lineOfFire.m_Origin.z = fVar10;
              lineOfFire.m_Direction.x = (float)uVar17;
              Bullet::Bullet_Fire(this_02,(float)pBStack_6,(float)pBStack_12,lineOfFire,ignoreWoIDs
                                  ,(MethodInfo *)0x0);
              fVar5 = (float)(this->fields).currentAmmo.currentCryptoKey;
              fVar10 = (float)(this->fields).currentAmmo.hiddenValue;
              iVar27 = (this->fields).currentAmmo.fakeValue;
              if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                  cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
              }
              input.hiddenValue = (int32_t)fVar10;
              input.currentCryptoKey = (int32_t)fVar5;
              input.fakeValue = iVar27;
              input.inited = (this->fields).currentAmmo.inited;
              input._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
              pOVar28 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                        ObscuredInt::ObscuredInt_op_Decrement
                                  ((ObscuredInt *)&stack0xffffffb0,input,(MethodInfo *)0x0);
              iVar27 = pOVar28->hiddenValue;
              iVar29 = pOVar28->fakeValue;
              bVar30 = pOVar28->inited;
              uVar31 = *(undefined3 *)&pOVar28->field_0xd;
              (this->fields).currentAmmo.currentCryptoKey = pOVar28->currentCryptoKey;
              (this->fields).currentAmmo.hiddenValue = iVar27;
              (this->fields).currentAmmo.fakeValue = iVar29;
              (this->fields).currentAmmo.inited = bVar30;
              *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar31;
              if (isLocal == 0) {
                pTVar1 = (this->fields)._._.muzzlePoint;
                if (pTVar1 != (Transform *)0x0) {
                  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position
                                      ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
                  fStack_32 = pVVar2->x;
                  fStack_33 = pVVar2->y;
                  fVar5 = pVVar2->z;
code_?:
                  pBStack_12 = (Bullet_OnHitDelegate *)0x0;
                  fStack_11 = 0.0;
                  this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                      ((MethodInfo *)0x0);
                  if (this_01 != (AudioManager *)0x0) {
                    position.y = fStack_33;
                    position.x = fStack_32;
                    position.z = fVar5;
                    AudioManager::AudioManager_Play_2
                              (this_01,StringLiteral_CenterGun_fire,(this->fields).audioSource,
                               position,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
              else {
                pCVar34 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if (pCVar34 != (Camera *)0x0) {
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_get_transform((Component *)pCVar34,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position
                                        ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
                    VStack_3.x = pVVar2->x;
                    VStack_3.y = pVVar2->y;
                    VStack_3.z = pVVar2->z;
                    pCVar34 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                        ((MethodInfo *)0x0);
                    if (pCVar34 != (Camera *)0x0) {
                      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_get_transform((Component *)pCVar34,(MethodInfo *)0x0);
                      if (pTVar1 != (Transform *)0x0) {
                        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&stack0xffffffb0,pTVar1,(MethodInfo *)0x0);
                        uVar35 = pVVar2->x;
                        uVar36 = pVVar2->y;
                        fStack_32 = VStack_3.x + (float)uVar35;
                        fStack_33 = (float)uVar36 + VStack_3.y;
                        fVar5 = pVVar2->z + VStack_3.z;
                        VStack_3.z = fVar5;
                        goto code_?;
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
  uVar24 = func_?();
code_?:
  func_?(uVar24);
  pcVar37 = (code *)swi(3);
  (*pcVar37)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_OnLocalBulletHit
               (PickupItemCenterGun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemCenterGun);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    if ((TypeInfo__PickupItemCenterGun->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PickupItemCenterGun);
    }
    if (this_00 != (RuntimeEventManager *)0x0) {
      voxelHit_00.interactionFlags._4_4_ = TypeInfo__PickupItemCenterGun->static_fields->damage;
      voxelHit_00._0_68_ = voxelHit._0_68_;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,voxelHit_00,0.0,unaff_ESI);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        key = MVWorldObjectClientManager::
              MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                        (pMVar3,voxelHit._36_4_,
                         int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                        );
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          this_01 = (pMVar3->fields).worldObjects;
          pMStack_4 = (MVWorldObjectClient *)0x0;
          if (this_01 != (Dictionary_2_System_Int32_MVWorldObjectClient_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryGetValue
                      ((Dictionary_2_System_Int32_System_Object_ *)this_01,key,(Object **)&pMStack_4
                       ,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVWorldObjectClient>__TryGetValue_int__MVWorldObjectClient__
                      );
            wo = pMStack_4;
            if (pMStack_4 != (MVWorldObjectClient *)0x0) {
              x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                            (pMStack_4,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar5 != 0) {
                pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
                if ((pMVar1 != (MVNetworkGame *)0x0) &&
                   (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0)
                   , this_02 != (MVLocalPlayer *)0x0)) {
                  bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                    ((MVPlayer *)this_02,wo,(MethodInfo *)0x0);
                  if (bVar5 != 0) {
                    return;
                  }
                  fVar6 = (this->fields).impulseStrength;
                  impulse.y = lineOfFire.m_Direction.x * fVar6;
                  impulse.x = lineOfFire.m_Origin.z * fVar6;
                  impulse.z = lineOfFire.m_Direction.y * fVar6;
                  pIVar7 = CenterGunHitPackage::CenterGunHitPackage_Create
                                     ((InteractionData *)&puStack_8,impulse,(MethodInfo *)0x0);
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    uVar9._0_1_ = pIVar7->interactionType;
                    uVar9._1_1_ = pIVar7->playerKilledByType;
                    uVar9._2_2_ = *(undefined2 *)&pIVar7->field_0x12;
                    (*(code *)(x->klass->vtable).__unknown_1.method)
                              (x,(this->fields)._._.owner,pIVar7->damage,(pIVar7->impulse).x,
                               (pIVar7->impulse).y,(pIVar7->impulse).z,uVar9,0,
                               (x->klass->vtable).OnValidate.methodPtr);
                    return;
                  }
                }
                goto code_?;
              }
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_ResetAmmo
               (PickupItemCenterGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = (this->fields).maxAmmo.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).maxAmmo.hiddenValue;
  OStack_1.fakeValue = (this->fields).maxAmmo.fakeValue;
  OStack_1.inited = (this->fields).maxAmmo.inited;
  OStack_1._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = OStack_1.hiddenValue;
  value.currentCryptoKey = OStack_1.currentCryptoKey;
  value.fakeValue = OStack_1.fakeValue;
  value.inited = OStack_1.inited;
  value._13_3_ = OStack_1._13_3_;
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,iVar2,(this->klass->vtable).UpdateWithDirection.methodPtr);
  pOVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_1,iVar2,(MethodInfo *)0x0);
  iVar2 = pOVar3->hiddenValue;
  iVar4 = pOVar3->fakeValue;
  bVar5 = pOVar3->inited;
  uVar6 = *(undefined3 *)&pOVar3->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar3->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
  (this->fields).currentAmmo.fakeValue = iVar4;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_TriggerBegin
               (PickupItemCenterGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  (this->fields)._.isFiring = 1;
  return;
}


/* PickupItemCenterGun() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    func_?(&TypeInfo__PickupItemCenterGun);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  pIVar2 = CenterGunHitPackage::CenterGunHitPackage_Create
                     ((InteractionData *)auStack_3,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  fStack_4 = pIVar2->damage;
  fStack_5 = (pIVar2->impulse).x;
  fStack_6 = (pIVar2->impulse).y;
  fStack_7 = (pIVar2->impulse).z;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    auStack_3._16_4_ = TypeInfo__MV__WorldObject__InteractionData;
    auStack_3._12_4_ = &UNK_?;
    func_?();
  }
  TypeInfo__PickupItemCenterGun->static_fields->damage = fStack_4;
  return;
}


/* PickupItemCenterGun() */

void Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun__ctor
               (PickupItemCenterGun *this,MethodInfo *method)

{
  (this->fields).projectileSpeed = 70.0;
  (this->fields).range = 100.0;
  (this->fields).impulseStrength = 700.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.r = _UNK_?;
  (this->fields)._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._.crossHairCannotFireLow.b = fVar2;
  (this->fields)._.crossHairCannotFireLow.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.r = _UNK_?;
  (this->fields)._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._.crossHairCannotFireHigh.b = fVar2;
  (this->fields)._.crossHairCannotFireHigh.a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  (this->fields)._.crossHairCanFire.r = _UNK_?;
  (this->fields)._.crossHairCanFire.g = fVar3;
  (this->fields)._.crossHairCanFire.b = fVar2;
  (this->fields)._.crossHairCanFire.a = fVar1;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit(&OStack_5,1.0,(MethodInfo *)0x0);
  AVar6 = pOVar4->hiddenValue;
  pBVar7 = pOVar4->hiddenValueOld;
  fVar3 = pOVar4->fakeValue;
  bVar8 = pOVar4->inited;
  uVar9 = *(undefined3 *)&pOVar4->field_0x11;
  (this->fields)._.fireInterval.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = AVar6;
  (this->fields)._.fireInterval.hiddenValueOld = pBVar7;
  (this->fields)._.fireInterval.fakeValue = fVar3;
  (this->fields)._.fireInterval.inited = bVar8;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar9;
  func_?(&(this->fields)._.fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_IsAmmoDepleted
               (PickupItemCenterGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.fakeValue = iVar3;
  value._12_4_ = uVar4;
  iVar3 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if (0 < iVar3) {
    return 0;
  }
  cVar5 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                    (this,(this->klass->vtable).get_CanUnequip.methodPtr);
  return cVar5 == '\0';
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickupItemCenterGun::PickupItemCenterGun_get_Quantity
                  (PickupItemCenterGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}

