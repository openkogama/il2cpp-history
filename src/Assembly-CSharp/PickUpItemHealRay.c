
/* Void Awake() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_Awake
               (PickUpItemHealRay *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).ResetAmmo.method)
            (this,(this->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  this_00 = (this->fields).rayParticles;
  if (this_00 != (ParticleSystem *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                         ((Quaternion *)&stack0xffffffec,this_01,(MethodInfo *)0x0);
      fVar2 = pQVar1->y;
      fVar3 = pQVar1->z;
      fVar4 = pQVar1->w;
      (this->fields).lerpStartRotation.x = pQVar1->x;
      (this->fields).lerpStartRotation.y = fVar2;
      (this->fields).lerpStartRotation.z = fVar3;
      (this->fields).lerpStartRotation.w = fVar4;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar3 = (pVVar5->zeroVector).y;
      fVar2 = (pVVar5->zeroVector).z;
      (this->fields).hitOffset.x = (pVVar5->zeroVector).x;
      (this->fields).hitOffset.y = fVar3;
      (this->fields).hitOffset.z = fVar2;
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* VoxelHit CalculateClosestVoxelHit(List`1[VoxelHit]) */

VoxelHit *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateClosestVoxelHit
          (VoxelHit *__return_storage_ptr__,PickUpItemHealRay *this,List_1_VoxelHit_ *hitVoxels,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    cRam_? = '\x01';
  }
  func_?(__return_storage_ptr__,0,0x48);
  if (hitVoxels != (List_1_VoxelHit_ *)0x0) {
    pGVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        (&GStack_2,(List_1_GameTierProgressBar_TierProgressData_ *)hitVoxels,0,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    method_00 = MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_;
    pTVar3 = pGVar1->progressText;
    pGVar4 = pGVar1->progressDivider;
    pGVar5 = pGVar1->progressBarTextBubble;
    (__return_storage_ptr__->point).x = (float)pGVar1->progressBar;
    (__return_storage_ptr__->point).y = (float)pTVar3;
    (__return_storage_ptr__->point).z = (float)pGVar4;
    (__return_storage_ptr__->normal).x = (float)pGVar5;
    pRVar6 = pGVar1->avatarHeadImage;
    pGVar4 = pGVar1->avatarHeadUI;
    pPVar7 = pGVar1->disabledProgressBar;
    (__return_storage_ptr__->normal).y = (float)pGVar1->avatarHead;
    (__return_storage_ptr__->normal).z = (float)pRVar6;
    *(GameObject **)&__return_storage_ptr__->cubePos = pGVar4;
    *(ProgressBar **)&(__return_storage_ptr__->cubePos).z = pPVar7;
    pGVar5 = pGVar1->disabledBarTextBubble;
    pGVar4 = pGVar1->tierIconTempUnlock;
    pCVar8 = (Cube *)pGVar1->tierIconNumber;
    __return_storage_ptr__->face = (int32_t)pGVar1->disabledProgressDivider;
    *(GamePassesTextBubble **)&__return_storage_ptr__->isCubeHit = pGVar5;
    __return_storage_ptr__->woId = (int32_t)pGVar4;
    __return_storage_ptr__->cube = pCVar8;
    pCVar9 = (Collider *)pGVar1->tempProgress;
    pTVar10 = (Transform *)pGVar1->disabledTempProgress;
    pGVar5 = pGVar1->freeTryTextBubble;
    __return_storage_ptr__->distance = (float)pGVar1->endResultProgressBar;
    __return_storage_ptr__->collider = pCVar9;
    __return_storage_ptr__->transform = pTVar10;
    *(GamePassesTextBubble **)&__return_storage_ptr__->field_0x3c = pGVar5;
    __return_storage_ptr__->interactionFlags = *(int64_t *)&pGVar1->hoverInputHandler;
    pGVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)&pPStack_11,
                         (List_1_GameTierProgressBar_TierProgressData_ *)hitVoxels,0,method_00);
    GStack_2.progressBar = pGVar1->progressBar;
    GStack_2.progressText = pGVar1->progressText;
    GStack_2.progressDivider = pGVar1->progressDivider;
    GStack_2.progressBarTextBubble = pGVar1->progressBarTextBubble;
    GStack_2.avatarHead = pGVar1->avatarHead;
    GStack_2.avatarHeadImage = pGVar1->avatarHeadImage;
    GStack_2.avatarHeadUI = pGVar1->avatarHeadUI;
    GStack_2.disabledProgressBar = pGVar1->disabledProgressBar;
    GStack_2.disabledProgressDivider = pGVar1->disabledProgressDivider;
    GStack_2.disabledBarTextBubble = pGVar1->disabledBarTextBubble;
    GStack_2.tierIconTempUnlock = pGVar1->tierIconTempUnlock;
    GStack_2.tierIconNumber = pGVar1->tierIconNumber;
    pPStack_12 = pGVar1->endResultProgressBar;
    pGStack_13 = pGVar1->tempProgress;
    pGStack_14 = pGVar1->disabledTempProgress;
    pGStack_15 = pGVar1->freeTryTextBubble;
    GStack_2.hoverInputHandler = pGVar1->hoverInputHandler;
    GStack_2.LockedTierIcon = pGVar1->LockedTierIcon;
    for (index = 1; index < (hitVoxels->fields)._size; index = index + 1) {
      pGVar1 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)&pPStack_11,
                           (List_1_GameTierProgressBar_TierProgressData_ *)hitVoxels,index,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      GStack_2.progressBar = pGVar1->progressBar;
      GStack_2.progressText = pGVar1->progressText;
      GStack_2.progressDivider = pGVar1->progressDivider;
      GStack_2.progressBarTextBubble = pGVar1->progressBarTextBubble;
      GStack_2.avatarHead = pGVar1->avatarHead;
      GStack_2.avatarHeadImage = pGVar1->avatarHeadImage;
      GStack_2.avatarHeadUI = pGVar1->avatarHeadUI;
      GStack_2.disabledProgressBar = pGVar1->disabledProgressBar;
      GStack_2.disabledProgressDivider = pGVar1->disabledProgressDivider;
      GStack_2.disabledBarTextBubble = pGVar1->disabledBarTextBubble;
      GStack_2.tierIconTempUnlock = pGVar1->tierIconTempUnlock;
      GStack_2.tierIconNumber = pGVar1->tierIconNumber;
      GStack_2.hoverInputHandler = pGVar1->hoverInputHandler;
      GStack_2.LockedTierIcon = pGVar1->LockedTierIcon;
      if ((float)pGVar1->endResultProgressBar < (float)pPStack_12) {
        pPStack_12 = pGVar1->endResultProgressBar;
        pfVar16 = (float *)func_?();
        fVar17 = pfVar16[1];
        fVar18 = pfVar16[2];
        fVar19 = pfVar16[3];
        (__return_storage_ptr__->point).x = *pfVar16;
        (__return_storage_ptr__->point).y = fVar17;
        (__return_storage_ptr__->point).z = fVar18;
        (__return_storage_ptr__->normal).x = fVar19;
        fVar17 = pfVar16[5];
        fVar18 = pfVar16[6];
        fVar19 = pfVar16[7];
        (__return_storage_ptr__->normal).y = pfVar16[4];
        (__return_storage_ptr__->normal).z = fVar17;
        *(float *)&__return_storage_ptr__->cubePos = fVar18;
        *(float *)&(__return_storage_ptr__->cubePos).z = fVar19;
        fVar17 = pfVar16[9];
        fVar18 = pfVar16[10];
        pCVar8 = (Cube *)pfVar16[0xb];
        __return_storage_ptr__->face = (int32_t)pfVar16[8];
        *(float *)&__return_storage_ptr__->isCubeHit = fVar17;
        __return_storage_ptr__->woId = (int32_t)fVar18;
        __return_storage_ptr__->cube = pCVar8;
        pCVar9 = (Collider *)pfVar16[0xd];
        pTVar10 = (Transform *)pfVar16[0xe];
        fVar17 = pfVar16[0xf];
        __return_storage_ptr__->distance = pfVar16[0xc];
        __return_storage_ptr__->collider = pCVar9;
        __return_storage_ptr__->transform = pTVar10;
        *(float *)&__return_storage_ptr__->field_0x3c = fVar17;
        __return_storage_ptr__->interactionFlags = *(int64_t *)(pfVar16 + 0x10);
      }
    }
    return __return_storage_ptr__;
  }
  func_?();
  pcVar20 = (code *)swi(3);
  pVVar21 = (VoxelHit *)(*pcVar20)();
  return pVVar21;
}


/* Void CalculateHitOffset(VoxelHit, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateHitOffset
               (PickUpItemHealRay *this,VoxelHit hitVoxel,Vector3 direction,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uStack_2._0_4_ = (pMVar1->fields).lookOrigin.x;
    uStack_2._4_4_ = (pMVar1->fields).lookOrigin.y;
    fStack_3 = (pMVar1->fields).lookOrigin.z;
    fVar4 = (float)(undefined4)uStack_2 + hitVoxel.interactionFlags._4_4_ * (float)hitVoxel.cube;
    fStack_5 = (float)uStack_2._4_4_ + direction.x * (float)hitVoxel.cube;
    fStack_6 = fStack_3 + direction.y * (float)hitVoxel.cube;
    this_00 = (this->fields).stuckObject;
    if (this_00 != (GameObject *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_00,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_8,this_01,(MethodInfo *)0x0);
        uVar9 = pVVar7->x;
        uVar10 = pVVar7->y;
        fVar11 = pVVar7->z;
        (this->fields).hitOffset.x = fVar4 - (float)uVar9;
        (this->fields).hitOffset.y = fStack_5 - (float)uVar10;
        (this->fields).hitOffset.z = fStack_6 - fVar11;
        return;
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Vector3 CalculateHitPosition(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateHitPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,
                    Vector3 fireFromPosition,Vector3 direction,float distance,MethodInfo *method)

{
  __return_storage_ptr__->x = fireFromPosition.x + direction.x * distance;
  __return_storage_ptr__->y = fireFromPosition.y + direction.y * distance;
  __return_storage_ptr__->z = fireFromPosition.z + direction.z * distance;
  return __return_storage_ptr__;
}


/* Vector3 CalculateParticlesRotation() */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateParticlesRotation
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uVar2 = (pMVar1->fields).lookOrigin.x;
    uVar3 = (pMVar1->fields).lookOrigin.y;
    fVar4 = (pMVar1->fields).lookOrigin.z;
    pMVar1 = (this->fields)._.owner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                          ((Vector3 *)&stack0xffffffb0,pMVar1,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      fVar8 = (float)uVar6 * _UNK_?;
      fVar9 = (float)uVar7 * _UNK_?;
      fVar10 = pVVar5->z * _UNK_?;
      this_00 = (this->fields)._.muzzlePoint;
      if (this_00 != (Transform *)0x0) {
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)&stack0xffffffb0,this_00,(MethodInfo *)0x0);
        uVar11 = pVVar5->x;
        uVar12 = pVVar5->y;
        value.y = (fVar9 + (float)uVar3) - (float)uVar12;
        value.x = ((float)uVar2 + fVar8) - (float)uVar11;
        value.z = (fVar4 + fVar10) - pVVar5->z;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                            ((Vector3 *)&stack0xffffffb0,value,(MethodInfo *)0x0);
        fVar10 = pVVar5->y;
        fVar4 = pVVar5->z;
        __return_storage_ptr__->x = pVVar5->x;
        __return_storage_ptr__->y = fVar10;
        __return_storage_ptr__->z = fVar4;
        return __return_storage_ptr__;
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar13)();
  return pVVar5;
}


/* Vector3 CalculateStuckPosition() */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateStuckPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,MethodInfo *method)

{
  this_00 = (this->fields).stuckObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_2,this_01,(MethodInfo *)0x0);
      uVar3 = pVVar1->x;
      uVar4 = pVVar1->y;
      fVar5 = pVVar1->z;
      uVar6 = (this->fields).hitOffset.x;
      uVar7 = (this->fields).hitOffset.y;
      fVar8 = (this->fields).hitOffset.z;
      __return_storage_ptr__->x = (float)uVar3 + (float)uVar6;
      __return_storage_ptr__->y = (float)uVar4 + (float)uVar7;
      __return_storage_ptr__->z = fVar8 + fVar5;
      return __return_storage_ptr__;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar9)();
  return pVVar1;
}


