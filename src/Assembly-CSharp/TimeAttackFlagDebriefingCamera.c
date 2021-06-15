
/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Enter
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<int>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,MethodInfo__System__Collections__Generic__HashSet<int>__HashSet__);
  this_00 = (this->fields).avatarLocal;
  if (this_00 != (MVAvatarLocal *)0x0) {
    item = (UnityWebRequest *)
           mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0);
    if (this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0) {
      System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
      UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
                ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,item,
                 MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
      (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_01;
      if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
        func_?();
      }
      this_02 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
      if (this_02 != (MainCameraManager *)0x0) {
        MainCameraManager::MainCameraManager_StartTransitionCam(this_02,0.5,0,(MethodInfo *)0x0);
        pTVar1 = TimeAttackFlagDebriefingCamera_GetClosestTimeAttackFlag(this,(MethodInfo *)0x0);
        (this->fields).flagTransform = pTVar1;
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Exit
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
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
  this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
  if (this_00 != (MainCameraManager *)0x0) {
    MainCameraManager::MainCameraManager_StartTransitionCam(this_00,0.5,0,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Transform GetClosestTimeAttackFlag() */

Transform *
Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
TimeAttackFlagDebriefingCamera_GetClosestTimeAttackFlag
          (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMStack_1 = (MVPointLightObject *)0x0;
  fStack_2 = _UNK_?;
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?(TypeInfo__MVGameControllerBase);
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (this_00 != (MVWorldObjectClientManager *)0x0) {
    this_01 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectsByType
                        (this_00,WorldObjectType__Enum_TimeAttackFlag,(MethodInfo *)0x0);
    if (this_01 != (List_1_MVWorldObjectClient_ *)0x0) {
      pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
               Serialization::JsonProperty]::
               Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                         ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                          MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                         );
      if (pOVar3 == (Object *)0x0) goto code_?;
      pMVar4 = (this->fields).avatarLocal;
      if (pMVar4 != (MVAvatarLocal *)0x0) {
        plVar5 = (longlong *)(*(code *)(pMVar4->klass->vtable).get_Position.method)();
        index = 0;
        lVar6 = *plVar5;
        lVar7 = plVar5[1];
        while( true ) {
          pOVar3 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)this_01,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Count__
                             );
          if ((int)pOVar3 <= index) {
            return (Transform *)pMStack_1;
          }
          pIVar8 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                   IEventSystemHandler]::
                   List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                             ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,index,
                              MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                             );
          if (pIVar8 == (IEventSystemHandler *)0x0) break;
          uStack_9 = (uint)((ulonglong)lVar6 >> 0x20);
          pVVar10 = (Vector3 *)(*(code *)pIVar8->klass[1]._0.castClass)();
          b = *pVVar10;
          if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
            func_?();
          }
          auVar11._4_4_ = (int)lVar7;
          auVar11._0_4_ = uStack_9;
          auVar11._8_4_ = 0;
          UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                    ((Vector3 *)&stack0xffffffb8,(Vector3)(auVar11 << 0x20),b,(MethodInfo *)0x0);
          lVar6 = (ulonglong)uStack_9 << 0x20;
          fVar12 = (float10)func_?();
          if ((float)fVar12 < fStack_2) {
            this_02 = (PrefabPool *)
                      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::EventSystems::
                      IEventSystemHandler]::
                      List_1_UnityEngine_EventSystems_IEventSystemHandler__get_Item
                                ((List_1_UnityEngine_EventSystems_IEventSystemHandler_ *)this_01,
                                 index,
                                 MethodInfo__System__Collections__Generic__List<MVWorldObjectClient>__get_Item_int_
                                );
            if (this_02 == (PrefabPool *)0x0) break;
            pMStack_1 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_02,(MethodInfo *)0x0);
            fStack_2 = (float)fVar12;
          }
          index = index + 1;
        }
      }
    }
  }
  func_?();
