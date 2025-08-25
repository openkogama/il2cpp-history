
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_Awake
               (PickupItemHand *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_FirstPersonTransform);
    cRam_? = '\x01';
  }
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
    pTVar1 = (this->fields)._._.firstPersonTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
        if (pTVar1 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar1,p,(MethodInfo *)0x0);
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar1,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            (this->fields)._._.firstPersonTransform = pTVar1;
            func_?();
            return;
          }
        }
      }
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}


/* Void DoRemoveCubes() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_DoRemoveCubes
               (PickupItemHand *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  func_?(&VStack_1,0,0x48);
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  this_00 = (this->fields)._._.muzzlePoint;
  if (this_00 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_6,this_00,(MethodInfo *)0x0);
    uVar7 = pVVar5->x;
    uVar8 = pVVar5->y;
    fStack_9 = pVVar5->z;
    pMVar10 = (this->fields)._._.owner;
    fStack_11 = (float)uVar7;
    fStack_12 = (float)uVar8;
    if (pMVar10 != (MVPickupOwner *)0x0) {
      pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_13,pMVar10,(MethodInfo *)0x0);
      VStack_6.x = pVVar5->x;
      VStack_6.y = pVVar5->y;
      fStack_14 = fStack_11 - VStack_6.x;
      fStack_15 = fStack_12 - VStack_6.y;
      fStack_16 = fStack_9 - pVVar5->z;
      pMVar10 = (this->fields)._._.owner;
      VStack_6.z = fStack_16;
      if (pMVar10 != (MVPickupOwner *)0x0) {
        pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            (&VStack_13,pMVar10,(MethodInfo *)0x0);
        fVar17 = VStack_6.z;
        fStack_18 = fStack_14;
        fStack_11 = fStack_15;
        fStack_12 = 0.0;
        fStack_9 = 0.0;
        uStack_19 = CONCAT44(fStack_15,fStack_14);
        fStack_20 = VStack_6.z;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            (&VStack_13,*pVVar5,(MethodInfo *)0x0);
        uVar21 = pVVar5->x;
        uVar22 = pVVar5->y;
        fStack_2 = pVVar5->z;
        VStack_6.z = fStack_16 + fStack_2 * _UNK_?;
        VStack_6.y = fStack_15 + (float)uVar22 * _UNK_?;
        VStack_6.x = fStack_14 + (float)uVar21 * _UNK_?;
        fStack_3 = (float)uVar21;
        fStack_4 = (float)uVar22;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Debug);
        }
        start.y = fStack_11;
        start.x = fStack_18;
        start.z = fVar17;
        end.z = VStack_6.z;
        end.x = VStack_6.x;
        end.y = VStack_6.y;
        color.g = (float)_UNK_?;
        color.r = (float)_UNK_?;
        color.b = (float)_UNK_?;
        color.a = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
                  (start,end,color,10.0,(MethodInfo *)0x0);
        this_02 = (HashSet_1_System_Int32_ *)
                  func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32___ctor
                  (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        iVar23 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Default,(MethodInfo *)0x0);
        ray.m_Origin.z = fStack_20;
        ray.m_Origin.x = (float)(undefined4)uStack_19;
        ray.m_Origin.y = (float)uStack_19._4_4_;
        ray.m_Direction.x = fStack_3;
        ray.m_Direction.y = fStack_4;
        ray.m_Direction.z = fStack_2;
        bVar24 = CollisionDetection::CollisionDetection_MVHit_1
                          (ray,&VStack_1,2.0,this_02,1 << ((byte)iVar23 & 0x1f),(MethodInfo *)0x0);
        if (bVar24 == 0) {
          return;
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_03 != (MVWorldObjectClientManager *)0x0) &&
           (method_00 = (MethodInfo *)VStack_1.normal.y,
           pMVar25 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                               (this_03,VStack_1.woId,(MethodInfo *)0x0),
           pMVar25 != (MVWorldObject *)0x0)) {
          if (((pMVar25->fields).type == 8) || ((pMVar25->fields).type == 0x20)) {
            pMVar26 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar26 == (MVNetworkGame *)0x0) ||
                (pWVar27 = (pMVar26->fields).worldNetwork, pWVar27 == (WorldNetwork *)0x0)) ||
               (this_01 = (RuntimeEventManager *)(pWVar27->fields)._.runtimeEventManagerNetwork,
               this_01 == (RuntimeEventManager *)0x0)) goto code_?;
            voxelHit.point.y = VStack_1.point.z;
            voxelHit.point.x = VStack_1.point.y;
            voxelHit.point.z = VStack_1.normal.x;
            voxelHit.normal.x = VStack_1.normal.y;
            voxelHit.normal.y = VStack_1.normal.z;
            voxelHit.normal.z = (float)VStack_1.cubePos._0_4_;
            voxelHit.cubePos.x = VStack_1.cubePos.z;
            voxelHit.cubePos.y = VStack_1._30_2_;
            voxelHit._28_4_ = VStack_1.face;
            voxelHit.face = VStack_1._36_4_;
            voxelHit._36_4_ = VStack_1.woId;
            voxelHit.woId = (int32_t)VStack_1.cube;
            voxelHit.cube = (Cube *)VStack_1.distance;
            voxelHit.distance = (float)VStack_1.collider;
            voxelHit.collider = (Collider *)VStack_1.transform;
            voxelHit.transform = (Transform *)VStack_1._60_4_;
            voxelHit._60_4_ = (int)VStack_1.interactionFlags;
            voxelHit.interactionFlags._0_4_ = (int)((ulonglong)VStack_1.interactionFlags >> 0x20);
            voxelHit.interactionFlags._4_4_ = 0x41a00000;
            RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                      (this_01,voxelHit,0.0,method_00);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* PickupItemHand() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand__ctor
               (PickupItemHand *this,MethodInfo *method)

{
  (this->fields).pushMagnitude = 500.0;
  (this->fields).pushRadius = 3.0;
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