/* Void ChangeUsedParticleSystem() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ChangeUsedParticleSystem
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__VehiclePickupOwner);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pMVar2 = pMVar1->klass;
    if (((TypeInfo__VehiclePickupOwner->_1).naturalAligment <= (pMVar2->_1).naturalAligment) &&
       ((pMVar2->_1).typeHierarchy[(TypeInfo__VehiclePickupOwner->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
      pPVar3 = (this->fields).particleRenderer;
      if (pPVar3 != (ParticleSystemRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)pPVar3,(this->fields).normalRayMaterial,(MethodInfo *)0x0);
        pTVar4 = (this->fields).remoteMuzzlePoint;
        (this->fields)._.muzzlePoint = pTVar4;
        func_?(&(this->fields)._.muzzlePoint,pTVar4);
        pPVar5 = (this->fields).remoteParticleSystem;
        (this->fields).rayParticles = pPVar5;
        func_?(&(this->fields).rayParticles,pPVar5);
        return;
      }
      goto code_?;
    }
  }
  pTVar4 = (this->fields).localMuzzePoint;
  (this->fields)._.muzzlePoint = pTVar4;
  func_?(&(this->fields)._.muzzlePoint,pTVar4);
  pPVar5 = (this->fields).localRayParticles;
  (this->fields).rayParticles = pPVar5;
  func_?(&(this->fields).rayParticles,pPVar5);
  pPVar3 = (this->fields).particleRenderer;
  if (pPVar3 != (ParticleSystemRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pPVar3,(this->fields).ZIgnoreMaterial,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ChangeValueInState(Dictionary`2[System.Object,System.Object], String, Int32) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ChangeValueInState
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               String *key,int32_t value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Int32);
    cRam_? = '\x01';
  }
  key_00 = key;
  this_00 = newState;
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    newState = (Dictionary_2_System_Object_System_Object_ *)value;
    if (bVar1 != 0) {
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&newState);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key_00,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&newState);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)key_00,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ChangeValueInState(Dictionary`2[System.Object,System.Object], String, Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ChangeValueInState_1
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  key_00 = key;
  this_00 = newState;
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    newState = (Dictionary_2_System_Object_System_Object_ *)value;
    if (bVar1 != 0) {
      pOVar2 = (Object *)func_?(TypeInfo__System__Single,&newState);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)key_00,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
    pOVar2 = (Object *)func_?(TypeInfo__System__Single,&newState);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_00,(Object *)key_00,pOVar2,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void DoAmmoDepletion() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoAmmoDepletion
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  if ((this->fields).isShooting == 0) {
    fStack_1 = (this->fields).rayMinimumChargeTime + (this->fields).rayStartTime;
    fStack_2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    if (fStack_2 <= fStack_1) goto code_?;
  }
  else {
code_?:
    VStack_3.x = (float)(this->fields).currentAmmoLeft.currentCryptoKey;
    VStack_3.y = *(float *)&(this->fields).currentAmmoLeft.hiddenValue;
    VStack_3.z = (float)(this->fields).currentAmmoLeft.hiddenValueOld;
    fStack_4 = (this->fields).currentAmmoLeft.fakeValue;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value_00.hiddenValue = (ACTkByte4)VStack_3.y;
    value_00.currentCryptoKey = (int32_t)VStack_3.x;
    value_00.hiddenValueOld = (Byte__Array *)VStack_3.z;
    value_00.fakeValue = fStack_4;
    value_00.inited = (this->fields).currentAmmoLeft.inited;
    value_00._17_3_ = *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11;
    fStack_2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit_1(value_00,(MethodInfo *)0x0);
    fStack_1 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
    pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit(aOStack_6,fStack_2 - fStack_1,(MethodInfo *)0x0);
    AVar7 = pOVar5->hiddenValue;
    pBVar8 = pOVar5->hiddenValueOld;
    fVar9 = pOVar5->fakeValue;
    bVar10 = pOVar5->inited;
    uVar11 = *(undefined3 *)&pOVar5->field_0x11;
    (this->fields).currentAmmoLeft.currentCryptoKey = pOVar5->currentCryptoKey;
    (this->fields).currentAmmoLeft.hiddenValue = AVar7;
    (this->fields).currentAmmoLeft.hiddenValueOld = pBVar8;
    (this->fields).currentAmmoLeft.fakeValue = fVar9;
    (this->fields).currentAmmoLeft.inited = bVar10;
    *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11 = uVar11;
    func_?();
    pTVar12 = (this->fields)._.muzzlePoint;
    if (pTVar12 == (Transform *)0x0) goto code_?;
    pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pTVar12,(MethodInfo *)0x0);
    pMVar13 = (this->fields)._.owner;
    if (pMVar13 == (MVPickupOwner *)0x0) goto code_?;
    pVVar14 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_15,pMVar13,(MethodInfo *)0x0);
    if (pTVar12 == (Transform *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
              (pTVar12,*pVVar14,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__)
      ;
      func_?(&TypeInfo__MVPhysics);
      func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      cRam_? = '\x01';
    }
    pMVar13 = (this->fields)._.owner;
    if (((pMVar13 == (MVPickupOwner *)0x0) ||
        (pMVar16 = (pMVar13->fields)._.worldObjectParent, pMVar16 == (MVWorldObjectClient *)0x0)) ||
       (pGVar17 = (pMVar16->fields).gameObject, pGVar17 == (GameObject *)0x0)) goto code_?;
    this_00 = (MVRigidBody *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (pGVar17,
                         MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                        );
    if (this_00 == (MVRigidBody *)0x0) goto code_?;
    pppppuStack_78 = (undefined4 *****)(this_00->klass->vtable).__unknown_1.methodPtr;
    cVar18 = (*(code *)(this_00->klass->vtable).__unknown.method)(this_00);
    if (cVar18 == '\0') {
      puVar19 = (undefined8 *)
                (*(code *)(this_00->klass->vtable).__unknown_1.method)
                          (&VStack_3,this_00,(this_00->klass->vtable).__unknown_2.methodPtr);
      VStack_15._0_8_ = *puVar19;
      VStack_15.z = *(float *)(puVar19 + 1);
      aOStack_6[0].currentCryptoKey = 0;
      aOStack_6[0].hiddenValue.b1 = 0;
      aOStack_6[0].hiddenValue.b2 = 0;
      aOStack_6[0].hiddenValue.b3 = 0;
      aOStack_6[0].hiddenValue.b4 = 0;
      aOStack_6[0].hiddenValueOld = (Byte__Array *)0x0;
      aOStack_6[0].fakeValue = 0.0;
      if (VStack_15.y < 0.0) {
        pMVar13 = (this->fields)._.owner;
        if (pMVar13 == (MVPickupOwner *)0x0) goto code_?;
        pVVar14 = MVPickupOwner::MVPickupOwner_get_LookDirection
                            (&VStack_3,pMVar13,(MethodInfo *)0x0);
        fStack_1 = pVVar14->y;
        if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
          pMStack_20 = TypeInfo__MVPhysics;
          pppppuStack_78 = (undefined4 *****)&UNK_?;
          func_?();
        }
        pppppuStack_78 = &pppppuStack_78;
        pMStack_20 = (MVPhysics__Class *)0x0;
        pfVar21 = (float *)func_?();
        VStack_3.x = *pfVar21;
        VStack_3.y = *(float *)(pfVar21 + 1);
        VStack_3.z = pfVar21[2];
        fStack_4 = pfVar21[3];
        fStack_2 = pfVar21[4];
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
        }
        value.hiddenValue = (ACTkByte4)VStack_3.y;
        value.currentCryptoKey = (int32_t)VStack_3.x;
        value.hiddenValueOld = (Byte__Array *)VStack_3.z;
        value.fakeValue = fStack_4;
        value._16_4_ = fStack_2;
        fStack_2 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
        fVar9 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        VStack_15.z = 0.0;
        fStack_2 = fVar9 * fStack_2 * fStack_1 * _UNK_? * _UNK_?;
        fVar9 = fStack_2;
        if (VStack_15.y <= fStack_2) {
          fVar9 = VStack_15.y;
        }
        impulse.y = (float)((uint)fVar9 ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        impulse.x = (float)aOStack_6[0].currentCryptoKey;
        impulse.z = 0.0;
        MVRigidBody::MVRigidBody_AddImpulse_1(this_00,impulse,1,(MethodInfo *)0x0);
      }
    }
  }
  cVar18 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)
                    (this,(this->klass->vtable).get_Quantity.methodPtr);
  if (cVar18 != '\0') {
    pMVar13 = (this->fields)._.owner;
    if (((pMVar13 == (MVPickupOwner *)0x0) ||
        (pMVar16 = (pMVar13->fields)._.worldObjectParent, pMVar16 == (MVWorldObjectClient *)0x0)) ||
       (pGVar17 = (pMVar16->fields).gameObject, pGVar17 == (GameObject *)0x0)) {
code_?:
      func_?();
      pcVar22 = (code *)swi(3);
      (*pcVar22)();
      return;
    }
    x = (Object_1 *)
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                  (pGVar17,
                   MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      (x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar10 != 0) {
      if (x == (Object_1 *)0x0) goto code_?;
      (**(code **)&x->klass[1]._0.byval_arg.attrs)(x,x->klass[1]._0.this_arg.data.dummy);
    }
  }
  return;
}


/* Void DoFloating() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoFloating
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    func_?(&TypeInfo__MVPhysics);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (((pMVar1 != (MVPickupOwner *)0x0) &&
      (pMVar2 = (pMVar1->fields)._.worldObjectParent, pMVar2 != (MVWorldObjectClient *)0x0)) &&
     (this_00 = (pMVar2->fields).gameObject, this_00 != (GameObject *)0x0)) {
    this_01 = (MVRigidBody *)
              UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                        (this_00,
                         MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                        );
    if (this_01 != (MVRigidBody *)0x0) {
      cVar3 = (*(code *)(this_01->klass->vtable).__unknown.method)
                        (this_01,(this_01->klass->vtable).__unknown_1.methodPtr);
      if (cVar3 == '\0') {
        puVar4 = (undefined8 *)
                 (*(code *)(this_01->klass->vtable).__unknown_1.method)
                           (&VStack_5,this_01,(this_01->klass->vtable).__unknown_2.methodPtr);
        uVar6 = *puVar4;
        uStack_7 = *(undefined4 *)(puVar4 + 1);
        uStack_8._4_4_ = (float)((ulonglong)uVar6 >> 0x20);
        uVar9 = 0;
        if (uStack_8._4_4_ < 0.0) {
          pMVar1 = (this->fields)._.owner;
          uStack_8 = uVar6;
          if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
          pVVar10 = MVPickupOwner::MVPickupOwner_get_LookDirection
                             (&VStack_5,pMVar1,(MethodInfo *)0x0);
          fStack_11 = pVVar10->y;
          if ((TypeInfo__MVPhysics->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pfVar12 = (float *)func_?(&stack0xffffff98);
          VStack_5.x = *pfVar12;
          VStack_5.y = pfVar12[1];
          VStack_5.z = pfVar12[2];
          fStack_13 = pfVar12[3];
          fVar14 = pfVar12[4];
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          value.hiddenValue = (ACTkByte4)VStack_5.y;
          value.currentCryptoKey = (int32_t)VStack_5.x;
          value.hiddenValueOld = (Byte__Array *)VStack_5.z;
          value.fakeValue = fStack_13;
          value._16_4_ = fVar14;
          fStack_15 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                      ObscuredFloat::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
          fVar14 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                            ((MethodInfo *)0x0);
          uStack_7 = 0;
          fStack_11 = fVar14 * fStack_15 * fStack_11 * _UNK_? * _UNK_?;
          fVar14 = fStack_11;
          if (uStack_8._4_4_ <= fStack_11) {
            fVar14 = uStack_8._4_4_;
          }
          impulse.y = (float)((uint)fVar14 ^
                             __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                             );
          impulse.x = (float)uVar9;
          impulse.z = 0.0;
          MVRigidBody::MVRigidBody_AddImpulse_1(this_01,impulse,1,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void DoHealing() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoHealing
               (PickUpItemHealRay *this,MethodInfo *method)

{
  auVar1 = _uStack0000000c;
  this_00 = this;
  auVar2._0_40_ = in_stack_3._0_40_;
  auVar2._40_4_ = unaff_EBX;
  auVar4._0_28_ = in_stack_3._0_28_;
  auVar4._28_4_ = unaff_EBP;
  auVar4._36_8_ = auVar2._36_8_;
  auVar4._32_4_ = unaff_retaddr;
  uVar5 = in_stack_6;
  uVar7 = in_stack_8;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
    uVar5 = in_stack_6;
    uVar7 = in_stack_8;
  }
  if ((this_00->fields).isShooting == 0) {
    auVar9._28_16_ = auVar4._28_16_;
    auVar9._0_24_ = auVar4._0_24_;
    auVar9._24_4_ = (this_00->fields).rayMinimumChargeTime + (this_00->fields).rayStartTime;
    fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    auVar4._24_20_ = auVar9._24_20_;
    auVar4._0_20_ = auVar9._0_20_;
    auVar4._20_4_ = fVar10;
    if ((float)auVar9._24_4_ < fVar10) {
      return;
    }
  }
  fVar10 = (float)(this_00->fields).currentAmmoLeft.currentCryptoKey;
  AVar11 = (this_00->fields).currentAmmoLeft.hiddenValue;
  pBVar12 = (this_00->fields).currentAmmoLeft.hiddenValueOld;
  fVar13 = (this_00->fields).currentAmmoLeft.fakeValue;
  auVar14._0_4_ = auVar4._0_4_;
  auVar14._4_4_ = fVar10;
  auVar14[8] = AVar11.b1;
  auVar14[9] = AVar11.b2;
  auVar14[10] = AVar11.b3;
  auVar14[0xb] = AVar11.b4;
  auVar14._12_4_ = pBVar12;
  auVar14._20_24_ = auVar4._20_24_;
  auVar14._16_4_ = fVar13;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    fVar10 = auVar14._4_4_;
    AVar11 = auVar14._8_4_;
    pBVar12 = auVar14._12_4_;
    fVar13 = auVar14._16_4_;
  }
  value.hiddenValue = AVar11;
  value.currentCryptoKey = (int32_t)fVar10;
  value.hiddenValueOld = pBVar12;
  value.fakeValue = fVar13;
  value.inited = (this_00->fields).currentAmmoLeft.inited;
  value._17_3_ = *(undefined3 *)&(this_00->fields).currentAmmoLeft.field_0x11;
  fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  auVar15._28_16_ = auVar14._28_16_;
  auVar15._0_24_ = auVar14._0_24_;
  auVar15._24_4_ = fVar10;
  if ((fVar10 <= _UNK_?) &&
     (cVar16 = (*(code *)(this_00->klass->vtable).get_HasUnlimitedAmmo.method)(), cVar16 == '\0')) {
    return;
  }
  x = (this_00->fields).stuckObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  bVar17 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar17 == 0) {
    pMVar18 = (this_00->fields)._.owner;
    if (pMVar18 == (MVPickupOwner *)0x0) goto code_?;
    pVVar19 = MVPickupOwner::MVPickupOwner_get_LookDirection
                        ((Vector3 *)&stack0xffffffd8,pMVar18,(MethodInfo *)0x0);
    fStack_20 = pVVar19->x;
    fStack_21 = pVVar19->y;
    fVar10 = pVVar19->z;
  }
  else {
    pVVar19 = PickUpItemHealRay_CalculateStuckPosition
                        ((Vector3 *)&stack0xffffffd8,this_00,(MethodInfo *)0x0);
    uVar22 = pVVar19->x;
    uVar23 = pVVar19->y;
    pMVar18 = (this_00->fields)._.owner;
    if (pMVar18 == (MVPickupOwner *)0x0) goto code_?;
    uVar24._0_4_ = (pMVar18->fields).lookOrigin.x;
    uVar24._4_4_ = (pMVar18->fields).lookOrigin.y;
    fVar10 = (pMVar18->fields).lookOrigin.z;
    auVar25._0_8_ = auVar15._0_8_;
    auVar25._8_8_ = uVar24;
    fStack_21 = (float)uVar23 - (float)uVar24._4_4_;
    fStack_20 = (float)uVar22 - (float)(undefined4)uVar24;
    auVar26._20_24_ = auVar15._20_24_;
    auVar26._16_4_ = fVar10;
    auVar26._0_16_ = auVar25;
    fVar10 = pVVar19->z - fVar10;
    auVar15._16_28_ = auVar26._16_28_;
    auVar15._0_12_ = auVar25._0_12_;
    auVar15._12_4_ = fVar10;
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  func_?();
  direction.y = fStack_21;
  direction.x = fStack_20;
  direction.z = fVar10;
  bVar17 = PickUpItemHealRay_IsDirectionValid(this_00,direction,(MethodInfo *)0x0);
  if (bVar17 == 0) {
code_?:
    iVar27 = 0;
  }
  else {
    value_00.y = fStack_21;
    value_00.x = fStack_20;
    value_00.z = fVar10;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffd8,value_00,(MethodInfo *)0x0);
    uVar5 = pVVar19->x;
    uVar7 = pVVar19->y;
    in_stack_28 = pVVar19->z;
    in_stack_29 = this_00;
    hitVoxels = PickUpItemHealRay_DoRaycast(this_00,*pVVar19,(MethodInfo *)0x0);
    if (hitVoxels == (List_1_VoxelHit_ *)0x0) goto code_?;
    if ((hitVoxels->fields)._size < 1) goto code_?;
    pVVar30 = PickUpItemHealRay_CalculateClosestVoxelHit
                        ((VoxelHit *)&stack0xffffff10,this_00,hitVoxels,(MethodInfo *)0x0);
    in_stack_31 = (pVVar30->point).x;
    fStack_32 = (pVVar30->point).y;
    in_stack_33 = (pVVar30->point).z;
    in_stack_34 = (pVVar30->normal).x;
    in_stack_35 = (pVVar30->normal).y;
    in_stack_36 = (pVVar30->normal).z;
    in_stack_37._0_2_ = (pVVar30->cubePos).x;
    in_stack_37._2_2_ = (pVVar30->cubePos).y;
    in_stack_38 = *(undefined4 *)&(pVVar30->cubePos).z;
    in_stack_39 = pVVar30->face;
    in_stack_40 = *(undefined4 *)&pVVar30->isCubeHit;
    in_stack_41 = pVVar30->woId;
    in_stack_42 = pVVar30->cube;
    in_stack_43 = pVVar30->distance;
    in_stack_44 = pVVar30->collider;
    in_stack_45 = pVVar30->transform;
    in_stack_46 = *(undefined4 *)&pVVar30->field_0x3c;
    in_stack_47 = (float)pVVar30->interactionFlags;
    in_stack_48 = (float)((ulonglong)pVVar30->interactionFlags >> 0x20);
    func_?();
    if ((this_00->fields).isLockedOn == 0) {
      iVar27 = 1;
    }
    else {
      iVar27 = 2;
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if (iVar27 == 0) {
    pPVar49 = (this_00->fields).rayParticles;
    if (pPVar49 != (ParticleSystem *)0x0) {
      PVar50 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(pPVar49,(MethodInfo *)0x0);
      auVar51._28_16_ = auVar15._28_16_;
      auVar51._0_24_ = auVar15._0_24_;
      auVar51._24_4_ = PVar50.m_ParticleSystem;
      if ((this_00->fields).isLockedOn == 0) {
        fVar10 = (this_00->fields).maxRayRange;
      }
      else {
        fVar10 = (this_00->fields).maxLockOnRange;
      }
      auVar52._24_20_ = auVar51._24_20_;
      auVar52._0_20_ = auVar15._0_20_;
      auVar52._20_4_ = fVar10;
      fVar10 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
               ParticleSystem_MainModule_get_startSpeedMultiplier_Injected
                         ((ParticleSystem_MainModule *)&stack0xffffffec,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xffffffec,auVar52._20_4_ / fVar10,
                 (MethodInfo *)0x0);
      pPVar49 = (this_00->fields).hitParticles;
      if (pPVar49 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar49,(MethodInfo *)0x0);
        if ((this_00->fields).isLockedOn == 0) {
          return;
        }
        (*(code *)(this_00->klass->vtable).TriggerEnd.method)();
        return;
      }
    }
  }
  else {
    if (iVar27 != 1) {
      if (iVar27 != 2) {
        return;
      }
      hitVoxel.point.y = in_stack_33;
      hitVoxel.point.x = fStack_32;
      hitVoxel.point.z = in_stack_34;
      hitVoxel.normal.x = in_stack_35;
      hitVoxel.normal.y = in_stack_36;
      hitVoxel.normal.z = (float)in_stack_37;
      hitVoxel.cubePos.x = (short)in_stack_38;
      hitVoxel.cubePos.y = (short)((uint)in_stack_38 >> 0x10);
      hitVoxel._28_4_ = in_stack_39;
      hitVoxel.face = in_stack_40;
      hitVoxel._36_4_ = in_stack_41;
      hitVoxel.woId = (int32_t)in_stack_42;
      hitVoxel.cube = (Cube *)in_stack_43;
      hitVoxel.distance = (float)in_stack_44;
      hitVoxel.collider = (Collider *)in_stack_45;
      hitVoxel.transform = (Transform *)in_stack_46;
      hitVoxel._60_4_ = in_stack_47;
      hitVoxel.interactionFlags._0_4_ = in_stack_48;
      hitVoxel.interactionFlags._4_4_ = uVar5;
      direction_00.y = in_stack_28;
      direction_00.x = (float)uVar7;
      direction_00.z = 0.0;
      PickUpItemHealRay_UpdateRayParticleEffect
                (this_00,hitVoxel,direction_00,(MethodInfo *)in_stack_29);
      uVar53._4_4_ = in_stack_48;
      uVar53._0_4_ = in_stack_47;
code_?:
      auVar54._16_8_ = uVar53;
      auVar55 = auVar15._0_12_;
      auVar56 = auVar15._12_12_;
      uVar57 = auVar15._24_6_;
      fVar58 = (float)auVar55._0_4_;
      stack0xffffffd8 = (float)auVar55._4_4_;
      stack0xffffffdc = (float)auVar55._8_4_;
      stack0xffffffe0 = (float)auVar56._0_4_;
      stack0xffffffe4 = (float)auVar56._4_4_;
      stack0xffffffe8 = (float)auVar56._8_4_;
      stack0xffffffec = (short)uVar57;
      stack0xffffffee = (short)((uint6)uVar57 >> 0x10);
      stack0xfffffff0 = (short)((uint6)uVar57 >> 0x20);
      stack0xfffffff2 = auVar15._30_2_;
      stack0xfffffff4 = auVar15._32_4_;
      stack0xfffffff8 = auVar15[0x24];
      stack0xfffffff9 = auVar15._37_3_;
      stack0xfffffffc = auVar15._40_4_;
      VVar59 = (VoxelHit)CONCAT2844(auVar54,auVar60);
      PickUpItemHealRay_UpdateRayHealingLogic(this_00,VVar59,in_stack_61);
      return;
    }
    pMVar62 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar62 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                     (pMVar62,in_stack_41,
                      int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                     );
      pMVar62 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar62 != (MVWorldObjectClientManager *)0x0) {
        hitObject = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar62,id,(MethodInfo *)0x0);
        result._4_4_ = uStack_63;
        result.Status = 1;
        result.HitVoxel.point.x = in_stack_31;
        result.HitVoxel.point.y = fStack_32;
        result.HitVoxel.point.z = in_stack_33;
        result.HitVoxel.normal.x = in_stack_34;
        result.HitVoxel.normal.y = in_stack_35;
        result.HitVoxel.normal.z = in_stack_36;
        result.HitVoxel.cubePos.x = (short)in_stack_37;
        result.HitVoxel.cubePos.y = (short)((uint)in_stack_37 >> 0x10);
        result.HitVoxel._28_4_ = in_stack_38;
        result.HitVoxel.face = in_stack_39;
        result.HitVoxel._36_4_ = in_stack_40;
        result.HitVoxel.woId = in_stack_41;
        result.HitVoxel.cube = in_stack_42;
        result.HitVoxel.distance = in_stack_43;
        result.HitVoxel.collider = in_stack_44;
        result.HitVoxel.transform = in_stack_45;
        result.HitVoxel._60_4_ = in_stack_46;
        result.HitVoxel.interactionFlags._0_4_ = in_stack_47;
        result.HitVoxel.interactionFlags._4_4_ = in_stack_48;
        result.Direction.x = (float)uVar5;
        result.Direction.y = (float)uVar7;
        result.Direction.z = in_stack_28;
        result._92_4_ = in_stack_64;
        PickUpItemHealRay_HandleOnStuck(this_00,hitObject,result,(MethodInfo *)0x0);
        VVar59.point.y = in_stack_33;
        VVar59.point.x = fStack_32;
        VVar59.point.z = in_stack_34;
        VVar59.normal.x = in_stack_34;
        VVar59.normal.y = in_stack_36;
        VVar59.normal.z = (float)in_stack_37;
        VVar59.cubePos.x = (short)in_stack_38;
        VVar59.cubePos.y = (short)((uint)in_stack_38 >> 0x10);
        VVar59._28_4_ = in_stack_38;
        VVar59.face = in_stack_40;
        VVar59._36_4_ = in_stack_41;
        VVar59.woId = (int32_t)in_stack_42;
        VVar59.cube = in_stack_42;
        VVar59.distance = (float)in_stack_44;
        VVar59.collider = (Collider *)in_stack_45;
        VVar59.transform = (Transform *)in_stack_46;
        VVar59._60_4_ = in_stack_46;
        VVar59.interactionFlags._0_4_ = in_stack_48;
        VVar59.interactionFlags._4_4_ = uVar5;
        direction_01.y = in_stack_28;
        direction_01.x = (float)uVar7;
        direction_01.z = 0.0;
        fVar10 = in_stack_34;
        uVar5 = in_stack_38;
        this = (PickUpItemHealRay *)in_stack_42;
        PickUpItemHealRay_UpdateRayParticleEffect(this_00,VVar59,direction_01,in_stack_65);
        auVar55._4_4_ = fStack_32;
        auVar55._0_4_ = in_stack_31;
        auVar55._8_4_ = in_stack_33;
        auVar15._12_4_ = in_stack_34;
        auVar15._0_12_ = auVar55;
        auVar15._16_4_ = fVar10;
        auVar15._20_4_ = in_stack_36;
        auVar15._24_4_ = in_stack_37;
        auVar15._28_4_ = in_stack_38;
        auVar15._32_4_ = uVar5;
        auVar15._36_4_ = in_stack_40;
        auVar15._40_4_ = in_stack_41;
        unaff_retaddr = in_stack_42;
        method = (MethodInfo *)in_stack_44;
        uStack66 = in_stack_45;
        auVar54._16_8_ = auVar1._4_8_;
        auVar54._24_4_ = 0;
        uVar53 = auVar55._4_8_;
        goto code_?;
      }
    }
  }
code_?:
  func_?();
  pcVar67 = (code *)swi(3);
  (*pcVar67)();
  return;
}


/* List`1[VoxelHit] DoRaycast(Vector3) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoRaycast
          (PickUpItemHealRay *this,Vector3 direction,MethodInfo *method)

{
  if ((this->fields)._.owner != (MVPickupOwner *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       (&VStack_2,direction,(MethodInfo *)0x0);
    uVar3 = pVVar1->x;
    uVar4 = pVVar1->y;
    fVar5 = pVVar1->z;
    if ((this->fields).isLockedOn == 0) {
      distance = (this->fields).maxRayRange;
    }
    else {
      distance = (this->fields).maxLockOnRange;
    }
    pMVar6 = (this->fields)._.owner;
    if (pMVar6 != (MVPickupOwner *)0x0) {
      ignoreWoIds = (HashSet_1_System_Int32_ *)
                    (*(code *)(pMVar6->klass->vtable).get_IgnoreWOIDs.method)
                              (pMVar6,pMVar6->klass[1]._0.image,uVar3,uVar4);
      uVar7 = 0;
      layerMask = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
                  UnsafeUtility_AsRef_1((Void *)(this->fields).layers.m_Mask,(MethodInfo *)0x0);
      ray.m_Origin.y = distance;
      ray.m_Origin.x = (float)uVar7;
      ray.m_Origin.z = (float)ignoreWoIds;
      ray.m_Direction.x = (float)layerMask;
      ray.m_Direction.y = 0.0;
      ray.m_Direction.z = fVar5;
      pLVar8 = CollisionDetection::CollisionDetection_MVHitAll
                         (ray,distance,ignoreWoIds,(int32_t)layerMask,(MethodInfo *)0x0);
      return pLVar8;
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  pLVar8 = (List_1_VoxelHit_ *)(*pcVar9)();
  return pLVar8;
}


/* InteractionDataHandlerBase GetInteractionHandler(MVWorldObjectClient) */

