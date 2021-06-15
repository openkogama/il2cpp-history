
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Awake
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).ResetAmmo.method)
            (this,(this->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  pGVar1 = (this->fields).primaryCursor;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  pGVar1 = (GUICellCursor *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)pGVar1,
                      GUICellCursor_MethodInfo__UnityEngine__Object__Instantiate<GUICellCursor>_GUICellCursor_
                     );
  (this->fields).primaryCursor = pGVar1;
  pGVar1 = (GUICellCursor *)
           UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                     ((XpBoostParticlePreviewer *)(this->fields).secondaryCursor,
                      GUICellCursor_MethodInfo__UnityEngine__Object__Instantiate<GUICellCursor>_GUICellCursor_
                     );
  (this->fields).secondaryCursor = pGVar1;
  pGVar1 = (this->fields).primaryCursor;
  if (pGVar1 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean CanInsertCubeAtCubePos(IntVector) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_CanInsertCubeAtCubePos
               (PickupItemCubeGun *this,IntVector cubePos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_01 != (MVWorldObjectClientManager *)0x0) {
    this_02 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                        (this_01,
                         MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                        );
    if (this_02 != (MVRoundCube *)0x0) {
      gameObject = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)this_02,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar1 = SharedCubeFunctions::SharedCubeFunctions_LocalToWorld
                         ((Vector3 *)&stack0xfffffff0,(GameObject *)gameObject,cubePos,
                          (MethodInfo *)0x0);
      fVar2 = pVVar1->z;
      this_00 = (this->fields)._._.owner;
      if (this_00 != (MVPickupOwner *)0x0) {
        pVVar1 = InventoryItem+ItemDescription::
                 InventoryItem_ItemDescription_get_CameraPreviewerOffset
                           ((Vector3 *)&stack0xffffffd0,(InventoryItem_ItemDescription *)this_00,
                            (MethodInfo *)0x0);
        uStack_3._0_4_ = pVVar1->x;
        fStack_4 = pVVar1->y;
        fVar5 = pVVar1->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          uStack_3._0_4_ = (float)TypeInfo__UnityEngine__Vector3;
          func_?();
        }
        a.z = fVar2;
        a.x = (float)uStack_3;
        a.y = SUB84(uStack_3,4);
        b.z = fVar5;
        b.x = (float)uStack_3;
        b.y = SUB84(uStack_3,4);
        UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                  ((Vector3 *)&stack0xffffffd0,a,b,(MethodInfo *)0x0);
        fVar6 = (float10)func_?();
        return (this->fields).minDistanceToCubeFire <= (float)fVar6;
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  bVar8 = (*pcVar7)();
  return bVar8;
}


/* Void DoAutoFire() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_DoAutoFire
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar1 = fVar1 - (this->fields).prevFireTime;
  bVar2 = (this->fields).fireSecondary;
  uVar3 = (this->fields).fireIntervalSecondary.currentCryptoKey;
  uVar4 = (this->fields).fireIntervalSecondary.hiddenValue.b1;
  uVar5 = (this->fields).fireIntervalSecondary.hiddenValue.b2;
  uVar6 = (this->fields).fireIntervalSecondary.hiddenValue.b3;
  uVar7 = (this->fields).fireIntervalSecondary.hiddenValue.b4;
  value.hiddenValue.b4 = uVar7;
  value.hiddenValue.b3 = uVar6;
  value.hiddenValue.b2 = uVar5;
  value.hiddenValue.b1 = uVar4;
  value.currentCryptoKey = uVar3;
  pBVar8 = (this->fields).fireIntervalSecondary.hiddenValueOld;
  fVar9 = (this->fields).fireIntervalSecondary.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValueOld = pBVar8;
  value.fakeValue = fVar9;
  value.inited = (this->fields).fireIntervalSecondary.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x11;
  fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  (this->fields).fireSecondary = fVar9 < fVar1;
  (this->fields).fireMain = fVar1 <= fVar9;
  if ((fVar9 < fVar1) && (bVar2 == 0)) {
    this_00 = (this->fields).chargeObject;
    if ((this_00 != (Transform *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                            ((Component_1 *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0
       )) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_01,1,(MethodInfo *)0x0);
      return;
    }
    func_?(0);
    pcVar10 = (code *)swi(3);
    (*pcVar10)();
    return;
  }
  return;
}


/* Boolean DoLineOfFireCheck(VoxelHit ByRef) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_DoLineOfFireCheck
               (PickupItemCubeGun *this,VoxelHit *hit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pVVar2 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                       (&VStack_3,(InventoryItem_ItemDescription *)pMVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    pMVar1 = (this->fields)._._.owner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_3,pMVar1,(MethodInfo *)0x0);
      uVar6 = pVVar2->y;
      fVar7 = pVVar2->z;
      func_?(&stack0xffffffcc,(int)uStack_4,(int)((ulonglong)uStack_4 >> 0x20),fVar5);
      iVar8 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                        (StringLiteral_Default,(MethodInfo *)0x0);
      this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                 *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                               *)(1 << ((byte)iVar8 & 0x1f)),(MethodInfo *)0x0);
      VStack_3.y = 0.0;
      VStack_3.z = 0.0;
      uStack_4 = 0;
      fVar5 = (this->fields).range;
      VStack_3.x = fVar7;
      this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
      System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]
      ::HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
      pMVar1 = (this->fields)._._.owner;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        this_02 = (Collection_1_VoxelHit_ *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)pMVar1,(MethodInfo *)0x0);
        if (this_02 != (Collection_1_VoxelHit_ *)0x0) {
          item = (UnityWebRequest *)
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items(this_02,(MethodInfo *)0x0);
          if (this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
            System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
            UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                      ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,item,
                       MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
            layerMask = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                        Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                  (this_00,(MethodInfo *)0x0);
            ray.m_Origin.y = VStack_3.x;
            ray.m_Origin.x = (float)uVar6;
            ray.m_Origin.z = VStack_3.y;
            ray.m_Direction.x = VStack_3.z;
            ray.m_Direction.y = (float)(int)uStack_4;
            ray.m_Direction.z = (float)((ulonglong)uStack_4 >> 0x20);
            bVar9 = CollisionDetection::CollisionDetection_MVHit_1
                              (ray,hit,fVar5,(HashSet_1_System_Int32_ *)this_01,(int32_t)layerMask,
                               (MethodInfo *)0x0);
            return bVar9;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar10 = (code *)swi(3);
  bVar9 = (*pcVar10)();
  return bVar9;
}


/* Void Execute() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Execute
               (PickupItemCubeGun *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).prevFireTime;
  pPVar3 = &this->fields;
  uVar4 = (this->fields)._.fireInterval.currentCryptoKey;
  uVar5 = (pPVar3->_).fireInterval.hiddenValue.b1;
  uVar6 = (pPVar3->_).fireInterval.hiddenValue.b2;
  uVar7 = (pPVar3->_).fireInterval.hiddenValue.b3;
  uVar8 = (pPVar3->_).fireInterval.hiddenValue.b4;
  value.hiddenValue.b4 = uVar8;
  value.hiddenValue.b3 = uVar7;
  value.hiddenValue.b2 = uVar6;
  value.hiddenValue.b1 = uVar5;
  value.currentCryptoKey = uVar4;
  pBVar9 = (this->fields)._.fireInterval.hiddenValueOld;
  fVar10 = (this->fields)._.fireInterval.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar1 = fVar1 - fVar2;
  value.hiddenValueOld = pBVar9;
  value.fakeValue = fVar10;
  value.inited = (this->fields)._.fireInterval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
  fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if (fVar1 <= fVar2) {
    (this->fields).waitingToFire = 1;
  }
  else {
    if ((this->fields).fireMain != 0) {
      pMVar11 = (this->fields)._._.owner;
      if (pMVar11 == (MVPickupOwner *)0x0) goto code_?;
      bVar12 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar11,(MethodInfo *)0x0);
      this = (PickupItemCubeGun *)(uint)bVar12;
      (*(code *)(this_01->klass->vtable).OnFire.method)
                (this_01,this,(this_01->klass->vtable).OnDestroy.methodPtr);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this_01->fields).prevFireTime = fVar2;
    }
    if ((this_01->fields).fireSecondary != 0) {
      pMVar11 = (this_01->fields)._._.owner;
      if (pMVar11 != (MVPickupOwner *)0x0) {
        bVar12 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar11,(MethodInfo *)0x0);
        PickupItemCubeGun_OnFireSecondary(this_01,bVar12,(MethodInfo *)0x0);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_00 = (this_01->fields).chargeObject;
        (this_01->fields).prevFireTime = fVar2;
        if (this_00 != (Transform *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_00,(MethodInfo *)0x0);
          if (this_02 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_02,0,(MethodInfo *)0x0);
            return;
          }
        }
      }
code_?:
      func_?(0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
  return;
}


/* IntVector GetCubePos(VoxelHit) */

IntVector Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_GetCubePos
                    (VoxelHit voxelHit,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  auStack_1._4_4_ = (MonitorData *)0x0;
  iStack_2 = 0;
  voxelHit_00.interactionFlags._4_4_ = method;
  voxelHit_00.interactionFlags._0_4_ = voxelHit.interactionFlags._4_4_;
  voxelHit_00.point.y = voxelHit.point.z;
  voxelHit_00.point.x = voxelHit.point.y;
  voxelHit_00.point.z = voxelHit.normal.x;
  voxelHit_00.normal.x = voxelHit.normal.y;
  voxelHit_00.normal.y = voxelHit.normal.z;
  voxelHit_00.normal.z = (float)voxelHit.cubePos._0_4_;
  voxelHit_00.cubePos.x = voxelHit.cubePos.z;
  voxelHit_00.cubePos.y = voxelHit._30_2_;
  voxelHit_00._28_4_ = voxelHit.face;
  voxelHit_00.face = voxelHit._36_4_;
  voxelHit_00._36_4_ = voxelHit.woId;
  voxelHit_00.woId = (int32_t)voxelHit.cube;
  voxelHit_00.cube = (Cube *)voxelHit.distance;
  voxelHit_00.distance = (float)voxelHit.collider;
  voxelHit_00.collider = (Collider *)voxelHit.transform;
  voxelHit_00.transform = (Transform *)voxelHit._60_4_;
  voxelHit_00._60_4_ = (undefined *)voxelHit.interactionFlags;
  bVar3 = PickupItemCubeGun_GetCubePosFromFineGrainedTerrain
                    (voxelHit_00,0.2,(IntVector *)(auStack_1 + 4),(MethodInfo *)0x0);
  if (bVar3 == 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      voxelHit.collider = (Collider *)TypeInfo__MVGameControllerBase;
      voxelHit.distance = (float)&UNK_?;
      func_?();
    }
    voxelHit.collider = (Collider *)0x0;
    voxelHit.distance = (float)&UNK_?;
    this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this != (MVWorldObjectClientManager *)0x0) {
      voxelHit.transform =
           (Transform *)
           MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
      ;
      voxelHit.distance = (float)&UNK_?;
      voxelHit.collider = (Collider *)this;
      voxelHit._60_4_ =
           MVWorldObjectClientManager::MVWorldObjectClientManager_GetSingletonWorldObject_4
                     (this,
                      MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                     );
      if ((MVRoundCube *)voxelHit._60_4_ != (MVRoundCube *)0x0) {
        voxelHit.interactionFlags._0_4_ = (undefined *)0x0;
        voxelHit.transform = (Transform *)&UNK_?;
        pCVar4 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                           ((DayNightCycle *)voxelHit._60_4_,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          voxelHit.interactionFlags._4_4_ = (Vector3 *)&UNK_?;
          func_?();
        }
        voxelHit.interactionFlags._4_4_ = (Vector3 *)0x3dcccccd;
        voxelHit.transform = (Transform *)voxelHit.normal.y;
        voxelHit._60_4_ = voxelHit.normal.z;
        voxelHit.interactionFlags._0_2_ = voxelHit.cubePos.x;
        voxelHit.interactionFlags._2_2_ = voxelHit.cubePos.y;
        voxelHit.collider = (Collider *)auStack_1;
        voxelHit.distance = (float)&UNK_?;
        a.y = voxelHit.normal.z;
        a.x = voxelHit.normal.y;
        a.z = (float)voxelHit.cubePos._0_4_;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)voxelHit.collider,a,0.1,(MethodInfo *)0x0);
        voxelHit.interactionFlags._4_4_ = (Vector3 *)auStack_1;
        fStack6 = voxelHit.point.z;
        fStack7 = voxelHit.normal.x;
        voxelHit.interactionFlags._0_4_ = &UNK_?;
        a_00.y = voxelHit.point.z;
        a_00.x = voxelHit.point.y;
        a_00.z = voxelHit.normal.x;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           (voxelHit.interactionFlags._4_4_,a_00,*pVVar5,(MethodInfo *)0x0);
        uVar8._0_4_ = pVVar5->x;
        uVar8._4_4_ = pVVar5->y;
        fVar9 = pVVar5->z;
        voxelHit.interactionFlags._4_4_ = (Vector3 *)(undefined4)uVar8;
        if ((((uint)(TypeInfo__SharedCubeFunctions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__SharedCubeFunctions->_1).cctor_started == 0)) {
          pSStack10 = TypeInfo__SharedCubeFunctions;
          func_?();
          uVar8 = CONCAT44(uVar8._4_4_,voxelHit.interactionFlags._4_4_);
        }
        pSStack10 = (SharedCubeFunctions__Class *)0x0;
        point.y = (float)(int)uVar8;
        point.z = (float)(int)((ulonglong)uVar8 >> 0x20);
        point.x = (float)pCVar4;
        IVar11 = SharedCubeFunctions::SharedCubeFunctions_WorldToLocal
                          ((GameObject *)((int)&voxelHit.interactionFlags + 4),point,SUB41(fVar9,0),
                           (MethodInfo *)0x0);
        iVar12 = *(int16_t *)(IVar11._0_4_ + 1);
        *(undefined4 *)voxelHit.point.x = *IVar11._0_4_;
        *(int16_t *)((int)voxelHit.point.x + 4) = iVar12;
        IVar13.z = iVar12;
        IVar13._0_4_ = voxelHit.point.x;
        return IVar13;
      }
    }
    voxelHit.interactionFlags._0_4_ = (undefined *)0x0;
    voxelHit._60_4_ = &UNK_?;
    func_?();
    pcVar14 = (code *)swi(3);
    IVar11 = (IntVector)(*pcVar14)();
    return IVar11;
  }
  *(undefined4 *)voxelHit.point.x = auStack_1._4_4_;
  *(int16_t *)((int)voxelHit.point.x + 4) = iStack_2;
  IVar11.z = iStack_2;
  IVar11._0_4_ = voxelHit.point.x;
  return IVar11;
}


