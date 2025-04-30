
/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnBulletHit
               (PickupItemShotgun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__PickupItemShotgun);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      iVar3 = func_?();
      if (iVar3 == 0) {
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffe4,voxelHit._8_12_,(MethodInfo *)0x0);
        position.y = voxelHit.point.x;
        position.x = (float)in_stack_5;
        position.z = voxelHit.point.y;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,(Nullable_1_Single_)0x0,
                   (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
        return;
      }
      pMVar6 = (this->fields)._._.owner;
      if ((pMVar6 != (MVPickupOwner *)0x0) &&
         ((pMVar6->fields)._.worldObjectParent != (MVWorldObjectClient *)0x0)) {
        if ((TypeInfo__PickupItemShotgun->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        if (pMVar2 != (MVWorldObject *)0x0) {
          iVar3 = func_?();
          if (iVar3 != 0) {
            iVar3 = func_?();
            if (iVar3 != 0) {
              func_?(0,TypeInfo__IBulletImpactVisualizer,iVar3,in_stack_5,
                              voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x,
                              voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,
                              voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,voxelHit.woId,
                              voxelHit.cube,voxelHit.distance,voxelHit.collider,voxelHit.transform,
                              voxelHit._60_4_,(int)voxelHit.interactionFlags,
                              voxelHit.interactionFlags._4_4_,lineOfFire.m_Origin.x,
                              lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,lineOfFire.m_Direction.x,
                              lineOfFire.m_Direction.y);
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
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnFire
               (PickupItemShotgun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__Bullet__OnHitDelegate);
    func_?(&MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&MethodInfo__PickupItemShotgun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_);
    func_?(&TypeInfo__PickupItemShotgun);
    func_?(&StringLiteral_shotgun_fire);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_3,pMVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    forward.z = fVar5;
    forward.x = (float)(undefined4)uStack_4;
    forward.y = uStack_4._4_4_;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation
                        ((Quaternion *)&stack0xffffff94,forward,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    fVar5 = pQVar6->x;
    fVar7 = pQVar6->y;
    fVar8 = pQVar6->z;
    fVar9 = pQVar6->w;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    rotation.y = fVar7;
    rotation.x = fVar5;
    rotation.z = fVar8;
    rotation.w = fVar9;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_3,rotation,
                         TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                         (MethodInfo *)0x0);
    uStack_10._0_4_ = pVVar2->x;
    uStack_10._4_4_ = pVVar2->y;
    fStack_11 = pVVar2->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Vector3);
      cRam_? = '\x01';
    }
    rotation_00.y = fVar7;
    rotation_00.x = fVar5;
    rotation_00.z = fVar8;
    rotation_00.w = fVar9;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_3,rotation_00,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    uStack_12._0_4_ = pVVar2->x;
    uStack_12._4_4_ = pVVar2->y;
    fStack_13 = pVVar2->z;
    this_00 = (this->fields).muzzleFlare;
    if (this_00 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                (this_00,(MethodInfo *)0x0);
      pBStack_14 = (Bullet_OnHitDelegate__Class *)0x10;
      uStack_15 = 0;
      do {
        uVar16 = uStack_15;
        unaff_EDI = pBStack_14;
        pMVar1 = (this->fields)._._.owner;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        uStack_4._0_4_ = (pMVar1->fields).lookOrigin.x;
        uStack_4._4_4_ = (pMVar1->fields).lookOrigin.y;
        pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            (&VStack_17,pMVar1,(MethodInfo *)0x0);
        uStack_18._0_4_ = pVVar2->x;
        uStack_18._4_4_ = pVVar2->y;
        fStack_19 = pVVar2->z;
        if ((TypeInfo__PickupItemShotgun->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__PickupItemShotgun);
        }
        uVar20._4_4_ = VStack_3.y;
        uVar20._0_4_ = VStack_3.x;
        pSVar21 = TypeInfo__PickupItemShotgun->static_fields->offsetsX;
        if (pSVar21 == (Single__Array *)0x0) goto code_?;
        if (pSVar21->max_length <= uVar16) goto code_?;
        fVar5 = *(float *)((int)pSVar21->vector + (int)&unaff_EDI[-1].vtable.BeginInvoke);
        fVar7 = (this->fields).spread;
        pSVar21 = TypeInfo__PickupItemShotgun->static_fields->offsetsY;
        if (pSVar21 == (Single__Array *)0x0) goto code_?;
        VStack_3._0_8_ = uVar20;
        if (pSVar21->max_length <= uVar16) goto code_?;
        fVar8 = *(float *)((int)pSVar21->vector + (int)&unaff_EDI[-1].vtable.BeginInvoke);
        VStack_3.z = fStack_13 * fVar8 * fVar7 + fStack_19 + fStack_11 * fVar5 * fVar7;
        value.y = uStack_12._4_4_ * fVar8 * fVar7 +
                  uStack_18._4_4_ + uStack_10._4_4_ * fVar5 * fVar7;
        value.x = (float)uStack_12 * fVar8 * fVar7 +
                  (float)uStack_18 + (float)uStack_10 * fVar5 * fVar7;
        value.z = VStack_3.z;
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                  (&VStack_22,value,(MethodInfo *)0x0);
        pTVar23 = (this->fields)._._.muzzlePoint;
        if (pTVar23 == (Transform *)0x0) goto code_?;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffff98,pTVar23,(MethodInfo *)0x0);
        uVar24 = pVVar2->x;
        uVar25 = pVVar2->y;
        fVar5 = pVVar2->z;
        uVar26 = 0;
        uVar27 = 0;
        this_01 = Bullet::Bullet_CreateBullet
                            (PoolEnums__Enum_ShotgunBullet,*pVVar2,0.0,(MethodInfo *)0x0);
        if (this_01 == (Bullet *)0x0) goto code_?;
        VStack_22.x = (float)TypeInfo__Bullet__OnHitDelegate;
        unaff_EDI = (Bullet_OnHitDelegate__Class *)(this_01->fields).onHit;
        pBVar28 = (BulletThrowingStar_OnHitDelegate *)func_?();
        BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                  (pBVar28,(Object *)this,
                   MethodInfo__PickupItemShotgun__OnBulletHit_VoxelHit__UnityEngine__Ray_,
                   (MethodInfo *)0x0);
        pBVar29 = (Bullet_OnHitDelegate *)
                  mscorlib.dll::System::Delegate::Delegate_Combine
                            ((Delegate *)unaff_EDI,(Delegate *)pBVar28,(MethodInfo *)0x0);
        uVar30._4_4_ = (float)TypeInfo__Bullet__OnHitDelegate;
        uVar30._0_4_ = (float)pBVar29;
        VStack_3.y = 0.0;
        if (pBVar29 == (Bullet_OnHitDelegate *)0x0) {
          (this_01->fields).onHit = (Bullet_OnHitDelegate *)0x0;
        }
        else {
          if (pBVar29->klass == TypeInfo__Bullet__OnHitDelegate) {
            VStack_3.y = (float)pBVar29;
          }
          if ((Bullet_OnHitDelegate *)VStack_3.y == (Bullet_OnHitDelegate *)0x0)
          goto code_?;
          (this_01->fields).onHit = (Bullet_OnHitDelegate *)VStack_3.y;
          VStack_3.y = (float)(Bullet_OnHitDelegate *)0x0;
          if (pBVar29->klass == TypeInfo__Bullet__OnHitDelegate) {
            VStack_3.y = (float)pBVar29;
          }
          unaff_EDI = TypeInfo__Bullet__OnHitDelegate;
          if ((Bullet_OnHitDelegate *)VStack_3.y == (Bullet_OnHitDelegate *)0x0)
          goto code_?;
        }
        VStack_3.x = (float)&(this_01->fields).onHit;
        VStack_17.z = (float)&UNK_?;
        func_?();
        if (isLocal != 0) {
          unaff_EDI = (Bullet_OnHitDelegate__Class *)(this_01->fields).onHitLocal;
          pBVar28 = (BulletThrowingStar_OnHitDelegate *)
                    func_?(TypeInfo__Bullet__OnHitDelegate);
          BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
                    (pBVar28,(Object *)this,
                     MethodInfo__PickupItemShotgun__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_,
                     (MethodInfo *)0x0);
          pBVar29 = (Bullet_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)unaff_EDI,(Delegate *)pBVar28,(MethodInfo *)0x0);
          uVar30._4_4_ = (float)TypeInfo__Bullet__OnHitDelegate;
          uVar30._0_4_ = (float)pBVar29;
          if (pBVar29 == (Bullet_OnHitDelegate *)0x0) {
            VStack_3.x = (float)&(this_01->fields).onHitLocal;
            *(Bullet_OnHitDelegate **)VStack_3.x = (Bullet_OnHitDelegate *)0x0;
            VStack_3.y = 0.0;
            VStack_17.z = (float)&UNK_?;
            func_?();
          }
          else {
            pBVar31 = (Bullet_OnHitDelegate *)0x0;
            if (pBVar29->klass == TypeInfo__Bullet__OnHitDelegate) {
              pBVar31 = pBVar29;
            }
            if (pBVar31 == (Bullet_OnHitDelegate *)0x0) goto code_?;
            (this_01->fields).onHitLocal = pBVar31;
            unaff_EDI = TypeInfo__Bullet__OnHitDelegate;
            VStack_3.x = (float)&(this_01->fields).onHitLocal;
            VStack_3.y = (float)(Bullet_OnHitDelegate *)0x0;
            if (pBVar29->klass == TypeInfo__Bullet__OnHitDelegate) {
              VStack_3.y = (float)pBVar29;
            }
            if ((Bullet_OnHitDelegate *)VStack_3.y == (Bullet_OnHitDelegate *)0x0)
            goto code_?;
            VStack_17.z = (float)&UNK_?;
            func_?();
          }
        }
        pMVar1 = (this->fields)._._.owner;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        fVar8 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                           (pMVar1,(this->fields).bulletSpeed,(MethodInfo *)0x0);
        fVar7 = (this->fields).maxRange;
        pMVar1 = (this->fields)._._.owner;
        uStack_4 = CONCAT44(fVar8,(undefined4)uStack_4);
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        ignoreWoIDs = (HashSet_1_System_Int32_ *)func_?(7,pMVar1);
        lineOfFire.m_Origin.y = (float)uVar25;
        lineOfFire.m_Origin.x = (float)uVar24;
        lineOfFire.m_Origin.z = fVar5;
        lineOfFire.m_Direction.x = (float)uVar27;
        lineOfFire.m_Direction.y = (float)uVar26;
        lineOfFire.m_Direction.z = (float)puStack_32;
        Bullet::Bullet_Fire(this_01,uStack_4._4_4_,fVar7,lineOfFire,ignoreWoIDs,0,
                            (MethodInfo *)0x0);
        pBStack_14 = (Bullet_OnHitDelegate__Class *)&(pBStack_14->_0).gc_desc;
        uStack_15 = uStack_15 + 1;
      } while ((int)pBStack_14 < 0x24);
      fVar5 = (float)(this->fields).currentAmmo.currentCryptoKey;
      fVar7 = (float)(this->fields).currentAmmo.hiddenValue;
      fVar8 = (float)(this->fields).currentAmmo.fakeValue;
      fVar9 = *(float *)&(this->fields).currentAmmo.inited;
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
      }
      input.hiddenValue = (int32_t)fVar7;
      input.currentCryptoKey = (int32_t)fVar5;
      input.fakeValue = (int32_t)fVar8;
      input._12_4_ = fVar9;
      pOVar33 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Decrement((ObscuredInt *)&stack0xffffff94,input,(MethodInfo *)0x0);
      iVar34 = pOVar33->hiddenValue;
      iVar35 = pOVar33->fakeValue;
      bVar36 = pOVar33->inited;
      uVar37 = *(undefined3 *)&pOVar33->field_0xd;
      (this->fields).currentAmmo.currentCryptoKey = pOVar33->currentCryptoKey;
      (this->fields).currentAmmo.hiddenValue = iVar34;
      (this->fields).currentAmmo.fakeValue = iVar35;
      (this->fields).currentAmmo.inited = bVar36;
      *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar37;
      this_02 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      unaff_EDI = (Bullet_OnHitDelegate__Class *)(this->fields).audioSource;
      if (isLocal == 0) {
        pTVar23 = (this->fields)._._.muzzlePoint;
        if ((pTVar23 != (Transform *)0x0) &&
           (pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffff98,pTVar23,(MethodInfo *)0x0),
           this_02 != (AudioManager *)0x0)) {
          uVar38._0_4_ = pVVar2->x;
          uVar38._4_4_ = pVVar2->y;
          fVar5 = pVVar2->z;
code_?:
          position.z = fVar5;
          position.x = (float)(int)uVar38;
          position.y = (float)(int)((ulonglong)uVar38 >> 0x20);
          AudioManager::AudioManager_Play_2
                    (this_02,StringLiteral_shotgun_fire,(AudioSource *)unaff_EDI,position,
                     (MethodInfo *)0x0);
          (this->fields)._.isFiring = 0;
          return;
        }
      }
      else {
        pCVar39 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                            ((MethodInfo *)0x0);
        if ((pCVar39 != (Camera *)0x0) &&
           (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pCVar39,(MethodInfo *)0x0),
           pTVar23 != (Transform *)0x0)) {
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff98,pTVar23,(MethodInfo *)0x0);
          uStack_18._0_4_ = pVVar2->x;
          uStack_18._4_4_ = pVVar2->y;
          fStack_19 = pVVar2->z;
          pCVar39 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                              ((MethodInfo *)0x0);
          if ((pCVar39 != (Camera *)0x0) &&
             (pTVar23 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar39,(MethodInfo *)0x0),
             pTVar23 != (Transform *)0x0)) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)&stack0xffffff98,pTVar23,(MethodInfo *)0x0);
            uStack_12._0_4_ = pVVar2->x;
            uStack_12._4_4_ = pVVar2->y;
            fStack_13 = pVVar2->z;
            uStack_10 = CONCAT44(uStack_12._4_4_ + uStack_18._4_4_,
                                 (float)uStack_12 + (float)uStack_18);
            fVar5 = fStack_13 + fStack_19;
            uVar38 = uStack_10;
            fStack_11 = fVar5;
            if (this_02 != (AudioManager *)0x0) goto code_?;
          }
        }
      }
    }
  }
