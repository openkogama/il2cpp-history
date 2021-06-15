
/* Void CameraCollision() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_CameraCollision
               (GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  uVar3 = 0;
  uStack_4 = 0;
  func_?();
  pMStack_5 = (MonitorData *)0x0;
  puStack_6 = (undefined *)0x0;
  puStack_7 = (undefined *)0x0;
  pTVar8 = (this->fields).lookAtTransform;
  fVar9 = 0.0;
  if (pTVar8 != (Transform *)0x0) {
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xffffff30,pTVar8,(MethodInfo *)0x0);
    uVar11._0_4_ = (this->fields).avatarHeadOffset.x;
    uVar11._4_4_ = (this->fields).avatarHeadOffset.y;
    fVar12 = (this->fields).avatarHeadOffset.z;
    uVar13._0_4_ = pVVar10->x;
    uVar13._4_4_ = pVVar10->y;
    fVar14 = pVVar10->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    d = (float)uVar11;
    a_02.z = fVar14;
    a_02.x = (float)(int)uVar13;
    a_02.y = (float)(int)((ulonglong)uVar13 >> 0x20);
    b_00.z = fVar12;
    b_00.x = (float)(int)uVar11;
    b_00.y = (float)(int)((ulonglong)uVar11 >> 0x20);
    pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                       ((Vector3 *)&stack0xffffff3c,a_02,b_00,(MethodInfo *)0x0);
    uVar15 = pVVar10->y;
    uVar11._0_4_ = pVVar10->z;
    pMStack_5 = (MonitorData *)uVar15;
    uVar11._4_4_ = (float)uVar11;
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar8 != (Transform *)0x0) {
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffff64,pTVar8,(MethodInfo *)0x0);
      b_01.y = uVar11._4_4_;
      b_01.x = fVar9;
      b_01.z = (float)uVar11;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&pMStack_5,*pVVar10,b_01,(MethodInfo *)0x0);
      uStack_4._0_4_ = pVVar10->x;
      uStack_4._4_4_ = pVVar10->y;
      aVStack_16[0].x = pVVar10->z;
      puVar17 = &uStack_4;
      fVar18 = (float10)func_?();
      fVar9 = (float)fVar18;
      func_?();
      puVar19 = &UNK_?;
      fVar12 = (float)uVar11;
      uVar13._0_4_ = uVar3;
      func_?();
      uVar20._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                               (StringLiteral_Default,(MethodInfo *)0x0);
      ray.m_Direction.z = in_stack_21;
      ray.m_Direction.y = in_stack_22;
      ray.m_Origin.y = in_stack_23;
      ray.m_Origin.x = in_stack_24;
      ray.m_Origin.z = in_stack_25;
      ray.m_Direction.x = in_stack_26;
      bVar27 = CollisionDetection::CollisionDetection_MVSphereCast
                        (ray,(this->fields)._.cameraRadius,(VoxelHit *)&stack0xfffffee8,fStack_28,
                         (this->fields).ignoreAvatarId,1 << ((byte)uVar20._4_4_ & 0x1f),
                         (MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Mathf);
      }
      if (((float)puVar17 < TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) || (bVar27 == 0)) {
        return;
      }
      pTVar8 = in_stack_29;
      this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_00 != (Transform *)0x0) {
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&stack0xfffffed0,this_00,(MethodInfo *)0x0);
        uVar20._0_4_ = pVVar10->x;
        uVar20._4_4_ = (int32_t)pVVar10->y;
        fVar14 = pVVar10->z;
        fVar30 = in_stack_31;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar14;
        a.x = (float)(int)uVar20;
        a.y = (float)(int)((ulonglong)uVar20 >> 0x20);
        b.y = fStack_32;
        b.x = fStack_33;
        b.z = in_stack_31;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                           ((Vector3 *)&stack0xfffffedc,a,b,(MethodInfo *)0x0);
        point.y = in_stack_24;
        point.x = fVar30;
        point.z = (float)in_stack_29;
        lineStart.y = fStack_32;
        lineStart.x = fStack_33;
        lineStart.z = (float)uVar11;
        bVar27 = MathFunctions::MathFunctions_DistancePointLine_1
                          (point,lineStart,*pVVar10,(float *)&stack0xfffffef0,
                           (Vector3 *)&stack0xffffff0c,(MethodInfo *)0x0);
        if (bVar27 == 0) {
          if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                    ((Object *)StringLiteral_Not_within_line_segment,(MethodInfo *)0x0);
          pOVar34 = (Object *)func_?();
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar34,(MethodInfo *)0x0);
          pOVar34 = (Object *)func_?(TypeInfo__System__Single);
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log(pOVar34,(MethodInfo *)0x0);
        }
        if ((float)pTVar8 < (this->fields)._.cameraRadius) {
          if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
            func_?();
          }
          func_?();
        }
        pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)this,(MethodInfo *)0x0);
        pVVar10 = InputToPlayerMovementAndroid::InputToPlayerMovementAndroid_get_Direction
                           ((Vector3 *)&stack0xffffff5c,
                            (InputToPlayerMovementAndroid *)&stack0xffffff6c,(MethodInfo *)0x0);
        fVar14 = pVVar10->x;
        pCVar35 = (Cube *)pVVar10->y;
        uVar11._0_4_ = pVVar10->z;
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?();
        }
        a_00.y = (float)pCVar35;
        a_00.x = fVar14;
        a_00.z = (float)uVar11;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                           ((Vector3 *)&stack0xffffff10,a_00,d,(MethodInfo *)0x0);
        a_01.y = fVar12;
        a_01.x = (float)uVar3;
        a_01.z = (float)puVar19;
        pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                           ((Vector3 *)&stack0xffffff28,a_01,*pVVar10,(MethodInfo *)0x0);
        if (pTVar8 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                    (pTVar8,*pVVar10,(MethodInfo *)0x0);
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar8 != (Transform *)0x0) {
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                               ((Vector3 *)&stack0xffffff64,pTVar8,(MethodInfo *)0x0);
            a_03.y = uVar11._4_4_;
            a_03.x = fVar9;
            a_03.z = fVar1;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&pMStack_5,a_03,*pVVar10,(MethodInfo *)0x0);
            uVar36 = pVVar10->x;
            uVar37 = pVVar10->y;
            fStack_38 = pVVar10->z;
            uStack_39 = uVar36;
            uStack_40 = uVar37;
            fVar18 = (float10)func_?();
            (this->fields).distance = (float)fVar18;
            b_02.y = (float)(undefined4)uVar13;
            b_02.x = fVar2;
            b_02.z = fVar1;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                               ((Vector3 *)&stack0xffffff90,(this->fields).currentLookAt,b_02,
                                (MethodInfo *)0x0);
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply_1
                               (aVStack_16,uStack_4._4_4_ / fVar2,*pVVar10,(MethodInfo *)0x0);
            a_04.y = (float)uStack_39;
            a_04.x = (float)uStack_41;
            a_04.z = fVar1;
            pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                               (&VStack_42,a_04,*pVVar10,(MethodInfo *)0x0);
            fVar1 = pVVar10->y;
            fVar9 = pVVar10->z;
            (this->fields).currentLookAt.x = pVVar10->x;
            (this->fields).currentLookAt.y = fVar1;
            (this->fields).currentLookAt.z = fVar9;
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar43 = (code *)swi(3);
  (*pcVar43)();
  return;
}


/* Void Enter(MVCameraController) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Enter
               (GhostCamera *this,MVCameraController *camController,MethodInfo *method)

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
  if ((this_00 != (MVAvatarLocal *)0x0) &&
     (item = (UnityWebRequest *)
             mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)this_00,(MethodInfo *)0x0),
     this_01 != (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)0x0)) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              ((HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)this_01,item,
               MethodInfo__System__Collections__Generic__HashSet<int>__Add_int_);
    pTVar1 = (this->fields).lookAtTransform;
    (this->fields).ignoreAvatarId = (HashSet_1_System_Int32_ *)this_01;
    if (pTVar1 != (Transform *)0x0) {
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          (&VStack_3,pTVar1,(MethodInfo *)0x0);
      VStack_4.y = (this->fields).avatarHeadOffset.x;
      VStack_4.z = (this->fields).avatarHeadOffset.y;
      fVar5 = (this->fields).avatarHeadOffset.z;
      uStack_6._0_4_ = pVVar2->x;
      uStack_6._4_4_ = pVVar2->y;
      fVar7 = pVVar2->z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      VVar8.z = fVar7;
      VVar8.x = (float)(undefined4)uStack_6;
      VVar8.y = (float)uStack_6._4_4_;
      b_00.z = fVar5;
      b_00.x = VStack_4.y;
      b_00.y = VStack_4.z;
      pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (&VStack_3,VVar8,b_00,(MethodInfo *)0x0);
      bVar9 = cRam_? == '\0';
      fVar7 = pVVar2->y;
      fVar5 = pVVar2->z;
      (this->fields).currentLookAt.x = pVVar2->x;
      (this->fields).currentLookAt.y = fVar7;
      (this->fields).currentLookAt.z = fVar5;
      if (bVar9) {
        func_?();
        cRam_? = '\x01';
      }
      pPVar10 = (PrefabPool *)(this->fields).avatarLocal;
      if ((pPVar10 != (PrefabPool *)0x0) &&
         (this_02 = PrefabPool::PrefabPool_get_MVPointLightPrefab(pPVar10,(MethodInfo *)0x0),
         this_02 != (MVPointLightObject *)0x0)) {
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                            ((Vector3 *)(auStack_11 + 4),(Transform *)this_02,(MethodInfo *)0x0);
        VStack_4.y = pVVar2->x;
        VStack_4.z = pVVar2->y;
        fVar5 = pVVar2->z;
        VStack_3.z = 0.0;
        VStack_3.x = 0.0;
        VStack_3.y = 0.0;
        func_?();
        if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
          func_?(TypeInfo__UnityEngine__Vector3);
        }
        a.z = fVar5;
        a.x = VStack_4.y;
        a.y = VStack_4.z;
        b.z = VStack_3.z;
        b.x = VStack_3.x;
        b.y = VStack_3.y;
        pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                            (&VStack_4,a,b,(MethodInfo *)0x0);
        uStack_6._0_4_ = pVVar2->x;
        uStack_6._4_4_ = pVVar2->y;
        fVar5 = pVVar2->z;
        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                            ((Component_1 *)this,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          pQVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              ((Quaternion *)auStack_11,this_03,(MethodInfo *)0x0);
          VStack_4.y = (this->fields).offset.x;
          VStack_4.z = (this->fields).offset.y;
          fVar7 = (this->fields).offset.z;
          auStack_11._0_4_ = pQVar12->x;
          auStack_11._4_4_ = pQVar12->y;
          fStack_13 = pQVar12->z;
          fStack_14 = pQVar12->w;
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Quaternion);
          }
          rotation.y = (float)auStack_11._4_4_;
          rotation.x = (float)auStack_11._0_4_;
          rotation.z = fStack_13;
          rotation.w = fStack_14;
          point.z = fVar7;
          point.x = VStack_4.y;
          point.y = VStack_4.z;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)(auStack_11 + 4),rotation,point,(MethodInfo *)0x0);
          a_00.z = fVar5;
          a_00.x = (float)(undefined4)uStack_6;
          a_00.y = (float)uStack_6._4_4_;
          pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)(auStack_11 + 4),a_00,*pVVar2,(MethodInfo *)0x0);
          if (pTVar1 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                      (pTVar1,*pVVar2,(MethodInfo *)0x0);
            if ((((uint)(TypeInfo__MVClientSettings->vtable).Equals.methodPtr & 0x2000000) != 0) &&
               ((TypeInfo__MVClientSettings->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVClientSettings);
            }
            bVar15 = MVClientSettings::MVClientSettings_get_ReviveEnabled((MethodInfo *)0x0);
            if (bVar15 == 0) {
              return;
            }
            if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
               && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
              func_?(TypeInfo__MVGameControllerBase);
            }
            pPVar10 = (PrefabPool *)
                      MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                ((MethodInfo *)0x0);
            if ((pPVar10 != (PrefabPool *)0x0) &&
               (this_04 = PrefabPool::PrefabPool_get_CollectTheItemDropOffArrowPrefab
                                    (pPVar10,(MethodInfo *)0x0), this_04 != (ObjectiveArrow *)0x0))
            {
              iVar16 = mscorlib.dll::System::Collections::Generic::
                       Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::
                       Object]::
                       Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                                 ((Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                   *)this_04,
                                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<LastRespawnType>__get_Value__
                                 );
              if (iVar16 != 1) {
                return;
              }
              if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) !=
                   0) && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
                func_?(TypeInfo__MVGameControllerBase);
              }
              this_05 = (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                         *)MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                                     ((MethodInfo *)0x0);
              if (((this_05 !=
                    (Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_ *)
                    0x0) && (this_06 = (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                                        *)System.Core.dll::System::Linq::
                                          Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::
                                          Object,System::Object]::
                                          Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                                                    (this_05,(MethodInfo *)0x0),
                            this_06 !=
                            (Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object_
                             *)0x0)) &&
                 (this_07 = (ReviveState *)
                            mscorlib.dll::System::Collections::Generic::
                            Dictionary`2[TKey,TValue]+ValueCollection[WinningConditionType,System::
                            Object]::
                            Dictionary_2_TKey_TValue_ValueCollection_WinningConditionType_System_Object__get_Count
                                      (this_06,
                                       MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<ReviveState>__get_Value__
                                      ), this_07 != (ReviveState *)0x0)) {
                pSVar17 = ReviveState::ReviveState_GetSafeGroundedDataAtSelectedIndex
                                    ((SafeSpotData *)&stack0xffffff5c,this_07,(MethodInfo *)0x0);
                VVar8 = pSVar17->CameraPosition;
                uVar18 = (pSVar17->CameraRotation).w;
                uVar19 = (pSVar17->CameraRotation).x;
                uVar20 = (pSVar17->CameraRotation).y;
                uVar21 = (pSVar17->CameraRotation).z;
                value.z = (float)uVar21;
                value.y = (float)uVar20;
                value.x = (float)uVar19;
                pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                if (pTVar1 != (Transform *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                            (pTVar1,VVar8,(MethodInfo *)0x0);
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    value.w = (float)uVar18;
                    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_rotation
                              (pTVar1,value,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
  return;
}


/* Void Exit(MVCameraController) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Exit
               (GhostCamera *this,MVCameraController *camController,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play
            ((ScaleAnimationBase *)this,(float)camController,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
    func_?();
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


/* Vector3 GetLookAtPosition() */

