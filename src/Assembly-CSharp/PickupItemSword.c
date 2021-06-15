
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword_Awake
               (PickupItemSword *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).hitLayerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  return;
}


/* Vector3 FindRayTarget(Ray) */

Vector3 * Assembly-CSharp.dll::PickupItemSword::PickupItemSword_FindRayTarget
                    (Vector3 *__return_storage_ptr__,PickupItemSword *this,Ray lineOfFire,
                    MethodInfo *method)

{
  func_?(auStack_1,0,0x48);
  layerMask = (this->fields).hitLayerMask;
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  fVar2 = (this->fields).range;
  __return_storage_ptr__->z = 0.0;
  ray.m_Origin.y = lineOfFire.m_Origin.y;
  ray.m_Origin.x = lineOfFire.m_Origin.x;
  ray.m_Origin.z = lineOfFire.m_Origin.z;
  ray.m_Direction.x = lineOfFire.m_Direction.x;
  ray.m_Direction.y = lineOfFire.m_Direction.y;
  ray.m_Direction.z = lineOfFire.m_Direction.z;
  bVar3 = CollisionDetection::CollisionDetection_MVHit_1
                    (ray,(VoxelHit *)auStack_1,fVar2,(HashSet_1_System_Int32_ *)0x0,layerMask,
                     (MethodInfo *)0x0);
  if (bVar3 == 0) {
    fStack_4 = (this->fields).range;
    auStack_1._24_4_ = &lineOfFire;
    iStack_5 = 0;
    auStack_1._20_4_ = auStack_6;
    auStack_1._16_4_ = &UNK_?;
    puVar7 = (undefined8 *)func_?();
    uVar8 = *puVar7;
    fVar2 = *(float *)(puVar7 + 1);
    __return_storage_ptr__->x = (float)(int)uVar8;
    __return_storage_ptr__->y = (float)(int)((ulonglong)uVar8 >> 0x20);
    __return_storage_ptr__->z = fVar2;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = (float)auStack_1._0_4_;
  __return_storage_ptr__->y = (float)auStack_1._4_4_;
  __return_storage_ptr__->z = (float)auStack_1._8_4_;
  return __return_storage_ptr__;
}


/* Void OnEquip() */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword_OnEquip
               (PickupItemSword *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  PickupItem::PickupItem_OnEquip((PickupItem *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UpdateController->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UpdateController->_1).cctor_started == 0)) {
    func_?();
  }
  UpdateController::UpdateController_AddUpdateObject
            ((IUpdatecontrollerSubscriberUpdate *)this,UpdatePriority__Enum_UPDATEBUCKET_STANDARD,1,
             (MethodInfo *)0x0);
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword_OnFire
               (PickupItemSword *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  this_00 = (this->fields).swordAnim;
  if (this_00 == (Animation *)0x0) goto code_?;
  UnityEngine.AnimationModule.dll::UnityEngine::Animation::Animation_Play(this_00,(MethodInfo *)0x0)
  ;
  pTVar6 = (this->fields).swordHandle;
  (this->fields)._.isFiring = 0;
  if (pTVar6 == (Transform *)0x0) goto code_?;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      (&VStack_8,pTVar6,(MethodInfo *)0x0);
  uStack_9._0_4_ = pVVar7->x;
  uStack_9._4_4_ = pVVar7->y;
  fVar10 = pVVar7->z;
  pMVar11 = (this->fields)._._.owner;
  if (pMVar11 == (MVPickupOwner *)0x0) goto code_?;
  pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_12,pMVar11,(MethodInfo *)0x0);
  fVar13 = (this->fields).bladeRadius;
  VStack_8.y = pVVar7->x;
  VStack_8.z = pVVar7->y;
  fVar14 = pVVar7->z;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  a.z = fVar14;
  a.x = VStack_8.y;
  a.y = VStack_8.z;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                      (&VStack_12,a,fVar13,(MethodInfo *)0x0);
  a_00.z = fVar10;
  a_00.x = (float)(undefined4)uStack_9;
  a_00.y = (float)uStack_9._4_4_;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                      (&VStack_12,a_00,*pVVar7,(MethodInfo *)0x0);
  uStack_9._0_4_ = pVVar7->x;
  uStack_9._4_4_ = pVVar7->y;
  fVar10 = pVVar7->z;
  pMVar11 = (this->fields)._._.owner;
  if (pMVar11 == (MVPickupOwner *)0x0) goto code_?;
  pVVar7 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_12,pMVar11,(MethodInfo *)0x0);
  uVar15 = pVVar7->x;
  method_00 = (MethodInfo *)pVVar7->y;
  func_?(&fStack_1,(int)uStack_9,(int)((ulonglong)uStack_9 >> 0x20),fVar10,uVar15,method_00
                  ,pVVar7->z,0);
  pMVar11 = (this->fields)._._.owner;
  fStack_16 = fStack_1;
  VStack_12.x = fStack_2;
  VStack_12.y = fStack_3;
  VStack_12.z = fStack_4;
  uStack_9 = uStack_5;
  fVar10 = (this->fields).bladeRadius;
  VStack_8.z = (this->fields).range;
  if (pMVar11 == (MVPickupOwner *)0x0) goto code_?;
  ignoreWoIds = (HashSet_1_System_Int32_ *)
                (*(code *)(pMVar11->klass->vtable).get_IgnoreWOIDs.method)
                          (pMVar11,pMVar11->klass[1]._0.image);
  ray.m_Origin.y = VStack_12.x;
  ray.m_Origin.x = fStack_16;
  ray.m_Origin.z = VStack_12.y;
  ray.m_Direction.x = VStack_12.z;
  ray.m_Direction.y = (float)(int)uStack_9;
  ray.m_Direction.z = (float)((ulonglong)uStack_9 >> 0x20);
  voxelHits = CollisionDetection::CollisionDetection_MVSphereCastAll
                        (ray,fVar10,fVar10 + VStack_8.z,ignoreWoIds,(this->fields).hitLayerMask,
                         (MethodInfo *)0x0);
  if (voxelHits == (List_1_VoxelHit_ *)0x0) goto code_?;
  pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
            Serialization::JsonProperty]::
            Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                      ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)voxelHits,
                       MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
  if ((int)pOVar17 < 1) {
code_?:
    if (isLocal != 0) {
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_05 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      audioSource = (this->fields).audioSource;
      pCVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar18 == (Camera *)0x0) goto code_?;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pCVar18,(MethodInfo *)0x0);
      if (pTVar6 == (Transform *)0x0) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_12,pTVar6,(MethodInfo *)0x0);
      VStack_8.y = pVVar7->x;
      VStack_8.z = pVVar7->y;
      fVar10 = pVVar7->z;
      pCVar18 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main((MethodInfo *)0x0);
      if (pCVar18 == (Camera *)0x0) goto code_?;
      pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)pCVar18,(MethodInfo *)0x0);
      if (pTVar6 == (Transform *)0x0) goto code_?;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                          (&VStack_12,pTVar6,(MethodInfo *)0x0);
      uStack_9._0_4_ = pVVar7->x;
      uStack_9._4_4_ = pVVar7->y;
      fVar13 = pVVar7->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_01.z = fVar10;
      a_01.x = VStack_8.y;
      a_01.y = VStack_8.z;
      b.z = fVar13;
      b.x = (float)(undefined4)uStack_9;
      b.y = (float)uStack_9._4_4_;
      pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_12,a_01,b,(MethodInfo *)0x0);
      if (this_05 == (AudioManager *)0x0) goto code_?;
      uVar19 = pVVar7->x;
      uVar20 = pVVar7->y;
      fVar10 = pVVar7->z;
      uVar21 = uVar19;
      uVar22 = uVar20;
      goto code_?;
    }
  }
  else {
    lineOfFire.m_Origin.y = fStack_2;
    lineOfFire.m_Origin.x = fStack_1;
    lineOfFire.m_Origin.z = fStack_3;
    lineOfFire.m_Direction.x = fStack_4;
    lineOfFire.m_Direction.y = (float)(int)uStack_5;
    lineOfFire.m_Direction.z = (float)((ulonglong)uStack_5 >> 0x20);
    PickupItemSword_OnSwordHit(this,voxelHits,lineOfFire,(MethodInfo *)0x0);
    fVar23 = fStack_4;
    fVar14 = fStack_3;
    fVar13 = fStack_2;
    fVar10 = fStack_1;
    if (isLocal != 0) {
      uStack_9 = uStack_5;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?(TypeInfo__MVGameControllerBase);
      }
      this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_01 == (MVNetworkGame *)0x0) goto code_?;
      this_02 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                 *)CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_01,(MethodInfo *)0x0)
      ;
      if (this_02 ==
          (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
           *)0x0) goto code_?;
      this_03 = (RuntimeEventManager *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          (this_02,(MethodInfo *)0x0);
      pVVar24 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                List_1_VoxelHit__get_Item
                          ((VoxelHit *)&stack0xffffff1c,voxelHits,0,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      fStack_25 = (pVVar24->point).x;
      VStack_8.x = (pVVar24->point).y;
      VStack_8._4_8_ = *(undefined8 *)&(pVVar24->point).z;
      pVVar24 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                List_1_VoxelHit__get_Item
                          ((VoxelHit *)&stack0xffffff1c,voxelHits,0,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      fStack_16 = (pVVar24->normal).y;
      uVar26 = (pVVar24->normal).x;
      uVar27 = (pVVar24->normal).y;
      normal.y = (float)uVar27;
      normal.x = (float)uVar26;
      VStack_12.x = (pVVar24->normal).z;
      VStack_12.y = *(float *)&pVVar24->cubePos;
      VStack_12.z = *(float *)&(pVVar24->cubePos).z;
      this_04 = (ExplosionEvent *)
                func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      worldPosition.y = VStack_8.x;
      worldPosition.x = fStack_25;
      worldPosition.z = VStack_8.y;
      normal.z = VStack_12.x;
      MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
                (this_04,RuntimeEventType__Enum_SwordTerrainDestroy,worldPosition,normal,
                 (MethodInfo *)0x0);
      if (this_03 == (RuntimeEventManager *)0x0) goto code_?;
      RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent(this_03,this_04,(MethodInfo *)0x0);
      index = 0;
      while( true ) {
        pOVar17 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                  Serialization::JsonProperty]::
                  Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                            ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)voxelHits,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
        if ((int)pOVar17 <= index) break;
        pVVar24 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                  List_1_VoxelHit__get_Item
                            ((VoxelHit *)&stack0xffffff1c,voxelHits,index,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        voxelHit.interactionFlags._0_4_ = (int)((ulonglong)pVVar24->interactionFlags >> 0x20);
        voxelHit._0_64_ = *(undefined1 (*) [64])&(pVVar24->point).y;
        voxelHit.interactionFlags._4_4_ = fVar10;
        lineOfFire_00.m_Origin.y = fVar14;
        lineOfFire_00.m_Origin.x = fVar13;
        lineOfFire_00.m_Origin.z = fVar23;
        lineOfFire_00.m_Direction.x = (float)(int)uStack_9;
        lineOfFire_00.m_Direction.y = (float)(int)((ulonglong)uStack_9 >> 0x20);
        lineOfFire_00.m_Direction.z = 0.0;
        PickupItemSword_OnLocalSwordHit_1(this,voxelHit,lineOfFire_00,method_00);
        index = index + 1;
      }
      goto code_?;
    }
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_05 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
  pTVar6 = (this->fields)._._.muzzlePoint;
  audioSource = (this->fields).audioSource;
  if (pTVar6 != (Transform *)0x0) {
    pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        (&VStack_12,pTVar6,(MethodInfo *)0x0);
    if (this_05 != (AudioManager *)0x0) {
      uVar21 = pVVar7->x;
      uVar22 = pVVar7->y;
      fVar10 = pVVar7->z;
code_?:
      position.y = (float)uVar22;
      position.x = (float)uVar21;
      position.z = fVar10;
      AudioManager::AudioManager_Play_2
                (this_05,StringLiteral_sword_swing,audioSource,position,(MethodInfo *)0x0);
      return;
    }
  }
code_?:
  func_?(0);
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnLocalSwordHit(List`1[VoxelHit], Ray) */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword_OnLocalSwordHit
               (PickupItemSword *this,List_1_VoxelHit_ *voxelHits,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if (this_00 != (MVNetworkGame *)0x0) {
    this_01 = (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
               *)CloudyTheme::CloudyTheme_get_Identifier((CloudyTheme *)this_00,(MethodInfo *)0x0);
    if (this_01 !=
        (SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
         *)0x0) {
      this_02 = (RuntimeEventManager *)
                System.dll::System::Collections::Generic::
                SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                ::Single,System::Object]::
                SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                          (this_01,(MethodInfo *)0x0);
      if (voxelHits != (List_1_VoxelHit_ *)0x0) {
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                 List_1_VoxelHit__get_Item
                           ((VoxelHit *)&stack0xffffff4c,voxelHits,0,
                            MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_)
        ;
        worldPosition = pVVar1->point;
        pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                 List_1_VoxelHit__get_Item
                           ((VoxelHit *)&stack0xffffff4c,voxelHits,0,
                            MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_)
        ;
        normal = pVVar1->normal;
        this_03 = (ExplosionEvent *)func_?();
        MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_1
                  (this_03,RuntimeEventType__Enum_SwordTerrainDestroy,worldPosition,normal,
                   (MethodInfo *)0x0);
        if (this_02 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                    (this_02,this_03,(MethodInfo *)0x0);
          index = 0;
          while( true ) {
            pOVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                                voxelHits,
                                MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__
                               );
            if ((int)pOVar2 <= index) break;
            pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
                     List_1_VoxelHit__get_Item
                               ((VoxelHit *)&stack0xffffff4c,voxelHits,index,
                                MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                               );
            voxelHit.interactionFlags._0_4_ = (float)((ulonglong)pVVar1->interactionFlags >> 0x20);
            voxelHit._0_64_ = *(undefined1 (*) [64])&(pVVar1->point).y;
            voxelHit.interactionFlags._4_4_ = lineOfFire.m_Origin.x;
            auVar3 = lineOfFire._4_20_;
            lineOfFire_00.m_Direction.z = 0.0;
            auVar4 = auVar3._0_12_;
            lineOfFire_00.m_Origin.x = (float)auVar4._0_4_;
            lineOfFire_00.m_Origin.y = (float)auVar4._4_4_;
            lineOfFire_00.m_Origin.z = (float)auVar4._8_4_;
            lineOfFire_00.m_Direction.x = (float)auVar3._12_4_;
            lineOfFire_00.m_Direction.y = (float)auVar3._16_4_;
            PickupItemSword_OnLocalSwordHit_1(this,voxelHit,lineOfFire_00,in_stack_5);
            index = index + 1;
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnLocalSwordHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword_OnLocalSwordHit_1
               (PickupItemSword *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

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
            func_?();
          }
          voxelHit.point.x = 0.0;
          this_02 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_02 != (MVNetworkGame *)0x0) {
            voxelHit.point.y = 0.0;
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
              voxelHit.normal.z = (float)(this->fields)._._.owner;
              if ((MVPickupOwner *)voxelHit.normal.z != (MVPickupOwner *)0x0) {
                voxelHit.cubePos.x = 0;
                voxelHit.cubePos.y = 0;
                voxelHit.normal.y = (float)&voxelHit.transform;
                voxelHit.normal.x = (float)&UNK_?;
                pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                    ((Vector3 *)voxelHit.normal.y,(MVPickupOwner *)voxelHit.normal.z
                                     ,(MethodInfo *)0x0);
                voxelHit.cubePos.x = 0;
                voxelHit.cubePos.y = 0;
                puVar4 = (undefined *)pVVar3->x;
                fVar5 = pVVar3->z;
                voxelHit.normal.z = (float)&stack0xffffffe8;
                pVVar6 = (Vector3__Class *)0x3ca3d70a;
                voxelHit.normal.y = (float)&UNK_?;
                func_?();
                voxelHit.interactionFlags._0_4_ = (this->fields).impulseStrength;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  puVar4 = &UNK_?;
                  pVVar6 = TypeInfo__UnityEngine__Vector3;
                  func_?();
                }
                VVar7.y = (float)pVVar6;
                VVar7.x = (float)puVar4;
                VVar7.z = fVar5;
                pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)&voxelHit.transform,VVar7,
                                     (float)voxelHit.interactionFlags,(MethodInfo *)0x0);
                voxelHit.point.x = pVVar3->z;
                voxelHit.point.y = 0.0;
                pIVar8 = SwordHitPackage::SwordHitPackage_Create
                                    ((InteractionData *)&voxelHit.distance,*pVVar3,
                                     (MethodInfo *)0x0);
                if (x != (InteractionDataHandlerBase *)0x0) {
                  voxelHit.point.x = pIVar8->damage;
                  voxelHit.point.y = (pIVar8->impulse).x;
                  voxelHit.point.z = (pIVar8->impulse).y;
                  voxelHit.normal.x = (pIVar8->impulse).z;
                  voxelHit.normal.y = *(float *)&pIVar8->interactionType;
                  voxelHit.cubePos._0_4_ = (x->klass->vtable).OnValidate.methodPtr;
                  voxelHit.normal.z = 0.0;
                  (*(code *)(x->klass->vtable).__unknown_1.method)();
                  this_00 = (this->fields)._._.owner;
                  if (this_00 != (MVPickupOwner *)0x0) {
                    this_04 = (MVRigidBody *)
                              UnityEngine.CoreModule.dll::UnityEngine::Component::
                              Component_1_GetComponent_58
                                        ((Component_1 *)this_00,
                                         MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                        );
                    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000
                         ) != 0) && ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
                      func_?();
                    }
                    uVar9 = 0;
                    fVar10 = 0.0;
                    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                                       ((Object_1 *)this_04,(Object_1 *)0x0,(MethodInfo *)0x0);
                    voxelHit.interactionFlags._0_4_ = fVar10;
                    voxelHit._60_4_ = uVar9;
                    if (bVar2 == 0) {
                      return;
                    }
                    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr &
                         0x2000000) != 0) &&
                       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                      func_?();
                    }
                    a.y = (float)voxelHit.interactionFlags;
                    a.x = (float)voxelHit._60_4_;
                    a.z = fVar5;
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                              Vector3_op_UnaryNegation
                                        ((Vector3 *)&voxelHit.transform,a,(MethodInfo *)0x0);
                    pPVar11 = &this->fields;
                    voxelHit.point.x = 0.0;
                    uVar12 = pVVar3->x;
                    uVar13 = pVVar3->y;
                    this = (PickupItemSword *)pVVar3->z;
                    fVar14 = (float)uVar13;
                    VVar7.x = (float)uVar12;
                    VVar7 = (Vector3)CONCAT84(VVar7._0_8_,VVar7.x);
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                        ((Vector3 *)&voxelHit.transform,VVar7,pPVar11->recoilForce,
                                         (MethodInfo *)0x0);
                    if (this_04 != (MVRigidBody *)0x0) {
                      uVar15 = pVVar3->x;
                      uVar16 = pVVar3->y;
                      voxelHit.normal.y = pVVar3->z;
                      voxelHit.cubePos.x = 0;
                      voxelHit.cubePos.y = 0;
                      voxelHit.normal.z = 0.0;
                      voxelHit.point.x = (float)&UNK_?;
                      voxelHit.point.y = (float)this_04;
                      voxelHit.point.z = (float)uVar15;
                      voxelHit.normal.x = (float)uVar16;
                      MVRigidBody::MVRigidBody_AddImpulse_1(this_04,*pVVar3,0,(MethodInfo *)0x0);
                      return;
                    }
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
  voxelHit.cubePos.x = 0;
  voxelHit.cubePos.y = 0;
  voxelHit.normal.z = (float)&UNK_?;
  func_?();
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* Void OnSwordHit(List`1[VoxelHit], Ray) */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword_OnSwordHit
               (PickupItemSword *this,List_1_VoxelHit_ *voxelHits,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (voxelHits != (List_1_VoxelHit_ *)0x0) {
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__get_Item
                       (&VStack_2,voxelHits,0,
                        MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    position = pVVar1->point;
    pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit__get_Item
                       ((VoxelHit *)&puStack_3,voxelHits,0,
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
    VStack_2.distance = pVVar1->distance;
    VStack_2.collider = pVVar1->collider;
    VStack_2.transform = pVVar1->transform;
    VStack_2._60_4_ = *(undefined4 *)&pVVar1->field_0x3c;
    VStack_2.interactionFlags = pVVar1->interactionFlags;
    if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
      func_?();
    }
    forward.y = VStack_2.normal.y;
    forward.x = VStack_2.normal.x;
    forward.z = VStack_2.normal.z;
    pQVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                       (&QStack_5,forward,(MethodInfo *)0x0);
    OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
              (PoolEnums__Enum_NormalBulletSparks,position,*pQVar4,(MethodInfo *)0x0);
    index = 0;
    while( true ) {
      pOVar6 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)voxelHits,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
      if ((int)pOVar6 <= index) {
        return;
      }
      pVVar1 = mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::
               List_1_VoxelHit__get_Item
                         ((VoxelHit *)&puStack_3,voxelHits,index,
                          MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      fStack_7 = (pVVar1->point).x;
      fStack_8 = (pVVar1->point).y;
      fStack_9 = (pVVar1->point).z;
      fStack_10 = (pVVar1->normal).x;
      fStack_11 = (pVVar1->normal).y;
      fStack_12 = (pVVar1->normal).z;
      uStack_13._0_2_ = (pVVar1->cubePos).x;
      uStack_13._2_2_ = (pVVar1->cubePos).y;
      uStack_14 = *(undefined4 *)&(pVVar1->cubePos).z;
      iStack_15 = pVVar1->face;
      uStack_16 = *(undefined4 *)&pVVar1->isCubeHit;
      iStack_17 = pVVar1->woId;
      pCStack_18 = pVVar1->cube;
      QStack_5.x = pVVar1->distance;
      QStack_5.y = (float)pVVar1->collider;
      QStack_5.z = (float)pVVar1->transform;
      QStack_5.w = *(float *)&pVVar1->field_0x3c;
      iStack_19 = pVVar1->interactionFlags;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar20 == (MVWorldObjectClientManager *)0x0) goto code_?;
      id = MVWorldObjectClientManager::
           MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                     (pMVar20,iStack_17,
                      int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                     );
      pMVar20 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar20 == (MVWorldObjectClientManager *)0x0) goto code_?;
      pMVar21 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar20,id,(MethodInfo *)0x0);
      iVar22 = func_?();
      if (iVar22 != 0) break;
code_?:
      index = index + 1;
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
        pOStack_23 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                    TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                    TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                              (this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__PickupItemSword->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PickupItemSword->_1).cctor_started == 0)) {
          func_?(TypeInfo__PickupItemSword);
        }
        pIVar24 = TypeInfo__IBulletImpactVisualizer;
        fStack_25 = TypeInfo__PickupItemSword->static_fields->hitDamage;
        if (pMVar21 != (MVWorldObject *)0x0) {
          iVar22 = func_?(pMVar21,TypeInfo__IBulletImpactVisualizer);
          pIVar26 = TypeInfo__IBulletImpactVisualizer;
          if (iVar22 != 0) {
            iVar22 = func_?(pMVar21,TypeInfo__IBulletImpactVisualizer);
            pIVar24 = pIVar26;
            if (iVar22 != 0) {
              func_?(0,TypeInfo__IBulletImpactVisualizer,iVar22,fStack_7,fStack_8,
                              fStack_9,fStack_10,fStack_11,fStack_12,uStack_13,uStack_14,iStack_15,
                              uStack_16,iStack_17,pCStack_18,QStack_5.x,QStack_5.y,QStack_5.z,
                              QStack_5.w,iStack_19,lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,
                              lineOfFire.m_Origin.z,lineOfFire.m_Direction.x,
                              lineOfFire.m_Direction._4_8_,pOStack_23,fStack_25);
              goto code_?;
            }
          }
          func_?(pMVar21,pIVar24);
        }
      }
    }
  }