code_?:
  pBVar29 = (Bullet_OnHitDelegate *)func_?();
code_?:
  VStack_17.z = (float)&UNK_?;
  VStack_3.x = (float)pBVar29;
  VStack_3.y = (float)unaff_EDI;
  uVar30 = func_?();
code_?:
  VStack_17.z = (float)&UNK_?;
  VStack_3._0_8_ = uVar30;
  func_?();
code_?:
  func_?();
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_OnLocalBulletHit
               (PickupItemShotgun *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickupItemShotgun);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    if ((TypeInfo__PickupItemShotgun->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__PickupItemShotgun);
    }
    if (this_00 != (RuntimeEventManager *)0x0) {
      voxelHit_00.interactionFlags._4_4_ = TypeInfo__PickupItemShotgun->static_fields->hitDamage;
      voxelHit_00._0_68_ = voxelHit._0_68_;
      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                (this_00,voxelHit_00,0.0,unaff_ESI);
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
        id = MVWorldObjectClientManager::
             MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                       (pMVar3,voxelHit._36_4_,
                        int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                       );
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (pMVar3 != (MVWorldObjectClientManager *)0x0) {
          this_01 = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar3,id,(MethodInfo *)0x0);
          if (this_01 != (MVWorldObjectClient *)0x0) {
            x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (this_01,(MethodInfo *)0x0);
            if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
              lineOfFire.m_Direction.x = (float)TypeInfo__UnityEngine__Object;
              lineOfFire.m_Origin.z = (float)&UNK_?;
              func_?();
            }
            bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                              ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
            if (bVar4 != 0) {
              pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
              if ((pMVar1 != (MVNetworkGame *)0x0) &&
                 (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar1,(MethodInfo *)0x0),
                 this_02 != (MVLocalPlayer *)0x0)) {
                bVar4 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                  ((MVPlayer *)this_02,this_01,(MethodInfo *)0x0);
                if (bVar4 != 0) {
                  return;
                }
                fVar5 = (this->fields).impulseStrength;
                auStack_6._16_4_ = lineOfFire.m_Direction.y * fVar5;
                impulse.y = lineOfFire.m_Direction.x * fVar5;
                impulse.x = lineOfFire.m_Origin.z * fVar5;
                impulse.z = (float)auStack_6._16_4_;
                pIVar7 = ShotgunHitPackage::ShotgunHitPackage_Create
                                   ((InteractionData *)auStack_6,impulse,(MethodInfo *)0x0);
                if (x != (InteractionDataHandlerBase *)0x0) {
                  uVar8._0_1_ = pIVar7->interactionType;
                  uVar8._1_1_ = pIVar7->playerKilledByType;
                  uVar8._2_2_ = *(undefined2 *)&pIVar7->field_0x12;
                  (*(code *)(x->klass->vtable).__unknown_1.method)
                            (x,(this->fields)._._.owner,pIVar7->damage,(pIVar7->impulse).x,
                             (pIVar7->impulse).y,(pIVar7->impulse).z,uVar8,0,
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
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_ResetAmmo
               (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  pOVar1 = (ObscuredInt__Class *)(this->fields).maxAmmo.currentCryptoKey;
  iVar2 = (this->fields).maxAmmo.hiddenValue;
  iVar3 = (this->fields).maxAmmo.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    pOVar1 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    func_?();
  }
  value.hiddenValue = iVar2;
  value.currentCryptoKey = (int32_t)pOVar1;
  value.fakeValue = iVar3;
  value.inited = (this->fields).maxAmmo.inited;
  value._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar2 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)(this,iVar2);
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar2,(MethodInfo *)0x0);
  iVar2 = pOVar4->hiddenValue;
  iVar3 = pOVar4->fakeValue;
  bVar5 = pOVar4->inited;
  uVar6 = *(undefined3 *)&pOVar4->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
  (this->fields).currentAmmo.fakeValue = iVar3;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* PickupItemShotgun() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__InteractionData);
    func_?(&TypeInfo__PickupItemShotgun);
    func_?(&TypeInfo__System__Single);
    func_?(&_1D938725B43024CD1DE507AE64F4E512BE661FABD0876BE9FF1D6BBCE7A2774A_Field);
    func_?(&_6D14F76A35801E92A153C606F99E1BAEAD19C4A687AD608FCD9FADCBB41E3C25_Field);
    cRam_? = '\x01';
  }
  pIVar1 = ShotgunHitPackage::ShotgunHitPackage_Create
                     ((InteractionData *)&stack0xffffffd4,(Vector3)ZEXT812(0),(MethodInfo *)0x0);
  fVar2 = pIVar1->damage;
  if ((TypeInfo__MV__WorldObject__InteractionData->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  TypeInfo__PickupItemShotgun->static_fields->hitDamage = fVar2;
  pSVar3 = (Single__Array *)func_?();
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pSVar3,
             __1D938725B43024CD1DE507AE64F4E512BE661FABD0876BE9FF1D6BBCE7A2774A_Field,
             (MethodInfo *)0x0);
  TypeInfo__PickupItemShotgun->static_fields->offsetsX = pSVar3;
  func_?();
  pSVar3 = (Single__Array *)func_?(TypeInfo__System__Single,5);
  mscorlib.dll::System::Runtime::CompilerServices::RuntimeHelpers::RuntimeHelpers_InitializeArray_1
            ((Array *)pSVar3,
             __6D14F76A35801E92A153C606F99E1BAEAD19C4A687AD608FCD9FADCBB41E3C25_Field,
             (MethodInfo *)0x0);
  TypeInfo__PickupItemShotgun->static_fields->offsetsY = pSVar3;
  func_?(&TypeInfo__PickupItemShotgun->static_fields->offsetsY,pSVar3);
  return;
}


/* PickupItemShotgun() */

void Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun__ctor
               (PickupItemShotgun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    cRam_? = '\x01';
  }
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor ==
      0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_2,0x18,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  (this->fields).spread = 0.1;
  (this->fields).impulseStrength = 700.0;
  (this->fields).maxRange = 50.0;
  (this->fields).bulletSpeed = 100.0;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_IsAmmoDepleted
               (PickupItemShotgun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemShotgun::PickupItemShotgun_get_Quantity
                  (PickupItemShotgun *this,MethodInfo *method)

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

