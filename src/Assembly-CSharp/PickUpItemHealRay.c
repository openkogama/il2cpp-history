
/* Void Awake() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_Awake
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (*(code *)(this->klass->vtable).ResetAmmo.method)
            (this,(this->klass->vtable).OnLeaveVehicleWithWeapon.methodPtr);
  this_00 = (this->fields).rayParticles;
  if (this_00 != (ParticleSystem *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
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
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                         ((Vector3 *)&puStack_6,(MethodInfo *)0x0);
      fVar3 = pVVar5->y;
      fVar2 = pVVar5->z;
      (this->fields).hitOffset.x = pVVar5->x;
      (this->fields).hitOffset.y = fVar3;
      (this->fields).hitOffset.z = fVar2;
      return;
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* VoxelHit CalculateClosestVoxelHit(List`1[VoxelHit]) */

VoxelHit *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateClosestVoxelHit
          (VoxelHit *__return_storage_ptr__,PickUpItemHealRay *this,List_1_VoxelHit_ *hitVoxels,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (hitVoxels != (List_1_VoxelHit_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__get_Item
                       (&VStack_2,hitVoxels,0,
                        MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    fStack_3 = (pVVar1->point).x;
    fStack_4 = (pVVar1->point).y;
    fStack_5 = (pVVar1->point).z;
    fStack_6 = (pVVar1->normal).x;
    fStack_7 = (pVVar1->normal).y;
    fStack_8 = (pVVar1->normal).z;
    fStack_9 = *(float *)&pVVar1->cubePos;
    fStack_10 = *(float *)&(pVVar1->cubePos).z;
    fStack_11 = (float)pVVar1->face;
    fStack_12 = *(float *)&pVVar1->isCubeHit;
    fStack_13 = (float)pVVar1->woId;
    pCStack_14 = pVVar1->cube;
    fStack_15 = pVVar1->distance;
    pCStack_16 = pVVar1->collider;
    pTStack_17 = pVVar1->transform;
    fStack_18 = *(float *)&pVVar1->field_0x3c;
    iStack_19 = pVVar1->interactionFlags;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__get_Item
                       ((VoxelHit *)&stack0xffffff14,hitVoxels,0,
                        MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    index = 1;
    VStack_2.point.x = (pVVar1->point).x;
    VStack_2.point.y = (pVVar1->point).y;
    VStack_2.point.z = (pVVar1->point).z;
    VStack_2.normal.x = (pVVar1->normal).x;
    VStack_2.normal.y = (pVVar1->normal).y;
    VStack_2.normal.z = (pVVar1->normal).z;
    VStack_2.cubePos.x = (pVVar1->cubePos).x;
    VStack_2.cubePos.y = (pVVar1->cubePos).y;
    VStack_2._28_4_ = *(undefined4 *)&(pVVar1->cubePos).z;
    VStack_2.face = pVVar1->face;
    VStack_2.isCubeHit = pVVar1->isCubeHit;
    VStack_2._37_3_ = *(undefined3 *)&pVVar1->field_0x25;
    VStack_2.woId = pVVar1->woId;
    VStack_2.cube = pVVar1->cube;
    fStack_20 = pVVar1->distance;
    pCStack_21 = pVVar1->collider;
    pTStack_22 = pVVar1->transform;
    uStack_23 = *(undefined4 *)&pVVar1->field_0x3c;
    VStack_2.interactionFlags = pVVar1->interactionFlags;
    while( true ) {
      pOVar24 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)hitVoxels,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
      if ((int)pOVar24 <= index) break;
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__get_Item
                         ((VoxelHit *)&stack0xffffff14,hitVoxels,index,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      VStack_2.point.x = (pVVar1->point).x;
      VStack_2.point.y = (pVVar1->point).y;
      VStack_2.point.z = (pVVar1->point).z;
      VStack_2.normal.x = (pVVar1->normal).x;
      VStack_2.normal.y = (pVVar1->normal).y;
      VStack_2.normal.z = (pVVar1->normal).z;
      VStack_2.cubePos.x = (pVVar1->cubePos).x;
      VStack_2.cubePos.y = (pVVar1->cubePos).y;
      VStack_2._28_4_ = *(undefined4 *)&(pVVar1->cubePos).z;
      VStack_2.face = pVVar1->face;
      VStack_2.isCubeHit = pVVar1->isCubeHit;
      VStack_2._37_3_ = *(undefined3 *)&pVVar1->field_0x25;
      VStack_2.woId = pVVar1->woId;
      VStack_2.cube = pVVar1->cube;
      VStack_2.interactionFlags = pVVar1->interactionFlags;
      if (pVVar1->distance < fStack_20) {
        fStack_20 = pVVar1->distance;
        pfVar25 = (float *)func_?();
        fStack_3 = *pfVar25;
        fStack_4 = pfVar25[1];
        fStack_5 = pfVar25[2];
        fStack_6 = pfVar25[3];
        fStack_7 = pfVar25[4];
        fStack_8 = pfVar25[5];
        fStack_9 = pfVar25[6];
        fStack_10 = pfVar25[7];
        fStack_11 = pfVar25[8];
        fStack_12 = pfVar25[9];
        fStack_13 = pfVar25[10];
        pCStack_14 = (Cube *)pfVar25[0xb];
        fStack_15 = pfVar25[0xc];
        pCStack_16 = (Collider *)pfVar25[0xd];
        pTStack_17 = (Transform *)pfVar25[0xe];
        fStack_18 = pfVar25[0xf];
        iStack_19 = *(int64_t *)(pfVar25 + 0x10);
      }
      index = index + 1;
    }
    (__return_storage_ptr__->point).x = fStack_3;
    (__return_storage_ptr__->point).y = fStack_4;
    (__return_storage_ptr__->point).z = fStack_5;
    (__return_storage_ptr__->normal).x = fStack_6;
    (__return_storage_ptr__->normal).y = fStack_7;
    (__return_storage_ptr__->normal).z = fStack_8;
    *(float *)&__return_storage_ptr__->cubePos = fStack_9;
    *(float *)&(__return_storage_ptr__->cubePos).z = fStack_10;
    __return_storage_ptr__->face = (int32_t)fStack_11;
    *(float *)&__return_storage_ptr__->isCubeHit = fStack_12;
    __return_storage_ptr__->woId = (int32_t)fStack_13;
    __return_storage_ptr__->cube = pCStack_14;
    __return_storage_ptr__->distance = fStack_15;
    __return_storage_ptr__->collider = pCStack_16;
    __return_storage_ptr__->transform = pTStack_17;
    *(float *)&__return_storage_ptr__->field_0x3c = fStack_18;
    __return_storage_ptr__->interactionFlags = iStack_19;
    return __return_storage_ptr__;
  }
  func_?(0);
  pcVar26 = (code *)swi(3);
  pVVar1 = (VoxelHit *)(*pcVar26)();
  return pVVar1;
}


/* Void CalculateHitOffset(VoxelHit, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateHitOffset
               (PickUpItemHealRay *this,VoxelHit hitVoxel,Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.owner;
  if (this_00 != (MVPickupOwner *)0x0) {
    pVVar1 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                       (&VStack_2,(InventoryItem_ItemDescription *)this_00,(MethodInfo *)0x0);
    direction_00.y = direction.x;
    direction_00.x = (float)hitVoxel.interactionFlags._4_4_;
    direction_00.z = direction.y;
    pVVar1 = PickUpItemHealRay_CalculateHitPosition
                       ((Vector3 *)&hitVoxel.transform,this,*pVVar1,direction_00,
                        (float)hitVoxel.cube,(MethodInfo *)0x0);
    VStack_2.y = pVVar1->x;
    VStack_2.z = pVVar1->y;
    fVar3 = pVVar1->z;
    this_01 = (this->fields).stuckObject;
    if (this_01 != (GameObject *)0x0) {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (this_01,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        hitVoxel.point.y = 0.0;
        hitVoxel.point.x = (float)this_02;
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_4,this_02,(MethodInfo *)0x0);
        hitVoxel._60_8_ = *(undefined8 *)pVVar1;
        fVar5 = pVVar1->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          hitVoxel.normal.y = (float)TypeInfo__UnityEngine__Vector3;
          hitVoxel.normal.x = (float)&UNK_?;
          func_?();
        }
        hitVoxel.normal.y = 0.0;
        hitVoxel.point.y = hitVoxel._60_4_;
        hitVoxel.point.z = (float)hitVoxel.interactionFlags;
        a.z = fVar3;
        a.x = VStack_2.y;
        a.y = VStack_2.z;
        b.z = fVar5;
        b._0_8_ = hitVoxel._60_8_;
        hitVoxel.point.x = fVar3;
        hitVoxel.normal.x = fVar5;
        pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&hitVoxel.transform,a,b,(MethodInfo *)0x0);
        fVar5 = pVVar1->y;
        fVar3 = pVVar1->z;
        (this->fields).hitOffset.x = pVVar1->x;
        (this->fields).hitOffset.y = fVar5;
        (this->fields).hitOffset.z = fVar3;
        return;
      }
    }
  }
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Vector3 CalculateHitPosition(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateHitPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,
                    Vector3 fireFromPosition,Vector3 direction,float distance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  a.z = direction.z;
  a.x = direction.x;
  a.y = direction.y;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                     (&direction,a,distance,(MethodInfo *)0x0);
  uVar2 = pVVar1->x;
  a_00.y = 0.0;
  a_00.x = fireFromPosition.x;
  a_00.z = fireFromPosition.z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                     (&direction,a_00,*pVVar1,(MethodInfo *)0x0);
  fVar3 = pVVar1->z;
  *(undefined8 *)uVar2 = *(undefined8 *)pVVar1;
  *(float *)(uVar2 + 8) = fVar3;
  return (Vector3 *)uVar2;
}


/* Vector3 CalculateParticlesRotation() */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateParticlesRotation
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  pMVar3 = (this->fields)._.owner;
  if (pMVar3 != (MVPickupOwner *)0x0) {
    pVVar4 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                       (&VStack_5,(InventoryItem_ItemDescription *)pMVar3,(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar4->x;
    uStack_6._4_4_ = pVVar4->y;
    fVar7 = pVVar4->z;
    pMVar3 = (this->fields)._.owner;
    if (pMVar3 != (MVPickupOwner *)0x0) {
      pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_8,pMVar3,(MethodInfo *)0x0);
      VStack_5.y = pVVar4->x;
      VStack_5.z = pVVar4->y;
      fVar9 = pVVar4->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        VStack_8.z = (float)TypeInfo__UnityEngine__Vector3;
        VStack_8.y = (float)&UNK_?;
        func_?();
      }
      a.z = fVar9;
      a.x = VStack_5.y;
      a.y = VStack_5.z;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&VStack_8,a,30.0,(MethodInfo *)0x0);
      a_00.z = fVar7;
      a_00.x = (float)(undefined4)uStack_6;
      a_00.y = (float)uStack_6._4_4_;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         (&VStack_8,a_00,*pVVar4,(MethodInfo *)0x0);
      uStack_6._0_4_ = pVVar4->x;
      uStack_6._4_4_ = pVVar4->y;
      fVar7 = pVVar4->z;
      this_00 = (this->fields)._.muzzlePoint;
      if (this_00 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_8,this_00,(MethodInfo *)0x0);
        a_01.z = fVar7;
        a_01.x = (float)(undefined4)uStack_6;
        a_01.y = (float)uStack_6._4_4_;
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           (&VStack_8,a_01,*pVVar4,(MethodInfo *)0x0);
        uStack_1._0_4_ = pVVar4->x;
        uStack_1._4_4_ = pVVar4->y;
        fStack_2 = pVVar4->z;
        puVar10 = (undefined8 *)func_?(&VStack_8,&uStack_1,0);
        uVar11 = *puVar10;
        fVar7 = *(float *)(puVar10 + 1);
        __return_storage_ptr__->x = (float)(int)uVar11;
        __return_storage_ptr__->y = (float)(int)((ulonglong)uVar11 >> 0x20);
        __return_storage_ptr__->z = fVar7;
        return __return_storage_ptr__;
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  pVVar4 = (Vector3 *)(*pcVar12)();
  return pVVar4;
}


/* Vector3 CalculateStuckPosition() */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_CalculateStuckPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).stuckObject;
  if (this_00 != (GameObject *)0x0) {
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                        (this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe8,this_01,(MethodInfo *)0x0);
      uVar2._0_4_ = (this->fields).hitOffset.x;
      uVar2._4_4_ = (this->fields).hitOffset.y;
      fVar3 = (this->fields).hitOffset.z;
      a = *pVVar1;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        puVar4 = &UNK_?;
        pVVar5 = TypeInfo__UnityEngine__Vector3;
        func_?();
        uVar2 = CONCAT44(pVVar5,puVar4);
      }
      b.z = fVar3;
      b.x = (float)(int)uVar2;
      b.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffe8,a,b,(MethodInfo *)0x0);
      fVar6 = pVVar1->y;
      fVar3 = pVVar1->z;
      __return_storage_ptr__->x = pVVar1->x;
      __return_storage_ptr__->y = fVar6;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Void ChangeUsedParticleSystem() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ChangeUsedParticleSystem
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    bVar2 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
    if (((pMVar1->klass->_1).naturalAligment < bVar2) ||
       ((pMVar1->klass->_1).typeHierarchy[bVar2 - 1] != (Il2CppClass *)TypeInfo__VehiclePickupOwner)
       ) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    pMVar4 = (MVPickupOwner *)0x0;
    if (bVar3) {
      pMVar4 = pMVar1;
    }
    if (pMVar4 != (MVPickupOwner *)0x0) {
      pPVar5 = (this->fields).particleRenderer;
      if (pPVar5 != (ParticleSystemRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)pPVar5,(this->fields).normalRayMaterial,(MethodInfo *)0x0);
        (this->fields)._.muzzlePoint = (this->fields).remoteMuzzlePoint;
        (this->fields).rayParticles = (this->fields).remoteParticleSystem;
        return;
      }
      goto code_?;
    }
  }
  (this->fields)._.muzzlePoint = (this->fields).localMuzzePoint;
  (this->fields).rayParticles = (this->fields).localRayParticles;
  pPVar5 = (this->fields).particleRenderer;
  if (pPVar5 != (ParticleSystemRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pPVar5,(this->fields).ZIgnoreMaterial,(MethodInfo *)0x0);
    return;
  }
