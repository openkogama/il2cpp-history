
/* Void DoFire(Boolean) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_DoFire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).throwingStarsFired < (this->fields).numStars) &&
     (fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     (this->fields).fireSpacingDelay + (this->fields).fireTime <= fVar1)) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).fireTime = fVar1;
    PickupItemMultiThrowingStar_Fire(this,isLocal,(MethodInfo *)0x0);
  }
  uVar2 = (this->fields).currentAmmo.currentCryptoKey;
  uVar3 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar3;
  value.currentCryptoKey = uVar2;
  iVar4 = (this->fields).currentAmmo.fakeValue;
  uVar5 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.fakeValue = iVar4;
  value._12_4_ = uVar5;
  iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((iVar4 < 1) &&
     (cVar6 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                        (this,(this->klass->vtable).get_CanUnequip.methodPtr), cVar6 == '\0')) {
    this_00 = (this->fields)._._.owner;
    if ((this_00 != (MVPickupOwner *)0x0) &&
       ((this_01 = (DayNightCycle *)
                   System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)this_00,(MethodInfo *)0x0), this_01 != (DayNightCycle *)0x0 &&
        (this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0),
        this_02 != (CelestialParam *)0x0)))) {
      x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                    ((GameObject *)this_02,
                     MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar7 == 0) {
        return;
      }
      if (x != (UseInteractorHandler *)0x0) {
        _Stack0000001c = x->klass[1]._0.byval_arg.data;
        pUStack8 = x;
        (*(code *)x->klass[1]._0.namespaze)();
        return;
      }
    }
    _Stack0000001c = (_union_86)0x0;
    func_?();
    pcVar9 = (code *)swi(3);
    (*pcVar9)();
    return;
  }
  return;
}


/* Void Fire(Boolean) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_Fire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = 0;
  pTVar2 = (this->fields)._._.muzzlePoint;
  if (pTVar2 != (Transform *)0x0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_4,pTVar2,(MethodInfo *)0x0);
    this_00 = BulletThrowingStar::BulletThrowingStar_CreateBullet
                        (PoolEnums__Enum_MultiThrowingStarBullet,*pVVar3,(MethodInfo *)0x0);
    pMVar5 = (this->fields)._._.owner;
    if (pMVar5 != (MVPickupOwner *)0x0) {
      puVar6 = &UNK_?;
      pVVar3 = InventoryItem+ItemDescription::
                InventoryItem_ItemDescription_get_CameraPreviewerOffset
                          (&VStack_4,(InventoryItem_ItemDescription *)pMVar5,(MethodInfo *)0x0);
      fStack_7 = pVVar3->x;
      fStack_8 = pVVar3->y;
      pMVar5 = (this->fields)._._.owner;
      if (pMVar5 != (MVPickupOwner *)0x0) {
        MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_4,pMVar5,(MethodInfo *)0x0);
        VStack_4.x = 0.0;
        puVar9 = &stack0xffffffb4;
        puVar10 = &UNK_?;
        uVar11 = _fStack_c;
        func_?();
        if (this_00 != (BulletThrowingStar *)0x0) {
          pBVar12 = (this_00->fields).onHit;
          pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                     *)func_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar13,(Object *)this,
                     MethodInfo__PickupItemMultiThrowingStar__OnBulletHit_VoxelHit__UnityEngine__Ray_
                     ,(MethodInfo *)0x0);
          pBVar14 = (BulletThrowingStar_OnHitDelegate *)
                    mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)pBVar12,(Delegate *)pUVar13,(MethodInfo *)0x0);
          pBVar12 = (BulletThrowingStar_OnHitDelegate *)0x0;
          if (pBVar14 != (BulletThrowingStar_OnHitDelegate *)0x0) {
            if (pBVar14->klass == TypeInfo__BulletThrowingStar__OnHitDelegate) {
              pBVar12 = pBVar14;
            }
            pBVar15 = TypeInfo__BulletThrowingStar__OnHitDelegate;
            if (pBVar12 == (BulletThrowingStar_OnHitDelegate *)0x0) goto code_?;
          }
          (this_00->fields).onHit = pBVar12;
          if (isLocal != 0) {
            pUVar13 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                       *)func_?(TypeInfo__BulletThrowingStar__OnHitDelegate);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar13,(Object *)this,
                       MethodInfo__PickupItemMultiThrowingStar__OnLocalBulletHit_VoxelHit__UnityEngine__Ray_
                       ,(MethodInfo *)0x0);
            (this_00->fields).onHitLocal = (BulletThrowingStar_OnHitDelegate *)pUVar13;
          }
          pMVar5 = (this->fields)._._.owner;
          if (pMVar5 != (MVPickupOwner *)0x0) {
            fVar16 = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                               (pMVar5,(this->fields).bulletSpeed,(MethodInfo *)0x0);
            fVar17 = (this->fields).bulletRangeStraight;
            pMVar5 = (this->fields)._._.owner;
            fStack_8 = fVar16;
            VStack_18._4_8_ = uVar11;
            if (pMVar5 != (MVPickupOwner *)0x0) {
              ignoreWoIDs = (HashSet_1_System_Int32_ *)
                            (*(code *)(pMVar5->klass->vtable).get_IgnoreWOIDs.method)
                                      (pMVar5,pMVar5->klass[1]._0.image);
              lineOfFire.m_Origin.y = (float)puVar6;
              lineOfFire.m_Origin.x = (float)iVar1;
              lineOfFire.m_Origin.z = (float)puVar10;
              lineOfFire.m_Direction.x = (float)puVar9;
              lineOfFire.m_Direction.y = VStack_18.y;
              lineOfFire.m_Direction.z = VStack_18.z;
              BulletThrowingStar::BulletThrowingStar_Fire
                        (this_00,fStack_8,fVar17,lineOfFire,ignoreWoIDs,
                         (this->fields).bulletRangeFall,(this->fields).bulletFallRate,
                         (MethodInfo *)0x0);
              if (isLocal == 0) {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                pTVar2 = (this->fields)._._.muzzlePoint;
                audioSource = (this->fields).fireSound;
                if (pTVar2 != (Transform *)0x0) {
                  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_get_position(&VStack_4,pTVar2,(MethodInfo *)0x0);
code_?:
                  if (this_01 != (AudioManager *)0x0) {
                    AudioManager::AudioManager_Play_2
                              (this_01,StringLiteral_projectile_fire,audioSource,*pVVar3,
                               (MethodInfo *)0x0);
                    piVar19 = &(this->fields).throwingStarsFired;
                    *piVar19 = *piVar19 + 1;
                    iVar1 = (this->fields).currentAmmo.currentCryptoKey;
                    iVar20 = (this->fields).currentAmmo.hiddenValue;
                    iVar21 = (this->fields).currentAmmo.fakeValue;
                    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable)
                                .Equals.methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                        cctor_started == 0)) {
                      func_?();
                    }
                    input.hiddenValue = iVar20;
                    input.currentCryptoKey = iVar1;
                    input.fakeValue = iVar21;
                    input.inited = (this->fields).currentAmmo.inited;
                    input._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                    pOVar22 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredInt::ObscuredInt_op_Decrement
                                        ((ObscuredInt *)&stack0xffffffcc,input,(MethodInfo *)0x0);
                    iVar1 = pOVar22->hiddenValue;
                    iVar20 = pOVar22->fakeValue;
                    bVar23 = pOVar22->inited;
                    uVar24 = *(undefined3 *)&pOVar22->field_0xd;
                    iVar25 = (this->fields).throwingStarsFired;
                    (this->fields).currentAmmo.currentCryptoKey = pOVar22->currentCryptoKey;
                    (this->fields).currentAmmo.hiddenValue = iVar1;
                    (this->fields).currentAmmo.fakeValue = iVar20;
                    (this->fields).currentAmmo.inited = bVar23;
                    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar24;
                    if ((this->fields).numStars <= iVar25) {
                      (this->fields)._.isFiring = 0;
                      (this->fields).throwingStarsFired = 0;
                    }
                    return;
                  }
                }
              }
              else {
                if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                  func_?(TypeInfo__MVGameControllerBase);
                }
                this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                audioSource = (this->fields).fireSound;
                pCVar26 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                    ((MethodInfo *)0x0);
                if (pCVar26 != (Camera *)0x0) {
                  pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)pCVar26,(MethodInfo *)0x0);
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_position(&VStack_18,pTVar2,(MethodInfo *)0x0);
                    VStack_4.y = pVVar3->x;
                    VStack_4.z = pVVar3->y;
                    fStack_8 = pVVar3->z;
                    pCVar26 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                        ((MethodInfo *)0x0);
                    if (pCVar26 != (Camera *)0x0) {
                      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_1_get_transform((Component_1 *)pCVar26,(MethodInfo *)0x0);
                      if (pTVar2 != (Transform *)0x0) {
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                  Transform_get_forward
                                            ((Vector3 *)&stack0xffffffd0,pTVar2,(MethodInfo *)0x0);
                        VStack_18.y = pVVar3->x;
                        VStack_18.z = pVVar3->y;
                        fVar17 = pVVar3->z;
                        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                             0x2000000) != 0) &&
                           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                          func_?(TypeInfo__UnityEngine__Vector3);
                        }
                        a.z = fStack_8;
                        a.x = VStack_4.y;
                        a.y = VStack_4.z;
                        b.z = fVar17;
                        b.x = VStack_18.y;
                        b.y = VStack_18.z;
                        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                  Vector3_op_Addition((Vector3 *)&stack0xffffffd0,a,b,
                                                      (MethodInfo *)0x0);
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
  func_?(0);
  pBVar14 = extraout_ECX;
  pBVar15 = extraout_EDX;
code_?:
  func_?(pBVar14,pBVar15);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnBulletHit
               (PickupItemMultiThrowingStar *this,VoxelHit voxelHit,Ray lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      iVar3 = func_?();
      if (iVar3 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffe8,voxelHit._8_12_,(MethodInfo *)0x0);
        position.y = voxelHit.point.x;
        position.x = (float)in_stack_5;
        position.z = voxelHit.point.y;
        OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                  (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,(MethodInfo *)0x0);
        return;
      }
      this_00 = (this->fields)._._.owner;
      if (this_00 != (MVPickupOwner *)0x0) {
        this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)this_00,(MethodInfo *)0x0);
        if (this_01 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0) {
          UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
          TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
          TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                    (this_01,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__PickupItemMultiThrowingStar->vtable).Equals.methodPtr & 0x2000000)
               != 0) && ((TypeInfo__PickupItemMultiThrowingStar->_1).cctor_started == 0)) {
            func_?();
          }
          if (pMVar2 != (MVWorldObject *)0x0) {
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnFire
               (PickupItemMultiThrowingStar *this,bool isLocal,MethodInfo *method)

{
  (this->fields).isLocal = isLocal;
  this_00 = (this->fields)._._.owner;
  if (this_00 != (MVPickupOwner *)0x0) {
    this_01 = (Collection_1_VoxelHit_ *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                          *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Collection_1_VoxelHit_ *)0x0) {
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items(this_01,(MethodInfo *)0x0);
      (*(code *)(this->klass->vtable).TriggerBegin.method)
                (this,pIVar1,(this->klass->vtable).TriggerEnd.methodPtr);
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnHolstered
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).TriggerEnd.method)
            (this,(this->klass->vtable).OnStateChanged.methodPtr);
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_OnLeaveVehicleWithWeapon
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if ((this->fields).numStars <= (this->fields).throwingStarsFired) {
    (this->fields)._.isFiring = 0;
  }
  return;
}


/* Void OnLocalBulletHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_OnLocalBulletHit
               (PickupItemMultiThrowingStar *this,VoxelHit voxelHit,Ray lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_01 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,id,(MethodInfo *)0x0);
      if (this_01 != (MVWorldObjectClient *)0x0) {
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 != 0) {
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            voxelHit.point.x = (float)TypeInfo__MVGameControllerBase;
            in_stack_3 = &UNK_?;
            func_?();
          }
          voxelHit.point.x = 0.0;
          in_stack_3 = &UNK_?;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_02 != (MVNetworkGame *)0x0) {
            voxelHit.point.y = 0.0;
            in_stack_3 = &UNK_?;
            voxelHit.point.x = (float)this_02;
            this_03 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_02,(MethodInfo *)0x0);
            if (this_03 != (MVLocalPlayer *)0x0) {
              voxelHit.normal.x = 0.0;
              voxelHit.point.x = (float)&UNK_?;
              voxelHit.point.y = (float)this_03;
              voxelHit.point.z = (float)this_01;
              bVar2 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                ((MVPlayer *)this_03,this_01,(MethodInfo *)0x0);
              if (bVar2 != 0) {
                return;
              }
              this_00 = (this->fields)._._.owner;
              if (this_00 != (MVPickupOwner *)0x0) {
                voxelHit.cubePos.x = 0;
                voxelHit.cubePos.y = 0;
                voxelHit.normal.y = (float)&UNK_?;
                voxelHit.normal.z = (float)this_00;
                this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this_00,(MethodInfo *)0x0);
                if (this_04 != (Transform *)0x0) {
                  voxelHit.face = 0;
                  voxelHit.cubePos._0_4_ = &stack0xffffffe8;
                  voxelHit.normal.z = (float)&UNK_?;
                  voxelHit._28_4_ = this_04;
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_position
                                     ((Vector3 *)voxelHit.cubePos._0_4_,this_04,(MethodInfo *)0x0);
                  uVar5._0_4_ = pVVar4->x;
                  uVar5._4_4_ = pVVar4->y;
                  fVar6 = pVVar4->z;
                  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                       != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                    voxelHit.cube = (Cube *)TypeInfo__UnityEngine__Vector3;
                    voxelHit.woId = (int32_t)&UNK_?;
                    func_?();
                  }
                  voxelHit.cube = (Cube *)0x0;
                  voxelHit.face = (int32_t)uVar5;
                  voxelHit._36_4_ = SUB84((ulonglong)uVar5 >> 0x20,0);
                  voxelHit.normal.z = (float)in_stack_3;
                  voxelHit.cubePos._0_4_ = voxelHit.point.x;
                  voxelHit._28_4_ = voxelHit.point.y;
                  voxelHit.normal.y = (float)&voxelHit.transform;
                  voxelHit.normal.x = (float)&UNK_?;
                  a.y = voxelHit.point.x;
                  a.x = (float)in_stack_3;
                  a.z = voxelHit.point.y;
                  b.z = fVar6;
                  b.x = (float)(int)uVar5;
                  b.y = (float)(int)((ulonglong)uVar5 >> 0x20);
                  voxelHit.woId = (int32_t)fVar6;
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                     ((Vector3 *)voxelHit.normal.y,a,b,(MethodInfo *)0x0);
                  uVar7 = pVVar4->x;
                  uVar8 = pVVar4->y;
                  voxelHit._60_4_ = &voxelHit.transform;
                  voxelHit.transform = (Transform *)&UNK_?;
                  voxelHit.interactionFlags._0_4_ = uVar7;
                  voxelHit.interactionFlags._4_4_ = (undefined *)uVar8;
                  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)voxelHit._60_4_,*pVVar4,(MethodInfo *)0x0);
                  voxelHit.interactionFlags._4_4_ = &UNK_?;
                  MultiThrowingStarHitPackage::MultiThrowingStarHitPackage_Create
                            ((InteractionData *)&voxelHit.distance,(MethodInfo *)0x0);
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    pIStack9 = (x->klass->vtable).OnValidate.methodPtr;
                    puStack10 = (undefined *)0x0;
                    voxelHit.interactionFlags._4_4_ = &UNK_?;
                    (*(code *)(x->klass->vtable).__unknown_1.method)();
                    return;
                  }
                }
              }
            }
          }
          goto code_?;
        }
      }
      return;
    }
  }
code_?:
  pIStack9 = (Il2CppMethodPointer)0x0;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_ResetAmmo
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  OStack_1.currentCryptoKey = (this->fields).maxAmmo.currentCryptoKey;
  OStack_1.hiddenValue = (this->fields).maxAmmo.hiddenValue;
  OStack_1.fakeValue = (this->fields).maxAmmo.fakeValue;
  OStack_1.inited = (this->fields).maxAmmo.inited;
  OStack_1._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_TriggerBegin
               (PickupItemMultiThrowingStar *this,int32_t instigator,MethodInfo *method)

{
  if ((this->fields)._.isFiring == 0) {
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if ((this->fields).fireRate + (this->fields).fireTime < fVar1) {
      (this->fields)._.isFiring = 1;
      (this->fields).throwingStarsFired = 0;
      fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).fireTime = fVar1;
    }
  }
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_UpdateControllerUpdate
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (((this->fields)._.isFiring != 0) &&
     (PickupItemWithDelay::PickupItemWithDelay_Fire((PickupItemWithDelay *)this,(MethodInfo *)0x0),
     (this->fields)._.isFiring != 0)) {
    bVar1 = (this->fields).isLocal;
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (((this->fields).throwingStarsFired < (this->fields).numStars) &&
       (fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
       (this->fields).fireSpacingDelay + (this->fields).fireTime <= fVar2)) {
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this->fields).fireTime = fVar2;
      PickupItemMultiThrowingStar_Fire(this,bVar1,(MethodInfo *)0x0);
    }
    pOVar3 = (ObscuredInt__Class *)(this->fields).currentAmmo.currentCryptoKey;
    iVar4 = (this->fields).currentAmmo.hiddenValue;
    iVar5 = (this->fields).currentAmmo.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
      pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
      func_?();
    }
    value.hiddenValue = iVar4;
    value.currentCryptoKey = (int32_t)pOVar3;
    value.fakeValue = iVar5;
    value.inited = (this->fields).currentAmmo.inited;
    value._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
    iVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
    if ((iVar4 < 1) &&
       (cVar6 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)
                          (this,(this->klass->vtable).get_CanUnequip.methodPtr), cVar6 == '\0')) {
      this_00 = (this->fields)._._.owner;
      if ((this_00 != (MVPickupOwner *)0x0) &&
         ((this_01 = (DayNightCycle *)
                     System.dll::System::Collections::Generic::
                     SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                     ::Single,System::Object]::
                     SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                               ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                 *)this_00,(MethodInfo *)0x0), this_01 != (DayNightCycle *)0x0 &&
          (this_02 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0),
          this_02 != (CelestialParam *)0x0)))) {
        x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                      ((GameObject *)this_02,
                       MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__)
        ;
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?();
        }
        bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar1 == 0) {
          return;
        }
        if (x != (UseInteractorHandler *)0x0) {
          _Stack00000020 = x->klass[1]._0.byval_arg.data;
          pUStack7 = x;
          (*(code *)x->klass[1]._0.namespaze)();
          return;
        }
      }
      _Stack00000020 = (_union_86)0x0;
      func_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* PickupItemMultiThrowingStar() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  pIVar6 = MultiThrowingStarHitPackage::MultiThrowingStarHitPackage_Create
                     (&IStack_7,(MethodInfo *)0x0);
  fStack_2 = pIVar6->damage;
  fStack_3 = (pIVar6->impulse).x;
  fStack_4 = (pIVar6->impulse).y;
  fStack_5 = (pIVar6->impulse).z;
  uStack_1._0_1_ = pIVar6->interactionType;
  uStack_1._1_1_ = pIVar6->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&pIVar6->field_0x12;
  fVar8 = (float10)func_?(&fStack_2,0);
  TypeInfo__PickupItemMultiThrowingStar->static_fields->baseDamage = (float)fVar8;
  return;
}


/* PickupItemMultiThrowingStar() */

void Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar__ctor
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit(&OStack_2,0x96,(MethodInfo *)0x0);
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).maxAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  (this->fields).bulletRangeStraight = 50.0;
  (this->fields).bulletRangeFall = 50.0;
  (this->fields).bulletFallRate = 0.1;
  (this->fields).bulletSpeed = 80.0;
  (this->fields).numStars = 5;
  (this->fields).fireSpacingDelay = 0.1;
  (this->fields).fireRate = 1.0;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemMultiThrowingStar::
     PickupItemMultiThrowingStar_get_IsAmmoDepleted
               (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = (this->fields).currentAmmo.currentCryptoKey;
  uVar2 = (this->fields).currentAmmo.hiddenValue;
  value.hiddenValue = uVar2;
  value.currentCryptoKey = uVar1;
  iVar3 = (this->fields).currentAmmo.fakeValue;
  uVar4 = *(undefined4 *)&(this->fields).currentAmmo.inited;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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

int32_t Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_get_Quantity
                  (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  value = (this->fields).currentAmmo;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  return iVar1;
}


/* AvatarItemType get_Type() */

AvatarItemType__Enum
Assembly-CSharp.dll::PickupItemMultiThrowingStar::PickupItemMultiThrowingStar_get_Type
          (PickupItemMultiThrowingStar *this,MethodInfo *method)

{
  return AvatarItemType__Enum_MultiThrowingStar;
}