InteractionDataHandlerBase *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_GetInteractionHandler
          (PickUpItemHealRay *this,MVWorldObjectClient *worldObject,MethodInfo *method)

{
  if (worldObject != (MVWorldObjectClient *)0x0) {
    pIVar1 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                       (worldObject,(MethodInfo *)0x0);
    return pIVar1;
  }
  return (InteractionDataHandlerBase *)0x0;
}


/* Single GetMaxRange() */

float Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_GetMaxRange
                (PickUpItemHealRay *this,MethodInfo *method)

{
  if ((this->fields).isLockedOn == 0) {
    return (this->fields).maxRayRange;
  }
  return (this->fields).maxLockOnRange;
}


/* InteractionDataHandlerBase HandleChildObjectHit(VoxelHit, InteractionDataHandlerBase) */

InteractionDataHandlerBase *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleChildObjectHit
          (PickUpItemHealRay *this,VoxelHit hitVoxel,InteractionDataHandlerBase *interactionHandler,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)hitVoxel.interactionFlags._4_4_,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return hitVoxel.interactionFlags._4_4_;
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar2,hitVoxel._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
      this_00 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar2,id,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClient *)0x0) {
        pIVar3 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                           (this_00,(MethodInfo *)0x0);
        return pIVar3;
      }
      return (InteractionDataHandlerBase *)0x0;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  pIVar3 = (InteractionDataHandlerBase *)(*pcVar4)();
  return pIVar3;
}