code_?:
  this_03 = (IsolatedStorageException *)func_?();
  mscorlib.dll::System::IO::IsolatedStorage::IsolatedStorageException::
  IsolatedStorageException__ctor_1
            (this_03,StringLiteral_Entered_TimeAttackFlagDebriefing,(MethodInfo *)0x0);
  func_?();
  pcVar13 = (code *)swi(3);
  pTVar14 = (Transform *)(*pcVar13)();
  return pTVar14;
}


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
          TimeAttackFlagDebriefingCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,TimeAttackFlagDebriefingCamera *this,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).flagTransform;
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffffdc,this_00,(MethodInfo *)0x0);
    uStack_2._0_4_ = pVVar1->x;
    uStack_2._4_4_ = pVVar1->y;
    fVar3 = pVVar1->z;
    fStack_4 = 0.0;
    uStack_5 = 0;
    func_?(&uStack_5,0,(this->fields).height,0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    a.z = fVar3;
    a.x = (float)(undefined4)uStack_2;
    a.y = (float)uStack_2._4_4_;
    b.z = fStack_4;
    b.x = (float)(undefined4)uStack_5;
    b.y = (float)uStack_5._4_4_;
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffdc,a,b,(MethodInfo *)0x0);
    fVar6 = pVVar1->y;
    fVar3 = pVVar1->z;
    __return_storage_ptr__->x = pVVar1->x;
    __return_storage_ptr__->y = fVar6;
    __return_storage_ptr__->z = fVar3;
    return __return_storage_ptr__;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Vector3 PositionAfterCollision(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
          TimeAttackFlagDebriefingCamera_PositionAfterCollision
                    (Vector3 *__return_storage_ptr__,TimeAttackFlagDebriefingCamera *this,
                    Vector3 desiredPosition,Vector3 moveToPosition,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  func_?(&stack0xffffffb0,0,0x48);
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  fVar2 = desiredPosition.z;
  VVar3.y = desiredPosition.y;
  VVar3.x = desiredPosition.x;
  VVar3.z = desiredPosition.z;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                     (&VStack_5,VVar3,moveToPosition,(MethodInfo *)0x0);
  uStack_6._0_4_ = pVVar4->x;
  uStack_6._4_4_ = pVVar4->y;
  VStack_5.x = pVVar4->z;
  func_?(&uStack_6,0);
  func_?(&uStack_6,0);
  func_?(&stack0xffffffb8,moveToPosition.x,moveToPosition.y,moveToPosition.z,uStack_6,
                  VStack_5.x,0);
  iVar7 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  this_00 = this;
  ray.m_Origin.y = fStack_8;
  ray.m_Origin.x = fStack_9;
  ray.m_Origin.z = (float)puStack_10;
  ray.m_Direction.x = in_stack_11;
  ray.m_Direction.y = (float)in_stack_12;
  ray.m_Direction.z = fStack_13;
  bVar14 = CollisionDetection::CollisionDetection_MVSphereCast
                    (ray,(this->fields)._.cameraRadius,(VoxelHit *)&fStack_15,uStack_6._4_4_,
                     (this->fields).ignoreAvatarId,1 << ((byte)iVar7 & 0x1f),(MethodInfo *)0x0);
  fVar16 = in_stack_17;
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?();
  }
  fVar18 = desiredPosition.y;
  if ((TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fVar16) && (bVar14 != 0)) {
    fStack_15 = 0.0;
    puStack_19 = (undefined *)0x0;
    fStack_8 = desiredPosition.x;
    this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)this_00,(MethodInfo *)0x0);
    if (this_01 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffb8,this_01,(MethodInfo *)0x0);
      VVar3 = *pVVar4;
      fStack_8 = fVar1;
      puStack_10 = in_stack_20;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      b.y = (float)puStack_10;
      b.x = fStack_8;
      b.z = in_stack_21;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&fStack_8,VVar3,b,(MethodInfo *)0x0);
      point.y = (float)in_stack_22;
      point.x = (float)in_stack_23;
      point.z = fVar18;
      bVar14 = MathFunctions::MathFunctions_DistancePointLine_1
                        (point,moveToPosition,*pVVar4,&fStack_15,(Vector3 *)&this,(MethodInfo *)0x0)
      ;
      if (bVar14 == 0) {
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                  ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
        message = (Object *)func_?();
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(message,(MethodInfo *)0x0);
      }
      desiredPosition.x = (float)this;
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?();
      }
      pVVar4 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                         ((Vector3 *)&stack0x00000044,
                          (InputToPlayerMovementAndroid *)&stack0x00000054,(MethodInfo *)0x0);
      uStack24 = pVVar4->x;
      uStack25 = pVVar4->y;
      fVar1 = pVVar4->z;
      auVar26._0_8_ = (double)((float)__return_storage_ptr__ * (float)__return_storage_ptr__ -
                             in_stack_27 * in_stack_27);
      auVar26._8_8_ = 0;
      func_?();
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a.z = fVar1;
      a.x = (float)uStack24;
      a.y = (float)uStack25;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                         ((Vector3 *)&stack0x00000050,a,(float)auVar26._0_8_,(MethodInfo *)0x0);
      uVar28 = pVVar4->y;
      this = (TimeAttackFlagDebriefingCamera *)pVVar4->z;
      desiredPosition.x = 0.0;
      a_00.y = in_stack_27;
      a_00.x = in_stack_17;
      a_00.z = in_stack_29;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&stack0x00000068,a_00,*pVVar4,(MethodInfo *)0x0);
      fVar1 = pVVar4->z;
      *(undefined8 *)uVar28 = *(undefined8 *)pVVar4;
      *(float *)(uVar28 + 8) = fVar1;
      return (Vector3 *)uVar28;
    }
    func_?();
    pcVar30 = (code *)swi(3);
    pVVar4 = (Vector3 *)(*pcVar30)();
    return pVVar4;
  }
  __return_storage_ptr__->x = desiredPosition.x;
  __return_storage_ptr__->y = desiredPosition.y;
  __return_storage_ptr__->z = fVar2;
  return __return_storage_ptr__;
}