/* Boolean GetCubePosFromFineGrainedTerrain(VoxelHit, Single, IntVector ByRef) */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_GetCubePosFromFineGrainedTerrain
               (VoxelHit voxelHit,float maxDistanceToEdge,IntVector *pos,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff8c;
  puVar5 = &stack0xffffff8c;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pMVar6 = (MethodInfo *)0x0;
  fStack_7 = 0.0;
  bStack_8 = 0;
  pMStack_9 = (MethodInfo *)0x0;
  func_?();
  pMStack_10 = (MethodInfo *)0xffffffff;
  puStack_11 = &stack0xffffff8c;
  puStack_4 = &stack0xffffff8c;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     (puStack_11 = &stack0xffffff8c, puStack_4 = &stack0xffffff8c,
     (TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    puStack_11 = &stack0xffffff8c;
    puStack_4 = &stack0xffffff8c;
    func_?(TypeInfo__MVGameControllerBase);
  }
  this = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this != (MVWorldObjectClientManager *)0x0) {
    uVar12 = SUB42(this,0);
    uVar13 = (undefined2)((uint)this >> 0x10);
    this_00 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (this,voxelHit.woId,(MethodInfo *)0x0);
    if (this_00 != (DayNightCycle *)0x0) {
      bVar14 = (TypeInfo__MVCubeModelFineGrainedTerrain->_1).naturalAligment;
      if (((this_00->klass->_1).naturalAligment < bVar14) ||
         ((MVCubeModelFineGrainedTerrain__Class *)(this_00->klass->_1).typeHierarchy[bVar14 - 1] !=
          TypeInfo__MVCubeModelFineGrainedTerrain)) {
        bVar15 = false;
      }
      else {
        bVar15 = true;
      }
      pDVar16 = (DayNightCycle *)0x0;
      if (bVar15) {
        pDVar16 = this_00;
      }
      if (pDVar16 != (DayNightCycle *)0x0) {
        pDStack_17 = this_00;
        pCVar18 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Cube->_1).cctor_started == 0)) {
          pCStack_19 = TypeInfo__Cube;
          func_?();
        }
        iVector = voxelHit.cubePos;
        pMVar6 = (MethodInfo *)
                  Cube::Cube_GetEdge_1
                            ((GameObject *)pCVar18,voxelHit.cube,voxelHit.face,voxelHit.point,
                             iVector,(MethodInfo *)0x0);
        pCVar18 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0);
        pVVar20 = Cube::Cube_GetEdgeVerticesWorld
                            ((GameObject *)pCVar18,voxelHit.cube,voxelHit.face,(Edge__Enum)pMVar6,
                             iVector,(MethodInfo *)0x0);
        pVStack_21 = pVVar20;
        if (pVVar20 != (Vector3__Array *)0x0) {
          if (pVVar20->max_length == 0) {
            uVar22 = func_?(0);
            func_?(uVar22);
          }
          else if (1 < pVVar20->max_length) {
            bVar23 = MathFunctions::MathFunctions_DistancePointLine
                              (voxelHit.point,pVVar20->vector[0],pVVar20->vector[1],&fStack_7,
                               (MethodInfo *)0x0);
            pIVar24 = TypeRef__MV__WorldObject__Face;
            if ((bVar23 != 0) && (fStack_7 < maxDistanceToEdge)) {
              if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Type->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__Type);
              }
              pMVar6 = (MethodInfo *)
                        mscorlib.dll::System::Type::Type_GetTypeFromHandle
                                  ((RuntimeTypeHandle)pIVar24,(MethodInfo *)0x0);
              if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
                 ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
                func_?(TypeInfo__System__Enum);
              }
              pAVar25 = mscorlib.dll::System::Enum::Enum_GetValues
                                  ((Type *)pMVar6,(MethodInfo *)0x0);
              if (pAVar25 != (Array *)0x0) {
                pIStack_26 = mscorlib.dll::System::Array::Array_GetEnumerator
                                       (pAVar25,(MethodInfo *)CONCAT22(uVar13,uVar12));
                uStack_1 = 0;
                pMVar27 = (MethodInfo *)0xffffffff;
code_?:
                if (pIStack_26 != (IEnumerator *)0x0) {
                  cVar28 = func_?(1,TypeInfo__System__Collections__IEnumerator);
                  if (cVar28 != '\0') goto code_?;
                  pMVar27 = (MethodInfo *)((int)&pMVar27->methodPointer + Edge__Enum_Front);
                  *(undefined4 *)(puStack_11 + (int)pMVar27 * 4) = 0x233;
                  goto code_?;
                }
              }
              goto code_?;
            }
            goto code_?;
          }
          uVar22 = func_?(0);
          func_?(uVar22);
        }
        goto code_?;
      }
    }