/* Void HandleNoHit() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleNoHit
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if ((this->fields).isLockedOn != 0) {
    (*(code *)(this->klass->vtable).TriggerEnd.method)
              (this,(this->klass->vtable).OnStateChanged.methodPtr);
  }
  return;
}


/* Void HandleOnStuck(MVWorldObjectClient, PickUpItemHealRay+RayCastData) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleOnStuck
               (PickUpItemHealRay *this,MVWorldObjectClient *hitObject,
               PickUpItemHealRay_RayCastData result,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (hitObject == (MVWorldObjectClient *)0x0) {
code_?:
    if ((this->fields).isLockedOn != 0) {
      (*(code *)(this->klass->vtable).TriggerEnd.method)
                (this,(this->klass->vtable).OnStateChanged.methodPtr);
    }
    return;
  }
  pIStack_1 = (IHealRayAttachementObject__Class *)
               MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                         (hitObject,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIStack_1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) goto code_?;
  if ((this->fields).isLockedOn != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 == (MainCameraManager *)0x0) goto code_?;
  MainCameraManager::MainCameraManager_PlayPlingSound(this_01,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVGameControllerBase);
    cRam_? = '\x01';
  }
  pIVar3 = TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField;
  if ((pIVar3 == (IPlayModeUI *)0x0) ||
     (iVar4 = func_?(2,TypeInfo__IPlayModeUI,pIVar3), iVar4 == 0)) goto code_?;
  func_?(3,TypeInfo__IGUICrossHair,iVar4);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IHealRayAttachementObject);
    cRam_? = '\x01';
  }
  pGVar5 = (hitObject->fields).gameObject;
  (this->fields).stuckObject = pGVar5;
  func_?(&(this->fields).stuckObject,pGVar5);
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar6 == (MVNetworkGame *)0x0) ||
     (this_00 = (pMVar6->fields).teamManager, this_00 == (MVTeamManager *)0x0))
  goto code_?;
  iVar7 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
  if (iVar7 < 2) {
    bVar8 = 0;
  }
  else {
    pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar6 == (MVNetworkGame *)0x0) ||
       (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar6,(MethodInfo *)0x0),
       this_02 == (MVLocalPlayer *)0x0)) goto code_?;
    bVar2 = MVPlayer::MVPlayer_IsOnSameTeam_1((MVPlayer *)this_02,hitObject,(MethodInfo *)0x0);
    bVar8 = bVar2 ^ 1;
  }
  (this->fields).damageRay = bVar8;
  iVar4 = func_?(hitObject,TypeInfo__IHealRayAttachementObject);
  if (iVar4 == 0) {
code_?:
    pMVar9 = (this->fields)._.owner;
    if (pMVar9 != (MVPickupOwner *)0x0) {
      uStack_10._0_4_ = (pMVar9->fields).lookOrigin.x;
      uStack_10._4_4_ = (pMVar9->fields).lookOrigin.y;
      fStack_11 = (pMVar9->fields).lookOrigin.z;
      pIStack_1 = (IHealRayAttachementObject__Class *)
                   ((float)uStack_10._4_4_ + result.Direction.y * result.HitVoxel.distance);
      fStack_12 = fStack_11 + result.Direction.z * result.HitVoxel.distance;
      pGVar5 = (this->fields).stuckObject;
      if ((pGVar5 != (GameObject *)0x0) &&
         (this_03 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                              (pGVar5,(MethodInfo *)0x0), this_03 != (Transform *)0x0)) {
        fVar13 = 0.0;
        pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_15,this_03,(MethodInfo *)0x0);
        uStack_10._0_4_ = pVVar14->x;
        uStack_10._4_4_ = pVVar14->y;
        fStack_11 = fStack_12 - pVVar14->z;
        (this->fields).hitOffset.x = fVar13 - (float)(undefined4)uStack_10;
        (this->fields).hitOffset.y = (float)pIStack_1 - (float)uStack_10._4_4_;
        (this->fields).hitOffset.z = fStack_11;
        PickUpItemHealRay_UpdateItemState(this,(hitObject->fields)._.id,(MethodInfo *)0x0);
        (this->fields).isLockedOn = 1;
        return;
      }
    }
  }
  else {
    pIStack_1 = TypeInfo__IHealRayAttachementObject;
    iVar4 = func_?(hitObject,TypeInfo__IHealRayAttachementObject);
    if (iVar4 != 0) {
      pIStack_1 = TypeInfo__IHealRayAttachementObject;
      iVar4 = func_?(hitObject,TypeInfo__IHealRayAttachementObject);
      if (iVar4 != 0) {
        pGVar5 = (GameObject *)func_?(0,TypeInfo__IHealRayAttachementObject,iVar4);
        (this->fields).stuckObject = pGVar5;
        func_?(&(this->fields).stuckObject,pGVar5);
        goto code_?;
      }
    }
    func_?(hitObject,pIStack_1);
  }
code_?:
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void HandleRaycastResultLocally(PickUpItemHealRay+RayCastData) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleRaycastResultLocally
               (PickUpItemHealRay *this,PickUpItemHealRay_RayCastData result,MethodInfo *method)

{
  PVar1 = result;
  this_00 = this;
  fVar2 = result.HitVoxel.normal.y;
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    cRam_? = '\x01';
  }
  if (in_stack_3 == 0.0) {
    pPVar4 = (this->fields).rayParticles;
    if (pPVar4 != (ParticleSystem *)0x0) {
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
      ParticleSystem_get_collision(pPVar4,(MethodInfo *)0x0);
      if ((this->fields).isLockedOn == 0) {
        fVar2 = (this->fields).maxRayRange;
      }
      else {
        fVar2 = (this->fields).maxLockOnRange;
      }
      fVar5 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
              ParticleSystem_MainModule_get_startSpeedMultiplier_Injected
                        ((ParticleSystem_MainModule *)&stack0xfffffff8,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                ((ParticleSystem_MainModule *)&stack0xfffffff8,fVar2 / fVar5,(MethodInfo *)0x0);
      pPVar4 = (this->fields).hitParticles;
      if (pPVar4 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar4,(MethodInfo *)0x0);
        if ((this->fields).isLockedOn == 0) {
          return;
        }
        (*(code *)(this->klass->vtable).TriggerEnd.method)();
        return;
      }
    }
  }
  else {
    uVar6 = result.Direction._0_8_;
    if (in_stack_3 != 1.4013e-45) {
      if (in_stack_3 == 2.8026e-45) {
        direction_00.z = 0.0;
        direction_00.x = (float)(int)uVar6;
        direction_00.y = (float)(int)(uVar6 >> 0x20);
        PickUpItemHealRay_UpdateRayParticleEffect(this,result.HitVoxel,direction_00,unaff_ESI);
        auVar7 = result.HitVoxel._8_32_;
        result.HitVoxel.normal.x = 0.0;
        auVar8 = auVar7._4_12_;
        fVar9 = (float)auVar7._0_4_;
        this = (PickUpItemHealRay *)auVar8._0_4_;
        in_stack_3 = (float)auVar8._4_4_;
        result.Status = auVar8._8_4_;
        result._4_6_ = auVar7._16_6_;
        result.HitVoxel.point.x._2_2_ = auVar7._22_2_;
        result.HitVoxel.point.y = (float)auVar7._24_4_;
        result.HitVoxel.point.z._0_1_ = auVar7[0x1c];
        result.HitVoxel.point.z._1_3_ = auVar7._29_3_;
        result.HitVoxel.normal.y = (float)result.HitVoxel.cube;
        result.HitVoxel.normal.z = result.HitVoxel.distance;
        result.HitVoxel.cubePos._0_4_ = result.HitVoxel.collider;
        result.HitVoxel._28_4_ = result.HitVoxel.transform;
        result.HitVoxel.face = result.HitVoxel._60_4_;
        result.HitVoxel._36_4_ = (undefined4)result.HitVoxel.interactionFlags;
        fVar10 = (float)(int)PVar1.HitVoxel.point._0_8_;
        stack0xfffffffc = (float)(int)((ulonglong)PVar1.HitVoxel.point._0_8_ >> 0x20);
        auVar11 = CONCAT608(auVar11._0_60_,auVar11._0_8_);
        result.HitVoxel.woId = 0;
        in_stack_3 = fVar2;
        PickUpItemHealRay_UpdateRayHealingLogic
                  (this_00,(VoxelHit)CONCAT468(result.HitVoxel.woId,auVar11),
                   (MethodInfo *)result.HitVoxel.cube);
      }
      return;
    }
    pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar12 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                     (pMVar12,result.HitVoxel._36_4_,
                      int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                     );
      pMVar12 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar12 != (MVWorldObjectClientManager *)0x0) {
        hitObject = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar12,id,(MethodInfo *)0x0);
        result_00._4_4_ = result.Status;
        result_00.Status = (int32_t)in_stack_3;
        result_00.HitVoxel.point.x = (float)result._4_4_;
        result_00.HitVoxel.point.y = result.HitVoxel.point.x;
        result_00.HitVoxel.point.z = result.HitVoxel.point.y;
        result_00.HitVoxel.normal.x = result.HitVoxel.point.z;
        result_00.HitVoxel.normal.y = result.HitVoxel.normal.x;
        result_00.HitVoxel.normal.z = result.HitVoxel.normal.y;
        result_00.HitVoxel.cubePos._0_4_ = result.HitVoxel.normal.z;
        result_00.HitVoxel.cubePos.z = result.HitVoxel.cubePos.x;
        result_00.HitVoxel._30_2_ = result.HitVoxel.cubePos.y;
        result_00.HitVoxel.face = result.HitVoxel._28_4_;
        result_00.HitVoxel._36_4_ = result.HitVoxel.face;
        result_00.HitVoxel.woId = result.HitVoxel._36_4_;
        result_00.HitVoxel.cube = (Cube *)result.HitVoxel.woId;
        result_00.HitVoxel.distance = (float)result.HitVoxel.cube;
        result_00.HitVoxel.collider = (Collider *)result.HitVoxel.distance;
        result_00.HitVoxel.transform = (Transform *)result.HitVoxel.collider;
        result_00.HitVoxel._60_4_ = result.HitVoxel.transform;
        result_00.HitVoxel.interactionFlags._0_4_ = result.HitVoxel._60_4_;
        result_00.HitVoxel.interactionFlags._4_4_ = (undefined4)result.HitVoxel.interactionFlags;
        result_00.Direction.x = (float)result.HitVoxel.interactionFlags._4_4_;
        result_00.Direction.y = result.Direction.x;
        result_00.Direction.z = result.Direction.y;
        result_00._92_4_ = result.Direction.z;
        PickUpItemHealRay_HandleOnStuck(this,hitObject,result_00,(MethodInfo *)0x0);
        hitVoxel.normal.x = result.HitVoxel.point.z;
        hitVoxel.point = PVar1.HitVoxel.point;
        hitVoxel.normal.y = result.HitVoxel.normal.y;
        hitVoxel.normal.z = result.HitVoxel.normal.z;
        hitVoxel.cubePos.x = result.HitVoxel.cubePos.x;
        hitVoxel.cubePos.y = result.HitVoxel.cubePos.y;
        hitVoxel.cubePos.z = result.HitVoxel.cubePos.x;
        hitVoxel._30_2_ = result.HitVoxel.cubePos.y;
        hitVoxel.face = result.HitVoxel.face;
        hitVoxel.isCubeHit = result.HitVoxel.isCubeHit;
        hitVoxel._37_3_ = result.HitVoxel._37_3_;
        hitVoxel.woId = result.HitVoxel.woId;
        hitVoxel.cube = (Cube *)result.HitVoxel.woId;
        hitVoxel.distance = result.HitVoxel.distance;
        hitVoxel.collider = result.HitVoxel.collider;
        hitVoxel.transform = result.HitVoxel.transform;
        hitVoxel._60_4_ = result.HitVoxel.transform;
        hitVoxel.interactionFlags._0_4_ = (undefined4)result.HitVoxel.interactionFlags;
        hitVoxel.interactionFlags._4_4_ = result.HitVoxel.interactionFlags._4_4_;
        direction.z = 0.0;
        direction.x = (float)(int)uVar6;
        direction.y = (float)(int)(uVar6 >> 0x20);
        PickUpItemHealRay_UpdateRayParticleEffect(this,hitVoxel,direction,method);
        pPStack13 = this;
        hitVoxel_00.interactionFlags._0_4_ = (undefined4)result.HitVoxel.interactionFlags;
        hitVoxel_00._60_4_ = result.HitVoxel.transform;
        hitVoxel_00.normal.y = result.HitVoxel.point.z;
        auVar8 = SUB1612(PVar1._4_16_,0);
        hitVoxel_00.point.x = (float)auVar8._0_4_;
        hitVoxel_00.point.y = (float)auVar8._4_4_;
        hitVoxel_00.point.z = (float)auVar8._8_4_;
        hitVoxel_00.normal.x = (float)SUB164(PVar1._4_16_,0xc);
        hitVoxel_00.normal.z = result.HitVoxel.normal.y;
        hitVoxel_00.cubePos._0_4_ = result.HitVoxel.normal.z;
        hitVoxel_00.cubePos.z = result.HitVoxel.cubePos.x;
        hitVoxel_00._30_2_ = result.HitVoxel.cubePos.y;
        hitVoxel_00.face._0_2_ = result.HitVoxel.cubePos.x;
        hitVoxel_00.face._2_2_ = result.HitVoxel.cubePos.y;
        hitVoxel_00._36_4_ = result.HitVoxel.face;
        hitVoxel_00.woId = result.HitVoxel._36_4_;
        hitVoxel_00.cube = (Cube *)result.HitVoxel.woId;
        hitVoxel_00.distance = (float)result.HitVoxel.woId;
        hitVoxel_00.collider = (Collider *)result.HitVoxel.distance;
        hitVoxel_00.transform = (Transform *)result.HitVoxel.collider;
        hitVoxel_00.interactionFlags._4_4_ = 0;
        PickUpItemHealRay_UpdateRayHealingLogic(this,hitVoxel_00,in_stack_14);
        return;
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Vector3 HandleVehicleHitPosition(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleVehicleHitPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,Vector3 hitPosition,
                    Vector3 direction,float hitDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__VehiclePickupOwner);
    cRam_? = '\x01';
  }
  if (((this->fields).isLockedOn == 0) &&
     (pMVar1 = (this->fields)._.owner, pMVar1 != (MVPickupOwner *)0x0)) {
    pMVar2 = pMVar1->klass;
    if (((TypeInfo__VehiclePickupOwner->_1).naturalAligment <= (pMVar2->_1).naturalAligment) &&
       ((pMVar2->_1).typeHierarchy[(TypeInfo__VehiclePickupOwner->_1).naturalAligment - 1] ==
        (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
      pMVar1 = (this->fields)._.owner;
      uVar3 = (pMVar1->fields).lookOrigin.x;
      uVar4 = (pMVar1->fields).lookOrigin.y;
      fVar5 = (pMVar1->fields).lookOrigin.z;
      __return_storage_ptr__->x = (float)uVar3 + direction.x * hitDistance;
      __return_storage_ptr__->y = (float)uVar4 + direction.y * hitDistance;
      __return_storage_ptr__->z = fVar5 + direction.z * hitDistance;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->x = hitPosition.x;
  __return_storage_ptr__->y = hitPosition.y;
  __return_storage_ptr__->z = hitPosition.z;
  return __return_storage_ptr__;
}


/* Boolean IsDamageRay(MVPickupOwner, MVWorldObjectClient) */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsDamageRay
               (MVPickupOwner *shooter,MVWorldObjectClient *stuckWorldObject,MethodInfo *method)

{
  puStack_1 = &DAT_?;
  uStack_2 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_2;
  puStack_3 = &stack0xffffffd0;
  uStack_4 = 0;
  pMStack_5 = (MVPlayer *)0x0;
  pMVar6 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (pMVar6 != (MVNetworkGame *)0x0) {
    this = (pMVar6->fields).playerContainer;
    if (((shooter != (MVPickupOwner *)0x0) &&
        (pMVar7 = (shooter->fields)._.worldObjectParent, pMVar7 != (MVWorldObjectClient *)0x0)) &&
       (this != (MVPlayerContainer *)0x0)) {
      bVar8 = MVPlayerContainer::MVPlayerContainer_TryGetValue
                        (this,(pMVar7->fields)._.ownerActorNr,&pMStack_5,(MethodInfo *)0x0);
      if (bVar8 == 0) {
        *unaff_FS_OFFSET = uStack_2;
        return 0;
      }
      if (pMStack_5 != (MVPlayer *)0x0) {
        bVar8 = MVPlayer::MVPlayer_IsOnSameTeam_1(pMStack_5,stuckWorldObject,(MethodInfo *)0x0);
        *unaff_FS_OFFSET = uStack_2;
        return bVar8 ^ 1;
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar8 = (*pcVar9)();
  return bVar8;
}


/* Boolean IsDirectionValid(Vector3) */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsDirectionValid
               (PickUpItemHealRay *this,Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stuckObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
            (&direction,(MethodInfo *)0x0);
  pMVar3 = (this->fields)._.owner;
  if (pMVar3 != (MVPickupOwner *)0x0) {
    pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection
                       ((Vector3 *)&stack0xffffffec,pMVar3,(MethodInfo *)0x0);
    uVar5._0_4_ = pVVar4->x;
    uVar5._4_4_ = pVVar4->y;
    fVar6 = pVVar4->z;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__System__Math);
      cRam_? = '\x01';
    }
    fVar7 = (float)((ulonglong)uVar5 >> 0x20);
    fVar6 = fVar7 * fVar7 + (float)uVar5 * (float)uVar5 + fVar6 * fVar6;
    fVar7 = direction.x * direction.x + direction.y * direction.y + direction.z * direction.z;
    if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__System__Math);
    }
    pMVar8 = TypeInfo__System__Math;
    dVar9 = (double)(fVar7 * fVar6);
    if (dVar9 < 0.0) {
      func_?();
    }
    else {
      dVar9 = SQRT(dVar9);
    }
    if (_UNK_? <= (float)dVar9) {
      if ((pMVar8->_1).cctor_finished_or_no_cctor == 0) {
        func_?(pMVar8);
      }
      func_?();
    }
    pGVar1 = (this->fields).stuckObject;
    if ((pGVar1 != (GameObject *)0x0) &&
       (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar1,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0x00000000,pTVar10,(MethodInfo *)0x0);
      pMVar3 = (this->fields)._.owner;
      if ((pMVar3 != (MVPickupOwner *)0x0) &&
         (pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pMVar3,(MethodInfo *)0x0), pTVar10 != (Transform *)0x0)) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)((int)&stack0x00000020 + 4),pTVar10,(MethodInfo *)0x0);
        uVar11 = pVVar4->x;
        uVar12 = pVVar4->y;
        in_stack_13 = in_stack_14 - pVVar4->z;
        in_stack_15 = CONCAT44((float)method - (float)uVar12,direction.z - (float)uVar11);
        fVar16 = (float10)func_?();
        direction.y = (float)fVar16;
        fVar6 = _UNK_?;
        if (_UNK_? <= direction.y) {
          fVar6 = direction.y;
        }
        if ((this->fields).isLockedOn == 0) {
          fVar7 = (this->fields).maxRayRange;
        }
        else {
          fVar7 = (this->fields).maxLockOnRange;
        }
        fVar6 = (_UNK_? - fVar6 / fVar7) * _UNK_? + _UNK_?;
        if ((fVar6 < direction.x) ||
           (direction.x <
            (float)((uint)fVar6 ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field))) {
          (this->fields).stuckObject = (GameObject *)0x0;
          func_?();
          pMVar3 = (this->fields)._.owner;
          (this->fields).damageRay = 0;
          if (pMVar3 == (MVPickupOwner *)0x0) goto code_?;
          MVPickupOwner::MVPickupOwner_get_LookDirection(&direction,pMVar3,(MethodInfo *)0x0);
          if ((this->fields).isLockedOn != 0) {
            (*(code *)(this->klass->vtable).TriggerEnd.method)
                      (this,(this->klass->vtable).OnStateChanged.methodPtr);
            return 0;
          }
        }
        return 1;
      }
    }
  }