/* Void Reset() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera_Reset
               (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                     ((Quaternion *)&stack0xffffffec,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
              (this_00,*pQVar1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateCamera(MVCameraController, ProtectedTransform) */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::
     TimeAttackFlagDebriefingCamera_UpdateCamera
               (TimeAttackFlagDebriefingCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).flagTransform;
  if (pTVar1 != (Transform *)0x0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_3,pTVar1,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    fStack_6 = 0.0;
    uStack_7 = 0;
    uStack_8 = 0;
    func_?(&uStack_7,0,(this->fields).height,0,0);
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Vector3);
    }
    a.z = fVar5;
    a.x = (float)(undefined4)uStack_4;
    a.y = (float)uStack_4._4_4_;
    b.y = (float)uStack_8;
    b.x = (float)uStack_7;
    b.z = fStack_6;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffffd0,a,b,(MethodInfo *)0x0);
    uStack_4._0_4_ = pVVar2->x;
    uStack_4._4_4_ = pVVar2->y;
    fVar5 = pVVar2->z;
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar9 != (Transform *)0x0) {
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                          ((Quaternion *)&stack0xffffffcc,pTVar9,(MethodInfo *)0x0);
      uVar11._0_4_ = (this->fields).offset.x;
      uVar11._4_4_ = (this->fields).offset.y;
      fVar12 = (this->fields).offset.z;
      fVar13 = pQVar10->x;
      fVar14 = pQVar10->y;
      fVar15 = pQVar10->z;
      fVar16 = pQVar10->w;
      uStack_8 = (undefined4)uVar11;
      fStack_6 = (float)uVar11._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Quaternion);
        uVar11 = CONCAT44(fStack_6,uStack_8);
      }
      rotation.y = fVar14;
      rotation.x = fVar13;
      rotation.z = fVar15;
      rotation.w = fVar16;
      point.z = fVar12;
      point.x = (float)(int)uVar11;
      point.y = (float)(int)((ulonglong)uVar11 >> 0x20);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffd0,rotation,point,(MethodInfo *)0x0);
      uVar17._0_4_ = pVVar2->x;
      uVar17._4_4_ = pVVar2->y;
      fVar12 = pVVar2->z;
      uStack_8 = (undefined4)uVar17;
      fStack_6 = (float)uVar17._4_4_;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Vector3);
        uVar17 = CONCAT44(fStack_6,uStack_8);
      }
      a_00.z = fVar5;
      a_00.x = (float)(undefined4)uStack_4;
      a_00.y = (float)uStack_4._4_4_;
      b_00.z = fVar12;
      b_00.x = (float)(int)uVar17;
      b_00.y = (float)(int)((ulonglong)uVar17 >> 0x20);
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                         ((Vector3 *)&stack0xffffffd0,a_00,b_00,(MethodInfo *)0x0);
      if (pTVar1 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                  (pTVar1,*pVVar2,(MethodInfo *)0x0);
        this_00 = (this->fields).avatarLocal;
        if (this_00 != (MVAvatarLocal *)0x0) {
          bVar18 = MVAvatar::MVAvatar_IsInMode
                            ((MVAvatar *)this_00,SpawnRoleModeType__Enum_Hidden,(MethodInfo *)0x0);
          if (bVar18 != 0) {
code_?:
            MVCameraBase::MVCameraBase_UpdateCamera
                      ((MVCameraBase *)this,camController,targetTransform,(MethodInfo *)0x0);
            return;
          }
          pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar9 != (Transform *)0x0) {
            pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffffd0,pTVar9,(MethodInfo *)0x0);
            moveToPosition.z = fVar5;
            moveToPosition.x = (float)(undefined4)uStack_4;
            moveToPosition.y = (float)uStack_4._4_4_;
            pVVar2 = TimeAttackFlagDebriefingCamera_PositionAfterCollision
                               ((Vector3 *)&stack0xffffffd0,this,*pVVar2,moveToPosition,
                                (MethodInfo *)0x0);
            if (pTVar1 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                        (pTVar1,*pVVar2,(MethodInfo *)0x0);
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}


/* TimeAttackFlagDebriefingCamera() */

void Assembly-CSharp.dll::TimeAttackFlagDebriefingCamera::TimeAttackFlagDebriefingCamera__ctor
               (TimeAttackFlagDebriefingCamera *this,MethodInfo *method)

{
  (this->fields).height = 1.0;
  (this->fields)._.cameraRadius = 0.3;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

