
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_Awake(PickupItemHand *this,MethodInfo *method)

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
    ppTVar1 = &(this->fields)._._.firstPersonTransform;
    pTVar2 = *ppTVar1;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality((Object_1 *)pTVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      this_00 = (GameObject *)func_?(TypeInfo__UnityEngine__GameObject);
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor(this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform((Component *)this,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent((Transform *)&UNK_?,pTVar2,(MethodInfo *)0x0);
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition(pTVar2,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0);
          pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform(this_00,(MethodInfo *)0x0);
          *ppTVar1 = pTVar2;
          func_?();
          return;
        }
      }
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  return;
}


/* Void DoRemoveCubes() */

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand_DoRemoveCubes(PickupItemHand *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
    func_?(&TypeInfo__System__Collections__Generic__HashSet<int>);
    func_?(&StringLiteral_Default);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff50,0,0x48);
  this_00 = (this->fields)._._.muzzlePoint;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position(&VStack_2,this_00,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fStack_5 = pVVar1->z;
    pMVar6 = (this->fields)._._.owner;
    fStack_7 = (float)uVar3;
    fStack_8 = (float)uVar4;
    if (pMVar6 != (MVPickupOwner *)0x0) {
      pVVar1 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_9,pMVar6,(MethodInfo *)0x0);
      VStack_2.x = pVVar1->x;
      VStack_2.y = pVVar1->y;
      fStack_10 = fStack_7 - VStack_2.x;
      fStack_11 = fStack_8 - VStack_2.y;
      fStack_12 = fStack_5 - pVVar1->z;
      pMVar6 = (this->fields)._._.owner;
      VStack_2.z = fStack_12;
      if (pMVar6 != (MVPickupOwner *)0x0) {
        pVVar1 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_9,pMVar6,(MethodInfo *)0x0);
        fVar13 = VStack_2.z;
        fVar14 = fStack_10;
        fVar15 = fStack_11;
        fStack_16 = fStack_10;
        fStack_7 = fStack_11;
        fStack_8 = 0.0;
        fStack_5 = 0.0;
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize(&VStack_9,*pVVar1,(MethodInfo *)0x0);
        uVar17 = pVVar1->x;
        uVar18 = pVVar1->y;
        fVar19 = pVVar1->z;
        VStack_2.z = fVar19 * 2.0 + fStack_12;
        VStack_2.y = (float)uVar18 * 2.0 + fStack_11;
        VStack_2.x = fStack_10 + (float)uVar17 * 2.0;
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        fVar20 = 1.0;
        fVar21 = 0.0;
        uVar22._0_2_ = 0;
        uVar22._2_2_ = 0;
        uVar23._0_2_ = 0;
        uVar23._2_2_ = 0x3f80;
        fVar24 = VStack_2.x;
        method_00 = VStack_2.y;
        start.y = fStack_7;
        start.x = fStack_16;
        start.z = fVar13;
        end.z = VStack_2.z;
        end.x = VStack_2.x;
        end.y = VStack_2.y;
        color.a = 1.0;
        color.r = 1.0;
        color.g = 0.0;
        color.b = 0.0;
        fVar25 = VStack_2.z;
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_DrawLine(start,end,color,10.0,(MethodInfo *)0x0);
        puVar26 = &UNK_?;
        pHVar27 = TypeInfo__System__Collections__Generic__HashSet<int>;
        this_02 = (HashSet_1_System_Int32_ *)func_?();
        System.Core.dll::System::Collections::Generic::HashSet`1[System::Int32]::HashSet_1_System_Int32___ctor(this_02,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
        iVar28 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
        ray.m_Origin.y = fVar15;
        ray.m_Origin.x = fVar14;
        ray.m_Origin.z = fVar13;
        ray.m_Direction.x = (float)uVar17;
        ray.m_Direction.y = (float)uVar18;
        ray.m_Direction.z = fVar19;
        bVar29 = CollisionDetection::CollisionDetection_MVHit_1(ray,(VoxelHit *)&stack0xffffff50,2.0,this_02,1 << ((byte)iVar28 & 0x1f),(MethodInfo *)0x0);
        if (bVar29 == 0) {
          return;
        }
        this_03 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if ((this_03 != (MVWorldObjectClientManager *)0x0) && (pMVar30 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject(this_03,iStack_31,(MethodInfo *)0x0), pMVar30 != (MVWorldObject *)0x0)) {
          iVar32 = (pMVar30->fields).type;
          if ((iVar32 == 8) || (iVar32 == 0x20)) {
            pMVar33 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar33 == (MVNetworkGame *)0x0) || (pWVar34 = (pMVar33->fields).worldNetwork, pWVar34 == (WorldNetwork *)0x0)) || (this_01 = (RuntimeEventManager *)(pWVar34->fields)._.runtimeEventManagerNetwork, this_01 == (RuntimeEventManager *)0x0)) goto code_?;
            voxelHit.point.y = (float)method_00;
            voxelHit.point.x = fVar24;
            voxelHit.point.z = fVar25;
            voxelHit.normal.x = fVar20;
            voxelHit.normal.y = fVar21;
            voxelHit.normal.z = (float)uVar22;
            voxelHit.cubePos.x = (int16_t)uVar23;
            voxelHit.cubePos.y = SUB42(uVar23,2);
            voxelHit._28_4_ = puVar26;
            voxelHit.face = (int32_t)pHVar27;
            voxelHit._36_4_ = iStack_31;
            voxelHit.woId = (int32_t)pCStack_35;
            voxelHit.cube = (Cube *)fStack_36;
            voxelHit.distance = (float)pCStack_37;
            voxelHit.collider = (Collider *)pTStack_38;
            voxelHit.transform = (Transform *)uStack_39;
            voxelHit._60_4_ = (int)iStack_40;
            voxelHit.interactionFlags._0_4_ = (int)((ulonglong)iStack_40 >> 0x20);
            voxelHit.interactionFlags._4_4_ = 0x41a00000;
            RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube(this_01,voxelHit,0.0,method_00);
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

void Assembly-CSharp.dll::PickupItemHand::PickupItemHand__ctor(PickupItemHand *this,MethodInfo *method)

{
  (this->fields).pushMagnitude = 500.0;
  (this->fields).pushRadius = 3.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  (this->fields)._.crossHairCannotFireLow.r = 1.0;
  (this->fields)._.crossHairCannotFireLow.g = 0.0;
  (this->fields)._.crossHairCannotFireLow.b = 0.0;
  (this->fields)._.crossHairCannotFireLow.a = 1.0;
  (this->fields)._.crossHairCannotFireHigh.r = 1.0;
  (this->fields)._.crossHairCannotFireHigh.g = 0.92156863;
  (this->fields)._.crossHairCannotFireHigh.b = 0.015686275;
  (this->fields)._.crossHairCannotFireHigh.a = 1.0;
  (this->fields)._.crossHairCanFire.r = 0.0;
  (this->fields)._.crossHairCanFire.g = 1.0;
  (this->fields)._.crossHairCanFire.b = 0.0;
  (this->fields)._.crossHairCanFire.a = 1.0;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::ObscuredFloat_op_Implicit(&OStack_2,1.0,(MethodInfo *)0x0);
  AVar3 = pOVar1->hiddenValue;
  pBVar4 = pOVar1->hiddenValueOld;
  fVar5 = pOVar1->fakeValue;
  bVar6 = pOVar1->inited;
  uVar7 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields)._.fireInterval.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = AVar3;
  (this->fields)._.fireInterval.hiddenValueOld = pBVar4;
  (this->fields)._.fireInterval.fakeValue = fVar5;
  (this->fields)._.fireInterval.inited = bVar6;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar7;
  func_?(&(this->fields)._.fireInterval.hiddenValueOld,0);
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}