code_?:
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key_00 = key;
  this_00 = newState;
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    newState = (Dictionary_2_System_Object_System_Object_ *)value;
    if (bVar1 != 0) {
      value_00 = (Theme *)func_?(TypeInfo__System__Int32,&newState);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_00,key_00,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
    value_01 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&newState);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,key_00,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ChangeValueInState(Dictionary`2[System.Object,System.Object], String, Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ChangeValueInState_1
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               String *key,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  key_00 = key;
  this_00 = newState;
  if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                        *)newState,key,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    newState = (Dictionary_2_System_Object_System_Object_ *)value;
    if (bVar1 != 0) {
      value_00 = (Theme *)func_?(TypeInfo__System__Single,&newState);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                ((Dictionary_2_System_String_Theme_ *)this_00,key_00,value_00,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      return;
    }
    value_01 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Single,&newState);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,key_00,value_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    return;
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void DoAmmoDepletion() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoAmmoDepletion
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).isShooting != 0) ||
     (fVar1 = (this->fields).rayMinimumChargeTime, fVar2 = (this->fields).rayStartTime,
     fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0),
     fVar3 <= fVar1 + fVar2)) {
    AStack_4 = (ACTkByte4)(this->fields).currentAmmoLeft.currentCryptoKey;
    AVar5 = (this->fields).currentAmmoLeft.hiddenValue;
    pBVar6 = (this->fields).currentAmmoLeft.hiddenValueOld;
    fVar1 = (this->fields).currentAmmoLeft.fakeValue;
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    value.hiddenValue = AVar5;
    value.currentCryptoKey._0_1_ = AStack_4.b1;
    value.currentCryptoKey._1_1_ = AStack_4.b2;
    value.currentCryptoKey._2_1_ = AStack_4.b3;
    value.currentCryptoKey._3_1_ = AStack_4.b4;
    value.hiddenValueOld = pBVar6;
    value.fakeValue = fVar1;
    value.inited = (this->fields).currentAmmoLeft.inited;
    value._17_3_ = *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11;
    fVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
    fVar2 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0);
    pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit
                       ((ObscuredFloat *)&stack0xffffffe4,fVar1 - fVar2,(MethodInfo *)0x0);
    AVar5 = pOVar7->hiddenValue;
    pBVar6 = pOVar7->hiddenValueOld;
    fVar1 = pOVar7->fakeValue;
    bVar8 = pOVar7->inited;
    uVar9 = *(undefined3 *)&pOVar7->field_0x11;
    (this->fields).currentAmmoLeft.currentCryptoKey = pOVar7->currentCryptoKey;
    (this->fields).currentAmmoLeft.hiddenValue = AVar5;
    (this->fields).currentAmmoLeft.hiddenValueOld = pBVar6;
    (this->fields).currentAmmoLeft.fakeValue = fVar1;
    (this->fields).currentAmmoLeft.inited = bVar8;
    *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11 = uVar9;
    pTVar10 = (this->fields)._.muzzlePoint;
    if (pTVar10 == (Transform *)0x0) goto code_?;
    pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pTVar10,(MethodInfo *)0x0);
    pMVar11 = (this->fields)._.owner;
    if ((pMVar11 == (MVPickupOwner *)0x0) ||
       (pVVar12 = MVPickupOwner::MVPickupOwner_get_LookDirection
                           ((Vector3 *)&stack0xffffffec,pMVar11,(MethodInfo *)0x0),
       pTVar10 == (Transform *)0x0)) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_forward
              (pTVar10,*pVVar12,(MethodInfo *)0x0);
    PickUpItemHealRay_DoFloating(this,(MethodInfo *)0x0);
  }
  cVar13 = (*(code *)(this->klass->vtable).get_IsAmmoDepleted.method)();
  if (cVar13 == '\0') {
    return;
  }
  pMVar11 = (this->fields)._.owner;
  if (pMVar11 != (MVPickupOwner *)0x0) {
    this_00 = (DayNightCycle *)
              System.dll::System::Collections::Generic::
              SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
              Single,System::Object]::
              SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                        ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                          *)pMVar11,(MethodInfo *)0x0);
    if ((this_00 != (DayNightCycle *)0x0) &&
       (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0),
       this_01 != (CelestialParam *)0x0)) {
      x = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                    ((GameObject *)this_01,
                     MVEquipable_MethodInfo__UnityEngine__GameObject__GetComponent<MVEquipable>__);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                        ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar8 != 0) {
        if (x == (UseInteractorHandler *)0x0) goto code_?;
        (*(code *)x->klass[1]._0.namespaze)();
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void DoFloating() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoFloating
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if ((((pMVar1 != (MVPickupOwner *)0x0) &&
       (this_00 = (DayNightCycle *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)pMVar1,(MethodInfo *)0x0), this_00 != (DayNightCycle *)0x0)) &&
      (this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0),
      this_01 != (CelestialParam *)0x0)) &&
     (this_02 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_47
                          ((GameObject *)this_01,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          ), this_02 != (MVRigidBody *)0x0)) {
    cVar2 = (*(code *)(this_02->klass->vtable).__unknown.method)();
    if (cVar2 == '\0') {
      puVar3 = (undefined8 *)(*(code *)(this_02->klass->vtable).__unknown_1.method)();
      fStack_4 = (float)((ulonglong)*puVar3 >> 0x20);
      if (fStack_4 < 0.0) {
        pMVar1 = (this->fields)._.owner;
        if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
        pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection
                           ((Vector3 *)&AStack_6,pMVar1,(MethodInfo *)0x0);
        fVar7 = pVVar5->y;
        if ((((uint)(TypeInfo__MVPhysics->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVPhysics->_1).cctor_started == 0)) {
          func_?();
        }
        pOVar8 = MVPhysics::MVPhysics_get_Gravity
                           ((ObscuredFloat *)&stack0xffffffb4,(MethodInfo *)0x0);
        iVar9 = pOVar8->currentCryptoKey;
        AStack_6 = pOVar8->hiddenValue;
        pBVar10 = pOVar8->hiddenValueOld;
        fVar11 = pOVar8->fakeValue;
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0))
        {
          func_?();
        }
        value.hiddenValue = AStack_6;
        value.currentCryptoKey = iVar9;
        value.hiddenValueOld = pBVar10;
        value.fakeValue = fVar11;
        value.inited = pOVar8->inited;
        value._17_3_ = *(undefined3 *)&pOVar8->field_0x11;
        fVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
                 ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
        fVar12 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                           ((MethodInfo *)0x0);
        fVar7 = fVar12 * fVar7 * fVar11 * _UNK_? * _UNK_?;
        if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Min(fVar7,fStack_4,(MethodInfo *)0x0)
        ;
        func_?();
        MVRigidBody::MVRigidBody_AddImpulse_1(this_02,(Vector3)ZEXT812(0),1,(MethodInfo *)0x0);
      }
    }
    return;
  }
code_?:
  func_?(0);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void DoHealing() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoHealing
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isShooting == 0) {
    fVar1 = (this->fields).rayMinimumChargeTime;
    fVar2 = (this->fields).rayStartTime;
    fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    VStack_4.z = fVar3;
    if (fVar1 + fVar2 < fVar3) {
      return;
    }
  }
  iVar5 = (this->fields).currentAmmoLeft.currentCryptoKey;
  VStack_6.x = *(float *)&(this->fields).currentAmmoLeft.hiddenValue;
  VStack_6.y = (float)(this->fields).currentAmmoLeft.hiddenValueOld;
  VStack_6.z = (this->fields).currentAmmoLeft.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = (ACTkByte4)VStack_6.x;
  value.currentCryptoKey = iVar5;
  value.hiddenValueOld = (Byte__Array *)VStack_6.y;
  value.fakeValue = VStack_6.z;
  value.inited = (this->fields).currentAmmoLeft.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11;
  fVar1 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  if ((_UNK_? < fVar1) ||
     (cVar7 = (*(code *)(this->klass->vtable).get_HasUnlimitedAmmo.method)(), cVar7 != '\0')) {
    x = (this->fields).stuckObject;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?();
    }
    bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                       ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar8 == 0) {
      pMVar9 = (this->fields)._.owner;
      if (pMVar9 == (MVPickupOwner *)0x0) goto code_?;
      pVVar10 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_11,pMVar9,(MethodInfo *)0x0);
    }
    else {
      pVVar10 = PickUpItemHealRay_CalculateStuckPosition(&VStack_4,this,(MethodInfo *)0x0);
      uVar12 = pVVar10->x;
      uVar13 = pVVar10->y;
      fVar1 = pVVar10->z;
      pMVar9 = (this->fields)._.owner;
      VStack_11.y = (float)uVar12;
      VStack_11.z = (float)uVar13;
      if (pMVar9 == (MVPickupOwner *)0x0) goto code_?;
      pVVar10 = InventoryItem+ItemDescription::
                InventoryItem_ItemDescription_get_CameraPreviewerOffset
                          (&VStack_6,(InventoryItem_ItemDescription *)pMVar9,(MethodInfo *)0x0);
      VStack_4.y = pVVar10->x;
      VStack_4.z = pVVar10->y;
      fVar2 = pVVar10->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.y = VStack_11.z;
      a.x = VStack_11.y;
      a.z = fVar1;
      b.z = fVar2;
      b.x = VStack_4.y;
      b.y = VStack_4.z;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          (&VStack_6,a,b,(MethodInfo *)0x0);
    }
    VStack_4.y = pVVar10->x;
    VStack_4.z = pVVar10->y;
    VStack_11.z = pVVar10->z;
    VStack_11.x = VStack_4.y;
    VStack_11.y = VStack_4.z;
    if (cRam_? == '\0') {
      func_?();
      VStack_4.z = VStack_11.y;
      VStack_4.y = VStack_11.x;
      cRam_? = '\x01';
    }
    fVar1 = VStack_11.z;
    func_?();
    direction.z = fVar1;
    direction.x = VStack_4.y;
    direction.y = VStack_4.z;
    bVar8 = PickUpItemHealRay_IsDirectionValid(this,direction,(MethodInfo *)0x0);
    if (bVar8 != 0) {
      pVVar10 = (Vector3 *)func_?();
      uVar14 = pVVar10->x;
      uVar15 = pVVar10->y;
      VStack_11.z = pVVar10->z;
      fStack_16 = pVVar10->z;
      uStack_17._0_4_ = pVVar10->x;
      uStack_17._4_4_ = pVVar10->y;
      VStack_11.x = (float)uVar14;
      VStack_11.y = (float)uVar15;
      hitVoxels = PickUpItemHealRay_DoRaycast(this,*pVVar10,(MethodInfo *)0x0);
      if (hitVoxels == (List_1_VoxelHit_ *)0x0) {
code_?:
        func_?();
        pcVar18 = (code *)swi(3);
        (*pcVar18)();
        return;
      }
      pOVar19 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                Serialization::JsonProperty]::
                Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                          ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)hitVoxels,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
      if (0 < (int)pOVar19) {
        pVVar20 = PickUpItemHealRay_CalculateClosestVoxelHit
                            ((VoxelHit *)&stack0xffffff2c,this,hitVoxels,(MethodInfo *)0x0);
        fStack_21 = (pVVar20->point).x;
        fStack_22 = (pVVar20->point).y;
        fStack_23 = (pVVar20->point).z;
        fStack_24 = (pVVar20->normal).x;
        fStack_25 = (pVVar20->normal).y;
        fStack_26 = (pVVar20->normal).z;
        uStack_27._0_2_ = (pVVar20->cubePos).x;
        uStack_27._2_2_ = (pVVar20->cubePos).y;
        uStack_28 = *(undefined4 *)&(pVVar20->cubePos).z;
        iStack_29 = pVVar20->face;
        uStack_30 = *(undefined4 *)&pVVar20->isCubeHit;
        iStack_31 = pVVar20->woId;
        pCStack_32 = pVVar20->cube;
        fStack_33 = pVVar20->distance;
        pCStack_34 = pVVar20->collider;
        pTStack_35 = pVVar20->transform;
        uStack_36 = *(undefined4 *)&pVVar20->field_0x3c;
        uStack_37 = pVVar20->interactionFlags;
      }
    }
    result._4_4_ = fStack_21;
    result.Status = 0x5c;
    result.HitVoxel.point.x = fStack_22;
    result.HitVoxel.point.y = fStack_23;
    result.HitVoxel.point.z = fStack_24;
    result.HitVoxel.normal.x = fStack_25;
    result.HitVoxel.normal.y = fStack_26;
    result.HitVoxel.normal.z = (float)uStack_27;
    result.HitVoxel.cubePos.x = (undefined2)uStack_28;
    result.HitVoxel.cubePos.y = uStack_28._2_2_;
    result.HitVoxel._28_4_ = iStack_29;
    result.HitVoxel.face = uStack_30;
    result.HitVoxel._36_4_ = iStack_31;
    result.HitVoxel.woId = (int32_t)pCStack_32;
    result.HitVoxel.cube = (Cube *)fStack_33;
    result.HitVoxel.distance = (float)pCStack_34;
    result.HitVoxel.collider = (Collider *)pTStack_35;
    result.HitVoxel.transform = (Transform *)uStack_36;
    result.HitVoxel._60_4_ = (undefined4)uStack_37;
    result.HitVoxel.interactionFlags._0_4_ = uStack_37._4_4_;
    result.HitVoxel.interactionFlags._4_4_ = (undefined4)uStack_17;
    result.Direction.x = (float)uStack_17._4_4_;
    result.Direction.y = fStack_16;
    result.Direction.z = (float)uStack_38;
    result._92_4_ = 0;
    PickUpItemHealRay_HandleRaycastResultLocally(this,result,in_stack_39);
  }
  return;
}


/* List`1[VoxelHit] DoRaycast(Vector3) */

List_1_VoxelHit_ *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_DoRaycast
          (PickUpItemHealRay *this,Vector3 direction,MethodInfo *method)

{
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  uStack_5._0_4_ = 0.0;
  uStack_5._4_4_ = 0.0;
  pMVar6 = (this->fields)._.owner;
  if (pMVar6 != (MVPickupOwner *)0x0) {
    pVVar7 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                       (&VStack_8,(InventoryItem_ItemDescription *)pMVar6,(MethodInfo *)0x0);
    uStack_1 = 0;
    uVar9 = pVVar7->x;
    uVar10 = pVVar7->y;
    func_?(&uStack_1,uVar9,uVar10,pVVar7->z,direction._0_8_,direction.z);
    uStack_11 = uStack_1;
    uStack_12 = uStack_2;
    uStack_13 = uStack_3;
    uStack_14 = uStack_4;
    VStack_8.y = (float)uStack_5;
    VStack_8.z = uStack_5._4_4_;
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
                              (pMVar6,pMVar6->klass[1]._0.image);
      layerMask = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                  Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                            ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                              *)(this->fields).layers.m_Mask,(MethodInfo *)0x0);
      ray.m_Origin.y = (float)uStack_12;
      ray.m_Origin.x = (float)uStack_11;
      ray.m_Origin.z = (float)uStack_13;
      ray.m_Direction.x = (float)uStack_14;
      ray.m_Direction.y = VStack_8.y;
      ray.m_Direction.z = VStack_8.z;
      pLVar15 = CollisionDetection::CollisionDetection_MVHitAll
                         (ray,distance,ignoreWoIds,(int32_t)layerMask,(MethodInfo *)0x0);
      return pLVar15;
    }
  }
  func_?(0);
  pcVar16 = (code *)swi(3);
  pLVar15 = (List_1_VoxelHit_ *)(*pcVar16)();
  return pLVar15;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)hitVoxel.interactionFlags._4_4_,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return hitVoxel.interactionFlags._4_4_;
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
  }
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (hitObject == (MVWorldObjectClient *)0x0) {
    bVar1 = false;
  }
  else {
    x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                  (hitObject,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) goto code_?;
    bVar1 = true;
  }
  if (!bVar1) {
code_?:
    if ((this->fields).isLockedOn != 0) {
      (*(code *)(this->klass->vtable).TriggerEnd.method)
                (this,(this->klass->vtable).OnStateChanged.methodPtr);
    }
    return;
  }
  if ((this->fields).isLockedOn != 0) {
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_01 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_01 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_PlayPlingSound(this_01,(MethodInfo *)0x0);
    pIVar3 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if ((pIVar3 != (IPlayModeUI *)0x0) &&
       (iVar4 = func_?(2,TypeInfo__IPlayModeUI), iVar4 != 0)) {
      func_?(3,TypeInfo__IGUICrossHair);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if (hitObject != (MVWorldObjectClient *)0x0) {
        pCVar5 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                            ((DayNightCycle *)hitObject,(MethodInfo *)0x0);
        (this->fields).stuckObject = (GameObject *)pCVar5;
        iVar4 = func_?(hitObject);
        if (iVar4 != 0) {
          iVar4 = func_?(hitObject);
          if ((iVar4 == 0) || (iVar4 = func_?(hitObject), iVar4 == 0))
          goto code_?;
          pGVar6 = (GameObject *)func_?(0,TypeInfo__IHealRayAttachementObject);
          (this->fields).stuckObject = pGVar6;
        }
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_00 = (this->fields)._.owner;
        if (this_00 != (MVPickupOwner *)0x0) {
          pVVar7 = InventoryItem+ItemDescription::
                    InventoryItem_ItemDescription_get_CameraPreviewerOffset
                              ((Vector3 *)&stack0xffffffe4,(InventoryItem_ItemDescription *)this_00,
                               (MethodInfo *)0x0);
          pVVar7 = PickUpItemHealRay_CalculateHitPosition
                              (&VStack_8,this,*pVVar7,result.Direction,result.HitVoxel.distance,
                               (MethodInfo *)0x0);
          uVar9 = pVVar7->x;
          uVar10 = pVVar7->y;
          a.y = (float)uVar10;
          a.x = (float)uVar9;
          pGVar6 = (this->fields).stuckObject;
          if ((pGVar6 != (GameObject *)0x0) &&
             (this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_get_transform(pGVar6,(MethodInfo *)0x0),
             this_02 != (Transform *)0x0)) {
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffd8,this_02,(MethodInfo *)0x0);
            VStack_8.y = pVVar7->x;
            VStack_8.z = pVVar7->y;
            fVar11 = pVVar7->z;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              func_?();
            }
            a.z = (float)&UNK_?;
            b.z = fVar11;
            b.x = VStack_8.y;
            b.y = VStack_8.z;
            pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
            fVar12 = pVVar7->y;
            fVar11 = pVVar7->z;
            (this->fields).hitOffset.x = pVVar7->x;
            (this->fields).hitOffset.y = fVar12;
            (this->fields).hitOffset.z = fVar11;
            stuckObjectId =
                 mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                 Collection_1_VoxelHit__get_Items
                           ((Collection_1_VoxelHit_ *)hitObject,(MethodInfo *)0x0);
            PickUpItemHealRay_UpdateItemState(this,(int32_t)stuckObjectId,(MethodInfo *)0x0);
            (this->fields).isLockedOn = 1;
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?(hitObject);
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void HandleRaycastResultLocally(PickUpItemHealRay+RayCastData) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleRaycastResultLocally
               (PickUpItemHealRay *this,PickUpItemHealRay_RayCastData result,MethodInfo *method)

{
  PVar1 = result;
  this_02 = this;
  fVar2 = result.HitVoxel.normal.y;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uVar3 = result.Direction._0_8_;
  if (in_stack_4 == 1.4013e-45) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                     (pMVar5,result.HitVoxel._36_4_,
                      int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                     );
      pMVar5 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar5 != (MVWorldObjectClientManager *)0x0) {
        hitObject = (MVWorldObjectClient *)
                    MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                              (pMVar5,id,(MethodInfo *)0x0);
        result_00._4_4_ = result.Status;
        result_00.Status = (int32_t)in_stack_4;
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
        direction.x = (float)(int)uVar3;
        direction.y = (float)(int)(uVar3 >> 0x20);
        PickUpItemHealRay_UpdateRayParticleEffect(this,hitVoxel,direction,method);
        pPStack6 = this;
        hitVoxel_00.interactionFlags._0_4_ = (undefined4)result.HitVoxel.interactionFlags;
        hitVoxel_00._60_4_ = result.HitVoxel.transform;
        hitVoxel_00.normal.y = result.HitVoxel.point.z;
        auVar7 = SUB1612(PVar1._4_16_,0);
        hitVoxel_00.point.x = (float)auVar7._0_4_;
        hitVoxel_00.point.y = (float)auVar7._4_4_;
        hitVoxel_00.point.z = (float)auVar7._8_4_;
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
        PickUpItemHealRay_UpdateRayHealingLogic(this,hitVoxel_00,in_stack_8);
        return;
      }
    }
  }
  else {
    if (in_stack_4 == 2.8026e-45) {
      direction_00.z = 0.0;
      direction_00.x = (float)(int)uVar3;
      direction_00.y = (float)(int)(uVar3 >> 0x20);
      PickUpItemHealRay_UpdateRayParticleEffect(this,result.HitVoxel,direction_00,unaff_ESI);
      auVar9 = result.HitVoxel._8_32_;
      result.HitVoxel.normal.x = 0.0;
      auVar7 = auVar9._4_12_;
      fVar10 = (float)auVar9._0_4_;
      this = (PickUpItemHealRay *)auVar7._0_4_;
      in_stack_4 = (float)auVar7._4_4_;
      result.Status = auVar7._8_4_;
      result._4_6_ = auVar9._16_6_;
      result.HitVoxel.point.x._2_2_ = auVar9._22_2_;
      result.HitVoxel.point.y = (float)auVar9._24_4_;
      result.HitVoxel.point.z._0_1_ = auVar9[0x1c];
      result.HitVoxel.point.z._1_3_ = auVar9._29_3_;
      result.HitVoxel.normal.y = (float)result.HitVoxel.cube;
      result.HitVoxel.normal.z = result.HitVoxel.distance;
      result.HitVoxel.cubePos._0_4_ = result.HitVoxel.collider;
      result.HitVoxel._28_4_ = result.HitVoxel.transform;
      result.HitVoxel.face = result.HitVoxel._60_4_;
      result.HitVoxel._36_4_ = (undefined4)result.HitVoxel.interactionFlags;
      fVar11 = (float)(int)PVar1.HitVoxel.point._0_8_;
      stack0xfffffffc = (float)(int)((ulonglong)PVar1.HitVoxel.point._0_8_ >> 0x20);
      auVar12 = CONCAT608(auVar12._0_60_,auVar12._0_8_);
      result.HitVoxel.woId = 0;
      in_stack_4 = fVar2;
      PickUpItemHealRay_UpdateRayHealingLogic
                (this_02,(VoxelHit)CONCAT468(result.HitVoxel.woId,auVar12),
                 (MethodInfo *)result.HitVoxel.cube);
      return;
    }
    if (in_stack_4 != 0.0) {
      return;
    }
    this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)(this->fields).rayParticles;
    if (this_00 !=
        (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
      Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                (this_00,(MethodInfo *)0x0);
      if ((this->fields).isLockedOn == 0) {
        fVar2 = (this->fields).maxRayRange;
      }
      else {
        fVar2 = (this->fields).maxLockOnRange;
      }
      fVar13 = (float10)func_?(&stack0xfffffff8,0);
      func_?(&stack0xfffffff8,fVar2 / (float)fVar13,0);
      this_01 = (this->fields).hitParticles;
      if (this_01 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (this_01,(MethodInfo *)0x0);
        if ((this->fields).isLockedOn == 0) {
          return;
        }
        (*(code *)(this->klass->vtable).TriggerEnd.method)
                  (this,(this->klass->vtable).OnStateChanged.methodPtr);
        return;
      }
    }
  }
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Vector3 HandleVehicleHitPosition(Vector3, Vector3, Single) */

Vector3 * Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_HandleVehicleHitPosition
                    (Vector3 *__return_storage_ptr__,PickUpItemHealRay *this,Vector3 hitPosition,
                    Vector3 direction,float hitDistance,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (((this->fields).isLockedOn == 0) &&
     (this_00 = (this->fields)._.owner, this_00 != (MVPickupOwner *)0x0)) {
    bVar1 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
    if (((this_00->klass->_1).naturalAligment < bVar1) ||
       ((this_00->klass->_1).typeHierarchy[bVar1 - 1] != (Il2CppClass *)TypeInfo__VehiclePickupOwner
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    pMVar3 = (MVPickupOwner *)0x0;
    if (bVar2) {
      pMVar3 = this_00;
    }
    if (pMVar3 != (MVPickupOwner *)0x0) {
      if (this_00 != (MVPickupOwner *)0x0) {
        pVVar4 = InventoryItem+ItemDescription::
                 InventoryItem_ItemDescription_get_CameraPreviewerOffset
                           ((Vector3 *)&stack0xfffffff0,(InventoryItem_ItemDescription *)this_00,
                            (MethodInfo *)0x0);
        pVVar4 = PickUpItemHealRay_CalculateHitPosition
                           ((Vector3 *)&stack0xfffffff0,this,*pVVar4,direction,hitDistance,
                            (MethodInfo *)0x0);
        fVar5 = pVVar4->y;
        fVar6 = pVVar4->z;
        __return_storage_ptr__->x = pVVar4->x;
        __return_storage_ptr__->y = fVar5;
        __return_storage_ptr__->z = fVar6;
        return __return_storage_ptr__;
      }
      func_?();
      pcVar7 = (code *)swi(3);
      pVVar4 = (Vector3 *)(*pcVar7)();
      return pVVar4;
    }
  }
  __return_storage_ptr__->x = hitPosition.x;
  __return_storage_ptr__->y = hitPosition.y;
  __return_storage_ptr__->z = hitPosition.z;
  return __return_storage_ptr__;
}


/* Boolean IsDirectionValid(Vector3) */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsDirectionValid
               (PickUpItemHealRay *this,Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).stuckObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pGVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    return 1;
  }
  func_?(&direction);
  pMVar3 = (this->fields)._.owner;
  if (pMVar3 != (MVPickupOwner *)0x0) {
    pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_5,pMVar3,(MethodInfo *)0x0);
    fVar6 = direction.z;
    VStack_5.z = direction.y;
    VStack_5.y = direction.x;
    uVar7._0_4_ = pVVar4->x;
    uVar7._4_4_ = pVVar4->y;
    fVar8 = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    from.z = fVar8;
    from.x = (float)(int)uVar7;
    from.y = (float)(int)((ulonglong)uVar7 >> 0x20);
    to.z = fVar6;
    to.x = VStack_5.y;
    to.y = VStack_5.z;
    UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Angle(from,to,(MethodInfo *)0x0);
    pGVar1 = (this->fields).stuckObject;
    if (pGVar1 != (GameObject *)0x0) {
      VStack_5.z = (float)&UNK_?;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                          (pGVar1,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar4 = (Vector3 *)&stack0xffffffd0;
        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (pVVar4,this_00,(MethodInfo *)0x0);
        VStack_5.y = pVVar9->x;
        VStack_5.z = pVVar9->y;
        fVar8 = pVVar9->z;
        pMVar3 = (this->fields)._.owner;
        if (pMVar3 != (MVPickupOwner *)0x0) {
          direction.y = 0.0;
          direction.x = (float)pMVar3;
          direction.z = (float)UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform((Component_1 *)pMVar3,(MethodInfo *)0x0);
          if ((Transform *)direction.z != (Transform *)0x0) {
            direction.y = (float)&stack0xffffffd0;
            direction.x = (float)&UNK_?;
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)direction.y,(Transform *)direction.z,(MethodInfo *)0x0);
            direction.x = VStack_5.y;
            direction.y = VStack_5.z;
            a.z = fVar8;
            a.x = VStack_5.y;
            a.y = VStack_5.z;
            direction.z = fVar8;
            UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      ((Vector3 *)&stack0xffffffd0,a,*pVVar9,(MethodInfo *)0x0);
            fVar10 = (float10)func_?();
            fVar8 = _UNK_?;
            if (_UNK_? <= (float)fVar10) {
              fVar8 = (float)fVar10;
            }
            if ((this->fields).isLockedOn == 0) {
              fVar6 = (this->fields).maxRayRange;
            }
            else {
              fVar6 = (this->fields).maxLockOnRange;
            }
            fVar8 = (_UNK_? - fVar8 / fVar6) * _UNK_? + _UNK_?;
            if ((fVar8 < (float)pVVar4) || ((float)pVVar4 < (float)((uint)fVar8 ^ _UNK_?)))
            {
              direction.z = (float)(this->fields)._.owner;
              (this->fields).stuckObject = (GameObject *)0x0;
              if ((MVPickupOwner *)direction.z == (MVPickupOwner *)0x0) goto code_?;
              direction.y = (float)&stack0xffffffd0;
              direction.x = (float)&UNK_?;
              pVVar4 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                 ((Vector3 *)direction.y,(MVPickupOwner *)direction.z,
                                  (MethodInfo *)0x0);
              uVar11 = pVVar4->x;
              uVar12 = pVVar4->y;
              direction.z = pVVar4->z;
              if ((this->fields).isLockedOn != 0) {
                direction.x = (float)uVar11;
                direction.y = (float)uVar12;
                (*(code *)(this->klass->vtable).TriggerEnd.method)();
                return 0;
              }
            }
            return 1;
          }
        }
      }
    }
  }