code_?:
  func_?();
  pcVar17 = (code *)swi(3);
  bVar2 = (*pcVar17)();
  return bVar2;
}


/* Boolean IsObjectStuckable(MVWorldObjectClient) */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsObjectStuckable
               (PickUpItemHealRay *this,MVWorldObjectClient *hitObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (hitObject != (MVWorldObjectClient *)0x0) {
    x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                  (hitObject,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      return 1;
    }
  }
  return 0;
}


/* Boolean IsStillChargingRay() */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsStillChargingRay
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if ((this->fields).isShooting != 0) {
    return 1;
  }
  fVar1 = (this->fields).rayMinimumChargeTime;
  fVar2 = (this->fields).rayStartTime;
  fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
  return fVar3 <= fVar1 + fVar2;
}


/* Void LerpRaysVisualRepresentation() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_LerpRaysVisualRepresentation
               (PickUpItemHealRay *this,MethodInfo *method)

{
  this_00 = (this->fields)._.owner;
  if (this_00 != (MVPickupOwner *)0x0) {
    pVVar1 = MVPickupOwner::MVPickupOwner_get_LookDirection
                       ((Vector3 *)&stack0xfffffff0,this_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
              ((Quaternion *)&stack0xffffffec,*pVVar1,(MethodInfo *)0x0);
    pPVar2 = (this->fields).rayParticles;
    if (pPVar2 != (ParticleSystem *)0x0) {
      this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)pPVar2,(MethodInfo *)0x0);
      if (this_01 != (Transform *)0x0) {
        fVar3 = 0.0;
        pQVar4 = (Quaternion *)&stack0xffffffdc;
        puVar5 = &UNK_?;
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           (pQVar4,this_01,(MethodInfo *)0x0);
        if (_UNK_? <
            (float)pQVar4 * pQVar6->y + (float)puVar5 * pQVar6->x + (float)this_01 * pQVar6->z +
            fVar3 * pQVar6->w) {
          (this->fields).passedLerpTime = 0.0;
          return;
        }
        if ((float)pQVar4 * (this->fields).lerpStartRotation.y +
            (float)puVar5 * (this->fields).lerpStartRotation.x +
            (float)this_01 * (this->fields).lerpStartRotation.z +
            fVar3 * (this->fields).lerpStartRotation.w <= _UNK_?) {
          (this->fields).lerpStartRotation.x = (float)puVar5;
          (this->fields).lerpStartRotation.y = (float)pQVar4;
          (this->fields).lerpStartRotation.z = (float)this_01;
          (this->fields).lerpStartRotation.w = fVar3;
          (this->fields).passedLerpTime = 0.0;
        }
        method_00 = (MethodInfo *)(this->fields).passedLerpTime;
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime(method_00);
        pPVar2 = (this->fields).rayParticles;
        (this->fields).passedLerpTime = fVar7 + (float)method_00;
        if (pPVar2 != (ParticleSystem *)0x0) {
          this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar2,(MethodInfo *)0x0);
          pPVar2 = (this->fields).rayParticles;
          if (pPVar2 != (ParticleSystem *)0x0) {
            this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pPVar2,(MethodInfo *)0x0);
            if (this_03 != (Transform *)0x0) {
              pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 ((Quaternion *)&stack0xffffffdc,this_03,(MethodInfo *)0x0);
              a.y = (float)pQVar4;
              a.x = (float)puVar5;
              a.z = (float)this_01;
              a.w = fVar3;
              pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                                 ((Quaternion *)&stack0xffffffdc,a,*pQVar6,
                                  _UNK_? / (this->fields).passedLerpTime,(MethodInfo *)0x0);
              if (this_02 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (this_02,*pQVar4,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnDestroy
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  x = (this->fields).hitParticles;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((this->fields).hitParticles != (ParticleSystem *)0x0) {
      if (pcRam_? == (code *)0x0) {
        pcRam_? = (code *)func_?();
      }
      (*pcRam_?)(in_stack_2);
      return;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnEquip
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystemRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystemRenderer>__
                   );
    cRam_? = '\x01';
  }
  PickupItemCollectTheItem::PickupItemCollectTheItem_OnEquip
            ((PickupItemCollectTheItem *)this,(MethodInfo *)0x0);
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffe8,this_00,(MethodInfo *)0x0);
    fVar2 = pVVar1->z;
    pMVar3 = (this->fields)._.owner;
    if (pMVar3 != (MVPickupOwner *)0x0) {
      pVVar1 = MVPickupOwner::MVPickupOwner_get_LookDirection
                         ((Vector3 *)&stack0xffffffe8,pMVar3,(MethodInfo *)0x0);
      pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                         ((Quaternion *)&stack0xffffffe4,*pVVar1,(MethodInfo *)0x0);
      uVar5 = pQVar4->y;
      uVar6 = pQVar4->z;
      position.y = (float)uVar6;
      position.x = (float)uVar5;
      position.z = fVar2;
      pPVar7 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                         (PoolEnums__Enum_HealRaySparks,position,*pQVar4,
                          (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
      (this->fields).hitParticles = pPVar7;
      func_?();
      pPVar7 = (this->fields).hitParticles;
      if (pPVar7 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar7,(MethodInfo *)0x0);
        pMVar3 = (this->fields)._.owner;
        if (pMVar3 != (MVPickupOwner *)0x0) {
          if ((pMVar3->fields)._IsLocal_k__BackingField == 0) {
            return;
          }
          pPVar7 = (this->fields).rayParticles;
          if (pPVar7 != (ParticleSystem *)0x0) {
            pPVar8 = (ParticleSystemRenderer *)
                     UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                               ((Component *)pPVar7,
                                UnityEngine__ParticleSystemRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystemRenderer>__
                               );
            (this->fields).particleRenderer = pPVar8;
            func_?();
            pPVar8 = (this->fields).particleRenderer;
            if (pPVar8 != (ParticleSystemRenderer *)0x0) {
              pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                  ((Renderer *)pPVar8,(MethodInfo *)0x0);
              (this->fields).normalRayMaterial = pMVar9;
              func_?();
              pPVar8 = (this->fields).particleRenderer;
              if (pPVar8 != (ParticleSystemRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                          ((Renderer *)pPVar8,(this->fields).ZIgnoreMaterial,(MethodInfo *)0x0);
                (this->fields).remoteMuzzlePoint = (this->fields)._.muzzlePoint;
                func_?();
                (this->fields).remoteParticleSystem = (this->fields).rayParticles;
                func_?();
                (this->fields)._.muzzlePoint = (this->fields).localMuzzePoint;
                func_?(&(this->fields)._.muzzlePoint);
                pPVar7 = (this->fields).localRayParticles;
                (this->fields).rayParticles = pPVar7;
                func_?(&(this->fields).rayParticles,pPVar7);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnHitParticleUpdate(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnHitParticleUpdate
               (PickUpItemHealRay *this,Vector3 hitPosition,Vector3 firingDirection,float distance,
               MethodInfo *method)

{
  pPVar1 = this;
  pPVar2 = (this->fields).hitParticles;
  if (pPVar2 != (ParticleSystem *)0x0) {
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)pPVar2,(MethodInfo *)0x0);
    if (this_00 != (Transform *)0x0) {
      value.y = hitPosition.y;
      value.x = hitPosition.x;
      value.z = hitPosition.z;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (this_00,value,(MethodInfo *)0x0);
      pPVar2 = (pPVar1->fields).hitParticles;
      if (pPVar2 != (ParticleSystem *)0x0) {
        this_01 = (PickUpItemHealRay *)
                  UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pPVar2,(MethodInfo *)0x0);
        this = (PickUpItemHealRay *)0x0;
        forward.y = (float)((uint)firingDirection.y ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        forward.x = (float)((uint)firingDirection.x ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        forward.z = (float)((uint)firingDirection.z ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffec,forward,(MethodInfo *)0x0);
        if (this_01 != (PickUpItemHealRay *)0x0) {
          hitPosition.x = pQVar3->x;
          hitPosition.y = pQVar3->y;
          hitPosition.z = pQVar3->z;
          this = this_01;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    ((Transform *)this_01,*pQVar3,(MethodInfo *)0x0);
          pPVar2 = (pPVar1->fields).hitParticles;
          if (pPVar2 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (pPVar2,(MethodInfo *)0x0);
            pPVar2 = (pPVar1->fields).rayParticles;
            if (pPVar2 != (ParticleSystem *)0x0) {
              this = (PickUpItemHealRay *)
                     UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
                     ParticleSystem_get_collision(pPVar2,(MethodInfo *)0x0);
              fVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
                      ParticleSystem_MainModule_get_startSpeedMultiplier_Injected
                                ((ParticleSystem_MainModule *)&this,(MethodInfo *)0x0);
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
              ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                        ((ParticleSystem_MainModule *)&this,distance / fVar4,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnStateChanged
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__IHealRayAttachementObject);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__MVWorldObjectClient);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickUpItemHealRay);
    func_?(&StringLiteral_S);
    cRam_? = '\x01';
  }
  this_00 = newState;
  pMVar2 = (pPVar1->fields)._.owner;
  this = (PickUpItemHealRay *)0x0;
  if (pMVar2 == (MVPickupOwner *)0x0) {
code_?:
    func_?();
code_?:
    func_?();
    pPVar3 = this;
  }
  else {
    if ((pMVar2->fields)._IsLocal_k__BackingField != 0) {
      return;
    }
    unaff_EDI = (PickUpItemHealRay *)this_00;
    if (newState == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    bVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)newState,
                       (Object *)StringLiteral_S,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    if (bVar4 == 0) {
      return;
    }
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_00,
                       (Object *)StringLiteral_S,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar6 = CONCAT44(TypeInfo__System__Int32,TVar5.m_Index);
    if (TVar5.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    this = (PickUpItemHealRay *)&UNK_?;
    newState = (Dictionary_2_System_Object_System_Object_ *)TVar5;
    piVar7 = (int *)func_?();
    unaff_EDI = (PickUpItemHealRay *)*piVar7;
    if (unaff_EDI == (PickUpItemHealRay *)0xffffffff) {
      (*(code *)(pPVar1->klass->vtable).TriggerEnd.method)
                (pPVar1,(pPVar1->klass->vtable).OnStateChanged.methodPtr);
      return;
    }
    this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this_01 == (MVWorldObjectClientManager *)0x0) goto code_?;
    bVar4 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                      (this_01,(int32_t)unaff_EDI,(MVWorldObject **)&this,(MethodInfo *)0x0);
    unaff_EDI = this;
    if (bVar4 == 0) {
      return;
    }
    if (this == (PickUpItemHealRay *)0x0) {
      (pPVar1->fields).stuckObject = (GameObject *)0x0;
      func_?();
      (pPVar1->fields).damageRay = 0;
      return;
    }
    pPVar3 = unaff_EBX;
    if ((((TypeInfo__MVWorldObjectClient->_1).naturalAligment <= (this->klass->_1).naturalAligment)
        && (pPVar3 = unaff_EBX,
           (MVWorldObjectClient__Class *)
           (this->klass->_1).typeHierarchy[(TypeInfo__MVWorldObjectClient->_1).naturalAligment - 1]
           == TypeInfo__MVWorldObjectClient)) &&
       (pPVar3 = unaff_EBX, this != (PickUpItemHealRay *)0x0)) {
      (pPVar1->fields).stuckObject = (GameObject *)0x0;
      func_?(&(pPVar1->fields).stuckObject);
      (pPVar1->fields).damageRay = 0;
      x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                    ((MVWorldObjectClient *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        newState = (Dictionary_2_System_Object_System_Object_ *)TypeInfo__UnityEngine__Object;
        this = (PickUpItemHealRay *)&UNK_?;
        func_?();
      }
      newState = (Dictionary_2_System_Object_System_Object_ *)0x0;
      this = (PickUpItemHealRay *)0x0;
      bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return;
      }
      (pPVar1->fields).stuckObject = (GameObject *)(unaff_EDI->fields).rayMinimumChargeTime;
      method = (MethodInfo *)&UNK_?;
      func_?();
      pMVar2 = (pPVar1->fields)._.owner;
      if ((TypeInfo__PickUpItemHealRay->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      newState = (Dictionary_2_System_Object_System_Object_ *)&UNK_?;
      method = (MethodInfo *)pMVar2;
      bVar4 = PickUpItemHealRay_IsDamageRay
                        (pMVar2,(MVWorldObjectClient *)unaff_EDI,(MethodInfo *)0x0);
      (pPVar1->fields).damageRay = bVar4;
      (pPVar1->fields).isLockedOn = 1;
      method = (MethodInfo *)&UNK_?;
      iVar8 = func_?();
      if (iVar8 == 0) {
        return;
      }
      iVar8 = func_?();
      if ((iVar8 != 0) && (iVar8 = func_?(), iVar8 != 0)) {
        pGVar9 = (GameObject *)func_?();
        (pPVar1->fields).stuckObject = pGVar9;
        method = (MethodInfo *)&UNK_?;
        func_?();
        return;
      }
      goto code_?;
    }
  }
  this = pPVar3;
  uVar6 = func_?(unaff_EDI);
code_?:
  newState = (Dictionary_2_System_Object_System_Object_ *)((ulonglong)uVar6 >> 0x20);
  this = (PickUpItemHealRay *)uVar6;
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnUnequip
               (PickUpItemHealRay *this,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  if ((this->fields).hitParticles != (ParticleSystem *)0x0) {
    if (pcRam_? == (code *)0x0) {
      pcRam_? = (code *)func_?();
    }
    (*pcRam_?)(in_stack_1,1);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ResetAmmo
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_EDI);
  AStack_1 = (ACTkByte4)(this->fields).maxAmmoTime.currentCryptoKey;
  AStack_2 = (this->fields).maxAmmoTime.hiddenValue;
  pBVar3 = (this->fields).maxAmmoTime.hiddenValueOld;
  fVar4 = (this->fields).maxAmmoTime.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AStack_2;
  value.currentCryptoKey._0_1_ = AStack_1.b1;
  value.currentCryptoKey._1_1_ = AStack_1.b2;
  value.currentCryptoKey._2_1_ = AStack_1.b3;
  value.currentCryptoKey._3_1_ = AStack_1.b4;
  value.hiddenValueOld = pBVar3;
  value.fakeValue = fVar4;
  value.inited = (this->fields).maxAmmoTime.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).maxAmmoTime.field_0x11;
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar5 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,(int)fVar4,(this->klass->vtable).UpdateWithDirection.methodPtr);
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit
                     ((ObscuredFloat *)&stack0xffffffe8,(float)iVar5,(MethodInfo *)0x0);
  AVar7 = pOVar6->hiddenValue;
  pBVar3 = pOVar6->hiddenValueOld;
  fVar4 = pOVar6->fakeValue;
  bVar8 = pOVar6->inited;
  uVar9 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields).currentAmmoLeft.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields).currentAmmoLeft.hiddenValue = AVar7;
  (this->fields).currentAmmoLeft.hiddenValueOld = pBVar3;
  (this->fields).currentAmmoLeft.fakeValue = fVar4;
  (this->fields).currentAmmoLeft.inited = bVar8;
  *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11 = uVar9;
  func_?();
  return;
}


/* Void SetRayParticleDistance(Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_SetRayParticleDistance
               (PickUpItemHealRay *this,float distance,MethodInfo *method)

{
  this_00 = (this->fields).rayParticles;
  if (this_00 != (ParticleSystem *)0x0) {
    this = (PickUpItemHealRay *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(this_00,(MethodInfo *)0x0);
    fVar1 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
            ParticleSystem_MainModule_get_startSpeedMultiplier_Injected
                      ((ParticleSystem_MainModule *)&this,(MethodInfo *)0x0);
    this = (PickUpItemHealRay *)0x0;
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
    ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
              ((ParticleSystem_MainModule *)&this,distance / fVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ShowHitEffect() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ShowHitEffect
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IGUICrossHair);
    func_?(&TypeInfo__IPlayModeUI);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_PlayPlingSound(this_00,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (TypeInfo__MVGameControllerBase->static_fields->_PlayModeUI_k__BackingField !=
        (IPlayModeUI *)0x0) {
      iVar1 = func_?();
      if (iVar1 != 0) {
        func_?();
        return;
      }
    }
  }
  uVar2 = func_?(&stack0x00000000);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void SyncState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_SyncState
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ICurrentItemOwner);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 == (MVPickupOwner *)0x0) {
code_?:
    func_?();
  }
  else {
    if ((pMVar1->fields)._IsLocal_k__BackingField == 0) {
      return;
    }
    x = (pMVar1->fields).currentItem;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)this,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    auStack_3._4_4_ = (this->fields).currentAmmoLeft.currentCryptoKey;
    auStack_3._8_4_ = (this->fields).currentAmmoLeft.hiddenValue;
    auStack_3._12_4_ = (this->fields).currentAmmoLeft.hiddenValueOld;
    auStack_3._16_4_ = (this->fields).currentAmmoLeft.fakeValue;
    unaff_EDI = *(MVWorldObjectClient **)&(this->fields).currentAmmoLeft.inited;
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue.b1 = auStack_3[8];
    value.hiddenValue.b2 = auStack_3[9];
    value.hiddenValue.b3 = auStack_3[10];
    value.hiddenValue.b4 = auStack_3[0xb];
    value.currentCryptoKey = auStack_3._4_4_;
    value.hiddenValueOld = (Byte__Array *)auStack_3._12_4_;
    value.fakeValue = (float)auStack_3._16_4_;
    value._16_4_ = unaff_EDI;
    fStack_4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    fStack_5 = (this->fields).elapsedUpdateWaitTime;
    pMVar1 = (this->fields)._.owner;
    if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
    iVar6 = func_?((pMVar1->fields)._.worldObjectParent,TypeInfo__ICurrentItemOwner);
    pIVar7 = TypeInfo__ICurrentItemOwner;
    if (iVar6 == 0) {
code_?:
      if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
          cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
      }
      pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                ObscuredFloat_op_Implicit((ObscuredFloat *)auStack_3,fStack_4,(MethodInfo *)0x0);
      AVar9 = pOVar8->hiddenValue;
      pBVar10 = pOVar8->hiddenValueOld;
      fVar11 = pOVar8->fakeValue;
      bVar2 = pOVar8->inited;
      uVar12 = *(undefined3 *)&pOVar8->field_0x11;
      (this->fields).currentAmmoLeft.currentCryptoKey = pOVar8->currentCryptoKey;
      (this->fields).currentAmmoLeft.hiddenValue = AVar9;
      (this->fields).currentAmmoLeft.hiddenValueOld = pBVar10;
      (this->fields).currentAmmoLeft.fakeValue = fVar11;
      (this->fields).currentAmmoLeft.inited = bVar2;
      *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11 = uVar12;
      func_?(&(this->fields).currentAmmoLeft.hiddenValueOld,0);
      (this->fields).elapsedUpdateWaitTime = fStack_5;
      return;
    }
    pMVar1 = (this->fields)._.owner;
    unaff_EDI = (MVWorldObjectClient *)0x0;
    if ((pMVar1 == (MVPickupOwner *)0x0) ||
       (unaff_EDI = (pMVar1->fields)._.worldObjectParent, unaff_EBX = TypeInfo__ICurrentItemOwner,
       unaff_EDI == (MVWorldObjectClient *)0x0)) goto code_?;
    iVar6 = func_?(unaff_EDI,TypeInfo__ICurrentItemOwner);
    unaff_EBX = pIVar7;
    if (iVar6 == 0) goto code_?;
    pIStack_13 = TypeInfo__ICurrentItemOwner;
    piVar14 = (int *)func_?(unaff_EDI,TypeInfo__ICurrentItemOwner);
    unaff_EBX = (ICurrentItemOwner__Class *)0x0;
    piStack_15 = piVar14;
    if (piVar14 != (int *)0x0) {
      pIStack_13 = (ICurrentItemOwner__Class *)*piVar14;
      uVar16 = 0;
      uVar17._0_1_ = (pIStack_13->_1).rank;
      uVar17._1_1_ = (pIStack_13->_1).minimumAlignment;
      if (uVar17 != 0) {
        do {
          if (pIStack_13->interfaceOffsets[uVar16].interfaceType ==
              (Il2CppClass *)TypeInfo__ICurrentItemOwner) {
            puVar18 = (undefined4 *)
                      (*piVar14 +
                      (*(int *)(*(int *)(*piVar14 + 0x58) + 4 + (uint)uVar16 * 8) + 0x19) * 8);
            goto code_?;
          }
          uVar16 = uVar16 + 1;
        } while (uVar16 < uVar17);
      }
      puVar18 = (undefined4 *)func_?(piVar14,TypeInfo__ICurrentItemOwner,1);
code_?:
      (*(code *)*puVar18)(piVar14,newState,puVar18[1]);
      goto code_?;
    }
  }
  func_?(unaff_EDI,pIStack_13);
code_?:
  func_?(unaff_EDI,unaff_EBX);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* Void TriggerBegin(Int32) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_TriggerBegin
               (PickUpItemHealRay *this,int32_t instigatorActorNr,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  if ((pMVar1->fields)._IsLocal_k__BackingField != 0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__VehiclePickupOwner);
      cRam_? = '\x01';
    }
    pMVar1 = (this->fields)._.owner;
    if (((pMVar1 == (MVPickupOwner *)0x0) ||
        (pMVar2 = pMVar1->klass,
        (pMVar2->_1).naturalAligment < (TypeInfo__VehiclePickupOwner->_1).naturalAligment)) ||
       ((pMVar2->_1).typeHierarchy[(TypeInfo__VehiclePickupOwner->_1).naturalAligment - 1] !=
        (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
      pTVar3 = (this->fields).localMuzzePoint;
      (this->fields)._.muzzlePoint = pTVar3;
      func_?(&(this->fields)._.muzzlePoint,pTVar3);
      pPVar4 = (this->fields).localRayParticles;
      (this->fields).rayParticles = pPVar4;
      func_?(&(this->fields).rayParticles,pPVar4);
      pPVar5 = (this->fields).particleRenderer;
      if (pPVar5 == (ParticleSystemRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pPVar5,(this->fields).ZIgnoreMaterial,(MethodInfo *)0x0);
    }
    else {
      pPVar5 = (this->fields).particleRenderer;
      if (pPVar5 == (ParticleSystemRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pPVar5,(this->fields).normalRayMaterial,(MethodInfo *)0x0);
      pTVar3 = (this->fields).remoteMuzzlePoint;
      (this->fields)._.muzzlePoint = pTVar3;
      func_?(&(this->fields)._.muzzlePoint,pTVar3);
      pPVar4 = (this->fields).remoteParticleSystem;
      (this->fields).rayParticles = pPVar4;
      func_?(&(this->fields).rayParticles,pPVar4);
    }
  }
  pPVar4 = (this->fields).rayParticles;
  if (pPVar4 != (ParticleSystem *)0x0) {
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_get_collision
              (pPVar4,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&this,1,(MethodInfo *)0x0);
    if ((this->fields).isShooting == 0) {
      fVar6 = (this->fields).rayMinimumChargeTime + (this->fields).rayStartTime;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      if (fVar6 < fVar7) {
        fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pMVar1 = (this->fields)._.owner;
        (this->fields).isShooting = 1;
        (this->fields).rayStartTime = fVar6;
        if (pMVar1 != (MVPickupOwner *)0x0) {
          if ((pMVar1->fields)._IsLocal_k__BackingField != 0) {
            return;
          }
          pPVar4 = (this->fields).rayParticles;
          if (pPVar4 != (ParticleSystem *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               ((Component *)pPVar4,(MethodInfo *)0x0);
            pVVar8 = PickUpItemHealRay_CalculateParticlesRotation
                               ((Vector3 *)&puStack_9,this,(MethodInfo *)0x0);
            uVar10 = pVVar8->x;
            uVar11 = pVVar8->y;
            instigatorActorNr = 0;
            this = (PickUpItemHealRay *)pVVar8->z;
            fVar12 = (float)uVar11;
            forward.x = (float)uVar10;
            forward = (Vector3)CONCAT84(uVar13,forward.x);
            pQVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                                ((Quaternion *)&stack0xffffffe4,forward,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              method = (MethodInfo *)pQVar14->x;
              fStack15 = pQVar14->y;
              fStack16 = pQVar14->z;
              fStack17 = pQVar14->w;
              instigatorActorNr = (int32_t)pTVar3;
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (pTVar3,*pQVar14,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
    (this->fields).isShooting = 1;
    fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this->fields).rayStartTime = fVar6;
    return;
  }
code_?:
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_TriggerEnd
               (PickUpItemHealRay *this,MethodInfo *method)

{
  this_01 = this;
  pPVar1 = (this->fields).rayParticles;
  (this->fields).isLockedOn = 0;
  if (pPVar1 != (ParticleSystem *)0x0) {
    this = (PickUpItemHealRay *)
           UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
           ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
    UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+EmissionModule::
    ParticleSystem_EmissionModule_set_enabled_Injected
              ((ParticleSystem_EmissionModule *)&this,0,(MethodInfo *)0x0);
    this_00 = (PickUpItemHealRay *)(this_01->fields).audioSource;
    (this_01->fields).isShooting = 0;
    if (this_00 != (PickUpItemHealRay *)0x0) {
      method = (MethodInfo *)0x0;
      this = this_00;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop_1
                ((AudioSource *)this_00,(MethodInfo *)0x0);
      this = (PickUpItemHealRay *)&(this_01->fields).stuckObject;
      (this_01->fields).stuckObject = (GameObject *)0x0;
      method = (MethodInfo *)0x0;
      func_?();
      pPVar1 = (this_01->fields).hitParticles;
      (this_01->fields).damageRay = 0;
      if (pPVar1 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar1,(MethodInfo *)0x0);
        pMVar2 = (this_01->fields)._.owner;
        if (pMVar2 != (MVPickupOwner *)0x0) {
          if ((pMVar2->fields)._IsLocal_k__BackingField != 0) {
            method = (MethodInfo *)0x0;
            this = (PickUpItemHealRay *)0xffffffff;
            PickUpItemHealRay_UpdateItemState(this_01,-1,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void TryHealTarget(InteractionDataHandlerBase) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_TryHealTarget
               (PickUpItemHealRay *this,InteractionDataHandlerBase *interactionHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                   );
    func_?(&TypeInfo__MVAvatarLocal);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)interactionHandler,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 != 0) {
    if ((this->fields).isLockedOn != 0) {
      (*(code *)(this->klass->vtable).TriggerEnd.method)
                (this,(this->klass->vtable).OnStateChanged.methodPtr);
      return;
    }
    return;
  }
  pIVar2 = HealRayHitPackage::HealRayHitPackage_Create
                     ((InteractionData *)&stack0xffffffe8,(MethodInfo *)0x0);
  if (interactionHandler != (InteractionDataHandlerBase *)0x0) {
    InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
              (interactionHandler,*pIVar2,0,(MethodInfo *)0x0);
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar3->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
      iVar4 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
      if (iVar4 < 2) {
        return;
      }
      pMVar5 = (this->fields)._.owner;
      if (pMVar5 != (MVPickupOwner *)0x0) {
        pMVar6 = (pMVar5->fields)._.worldObjectParent;
        if (pMVar6 == (MVWorldObjectClient *)0x0) {
          return;
        }
        if ((pMVar6->klass->_1).naturalAligment < (TypeInfo__MVAvatarLocal->_1).naturalAligment) {
          return;
        }
        if ((MVAvatarLocal__Class *)
            (pMVar6->klass->_1).typeHierarchy[(TypeInfo__MVAvatarLocal->_1).naturalAligment - 1] !=
            TypeInfo__MVAvatarLocal) {
          return;
        }
        this_02 = MVGameControllerBase::MVGameControllerBase_get_LocalPlayer((MethodInfo *)0x0);
        otherTeam = (*(code *)(interactionHandler->klass->vtable).__unknown.method)();
        if (this_02 != (MVLocalPlayer *)0x0) {
          bVar1 = MVPlayer::MVPlayer_IsOnTeam((MVPlayer *)this_02,otherTeam,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            return;
          }
          this_01 = (pMVar6->fields).gameObject;
          if ((this_01 != (GameObject *)0x0) &&
             (pOVar7 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                       GameObject_GetComponent_1
                                 (this_01,
                                  MVInteractableBase_MethodInfo__UnityEngine__GameObject__GetComponent<MVInteractableBase>__
                                 ), pOVar7 != (Object *)0x0)) {
            (**(code **)&pOVar7->klass[1]._0.this_arg.attrs)();
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_Update
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  PickUpItemHealRay_UpdateRaysVisualRepresentation(this,(MethodInfo *)0x0);
  if ((this->fields).isShooting == 0) {
    return;
  }
  pAVar1 = (this->fields).audioSource;
  if (pAVar1 != (AudioSource *)0x0) {
    bVar2 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_isPlaying
                       (pAVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pAVar1 = (this->fields).audioSource;
      if (pAVar1 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (pAVar1,(MethodInfo *)0x0);
    }
    pPVar3 = (this->fields).rayParticles;
    if (pPVar3 != (ParticleSystem *)0x0) {
      bVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_isPlaying(pPVar3,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        pPVar3 = (this->fields).rayParticles;
        if (pPVar3 == (ParticleSystem *)0x0) goto code_?;
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                  (pPVar3,(MethodInfo *)0x0);
      }
      pMVar4 = (this->fields)._.owner;
      if (pMVar4 != (MVPickupOwner *)0x0) {
        if ((pMVar4->fields)._IsLocal_k__BackingField != 0) {
          fVar5 = (this->fields).elapsedUpdateWaitTime;
          fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                             ((MethodInfo *)0x0);
          fVar6 = fVar6 + fVar5;
          bVar7 = _UNK_? <= fVar6;
          (this->fields).elapsedUpdateWaitTime = fVar6;
          if (bVar7) {
            (this->fields).elapsedUpdateWaitTime = 0.0;
            PickUpItemHealRay_DoHealing(this,(MethodInfo *)0x0);
          }
          PickUpItemHealRay_DoAmmoDepletion(this,(MethodInfo *)0x0);
          return;
        }
        if ((this->fields).isLockedOn == 0) {
          PickUpItemHealRay_LerpRaysVisualRepresentation(this,(MethodInfo *)0x0);
        }
        x = (this->fields).stuckObject;
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                           ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          pPVar3 = (this->fields).rayParticles;
          if ((pPVar3 != (ParticleSystem *)0x0) &&
             (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pPVar3,(MethodInfo *)0x0),
             this_00 != (Transform *)0x0)) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
            uVar9._0_4_ = pVVar8->x;
            uVar9._4_4_ = pVVar8->y;
            fVar5 = pVVar8->z;
code_?:
            direction.z = fVar5;
            direction.x = (float)(int)uVar9;
            direction.y = (float)(int)((ulonglong)uVar9 >> 0x20);
            PickUpItemHealRay_UpdateRaycastRemotely(this,direction,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pVVar8 = PickUpItemHealRay_CalculateStuckPosition
                              ((Vector3 *)&stack0xffffffe4,this,(MethodInfo *)0x0);
          uVar10 = pVVar8->x;
          uVar11 = pVVar8->y;
          pMVar4 = (this->fields)._.owner;
          if (pMVar4 != (MVPickupOwner *)0x0) {
            uVar12 = (pMVar4->fields).lookOrigin.x;
            uVar13 = (pMVar4->fields).lookOrigin.y;
            fVar5 = pVVar8->z - (pMVar4->fields).lookOrigin.z;
            uVar9 = CONCAT44((float)uVar11 - (float)uVar13,(float)uVar10 - (float)uVar12);
            goto code_?;
          }
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


/* Void UpdateHitParticles(Vector3, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateHitParticles
               (PickUpItemHealRay *this,Vector3 firingDirection,Vector3 hitPosition,
               MethodInfo *method)

{
  pPVar1 = (this->fields).hitParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pPVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,hitPosition,(MethodInfo *)0x0);
      pPVar1 = (this->fields).hitParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pPVar1,(MethodInfo *)0x0);
        forward.y = (float)((uint)firingDirection.y ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        forward.x = (float)((uint)firingDirection.x ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        forward.z = (float)((uint)firingDirection.z ^
                           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field)
        ;
        pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffec,forward,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar2,*pQVar3,(MethodInfo *)0x0);
          pPVar1 = (this->fields).hitParticles;
          if (pPVar1 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                      (pPVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateItemState(Int32) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateItemState
               (PickUpItemHealRay *this,int32_t stuckObjectId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&TypeInfo__ICurrentItemOwner);
    func_?(&StringLiteral_S);
    func_?(&StringLiteral_HealRay_holder_);
    func_?(&StringLiteral__is_not_a_ICurrentItemOwner__Thi);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    iVar2 = func_?((pMVar1->fields)._.worldObjectParent,TypeInfo__ICurrentItemOwner);
    pIVar3 = TypeInfo__ICurrentItemOwner;
    unaff_ESI = (MVWorldObjectClient *)(this->fields)._.owner;
    if (iVar2 == 0) {
      if (((unaff_ESI != (MVWorldObjectClient *)0x0) &&
          (pMVar4 = (((MVPickupOwner__Fields *)&unaff_ESI->fields)->_).worldObjectParent,
          pMVar4 != (MVWorldObjectClient *)0x0)) &&
         (this_00 = (pMVar4->fields).gameObject, this_00 != (GameObject *)0x0)) {
        pSVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                           ((Object_1 *)this_00,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_4
                           (StringLiteral_HealRay_holder_,pSVar5,
                            StringLiteral__is_not_a_ICurrentItemOwner__Thi,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogWarning
                  ((Object *)pSVar5,(MethodInfo *)0x0);
        return;
      }
    }
    else if (unaff_ESI != (MVWorldObjectClient *)0x0) {
      unaff_ESI = (((MVPickupOwner__Fields *)&unaff_ESI->fields)->_).worldObjectParent;
      unaff_EDI = TypeInfo__ICurrentItemOwner;
      if (unaff_ESI != (MVWorldObjectClient *)0x0) {
        iVar2 = func_?(unaff_ESI,TypeInfo__ICurrentItemOwner);
        pIVar6 = TypeInfo__ICurrentItemOwner;
        if (iVar2 == 0) goto code_?;
        piVar7 = (int *)func_?(unaff_ESI,TypeInfo__ICurrentItemOwner);
        pIVar3 = pIVar6;
        if (piVar7 == (int *)0x0) goto code_?;
        uVar8 = 0;
        uVar9 = *(ushort *)(*piVar7 + 0xb6);
        if (uVar9 != 0) {
          do {
            if (*(ICurrentItemOwner__Class **)(*(int *)(*piVar7 + 0x58) + (uint)uVar8 * 8) ==
                TypeInfo__ICurrentItemOwner) {
              puVar10 = (undefined4 *)
                        (*piVar7 +
                        (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar8 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar8 = uVar8 + 1;
          } while (uVar8 < uVar9);
        }
        puVar10 = (undefined4 *)func_?(piVar7,TypeInfo__ICurrentItemOwner,0);
code_?:
        this_01 = (PickUpItemHealRay *)(*(code *)*puVar10)(piVar7,puVar10[1]);
        unaff_EDI = (ICurrentItemOwner__Class *)StringLiteral_S;
        if (cRam_? == '\0') {
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                         );
          func_?(&
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                         );
          func_?(&TypeInfo__System__Int32);
          cRam_? = '\x01';
        }
        unaff_ESI = (MVWorldObjectClient *)0x0;
        if (this_01 != (PickUpItemHealRay *)0x0) {
          bVar11 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::TextureId]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                            ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01
                             ,(Object *)unaff_EDI,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          ppppuStack_8 = &ppppuStack_8;
          if (bVar11 == 0) {
            pOVar12 = (Object *)func_?(TypeInfo__System__Int32);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)unaff_EDI,
                       pOVar12,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          else {
            pOVar12 = (Object *)func_?(TypeInfo__System__Int32);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__set_Item
                      ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)unaff_EDI,
                       pOVar12,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          PickUpItemHealRay_SyncState
                    (this_01,(Dictionary_2_System_Object_System_Object_ *)this_01,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  func_?();
  pIVar3 = unaff_EDI;
code_?:
  func_?(unaff_ESI,pIVar3);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void UpdateRayHealingLogic(VoxelHit) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRayHealingLogic
               (PickUpItemHealRay *this,VoxelHit hitVoxel,MethodInfo *method)

{
  pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                     ((Transform *)hitVoxel.collider,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    pIVar2 = (InteractionDataHandlerBase *)0x0;
  }
  else {
    pIVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                       (pMVar1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pIVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    this = (PickUpItemHealRay *)
           MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (this != (PickUpItemHealRay *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                     ((MVWorldObjectClientManager *)this,hitVoxel._36_4_,
                      int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                     );
      this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClientManager *)0x0) {
        pMVar1 = (MVWorldObjectClient *)
                 MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                           (this_00,id,(MethodInfo *)0x0);
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          pIVar2 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                             (pMVar1,(MethodInfo *)0x0);
          PickUpItemHealRay_TryHealTarget(this,pIVar2,(MethodInfo *)0x0);
          return;
        }
        pIVar2 = (InteractionDataHandlerBase *)0x0;
        goto code_?;
      }
    }
    func_?();
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
code_?:
  PickUpItemHealRay_TryHealTarget(this,pIVar2,(MethodInfo *)0x0);
  return;
}


/* Void UpdateRayParticleEffect(VoxelHit, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRayParticleEffect
               (PickUpItemHealRay *this,VoxelHit hitVoxel,Vector3 direction,MethodInfo *method)

{
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    uStack_2._0_4_ = (pMVar1->fields).lookOrigin.x;
    uStack_2._4_4_ = (pMVar1->fields).lookOrigin.y;
    fStack_3 = (pMVar1->fields).lookOrigin.z;
    if ((this->fields).isLockedOn == 0) {
      pTVar4 = (this->fields)._.muzzlePoint;
      if (pTVar4 == (Transform *)0x0) goto code_?;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffcc,pTVar4,(MethodInfo *)0x0);
      uVar6 = pVVar5->x;
      uVar7 = pVVar5->y;
      fStack_3 = pVVar5->z - direction.y * _UNK_?;
      uStack_2 = CONCAT44((float)uVar7 - direction.x * _UNK_?,
                           (float)uVar6 - hitVoxel.interactionFlags._4_4_ * _UNK_?);
    }
    fVar8 = (float)uStack_2 + hitVoxel.interactionFlags._4_4_ * (float)hitVoxel.cube;
    uStack_2._4_4_ = uStack_2._4_4_ + direction.x * (float)hitVoxel.cube;
    fStack_3 = fStack_3 + direction.y * (float)hitVoxel.cube;
    pTVar4 = (this->fields)._.muzzlePoint;
    if (pTVar4 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                ((Vector3 *)&stack0xffffffcc,pTVar4,(MethodInfo *)0x0);
      fVar9 = (float10)func_?(&stack0xffffffd8);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      uStack_2._0_4_ = fVar8;
      if (((this->fields).isLockedOn == 0) &&
         (pMVar1 = (this->fields)._.owner, pMVar1 != (MVPickupOwner *)0x0)) {
        pMVar10 = pMVar1->klass;
        if (((TypeInfo__VehiclePickupOwner->_1).naturalAligment <= (pMVar10->_1).naturalAligment) &&
           ((pMVar10->_1).typeHierarchy[(TypeInfo__VehiclePickupOwner->_1).naturalAligment - 1] ==
            (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
          pMVar1 = (this->fields)._.owner;
          uVar11 = (pMVar1->fields).lookOrigin.x;
          uVar12 = (pMVar1->fields).lookOrigin.y;
          uStack_2._0_4_ = (float)uVar11 + hitVoxel.interactionFlags._4_4_ * (float)hitVoxel.cube;
          fStack_3 = (pMVar1->fields).lookOrigin.z + direction.y * (float)hitVoxel.cube;
          uStack_2._4_4_ = (float)uVar12 + direction.x * (float)hitVoxel.cube;
        }
      }
      hitPosition.y = uStack_2._4_4_;
      hitPosition.x = (float)uStack_2;
      hitPosition.z = fStack_3;
      firingDirection.y = direction.x;
      firingDirection.x = hitVoxel.interactionFlags._4_4_;
      firingDirection.z = direction.y;
      PickUpItemHealRay_OnHitParticleUpdate
                (this,hitPosition,firingDirection,(float)fVar9,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* PickUpItemHealRay+RayCastData UpdateRaycastLocally(Vector3) */