code_?:
    *unaff_FS_OFFSET = uStack_3;
    return 0;
  }
code_?:
  pMVar27 = (MethodInfo *)func_?();
code_?:
  func_?((short)pMVar27,0);
code_?:
  func_?((short)pMVar6,0);
  pcVar29 = (code *)swi(3);
  bVar23 = (*pcVar29)();
  return bVar23;
code_?:
  uVar22 = func_?(0,TypeInfo__System__Collections__IEnumerator);
  uVar12 = 0x5610;
  uVar13 = 0x1049;
  pFVar30 = (Face__Enum *)func_?(uVar22);
  pIVar24 = TypeRef__Edge;
  pMStack_31 = (MethodInfo *)*pFVar30;
  if (pMStack_31 != (MethodInfo *)voxelHit.face) {
    if ((((uint)(TypeInfo__System__Type->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Type->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Type);
    }
    pMVar6 = (MethodInfo *)
              mscorlib.dll::System::Type::Type_GetTypeFromHandle
                        ((RuntimeTypeHandle)pIVar24,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__Enum->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__Enum->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__Enum);
    }
    pAVar25 = mscorlib.dll::System::Enum::Enum_GetValues((Type *)pMVar6,(MethodInfo *)0x0);
    if (pAVar25 == (Array *)0x0) goto code_?;
    pIStack_32 = mscorlib.dll::System::Array::Array_GetEnumerator
                           (pAVar25,(MethodInfo *)CONCAT22(uVar13,uVar12));
    uStack_1 = CONCAT31(uStack_1._1_3_,1);
    pIVar33 = pIStack_32;
    pIStack_34 = pIStack_32;
    do {
      do {
        if (pIVar33 == (IEnumerator *)0x0) goto code_?;
        cVar28 = func_?(1,TypeInfo__System__Collections__IEnumerator);
        if (cVar28 == '\0') {
          pMVar6 = (MethodInfo *)((int)&pMStack_10->methodPointer + Edge__Enum_Front);
          uStack_1 = uStack_1 & 0xffffff00;
          *(undefined4 *)(puStack_11 + (int)pMVar6 * 4) = 0x20b;
          pMStack_10 = pMVar6;
          goto code_?;
        }
        uVar22 = func_?(0,TypeInfo__System__Collections__IEnumerator);
        uVar12 = 0x1049;
        pEVar35 = (Edge__Enum *)func_?(uVar22);
        pMVar6 = (MethodInfo *)*pEVar35;
      } while (pMVar6 == (MethodInfo *)0x0);
      if (pDStack_17 == (DayNightCycle *)0x0) goto code_?;
      pCVar18 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(pDStack_17,in_stack_36);
      if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__Cube->_1).cctor_started == 0)) {
        func_?(TypeInfo__Cube);
      }
      in_stack_36 = (MethodInfo *)voxelHit.cubePos._0_4_;
      pVStack_37 = Cube::Cube_GetEdgeVerticesWorld
                             ((GameObject *)pCVar18,voxelHit.cube,(Face__Enum)pMStack_31,
                              (Edge__Enum)pMVar6,iVector,(MethodInfo *)0x0);
      pMVar6 = (MethodInfo *)0x0;
      iVar38 = 0;
      while( true ) {
        if (pVStack_37 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVStack_37->max_length <= iVar38) break;
        puVar39 = (undefined8 *)func_?();
        uVar40 = *puVar39;
        uStack_41 = *(undefined4 *)(puVar39 + 1);
        if (pVVar20 == (Vector3__Array *)0x0) goto code_?;
        puVar39 = (undefined8 *)func_?();
        uStack_42 = *puVar39;
        fVar43 = *(float *)(puVar39 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        uVar12 = (undefined2)((uint)uStack_41 >> 0x10);
        a_00.z = fVar43;
        a_00.x = (float)(undefined4)uStack_42;
        a_00.y = (float)uStack_42._4_4_;
        b_00.z._0_2_ = (short)uStack_41;
        b_00.x = (float)(int)uVar40;
        b_00.y = (float)(int)((ulonglong)uVar40 >> 0x20);
        b_00.z._2_2_ = uVar12;
        fVar43 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                           (a_00,b_00,(MethodInfo *)0x0);
        uStack_42 = CONCAT44(fVar43,(undefined4)uStack_42);
        if (fVar43 < _UNK_?) {
          pMVar6 = (MethodInfo *)((int)&pMVar6->methodPointer + Edge__Enum_Front);
        }
        uStack_44 = 1;
        puVar39 = (undefined8 *)func_?();
        uStack_42 = *puVar39;
        fVar43 = *(float *)(puVar39 + 1);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        in_stack_36 = (MethodInfo *)((ulonglong)uVar40 >> 0x20);
        a.z = fVar43;
        a.x = (float)(undefined4)uStack_42;
        a.y = (float)uStack_42._4_4_;
        b.z._0_2_ = (short)uStack_41;
        b.x = (float)(int)uVar40;
        b.y = (float)(int)((ulonglong)uVar40 >> 0x20);
        b.z._2_2_ = (short)((uint)uStack_41 >> 0x10);
        fVar43 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Distance
                           (a,b,(MethodInfo *)0x0);
        uStack_42 = CONCAT44(fVar43,(undefined4)uStack_42);
        if (fVar43 < _UNK_?) {
          pMVar6 = (MethodInfo *)((int)&pMVar6->methodPointer + Edge__Enum_Front);
        }
        iVar38 = iVar38 + 1;
        pVVar20 = pVStack_21;
      }
      pIVar33 = pIStack_34;
    } while (pMVar6 != (MethodInfo *)0x2);
    if ((((uint)(TypeInfo__Cube->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Cube->_1).cctor_started == 0)) {
      func_?();
    }
    IVar45.z = voxelHit.cubePos.x;
    IVar45._0_4_ = &pCStack_19;
    IVar45 = Cube::Cube_GetCubePosAboveFace(IVar45,CONCAT22(uVar12,voxelHit.cubePos.z),pMStack_31);
    pIVar46 = IVar45._0_4_;
    pMVar6 = *(MethodInfo **)pIVar46;
    iVar47 = pIVar46->z;
    IVar45 = *pIVar46;
    *(MethodInfo **)pos = pMVar6;
    pos->z = iVar47;
    iVar38 = func_?();
    if (iVar38 == 0) goto code_?;
    this_01 = (MVCubeModelBase *)func_?(pDStack_17);
    a_01 = MVCubeModelBase::MVCubeModelBase_GetCube(this_01,IVar45,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__WorldObject__CubeBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_started == 0)) {
      func_?((short)TypeInfo__MV__WorldObject__CubeBase);
    }
    bVar23 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_op_Equality
                      ((CubeBase *)a_01,(CubeBase *)0x0,(MethodInfo *)0x0);
    pMVar27 = (MethodInfo *)((int)&pMStack_10->methodPointer + Edge__Enum_Front);
    uStack_1 = uStack_1 & 0xffffff00;
    *(undefined4 *)(puStack_11 + (int)pMVar27 * 4) = 0x235;
    in_stack_36 = pMVar6;
    pMStack_10 = pMVar27;
    if (bVar23 == 0) {
      bStack_8 = 0;
    }
    else {
      bStack_8 = 1;
    }
code_?:
    pMVar6 = pMStack_10;
    iVar38 = func_?(pIStack_34);
    if (iVar38 != 0) {
      func_?(0,TypeInfo__System__IDisposable);
    }
    pMVar27 = pMStack_9;
    if (pMStack_9 != (MethodInfo *)0x0) goto code_?;
    pMVar27 = pMVar6;
    if (pMVar6 != (MethodInfo *)0xffffffff) {
      if (*(int *)(puStack_11 + (int)pMVar6 * 4) == 0x235) {
code_?:
        puVar5 = puStack_11;
        pMVar6 = pMStack_9;
        uStack_1 = 0xffffffff;
        iVar38 = func_?(pIStack_26);
        if (iVar38 != 0) {
          func_?(0,TypeInfo__System__IDisposable);
        }
        if (pMVar6 != (MethodInfo *)0x0) goto code_?;
        if ((pMVar27 != (MethodInfo *)0xffffffff) && (*(int *)(puVar5 + (int)pMVar27 * 4) == 0x235))
        {
          *unaff_FS_OFFSET = uStack_3;
          return bStack_8;
        }
        goto code_?;
      }
      if ((*(int *)(puStack_11 + (int)pMVar6 * 4) == 0x20b) &&
         (pMVar27 = (MethodInfo *)&pMVar6[-1].field_0x2f,
         pMStack_10 = (MethodInfo *)&pMVar6[-1].field_0x2f, (int)pMVar6 < 0)) {
        pMVar27 = pMVar6;
        pMStack_10 = pMVar6;
      }
    }
  }
  goto code_?;
}


