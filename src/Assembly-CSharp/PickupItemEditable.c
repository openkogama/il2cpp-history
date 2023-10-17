
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_Awake
               (PickupItemEditable *this,MethodInfo *method)

{
  (*(this->klass->vtable).Initialize.methodPtr)(this,(this->klass->vtable).Initialize.method);
  return;
}


/* Void DisableAnimation() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_DisableAnimation
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pAVar1 = (this->fields).animator;
  if (pAVar1 != (Animator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pAVar1,0,(MethodInfo *)0x0);
    this_00 = (this->fields).weaponParent;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    if (this_00 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_00,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator DisableAnimatorCoroutine() */

IEnumerator *
Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_DisableAnimatorCoroutine
          (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__42);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__42);
  if (value != (Object *)0x0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
              (value,ExceptionArgument__Enum_obj,unaff_ESI);
    value[1].klass = (Object__Class *)0x0;
    value[2].klass = (Object__Class *)this;
    func_?(value + 2,this);
    return (IEnumerator *)value;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void Initialize() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_Initialize
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__GameObject);
    func_?(&TypeInfo__MainCameraManager);
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&StringLiteral_FirstPersonTransform);
    func_?(&StringLiteral_Default);
    func_?(&StringLiteral_Player);
    cRam_? = '\x01';
  }
  iVar1 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Default,(MethodInfo *)0x0);
  uVar2 = UnityEngine.CoreModule.dll::UnityEngine::LayerMask::LayerMask_NameToLayer
                    (StringLiteral_Player,(MethodInfo *)0x0);
  (this->fields).hitLayerMask = 1 << ((byte)iVar1 & 0x1f) | 1 << (uVar2 & 0x1f);
  if ((TypeInfo__MainCameraManager->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__MainCameraManager);
  }
  if (TypeInfo__MainCameraManager->static_fields->IsCameraForcedFirstPerson != 0) {
    pTVar3 = (this->fields)._._.firstPersonTransform;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar4 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar4 != 0) {
      this_00 = (GameObject *)func_?();
      if (this_00 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                  (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar3,p,(MethodInfo *)0x0);
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar3 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar3,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            (this->fields)._._.firstPersonTransform = pTVar3;
            func_?();
            goto code_?;
          }
        }
      }
      func_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
code_?:
  pPVar6 = (PickupItemEditable_EditableItemConfiguration *)
           (*(this->klass->vtable).__unknown_3.methodPtr)
                     (this,(this->klass->vtable).__unknown_3.method);
  (this->fields)._Configuration_k__BackingField = pPVar6;
  func_?(&(this->fields)._Configuration_k__BackingField,pPVar6);
  PickupItemEditable_SetValuesBasedOnConfiguration(this,(MethodInfo *)0x0);
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_InterruptFire
               (PickupItemEditable *this,MethodInfo *method)

{
  if ((this->fields).animatorRoutine != (IEnumerator *)0x0) {
    Coroutines::Coroutines_Stop((this->fields).animatorRoutine,(MethodInfo *)0x0);
    (this->fields).animatorRoutine = (IEnumerator *)0x0;
    func_?(&(this->fields).animatorRoutine,0);
    PickupItemEditable_DisableAnimation(this,(MethodInfo *)0x0);
  }
  return;
}


/* Boolean IsSamePickupItem(Dictionary`2[System.Object,System.Object]) */