code_?:
  func_?(0);
  pcVar27 = (code *)swi(3);
  (*pcVar27)();
  return;
}


/* Void OnSwordHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword_OnSwordHit_1
               (PickupItemSword *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

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
    unaff_ESI = (MVWorldObject *)
                MVWorldObjectClientManager::
                MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent_2
                          (pMVar1,voxelHit._36_4_,
                           int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                          );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar1,(int32_t)unaff_ESI,(MethodInfo *)0x0);
      iVar2 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
      if (iVar2 == 0) {
        return;
      }
      this_00 = (this->fields)._._.owner;
      if ((this_00 != (MVPickupOwner *)0x0) &&
         (this_01 = (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)
                    System.dll::System::Collections::Generic::
                    SortedList`2[TKey,TValue]+ListValues[TKey,TValue]+GetEnumerator>c__Iterator3[System
                    ::Single,System::Object]::
                    SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object__System_Collections_IEnumerator_get_Current
                              ((SortedList_2_TKey_TValue_ListValues_TKey_TValue_GetEnumerator_c_Iterator3_System_Single_System_Object_
                                *)this_00,(MethodInfo *)0x0),
         this_01 != (TweenRunner_1_T_Start_c_Iterator0_FloatTween_ *)0x0)) {
        pOVar3 = UnityEngine.UI.dll::UnityEngine::UI::CoroutineTween::
                 TweenRunner`1[T]+<Start>c__Iterator0[FloatTween]::
                 TweenRunner_1_T_Start_c_Iterator0_FloatTween__System_Collections_IEnumerator_get_Current
                           (this_01,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__PickupItemSword->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__PickupItemSword->_1).cctor_started == 0)) {
          func_?(TypeInfo__PickupItemSword);
        }
        unaff_EDI = TypeInfo__IBulletImpactVisualizer;
        if (unaff_ESI != (MVWorldObject *)0x0) {
          iVar2 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
          pIVar4 = TypeInfo__IBulletImpactVisualizer;
          if ((iVar2 != 0) &&
             (pMVar5 = unaff_ESI,
             iVar2 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer),
             unaff_EDI = pIVar4, iVar2 != 0)) {
            func_?(0,TypeInfo__IBulletImpactVisualizer,iVar2,in_stack_6,
                            voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x,
                            voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,
                            voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,voxelHit.woId,
                            voxelHit.cube,voxelHit.distance,voxelHit.collider,voxelHit.transform,
                            voxelHit._60_8_,voxelHit.interactionFlags._4_4_,lineOfFire.m_Origin.x,
                            lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,lineOfFire.m_Direction._0_8_
                            ,pOVar3,pMVar5);
            return;
          }
          goto code_?;
        }
      }
    }
  }
  func_?(0);
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* PickupItemSword() */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword__cctor(MethodInfo *method)

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
  pIVar8 = SwordHitPackage::SwordHitPackage_Create(&IStack_9,impulse,(MethodInfo *)0x0);
  fStack_4 = pIVar8->damage;
  fStack_5 = (pIVar8->impulse).x;
  fStack_6 = (pIVar8->impulse).y;
  fStack_7 = (pIVar8->impulse).z;
  uStack_1._0_1_ = pIVar8->interactionType;
  uStack_1._1_1_ = pIVar8->playerKilledByType;
  uStack_1._2_2_ = *(undefined2 *)&pIVar8->field_0x12;
  fVar10 = (float10)func_?(&fStack_4,0);
  TypeInfo__PickupItemSword->static_fields->hitDamage = (float)fVar10;
  return;
}