/* Void HandleCursors() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_HandleCursors
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?((short)_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff9c,0,0x48);
  bVar1 = PickupItemCubeGun_DoLineOfFireCheck(this,(VoxelHit *)&stack0xffffff9c,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pGVar2 = (this->fields).primaryCursor;
    if (pGVar2 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeOut,(MethodInfo *)0x0)
        ;
        return;
      }
    }
    goto code_?;
  }
  iVar3 = (int16_t)uStack_4;
  iVar5 = SUB42(uStack_4,2);
  if ((this->fields).fireSecondary == 0) {
    pGVar2 = (this->fields).secondaryCursor;
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    voxelHit.point.y = in_stack_6;
    voxelHit.point.x = (float)&stack0xffffffec;
    voxelHit.point.z = in_stack_7;
    voxelHit.normal.x = in_stack_8;
    voxelHit.normal.y = in_stack_9;
    voxelHit.normal.z._0_2_ = SUB42(fStack_10,0);
    voxelHit.normal.z._2_2_ = (short)((uint)fStack_10 >> 0x10);
    voxelHit.cubePos._0_4_ = fStack_11;
    voxelHit.cubePos.z = iVar3;
    voxelHit._30_2_ = iVar5;
    voxelHit.face = _iStack_48;
    voxelHit._36_4_ = iStack_12;
    voxelHit.woId._0_2_ = (short)uStack_13;
    voxelHit.woId._2_2_ = SUB42(uStack_13,2);
    voxelHit.cube = (Cube *)iStack_14;
    voxelHit.distance._0_2_ = (short)pCStack_15;
    voxelHit.distance._2_2_ = (short)((uint)pCStack_15 >> 0x10);
    voxelHit.collider._0_2_ = SUB42(fStack_16,0);
    voxelHit.collider._2_2_ = (short)((uint)fStack_16 >> 0x10);
    voxelHit.transform = (Transform *)pCStack_17;
    voxelHit._60_4_ = pTStack_18;
    voxelHit.interactionFlags._0_4_ = uStack_19;
    voxelHit.interactionFlags._4_4_ = uStack_20;
    IVar21 = PickupItemCubeGun_GetCubePos(voxelHit,pMStack_22);
    bVar1 = PickupItemCubeGun_CanInsertCubeAtCubePos(this,*IVar21._0_4_,(MethodInfo *)0x0);
    pGVar2 = (this->fields).primaryCursor;
    if (bVar1 == 0) {
      if (pGVar2 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeOverride
                  (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    this_02 = (GUICellCursor *)&stack0xffffffec;
    IVar21 = GUICellCursor::GUICellCursor_get_LocalPos(this_02,(MethodInfo *)pGVar2);
    iVar3 = (int16_t)((uint)this_02 >> 0x10);
    IVar21 = *IVar21._0_4_;
    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = iVar3;
    a._0_4_ = &UNK_?;
    bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                      (a,IVar21,(MethodInfo *)0x0);
    pTVar23 = (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)(this->fields).primaryCursor;
    if (bVar1 == 0) {
      if (pTVar23 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0) goto code_?;
      pOVar24 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
               TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                         (pTVar23,(MethodInfo *)0x0);
      if (pOVar24 == (Object *)0x1) {
        return;
      }
      pGVar2 = (this->fields).primaryCursor;
    }
    else {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar25 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (((pMVar25 == (MVWorldObjectClientManager *)0x0) ||
          (this_00 = MVWorldObjectClientManager::
                     MVWorldObjectClientManager_GetSingletonWorldObject_4
                               (pMVar25,
                                MVCubeModelFineGrainedTerrain_MethodInfo__MVWorldObjectClientManager__GetSingletonWorldObject<MVCubeModelFineGrainedTerrain>__
                               ), this_00 == (MVRoundCube *)0x0)) ||
         (pCVar26 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)this_00,(MethodInfo *)0x0),
         pTVar23 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0)) goto code_?;
      position.z = iVar3;
      position._0_4_ = &UNK_?;
      GUICellCursor::GUICellCursor_SetCursorCube
                ((GUICellCursor *)pTVar23,position,(GameObject *)pCVar26,(MethodInfo *)0x0);
      pGVar2 = (this->fields).primaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      pGVar2 = (this->fields).primaryCursor;
    }
  }
  else {
    pGVar2 = (this->fields).primaryCursor;
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar25 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar25 == (MVWorldObjectClientManager *)0x0) goto code_?;
    this_01 = (DayNightCycle *)
              MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                        (pMVar25,iStack_14,(MethodInfo *)0x0);
    pGVar2 = (this->fields).secondaryCursor;
    iVar27 = func_?();
    if (iVar27 == 0) {
      if (pGVar2 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeOut,(MethodInfo *)0x0)
        ;
        return;
      }
      goto code_?;
    }
    if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
    iVar28 = iVar3;
    IVar21 = GUICellCursor::GUICellCursor_get_LocalPos
                       ((GUICellCursor *)&stack0xffffffe4,(MethodInfo *)pGVar2);
    uVar29 = *IVar21._0_4_;
    iVar30 = *(int16_t *)(IVar21._0_4_ + 1);
    if ((((uint)(TypeInfo__MV__WorldObject__IntVector->vtable).Equals.methodPtr & 0x2000000) != 0)
       && ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__IntVector);
    }
    IVar21.y = iVar5;
    IVar21.x = iVar28;
    IVar21.z = iStack_31;
    b.z = iVar30;
    b._0_4_ = uVar29;
    bVar1 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Inequality
                      (IVar21,b,(MethodInfo *)0x0);
    pTVar23 = (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)(this->fields).secondaryCursor;
    if (bVar1 == 0) {
      if (pTVar23 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0) goto code_?;
      pOVar24 = TierOnDeathProgress+<DoTierProgress>c__Iterator0::
               TierOnDeathProgress_DoTierProgress_c_Iterator0_System_Collections_IEnumerator_get_Current
                         (pTVar23,(MethodInfo *)0x0);
      if (pOVar24 == (Object *)0x1) {
        return;
      }
    }
    else {
      if ((this_01 == (DayNightCycle *)0x0) ||
         (pCVar26 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_01,(MethodInfo *)0x0),
         pTVar23 == (TierOnDeathProgress_DoTierProgress_c_Iterator0 *)0x0)) goto code_?;
      position_00.y = iVar5;
      position_00.x = iVar3;
      position_00.z = iStack_31;
      GUICellCursor::GUICellCursor_SetCursorCube
                ((GUICellCursor *)pTVar23,position_00,(GameObject *)pCVar26,(MethodInfo *)0x0);
      pGVar2 = (this->fields).secondaryCursor;
      if (pGVar2 == (GUICellCursor *)0x0) goto code_?;
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    }
    pGVar2 = (this->fields).secondaryCursor;
  }
  if (pGVar2 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeState(pGVar2,FadeState__Enum_FadeIn,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar32 = (code *)swi(3);
  (*pcVar32)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnEnterVehicleWithWeapon
               (PickupItemCubeGun *this,MethodInfo *method)

{
  (this->fields).hasLeftVehicle = 0;
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnEquip
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  PickupItemWithDelay::PickupItemWithDelay_OnEquip((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  this_00 = (pPVar1->fields)._._.owner;
  if (this_00 == (MVPickupOwner *)0x0) {
code_?:
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_00,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    this = unaff_EDI;
    data = (Dictionary_2_System_Object_System_Object_ *)func_?();
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)data,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (PickupItemCubeGun *)CONCAT13(1,this._0_3_);
    key = (String *)func_?(TypeInfo__System__Byte,(int)&this + 3);
    value = (CrossPlatformInputManager_VirtualButton *)
            TM::TM__(StringLiteral_Hold_shoot_button_to_remove_cube,(MethodInfo *)0x0);
    if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)data,key,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if ((((uint)(TypeInfo__NotificationController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__NotificationController->_1).cctor_started == 0)) {
      func_?();
    }
    this = (PickupItemCubeGun *)0xf;
    method = (MethodInfo *)data;
    NotificationController::NotificationController_PushNotification_2
              (NotificationType__Enum_PlayerTip,data,NotificationLifetime__Enum_High,
               (MethodInfo *)0x0);
  }
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnFire
               (PickupItemCubeGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&fStack_1,0,0x48);
  if ((((this->fields).hasLeftVehicle == 0) && ((this->fields).fireSecondary == 0)) &&
     (cVar2 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                        (this,(this->klass->vtable).get_Quantity.methodPtr), cVar2 == '\0')) {
    bVar3 = PickupItemCubeGun_DoLineOfFireCheck(this,(VoxelHit *)&fStack_1,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      voxelHit.point.y = fStack_1;
      voxelHit.point.x = (float)&stack0xfffffff4;
      voxelHit.point.z = fStack_4;
      voxelHit.normal.x = fStack_5;
      voxelHit.normal.y = fStack_6;
      voxelHit.normal.z = fStack_7;
      voxelHit.cubePos._0_4_ = fStack_8;
      voxelHit.cubePos.z = IStack_9.x;
      voxelHit._30_2_ = IStack_9.y;
      voxelHit.face = stack0xffffff94;
      voxelHit._36_4_ = iStack_10;
      voxelHit.woId = uStack_11;
      voxelHit.cube = (Cube *)iStack_12;
      voxelHit.distance = (float)pCStack_13;
      voxelHit.collider = (Collider *)in_stack_14;
      voxelHit.transform = (Transform *)in_stack_15;
      voxelHit._60_4_ = in_stack_16;
      voxelHit.interactionFlags._0_4_ = in_stack_17;
      voxelHit.interactionFlags._4_4_ = in_stack_18;
      IVar19 = PickupItemCubeGun_GetCubePos
                         (voxelHit,(MethodInfo *)
                                   (CONCAT26(in_stack_20,
                                             CONCAT24(in_stack_21,in_stack_18)) >> 0x20)
                         );
      bVar3 = PickupItemCubeGun_CanInsertCubeAtCubePos(this,*IVar19._0_4_,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        return;
      }
    }
    this_00 = (this->fields)._._.muzzlePoint;
    owner = (this->fields)._._.owner;
    if (this_00 != (Transform *)0x0) {
      pVVar22 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&puStack_23,this_00,(MethodInfo *)0x0);
      uVar24 = pVVar22->x;
      fVar25 = pVVar22->y;
      fVar26 = pVVar22->z;
      this_01 = CubeGunBulletObject::CubeGunBulletObject_Create
                          (owner,*pVVar22,(this->fields).material,(MethodInfo *)0x0);
      pMVar27 = (this->fields)._._.owner;
      if (pMVar27 != (MVPickupOwner *)0x0) {
        InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                  ((Vector3 *)&puStack_23,(InventoryItem_ItemDescription *)pMVar27,(MethodInfo *)0x0)
        ;
        pMVar27 = (this->fields)._._.owner;
        if (pMVar27 != (MVPickupOwner *)0x0) {
          MVPickupOwner::MVPickupOwner_get_LookDirection
                    ((Vector3 *)&puStack_23,pMVar27,(MethodInfo *)0x0);
          func_?();
          if (this_01 != (CubeGunBulletObject *)0x0) {
            this_02 = (Bullet *)
                      mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json
                      ::Serialization::JsonProperty]::
                      Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01
                                 ,(MethodInfo *)0x0);
            pMVar27 = (this->fields)._._.owner;
            if (pMVar27 != (MVPickupOwner *)0x0) {
              projectileSpeed = (this->fields).speed;
              iVar28 = 0;
              speed = MVPickupOwner::MVPickupOwner_GetAbsolutProjectileSpeed
                                (pMVar27,projectileSpeed,(MethodInfo *)0x0);
              range = (this->fields).range;
              pMVar27 = (this->fields)._._.owner;
              if ((pMVar27 != (MVPickupOwner *)0x0) &&
                 (ignoreWoIDs = (HashSet_1_System_Int32_ *)
                                (*(code *)(pMVar27->klass->vtable).get_IgnoreWOIDs.method)(),
                 this_02 != (Bullet *)0x0)) {
                lineOfFire.m_Origin.y = (float)iVar28;
                lineOfFire.m_Origin.x = projectileSpeed;
                lineOfFire.m_Origin.z._0_2_ = (short)owner;
                lineOfFire.m_Origin.z._2_2_ = (short)((uint)owner >> 0x10);
                lineOfFire.m_Direction.x = (float)uVar24;
                lineOfFire.m_Direction.y = fVar25;
                lineOfFire.m_Direction.z = fVar26;
                Bullet::Bullet_Fire(this_02,speed,range,lineOfFire,ignoreWoIDs,(MethodInfo *)0x0);
                iVar28 = (this->fields).currentAmmo.currentCryptoKey;
                iVar29 = (this->fields).currentAmmo.hiddenValue;
                iVar30 = (this->fields).currentAmmo.fakeValue;
                if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).
                            Equals.methodPtr & 0x2000000) != 0) &&
                   ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started
                    == 0)) {
                  func_?();
                }
                value.hiddenValue = iVar29;
                value.currentCryptoKey = iVar28;
                value.fakeValue = iVar30;
                value.inited = (this->fields).currentAmmo.inited;
                value._13_3_ = *(undefined3 *)&(this->fields).currentAmmo.field_0xd;
                iVar28 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                         ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                pOVar31 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                          ObscuredInt::ObscuredInt_op_Implicit
                                    ((ObscuredInt *)&stack0xffffffd8,iVar28 + -1,(MethodInfo *)0x0);
                iVar28 = pOVar31->hiddenValue;
                iVar29 = pOVar31->fakeValue;
                bVar3 = pOVar31->inited;
                uVar32 = *(undefined3 *)&pOVar31->field_0xd;
                (this->fields).currentAmmo.currentCryptoKey = pOVar31->currentCryptoKey;
                (this->fields).currentAmmo.hiddenValue = iVar28;
                (this->fields).currentAmmo.fakeValue = iVar29;
                (this->fields).currentAmmo.inited = bVar3;
                *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar32;
                return;
              }
            }
          }
        }
      }
    }
    func_?();
    pcVar33 = (code *)swi(3);
    (*pcVar33)();
    return;
  }
  return;
}


/* Void OnFireSecondary(Boolean) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnFireSecondary
               (PickupItemCubeGun *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  func_?(&stack0xffffff64,0,0x48);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  pTVar5 = (this->fields)._._.muzzlePoint;
  audioSource = (this->fields).audioSource;
  if ((pTVar5 != (Transform *)0x0) &&
     (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_7,pTVar5,(MethodInfo *)0x0), this_01 != (AudioManager *)0x0)) {
    AudioManager::AudioManager_Play_2
              (this_01,StringLiteral_CubeGun,audioSource,*pVVar6,(MethodInfo *)0x0);
    pMVar8 = (this->fields)._._.owner;
    if (pMVar8 != (MVPickupOwner *)0x0) {
      pVVar6 = InventoryItem+ItemDescription::
               InventoryItem_ItemDescription_get_CameraPreviewerOffset
                         ((Vector3 *)(auStack_9 + 4),(InventoryItem_ItemDescription *)pMVar8,
                          (MethodInfo *)0x0);
      VStack_7.y = pVVar6->x;
      VStack_7.z = pVVar6->y;
      bVar10 = SUB41(pVVar6->z,0);
      pMVar8 = (this->fields)._._.owner;
      if (pMVar8 != (MVPickupOwner *)0x0) {
        pVVar6 = MVPickupOwner::MVPickupOwner_get_LookDirection
                           ((Vector3 *)(auStack_9 + 4),pMVar8,(MethodInfo *)0x0);
        pTVar5 = (Transform *)pVVar6->x;
        this_00 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                   *)pVVar6->y;
        func_?();
        uVar11 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Player,(MethodInfo *)0x0);
        uVar12 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                          (StringLiteral_Logic,(MethodInfo *)0x0);
        distance = (undefined *)(this->fields).range;
        uVar11 = ~(1 << (uVar11 & 0x1f)) & 0xfffffffbU & ~(1 << (uVar12 & 0x1f));
        uVar13 = (undefined2)uVar11;
        uVar14 = (undefined2)(uVar11 >> 0x10);
        pMVar15 = (MVWorldObject *)0x0;
        method_00 = (MethodInfo *)0x0;
        ray.m_Origin.y = (float)uVar2;
        ray.m_Origin.x = (float)uVar1;
        ray.m_Origin.z = (float)uVar3;
        ray.m_Direction.x = (float)uVar4;
        ray.m_Direction.y = 0.0;
        ray.m_Direction.z = 0.0;
        bVar16 = CollisionDetection::CollisionDetection_MVHit_1
                          (ray,(VoxelHit *)&stack0xffffff64,(float)distance,
                           (HashSet_1_System_Int32_ *)0x0,uVar11,(MethodInfo *)0x0);
        if (bVar16 == 0) {
          puVar17 = (undefined4 *)func_?();
          distance = (undefined *)*puVar17;
          pMVar15 = (MVWorldObject *)puVar17[1];
          fVar18 = (float)puVar17[2];
code_?:
          if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
            func_?();
          }
          pPVar19 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
          if (((pPVar19 != (PrefabPool *)0x0) &&
              (this_07 = (EnumPoolManager *)
                         mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::
                         Json::Serialization::JsonProperty]::
                         Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                   ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                    pPVar19,(MethodInfo *)0x0), this_07 != (EnumPoolManager *)0x0))
             && (this_08 = (RailRay *)
                           EnumPoolManager::EnumPoolManager_Instantiate_18
                                     (this_07,PoolEnums__Enum_CubeGunRay,
                                      RailRay_MethodInfo__EnumPoolManager__Instantiate<RailRay>_PoolEnums_
                                     ), this_08 != (RailRay *)0x0)) {
            (this_08->fields).target.x = (float)distance;
            (this_08->fields).target.y = (float)pMVar15;
            (this_08->fields).target.z = fVar18;
            this_09 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_08,(MethodInfo *)0x0);
            pTVar5 = (this->fields)._._.muzzlePoint;
            if ((pTVar5 != (Transform *)0x0) &&
               (pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                   ((Vector3 *)(auStack_9 + 4),pTVar5,(MethodInfo *)0x0),
               this_09 != (Transform *)0x0)) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                        (this_09,*pVVar6,(MethodInfo *)0x0);
              RailRay::RailRay_Reset(this_08,(MethodInfo *)0x0);
              return;
            }
          }
        }
        else {
          fVar18 = (float)CONCAT22(uVar14,uVar13);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?();
          }
          this_02 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
          if (this_02 != (MVWorldObjectClientManager *)0x0) {
            uVar1 = 0;
            puVar20 = &UNK_?;
            pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                                (this_02,(int32_t)pTVar5,(MethodInfo *)0x0);
            if (bVar10 == 0) goto code_?;
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              in_stack_22 = &UNK_?;
              func_?();
            }
            pMVar23 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
            if (((pMVar23 != (MVNetworkGame *)0x0) &&
                (this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                     ((DayNightCycle *)pMVar23,(MethodInfo *)0x0),
                this_00 !=
                (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)0x0)) &&
               (pOVar24 = System.dll::System::Collections::Generic::
                          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                          ::Single,System::Object]::
                          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                    (this_00,(MethodInfo *)0x0), pOVar24 != (Object *)0x0)) {
              if (pOVar24[1].monitor == (MonitorData *)0x0) goto code_?;
              if (this_03 != (CelestialParam *)0x0) {
                VStack_7.z._0_1_ = *(uint8_t *)&pOVar24[2].klass;
                uVar13 = SUB42(this_03,0);
                uVar14 = (undefined2)((uint)this_03 >> 0x10);
                puVar25 = &UNK_?;
                fVar26 = VStack_7.z;
                this_04 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                    ((MVMaterialRepository *)this_03,*(uint8_t *)&pOVar24[2].klass,
                                     (MethodInfo *)0x0);
                if (this_04 != (MVMaterial *)0x0) {
                  iVar27 = 0;
                  puVar28 = &UNK_?;
                  pPVar29 = MVMaterial::MVMaterial_get_PhysicalProperties
                                      ((PhysicalProperties *)&stack0xffffffd4,this_04,
                                       (MethodInfo *)0x0);
                  fStack_30 = pPVar29->friction;
                  auStack_9._0_4_ = pPVar29->bouncyness;
                  auStack_9._4_4_ = pPVar29->softness;
                  fStack_31 = pPVar29->staticFriction;
                  fStack_32 = pPVar29->toughness;
                  if (fStack_32 == _UNK_?) {
                    iVar33 = func_?();
                    if (iVar33 != 0) {
                      auStack_9._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
                      auStack_9._4_4_ = (this->fields).currentAmmo.hiddenValue;
                      fStack_31 = (float)(this->fields).currentAmmo.fakeValue;
                      fStack_32 = *(float *)&(this->fields).currentAmmo.inited;
                      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->
                                  vtable).Equals.methodPtr & 0x2000000) != 0) &&
                         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                          cctor_started == 0)) {
                        func_?();
                      }
                      value_00.hiddenValue = auStack_9._4_4_;
                      value_00.currentCryptoKey = auStack_9._0_4_;
                      value_00.fakeValue = (int32_t)fStack_31;
                      value_00._12_4_ = fStack_32;
                      iVar34 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                               ObscuredInt::ObscuredInt_op_Implicit_1(value_00,(MethodInfo *)0x0);
                      pOVar35 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                                ObscuredInt::ObscuredInt_op_Implicit
                                          ((ObscuredInt *)auStack_9,iVar34 + 1,(MethodInfo *)0x0);
                      iVar34 = pOVar35->hiddenValue;
                      iVar36 = pOVar35->fakeValue;
                      bVar10 = pOVar35->inited;
                      uVar37 = *(undefined3 *)&pOVar35->field_0xd;
                      (this->fields).currentAmmo.currentCryptoKey = pOVar35->currentCryptoKey;
                      (this->fields).currentAmmo.hiddenValue = iVar34;
                      (this->fields).currentAmmo.fakeValue = iVar36;
                      (this->fields).currentAmmo.inited = bVar10;
                      *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar37;
                      if (isLocal != 0) {
                        distance = &UNK_?;
                        this_10 = (MVCubeModelBase *)func_?();
                        if (this_10 == (MVCubeModelBase *)0x0) goto code_?;
                        pos.z = iVar27;
                        pos._0_4_ = this_04;
                        MVCubeModelBase::MVCubeModelBase_RemoveCube(this_10,pos,(MethodInfo *)0x0);
                        MVCubeModelBase::MVCubeModelBase_HandleDelta(this_10,(MethodInfo *)0x0);
                        pMVar15 = pMVar21;
                      }
                      if ((((uint)(TypeInfo__PrefabPool->vtable).Equals.methodPtr & 0x2000000) != 0)
                         && ((TypeInfo__PrefabPool->_1).cctor_started == 0)) {
                        func_?();
                      }
                      pPVar19 = PrefabPool::PrefabPool_get_Instance((MethodInfo *)0x0);
                      if (pPVar19 == (PrefabPool *)0x0) goto code_?;
                      particlePrefab =
                           PrefabPool::PrefabPool_get_ParticleCubeDust(pPVar19,(MethodInfo *)0x0);
                      position.y = (float)pMVar15;
                      position.x = (float)distance;
                      position.z = fVar18;
                      SharedWorldObjectGameplayFunctions::
                      SharedWorldObjectGameplayFunctions_DustEfffect
                                (particlePrefab,position,1.0,(MethodInfo *)0x0);
                    }
                  }
                  else {
                    auStack_9._0_4_ = (this->fields).currentAmmo.currentCryptoKey;
                    auStack_9._4_4_ = (this->fields).currentAmmo.hiddenValue;
                    fStack_31 = (float)(this->fields).currentAmmo.fakeValue;
                    fStack_32 = *(float *)&(this->fields).currentAmmo.inited;
                    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable)
                                .Equals.methodPtr & 0x2000000) != 0) &&
                       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                        cctor_started == 0)) {
                      func_?();
                    }
                    puVar38 = &UNK_?;
                    value.hiddenValue._0_2_ = (int16_t)auStack_9._4_4_;
                    value.currentCryptoKey = auStack_9._0_4_;
                    value.hiddenValue._2_2_ = SUB42(auStack_9._4_4_,2);
                    value.fakeValue = (int32_t)fStack_31;
                    value._12_4_ = fStack_32;
                    fVar39 = (float)auStack_9._0_4_;
                    iVar34 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                             ObscuredInt::ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
                    iVar33 = iVar34 + 1;
                    iVar40 = 0;
                    pOVar35 = (ObscuredInt *)auStack_9;
                    iVar27 = 0x64dc;
                    uVar41 = 0x1049;
                    pOVar42 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                              ObscuredInt::ObscuredInt_op_Implicit(pOVar35,iVar33,(MethodInfo *)0x0)
                    ;
                    iVar34 = pOVar42->hiddenValue;
                    iVar36 = pOVar42->fakeValue;
                    bVar10 = pOVar42->inited;
                    uVar37 = *(undefined3 *)&pOVar42->field_0xd;
                    (this->fields).currentAmmo.currentCryptoKey = pOVar42->currentCryptoKey;
                    (this->fields).currentAmmo.hiddenValue = iVar34;
                    (this->fields).currentAmmo.fakeValue = iVar36;
                    (this->fields).currentAmmo.inited = bVar10;
                    *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar37;
                    if (isLocal != 0) {
                      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                        in_stack_22 = &UNK_?;
                        func_?();
                      }
                      pMVar23 = MVGameControllerBase::MVGameControllerBase_get_Game
                                          ((MethodInfo *)0x0);
                      if (((pMVar23 == (MVNetworkGame *)0x0) ||
                          (this_05 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                      *)CloudyTheme::CloudyTheme_get_Identifier
                                                  ((CloudyTheme *)pMVar23,(MethodInfo *)0x0),
                          this_05 ==
                          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                           *)0x0)) ||
                         (this_06 = (RuntimeEventManager *)
                                    System.dll::System::Collections::Generic::
                                    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                    ::Single,System::Object]::
                                    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                              (this_05,(MethodInfo *)0x0),
                         this_06 == (RuntimeEventManager *)0x0)) goto code_?;
                      voxelHit.point.y._2_2_ = uVar14;
                      voxelHit.point.y._0_2_ = uVar13;
                      voxelHit.cubePos.y = uVar41;
                      voxelHit.cubePos.x = iVar27;
                      voxelHit.point.x = (float)puVar25;
                      voxelHit.point.z = fVar26;
                      voxelHit.normal.x = (float)puVar28;
                      voxelHit.normal.y = (float)puVar38;
                      voxelHit.normal.z = fVar39;
                      voxelHit._28_4_ = pOVar35;
                      voxelHit.face = iVar33;
                      voxelHit._36_4_ = iVar40;
                      voxelHit.woId = (int32_t)this_00;
                      voxelHit.cube = (Cube *)puVar20;
                      voxelHit.distance = (float)this_02;
                      voxelHit.collider = (Collider *)pTVar5;
                      voxelHit.transform = (Transform *)uVar1;
                      voxelHit._60_4_ = in_stack_43;
                      voxelHit.interactionFlags._0_4_ = in_stack_22;
                      voxelHit.interactionFlags._4_4_ = 0x7f800000;
                      RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                                (this_06,voxelHit,0.0,method_00);
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
code_?:
  func_?();
code_?:
  func_?();
  func_?();
  pcVar44 = (code *)swi(3);
  (*pcVar44)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnHolstered
               (PickupItemCubeGun *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).TriggerEnd.method)
            (this,(this->klass->vtable).OnStateChanged.methodPtr);
  pGVar1 = (this->fields).primaryCursor;
  (this->fields).showingCursors = 0;
  if (pGVar1 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeState(pGVar1,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeState(pGVar1,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeOverride
                  (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
        pGVar1 = (this->fields).secondaryCursor;
        if (pGVar1 != (GUICellCursor *)0x0) {
          GUICellCursor::GUICellCursor_set_FadeOverride
                    (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnLeaveVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnLeaveVehicleWithWeapon
               (PickupItemCubeGun *this,MethodInfo *method)

{
  pGVar1 = (this->fields).primaryCursor;
  (this->fields).showingCursors = 0;
  (this->fields).hasLeftVehicle = 1;
  if (pGVar1 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeState(pGVar1,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeState(pGVar1,FadeState__Enum_FadeOut,(MethodInfo *)0x0);
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_set_FadeOverride
                  (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
        pGVar1 = (this->fields).secondaryCursor;
        if (pGVar1 != (GUICellCursor *)0x0) {
          GUICellCursor::GUICellCursor_set_FadeOverride
                    (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnStateChanged
               (PickupItemCubeGun *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    func_?();
  }
  else {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) {
code_?:
      (this->fields).material = 0x18;
      pCVar2 = (this->fields).cubeBullet;
joined_?:
      if (pCVar2 != (CubeBullet *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = *(MeshFilter **)(in_stack_3 + 0xc);
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?();
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((((this_02 != (MVNetworkGame *)0x0) &&
             (this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                                  ((DayNightCycle *)this_02,(MethodInfo *)0x0),
             this_03 != (CelestialParam *)0x0)) &&
            (this_04 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                                 ((MVMaterialRepository *)this_03,in_stack_4,
                                  (MethodInfo *)0x0), this_04 != (MVMaterial *)0x0)) &&
           (value = (Mesh *)System.dll::System::Collections::Generic::
                            SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                            ::Single,System::Object]::
                            SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                      ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                        *)this_04,(MethodInfo *)0x0), this_00 != (MeshFilter *)0x0))
        {
          UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    (this_00,value,(MethodInfo *)0x0);
          this_01 = *(Renderer **)(in_stack_3 + 0x10);
          this_05 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0)
          ;
          if ((this_05 != (MaterialLoader *)0x0) &&
             (pSVar5 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_05,
                                  (MethodInfo *)0x0), this_01 != (Renderer *)0x0)) {
            UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                      (this_01,(Material *)pSVar5,(MethodInfo *)0x0);
            return;
          }
        }
        func_?();
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      goto code_?;
    }
    pDVar7 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
              *)mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
                Dictionary_2_System_Type_Pool__get_Item
                          ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_itemData
                           ,
                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                          );
    pSVar5 = StringLiteral_material;
    if (pDVar7 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                   *)0x0) goto code_?;
    bVar8 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar7->klass->_1).naturalAligment < bVar8) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar7->klass->_1).typeHierarchy[bVar8 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar9 = false;
    }
    else {
      bVar9 = true;
    }
    this_06 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0;
    if (bVar9) {
      this_06 = pDVar7;
    }
    if (this_06 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) goto code_?;
    this = (PickupItemCubeGun *)StringLiteral_material;
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_06,StringLiteral_material,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar1 == 0) goto code_?;
    pPVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_06,(Type *)StringLiteral_material,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    if (pPVar10 == (Pool *)0x0) goto code_?;
    if ((pPVar10->klass->_0).element_class == (TypeInfo__System__Byte->_0).element_class) {
      puVar11 = (undefined1 *)func_?();
      *(undefined1 *)&pSVar5[0xf].klass = *puVar11;
      pCVar2 = (CubeBullet *)pSVar5[0xe].fields.length;
      goto joined_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnUnequip
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields).showingCursors == 0) {
    return;
  }
  pGVar1 = (this->fields).primaryCursor;
  if (pGVar1 != (GUICellCursor *)0x0) {
    GUICellCursor::GUICellCursor_set_FadeOverride
              (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
    pGVar1 = (this->fields).secondaryCursor;
    if (pGVar1 != (GUICellCursor *)0x0) {
      GUICellCursor::GUICellCursor_set_FadeOverride
                (pGVar1,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
      pGVar1 = (this->fields).primaryCursor;
      if (pGVar1 != (GUICellCursor *)0x0) {
        GUICellCursor::GUICellCursor_Destroy(pGVar1,(MethodInfo *)0x0);
        if ((this->fields).secondaryCursor != (GUICellCursor *)0x0) {
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                          (in_stack_2,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                    ((Object_1 *)obj,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnUnholstered() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_OnUnholstered
               (PickupItemCubeGun *this,MethodInfo *method)

{
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_ResetAmmo
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).maxAmmo.currentCryptoKey;
  iVar2 = (this->fields).maxAmmo.hiddenValue;
  iVar3 = (this->fields).maxAmmo.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  value.hiddenValue = iVar2;
  value.currentCryptoKey = iVar1;
  value.fakeValue = iVar3;
  value.inited = (this->fields).maxAmmo.inited;
  value._13_3_ = *(undefined3 *)&(this->fields).maxAmmo.field_0xd;
  iVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar1 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,iVar1,(this->klass->vtable).UpdateWithDirection.methodPtr);
  iVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
          ObscuredInt_op_Implicit_1((this->fields).currentAmmo,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Max_2(iVar1,iVar2,(MethodInfo *)0x0)
  ;
  pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar1,(MethodInfo *)0x0);
  iVar1 = pOVar4->hiddenValue;
  iVar2 = pOVar4->fakeValue;
  bVar5 = pOVar4->inited;
  uVar6 = *(undefined3 *)&pOVar4->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar4->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar1;
  (this->fields).currentAmmo.fakeValue = iVar2;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  return;
}


/* Void SetCubeBulletMaterial(Byte) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_SetCubeBulletMaterial
               (PickupItemCubeGun *this,uint8_t materialId,MethodInfo *method)

{
  (this->fields).material = materialId;
  pCVar1 = (this->fields).cubeBullet;
  if (pCVar1 == (CubeBullet *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (pCVar1->fields).meshFilter;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_02 != (MVNetworkGame *)0x0) {
    this_03 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)this_02,(MethodInfo *)0x0);
    if (this_03 != (CelestialParam *)0x0) {
      this_04 = MVMaterialRepository::MVMaterialRepository_GetMaterial
                          ((MVMaterialRepository *)this_03,materialId,(MethodInfo *)0x0);
      if (this_04 != (MVMaterial *)0x0) {
        value = (Mesh *)System.dll::System::Collections::Generic::
                        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                        ::Single,System::Object]::
                        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                  ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                    *)this_04,(MethodInfo *)0x0);
        if (this_00 != (MeshFilter *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::MeshFilter::MeshFilter_set_sharedMesh
                    (this_00,value,(MethodInfo *)0x0);
          this_01 = (pCVar1->fields).meshRenderer;
          this_05 = MVGameControllerBase::MVGameControllerBase_get_MaterialLoader((MethodInfo *)0x0)
          ;
          if (this_05 != (MaterialLoader *)0x0) {
            value_00 = ThemeAttributes::NamedThemeAttribute`1[UnityEngine::Color]::
                       NamedThemeAttribute_1_UnityEngine_Color__get_Name
                                 ((NamedThemeAttribute_1_UnityEngine_Color_ *)this_05,
                                  (MethodInfo *)0x0);
            if (this_01 != (MeshRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                        ((Renderer *)this_01,(Material *)value_00,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Boolean ShowCursors() */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_ShowCursors
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.owner;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pMVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if ((bVar2 != 0) || ((this->fields)._._._IsHolstered_k__BackingField != 0)) {
    return 0;
  }
  pMVar1 = (this->fields)._._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    bVar2 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return 0;
    }
    pMVar1 = (this->fields)._._.owner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      System.dll::System::Collections::Generic::
      SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
      Single,System::Object]::
      SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                  *)pMVar1,(MethodInfo *)0x0);
      iVar3 = func_?();
      if (iVar3 == 0) {
        pMVar1 = (this->fields)._._.owner;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        System.dll::System::Collections::Generic::
        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
        Single,System::Object]::
        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                  ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                    *)pMVar1,(MethodInfo *)0x0);
        iVar3 = func_?();
        if (iVar3 == 0) {
          return 0;
        }
      }
      return 1;
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  bVar2 = (*pcVar4)();
  return bVar2;
}