PickUpItemHealRay_RayCastData *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaycastLocally
          (PickUpItemHealRay_RayCastData *__return_storage_ptr__,PickUpItemHealRay *this,
          Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    cRam_? = '\x01';
  }
  func_?(__return_storage_ptr__,0,0x60);
  fVar1 = direction.z;
  VVar2.z = direction.z;
  VVar2.x = direction.x;
  VVar2.y = direction.y;
  bVar3 = PickUpItemHealRay_IsDirectionValid(this,VVar2,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    value.z = fVar1;
    value.x = direction.x;
    value.y = direction.y;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        (&direction,value,(MethodInfo *)0x0);
    fVar5 = pVVar4->y;
    fVar1 = pVVar4->z;
    VVar2 = *pVVar4;
    (__return_storage_ptr__->Direction).x = pVVar4->x;
    (__return_storage_ptr__->Direction).y = fVar5;
    (__return_storage_ptr__->Direction).z = fVar1;
    hitVoxels = PickUpItemHealRay_DoRaycast(this,VVar2,(MethodInfo *)0x0);
    if (hitVoxels == (List_1_VoxelHit_ *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      pPVar7 = (PickUpItemHealRay_RayCastData *)(*pcVar6)();
      return pPVar7;
    }
    if (0 < (hitVoxels->fields)._size) {
      pVVar8 = PickUpItemHealRay_CalculateClosestVoxelHit
                          ((VoxelHit *)&stack0xffffffb4,this,hitVoxels,(MethodInfo *)0x0);
      fVar1 = (pVVar8->point).y;
      fVar5 = (pVVar8->point).z;
      fVar9 = (pVVar8->normal).x;
      fVar10 = (pVVar8->normal).y;
      fVar11 = (pVVar8->normal).z;
      iVar12 = (pVVar8->cubePos).x;
      iVar13 = (pVVar8->cubePos).y;
      uVar14 = *(undefined4 *)&(pVVar8->cubePos).z;
      iVar15 = pVVar8->face;
      bVar3 = pVVar8->isCubeHit;
      uVar16 = *(undefined3 *)&pVVar8->field_0x25;
      iVar17 = pVVar8->woId;
      pCVar18 = pVVar8->cube;
      fVar19 = pVVar8->distance;
      pCVar20 = pVVar8->collider;
      pTVar21 = pVVar8->transform;
      uVar22 = *(undefined4 *)&pVVar8->field_0x3c;
      iVar23 = pVVar8->interactionFlags;
      (__return_storage_ptr__->HitVoxel).point.x = (pVVar8->point).x;
      (__return_storage_ptr__->HitVoxel).point.y = fVar1;
      (__return_storage_ptr__->HitVoxel).point.z = fVar5;
      (__return_storage_ptr__->HitVoxel).normal.x = fVar9;
      (__return_storage_ptr__->HitVoxel).normal.y = fVar10;
      (__return_storage_ptr__->HitVoxel).normal.z = fVar11;
      (__return_storage_ptr__->HitVoxel).cubePos.x = iVar12;
      (__return_storage_ptr__->HitVoxel).cubePos.y = iVar13;
      *(undefined4 *)&(__return_storage_ptr__->HitVoxel).cubePos.z = uVar14;
      (__return_storage_ptr__->HitVoxel).face = iVar15;
      (__return_storage_ptr__->HitVoxel).isCubeHit = bVar3;
      *(undefined3 *)&(__return_storage_ptr__->HitVoxel).field_0x25 = uVar16;
      (__return_storage_ptr__->HitVoxel).woId = iVar17;
      (__return_storage_ptr__->HitVoxel).cube = pCVar18;
      (__return_storage_ptr__->HitVoxel).distance = fVar19;
      (__return_storage_ptr__->HitVoxel).collider = pCVar20;
      (__return_storage_ptr__->HitVoxel).transform = pTVar21;
      *(undefined4 *)&(__return_storage_ptr__->HitVoxel).field_0x3c = uVar22;
      (__return_storage_ptr__->HitVoxel).interactionFlags = iVar23;
      func_?();
      __return_storage_ptr__->Status = ((this->fields).isLockedOn != 0) + 1;
      return __return_storage_ptr__;
    }
  }
  __return_storage_ptr__->Status = 0;
  return __return_storage_ptr__;
}