/* PickupItemSword() */

void Assembly-CSharp.dll::PickupItemSword::PickupItemSword__ctor
               (PickupItemSword *this,MethodInfo *method)

{
  (this->fields).impulseStrength = 500.0;
  (this->fields).recoilForce = 700.0;
  (this->fields).bladeRadius = 3.0;
  (this->fields).range = 1.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_red
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCannotFireLow.r = pCVar1->r;
  (this->fields)._.crossHairCannotFireLow.g = fVar3;
  (this->fields)._.crossHairCannotFireLow.b = fVar4;
  (this->fields)._.crossHairCannotFireLow.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_yellow
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCannotFireHigh.r = pCVar1->r;
  (this->fields)._.crossHairCannotFireHigh.g = fVar3;
  (this->fields)._.crossHairCannotFireHigh.b = fVar4;
  (this->fields)._.crossHairCannotFireHigh.a = fVar5;
  pCVar1 = UnityEngine.CoreModule.dll::UnityEngine::Color::Color_get_green
                     ((Color *)&AStack_2,(MethodInfo *)0x0);
  fVar3 = pCVar1->g;
  fVar4 = pCVar1->b;
  fVar5 = pCVar1->a;
  (this->fields)._.crossHairCanFire.r = pCVar1->r;
  (this->fields)._.crossHairCanFire.g = fVar3;
  (this->fields)._.crossHairCanFire.b = fVar4;
  (this->fields)._.crossHairCanFire.a = fVar5;
  if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
              methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
    func_?();
  }
  pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
           ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,1.0,(MethodInfo *)0x0);
  bVar7 = cRam_? == '\0';
  AVar8 = pOVar6->hiddenValue;
  pBVar9 = pOVar6->hiddenValueOld;
  fVar3 = pOVar6->fakeValue;
  bVar10 = pOVar6->inited;
  uVar11 = *(undefined3 *)&pOVar6->field_0x11;
  (this->fields)._.fireInterval.currentCryptoKey = pOVar6->currentCryptoKey;
  (this->fields)._.fireInterval.hiddenValue = AVar8;
  (this->fields)._.fireInterval.hiddenValueOld = pBVar9;
  (this->fields)._.fireInterval.fakeValue = fVar3;
  (this->fields)._.fireInterval.inited = bVar10;
  *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar11;
  if (bVar7) {
    func_?();
    cRam_? = '\x01';
  }
  pMVar12 = (MeshRenderer__Array *)func_?();
  (this->fields)._._.meshRenderers = pMVar12;
  UnityEngine.UIModule.dll::UnityEngine::Canvas::Canvas__ctor((Canvas *)this,(MethodInfo *)0x0);
  return;
}