code_?:
  direction.z = (float)&UNK_?;
  func_?();
  pcVar13 = (code *)swi(3);
  bVar2 = (*pcVar13)();
  return bVar2;
}


/* Boolean IsObjectStuckable(MVWorldObjectClient) */

bool Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_IsObjectStuckable
               (PickUpItemHealRay *this,MVWorldObjectClient *hitObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (hitObject != (MVWorldObjectClient *)0x0) {
    x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                  (hitObject,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
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
  pPVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.owner;
  if (this_00 != (MVPickupOwner *)0x0) {
    pVVar2 = MVPickupOwner::MVPickupOwner_get_LookDirection
                       ((Vector3 *)(auStack_3 + 4),this_00,(MethodInfo *)0x0);
    QStack_4.z = pVVar2->x;
    QStack_4.w = pVVar2->y;
    fVar5 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      auStack_3._0_4_ = TypeInfo__UnityEngine__Quaternion;
      func_?();
    }
    forward.z = fVar5;
    forward.x = QStack_4.z;
    forward.y = QStack_4.w;
    pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       ((Quaternion *)auStack_3,forward,(MethodInfo *)0x0);
    auStack_3._0_4_ = pQVar6->x;
    auStack_3._4_4_ = pQVar6->y;
    fStack_7 = pQVar6->z;
    fStack_8 = pQVar6->w;
    pPVar9 = (this->fields).rayParticles;
    if (pPVar9 != (ParticleSystem *)0x0) {
      pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pPVar9,(MethodInfo *)0x0);
      if (pTVar10 != (Transform *)0x0) {
        pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                           (&QStack_4,pTVar10,(MethodInfo *)0x0);
        rhs.y = (float)auStack_3._4_4_;
        rhs.x = (float)auStack_3._0_4_;
        rhs.z = fStack_7;
        rhs.w = fStack_8;
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality
                          (*pQVar6,rhs,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          (this->fields).passedLerpTime = 0.0;
          return;
        }
        QStack_4.x = (this->fields).lerpStartRotation.x;
        QStack_4.y = (this->fields).lerpStartRotation.y;
        QStack_4.z = (this->fields).lerpStartRotation.z;
        QStack_4.w = (this->fields).lerpStartRotation.w;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        lhs.y = QStack_4.y;
        lhs.x = QStack_4.x;
        lhs.z = QStack_4.z;
        lhs.w = QStack_4.w;
        rhs_00.y = (float)auStack_3._4_4_;
        rhs_00.x = (float)auStack_3._0_4_;
        rhs_00.z = fStack_7;
        rhs_00.w = fStack_8;
        bVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Inequality
                          (lhs,rhs_00,(MethodInfo *)0x0);
        if (bVar11 == 0) {
          this = (PickUpItemHealRay *)(this->fields).passedLerpTime;
        }
        else {
          (this->fields).passedLerpTime = 0.0;
          this = (PickUpItemHealRay *)0x0;
          (pPVar1->fields).lerpStartRotation.x = (float)auStack_3._0_4_;
          (pPVar1->fields).lerpStartRotation.y = (float)auStack_3._4_4_;
          (pPVar1->fields).lerpStartRotation.z = fStack_7;
          (pPVar1->fields).lerpStartRotation.w = fStack_8;
        }
        fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
        pPVar9 = (pPVar1->fields).rayParticles;
        (pPVar1->fields).passedLerpTime = fVar5 + (float)this;
        if (pPVar9 != (ParticleSystem *)0x0) {
          pTVar10 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pPVar9,(MethodInfo *)0x0);
          pPVar9 = (pPVar1->fields).rayParticles;
          if (pPVar9 != (ParticleSystem *)0x0) {
            this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pPVar9,(MethodInfo *)0x0);
            if (this_01 != (Transform *)0x0) {
              pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                 (&QStack_4,this_01,(MethodInfo *)0x0);
              QStack_4.x = pQVar6->x;
              QStack_4.y = pQVar6->y;
              QStack_4.z = pQVar6->z;
              QStack_4.w = pQVar6->w;
              fVar5 = (pPVar1->fields).passedLerpTime;
              if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000)
                   != 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Quaternion);
              }
              a.y = (float)auStack_3._4_4_;
              a.x = (float)auStack_3._0_4_;
              a.z = fStack_7;
              a.w = fStack_8;
              b.y = QStack_4.y;
              b.x = QStack_4.x;
              b.z = QStack_4.z;
              b.w = QStack_4.w;
              pQVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Lerp
                                 ((Quaternion *)auStack_3,a,b,_UNK_? / fVar5,
                                  (MethodInfo *)0x0);
              if (pTVar10 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                          (pTVar10,*pQVar6,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnDestroy
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).hitParticles;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    return;
  }
  if ((this->fields).hitParticles == (ParticleSystem *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) && (pcVar2 = (code *)func_?(), pcVar2 == (code *)0x0))
  {
    uVar3 = func_?(&UNK_?);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(in_stack_4);
  return;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnEquip
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  PickupItem::PickupItem_OnEquip((PickupItem *)this,(MethodInfo *)0x0);
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,this_01,(MethodInfo *)0x0);
    fVar2 = pVVar1->z;
    pMVar3 = (this->fields)._.owner;
    if (pMVar3 != (MVPickupOwner *)0x0) {
      pVVar1 = MVPickupOwner::MVPickupOwner_get_LookDirection
                         ((Vector3 *)&stack0xffffffdc,pMVar3,(MethodInfo *)0x0);
      uVar4._0_4_ = pVVar1->x;
      uVar4._4_4_ = pVVar1->y;
      fVar5 = pVVar1->z;
      auVar6._8_4_ = unaff_EBP;
      auVar6._0_4_ = (float)uVar4;
      auVar6._4_4_ = uVar4._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
        uVar4 = auVar6._0_8_;
      }
      fVar7 = SUB84(uVar4,4);
      forward.z = fVar5;
      forward.x = (float)uVar4;
      forward.y = SUB84(uVar4,4);
      pQVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                         ((Quaternion *)&stack0xffffffd8,forward,(MethodInfo *)0x0);
      position.y = fVar5;
      position.x = fVar7;
      position.z = fVar2;
      pPVar9 = OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
                         (PoolEnums__Enum_HealRaySparks,position,*pQVar8,(MethodInfo *)0x0);
      (this->fields).hitParticles = pPVar9;
      if (pPVar9 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (pPVar9,(MethodInfo *)0x0);
        pMVar3 = (this->fields)._.owner;
        if (pMVar3 != (MVPickupOwner *)0x0) {
          bVar10 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar3,(MethodInfo *)0x0);
          if (bVar10 == 0) {
            return;
          }
          pPVar9 = (this->fields).rayParticles;
          if (pPVar9 != (ParticleSystem *)0x0) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                      Component_1_GetComponent_58
                                ((Component_1 *)pPVar9,
                                 UnityEngine__ParticleSystemRenderer_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystemRenderer>__
                                );
            (this->fields).particleRenderer = (ParticleSystemRenderer *)this_02;
            if (this_02 != (MVInteractableBase *)0x0) {
              pMVar11 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_material
                                 ((Renderer *)this_02,(MethodInfo *)0x0);
              (this->fields).normalRayMaterial = pMVar11;
              this_00 = (this->fields).particleRenderer;
              if (this_00 != (ParticleSystemRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                          ((Renderer *)this_00,(this->fields).ZIgnoreMaterial,(MethodInfo *)0x0);
                (this->fields).remoteMuzzlePoint = (this->fields)._.muzzlePoint;
                (this->fields).remoteParticleSystem = (this->fields).rayParticles;
                (this->fields)._.muzzlePoint = (this->fields).localMuzzePoint;
                (this->fields).rayParticles = (this->fields).localRayParticles;
                return;
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnHitParticleUpdate(Vector3, Vector3, Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnHitParticleUpdate
               (PickUpItemHealRay *this,Vector3 hitPosition,Vector3 firingDirection,float distance,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = this;
  pPVar2 = (this->fields).hitParticles;
  if ((pPVar2 != (ParticleSystem *)0x0) &&
     (pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pPVar2,(MethodInfo *)0x0), pTVar3 != (Transform *)0x0)) {
    value.y = hitPosition.y;
    value.x = hitPosition.x;
    value.z = hitPosition.z;
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
              (pTVar3,value,(MethodInfo *)0x0);
    pPVar2 = (pPVar1->fields).hitParticles;
    if (pPVar2 != (ParticleSystem *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)pPVar2,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = firingDirection.z;
      a.x = firingDirection.x;
      a.y = firingDirection.y;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                         (&firingDirection,a,(MethodInfo *)0x0);
      uVar5._0_4_ = pVVar4->x;
      uVar5._4_4_ = pVVar4->y;
      fVar6 = pVVar4->z;
      hitPosition.y = (float)(undefined4)uVar5;
      hitPosition.z = (float)uVar5._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
        uVar5 = CONCAT44(hitPosition.z,hitPosition.y);
      }
      forward.z = fVar6;
      forward.x = (float)(int)uVar5;
      forward.y = (float)(int)((ulonglong)uVar5 >> 0x20);
      pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                         ((Quaternion *)&stack0xffffffec,forward,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                  (pTVar3,*pQVar7,(MethodInfo *)0x0);
        pPVar2 = (pPVar1->fields).hitParticles;
        if (pPVar2 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Play_1
                    (pPVar2,(MethodInfo *)0x0);
          this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                     *)(pPVar1->fields).rayParticles;
          this = (PickUpItemHealRay *)0x0;
          if (this_00 !=
              (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
               *)0x0) {
            this = (PickUpItemHealRay *)
                   mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                   Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                   Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                             (this_00,(MethodInfo *)0x0);
            fVar8 = (float10)func_?(&this,0);
            hitPosition.z = (float)fVar8;
            func_?(&this,distance / hitPosition.z,0);
            return;
          }
        }
      }
    }
  }
  func_?(0);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnStateChanged
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._.owner;
  if (this_00 != (MVPickupOwner *)0x0) {
    bVar1 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_00,(MethodInfo *)0x0);
    if (bVar1 != 0) {
      return;
    }
    if (newState != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
              WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
              KogamaSettingWrapperBase]::
              Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                        ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                          *)newState,StringLiteral_S,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                        );
      if (bVar1 == 0) {
        return;
      }
      pPVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
               Dictionary_2_System_Type_Pool__get_Item
                         ((Dictionary_2_System_Type_Pool_ *)newState,(Type *)StringLiteral_S,
                          MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                         );
      if (pPVar2 != (Pool *)0x0) {
        if ((pPVar2->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
        goto code_?;
        piVar3 = (int *)func_?();
        iVar4 = *piVar3;
        if (iVar4 == -1) {
          (*(code *)(this->klass->vtable).TriggerEnd.method)
                    (this,(this->klass->vtable).OnStateChanged.methodPtr);
          return;
        }
        if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
          func_?(TypeInfo__MVGameControllerBase);
        }
        this_01 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
        if (this_01 != (MVWorldObjectClientManager *)0x0) {
          bVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_TryGetWorldObject
                            (this_01,iVar4,(MVWorldObject **)&stack0xfffffff8,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return;
          }
          this_02 = (MVWorldObjectClient *)func_?();
          (this->fields).stuckObject = (GameObject *)0x0;
          if (this_02 == (MVWorldObjectClient *)0x0) {
            return;
          }
          x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                        (this_02,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?();
          }
          bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar1 == 0) {
            return;
          }
          pCVar5 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                             ((DayNightCycle *)this_02,(MethodInfo *)0x0);
          (this->fields).stuckObject = (GameObject *)pCVar5;
          (this->fields).isLockedOn = 1;
          iVar4 = func_?();
          if (iVar4 == 0) {
            return;
          }
          iVar4 = func_?();
          if (iVar4 != 0) {
            uVar6 = func_?(this_02,TypeInfo__IHealRayAttachementObject);
            pGVar7 = (GameObject *)func_?(0,TypeInfo__IHealRayAttachementObject,uVar6);
            (this->fields).stuckObject = pGVar7;
            return;
          }
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnUnequip() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_OnUnequip
               (PickUpItemHealRay *this,MethodInfo *method)

{
  pPVar1 = (this->fields).hitParticles;
  if (pPVar1 == (ParticleSystem *)0x0) {
    func_?(0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)func_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?,0,0);
    func_?(uVar3);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pPVar1,1,1);
  return;
}


/* Void ResetAmmo() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ResetAmmo
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  AVar1 = (ACTkByte4)(this->fields).maxAmmoTime.currentCryptoKey;
  AVar2 = (this->fields).maxAmmoTime.hiddenValue;
  pBVar3 = (this->fields).maxAmmoTime.hiddenValueOld;
  fVar4 = (this->fields).maxAmmoTime.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
  }
  value.hiddenValue = AVar2;
  value.currentCryptoKey._0_1_ = AVar1.b1;
  value.currentCryptoKey._1_1_ = AVar1.b2;
  value.currentCryptoKey._2_1_ = AVar1.b3;
  value.currentCryptoKey._3_1_ = AVar1.b4;
  value.hiddenValueOld = pBVar3;
  value.fakeValue = fVar4;
  value.inited = (this->fields).maxAmmoTime.inited;
  value._17_3_ = *(undefined3 *)&(this->fields).maxAmmoTime.field_0x11;
  fVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
          ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
  iVar5 = (*(code *)(this->klass->vtable).GetAmmoMultiplier.method)
                    (this,(int)fVar4,(this->klass->vtable).UpdateWithDirection.methodPtr);
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&puStack_7,(float)iVar5,(MethodInfo *)0x0);
  AVar1 = pOVar6->hiddenValue;
  pBVar3 = pOVar6->hiddenValueOld;
  fVar4 = pOVar6->fakeValue;
  bVar8 = pOVar6->inited;
  uVar9 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields).currentAmmoLeft.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields).currentAmmoLeft.hiddenValue = AVar1;
  (this->fields).currentAmmoLeft.hiddenValueOld = pBVar3;
  (this->fields).currentAmmoLeft.fakeValue = fVar4;
  (this->fields).currentAmmoLeft.inited = bVar8;
  *(undefined3 *)&(this->fields).currentAmmoLeft.field_0x11 = uVar9;
  return;
}


/* Void SetRayParticleDistance(Single) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_SetRayParticleDistance
               (PickUpItemHealRay *this,float distance,MethodInfo *method)

{
  pOStack_1 = (Object *)0x0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).rayParticles;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          (this_00,(MethodInfo *)0x0);
    fVar2 = (float10)func_?(&pOStack_1,0);
    pOStack_1 = (Object *)(distance / (float)fVar2);
    func_?(&pOStack_1);
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ShowHitEffect() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_ShowHitEffect
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_PlayPlingSound(this_00,(MethodInfo *)0x0);
    pIStack1 = MVGameControllerBase::MVGameControllerBase_get_PlayModeUI((MethodInfo *)0x0);
    if (pIStack1 != (IPlayModeUI *)0x0) {
      pIStack1 = (IPlayModeUI *)func_?();
      if (pIStack1 != (IPlayModeUI *)0x0) {
        func_?();
        return;
      }
    }
  }
  pIStack1 = (IPlayModeUI *)0x0;
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SyncState(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_SyncState
               (PickUpItemHealRay *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    bVar2 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      return;
    }
    pMVar1 = (this->fields)._.owner;
    if (pMVar1 != (MVPickupOwner *)0x0) {
      x = (Object_1 *)
          GamePointGainEffect::GamePointGainEffect_get_ID
                    ((GamePointGainEffect *)pMVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        auStack_3._0_4_ = TypeInfo__UnityEngine__Object;
        func_?();
      }
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                        (x,(Object_1 *)this,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        return;
      }
      auStack_3._4_4_ = (this->fields).currentAmmoLeft.currentCryptoKey;
      auStack_3._8_4_ = (this->fields).currentAmmoLeft.hiddenValue;
      auStack_3._12_4_ = (this->fields).currentAmmoLeft.hiddenValueOld;
      auStack_3._16_4_ = (this->fields).currentAmmoLeft.fakeValue;
      unaff_EDI = *(Object **)&(this->fields).currentAmmoLeft.inited;
      if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                  methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
      fStack_4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit_1(value,(MethodInfo *)0x0);
      fStack_5 = (this->fields).elapsedUpdateWaitTime;
      pMVar1 = (this->fields)._.owner;
      if (pMVar1 != (MVPickupOwner *)0x0) {
        pOVar6 = System.dll::System::Collections::Generic::
                 SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                 ::Single,System::Object]::
                 SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                           ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                             *)pMVar1,(MethodInfo *)0x0);
        iVar7 = func_?(pOVar6,TypeInfo__ICurrentItemOwner);
        if (iVar7 == 0) {
code_?:
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)
             ) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          }
          pOVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit
                              ((ObscuredFloat *)auStack_3,fStack_4,(MethodInfo *)0x0);
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
          (this->fields).elapsedUpdateWaitTime = fStack_5;
          return;
        }
        pMVar1 = (this->fields)._.owner;
        if ((pMVar1 != (MVPickupOwner *)0x0) &&
           (unaff_EDI = System.dll::System::Collections::Generic::
                        SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                        ::Single,System::Object]::
                        SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                  ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                    *)pMVar1,(MethodInfo *)0x0),
           unaff_EBX = TypeInfo__ICurrentItemOwner, unaff_EDI != (Object *)0x0)) {
          iVar7 = func_?(unaff_EDI,TypeInfo__ICurrentItemOwner);
          pIVar13 = TypeInfo__ICurrentItemOwner;
          if ((iVar7 != 0) &&
             (piVar14 = (int *)func_?(unaff_EDI,TypeInfo__ICurrentItemOwner),
             unaff_EBX = pIVar13, piVar14 != (int *)0x0)) {
            iStack_15 = *piVar14;
            uVar16 = 0;
            uStack_17 = 0;
            if (*(ushort *)(iStack_15 + 0xb6) != 0) {
              do {
                if (*(ICurrentItemOwner__Class **)(*(int *)(iStack_15 + 0x58) + (uint)uVar16 * 8) ==
                    TypeInfo__ICurrentItemOwner) {
                  puVar18 = (undefined4 *)
                            (iStack_15 +
                            (*(int *)(*(int *)(iStack_15 + 0x58) + 4 + (uint)uVar16 * 8) + 0x19) * 8)
                  ;
                  goto code_?;
                }
                uVar16 = uVar16 + 1;
              } while (uVar16 < *(ushort *)(iStack_15 + 0xb6));
            }
            puVar18 = (undefined4 *)func_?(piVar14,TypeInfo__ICurrentItemOwner,1);
code_?:
            (*(code *)*puVar18)(piVar14,newState,puVar18[1]);
            goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?(0);
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
  this_03 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this_03->fields)._.owner;
  this = (PickUpItemHealRay *)0x0;
  if (pMVar1 == (MVPickupOwner *)0x0) goto code_?;
  bVar2 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar1,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pMVar1 = (this_03->fields)._.owner;
    if (pMVar1 == (MVPickupOwner *)0x0) {
      pMVar3 = (MVPickupOwner *)0x0;
    }
    else {
      bVar4 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
      if (((pMVar1->klass->_1).naturalAligment < bVar4) ||
         ((pMVar1->klass->_1).typeHierarchy[bVar4 - 1] !=
          (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
        bVar5 = false;
      }
      else {
        bVar5 = true;
      }
      pMVar3 = (MVPickupOwner *)0x0;
      if (bVar5) {
        pMVar3 = pMVar1;
      }
    }
    this_00 = (this_03->fields).particleRenderer;
    if (pMVar3 == (MVPickupOwner *)0x0) {
      (this_03->fields)._.muzzlePoint = (this_03->fields).localMuzzePoint;
      (this_03->fields).rayParticles = (this_03->fields).localRayParticles;
      if (this_00 == (ParticleSystemRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)this_00,(this_03->fields).ZIgnoreMaterial,(MethodInfo *)0x0);
    }
    else {
      if (this_00 == (ParticleSystemRenderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)this_00,(this_03->fields).normalRayMaterial,(MethodInfo *)0x0);
      (this_03->fields)._.muzzlePoint = (this_03->fields).remoteMuzzlePoint;
      (this_03->fields).rayParticles = (this_03->fields).remoteParticleSystem;
    }
  }
  this_01 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this_03->fields).rayParticles;
  if (this_01 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    this = (PickUpItemHealRay *)
           mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     (this_01,(MethodInfo *)0x0);
    func_?(&this,1,0);
    if ((this_03->fields).isShooting == 0) {
      fStack_6 = (this_03->fields).rayMinimumChargeTime + (this_03->fields).rayStartTime;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
      uStack_8 = CONCAT44(fVar7,(undefined4)uStack_8);
      if (fStack_6 < fVar7) {
        fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
        pMVar1 = (this_03->fields)._.owner;
        (this_03->fields).isShooting = 1;
        (this_03->fields).rayStartTime = fVar7;
        if (pMVar1 != (MVPickupOwner *)0x0) {
          bVar2 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar1,(MethodInfo *)0x0);
          if (bVar2 != 0) {
            return;
          }
          this_02 = (this_03->fields).rayParticles;
          if (this_02 != (ParticleSystem *)0x0) {
            this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this_02,(MethodInfo *)0x0);
            pVVar9 = PickUpItemHealRay_CalculateParticlesRotation
                               ((Vector3 *)(auStack_10 + 4),this_03,(MethodInfo *)0x0);
            uStack_8._0_4_ = pVVar9->x;
            uStack_8._4_4_ = pVVar9->y;
            fVar7 = pVVar9->z;
            if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) !=
                 0) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
              func_?(TypeInfo__UnityEngine__Quaternion);
            }
            forward.z = fVar7;
            forward.x = (float)(undefined4)uStack_8;
            forward.y = (float)uStack_8._4_4_;
            pQVar11 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                               ((Quaternion *)auStack_10,forward,(MethodInfo *)0x0);
            if (this_04 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                        (this_04,*pQVar11,(MethodInfo *)0x0);
              return;
            }
          }
        }
        goto code_?;
      }
    }
    (this_03->fields).isShooting = 1;
    fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_time((MethodInfo *)0x0);
    (this_03->fields).rayStartTime = fVar7;
    return;
  }
code_?:
  func_?(0);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void TriggerEnd() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_TriggerEnd
               (PickUpItemHealRay *this,MethodInfo *method)

{
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).rayParticles;
  (this->fields).isLockedOn = 0;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Experimental
    ::TerrainAPI::TerrainUtility+TerrainMap]::
    Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
              (this_00,(MethodInfo *)0x0);
    func_?(&stack0xfffffff8,0,0);
    this_01 = (this->fields).audioSource;
    (this->fields).isShooting = 0;
    if (this_01 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Stop
                (this_01,(MethodInfo *)0x0);
      this_02 = (this->fields).hitParticles;
      (this->fields).stuckObject = (GameObject *)0x0;
      if (this_02 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (this_02,(MethodInfo *)0x0);
        this_03 = (this->fields)._.owner;
        if (this_03 != (MVPickupOwner *)0x0) {
          bVar1 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_03,(MethodInfo *)0x0);
          if (bVar1 != 0) {
            PickUpItemHealRay_UpdateItemState(this,-1,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void TryHealTarget(InteractionDataHandlerBase) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_TryHealTarget
               (PickUpItemHealRay *this,InteractionDataHandlerBase *interactionHandler,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)interactionHandler,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    pIVar2 = HealRayHitPackage::HealRayHitPackage_Create
                       ((InteractionData *)&stack0xffffffe8,(MethodInfo *)0x0);
    if (interactionHandler != (InteractionDataHandlerBase *)0x0) {
      InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
                (interactionHandler,*pIVar2,0,(MethodInfo *)0x0);
      return;
    }
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((this->fields).isLockedOn != 0) {
    (*(code *)(this->klass->vtable).TriggerEnd.method)();
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_Update
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
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
        bVar2 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar4,(MethodInfo *)0x0);
        if (bVar2 != 0) {
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
        if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Object);
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          pPVar3 = (this->fields).rayParticles;
          if ((pPVar3 != (ParticleSystem *)0x0) &&
             (this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                        Component_1_get_transform((Component_1 *)pPVar3,(MethodInfo *)0x0),
             this_00 != (Transform *)0x0)) {
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                               ((Vector3 *)&stack0xffffffe4,this_00,(MethodInfo *)0x0);
code_?:
            PickUpItemHealRay_UpdateRaycastRemotely(this,*pVVar8,(MethodInfo *)0x0);
            return;
          }
        }
        else {
          pVVar8 = PickUpItemHealRay_CalculateStuckPosition
                             ((Vector3 *)&stack0xfffffff0,this,(MethodInfo *)0x0);
          puVar9 = (undefined *)pVVar8->x;
          fVar5 = pVVar8->z;
          pMVar4 = (this->fields)._.owner;
          if (pMVar4 != (MVPickupOwner *)0x0) {
            pVVar8 = InventoryItem+ItemDescription::
                     InventoryItem_ItemDescription_get_CameraPreviewerOffset
                               ((Vector3 *)&stack0xffffffd8,(InventoryItem_ItemDescription *)pMVar4,
                                (MethodInfo *)0x0);
            b = *pVVar8;
            if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
              puVar9 = &UNK_?;
              func_?();
            }
            a.y = 0.0;
            a.x = (float)puVar9;
            a.z = fVar5;
            pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&stack0xffffffd8,a,b,(MethodInfo *)0x0);
            goto code_?;
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


/* Void UpdateHitParticles(Vector3, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateHitParticles
               (PickUpItemHealRay *this,Vector3 firingDirection,Vector3 hitPosition,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).hitParticles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)pPVar1,(MethodInfo *)0x0);
    if (pTVar2 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar2,hitPosition,(MethodInfo *)0x0);
      pPVar1 = (this->fields).hitParticles;
      if (pPVar1 != (ParticleSystem *)0x0) {
        pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pPVar1,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_UnaryNegation
                           ((Vector3 *)&puStack_4,firingDirection,(MethodInfo *)0x0);
        forward = *pVVar3;
        if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0)
           && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Quaternion);
        }
        pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                           ((Quaternion *)&stack0xffffffe4,forward,(MethodInfo *)0x0);
        if (pTVar2 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                    (pTVar2,*pQVar5,(MethodInfo *)0x0);
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
  func_?(0);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void UpdateItemState(Int32) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateItemState
               (PickUpItemHealRay *this,int32_t stuckObjectId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._.owner;
  if (pMVar1 != (MVPickupOwner *)0x0) {
    pOVar2 = System.dll::System::Collections::Generic::
             SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System::
             Single,System::Object]::
             SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                       ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                         *)pMVar1,(MethodInfo *)0x0);
    iVar3 = func_?(pOVar2,TypeInfo__ICurrentItemOwner);
    pMVar1 = (this->fields)._.owner;
    if (iVar3 == 0) {
      if (pMVar1 != (MVPickupOwner *)0x0) {
        this_00 = (DayNightCycle *)
                  System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)pMVar1,(MethodInfo *)0x0);
        if (this_00 != (DayNightCycle *)0x0) {
          this_01 = DayNightCycle::DayNightCycle_get_CurrentMoonParam(this_00,(MethodInfo *)0x0);
          if (this_01 != (CelestialParam *)0x0) {
            pSVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_get_name
                               ((Object_1 *)this_01,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__System__String->_1).cctor_started == 0)) {
              func_?();
            }
            pSVar4 = mscorlib.dll::System::String::String_Concat_3
                               (StringLiteral_HealRay_holder_,pSVar4,
                                StringLiteral__is_not_a_ICurrentItemOwner__Thi,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
              func_?();
            }
            UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogWarning
                      ((Object *)pSVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    else if (pMVar1 != (MVPickupOwner *)0x0) {
      unaff_ESI = System.dll::System::Collections::Generic::
                  SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                  ::Single,System::Object]::
                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                            ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                              *)pMVar1,(MethodInfo *)0x0);
      unaff_EDI = TypeInfo__ICurrentItemOwner;
      if (unaff_ESI != (Object *)0x0) {
        iVar3 = func_?(unaff_ESI,TypeInfo__ICurrentItemOwner);
        pIVar5 = TypeInfo__ICurrentItemOwner;
        if (iVar3 == 0) goto code_?;
        piVar6 = (int *)func_?(unaff_ESI,TypeInfo__ICurrentItemOwner);
        unaff_EDI = pIVar5;
        if (piVar6 == (int *)0x0) goto code_?;
        uVar7 = 0;
        uVar8 = *(ushort *)(*piVar6 + 0xb6);
        if (uVar8 != 0) {
          iVar3 = *(int *)(*piVar6 + 0x58);
          do {
            if (*(ICurrentItemOwner__Class **)(iVar3 + (uint)uVar7 * 8) ==
                TypeInfo__ICurrentItemOwner) {
              puVar9 = (undefined4 *)
                        (*piVar6 + (*(int *)(iVar3 + 4 + (uint)uVar7 * 8) + 0x18) * 8);
              goto code_?;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < uVar8);
        }
        puVar9 = (undefined4 *)func_?(piVar6,TypeInfo__ICurrentItemOwner,0);
code_?:
        this_02 = (PickUpItemHealRay *)(*(code *)*puVar9)(piVar6,puVar9[1]);
        unaff_EDI = (ICurrentItemOwner__Class *)StringLiteral_S;
        if (cRam_? == '\0') {
          func_?(_UNK_?);
          cRam_? = '\x01';
        }
        unaff_ESI = (Object *)0x0;
        if (this_02 != (PickUpItemHealRay *)0x0) {
          bVar10 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::
                  WorldObject::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::
                  KogamaSettingWrapperBase]::
                  Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                            ((Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                              *)this_02,(String *)unaff_EDI,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                            );
          if (bVar10 == 0) {
            value_00 = (CrossPlatformInputManager_VirtualButton *)
                       func_?(TypeInfo__System__Int32);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                        *)this_02,(String *)unaff_EDI,value_00,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          else {
            value = (Theme *)func_?(TypeInfo__System__Int32);
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
            Dictionary_2_System_String_Theme__set_Item
                      ((Dictionary_2_System_String_Theme_ *)this_02,(String *)unaff_EDI,value,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                      );
          }
          PickUpItemHealRay_SyncState
                    (this_02,(Dictionary_2_System_Object_System_Object_ *)this_02,(MethodInfo *)0x0)
          ;
          return;
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void UpdateRayHealingLogic(VoxelHit) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRayHealingLogic
               (PickUpItemHealRay *this,VoxelHit hitVoxel,MethodInfo *method)

{
  pMVar1 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetMVObject
                     ((Transform *)hitVoxel.collider,(MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
    this_00 = (InteractionDataHandlerBase *)0x0;
  }
  else {
    this_00 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                        (pMVar1,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?();
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    hitVoxel.point.x =
         (float)
         int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
    ;
    id = (float)MVWorldObjectClientManager::
                MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                          (pMVar3,hitVoxel._36_4_,
                           int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                          );
    hitVoxel.point.x = 0.0;
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectClientManager *)0x0) goto code_?;
    hitVoxel.normal.y = 0.0;
    hitVoxel.point.y = (float)&UNK_?;
    hitVoxel.point.z = (float)pMVar3;
    hitVoxel.normal.x = id;
    pMVar1 = (MVWorldObjectClient *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (pMVar3,(int32_t)id,(MethodInfo *)0x0);
    if (pMVar1 == (MVWorldObjectClient *)0x0) {
      this_00 = (InteractionDataHandlerBase *)0x0;
    }
    else {
      hitVoxel.cubePos.z = 0;
      hitVoxel._30_2_ = 0;
      hitVoxel.normal.z = (float)&UNK_?;
      hitVoxel.cubePos._0_4_ = pMVar1;
      this_00 = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                          (pMVar1,(MethodInfo *)0x0);
    }
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)this_00,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    hitVoxel.point.y = (float)&hitVoxel.distance;
    hitVoxel.point.z = 0.0;
    hitVoxel.point.x = (float)&UNK_?;
    pIVar4 = HealRayHitPackage::HealRayHitPackage_Create
                       ((InteractionData *)hitVoxel.point.y,(MethodInfo *)0x0);
    if (this_00 == (InteractionDataHandlerBase *)0x0) {
code_?:
      hitVoxel.normal.y = 0.0;
      hitVoxel.normal.x = (float)&UNK_?;
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    hitVoxel.point.x = (pIVar4->impulse).y;
    hitVoxel.point.y = (pIVar4->impulse).z;
    hitVoxel.point.z = *(float *)&pIVar4->interactionType;
    hitVoxel.normal.y = 0.0;
    hitVoxel.normal.x = 0.0;
    InteractionDataHandlerBase::InteractionDataHandlerBase_HandleInteraction
              (this_00,*pIVar4,0,(MethodInfo *)0x0);
  }
  else if (cRam_? != '\0') {
    hitVoxel.point.z = *(float *)(iRam_? + 0x13c);
    hitVoxel.point.y = 0.0;
    hitVoxel.point.x = (float)&UNK_?;
    (**(code **)(iRam_? + 0x138))();
    return;
  }
  return;
}


/* Void UpdateRayParticleEffect(VoxelHit, Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRayParticleEffect
               (PickUpItemHealRay *this,VoxelHit hitVoxel,Vector3 direction,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  pMVar3 = (this->fields)._.owner;
  if (pMVar3 != (MVPickupOwner *)0x0) {
    pVVar4 = InventoryItem+ItemDescription::InventoryItem_ItemDescription_get_CameraPreviewerOffset
                       (&VStack_5,(InventoryItem_ItemDescription *)pMVar3,(MethodInfo *)0x0);
    uVar6._0_4_ = pVVar4->x;
    uVar6._4_4_ = pVVar4->y;
    fVar7 = pVVar4->z;
    if ((this->fields).isLockedOn == 0) {
      pTVar8 = (this->fields)._.muzzlePoint;
      if (pTVar8 == (Transform *)0x0) goto code_?;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_5,pTVar8,(MethodInfo *)0x0);
      fStack_9 = pVVar4->x;
      fStack_10 = pVVar4->y;
      fVar7 = pVVar4->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        VStack_11.z = (float)TypeInfo__UnityEngine__Vector3;
        VStack_11.y = (float)&UNK_?;
        func_?();
      }
      a.y = direction.x;
      a.x = (float)hitVoxel.interactionFlags._4_4_;
      a.z = direction.y;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         (&VStack_5,a,0.6,(MethodInfo *)0x0);
      a_00.z = fVar7;
      a_00.x = fStack_9;
      a_00.y = fStack_10;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_5,a_00,*pVVar4,(MethodInfo *)0x0);
      uVar6._0_4_ = pVVar4->x;
      uVar6._4_4_ = pVVar4->y;
      fVar7 = pVVar4->z;
    }
    direction_00.y = direction.x;
    direction_00.x = (float)hitVoxel.interactionFlags._4_4_;
    fireFromPosition.z = fVar7;
    fireFromPosition.x = (float)(int)uVar6;
    fireFromPosition.y = (float)(int)((ulonglong)uVar6 >> 0x20);
    direction_00.z = direction.y;
    pVVar4 = PickUpItemHealRay_CalculateHitPosition
                       (&VStack_12,this,fireFromPosition,direction_00,(float)hitVoxel.cube,
                        (MethodInfo *)0x0);
    VStack_5.y = pVVar4->x;
    VStack_5.z = pVVar4->y;
    pPVar13 = (PickUpItemHealRay *)pVVar4->z;
    pTVar8 = (this->fields)._.muzzlePoint;
    _fStack_10 = VStack_5._4_8_;
    pPStack_14 = pPVar13;
    if (pTVar8 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_11,pTVar8,(MethodInfo *)0x0);
      VStack_12.y = pVVar4->x;
      VStack_12.z = pVVar4->y;
      fVar7 = pVVar4->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
      }
      a_01.z = (float)pPStack_14;
      a_01.x = VStack_5.y;
      a_01.y = VStack_5.z;
      b.z = fVar7;
      b.x = VStack_12.y;
      b.y = VStack_12.z;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         (&VStack_11,a_01,b,(MethodInfo *)0x0);
      uStack_1._0_4_ = pVVar4->x;
      uStack_1._4_4_ = pVVar4->y;
      fStack_2 = pVVar4->z;
      fVar15 = (float10)func_?(&uStack_1,0);
      pPStack_14 = (PickUpItemHealRay *)(float)fVar15;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      if (((this->fields).isLockedOn == 0) &&
         (pMVar3 = (this->fields)._.owner, pMVar3 != (MVPickupOwner *)0x0)) {
        bVar16 = (TypeInfo__VehiclePickupOwner->_1).naturalAligment;
        if (((pMVar3->klass->_1).naturalAligment < bVar16) ||
           ((pMVar3->klass->_1).typeHierarchy[bVar16 - 1] !=
            (Il2CppClass *)TypeInfo__VehiclePickupOwner)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        pMVar18 = (MVPickupOwner *)0x0;
        if (bVar17) {
          pMVar18 = pMVar3;
        }
        if (pMVar18 != (MVPickupOwner *)0x0) {
          if (pMVar3 == (MVPickupOwner *)0x0) goto code_?;
          pVVar4 = InventoryItem+ItemDescription::
                   InventoryItem_ItemDescription_get_CameraPreviewerOffset
                             (&VStack_11,(InventoryItem_ItemDescription *)pMVar3,(MethodInfo *)0x0);
          direction_01.y = direction.x;
          direction_01.x = (float)hitVoxel.interactionFlags._4_4_;
          direction_01.z = direction.y;
          pVVar4 = PickUpItemHealRay_CalculateHitPosition
                             ((Vector3 *)&hitVoxel.transform,this,*pVVar4,direction_01,
                              (float)hitVoxel.cube,(MethodInfo *)0x0);
          fStack_9 = pVVar4->x;
          fStack_10 = pVVar4->y;
          pPVar13 = (PickUpItemHealRay *)pVVar4->z;
        }
      }
      this = pPVar13;
      hitPosition.z = (float)this;
      hitPosition.x = fStack_9;
      hitPosition.y = fStack_10;
      firingDirection.y = direction.x;
      firingDirection.x = (float)hitVoxel.interactionFlags._4_4_;
      firingDirection.z = direction.y;
      PickUpItemHealRay_OnHitParticleUpdate
                (this_00,hitPosition,firingDirection,(float)pPStack_14,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* PickUpItemHealRay+RayCastData UpdateRaycastLocally(Vector3) */

PickUpItemHealRay_RayCastData *
Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaycastLocally
          (PickUpItemHealRay_RayCastData *__return_storage_ptr__,PickUpItemHealRay *this,
          Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&uStack_1,0,0x5c);
  bVar2 = PickUpItemHealRay_IsDirectionValid(this,direction,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pVVar3 = (Vector3 *)func_?();
    fStack_4 = pVVar3->z;
    uStack_5._0_4_ = pVVar3->x;
    uStack_5._4_4_ = pVVar3->y;
    hitVoxels = PickUpItemHealRay_DoRaycast(this,*pVVar3,(MethodInfo *)0x0);
    if (hitVoxels == (List_1_VoxelHit_ *)0x0) {
      func_?();
      pcVar6 = (code *)swi(3);
      pPVar7 = (PickUpItemHealRay_RayCastData *)(*pcVar6)();
      return pPVar7;
    }
    pOVar8 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
             Serialization::JsonProperty]::
             Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                       ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)hitVoxels,
                        MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    if (0 < (int)pOVar8) {
      pVVar9 = PickUpItemHealRay_CalculateClosestVoxelHit
                         ((VoxelHit *)&stack0xffffff48,this,hitVoxels,(MethodInfo *)0x0);
      fStack_10 = (pVVar9->point).x;
      fStack_11 = (pVVar9->point).y;
      fStack_12 = (pVVar9->point).z;
      fStack_13 = (pVVar9->normal).x;
      fStack_14 = (pVVar9->normal).y;
      fStack_15 = (pVVar9->normal).z;
      uStack_16._0_2_ = (pVVar9->cubePos).x;
      uStack_16._2_2_ = (pVVar9->cubePos).y;
      uStack_17 = *(undefined4 *)&(pVVar9->cubePos).z;
      iStack_18 = pVVar9->face;
      uStack_19 = *(undefined4 *)&pVVar9->isCubeHit;
      iStack_20 = pVVar9->woId;
      pCStack_21 = pVVar9->cube;
      fStack_22 = pVVar9->distance;
      pCStack_23 = pVVar9->collider;
      pTStack_24 = pVVar9->transform;
      uStack_25 = *(undefined4 *)&pVVar9->field_0x3c;
      uStack_26 = pVVar9->interactionFlags;
      iStack_27 = ((this->fields).isLockedOn != 0) + 1;
      goto code_?;
    }
  }
  iStack_27 = 0;
code_?:
  __return_storage_ptr__->Status = iStack_27;
  *(undefined4 *)&__return_storage_ptr__->field_0x4 = uStack_1;
  (__return_storage_ptr__->HitVoxel).point.x = fStack_10;
  (__return_storage_ptr__->HitVoxel).point.y = fStack_11;
  (__return_storage_ptr__->HitVoxel).point.z = fStack_12;
  (__return_storage_ptr__->HitVoxel).normal.x = fStack_13;
  (__return_storage_ptr__->HitVoxel).normal.y = fStack_14;
  (__return_storage_ptr__->HitVoxel).normal.z = fStack_15;
  (__return_storage_ptr__->HitVoxel).cubePos.x = (undefined2)uStack_16;
  (__return_storage_ptr__->HitVoxel).cubePos.y = uStack_16._2_2_;
  *(undefined4 *)&(__return_storage_ptr__->HitVoxel).cubePos.z = uStack_17;
  (__return_storage_ptr__->HitVoxel).face = iStack_18;
  *(undefined4 *)&(__return_storage_ptr__->HitVoxel).isCubeHit = uStack_19;
  (__return_storage_ptr__->HitVoxel).woId = iStack_20;
  (__return_storage_ptr__->HitVoxel).cube = pCStack_21;
  (__return_storage_ptr__->HitVoxel).distance = fStack_22;
  (__return_storage_ptr__->HitVoxel).collider = pCStack_23;
  (__return_storage_ptr__->HitVoxel).transform = pTStack_24;
  *(undefined4 *)&(__return_storage_ptr__->HitVoxel).field_0x3c = uStack_25;
  *(undefined4 *)&(__return_storage_ptr__->HitVoxel).interactionFlags = (undefined4)uStack_26;
  *(undefined4 *)((int)&(__return_storage_ptr__->HitVoxel).interactionFlags + 4) = uStack_26._4_4_;
  (__return_storage_ptr__->Direction).x = (float)uStack_5;
  (__return_storage_ptr__->Direction).y = uStack_5._4_4_;
  (__return_storage_ptr__->Direction).z = fStack_4;
  *(undefined4 *)&__return_storage_ptr__->field_0x5c = uStack_28;
  return __return_storage_ptr__;
}


/* Void UpdateRaycastRemotely(Vector3) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaycastRemotely
               (PickUpItemHealRay *this,Vector3 direction,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  uStack_2 = 0;
  fStack_3 = 0.0;
  pGVar4 = (this->fields).stuckObject;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pGVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar5 == 0) {
    pGVar4 = (this->fields).stuckObject;
    if ((pGVar4 != (GameObject *)0x0) &&
       (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (pGVar4,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_8,pTVar6,(MethodInfo *)0x0);
      a = *pVVar7;
      pTVar6 = (this->fields)._.muzzlePoint;
      if (pTVar6 != (Transform *)0x0) {
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           (&VStack_9,pTVar6,(MethodInfo *)0x0);
        VStack_8.y = pVVar7->x;
        VStack_8.z = pVVar7->y;
        fVar10 = pVVar7->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        b.z = fVar10;
        b.x = VStack_8.y;
        b.y = VStack_8.z;
        pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           (&VStack_9,a,b,(MethodInfo *)0x0);
        uStack_2._0_4_ = pVVar7->x;
        uStack_2._4_4_ = pVVar7->y;
        fStack_3 = pVVar7->z;
        fVar11 = (float10)func_?();
        pGVar4 = (this->fields).stuckObject;
        fVar10 = (float)fVar11;
        if ((pGVar4 != (GameObject *)0x0) &&
           (pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar4,(MethodInfo *)0x0), pTVar6 != (Transform *)0x0)) {
          pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                             (&VStack_9,pTVar6,(MethodInfo *)0x0);
code_?:
          PickUpItemHealRay_OnHitParticleUpdate(this,*pVVar7,direction,fVar10,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    hitVoxels = PickUpItemHealRay_DoRaycast(this,direction,(MethodInfo *)0x0);
    if (hitVoxels != (List_1_VoxelHit_ *)0x0) {
      pOVar12 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)hitVoxels,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
      if ((int)pOVar12 < 1) {
        this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                   *)(this->fields).rayParticles;
        if (this_00 !=
            (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)0x0) {
          pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                      Int32,UnityEngine::Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                      Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                                (this_00,(MethodInfo *)0x0);
          fVar11 = (float10)func_?();
          VStack_8.z = (float)fVar11;
          func_?();
          this_01 = (this->fields).hitParticles;
          if (this_01 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                      (this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        pVVar13 = PickUpItemHealRay_CalculateClosestVoxelHit
                           ((VoxelHit *)&stack0xffffff3c,this,hitVoxels,(MethodInfo *)0x0);
        fVar10 = pVVar13->distance;
        this_02 = (this->fields)._.owner;
        if (this_02 != (MVPickupOwner *)0x0) {
          pVVar7 = InventoryItem+ItemDescription::
                   InventoryItem_ItemDescription_get_CameraPreviewerOffset
                             (&VStack_9,(InventoryItem_ItemDescription *)this_02,(MethodInfo *)0x0)
          ;
          pVVar7 = PickUpItemHealRay_CalculateHitPosition
                             (&VStack_9,this,*pVVar7,direction,fVar10,(MethodInfo *)0x0);
          goto code_?;
        }
      }
    }
  }
  func_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void UpdateRaysVisualRepresentation() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateRaysVisualRepresentation
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  fStack_5 = 0.0;
  this_00 = (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
             *)(this->fields).rayParticles;
  uStack_6 = 0;
  uStack_7 = 0;
  uStack_8 = 0;
  fStack_9 = 0.0;
  if (this_00 !=
      (Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_ *)
      0x0) {
    pOStack_1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
                Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
                Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                          (this_00,(MethodInfo *)0x0);
    x = (this->fields).stuckObject;
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar10 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar10 == 0) {
      func_?(&uStack_6,0x3e68e8e9,0x3f800000,0x3f058586);
      color.g = (float)uStack_7;
      color.r = (float)uStack_6;
      color.b = (float)uStack_8;
      color.a = fStack_9;
      pPVar11 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
               ParticleSystem_MinMaxGradient_op_Implicit
                         ((ParticleSystem_MinMaxGradient *)&stack0xffffff8c,color,(MethodInfo *)0x0)
      ;
      uVar12 = (pPVar11->m_ColorMax).g;
      uVar13 = (pPVar11->m_ColorMax).b;
      func_?(&pOStack_1,pPVar11->m_Mode,pPVar11->m_GradientMin,pPVar11->m_GradientMax,
                      (pPVar11->m_ColorMin).r,(pPVar11->m_ColorMin).g,(pPVar11->m_ColorMin).b,
                      (pPVar11->m_ColorMin).a,(pPVar11->m_ColorMax).r,uVar12,uVar13,
                      (pPVar11->m_ColorMax).a,0);
      func_?(&pOStack_1,0x3e99999a,0);
      pAVar14 = (this->fields).audioSource;
      if (pAVar14 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                  (pAVar14,1.0,(MethodInfo *)0x0);
        this_01 = (this->fields)._.owner;
        if (this_01 != (MVPickupOwner *)0x0) {
          bVar10 = MVPickupOwner::MVPickupOwner_get_IsLocal(this_01,(MethodInfo *)0x0);
          if ((bVar10 == 0) || ((this->fields).isShooting == 0)) {
            return;
          }
          pPVar15 = (this->fields).rayParticles;
          if (pPVar15 != (ParticleSystem *)0x0) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pPVar15,(MethodInfo *)0x0);
            pTVar16 = (this->fields)._.muzzlePoint;
            if (pTVar16 != (Transform *)0x0) {
              pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_18,pTVar16,(MethodInfo *)0x0);
              uStack_19._0_4_ = pVVar17->x;
              uStack_19._4_4_ = pVVar17->y;
              fVar20 = pVVar17->z;
              pVVar17 = PickUpItemHealRay_CalculateParticlesRotation
                                  (&VStack_21,this,(MethodInfo *)0x0);
              VStack_18.y = pVVar17->x;
              VStack_18.z = pVVar17->y;
              fVar22 = pVVar17->z;
              if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                func_?(TypeInfo__UnityEngine__Vector3);
              }
              a.z = fVar20;
              a.x = (float)(undefined4)uStack_19;
              a.y = (float)uStack_19._4_4_;
              b.z = fVar22;
              b.x = VStack_18.y;
              b.y = VStack_18.z;
              pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  (&VStack_21,a,b,(MethodInfo *)0x0);
              if (this_02 != (Transform *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                          (this_02,*pVVar17,(MethodInfo *)0x0);
                return;
              }
            }
          }
        }
      }
    }
    else {
      pVVar17 = PickUpItemHealRay_CalculateStuckPosition(&VStack_21,this,(MethodInfo *)0x0);
      uStack_19._0_4_ = pVVar17->x;
      uStack_19._4_4_ = pVVar17->y;
      fVar20 = pVVar17->z;
      pPVar15 = (this->fields).rayParticles;
      if ((pPVar15 != (ParticleSystem *)0x0) &&
         (pTVar16 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                              ((Component_1 *)pPVar15,(MethodInfo *)0x0), pTVar16 != (Transform *)0x0
         )) {
        worldPosition.z = fVar20;
        worldPosition.x = (float)(undefined4)uStack_19;
        worldPosition.y = (float)uStack_19._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_LookAt_2
                  (pTVar16,worldPosition,(MethodInfo *)0x0);
        func_?(&uStack_2,0,0x3f0b8b8c);
        color_00.g = (float)uStack_3;
        color_00.r = (float)uStack_2;
        color_00.b = (float)uStack_4;
        color_00.a = fStack_5;
        pPVar11 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                 ParticleSystem_MinMaxGradient_op_Implicit
                           ((ParticleSystem_MinMaxGradient *)&stack0xffffff8c,color_00,
                            (MethodInfo *)0x0);
        func_?(&pOStack_1,pPVar11->m_Mode,pPVar11->m_GradientMin,pPVar11->m_GradientMax,
                        (pPVar11->m_ColorMin).r);
        func_?();
        pAVar14 = (this->fields).audioSource;
        if (pAVar14 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_pitch
                    (pAVar14,2.0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?(0);
  pcVar23 = (code *)swi(3);
  (*pcVar23)();
  return;
}


/* Void UpdateStuckObject(MVWorldObjectClient) */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_UpdateStuckObject
               (PickUpItemHealRay *this,MVWorldObjectClient *hitObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (hitObject == (MVWorldObjectClient *)0x0) {
    func_?();
  }
  else {
    pCVar1 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                       ((DayNightCycle *)hitObject,(MethodInfo *)0x0);
    (this->fields).stuckObject = (GameObject *)pCVar1;
    iVar2 = func_?(hitObject,TypeInfo__IHealRayAttachementObject);
    unaff_EDI = TypeInfo__IHealRayAttachementObject;
    if (iVar2 == 0) {
      return;
    }
    iVar2 = func_?(hitObject,TypeInfo__IHealRayAttachementObject);
    pIVar3 = TypeInfo__IHealRayAttachementObject;
    if ((iVar2 != 0) &&
       (iVar2 = func_?(hitObject,TypeInfo__IHealRayAttachementObject), unaff_EDI = pIVar3,
       iVar2 != 0)) {
      pGVar4 = (GameObject *)func_?(0,TypeInfo__IHealRayAttachementObject,iVar2);
      (this->fields).stuckObject = pGVar4;
      return;
    }
  }
  func_?(hitObject,unaff_EDI);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* PickUpItemHealRay() */

void Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay__ctor
               (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).maxRayRange = 20.0;
  (this->fields).maxLockOnRange = 25.0;
  (this->fields).rayMinimumChargeTime = 0.5;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
  uVar7 = LayerUtil::LayerUtil_GetLayerNumber(LayerFlags__Enum_Logic,(MethodInfo *)0x0);
  pOVar8 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::
           Experimental::TerrainAPI::TerrainUtility+TerrainMap]::
           Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap__System_Collections_ICollection_get_SyncRoot
                     ((Dictionary_2_System_Int32_UnityEngine_Experimental_TerrainAPI_TerrainUtility_TerrainMap_
                       *)(~(1 << (uVar7 & 0x1f)) & 0xfffffffb),(MethodInfo *)0x0);
  (this->fields).layers.m_Mask = (int32_t)pOVar8;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar9 = (MeshRenderer__Array *)func_?();
  (this->fields)._.meshRenderers = pMVar9;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}


/* Int32 get_Quantity() */

int32_t Assembly-CSharp.dll::PickUpItemHealRay::PickUpItemHealRay_get_Quantity
                  (PickUpItemHealRay *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).currentAmmoLeft.currentCryptoKey;
  AVar2 = (this->fields).currentAmmoLeft.hiddenValue;
  pBVar3 = (this->fields).currentAmmoLeft.hiddenValueOld;
  fVar4 = (this->fields).currentAmmoLeft.fakeValue;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_RoundToInt
                    ((fVar4 / fVar5) * _UNK_?,(MethodInfo *)0x0);
  return iVar1;
}