Vector3 * Assembly-CSharp.dll::GhostCamera::GhostCamera_GetLookAtPosition
                    (Vector3 *__return_storage_ptr__,GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (PrefabPool *)(this->fields).avatarLocal;
  if (this_00 != (PrefabPool *)0x0) {
    this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
    if (this_01 != (MVPointLightObject *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffdc,(Transform *)this_01,(MethodInfo *)0x0);
      uStack_2._0_4_ = pVVar1->x;
      uStack_2._4_4_ = pVVar1->y;
      fVar3 = pVVar1->z;
      fStack_4 = 0.0;
      uStack_5 = 0;
      func_?(&uStack_5,0);
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
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar7)();
  return pVVar1;
}


/* Void Initialize(MVAvatarLocal) */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Initialize
               (GhostCamera *this,MVAvatarLocal *avatarLocal,MethodInfo *method)

{
  (this->fields).avatarLocal = avatarLocal;
  if (avatarLocal != (MVAvatarLocal *)0x0) {
    this_00 = DayNightCycle::DayNightCycle_get_CurrentMoonParam
                        ((DayNightCycle *)avatarLocal,(MethodInfo *)0x0);
    if (this_00 != (CelestialParam *)0x0) {
      pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         ((GameObject *)this_00,(MethodInfo *)0x0);
      (this->fields).lookAtTransform = pTVar1;
      return;
    }
  }
  func_?(0);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_Reset(GhostCamera *this,MethodInfo *method)

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

void Assembly-CSharp.dll::GhostCamera::GhostCamera_UpdateCamera
               (GhostCamera *this,MVCameraController *camController,
               ProtectedTransform *targetTransform,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).distance;
  uVar2._0_4_ = (this->fields).desiredDistance;
  uVar2._4_4_ = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime
                          ((MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Mathf);
  }
  fVar1 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Lerp
                    (fVar1,(float)uVar2,uVar2._4_4_ * _UNK_?,(MethodInfo *)0x0);
  (this->fields).distance = fVar1;
  GhostCamera_UpdatePosition(this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).CameraCollision.method)(this,this->klass[1]._0.image);
  fVar1 = (this->fields).currentLookAt.z;
  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar3 != (Transform *)0x0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&pPStack_5,pTVar3,(MethodInfo *)0x0);
    uStack_6._0_4_ = pVVar4->x;
    uStack_6._4_4_ = pVVar4->y;
    uVar2._0_4_ = pVVar4->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      uStack_6 = CONCAT44(uStack_6._4_4_,TypeInfo__UnityEngine__Vector3);
      func_?();
    }
    VVar7.z = fVar1;
    VVar7.x = (float)(int)uStack_6;
    VVar7.y = (float)(int)((ulonglong)uStack_6 >> 0x20);
    b_00.z = (float)uVar2;
    b_00.x = (float)(int)uStack_6;
    b_00.y = (float)(int)((ulonglong)uStack_6 >> 0x20);
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       ((Vector3 *)&pPStack_5,VVar7,b_00,(MethodInfo *)0x0);
    uVar2._0_4_ = (this->fields).lookAtPos.z;
    method_00 = pVVar4->x;
    VVar7 = *pVVar4;
    fVar1 = (this->fields).lookAtPos.x;
    puVar8 = &UNK_?;
    pGVar9 = this;
    pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)method_00);
    if (pTVar3 != (Transform *)0x0) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&pPStack_5,pTVar3,(MethodInfo *)0x0);
      a.y = (float)puVar8;
      a.x = fVar1;
      a.z = (float)uVar2;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                         ((Vector3 *)&pPStack_5,a,*pVVar4,(MethodInfo *)0x0);
      uVar2._0_4_ = pVVar4->x;
      uVar2._4_4_ = pVVar4->y;
      fVar1 = pVVar4->z;
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      toDirection.z = fVar1;
      toDirection.x = (float)(int)uVar2;
      toDirection.y = (float)(int)((ulonglong)uVar2 >> 0x20);
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_FromToRotation
                         ((Quaternion *)&fStack_11,VVar7,toDirection,(MethodInfo *)0x0);
      fStack_11 = pQVar10->x;
      pPStack_5 = (ProtectedTransform__Class *)pQVar10->y;
      pMVar12 = (MonitorData *)pQVar10->z;
      PVar13.transform = (Transform *)pQVar10->w;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                         ((Quaternion *)&stack0xffffffe0,(MethodInfo *)0x0);
      fVar1 = pQVar10->x;
      uVar2._0_4_ = pQVar10->y;
      uVar2._4_4_ = pQVar10->z;
      fVar14 = pQVar10->w;
      fVar15 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_deltaTime((MethodInfo *)0x0)
      ;
      a_00.y = (float)uVar2;
      a_00.x = fVar1;
      a_00.z = uVar2._4_4_;
      a_00.w = fVar14;
      b.y = (float)pPStack_5;
      b.x = fStack_11;
      b.z = (float)pMVar12;
      b.w = (float)PVar13.transform;
      pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_Slerp
                         ((Quaternion *)&fStack_11,a_00,b,fVar15 * _UNK_? * (float)pGVar9,
                          (MethodInfo *)0x0);
      fVar1 = pQVar10->x;
      uVar2._0_4_ = pQVar10->y;
      uVar2._4_4_ = pQVar10->z;
      fVar14 = pQVar10->w;
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                           ((Vector3 *)&pPStack_5,pTVar3,(MethodInfo *)0x0);
        if ((ProtectedTransform *)&pPStack_5 != (ProtectedTransform *)0x0) {
          ProtectedTransform::ProtectedTransform_set_position
                    ((ProtectedTransform *)&pPStack_5,*pVVar4,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)this,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                               ((Quaternion *)&fStack_11,pTVar3,(MethodInfo *)0x0);
            lhs.y = (float)uVar2;
            lhs.x = fVar1;
            lhs.z = uVar2._4_4_;
            lhs.w = fVar14;
            pQVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply
                               ((Quaternion *)&fStack_11,lhs,*pQVar10,(MethodInfo *)0x0);
            ProtectedTransform::ProtectedTransform_set_rotation
                      ((ProtectedTransform *)&pPStack_5,*pQVar10,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void UpdatePosition() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera_UpdatePosition
               (GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar1 = 0.0;
  fVar2 = 0.0;
  puStack_3 = (undefined *)0x0;
  pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (pTVar4 != (Transform *)0x0) {
    pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffff80,pTVar4,(MethodInfo *)0x0);
    fVar6 = pVVar5->z;
    pTVar7 = (this->fields).lookAtTransform;
    if (pTVar7 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffff7c,pTVar7,(MethodInfo *)0x0);
      uVar8._0_4_ = (this->fields).prevLookAtTransformPos.x;
      uVar8._4_4_ = (this->fields).prevLookAtTransformPos.y;
      uVar9._0_4_ = pVVar5->x;
      uVar9._4_4_ = pVVar5->y;
      fVar10 = pVVar5->z;
      fVar11 = (this->fields).prevLookAtTransformPos.z;
      if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
        func_?();
      }
      a_02.z = fVar10;
      a_02.x = (float)(int)uVar9;
      a_02.y = (float)(int)((ulonglong)uVar9 >> 0x20);
      b_00.z = fVar11;
      b_00.x = (float)(int)uVar8;
      b_00.y = (float)(int)((ulonglong)uVar8 >> 0x20);
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                          ((Vector3 *)&stack0xffffff98,a_02,b_00,(MethodInfo *)0x0);
      pVVar5 = (Vector3 *)&stack0xffffffc8;
      a_03.y = fVar2;
      a_03.x = fVar1;
      a_03.z = fVar6;
      pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                          (pVVar5,a_03,*pVVar12,(MethodInfo *)0x0);
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                (pTVar4,*pVVar12,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_get_identity
                          ((Quaternion *)&stack0x0000005c,(MethodInfo *)0x0);
      uVar14 = 0;
      in_stack_15 = pQVar13->x;
      in_stack_16 = pQVar13->y;
      in_stack_17 = pQVar13->z;
      in_stack_18 = pQVar13->w;
      pGVar19 = this;
      pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (pTVar4 != (Transform *)0x0) {
        pQVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                            ((Quaternion *)&uStack20,pTVar4,(MethodInfo *)0x0);
        in_stack_21 = pQVar13->x;
        uStack20._0_4_ = pQVar13->y;
        uStack20._4_4_ = pQVar13->z;
        in_stack_22 = pQVar13->w;
        d = &UNK_?;
        puVar23 = (undefined8 *)func_?();
        _fStack00000018 = *puVar23;
        in_stack_24 = *(float *)(puVar23 + 1);
        _uStack00000038 = 0;
        in_stack_25 = 0;
        func_?();
        puVar26 = &UNK_?;
        func_?();
        pTVar4 = (this->fields).lookAtTransform;
        if (pTVar4 != (Transform *)0x0) {
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                              ((Vector3 *)&stack0xffffff18,pTVar4,(MethodInfo *)0x0);
          fVar2 = (this->fields).avatarHeadOffset.z;
          fVar6 = pVVar12->z;
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                              ((Vector3 *)&stack0xffffff04,(this->fields).offset,in_stack_27,
                               (MethodInfo *)0x0);
          a.y = in_stack_28;
          a.x = in_stack_29;
          a.z = fVar2;
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffff3c,a,*pVVar12,(MethodInfo *)0x0);
          rotation.y = (float)uVar14;
          rotation.x = (float)pGVar19;
          rotation.z = (float)d;
          rotation.w = (float)puVar26;
          pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffff5c,rotation,*pVVar12,(MethodInfo *)0x0);
          a_00.y = fVar1;
          a_00.x = (float)pVVar5;
          a_00.z = fVar6;
          pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                              ((Vector3 *)&stack0xffffff80,a_00,*pVVar12,(MethodInfo *)0x0);
          fVar2 = pVVar5->y;
          fVar1 = pVVar5->z;
          (this->fields).lookAtPos.x = pVVar5->x;
          (this->fields).lookAtPos.y = fVar2;
          (this->fields).lookAtPos.z = fVar1;
          pTVar4 = (this->fields).lookAtTransform;
          if (pTVar4 != (Transform *)0x0) {
            pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                ((Vector3 *)&stack0xffffffa0,pTVar4,(MethodInfo *)0x0);
            pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                ((Vector3 *)&stack0xffffffac,*pVVar5,
                                 (this->fields).avatarHeadOffset,(MethodInfo *)0x0);
            fVar6 = pVVar30->z;
            pVVar5 = &(this->fields).lookAtPos;
            uVar14 = pVVar5->x;
            fVar2 = pVVar5->y;
            pVVar12 = (Vector3 *)&stack0xffffffcc;
            pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                (pVVar12,*pVVar5,*pVVar30,(MethodInfo *)0x0);
            fVar1 = pVVar30->x;
            pVVar5 = (Vector3 *)&stack0xffffffec;
            puVar26 = &UNK_?;
            pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                (pVVar5,*pVVar30,(float)d,(MethodInfo *)0x0);
            fStack31 = pVVar30->x;
            fStack32 = pVVar30->y;
            in_stack_24 = pVVar30->z;
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                ((Component_1 *)this,(MethodInfo *)0x0);
            if (pTVar4 != (Transform *)0x0) {
              pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                  ((Vector3 *)&stack0x0000000c,pTVar4,(MethodInfo *)0x0);
              b_01.y = in_stack_33;
              b_01.x = (float)method;
              b_01.z = fVar6;
              pVVar30 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                  ((Vector3 *)&stack0x00000018,*pVVar30,b_01,(MethodInfo *)0x0);
              uStack20._0_4_ = pVVar30->x;
              uStack20._4_4_ = pVVar30->y;
              in_stack_22 = pVVar30->z;
              fVar34 = (float10)func_?();
              puVar23 = (undefined8 *)&stack0x00000018;
              in_stack_35 = (float)fVar34;
              puVar36 = (undefined8 *)func_?();
              uVar9._0_4_ = 0.0;
              _uStack00000038 = *puVar36;
              uVar8._0_4_ = *(float *)(puVar36 + 1);
              pVVar30 = (Vector3 *)func_?();
              lhs.z = (float)uVar8;
              lhs.x = (float)uStack37;
              lhs.y = (float)uStack38;
              in_stack_39 =
                   UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Dot
                             (lhs,*pVVar30,(MethodInfo *)0x0);
              in_stack_40 = (this->fields).distance;
              if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0)
                 && ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
                fStack31 = (float)TypeInfo__UnityEngine__Mathf;
                in_stack_41 = &UNK_?;
                func_?();
              }
              func_?();
              a_01.y = (float)uVar14;
              a_01.x = (float)pVVar12;
              a_01.z = fVar6;
              b.y = (float)pVVar5;
              b.x = (float)puVar26;
              b.z = fVar1;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Addition
                                  ((Vector3 *)&stack0xffffff84,a_01,b,(MethodInfo *)0x0);
              uVar42 = pVVar5->x;
              uVar43 = pVVar5->y;
              fVar1 = pVVar5->z;
              (this->fields).actualLookAt.x = (float)uVar42;
              (this->fields).actualLookAt.y = (float)uVar43;
              (this->fields).currentLookAt.x = (float)uVar42;
              (this->fields).currentLookAt.y = (float)uVar43;
              (this->fields).actualLookAt.z = fVar1;
              (this->fields).currentLookAt.z = fVar1;
              if (TypeInfo__UnityEngine__Mathf->static_fields->Epsilon <= fVar2 &&
                  fVar2 != TypeInfo__UnityEngine__Mathf->static_fields->Epsilon) {
                pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                fVar1 = (this->fields).actualLookAt.z;
                pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                          Component_1_get_transform((Component_1 *)this,(MethodInfo *)0x0);
                if (pTVar7 == (Transform *)0x0) goto code_?;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                    ((Vector3 *)&stack0xffffffd4,pTVar7,(MethodInfo *)0x0);
                uVar44 = pVVar5->x;
                uVar45 = pVVar5->y;
                fVar2 = pVVar5->z;
                if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000)
                     != 0) && ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
                  func_?();
                }
                a_04.y = (float)uVar45;
                a_04.x = (float)uVar44;
                a_04.z = fVar2;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Multiply
                                    ((Vector3 *)&puStack_3,a_04,(float)puVar26,(MethodInfo *)0x0);
                a_05.y = (float)puVar23;
                a_05.x = (float)uVar9;
                a_05.z = fVar1;
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                                    ((Vector3 *)&stack0xfffffff8,a_05,*pVVar5,(MethodInfo *)0x0);
                if (pTVar4 == (Transform *)0x0) goto code_?;
                UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_position
                          (pTVar4,*pVVar5,(MethodInfo *)0x0);
              }
              pTVar4 = (this->fields).lookAtTransform;
              if (pTVar4 != (Transform *)0x0) {
                pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                    ((Vector3 *)&stack0x0000002c,pTVar4,(MethodInfo *)0x0);
                fVar2 = pVVar5->y;
                fVar1 = pVVar5->z;
                (this->fields).prevLookAtTransformPos.x = pVVar5->x;
                (this->fields).prevLookAtTransformPos.y = fVar2;
                (this->fields).prevLookAtTransformPos.z = fVar1;
                return;
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
  return;
}


