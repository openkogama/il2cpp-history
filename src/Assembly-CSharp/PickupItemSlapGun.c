
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_Awake
               (PickupItemSlapGun *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).layerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  return;
}


/* Vector3 ComputeImpulseDirection(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_ComputeImpulseDirection
                    (Vector3 *__return_storage_ptr__,PickupItemSlapGun *this,Ray lineOfFire,
                    MethodInfo *method)

{
  fStack_1 = 0.0;
  uStack_2 = 0;
  pVVar3 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                     (&VStack_4,(InputToPlayerMovementAndroid *)&lineOfFire,(MethodInfo *)0x0);
  uVar5 = pVVar3->x;
  uVar6 = pVVar3->y;
  fStack_1 = pVVar3->z;
  uStack_2 = CONCAT44((float)uVar6 + _UNK_?,uVar5);
  puVar7 = (undefined8 *)func_?(&VStack_4,&uStack_2,0);
  uVar8 = *puVar7;
  fVar9 = *(float *)(puVar7 + 1);
  __return_storage_ptr__->x = (float)(int)uVar8;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar8 >> 0x20);
  __return_storage_ptr__->z = fVar9;
  return __return_storage_ptr__;
}


/* Vector3 FindRayTarget(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_FindRayTarget
                    (Vector3 *__return_storage_ptr__,PickupItemSlapGun *this,Ray lineOfFire,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  func_?(&stack0xffffff98,0,0x48);
  pHVar1 = TypeInfo__System__Collections__Generic__HashSet<int>;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  __return_storage_ptr__->z = 0.0;
  fVar2 = (this->fields).maxRange;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)func_?(pHVar1);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  iVar3 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  fVar4 = 0.0;
  bVar5 = CollisionDetection::CollisionDetection_MVHit_1
                    (lineOfFire,(VoxelHit *)&stack0xffffff98,fVar2,
                     (HashSet_1_System_Int32_ *)this_00,1 << ((byte)iVar3 & 0x1f),(MethodInfo *)0x0)
  ;
  if (bVar5 == 0) {
    puVar6 = (undefined8 *)func_?();
    uVar7 = *puVar6;
    fVar2 = *(float *)(puVar6 + 1);
    __return_storage_ptr__->x = (float)(int)uVar7;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar7 >> 0x20);
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = fVar4;
  __return_storage_ptr__->y = fStack_8;
  __return_storage_ptr__->z = fStack_9;
  return __return_storage_ptr__;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun_OnFire
               (PickupItemSlapGun *this,bool isLocal,MethodInfo *method)

{
  this_00 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puStack_1 = (undefined *)0x0;
  pVVar2 = (Vector3 *)0x0;
  puVar3 = (undefined *)0x0;
  pVVar4 = (Vector3 *)0x0;
  fVar5 = 0.0;
  fVar6 = 0.0;
  pTVar7 = (this->fields)._._.muzzlePoint;
  fVar8 = fStack_9;
  if (pTVar7 != (Transform *)0x0) {
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_11,pTVar7,(MethodInfo *)0x0);
    iStack_12._0_4_ = pVVar10->x;
    iStack_12._4_4_ = pVVar10->y;
    fVar13 = pVVar10->z;
    pMVar14 = (this->fields)._._.owner;
    fVar8 = fStack_9;
    if (pMVar14 != (MVPickupOwner *)0x0) {
      pVVar10 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_11,pMVar14,(MethodInfo *)0x0);
      uVar15 = pVVar10->x;
      fVar16 = pVVar10->y;
      pCVar17 = (Collider *)pVVar10->z;
      pTVar7 = (Transform *)0x0;
      func_?(&puStack_1,(int)iStack_12,(int)((ulonglong)iStack_12 >> 0x20),fVar13,uVar15);
      pAVar18 = (this->fields).slapSounds;
      pAVar19 = (this->fields).audioSource;
      fVar8 = fStack_9;
      if (pAVar18 != (AudioClip__Array *)0x0) {
        uVar20 = UnityEngine.CoreModule.dll::UnityEngine::Random::Random_1_RandomRangeInt
                           (0,pAVar18->max_length - 1,(MethodInfo *)0x0);
        if (pAVar18->max_length <= uVar20) goto code_?;
        fVar8 = fStack_9;
        if (pAVar19 != (AudioSource *)0x0) {
          UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                    (pAVar19,pAVar18->vector[uVar20],(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            func_?(TypeInfo__MVGameControllerBase);
          }
          this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
          pAVar19 = (this->fields).audioSource;
          fVar8 = fStack_9;
          if (pAVar19 != (AudioSource *)0x0) {
            pTVar21 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)pAVar19,(MethodInfo *)0x0);
            fVar8 = fStack_9;
            if (pTVar21 != (Transform *)0x0) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  (&VStack_11,pTVar21,(MethodInfo *)0x0);
              fVar8 = fStack_9;
              if (this_01 != (AudioManager *)0x0) {
                AudioManager::AudioManager_Play_2
                          (this_01,StringLiteral_Sound___slapGunFire,pAVar19,*pVVar10,
                           (MethodInfo *)0x0);
                pMVar14 = (this->fields)._._.owner;
                fVar8 = fStack_9;
                if (pMVar14 != (MVPickupOwner *)0x0) {
                  bVar22 = MVPickupOwner::MVPickupOwner_get_IsLocal(pMVar14,(MethodInfo *)0x0);
                  pVVar10 = pVVar4;
                  if (bVar22 == 0) {
code_?:
                    unique0x1000112a = fVar6;
                    puStack_23 = (undefined *)fVar5;
                    puVar24 = puStack_1;
                    pVStack_25 = pVVar2;
                    puStack_26 = puVar3;
                    pVStack_27 = pVVar10;
                    if (cRam_? == '\0') {
                      iStack_12 = _puStack_40;
                      func_?(_UNK_?);
                      cRam_? = '\x01';
                    }
                    pVVar2 = pVStack_27;
                    pVVar4 = pVStack_25;
                    puVar3 = puStack_26;
                    iStack_12 = _puStack_40;
                    func_?(&stack0xffffff08,0,0x48);
                    fVar5 = (this_00->fields).maxRange;
                    this_08 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
                              func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
                    System.Core.dll::System::Collections::Generic::
                    HashSet`1[AvatarModifierPackage+AvatarModifier]::
                    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                              (this_08,
                               MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
                    iVar28 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::
                             LayerMask_NameToLayer(StringLiteral_Default,(MethodInfo *)0x0);
                    ray_00.m_Origin.y = (float)pVVar4;
                    ray_00.m_Origin.x = (float)puVar24;
                    ray_00.m_Origin.z = (float)puVar3;
                    ray_00.m_Direction.x = (float)pVVar2;
                    ray_00.m_Direction.y = (float)iStack_12;
                    ray_00.m_Direction.z = (float)((ulonglong)iStack_12 >> 0x20);
                    bVar22 = CollisionDetection::CollisionDetection_MVHit_1
                                      (ray_00,(VoxelHit *)&stack0xffffff08,fVar5,
                                       (HashSet_1_System_Int32_ *)this_08,1 << ((byte)iVar28 & 0x1f)
                                       ,(MethodInfo *)0x0);
                    if (bVar22 == 0) {
                      piVar29 = (int64_t *)
                                func_?(&stack0xffffff8c,&stack0xffffffb0,
                                                (this_00->fields).maxRange,0);
                      iStack_12 = *piVar29;
                      pTVar7 = *(Transform **)(piVar29 + 1);
                    }
                    else {
                      iStack_12 = CONCAT44(pCVar17,fVar16);
                    }
                    pTVar21 = (this_00->fields)._._.muzzlePoint;
                    pIVar30 = (this_00->fields).impulseRayPrefab;
                    fVar8 = fStack_9;
                    if (pTVar21 != (Transform *)0x0) {
                      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_position
                                          ((Vector3 *)&stack0xffffff8c,pTVar21,(MethodInfo *)0x0);
                      VStack_11.y = pVVar2->x;
                      VStack_11.z = pVVar2->y;
                      fVar5 = pVVar2->z;
                      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Quaternion);
                      }
                      pQVar31 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_get_identity((Quaternion *)&puStack_26,(MethodInfo *)0x0)
                      ;
                      puStack_26 = (undefined *)pQVar31->x;
                      pVStack_27 = (Vector3 *)pQVar31->y;
                      puStack_23 = (undefined *)pQVar31->z;
                      unique0x10001191 = pQVar31->w;
                      puVar3 = (undefined *)pQVar31->z;
                      fVar6 = pQVar31->w;
                      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                           0x2000000) != 0) &&
                         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                        func_?(TypeInfo__UnityEngine__Object);
                        puVar3 = puStack_23;
                        fVar6 = stack0xffffffc4;
                      }
                      position.z = fVar5;
                      position.x = VStack_11.y;
                      position.y = VStack_11.z;
                      rotation.y = (float)pVStack_27;
                      rotation.x = (float)puStack_26;
                      rotation.z = (float)puVar3;
                      rotation.w = fVar6;
                      pIVar30 = (ImpulseRay *)
                                UnityEngine.CoreModule.dll::UnityEngine::Object::
                                Object_1_Instantiate_161
                                          ((SentryGunBeam *)pIVar30,position,rotation,
                                           ImpulseRay_MethodInfo__UnityEngine__Object__Instantiate<ImpulseRay>_ImpulseRay__UnityEngine__Vector3__UnityEngine__Quaternion_
                                          );
                      fVar8 = fStack_9;
                      if (pIVar30 != (ImpulseRay *)0x0) {
                        target.z = (float)pTVar7;
                        target.x = (float)(undefined4)iStack_12;
                        target.y = (float)iStack_12._4_4_;
                        ImpulseRay::ImpulseRay_Initialize(pIVar30,target,(MethodInfo *)0x0);
                        (pIVar30->fields).radius = 1.2;
                        unique0x10000c5e = (this_00->fields).slapColor.g;
                        fVar5 = (this_00->fields).slapColor.b;
                        fVar6 = (this_00->fields).slapColor.a;
                        (pIVar30->fields).startColor.r = (this_00->fields).slapColor.r;
                        (pIVar30->fields).startColor.g = unique0x10000c5e;
                        (pIVar30->fields).startColor.b = fVar5;
                        (pIVar30->fields).startColor.a = fVar6;
                        return;
                      }
                    }
                  }
                  else {
                    pMVar14 = (this->fields)._._.owner;
                    iStack_12 = CONCAT44(fVar6,fVar5);
                    fVar13 = (this->fields).maxRange;
                    fVar8 = fStack_9;
                    if (pMVar14 != (MVPickupOwner *)0x0) {
                      puVar24 = puStack_1;
                      pVVar32 = pVVar2;
                      puVar33 = puVar3;
                      ignoreWoIds = (HashSet_1_System_Int32_ *)
                                    (*(code *)(pMVar14->klass->vtable).get_IgnoreWOIDs.method)
                                              (pMVar14,pMVar14->klass[1]._0.image);
                      ray.m_Origin.y = (float)pVVar32;
                      ray.m_Origin.x = (float)puVar24;
                      ray.m_Origin.z = (float)puVar33;
                      ray.m_Direction.x = (float)pVVar4;
                      ray.m_Direction.y = (float)(int)iStack_12;
                      ray.m_Direction.z = (float)((ulonglong)iStack_12 >> 0x20);
                      pLStack_34 = CollisionDetection::CollisionDetection_MVSphereCastAll
                                             (ray,2.0,fVar13,ignoreWoIds,(this->fields).layerMask,
                                              (MethodInfo *)0x0);
                      this = (PickupItemSlapGun *)0x0;
                      fVar8 = fStack_9;
                      if (pLStack_34 != (List_1_VoxelHit_ *)0x0) {
                        while( true ) {
                          pOVar35 = mscorlib.dll::System::Collections::ObjectModel::
                                    Collection`1[Newtonsoft::Json::Serialization::JsonProperty]::
                                    Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                                              ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_
                                                *)pLStack_34,
                                               MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__
                                              );
                          if ((int)pOVar35 <= (int)this) break;
                          pVVar36 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                                    List_1_VoxelHit__get_Item
                                              ((VoxelHit *)&stack0xffffff08,pLStack_34,(int32_t)this
                                               ,
                                               MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                              );
                          fVar13 = (pVVar36->point).y;
                          fVar37 = (pVVar36->point).z;
                          fVar38 = (pVVar36->normal).x;
                          fStack_39 = (pVVar36->normal).y;
                          fStack_40 = (pVVar36->normal).z;
                          uStack_41._0_2_ = (pVVar36->cubePos).x;
                          uStack_41._2_2_ = (pVVar36->cubePos).y;
                          puStack_42 = *(undefined **)&(pVVar36->cubePos).z;
                          iVar28 = pVVar36->face;
                          uVar43 = *(undefined4 *)&pVVar36->isCubeHit;
                          id = pVVar36->woId;
                          pCVar44 = pVVar36->cube;
                          fVar16 = pVVar36->distance;
                          pCVar17 = pVVar36->collider;
                          pTVar7 = pVVar36->transform;
                          uVar45 = *(undefined4 *)&pVVar36->field_0x3c;
                          iStack_12 = pVVar36->interactionFlags;
                          pVVar4 = pVVar2;
                          puVar24 = puVar3;
                          pVVar32 = pVVar10;
                          fVar46 = fVar5;
                          fVar47 = fVar6;
                          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                            func_?();
                            pVVar4 = pVVar2;
                            puVar24 = puVar3;
                            pVVar32 = pVVar10;
                            fVar46 = fVar5;
                            fVar47 = fVar6;
                          }
                          pMVar48 = MVGameControllerBase::MVGameControllerBase_get_Game
                                              ((MethodInfo *)0x0);
                          fVar8 = fStack_9;
                          if (pMVar48 == (MVNetworkGame *)0x0) goto code_?;
                          this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                     *)CloudyTheme::CloudyTheme_get_Identifier
                                                 ((CloudyTheme *)pMVar48,(MethodInfo *)0x0);
                          fVar8 = fStack_9;
                          if (this_02 ==
                              (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                               *)0x0) goto code_?;
                          this_03 = (RuntimeEventManager *)
                                    System.dll::System::Collections::Generic::
                                    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                    ::Single,System::Object]::
                                    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                              (this_02,(MethodInfo *)0x0);
                          fVar8 = fStack_9;
                          if (this_03 == (RuntimeEventManager *)0x0) goto code_?;
                          voxelHit.point.y = fVar37;
                          voxelHit.point.x = fVar13;
                          voxelHit.point.z = fVar38;
                          voxelHit.normal.x = fStack_39;
                          voxelHit.normal.y = fStack_40;
                          voxelHit.normal.z = (float)uStack_41;
                          voxelHit.cubePos._0_4_ = puStack_42;
                          voxelHit._28_4_ = iVar28;
                          voxelHit.face = uVar43;
                          voxelHit._36_4_ = id;
                          voxelHit.woId = (int32_t)pCVar44;
                          voxelHit.cube = (Cube *)fVar16;
                          voxelHit.distance = (float)pCVar17;
                          voxelHit.collider = (Collider *)pTVar7;
                          voxelHit.transform = (Transform *)uVar45;
                          voxelHit._60_4_ = (float)iStack_12;
                          voxelHit.interactionFlags._0_4_ = (float)((ulonglong)iStack_12 >> 0x20);
                          voxelHit.interactionFlags._4_4_ = (this_00->fields).slapStrength;
                          RuntimeEventManager::RuntimeEventManager_SendRemoveOneFineGrainedCube
                                    (this_03,voxelHit,0.0,in_stack_49);
                          in_stack_49 = (MethodInfo *)0x0;
                          this_04 = MVGameControllerBase::MVGameControllerBase_get_WOCM
                                              ((MethodInfo *)0x0);
                          fVar8 = fStack_9;
                          if (this_04 == (MVWorldObjectClientManager *)0x0) goto code_?;
                          this_05 = (MVWorldObjectClient *)
                                    MVWorldObjectClientManager::
                                    MVWorldObjectClientManager_GetWorldObject
                                              (this_04,id,(MethodInfo *)0x0);
                          __return_storage_ptr__ = &VStack_50;
                          lineOfFire.m_Origin.y = (float)pVVar4;
                          lineOfFire.m_Origin.x = (float)puStack_1;
                          lineOfFire.m_Origin.z = (float)puVar24;
                          lineOfFire.m_Direction.x = (float)pVVar32;
                          lineOfFire.m_Direction.y = fVar46;
                          lineOfFire.m_Direction.z = fVar47;
                          pPVar51 = this_00;
                          puVar33 = puStack_1;
                          pVVar2 = PickupItemSlapGun_ComputeImpulseDirection
                                              (__return_storage_ptr__,this_00,lineOfFire,
                                               (MethodInfo *)0x0);
                          fStack_9 = (this_00->fields).slapStrength;
                          uStack_52._0_4_ = pVVar2->x;
                          uStack_52._4_4_ = pVVar2->y;
                          fVar5 = pVVar2->z;
                          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                            func_?();
                          }
                          puVar3 = (undefined *)uStack_52;
                          pVVar10 = (Vector3 *)((ulonglong)uStack_52 >> 0x20);
                          pVVar2 = (Vector3 *)&stack0xffffff8c;
                          a.z = fVar5;
                          a.x = (float)(undefined4)uStack_52;
                          a.y = (float)uStack_52._4_4_;
                          pVVar53 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                    Vector3_op_Multiply(pVVar2,a,fStack_9,(MethodInfo *)0x0);
                          VStack_11.y = pVVar53->x;
                          VStack_11.z = pVVar53->y;
                          fVar8 = pVVar53->z;
                          if (this_05 == (MVWorldObjectClient *)0x0) goto code_?;
                          stack0xffffffc4 = (float)this_05;
                          fVar6 = fStack_9;
                          fStack_9 = pVVar53->z;
                          x = MVWorldObjectClient::
                              MVWorldObjectClient_get_InteractionDataHandlerBase
                                        (this_05,(MethodInfo *)0x0);
                          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr &
                               0x2000000) != 0) &&
                             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                            func_?();
                          }
                          uVar54 = 0;
                          uVar43 = 0;
                          stack0xffffffc4 = (float)&UNK_?;
                          pIVar55 = x;
                          bVar22 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                                  Object_1_op_Inequality
                                            ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
                          if (bVar22 != 0) {
                            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr &
                                 0x2000000) != 0) &&
                               ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                              VStack_11.y = (float)TypeInfo__MVGameControllerBase;
                              VStack_11.x = (float)&UNK_?;
                              func_?();
                            }
                            pMVar48 = MVGameControllerBase::MVGameControllerBase_get_Game
                                                ((MethodInfo *)0x0);
                            fVar8 = fStack_9;
                            if (pMVar48 == (MVNetworkGame *)0x0) goto code_?;
                            this_06 = MVNetworkGame::MVNetworkGame_get_LocalPlayer
                                                (pMVar48,(MethodInfo *)0x0);
                            fVar8 = fStack_9;
                            if (this_06 == (MVLocalPlayer *)0x0) goto code_?;
                            bVar22 = MVPlayer::MVPlayer_IsOnSameTeam_1
                                              ((MVPlayer *)this_06,this_05,(MethodInfo *)0x0);
                            if (bVar22 == 0) {
                              uStack_52 = CONCAT44((this_00->fields)._._.owner,(undefined4)uStack_52
                                                  );
                              impulse.z = fStack_9;
                              impulse.x = VStack_11.y;
                              impulse.y = VStack_11.z;
                              pIVar56 = SlapGunHitPackage::SlapGunHitPackage_Create
                                                  ((InteractionData *)&pVStack_25,impulse,
                                                   (MethodInfo *)0x0);
                              fVar8 = fStack_9;
                              if (x == (InteractionDataHandlerBase *)0x0) goto code_?;
                              fVar16 = *(float *)&pIVar56->interactionType;
                              pCVar17 = (Collider *)0x0;
                              func_?(7,x,uStack_52._4_4_,pIVar56->damage,
                                              (pIVar56->impulse).x,(pIVar56->impulse).y,
                                              (pIVar56->impulse).z);
                              iVar57 = func_?(this_05,TypeInfo__IBulletImpactVisualizer);
                              if (iVar57 != 0) {
                                pMVar14 = (this_00->fields)._._.owner;
                                puStack_26 = puStack_1;
                                stack0xffffffc4 = (float)pVVar10;
                                puStack_23 = puVar3;
                                VStack_11.z = fVar6;
                                VStack_11.y = fVar5;
                                pVStack_27 = pVVar2;
                                fVar8 = fStack_9;
                                if (pMVar14 == (MVPickupOwner *)0x0) goto code_?;
                                this_07 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                                          System.dll::System::Collections::Generic::
                                          SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                                          ::Single,System::Object]::
                                          SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                                                    ((
                                                  SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                                  *)pMVar14,(MethodInfo *)0x0);
                                fVar8 = fStack_9;
                                if (this_07 == (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)
                                goto code_?;
                                pOVar35 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                                          TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                                          TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                                                    (this_07,(MethodInfo *)0x0);
                                if ((((uint)(TypeInfo__PickupItemSlapGun->vtable).Equals.methodPtr &
                                     0x2000000) != 0) &&
                                   ((TypeInfo__PickupItemSlapGun->_1).cctor_started == 0)) {
                                  func_?(TypeInfo__PickupItemSlapGun);
                                }
                                uStack_52 = CONCAT44(TypeInfo__PickupItemSlapGun->static_fields->
                                                     damage,(undefined4)uStack_52);
                                iVar57 = func_?(this_05,TypeInfo__IBulletImpactVisualizer);
                                fVar8 = fStack_9;
                                if (iVar57 == 0) goto code_?;
                                uVar43 = func_?(this_05,TypeInfo__IBulletImpactVisualizer,
                                                         __return_storage_ptr__,pPVar51,puVar33,
                                                         pVVar4,fStack_39,fStack_40,uStack_41,
                                                         puStack_42,puVar24,pVVar32,fVar46,fVar47,
                                                         pIVar55,uVar43,uVar54,uVar45,iStack_12,
                                                         puStack_26,pVStack_27,puStack_23,
                                                         stack0xffffffc4,VStack_11.y,VStack_11.z,
                                                         pOVar35,uStack_52._4_4_);
                                func_?(0,TypeInfo__IBulletImpactVisualizer,uVar43);
                              }
                            }
                          }
                          this = (PickupItemSlapGun *)((int)&this->klass + 1);
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
      }
    }
  }
code_?:
  fStack_9 = fVar8;
  func_?(0);
code_?:
  uVar43 = func_?(0,0);
  func_?(uVar43);
  pcVar58 = (code *)swi(3);
  (*pcVar58)();
  return;
}


/* PickupItemSlapGun() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  fStack_4 = 0.0;
  fStack_5 = 0.0;
  fStack_6 = 0.0;
  fStack_7 = 0.0;
  func_?(&uStack_3,0,0,0,0);
  impulse.z = fStack_2;
  impulse.x = (float)(undefined4)uStack_3;
  impulse.y = (float)uStack_3._4_4_;
  pIVar8 = SlapGunHitPackage::SlapGunHitPackage_Create(&IStack_9,impulse,(MethodInfo *)0x0);
  fStack_4 = pIVar8->damage;
  fStack_5 = (pIVar8->impulse).x;
  fStack_6 = (pIVar8->impulse).y;
  fStack_7 = (pIVar8->impulse).z;
  uStack_1._0_1_ = pIVar8->interactionType;
  uStack_1._1_1_ = pIVar8->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
  fVar10 = (float10)func_?(&fStack_4,0);
  TypeInfo__PickupItemSlapGun->static_fields->damage = (float)fVar10;
  return;
}


/* PickupItemSlapGun() */

void Assembly-CSharp.dll::PickupItemSlapGun::PickupItemSlapGun__ctor
               (PickupItemSlapGun *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  (this->fields).maxRange = 50.0;
  (this->fields).slapStrength = 500.0;
  func_?(&fStack_1,0x43000000,0x43000000,0x43000000,0x43000000,0);
  (this->fields).slapColor.r = fStack_1;
  (this->fields).slapColor.g = fStack_2;
  (this->fields).slapColor.b = fStack_3;
  (this->fields).slapColor.a = fStack_4;
  PickupItemWithDelay::PickupItemWithDelay__ctor((PickupItemWithDelay *)this,(MethodInfo *)0x0);
  return;
}

