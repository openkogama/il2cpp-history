
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
    func_?(&TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__40);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__40;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
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
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
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
           (*(code *)(this->klass->vtable).__unknown_3.method)
                     (this,(this->klass->vtable).Initialize.methodPtr);
  (this->fields)._Configuration_k__BackingField = pPVar6;
  func_?(&(this->fields)._Configuration_k__BackingField,pPVar6);
  (*(code *)(this->klass->vtable).SetValuesBasedOnConfiguration.method)
            (this,(this->klass->vtable).SetAnimation.methodPtr);
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
    IVar2 = (pPVar1->fields).cubeModelId;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (itemData,StringLiteral_CubeModelId,0xffffffff,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    bVar4 = (*(code *)(this->klass->vtable).__unknown_1.method)
                      (this,itemData,(this->klass->vtable).__unknown_2.methodPtr);
    return bVar4 & IVar2 == IVar3;
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
    if (((cmb->klass->_1).naturalAligment < (TypeInfo__MVCubeModelInstance->_1).naturalAligment) ||
       ((MVCubeModelInstance__Class *)
        (cmb->klass->_1).typeHierarchy[(TypeInfo__MVCubeModelInstance->_1).naturalAligment - 1] !=
        TypeInfo__MVCubeModelInstance)) goto code_?;
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
  (*(code *)(this->klass->vtable).InterruptFire.method)(this,this->klass[1]._0.image);
  return;
}


/* Void OnHit(VoxelHit, Ray) */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnHit
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
    id = MVWorldObjectClientManager::
         MVWorldObjectClientManager_GetWoIDHighestInHierarchyWithComponent
                   (pMVar1,voxelHit._36_4_,
                    int_MethodInfo__MVWorldObjectClientManager__GetWoIDHighestInHierarchyWithComponent<InteractionDataHandlerBase>_int_
                   );
    pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
    if (pMVar1 != (MVWorldObjectClientManager *)0x0) {
      pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                         (pMVar1,id,(MethodInfo *)0x0);
      iVar3 = func_?();
      if (iVar3 != 0) {
        iVar4 = (pMVar2->fields).previewOwnerProfileId;
        if (((iVar4 == 0) || (*(int *)(iVar4 + 0x14) == 0)) ||
           (pMVar2[2].monitor == (MonitorData *)0x0)) goto code_?;
        func_?(0,TypeInfo__IBulletImpactVisualizer,iVar3,
                        *(undefined4 *)(pMVar2[2].monitor + 0x14),voxelHit.point.x,voxelHit.point.y,
                        voxelHit.point.z,voxelHit.normal.x,voxelHit.normal.y,voxelHit.normal.z,
                        voxelHit.cubePos._0_4_,voxelHit._28_4_,voxelHit.face,voxelHit._36_4_,
                        voxelHit.woId,voxelHit.cube,voxelHit.distance,voxelHit.collider,
                        voxelHit.transform,voxelHit._60_8_,voxelHit.interactionFlags._4_4_,
                        lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,lineOfFire.m_Origin.z,
                        lineOfFire.m_Direction.x);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnHolstered
               (PickupItemEditable *this,MethodInfo *method)

{
  mscorlib.dll::System::IO::Stream::Stream_Dispose((Stream *)this,(MethodInfo *)0x0);
  (*(code *)(this->klass->vtable).InterruptFire.method)(this,this->klass[1]._0.image);
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
  itemData = (Dictionary_2_System_Object_System_Object_ *)
             Extensions::Extensions_GetValueOrDefault_3
                       (newState,StringLiteral_itemData,(Object *)0x0,
                        System__Collections__Generic__Dictionary<System::Object,_System::Object>_MethodInfo__Extensions__GetValueOrDefault<System::Collections::Generic::Dictionary<System::Object,_System::Object>_>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__System__Collections__Generic__Dictionary<System::Object,_System::Object>_
                       );
  if ((itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
     (bVar1 = PickupItemEditable_IsSamePickupItem(unaff_ESI,itemData,(MethodInfo *)0x0), bVar1 == 0)
     ) {
    (unaff_ESI->fields)._.isFiring = 0;
    (*(code *)(unaff_ESI->klass->vtable).__unknown_2.method)();
    (*(code *)(unaff_ESI->klass->vtable).SetValuesBasedOnConfiguration.method)();
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
                (*(code *)(this->klass->vtable).get_AttackAnimationName.method)
                          (this,(this->klass->vtable).__unknown_1.methodPtr);
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
      method_00 = TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__40;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?();
      (this->fields).animatorRoutine = (IEnumerator *)value;
      func_?();
      Coroutines::Coroutines_Start((this->fields).animatorRoutine,(MethodInfo *)0x0);
      return;
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
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)audioSource,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    if (audioSource == (AudioSource *)0x0) {
code_?:
      func_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    x = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_clip
                  (audioSource,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      if (useAudioManager == 0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_Play_1
                  (audioSource,(MethodInfo *)0x0);
        return;
      }
      this_00 = MVGameControllerBase::MVGameControllerBase_get_AudioManager((MethodInfo *)0x0);
      if (this_00 == (AudioManager *)0x0) goto code_?;
      auVar3._8_4_ = 0;
      auVar3._0_8_ = position._4_8_;
      AudioManager::AudioManager_Play_2
                (this_00,(String *)&UNK_?,audioSource,(Vector3)(auVar3 << 0x20),
                 (MethodInfo *)0x0);
    }
  }
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
  (*(code *)(this->klass->vtable).SetAnimation.method)(this,(this->klass->vtable).OnHit.methodPtr);
  pPVar1 = (this->fields)._Configuration_k__BackingField;
  if ((pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) &&
     (pAVar2 = (this->fields).fireAudioClips, pAVar2 != (AudioClip__Array *)0x0)) {
    uVar3 = (pPVar1->fields).fireSoundEffect;
    this_00 = (this->fields).fireAudioSource;
    if ((int)uVar3 < 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = pAVar2->max_length - 1;
      if ((int)uVar3 <= (int)uVar4) {
        uVar4 = uVar3;
      }
    }
    if (pAVar2->max_length <= uVar4) goto code_?;
    if (this_00 != (AudioSource *)0x0) {
      UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_clip
                (this_00,pAVar2->vector[uVar4],(MethodInfo *)0x0);
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