/* Void Start() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Start
               (PickupItemCubeGun *this,MethodInfo *method)

{
  bVar1 = PickupItemCubeGun_ShowCursors(this,(MethodInfo *)0x0);
  (this->fields).showingCursors = bVar1;
  if (bVar1 == 0) {
    return;
  }
  pGVar2 = (this->fields).primaryCursor;
  if (pGVar2 != (GUICellCursor *)0x0) {
    (pGVar2->fields).fadeInTime = 0.2;
    pGVar2 = (this->fields).secondaryCursor;
    if (pGVar2 != (GUICellCursor *)0x0) {
      (pGVar2->fields).fadeInTime = 0.2;
      pGVar2 = (this->fields).primaryCursor;
      if (pGVar2 != (GUICellCursor *)0x0) {
        (pGVar2->fields).fadeOutTime = 0.2;
        pGVar2 = (this->fields).secondaryCursor;
        if (pGVar2 != (GUICellCursor *)0x0) {
          (pGVar2->fields).fadeOutTime = 0.2;
          pGVar2 = (this->fields).secondaryCursor;
          if (pGVar2 != (GUICellCursor *)0x0) {
            GUICellCursor::GUICellCursor_set_FadeOverride
                      (pGVar2,FadeOverride__Enum_FadeAllOut,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void StartFire() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_StartFire
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._.isFiring = 1;
  (this->fields).fireMain = 1;
  (this->fields).fireSecondary = 0;
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).prevFireTime;
  iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
  AVar4 = (this->fields)._.fireInterval.hiddenValue;
  pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
  fVar6 = (this->fields)._.fireInterval.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar4;
  value.currentCryptoKey = iVar3;
  value.hiddenValueOld = pBVar5;
  value.fakeValue = fVar6;
  value.inited = (this->fields)._.fireInterval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
  fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if (fVar6 < fVar1 - fVar2) {
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
    AVar4 = (this->fields)._.fireInterval.hiddenValue;
    pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
    fVar2 = (this->fields)._.fireInterval.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = AVar4;
    value_00.currentCryptoKey = iVar3;
    value_00.hiddenValueOld = pBVar5;
    value_00.fakeValue = fVar2;
    value_00.inited = (this->fields)._.fireInterval.inited;
    value_00._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
    fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    (this->fields).prevFireTime = fVar6 - fVar2;
  }
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_TriggerBegin
               (PickupItemCubeGun *this,int32_t instigatorActorNr,MethodInfo *method)

{
  if (((this->fields)._.isFiring == 0) && ((this->fields).waitingToFire == 0)) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    (this->fields)._.isFiring = 1;
    (this->fields).fireMain = 1;
    (this->fields).fireSecondary = 0;
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    fVar2 = (this->fields).prevFireTime;
    iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
    AVar4 = (this->fields)._.fireInterval.hiddenValue;
    pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
    fVar6 = (this->fields)._.fireInterval.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar4;
    value.currentCryptoKey = iVar3;
    value.hiddenValueOld = pBVar5;
    value.fakeValue = fVar6;
    value.inited = (this->fields)._.fireInterval.inited;
    value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
    fVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    if (fVar6 < fVar1 - fVar2) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      iVar3 = (this->fields)._.fireInterval.currentCryptoKey;
      AVar4 = (this->fields)._.fireInterval.hiddenValue;
      pBVar5 = (this->fields)._.fireInterval.hiddenValueOld;
      fVar2 = (this->fields)._.fireInterval.fakeValue;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      value_00.hiddenValue = AVar4;
      value_00.currentCryptoKey = iVar3;
      value_00.hiddenValueOld = pBVar5;
      value_00.fakeValue = fVar2;
      value_00.inited = (this->fields)._.fireInterval.inited;
      value_00._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
      fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
      (this->fields).prevFireTime = fVar6 - fVar2;
    }
  }
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_TriggerEnd
               (PickupItemCubeGun *this,MethodInfo *method)

{
  this_01 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  fVar2 = (this->fields).prevFireTime;
  pPVar3 = &this->fields;
  uVar4 = (this->fields)._.fireInterval.currentCryptoKey;
  uVar5 = (pPVar3->_).fireInterval.hiddenValue.b1;
  uVar6 = (pPVar3->_).fireInterval.hiddenValue.b2;
  uVar7 = (pPVar3->_).fireInterval.hiddenValue.b3;
  uVar8 = (pPVar3->_).fireInterval.hiddenValue.b4;
  value.hiddenValue.b4 = uVar8;
  value.hiddenValue.b3 = uVar7;
  value.hiddenValue.b2 = uVar6;
  value.hiddenValue.b1 = uVar5;
  value.currentCryptoKey = uVar4;
  pBVar9 = (this->fields)._.fireInterval.hiddenValueOld;
  fVar10 = (this->fields)._.fireInterval.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  fVar1 = fVar1 - fVar2;
  value.hiddenValueOld = pBVar9;
  value.fakeValue = fVar10;
  value.inited = (this->fields)._.fireInterval.inited;
  value._17_3_ = *(undefined3 *)&(this->fields)._.fireInterval.field_0x11;
  fVar2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if (fVar2 < fVar1) {
    if ((this->fields).fireMain != 0) {
      pMVar11 = (this->fields)._._.owner;
      if (pMVar11 == (MVPickupOwner *)0x0) goto code_?;
      bVar12 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar11,(MethodInfo *)0x0);
      this = (PickupItemCubeGun *)(uint)bVar12;
      (*(code *)(this_01->klass->vtable).OnFire.method)
                (this_01,this,(this_01->klass->vtable).OnDestroy.methodPtr);
      fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      (this_01->fields).prevFireTime = fVar2;
    }
    if ((this_01->fields).fireSecondary != 0) {
      pMVar11 = (this_01->fields)._._.owner;
      if (pMVar11 != (MVPickupOwner *)0x0) {
        bVar12 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar11,(MethodInfo *)0x0);
        PickupItemCubeGun_OnFireSecondary(this_01,bVar12,(MethodInfo *)0x0);
        fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        this_00 = (this_01->fields).chargeObject;
        (this_01->fields).prevFireTime = fVar2;
        if (this_00 != (Transform *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_00,(MethodInfo *)0x0);
          if (this_02 != (GameObject *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                      (this_02,0,(MethodInfo *)0x0);
            goto code_?;
          }
        }
      }
code_?:
      func_?(0);
      pcVar13 = (code *)swi(3);
      (*pcVar13)();
      return;
    }
  }
code_?:
  (this_01->fields).fireMain = 0;
  (this_01->fields).fireSecondary = 0;
  (this_01->fields).waitingToFire = 0;
  (this_01->fields)._.isFiring = 0;
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_Update
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields).showingCursors != 0) {
    PickupItemCubeGun_HandleCursors(this,(MethodInfo *)0x0);
  }
  cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if (cVar1 != '\0') {
    pSVar2 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)(this->fields).cubeBullet;
    if ((pSVar2 == (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                    *)0x0) ||
       (pRVar3 = (Renderer *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           (pSVar2,(MethodInfo *)0x0), pRVar3 == (Renderer *)0x0))
    goto code_?;
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (pRVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      pSVar2 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                *)(this->fields).cubeBullet;
      if ((pSVar2 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                      *)0x0) &&
         (pRVar3 = (Renderer *)
                   System.dll::System::Collections::Generic::
                   SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                   ::Single,System::Object]::
                   SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                             (pSVar2,(MethodInfo *)0x0), pRVar3 != (Renderer *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (pRVar3,0,(MethodInfo *)0x0);
        return;
      }
      goto code_?;
    }
  }
  cVar1 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)();
  if (cVar1 != '\0') {
    return;
  }
  pSVar2 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
            *)(this->fields).cubeBullet;
  if ((pSVar2 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                  *)0x0) &&
     (pRVar3 = (Renderer *)
               System.dll::System::Collections::Generic::
               SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
               Single,System::Object]::
               SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                         (pSVar2,(MethodInfo *)0x0), pRVar3 != (Renderer *)0x0)) {
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_enabled
                      (pRVar3,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      return;
    }
    pSVar2 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
              *)(this->fields).cubeBullet;
    if ((pSVar2 != (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                    *)0x0) &&
       (pRVar3 = (Renderer *)
                 System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           (pSVar2,(MethodInfo *)0x0), pRVar3 != (Renderer *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (pRVar3,1,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateControllerUpdate() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_UpdateControllerUpdate
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if ((this->fields)._.isFiring != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    bVar2 = (this->fields).fireSecondary;
    fVar1 = fVar1 - (this->fields).prevFireTime;
    uVar3 = (this->fields).fireIntervalSecondary.currentCryptoKey;
    uVar4 = (this->fields).fireIntervalSecondary.hiddenValue.b1;
    uVar5 = (this->fields).fireIntervalSecondary.hiddenValue.b2;
    uVar6 = (this->fields).fireIntervalSecondary.hiddenValue.b3;
    uVar7 = (this->fields).fireIntervalSecondary.hiddenValue.b4;
    value.hiddenValue.b4 = uVar7;
    value.hiddenValue.b3 = uVar6;
    value.hiddenValue.b2 = uVar5;
    value.hiddenValue.b1 = uVar4;
    value.currentCryptoKey = uVar3;
    pBVar8 = (this->fields).fireIntervalSecondary.hiddenValueOld;
    fVar9 = (this->fields).fireIntervalSecondary.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValueOld = pBVar8;
    value.fakeValue = fVar9;
    value.inited = (this->fields).fireIntervalSecondary.inited;
    value._17_3_ = *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x11;
    fVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    (this->fields).fireSecondary = fVar9 < fVar1;
    (this->fields).fireMain = fVar1 <= fVar9;
    if ((fVar9 < fVar1) && (bVar2 == 0)) {
      this_00 = (this->fields).chargeObject;
      if ((this_00 != (Transform *)0x0) &&
         (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this_00,(MethodInfo *)0x0),
         this_01 != (GameObject *)0x0)) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (this_01,1,(MethodInfo *)0x0);
        return;
      }
      func_?(0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
  return;
}


/* PickupItemCubeGun() */

void Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun__ctor
               (PickupItemCubeGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).minDistanceToCubeFire = 0.8;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.methodPtr
       & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,10,(MethodInfo *)0x0);
  iVar2 = pOVar1->currentCryptoKey;
  iVar3 = pOVar1->hiddenValue;
  iVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).speed = 30.0;
  (this->fields).range = 200.0;
  (this->fields).maxAmmo.currentCryptoKey = iVar2;
  (this->fields).maxAmmo.hiddenValue = iVar3;
  (this->fields).maxAmmo.fakeValue = iVar4;
  (this->fields).maxAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmo.field_0xd = uVar6;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
            ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.5,(MethodInfo *)0x0);
  AVar8 = pOVar7->hiddenValue;
  pBVar9 = pOVar7->hiddenValueOld;
  fVar10 = pOVar7->fakeValue;
  bVar5 = pOVar7->inited;
  uVar6 = *(undefined3 *)&pOVar7->field_0x11;
  (this->fields).fireIntervalSecondary.currentCryptoKey = pOVar7->currentCryptoKey;
  (this->fields).fireIntervalSecondary.hiddenValue = AVar8;
  (this->fields).fireIntervalSecondary.hiddenValueOld = pBVar9;
  (this->fields).fireIntervalSecondary.fakeValue = fVar10;
  (this->fields).fireIntervalSecondary.inited = bVar5;
  *(undefined3 *)&(this->fields).fireIntervalSecondary.field_0x11 = uVar6;
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
           ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,0,(MethodInfo *)0x0);
  iVar2 = pOVar1->hiddenValue;
  iVar3 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0xd;
  (this->fields).currentAmmo.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).currentAmmo.hiddenValue = iVar2;
  (this->fields).currentAmmo.fakeValue = iVar3;
  (this->fields).currentAmmo.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmo.field_0xd = uVar6;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}


/* Boolean get_IsAmmoDepleted() */

bool Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_get_IsAmmoDepleted
               (PickupItemCubeGun *this,MethodInfo *method)

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

int32_t Assembly-CSharp.dll::PickupItemCubeGun::PickupItemCubeGun_get_Quantity
                  (PickupItemCubeGun *this,MethodInfo *method)

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