/* Void UpdateRaycastRemotely(Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaycastRemotely
               (PickUpItemHealRay *this,Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stuckObject;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    pGVar1 = (this->fields).stuckObject;
    if (pGVar1 != (GameObject *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (pGVar1,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            (&VStack_5,pTVar3,(MethodInfo *)0x0);
        uStack_6._0_4_ = pVVar4->x;
        uStack_6._4_4_ = pVVar4->y;
        fStack_7 = pVVar4->z;
        pTVar3 = (this->fields)._.muzzlePoint;
        if (pTVar3 != (Transform *)0x0) {
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              (&VStack_8,pTVar3,(MethodInfo *)0x0);
          uVar9 = pVVar4->x;
          uVar10 = pVVar4->y;
          fStack_7 = fStack_7 - pVVar4->z;
          VStack_5.y = uStack_6._4_4_ - (float)uVar10;
          VStack_5.x = (float)uStack_6 - (float)uVar9;
          VStack_5.z = fStack_7;
          fVar11 = (float10)func_?();
          pGVar1 = (this->fields).stuckObject;
          if (pGVar1 != (GameObject *)0x0) {
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar1,(MethodInfo *)0x0);
            if (pTVar3 != (Transform *)0x0) {
              pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_8,pTVar3,(MethodInfo *)0x0);
              PickUpItemHealRay_OnHitParticleUpdate
                        (this,*pVVar4,direction,(float)fVar11,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  else {
    hitVoxels = PickUpItemHealRay_DoRaycast(this,direction,(MethodInfo *)0x0);
    if (hitVoxels != (List_1_VoxelHit_ *)0x0) {
      if ((hitVoxels->fields)._size < 1) {
        pPVar12 = (this->fields).rayParticles;
        if (pPVar12 != (ParticleSystem *)0x0) {
          PStack_13.m_ParticleSystem =
               (ParticleSystem *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision(pPVar12,(MethodInfo *)0x0);
          if ((this->fields).isLockedOn == 0) {
            fVar14 = (this->fields).maxRayRange;
          }
          else {
            fVar14 = (this->fields).maxLockOnRange;
          }
          fStack_15 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
                      ParticleSystem_MainModule_get_startSpeedMultiplier_Injected
                                (&PStack_13,(MethodInfo *)0x0);
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
          ParticleSystem_MainModule_set_startLifetimeMultiplier_Injected
                    (&PStack_13,fVar14 / fStack_15,(MethodInfo *)0x0);
          pPVar12 = (this->fields).hitParticles;
          if (pPVar12 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                      (pPVar12,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pVVar16 = PickUpItemHealRay_CalculateClosestVoxelHit
                            ((VoxelHit *)&stack0xffffff40,this,hitVoxels,(MethodInfo *)0x0);
        fVar14 = pVVar16->distance;
        pMVar17 = (this->fields)._.owner;
        if (pMVar17 != (MVPickupOwner *)0x0) {
          VStack_5.x = (pMVar17->fields).lookOrigin.x;
          VStack_5.y = (pMVar17->fields).lookOrigin.y;
          VStack_5.z = (pMVar17->fields).lookOrigin.z + direction.z * fVar14;
          hitPosition.y = VStack_5.y + direction.y * fVar14;
          hitPosition.x = VStack_5.x + direction.x * fVar14;
          hitPosition.z = VStack_5.z;
          PickUpItemHealRay_OnHitParticleUpdate(this,hitPosition,direction,fVar14,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* Void UpdateRaysVisualRepresentation() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaysVisualRepresentation
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__PickUpItemHealRay);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).rayParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    PStack_2.m_ParticleSystem =
         (ParticleSystem *)
         UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
         ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
    x = (this->fields).stuckObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 == 0) {
      color.g = (float)_UNK_?;
      color.r = (float)_UNK_?;
      color.b = (float)_UNK_?;
      color.a = _UNK_?;
      pPVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                ParticleSystem_MinMaxGradient_op_Implicit(&PStack_5,color,(MethodInfo *)0x0);
      uVar6 = (pPVar4->m_ColorMax).b;
      uVar7 = pPVar4->m_Mode;
      uVar8 = pPVar4->m_GradientMin;
      uVar9 = pPVar4->m_GradientMax;
      uVar10 = (pPVar4->m_ColorMin).r;
      uVar11 = (pPVar4->m_ColorMin).g;
      uVar12 = (pPVar4->m_ColorMin).b;
      uVar13 = (pPVar4->m_ColorMin).a;
      value.m_ColorMin.a = (float)uVar13;
      value.m_ColorMin.b = (float)uVar12;
      value.m_ColorMin.g = (float)uVar11;
      value.m_ColorMin.r = (float)uVar10;
      uVar14 = (pPVar4->m_ColorMax).r;
      uVar15 = (pPVar4->m_ColorMax).g;
      value.m_ColorMax.g = (float)uVar15;
      value.m_ColorMax.r = (float)uVar14;
      value.m_GradientMax = (Gradient *)uVar9;
      value.m_GradientMin = (Gradient *)uVar8;
      value.m_Mode = uVar7;
      value.m_ColorMax.b = (float)uVar6;
      value.m_ColorMax.a = (pPVar4->m_ColorMax).a;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startColor(&PStack_2,value,(MethodInfo *)0x0);
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
      ParticleSystem_MainModule_set_startSizeMultiplier_Injected(&PStack_2,0.3,(MethodInfo *)0x0);
      pAVar16 = (this->fields).audioSource;
      if (pAVar16 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar16,1.0,(MethodInfo *)0x0);
        pMVar17 = (this->fields)._.owner;
        if (pMVar17 != (MVPickupOwner *)0x0) {
          if (((pMVar17->fields)._IsLocal_k__BackingField == 0) || ((this->fields).isShooting == 0))
          {
            return;
          }
          pPVar1 = (this->fields).rayParticles;
          if (pPVar1 != (ParticleSystem *)0x0) {
            this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pPVar1,(MethodInfo *)0x0);
            pTVar18 = (this->fields)._.muzzlePoint;
            if (pTVar18 != (Transform *)0x0) {
              pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_20,pTVar18,(MethodInfo *)0x0);
              uStack_21._0_4_ = pVVar19->x;
              uStack_21._4_4_ = pVVar19->y;
              fStack_22 = pVVar19->z;
              pVVar19 = PickUpItemHealRay_CalculateParticlesRotation
                                  (&VStack_23,this,(MethodInfo *)0x0);
              uVar24 = pVVar19->x;
              uVar25 = pVVar19->y;
              VStack_20.z = pVVar19->z;
              fVar26 = (float)uVar24 + (float)uStack_21;
              uStack_21._4_4_ = (float)uVar25 + uStack_21._4_4_;
              fStack_22 = VStack_20.z + fStack_22;
              uStack_21 = CONCAT44(uStack_21._4_4_,fVar26);
              VStack_20.x = (float)uVar24;
              VStack_20.y = (float)uVar25;
              if (this_00 != (Transform *)0x0) {
                worldPosition_00.y = uStack_21._4_4_;
                worldPosition_00.x = fVar26;
                worldPosition_00.z = fStack_22;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                          (this_00,worldPosition_00,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pVVar19 = PickUpItemHealRay_CalculateStuckPosition(&VStack_23,this,(MethodInfo *)0x0);
      uVar27 = pVVar19->x;
      uVar28 = pVVar19->y;
      fVar26 = pVVar19->z;
      pPVar1 = (this->fields).rayParticles;
      VStack_20.y = (float)uVar27;
      VStack_20.z = (float)uVar28;
      if ((pPVar1 != (ParticleSystem *)0x0) &&
         (pTVar18 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pPVar1,(MethodInfo *)0x0), pTVar18 != (Transform *)0x0))
      {
        worldPosition.y = VStack_20.z;
        worldPosition.x = VStack_20.y;
        worldPosition.z = fVar26;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                  (pTVar18,worldPosition,(MethodInfo *)0x0);
        if ((this->fields).damageRay == 0) {
          if ((TypeInfo__PickUpItemHealRay->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__PickUpItemHealRay);
          }
          pPVar29 = TypeInfo__PickUpItemHealRay->static_fields;
          fVar26 = (pPVar29->lockOnColorHealing).r;
          fVar30 = (pPVar29->lockOnColorHealing).g;
          fVar31 = (pPVar29->lockOnColorHealing).b;
          fVar32 = (pPVar29->lockOnColorHealing).a;
        }
        else {
          if ((TypeInfo__PickUpItemHealRay->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__PickUpItemHealRay);
          }
          pPVar29 = TypeInfo__PickUpItemHealRay->static_fields;
          fVar26 = (pPVar29->lockOnColorDamaging).r;
          fVar30 = (pPVar29->lockOnColorDamaging).g;
          fVar31 = (pPVar29->lockOnColorDamaging).b;
          fVar32 = (pPVar29->lockOnColorDamaging).a;
        }
        color_00.g = fVar30;
        color_00.r = fVar26;
        color_00.b = fVar31;
        color_00.a = fVar32;
        pPVar4 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                  ParticleSystem_MinMaxGradient_op_Implicit(&PStack_5,color_00,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startColor(&PStack_2,*pPVar4,(MethodInfo *)0x0);
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
        ParticleSystem_MainModule_set_startSizeMultiplier_Injected(&PStack_2,0.4,(MethodInfo *)0x0);
        pAVar16 = (this->fields).audioSource;
        if (pAVar16 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (pAVar16,2.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar33 = (code *)swi(3);
  (*pcVar33)();
  return;
}


/* Void UpdateStuckObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateStuckObject
               (PickUpItemHealRay *this,MVWorldObjectClient *hitObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IHealRayAttachementObject);
    cRam_? = '\x01';
  }
  if (hitObject != (MVWorldObjectClient *)0x0) {
    pGVar1 = (hitObject->fields).gameObject;
    (this->fields).stuckObject = pGVar1;
    func_?(&(this->fields).stuckObject,pGVar1);
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (this_00 = (pMVar2->fields).teamManager, this_00 != (MVTeamManager *)0x0)) {
      iVar3 = MVTeamManager::MVTeamManager_TeamCount(this_00,(MethodInfo *)0x0);
      if (iVar3 < 2) {
        bVar4 = 0;
      }
      else {
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 == (MVNetworkGame *)0x0) ||
           (this_01 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(pMVar2,(MethodInfo *)0x0),
           this_01 == (MVLocalPlayer *)0x0)) goto code_?;
        bVar5 = MVPlayer::MVPlayer_IsOnSameTeam_1((MVPlayer *)this_01,hitObject,(MethodInfo *)0x0);
        bVar4 = bVar5 ^ 1;
      }
      (this->fields).damageRay = bVar4;
      iVar6 = func_?(hitObject,TypeInfo__IHealRayAttachementObject);
      unaff_EBX = TypeInfo__IHealRayAttachementObject;
      if (iVar6 == 0) {
        return;
      }
      iVar6 = func_?(hitObject,TypeInfo__IHealRayAttachementObject);
      pIVar7 = TypeInfo__IHealRayAttachementObject;
      if ((iVar6 != 0) &&
         (iVar6 = func_?(hitObject,TypeInfo__IHealRayAttachementObject), unaff_EBX = pIVar7
         , iVar6 != 0)) {
        pGVar1 = (GameObject *)func_?(0,TypeInfo__IHealRayAttachementObject,iVar6);
        (this->fields).stuckObject = pGVar1;
        func_?(&(this->fields).stuckObject,pGVar1);
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
code_?:
  func_?(hitObject,unaff_EBX);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* PickUpItemHealRay() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickUpItemHealRay);
    cRam_? = '\x01';
  }
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  pPVar4 = TypeInfo__PickUpItemHealRay->static_fields;
  (pPVar4->lockOnColorHealing).r = _UNK_?;
  (pPVar4->lockOnColorHealing).g = fVar3;
  (pPVar4->lockOnColorHealing).b = fVar2;
  (pPVar4->lockOnColorHealing).a = fVar1;
  fVar1 = _UNK_?;
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  pPVar4 = TypeInfo__PickUpItemHealRay->static_fields;
  (pPVar4->lockOnColorDamaging).r = _UNK_?;
  (pPVar4->lockOnColorDamaging).g = fVar3;
  (pPVar4->lockOnColorDamaging).b = fVar2;
  (pPVar4->lockOnColorDamaging).a = fVar1;
  return;
}


/* PickUpItemHealRay() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay__ctor
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  (this->fields).maxRayRange = 20.0;
  (this->fields).maxLockOnRange = 25.0;
  (this->fields).rayMinimumChargeTime = 0.5;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,0.0,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).currentAmmoLeft.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).currentAmmoLeft.hiddenValue = AVar2;
  (this->fields).currentAmmoLeft.hiddenValueOld = pBVar3;
  (this->fields).currentAmmoLeft.fakeValue = fVar4;
  (this->fields).currentAmmoLeft.inited = bVar5;
  *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11 = uVar6;
  func_?(&(this->fields).currentAmmoLeft.hiddenValueOld,0);
  pOVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,100.0,(MethodInfo *)0x0);
  AVar2 = pOVar1->hiddenValue;
  pBVar3 = pOVar1->hiddenValueOld;
  fVar4 = pOVar1->fakeValue;
  bVar5 = pOVar1->inited;
  uVar6 = *(undefined3 *)&pOVar1->field_0x11;
  (this->fields).maxAmmoTime.currentCryptoKey = pOVar1->currentCryptoKey;
  (this->fields).maxAmmoTime.hiddenValue = AVar2;
  (this->fields).maxAmmoTime.hiddenValueOld = pBVar3;
  (this->fields).maxAmmoTime.fakeValue = fVar4;
  (this->fields).maxAmmoTime.inited = bVar5;
  *(undefined3 *)&(this->fields).maxAmmoTime.field_0x11 = uVar6;
  func_?();
  uVar7 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
  p_Var8 = UnityEngine.CoreModule.dll::Unity::Collections::LowLevel::Unsafe::UnsafeUtility::
           UnsafeUtility_AsRef_1((Void *)(~(1 << (uVar7 & 0x1f)) & 0xfffffffb),(MethodInfo *)0x0);
  (this->fields).layers.m_Mask = (int32_t)p_Var8;
  PickupItem::PickupItem__ctor((PickupItem *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_get_Quantity
                  (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentAmmoLeft.currentCryptoKey;
  AVar2 = (this->fields).currentAmmoLeft.hiddenValue;
  pBVar3 = (this->fields).currentAmmoLeft.hiddenValueOld;
  fVar4 = (this->fields).currentAmmoLeft.fakeValue;
  if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_finished_or_no_cctor
      == 0) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar2;
  value.currentCryptoKey = iVar1;
  value.hiddenValueOld = pBVar3;
  value.fakeValue = fVar4;
  value.inited = (this->fields).currentAmmoLeft.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11;
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  fVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1((this->fields).maxAmmoTime,(MethodInfo *)0x0);
  uStack6 = 0;
  fStack7 = (fVar4 / fVar5) * _UNK_?;
  iVar1 = func_?();
  return iVar1;
}

