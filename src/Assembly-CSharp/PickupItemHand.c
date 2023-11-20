
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
  func_?(&stack0xffffff50,0,0x48);
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  this_00 = (this->fields)._._.muzzlePoint;
  if (this_00 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_5,this_00,(MethodInfo *)0x0);
    uVar6 = pVVar4->x;
    uVar7 = pVVar4->y;
    fStack_8 = pVVar4->z;
    pMVar9 = (this->fields)._._.owner;
    fStack_10 = (float)uVar6;
    fStack_11 = (float)uVar7;
    if (pMVar9 != (MVPickupOwner *)0x0) {
      pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_12,pMVar9,(MethodInfo *)0x0);
      VStack_5.x = pVVar4->x;
      VStack_5.y = pVVar4->y;
      fStack_13 = fStack_10 - VStack_5.x;
      fStack_14 = fStack_11 - VStack_5.y;
      fStack_15 = fStack_8 - pVVar4->z;
      pMVar9 = (this->fields)._._.owner;
      VStack_5.z = fStack_15;
      if (pMVar9 != (MVPickupOwner *)0x0) {
        pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_12,pMVar9,(MethodInfo *)0x0)
        ;
        fVar16 = VStack_5.z;
        fStack_17 = fStack_13;
        fStack_10 = fStack_14;
        fStack_11 = 0.0;
        fStack_8 = 0.0;
        uStack_18 = CONCAT44(fStack_14,fStack_13);
        fStack_19 = VStack_5.z;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                           (&VStack_12,*pVVar4,(MethodInfo *)0x0);
        uVar20 = pVVar4->x;
        uVar21 = pVVar4->y;
        fStack_1 = pVVar4->z;
        VStack_5.z = fStack_1 * _UNK_? + fStack_15;
        VStack_5.y = (float)uVar21 * _UNK_? + fStack_14;
        VStack_5.x = fStack_13 + (float)uVar20 * _UNK_?;
        fStack_2 = (float)uVar20;
        fStack_3 = (float)uVar21;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar22 = VStack_5.x;
        method_00 = VStack_5.y;
        start.y = fStack_10;
        start.x = fStack_17;
        start.z = fVar16;
        end.z = VStack_5.z;
        end.x = VStack_5.x;
        end.y = VStack_5.y;
        color.g = _UNK_?;
        color.r = _UNK_?;
        color.b = (float)_UNK_?;
        color.a = _UNK_?;
        fVar16 = VStack_5.z;
        fVar23 = _UNK_?;
        fVar24 = _UNK_?;
        uVar25 = _UNK_?;
        fVar26 = _UNK_?;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine
                  (start,end,color,10.0,(MethodInfo *)0x0);
        puVar27 = &UNK_?;
        pHVar28 = TypeInfo__System__Collections__Generic__HashSet<int>;
        this_02 = (HashSet_1_System_Int32_ *)func_?();
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::
        HashSet_1_System_Int32___ctor
                  (this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        iVar29 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                           (StringLiteral_Default,(MethodInfo *)0x0);
        ray.m_Origin.z = fStack_19;
        ray.m_Origin.x = (float)(undefined4)uStack_18;
        ray.m_Origin.y = (float)uStack_18._4_4_;
        ray.m_Direction.x = fStack_2;
        ray.m_Direction.y = fStack_3;
        ray.m_Direction.z = fStack_1;
        bVar30 = CollisionDetection::CollisionDetection_MVHit_1
                          (ray,(VoxelHit *)&stack0xffffff50,2.0,this_02,1 << ((byte)iVar29 & 0x1f),
                           (MethodInfo *)0x0);
        if (bVar30 == 0) {
          return;
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_03 != (MVWorldObjectClientManager *)0x0) &&
           (pMVar31 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_03,iStack_32,(MethodInfo *)0x0),
           pMVar31 != (MVWorldObject *)0x0)) {
          if (((pMVar31->fields).type == 8) || ((pMVar31->fields).type == 0x20)) {
            pMVar33 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar33 == (MVNetworkGame *)0x0) ||
                (pWVar34 = (pMVar33->fields).worldNetwork, pWVar34 == (WorldNetwork *)0x0)) ||
               (this_01 = (RuntimeEventManager *)(pWVar34->fields)._.runtimeEventManagerNetwork,
               this_01 == (RuntimeEventManager *)0x0)) goto code_?;
            voxelHit.point.y = (float)method_00;
            voxelHit.point.x = fVar22;
            voxelHit.point.z = fVar16;
            voxelHit.normal.x = fVar23;
            voxelHit.normal.y = fVar24;
            voxelHit.normal.z = (float)uVar25;
            voxelHit.cubePos._0_4_ = fVar26;
            voxelHit._28_4_ = puVar27;
            voxelHit.face = (int32_t)pHVar28;
            voxelHit._36_4_ = iStack_32;
            voxelHit.woId = (int32_t)pCStack_35;
            voxelHit.cube = (Cube *)fStack_36;
            voxelHit.distance = (float)pCStack_37;
            voxelHit.collider = (Collider *)pTStack_38;
            voxelHit.transform = (Transform *)uStack_39;
            voxelHit._60_4_ = (int)iStack_40;
            voxelHit.interactionFlags._0_4_ = (int)((ulonglong)iStack_40 >> 0x20);
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
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
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