bool Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_IsSamePickupItem
               (PickupItemEditable *this,Dictionary_2_System_Object_System_Object_ *itemData,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_CubeModelId);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._Configuration_k__BackingField;
  if (pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
    iVar2 = (pPVar1->fields).cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    iVar3 = Extensions::Extensions_GetValueOrDefault_1
                      (itemData,StringLiteral_CubeModelId,-1,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    bVar4 = (*(this->klass->vtable).__unknown_1.methodPtr)
                      (this,itemData,(this->klass->vtable).__unknown_1.method);
    return bVar4 & iVar2 == iVar3;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void OnCubeModelStateChanged() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnCubeModelStateChanged
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MVCubeModelInstance);
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  this_00 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  pPVar1 = (this->fields)._Configuration_k__BackingField;
  if ((pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) &&
     (this_00 != (MVWorldObjectClientManager *)0x0)) {
    cmb = (MVCubeModelInstance *)
          MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                    (this_00,(pPVar1->fields).cubeModelId,(MethodInfo *)0x0);
    if (cmb == (MVCubeModelInstance *)0x0) {
      return;
    }
    pGVar2 = (this->fields).cubeModelObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar2,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar3 != 0) {
      pGVar2 = (this->fields).cubeModelObject;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar2,(MethodInfo *)0x0);
      (this->fields).cubeModelObject = (GameObject *)0x0;
      func_?();
    }
    if (((cmb->klass->_1).typeHierarchyDepth <
         (TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth) ||
       ((MVCubeModelInstance__Class *)
        (cmb->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).typeHierarchyDepth - 1]
        != TypeInfo__MVCubeModelInstance)) goto code_?;
    iVar4 = MVCubeModelBase::MVCubeModelBase_get_Pid((MVCubeModelBase *)cmb,(MethodInfo *)0x0);
    (this->fields)._CubeModelPid_k__BackingField = iVar4;
    pGVar2 = PickupItem::PickupItem_CloneCubeModelInstance(cmb,1,(MethodInfo *)0x0);
    (this->fields).cubeModelObject = pGVar2;
    func_?();
    pGVar2 = (this->fields).cubeModelObject;
    if ((pGVar2 != (GameObject *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (pGVar2,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                (this_01,(this->fields).cubeModelParent,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                (this_01,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,(MethodInfo *)0x0
                );
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      puStack5 =
           (undefined *)(TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion).w;
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                (this_01,TypeInfo__UnityEngine__Quaternion->static_fields->identityQuaternion,
                 (MethodInfo *)0x0);
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                (this_01,TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0)
      ;
      return;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnEnterVehicleWithWeapon() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnEnterVehicleWithWeapon
               (PickupItemEditable *this,MethodInfo *method)

{
  (*(this->klass->vtable).InterruptFire.methodPtr)(this,(this->klass->vtable).InterruptFire.method);
  return;
}


/* Void OnFire(Boolean) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnFire
               (PickupItemEditable *this,bool isLocal,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields)._Configuration_k__BackingField;
  (this->fields)._.isFiring = 0;
  if (pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
    fStack_2 = (pPVar1->fields).radius;
    pAStack_3 = (AudioSource *)(pPVar1->fields).range;
    pTVar4 = (this->fields).weaponHandle;
    if (pTVar4 != (Transform *)0x0) {
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         (&VStack_6,pTVar4,(MethodInfo *)0x0);
      uStack_7._0_4_ = pVVar5->x;
      uStack_7._4_4_ = pVVar5->y;
      fStack_8 = pVVar5->z;
      pMVar9 = (this->fields)._._.owner;
      if (pMVar9 != (MVPickupOwner *)0x0) {
        pVVar5 = MVPickupOwner::MVPickupOwner_get_LookDirection(&VStack_10,pMVar9,(MethodInfo *)0x0)
        ;
        uVar11 = pVVar5->x;
        uVar12 = pVVar5->y;
        VStack_6.y = uStack_7._4_4_ - (float)uVar12 * fStack_2;
        VStack_6.x = (float)uStack_7 - (float)uVar11 * fStack_2;
        VStack_6.z = fStack_8 - pVVar5->z * fStack_2;
        pMVar9 = (this->fields)._._.owner;
        if (pMVar9 != (MVPickupOwner *)0x0) {
          pVVar13 = MVPickupOwner::MVPickupOwner_get_LookDirection
                             (&VStack_10,pMVar9,(MethodInfo *)0x0);
          puVar14 = (undefined *)pVVar13->x;
          pVVar5 = (Vector3 *)pVVar13->y;
          pTVar4 = (Transform *)pVVar13->z;
          fVar15 = VStack_6.x;
          fVar16 = VStack_6.y;
          origin.z = VStack_6.z;
          origin.x = VStack_6.x;
          origin.y = VStack_6.y;
          pSVar17 = (String *)VStack_6.z;
          UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray__ctor
                    ((Ray *)&stack0xffffff88,origin,*pVVar13,(MethodInfo *)0x0);
          pMVar9 = (this->fields)._._.owner;
          VStack_6.y = (float)pTVar4;
          VStack_6.x = (float)pVVar5;
          if (pMVar9 != (MVPickupOwner *)0x0) {
            pMStack_18 = (pMVar9->klass->vtable).get_IgnoreWOIDs.method;
            VStack_10.z = (float)&UNK_?;
            fVar19 = fVar16;
            pSVar20 = pSVar17;
            puVar21 = puVar14;
            pMStack_22 = pMVar9;
            ignoreWoIds = (HashSet_1_System_Int32_ *)
                          (*(pMVar9->klass->vtable).get_IgnoreWOIDs.methodPtr)();
            ray.m_Origin.y = fVar16;
            ray.m_Origin.x = fVar15;
            ray.m_Origin.z = (float)pSVar17;
            ray.m_Direction.x = (float)puVar14;
            ray.m_Direction.y = VStack_6.x;
            ray.m_Direction.z = VStack_6.y;
            voxelHits = CollisionDetection::CollisionDetection_MVSphereCastAll
                                  (ray,fStack_2,(float)pAStack_3 + fStack_2,ignoreWoIds,
                                   (this->fields).hitLayerMask,(MethodInfo *)0x0);
            if (isLocal == 0) {
              this_00 = (this->fields)._._.muzzlePoint;
              if (this_00 == (Transform *)0x0) goto code_?;
              pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_10,this_00,(MethodInfo *)0x0);
              fVar15 = pVVar13->x;
              fStack_23 = pVVar13->y;
              fStack_2 = pVVar13->z;
            }
            else {
              pCVar24 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                  ((MethodInfo *)0x0);
              if (pCVar24 == (Camera *)0x0) goto code_?;
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar24,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) goto code_?;
              pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                                 (&VStack_10,pTVar4,(MethodInfo *)0x0);
              VStack_6.x = pVVar5->x;
              VStack_6.y = pVVar5->y;
              VStack_6.z = pVVar5->z;
              pCVar24 = UnityEngine.CoreModule.dll::UnityEngine::Camera::Camera_get_main
                                  ((MethodInfo *)0x0);
              if (pCVar24 == (Camera *)0x0) goto code_?;
              pSVar20 = (String *)&UNK_?;
              pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                  ((Component *)pCVar24,(MethodInfo *)0x0);
              if (pTVar4 == (Transform *)0x0) goto code_?;
              pVVar5 = &VStack_10;
              puVar21 = &UNK_?;
              pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                 (pVVar5,pTVar4,(MethodInfo *)0x0);
              uStack_7._0_4_ = pVVar13->x;
              uStack_7._4_4_ = pVVar13->y;
              fVar15 = (float)uStack_7 + VStack_6.x;
              fStack_23 = uStack_7._4_4_ + VStack_6.y;
              fStack_2 = pVVar13->z + VStack_6.z;
              fStack_8 = fStack_2;
            }
            pAStack_3 = (this->fields).fireAudioSource;
            pMVar25 = (this->klass->vtable).get_FireSoundEffectName.method;
            VStack_6.z = (float)(*(this->klass->vtable).get_FireSoundEffectName.methodPtr)(this);
            if (cRam_? == '\0') {
              func_?(&TypeInfo__UnityEngine__Object);
              cRam_? = '\x01';
            }
            if (pAStack_3 != (AudioSource *)0x0) {
              pAStack_26 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::
                           AudioSource_get_clip(pAStack_3,(MethodInfo *)0x0);
              if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                func_?(TypeInfo__UnityEngine__Object);
              }
              bVar27 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                                ((Object_1 *)pAStack_26,(Object_1 *)0x0,(MethodInfo *)0x0);
              if (bVar27 == 0) {
                this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager
                                    ((MethodInfo *)0x0);
                if (this_01 == (AudioManager *)0x0) goto code_?;
                position.y = fStack_23;
                position.x = fVar15;
                position.z = fStack_2;
                AudioManager::AudioManager_Play_2
                          (this_01,(String *)VStack_6.z,pAStack_3,position,(MethodInfo *)0x0);
              }
              PickupItemEditable_PlayAnimation(this,(MethodInfo *)0x0);
              if (voxelHits != (List_1_VoxelHit_ *)0x0) {
                if (0 < (voxelHits->fields)._size) {
                  (*(this->klass->vtable).OnHit.methodPtr)
                            (this,voxelHits,pMVar25,fVar19,pSVar20,puVar21,pVVar5,pTVar4,
                             (this->klass->vtable).OnHit.method);
                  if (isLocal != 0) {
                    lineOfFire.m_Origin.y = fVar19;
                    lineOfFire.m_Origin.x = (float)pMVar25;
                    lineOfFire.m_Origin.z = (float)pSVar20;
                    lineOfFire.m_Direction.x = (float)puVar21;
                    lineOfFire.m_Direction.y = (float)pVVar5;
                    lineOfFire.m_Direction.z = (float)pTVar4;
                    PickupItemEditable_OnLocalHit(this,voxelHits,lineOfFire,(MethodInfo *)0x0);
                  }
                }
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
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* Void OnHit(List`1[VoxelHit], Ray) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnHit
               (PickupItemEditable *this,List_1_VoxelHit_ *voxelHits,Ray lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    cRam_? = '\x01';
  }
  if (voxelHits != (List_1_VoxelHit_ *)0x0) {
    pGVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)&stack0xffffff48,
                         (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    pPStack_2 = pGVar1->progressBar;
    pTStack_3 = pGVar1->progressText;
    pGStack_4 = pGVar1->progressDivider;
    pGStack_5 = pGVar1->progressBarTextBubble;
    pGStack_6 = pGVar1->avatarHead;
    pRStack_7 = pGVar1->avatarHeadImage;
    pGStack_8 = pGVar1->avatarHeadUI;
    pPStack_9 = pGVar1->disabledProgressBar;
    pGStack_10 = pGVar1->disabledProgressDivider;
    pGStack_11 = pGVar1->disabledBarTextBubble;
    pGStack_12 = pGVar1->tierIconTempUnlock;
    pGStack_13 = pGVar1->tierIconNumber;
    pPStack_14 = pGVar1->endResultProgressBar;
    pGStack_15 = pGVar1->tempProgress;
    pGStack_16 = pGVar1->disabledTempProgress;
    pGStack_17 = pGVar1->freeTryTextBubble;
    uStack_18._0_4_ = pGVar1->hoverInputHandler;
    uStack_18._4_4_ = pGVar1->LockedTierIcon;
    pGVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)&stack0xffffff48,
                         (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    pPStack_19 = pGVar1->progressBar;
    pTStack_20 = pGVar1->progressText;
    pGStack_21 = pGVar1->progressDivider;
    pGStack_22 = pGVar1->progressBarTextBubble;
    pGStack_6 = pGVar1->avatarHead;
    pRStack_7 = pGVar1->avatarHeadImage;
    forward.x = (float)pGVar1->progressBarTextBubble;
    forward.y = (float)pGVar1->avatarHead;
    forward.z = (float)pGVar1->avatarHeadImage;
    pGStack_8 = pGVar1->avatarHeadUI;
    pPStack_9 = pGVar1->disabledProgressBar;
    pGStack_10 = pGVar1->disabledProgressDivider;
    pGStack_11 = pGVar1->disabledBarTextBubble;
    pGStack_12 = pGVar1->tierIconTempUnlock;
    pGStack_13 = pGVar1->tierIconNumber;
    pPStack_14 = pGVar1->endResultProgressBar;
    pGStack_15 = pGVar1->tempProgress;
    pGStack_16 = pGVar1->disabledTempProgress;
    pGStack_17 = pGVar1->freeTryTextBubble;
    uStack_18._0_4_ = pGVar1->hoverInputHandler;
    uStack_18._4_4_ = pGVar1->LockedTierIcon;
    pQVar23 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_LookRotation_1
                        (&QStack_24,forward,(MethodInfo *)0x0);
    position_00.y = (float)pTStack_3;
    position_00.x = (float)pPStack_2;
    position_00.z = (float)pGStack_4;
    OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
              (PoolEnums__Enum_NormalBulletSparks,position_00,*pQVar23,
               (Nullable_1_UnityEngine_Color_)ZEXT820(0),(MethodInfo *)0x0);
    this_00 = (this->fields).hitAudioSource;
    method_00 = this;
    pSStack_25 = (String *)(*(this->klass->vtable).get_HitSoundEffectName.methodPtr)();
    pGVar1 = mscorlib.dll::System::Collections::Generic::
              List`1[GameTierProgressBar+TierProgressData]::
              List_1_GameTierProgressBar_TierProgressData__get_Item
                        ((GameTierProgressBar_TierProgressData *)&stack0xffffff48,
                         (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                         MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    pPStack_19 = pGVar1->progressBar;
    pTStack_20 = pGVar1->progressText;
    pGStack_21 = pGVar1->progressDivider;
    pGStack_22 = pGVar1->progressBarTextBubble;
    pGStack_6 = pGVar1->avatarHead;
    pRStack_7 = pGVar1->avatarHeadImage;
    pGStack_8 = pGVar1->avatarHeadUI;
    pPStack_9 = pGVar1->disabledProgressBar;
    pGStack_10 = pGVar1->disabledProgressDivider;
    pGStack_11 = pGVar1->disabledBarTextBubble;
    pGStack_12 = pGVar1->tierIconTempUnlock;
    pGStack_13 = pGVar1->tierIconNumber;
    pPStack_14 = pGVar1->endResultProgressBar;
    pGStack_15 = pGVar1->tempProgress;
    pGStack_16 = pGVar1->disabledTempProgress;
    pGStack_17 = pGVar1->freeTryTextBubble;
    uStack_18._0_4_ = pGVar1->hoverInputHandler;
    uStack_18._4_4_ = pGVar1->LockedTierIcon;
    if (cRam_? == '\0') {
      func_?(&TypeInfo__UnityEngine__Object);
      cRam_? = '\x01';
    }
    if (this_00 != (AudioSource *)0x0) {
      x = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                    (this_00,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      bVar26 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                         ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
      if (bVar26 == 0) {
        this_01 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        if (this_01 == (AudioManager *)0x0) goto code_?;
        position.y = (float)pTStack_20;
        position.x = (float)pPStack_19;
        position.z = (float)pGStack_21;
        AudioManager::AudioManager_Play_2(this_01,pSStack_25,this_00,position,(MethodInfo *)0x0);
      }
      for (index = 0; index < (voxelHits->fields)._size; index = index + 1) {
        pGVar1 = mscorlib.dll::System::Collections::Generic::
                  List`1[GameTierProgressBar+TierProgressData]::
                  List_1_GameTierProgressBar_TierProgressData__get_Item
                            ((GameTierProgressBar_TierProgressData *)&stack0xffffff48,
                             (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,index,
                             MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                            );
        uVar27 = pGVar1->LockedTierIcon;
        uVar28 = pGVar1->progressText;
        uVar29 = pGVar1->progressDivider;
        uVar30 = pGVar1->progressBarTextBubble;
        uVar31 = pGVar1->avatarHead;
        uVar32 = pGVar1->avatarHeadImage;
        uVar33 = pGVar1->avatarHeadUI;
        uVar34 = pGVar1->disabledProgressBar;
        uVar35 = pGVar1->disabledProgressDivider;
        uVar36 = pGVar1->disabledBarTextBubble;
        uVar37 = pGVar1->tierIconTempUnlock;
        uVar38 = pGVar1->tierIconNumber;
        uVar39 = pGVar1->endResultProgressBar;
        uVar40 = pGVar1->tempProgress;
        uVar41 = pGVar1->disabledTempProgress;
        uVar42 = pGVar1->freeTryTextBubble;
        uVar43 = pGVar1->hoverInputHandler;
        voxelHit._60_4_ = uVar43;
        voxelHit.transform = (Transform *)uVar42;
        voxelHit.collider = (Collider *)uVar41;
        voxelHit.distance = (float)uVar40;
        voxelHit.cube = (Cube *)uVar39;
        voxelHit.woId = uVar38;
        voxelHit._36_4_ = uVar37;
        voxelHit.face = uVar36;
        voxelHit._28_4_ = uVar35;
        voxelHit.cubePos._0_4_ = uVar34;
        voxelHit.normal.z = (float)uVar33;
        voxelHit.normal.y = (float)uVar32;
        voxelHit.normal.x = (float)uVar31;
        voxelHit.point.z = (float)uVar30;
        voxelHit.point.y = (float)uVar29;
        voxelHit.point.x = (float)uVar28;
        voxelHit.interactionFlags._0_4_ = uVar27;
        voxelHit.interactionFlags._4_4_ = lineOfFire.m_Origin.x;
        auVar44 = lineOfFire._4_20_;
        lineOfFire_00.m_Direction.z = 0.0;
        auVar45 = auVar44._0_12_;
        lineOfFire_00.m_Origin.x = (float)auVar45._0_4_;
        lineOfFire_00.m_Origin.y = (float)auVar45._4_4_;
        lineOfFire_00.m_Origin.z = (float)auVar45._8_4_;
        lineOfFire_00.m_Direction.x = (float)auVar44._12_4_;
        lineOfFire_00.m_Direction.y = (float)auVar44._16_4_;
        PickupItemEditable_OnHit_1(this,voxelHit,lineOfFire_00,(MethodInfo *)method_00);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar46 = (code *)swi(3);
  (*pcVar46)();
  return;
}


/* Void OnHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnHit_1
               (PickupItemEditable *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__IBulletImpactVisualizer);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    unaff_ESI = (MVWorldObject *)
                MVWorldObjectClientManager::
                MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                          (pMVar1,voxelHit._36_4_,
                           int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                          );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      unaff_ESI = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                            (pMVar1,(int32_t)unaff_ESI,(MethodInfo *)0x0);
      iVar2 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
      pIVar3 = TypeInfo__IBulletImpactVisualizer;
      if (iVar2 == 0) {
        return;
      }
      pMVar4 = (this->fields)._._.owner;
      if ((((pMVar4 != (MVPickupOwner *)0x0) &&
           (pMVar5 = (pMVar4->fields)._.worldObjectParent, pMVar5 != (MVWorldObjectClient *)0x0)) &&
          (iVar6 = (pMVar5->fields)._.ownerActorNr,
          (this->fields)._Configuration_k__BackingField !=
          (PickupItemEditable_EditableItemConfiguration *)0x0)) &&
         (unaff_EDI = TypeInfo__IBulletImpactVisualizer, unaff_ESI != (MVWorldObject *)0x0)) {
        iVar2 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer);
        pIVar7 = TypeInfo__IBulletImpactVisualizer;
        unaff_EDI = pIVar3;
        if ((iVar2 != 0) &&
           (pMVar8 = unaff_ESI, iVar2 = func_?(unaff_ESI,TypeInfo__IBulletImpactVisualizer)
           , unaff_EDI = pIVar7, iVar2 != 0)) {
          func_?(0,TypeInfo__IBulletImpactVisualizer,iVar2,in_stack_9,
                          voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x,
                          voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,voxelHit._28_4_
                          ,voxelHit.face,voxelHit._36_4_,voxelHit.woId,voxelHit.cube,
                          voxelHit.distance,voxelHit.collider,voxelHit.transform,voxelHit._60_8_,
                          voxelHit.interactionFlags._4_4_,lineOfFire.m_Origin.x,
                          lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,lineOfFire.m_Direction._0_8_,
                          iVar6,pMVar8);
          return;
        }
        goto code_?;
      }
    }
  }
  func_?();
code_?:
  func_?(unaff_ESI,unaff_EDI);
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnHolstered
               (PickupItemEditable *this,MethodInfo *method)

{
  PickupItem::PickupItem_OnHolstered((PickupItem *)this,(MethodInfo *)0x0);
  (*(this->klass->vtable).InterruptFire.methodPtr)(this,(this->klass->vtable).InterruptFire.method);
  return;
}


/* Void OnLocalHit(List`1[VoxelHit], Ray) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnLocalHit
               (PickupItemEditable *this,List_1_VoxelHit_ *voxelHits,Ray lineOfFire,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (pWVar2 = (pMVar1->fields).worldNetwork, pWVar2 != (WorldNetwork *)0x0)) {
    this_00 = (RuntimeEventManager *)(pWVar2->fields)._.runtimeEventManagerNetwork;
    if (voxelHits != (List_1_VoxelHit_ *)0x0) {
      pGVar3 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          (&GStack_4,(List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      worldPosition.x = (float)pGVar3->progressBar;
      worldPosition.y = (float)pGVar3->progressText;
      worldPosition.z = (float)pGVar3->progressDivider;
      pGVar3 = mscorlib.dll::System::Collections::Generic::
                List`1[GameTierProgressBar+TierProgressData]::
                List_1_GameTierProgressBar_TierProgressData__get_Item
                          ((GameTierProgressBar_TierProgressData *)&stack0xffffff24,
                           (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,0,
                           MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_);
      GStack_4.progressBar = pGVar3->progressBar;
      GStack_4.progressText = pGVar3->progressText;
      GStack_4.progressDivider = pGVar3->progressDivider;
      GStack_4.progressBarTextBubble = pGVar3->progressBarTextBubble;
      GStack_4.avatarHead = pGVar3->avatarHead;
      GStack_4.avatarHeadImage = pGVar3->avatarHeadImage;
      GStack_4.avatarHeadUI = pGVar3->avatarHeadUI;
      GStack_4.disabledProgressBar = pGVar3->disabledProgressBar;
      GStack_4.disabledProgressDivider = pGVar3->disabledProgressDivider;
      GStack_4.disabledBarTextBubble = pGVar3->disabledBarTextBubble;
      GStack_4.tierIconTempUnlock = pGVar3->tierIconTempUnlock;
      GStack_4.tierIconNumber = pGVar3->tierIconNumber;
      GStack_4.endResultProgressBar = pGVar3->endResultProgressBar;
      GStack_4.tempProgress = pGVar3->tempProgress;
      GStack_4.disabledTempProgress = pGVar3->disabledTempProgress;
      GStack_4.freeTryTextBubble = pGVar3->freeTryTextBubble;
      GStack_4.hoverInputHandler = pGVar3->hoverInputHandler;
      GStack_4.LockedTierIcon = pGVar3->LockedTierIcon;
      this_01 = (ExplosionEvent *)
                func_?(TypeInfo__MV__WorldObject__RuntimeEvents__ExplosionEvent);
      if (this_01 != (ExplosionEvent *)0x0) {
        normal.y = (float)GStack_4.avatarHead;
        normal.x = (float)GStack_4.progressBarTextBubble;
        normal.z = (float)GStack_4.avatarHeadImage;
        MVWorldObject.dll::MV::WorldObject::RuntimeEvents::ExplosionEvent::ExplosionEvent__ctor_2
                  (this_01,RuntimeEventType__Enum_MeleeWeaponTerrainDestroy,worldPosition,normal,
                   (MethodInfo *)0x0);
        if (this_00 != (RuntimeEventManager *)0x0) {
          RuntimeEventManager::RuntimeEventManager_SendRuntimeEvent
                    (this_00,this_01,(MethodInfo *)0x0);
          for (index = 0; index < (voxelHits->fields)._size; index = index + 1) {
            pGVar3 = mscorlib.dll::System::Collections::Generic::
                      List`1[GameTierProgressBar+TierProgressData]::
                      List_1_GameTierProgressBar_TierProgressData__get_Item
                                ((GameTierProgressBar_TierProgressData *)&stack0xffffff24,
                                 (List_1_GameTierProgressBar_TierProgressData_ *)voxelHits,index,
                                 MethodInfo__System__Collections__Generic__List<VoxelHit>__get_Item_int_
                                );
            uVar5 = pGVar3->LockedTierIcon;
            uVar6 = pGVar3->progressText;
            uVar7 = pGVar3->progressDivider;
            uVar8 = pGVar3->progressBarTextBubble;
            uVar9 = pGVar3->avatarHead;
            uVar10 = pGVar3->avatarHeadImage;
            uVar11 = pGVar3->avatarHeadUI;
            uVar12 = pGVar3->disabledProgressBar;
            uVar13 = pGVar3->disabledProgressDivider;
            uVar14 = pGVar3->disabledBarTextBubble;
            uVar15 = pGVar3->tierIconTempUnlock;
            uVar16 = pGVar3->tierIconNumber;
            uVar17 = pGVar3->endResultProgressBar;
            uVar18 = pGVar3->tempProgress;
            uVar19 = pGVar3->disabledTempProgress;
            uVar20 = pGVar3->freeTryTextBubble;
            uVar21 = pGVar3->hoverInputHandler;
            voxelHit._60_4_ = uVar21;
            voxelHit.transform = (Transform *)uVar20;
            voxelHit.collider = (Collider *)uVar19;
            voxelHit.distance = (float)uVar18;
            voxelHit.cube = (Cube *)uVar17;
            voxelHit.woId = uVar16;
            voxelHit._36_4_ = uVar15;
            voxelHit.face = uVar14;
            voxelHit._28_4_ = uVar13;
            voxelHit.cubePos._0_4_ = uVar12;
            voxelHit.normal.z = (float)uVar11;
            voxelHit.normal.y = (float)uVar10;
            voxelHit.normal.x = (float)uVar9;
            voxelHit.point.z = (float)uVar8;
            voxelHit.point.y = (float)uVar7;
            voxelHit.point.x = (float)uVar6;
            voxelHit.interactionFlags._0_4_ = uVar5;
            voxelHit.interactionFlags._4_4_ = lineOfFire.m_Origin.x;
            auVar22 = lineOfFire._4_20_;
            lineOfFire_00.m_Direction.z = 0.0;
            auVar23 = auVar22._0_12_;
            lineOfFire_00.m_Origin.x = (float)auVar23._0_4_;
            lineOfFire_00.m_Origin.y = (float)auVar23._4_4_;
            lineOfFire_00.m_Origin.z = (float)auVar23._8_4_;
            lineOfFire_00.m_Direction.x = (float)auVar22._12_4_;
            lineOfFire_00.m_Direction.y = (float)auVar22._16_4_;
            PickupItemEditable_OnLocalHit_1
                      (this,voxelHit,lineOfFire_00,(MethodInfo *)in_stack_24);
          }
          return;
        }
      }
    }
  }
  func_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void OnLocalHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnLocalHit_1
               (PickupItemEditable *this,VoxelHit voxelHit,Ray lineOfFire,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__);
    func_?(&
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      this_00 = (MVWorldObjectClient *)
                MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                          (pMVar1,id,(MethodInfo *)0x0);
      if (this_00 != (MVWorldObjectClient *)0x0) {
        x = MVWorldObjectClient::MVWorldObjectClient_get_InteractionDataHandlerBase
                      (this_00,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                          ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
        if (bVar2 == 0) {
          this_01 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if ((this_01 != (MVNetworkGame *)0x0) &&
             (this_02 = MVNetworkGame::MVNetworkGame_get_LocalPlayer(this_01,(MethodInfo *)0x0),
             this_02 != (MVLocalPlayer *)0x0)) {
            voxelHit.point.y = 0.0;
            voxelHit.point.x = (float)this_00;
            bVar2 = MVPlayer::MVPlayer_IsOnSameTeam_1((MVPlayer *)this_02,this_00,(MethodInfo *)0x0)
            ;
            if (bVar2 != 0) {
              return;
            }
            if (_UNK_? != (MVPickupOwner *)0x0) {
              voxelHit.normal.y = 0.0;
              voxelHit.point.z = (float)&voxelHit.transform;
              voxelHit.point.y = (float)&UNK_?;
              voxelHit.normal.x = (float)_UNK_?;
              pVVar3 = MVPickupOwner::MVPickupOwner_get_LookDirection
                                 ((Vector3 *)voxelHit.point.z,_UNK_?,(MethodInfo *)0x0);
              fVar4 = pVVar3->x;
              uVar5 = pVVar3->y;
              fVar6 = pVVar3->z;
              fVar7 = _UNK_?;
              if (((float)uVar5 < _UNK_?) ||
                 (fVar7 = _UNK_?, fVar8 = (float)uVar5, _UNK_? < (float)uVar5)) {
                fVar8 = fVar7;
              }
              voxelHit.cubePos._0_4_ = &stack0xfffffff0;
              voxelHit.cubePos.z = 0;
              voxelHit._30_2_ = 0;
              voxelHit.normal.z = (float)&UNK_?;
              UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize_1
                        ((Vector3 *)voxelHit.cubePos._0_4_,(MethodInfo *)0x0);
              if (_UNK_? != 0) {
                fVar7 = *(float *)(_UNK_? + 0x18);
                voxelHit.interactionFlags._0_4_ = _UNK_?;
                if (_UNK_? != 0) {
                  voxelHit.normal.z = *(float *)(_UNK_? + 0x14);
                  voxelHit.isCubeHit = 0;
                  voxelHit._37_3_ = 0;
                  voxelHit.normal.y = (float)&stack0xffffffdc;
                  voxelHit.normal.x = (float)&UNK_?;
                  impulse.y = fVar7 * fVar8;
                  impulse.x = fVar4 * fVar7;
                  impulse.z = fVar6 * fVar7;
                  voxelHit.cubePos._0_4_ = fVar4 * fVar7;
                  voxelHit._28_4_ = fVar7 * fVar8;
                  voxelHit.face = (int32_t)(fVar6 * fVar7);
                  pIVar9 = MeleeWeaponHitPackage::MeleeWeaponHitPackage_Create
                                     ((InteractionData *)voxelHit.normal.y,voxelHit.normal.z,impulse
                                      ,(MethodInfo *)0x0);
                  if (x != (InteractionDataHandlerBase *)0x0) {
                    voxelHit._36_4_ = pIVar9->damage;
                    voxelHit.woId = (int32_t)(pIVar9->impulse).x;
                    voxelHit.cube = (Cube *)(pIVar9->impulse).y;
                    voxelHit.distance = (pIVar9->impulse).z;
                    voxelHit.collider = *(Collider **)&pIVar9->interactionType;
                    voxelHit._60_4_ = (x->klass->vtable).__unknown_1.method;
                    voxelHit.transform = (Transform *)0x0;
                    voxelHit.face = (int32_t)(MVPickupOwner *)voxelHit.interactionFlags;
                    voxelHit.cubePos._0_4_ = &UNK_?;
                    voxelHit._28_4_ = x;
                    (*(x->klass->vtable).__unknown_1.methodPtr)();
                    if (_UNK_? != (MVPickupOwner *)0x0) {
                      voxelHit.woId =
                           (int32_t)
                           MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                      ;
                      voxelHit.face = (int32_t)&UNK_?;
                      voxelHit._36_4_ = _UNK_?;
                      this_03 = (MVRigidBody *)
                                UnityEngine.CoreModule.dll::UnityEngine::Component::
                                Component_GetComponent_1
                                          ((Component *)_UNK_?,
                                           MVRigidBody_MethodInfo__UnityEngine__Component__GetComponent<MVRigidBody>__
                                          );
                      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
                        voxelHit.distance = (float)TypeInfo__UnityEngine__Object;
                        voxelHit.cube = (Cube *)&UNK_?;
                        func_?();
                      }
                      voxelHit.distance = 0.0;
                      voxelHit.cube = (Cube *)0x0;
                      voxelHit._36_4_ = &UNK_?;
                      voxelHit.woId = (int32_t)this_03;
                      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::
                              Object_1_op_Inequality
                                        ((Object_1 *)this_03,(Object_1 *)0x0,(MethodInfo *)0x0);
                      if (bVar2 == 0) {
                        return;
                      }
                      if (_UNK_? != 0) {
                        fVar7 = *(float *)(_UNK_? + 0x1c);
                        pCVar10 = (Cube *)((float)((uint)fVar4 ^
                                                 __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                                 ) * fVar7);
                        fVar4 = (float)((uint)fVar8 ^
                                       __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                       ) * fVar7;
                        voxelHit.interactionFlags._0_4_ =
                             (MVPickupOwner *)
                             ((float)((uint)fVar6 ^
                                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field
                                     ) * fVar7);
                        voxelHit.transform = (Transform *)pCVar10;
                        if (this_03 != (MVRigidBody *)0x0) {
                          voxelHit._60_4_ = 0;
                          voxelHit.transform = (Transform *)0x0;
                          voxelHit._36_4_ = &UNK_?;
                          impulse_00.y = fVar4;
                          impulse_00.x = (float)pCVar10;
                          impulse_00.z = (float)(MVPickupOwner *)voxelHit.interactionFlags;
                          voxelHit.woId = (int32_t)this_03;
                          voxelHit.cube = pCVar10;
                          voxelHit.distance = fVar4;
                          voxelHit.collider = (Collider *)(MVPickupOwner *)voxelHit.interactionFlags
                          ;
                          MVRigidBody::MVRigidBody_AddImpulse_1
                                    (this_03,impulse_00,0,(MethodInfo *)0x0);
                          return;
                        }
                      }
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
  voxelHit._60_4_ = &UNK_?;
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void OnStateChanged(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnStateChanged
               (PickupItemEditable *this,Dictionary_2_System_Object_System_Object_ *newState,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_itemData);
    cRam_? = '\x01';
  }
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  hashtable = (Dictionary_2_System_Object_System_Object_ *)
              Extensions::Extensions_GetValueOrDefault_3
                        (newState,StringLiteral_itemData,(Object *)0x0,
                         System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                        );
  if (hashtable != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    if (cRam_? == '\0') {
      func_?();
      func_?();
      func_?(&StringLiteral_CubeModelId);
      cRam_? = '\x01';
    }
    pPVar1 = (unaff_EDI->fields)._Configuration_k__BackingField;
    if (pPVar1 == (PickupItemEditable_EditableItemConfiguration *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    iVar3 = (pPVar1->fields).cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    iVar4 = Extensions::Extensions_GetValueOrDefault_1
                      (hashtable,StringLiteral_CubeModelId,-1,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    bVar5 = (*(unaff_EDI->klass->vtable).__unknown_1.methodPtr)();
    if ((iVar3 == iVar4 & bVar5) == 0) {
      pMStack6 = (unaff_EDI->klass->vtable).__unknown_2.method;
      (*(unaff_EDI->klass->vtable).__unknown_2.methodPtr)();
      PickupItemEditable_SetValuesBasedOnConfiguration(unaff_EDI,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void PlayAnimation() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_PlayAnimation
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pAVar1 = (this->fields).animator;
  if (pAVar1 != (Animator *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)pAVar1,1,(MethodInfo *)0x0);
    pAVar1 = (this->fields).animator;
    stateName = (String *)
                (*(this->klass->vtable).get_AttackAnimationName.methodPtr)
                          (this,(this->klass->vtable).get_AttackAnimationName.method);
    if (pAVar1 != (Animator *)0x0) {
      UnityEngine.AnimationModule.dll::UnityEngine::Animator::Animator_Play
                (pAVar1,stateName,0,0.0,(MethodInfo *)0x0);
      if ((this->fields).animatorRoutine != (IEnumerator *)0x0) {
        Coroutines::Coroutines_Stop((this->fields).animatorRoutine,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      value = (Object *)func_?();
      if (value != (Object *)0x0) {
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  (value,ExceptionArgument__Enum_obj,unaff_retaddr);
        value[1].klass = (Object__Class *)0x0;
        value[2].klass = (Object__Class *)this;
        func_?(value + 2,this);
        (this->fields).animatorRoutine = (IEnumerator *)value;
        func_?(&(this->fields).animatorRoutine,value);
        Coroutines::Coroutines_Start((this->fields).animatorRoutine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void PlayAudio(AudioSource, String, Vector3, Boolean) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_PlayAudio
               (PickupItemEditable *this,AudioSource *audioSource,String *soundEffectName,
               Vector3 position,bool useAudioManager,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if (audioSource != (AudioSource *)0x0) {
    x = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                  (audioSource,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (useAudioManager != 0) {
        this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
        if (this_00 != (AudioManager *)0x0) {
          AudioManager::AudioManager_Play_2
                    (this_00,soundEffectName,audioSource,position,(MethodInfo *)0x0);
          return;
        }
        goto code_?;
      }
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play
                (audioSource,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetAnimation() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_SetAnimation
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).animator;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    return;
  }
  pAVar1 = (this->fields).animator;
  if (pAVar1 != (Animator *)0x0) {
    pRVar3 = UnityEngine.AnimationModule.dll::UnityEngine::Animator::
             Animator_get_runtimeAnimatorController(pAVar1,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pRVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar2 != 0) {
      return;
    }
    pAVar1 = (this->fields).animator;
    if (((pAVar1 != (Animator *)0x0) &&
        (pRVar3 = UnityEngine.AnimationModule.dll::UnityEngine::Animator::
                  Animator_get_runtimeAnimatorController(pAVar1,(MethodInfo *)0x0),
        pRVar3 != (RuntimeAnimatorController *)0x0)) &&
       (pAVar4 = UnityEngine.AnimationModule.dll::UnityEngine::RuntimeAnimatorController::
                 RuntimeAnimatorController_get_animationClips(pRVar3,(MethodInfo *)0x0),
       pAVar4 != (AnimationClip__Array *)0x0)) {
      if (pAVar4->max_length == 0) {
        return;
      }
      pAVar1 = (this->fields).animator;
      if (((pAVar1 != (Animator *)0x0) &&
          (pRVar3 = UnityEngine.AnimationModule.dll::UnityEngine::Animator::
                    Animator_get_runtimeAnimatorController(pAVar1,(MethodInfo *)0x0),
          pRVar3 != (RuntimeAnimatorController *)0x0)) &&
         (pAVar4 = UnityEngine.AnimationModule.dll::UnityEngine::RuntimeAnimatorController::
                   RuntimeAnimatorController_get_animationClips(pRVar3,(MethodInfo *)0x0),
         pAVar4 != (AnimationClip__Array *)0x0)) {
        if (pAVar4->max_length == 0) goto code_?;
        if (pAVar4->vector[0] != (AnimationClip *)0x0) {
          fVar5 = UnityEngine.AnimationModule.dll::UnityEngine::AnimationClip::
                  AnimationClip_get_length(pAVar4->vector[0],(MethodInfo *)0x0);
          pPVar6 = (this->fields)._Configuration_k__BackingField;
          if ((pPVar6 != (PickupItemEditable_EditableItemConfiguration *)0x0) &&
             (pAVar1 = (this->fields).animator, pAVar1 != (Animator *)0x0)) {
            UnityEngine.AnimationModule.dll::UnityEngine::Animator::Animator_set_speed
                      (pAVar1,fVar5 / (pPVar6->fields).fireAnimationTime,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void SetValuesBasedOnConfiguration() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_SetValuesBasedOnConfiguration
               (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    cRam_? = '\x01';
  }
  PickupItemEditable_OnCubeModelStateChanged(this,(MethodInfo *)0x0);
  (*(this->klass->vtable).SetAnimation.methodPtr)(this,(this->klass->vtable).SetAnimation.method);
  pPVar1 = (this->fields)._Configuration_k__BackingField;
  if ((pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) &&
     (pAVar2 = (this->fields).fireAudioClips, pAVar2 != (AudioClip__Array *)0x0)) {
    if ((pPVar1->fields).fireSoundEffect < (int)pAVar2->max_length) {
      pAVar2 = (this->fields).fireAudioClips;
      pAVar3 = (this->fields).fireAudioSource;
      uVar4 = (((this->fields)._Configuration_k__BackingField)->fields).fireSoundEffect;
      if (pAVar2->max_length <= uVar4) goto code_?;
      if (pAVar3 == (AudioSource *)0x0) goto code_?;
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                (pAVar3,pAVar2->vector[uVar4],(MethodInfo *)0x0);
    }
    pPVar1 = (this->fields)._Configuration_k__BackingField;
    if ((pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) &&
       (pAVar2 = (this->fields).hitAudioClips, pAVar2 != (AudioClip__Array *)0x0)) {
      if ((pPVar1->fields).hitSoundEffect < (int)pAVar2->max_length) {
        pAVar2 = (this->fields).hitAudioClips;
        pAVar3 = (this->fields).hitAudioSource;
        uVar4 = (((this->fields)._Configuration_k__BackingField)->fields).hitSoundEffect;
        if (pAVar2->max_length <= uVar4) goto code_?;
        if (pAVar3 == (AudioSource *)0x0) goto code_?;
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                  (pAVar3,pAVar2->vector[uVar4],(MethodInfo *)0x0);
      }
      pPVar1 = (this->fields)._Configuration_k__BackingField;
      if (pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
        fVar5 = (pPVar1->fields).attackCooldown;
        fVar6 = (pPVar1->fields).fireAnimationTime;
        if (fVar5 <= fVar6) {
          fVar5 = fVar6;
        }
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                  ::ObscuredFloat_op_Implicit
                            ((ObscuredFloat *)&stack0xffffffe8,fVar5,(MethodInfo *)0x0);
        AVar8 = pOVar7->hiddenValue;
        pBVar9 = pOVar7->hiddenValueOld;
        fVar5 = pOVar7->fakeValue;
        bVar10 = pOVar7->inited;
        uVar11 = *(undefined3 *)&pOVar7->field_0x11;
        (this->fields)._.fireInterval.currentCryptoKey = pOVar7->currentCryptoKey;
        (this->fields)._.fireInterval.hiddenValue = AVar8;
        (this->fields)._.fireInterval.hiddenValueOld = pBVar9;
        (this->fields)._.fireInterval.fakeValue = fVar5;
        (this->fields)._.fireInterval.inited = bVar10;
        *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar11;
        func_?();
        return;
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* String get_AttackAnimationName() */

String * Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_get_AttackAnimationName
                   (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  return ::StringLiteral__;
}


/* String get_FireSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_get_FireSoundEffectName
                   (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  return ::StringLiteral__;
}


/* String get_HitSoundEffectName() */

String * Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_get_HitSoundEffectName
                   (PickupItemEditable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&::StringLiteral__);
    cRam_? = '\x01';
  }
  return ::StringLiteral__;
}


/* Void set_CubeModelPid(Int32) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_set_CubeModelPid
               (PickupItemEditable *this,int32_t value,MethodInfo *method)

{
  (this->fields)._CubeModelPid_k__BackingField = value;
  return;
}