/* GhostCamera() */

void Assembly-CSharp.dll::GhostCamera::GhostCamera__ctor(GhostCamera *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  (this->fields).height = 1.0;
  (this->fields).desiredDistance = 5.0;
  uStack_2 = 0;
  func_?(&uStack_2,0,0x3fc00000,0,0);
  (this->fields).avatarHeadOffset.x = (float)(undefined4)uStack_2;
  (this->fields).avatarHeadOffset.y = (float)uStack_2._4_4_;
  (this->fields).avatarHeadOffset.z = fStack_1;
  (this->fields).distance = 5.0;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_4,(MethodInfo *)0x0);
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  (this->fields).lookAtPos.x = pVVar3->x;
  (this->fields).lookAtPos.y = fVar5;
  (this->fields).lookAtPos.z = fVar6;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_4,(MethodInfo *)0x0);
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  (this->fields).actualLookAt.x = pVVar3->x;
  (this->fields).actualLookAt.y = fVar5;
  (this->fields).prevLookAtTransformPos.x = 0.0;
  (this->fields).prevLookAtTransformPos.y = 0.0;
  (this->fields).actualLookAt.z = fVar6;
  (this->fields).prevLookAtTransformPos.z = 0.0;
  MVCameraBase::MVCameraBase__ctor((MVCameraBase *)this,(MethodInfo *)0x0);
  return;
}


/* CameraType get_CameraType() */

CameraType__Enum
Assembly-CSharp.dll::GhostCamera::GhostCamera_get_CameraType(GhostCamera *this,MethodInfo *method)

{
  return CameraType__Enum_GhostCamera;
}

