
/* Void Awake() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_Awake
               (PickupItemEditable *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).Initialize.method)
            (this,(this->klass->vtable).SetValuesBasedOnConfiguration.methodPtr);
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
    func_?(&TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[1].klass = (Object__Class *)0x0;
  value[2].klass = (Object__Class *)this;
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
    ppTVar3 = &(this->fields)._._.firstPersonTransform;
    pTVar4 = *ppTVar3;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                      ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      this_00 = (GameObject *)func_?();
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject__ctor
                (this_00,StringLiteral_FirstPersonTransform,(MethodInfo *)0x0);
      if (this_00 != (GameObject *)0x0) {
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                           (this_00,(MethodInfo *)0x0);
        p = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
        if (pTVar4 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (pTVar4,p,(MethodInfo *)0x0);
          pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                             (this_00,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          if (pTVar4 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                      (pTVar4,TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,
                       (MethodInfo *)0x0);
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (this_00,(MethodInfo *)0x0);
            *ppTVar3 = pTVar4;
            func_?();
            goto code_?;
          }
        }
      }
      func_?();
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
code_?:
  (*(code *)(this->klass->vtable).__unknown_4.method)
            (this,(this->klass->vtable).Initialize.methodPtr);
  pPVar7 = (PickupItemEditable_EditableItemConfiguration *)
           (*(code *)(this->klass->vtable).__unknown_3.method)
                     (this,(this->klass->vtable).__unknown_4.methodPtr);
  ppPVar8 = &(this->fields)._Configuration_k__BackingField;
  *ppPVar8 = pPVar7;
  func_?(ppPVar8,pPVar7);
  (*(code *)(this->klass->vtable).SetValuesBasedOnConfiguration.method)
            (this,(this->klass->vtable).OnPickupNewEditableItem.methodPtr);
  return;
}


/* Void InterruptFire() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_InterruptFire
               (PickupItemEditable *this,MethodInfo *method)

{
  this_00 = (this->fields).fireAudioPlayer;
  (this->fields)._.isFiring = 0;
  if (this_00 != (CustomItemAudioPlayer *)0x0) {
    CustomItemAudioPlayer::CustomItemAudioPlayer_Stop(this_00,(MethodInfo *)0x0);
    coroutine = (this->fields).animatorRoutine;
    ppIVar1 = &(this->fields).animatorRoutine;
    if (coroutine != (IEnumerator *)0x0) {
      Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
      *ppIVar1 = (IEnumerator *)0x0;
      func_?(ppIVar1,0);
      PickupItemEditable_DisableAnimation(this,(MethodInfo *)0x0);
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
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
  if (pPVar1 == (PickupItemEditable_EditableItemConfiguration *)0x0) {
    func_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  IVar4 = (pPVar1->fields).cubeModelId;
  if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__Extensions);
  }
  IVar5 = Extensions::Extensions_GetValueOrDefault_2
                    (itemData,StringLiteral_CubeModelId,0xffffffff,
                     int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                    );
  if (IVar4 != IVar5) {
    return 0;
  }
  bVar3 = (*(code *)(this->klass->vtable).__unknown_1.method)(this);
  return bVar3;
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
    pMVar2 = MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObject
                       (this_00,(pPVar1->fields).cubeModelId,(MethodInfo *)0x0);
    if (pMVar2 == (MVWorldObject *)0x0) {
      return;
    }
    pGVar3 = (this->fields).cubeModelObject;
    ppGVar4 = &(this->fields).cubeModelObject;
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    cmb = (MVCubeModelInstance *)0x0;
    bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                      ((Object_1 *)pGVar3,(Object_1 *)0x0,(MethodInfo *)0x0);
    if (bVar5 != 0) {
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)0x0,(MethodInfo *)0x0);
      *ppGVar4 = (GameObject *)0x0;
      func_?();
    }
    bVar6 = (TypeInfo__MVCubeModelInstance->_1).naturalAligment;
    if (((pMVar2->klass->_1).naturalAligment < bVar6) ||
       ((MVCubeModelInstance__Class *)(pMVar2->klass->_1).typeHierarchy[bVar6 - 1] !=
        TypeInfo__MVCubeModelInstance)) goto code_?;
    iVar7 = MVCubeModelBase::MVCubeModelBase_get_Pid((MVCubeModelBase *)cmb,(MethodInfo *)0x0);
    (this->fields)._CubeModelPid_k__BackingField = iVar7;
    pGVar3 = PickupItem::PickupItem_CloneCubeModelInstance(cmb,1,(MethodInfo *)0x0);
    *ppGVar4 = pGVar3;
    func_?();
    if ((*ppGVar4 != (GameObject *)0x0) &&
       (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                            (*ppGVar4,(MethodInfo *)0x0), this_01 != (Transform *)0x0)) {
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
           (pAVar5 = pMVar2[1].fields.OnOutputLinkChanged,
           pAVar5 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0))
        goto code_?;
        func_?(0,TypeInfo__IBulletImpactVisualizer,iVar3,(pAVar5->fields)._._.method,
                        voxelHit.point.x,voxelHit.point.y,voxelHit.point.z,voxelHit.normal.x,
                        voxelHit.normal.y,voxelHit.normal.z,voxelHit.cubePos._0_4_,voxelHit._28_4_,
                        voxelHit.face,voxelHit._36_4_,voxelHit.woId,voxelHit.cube,voxelHit.distance,
                        voxelHit.collider,voxelHit.transform,voxelHit._60_8_,
                        voxelHit.interactionFlags._4_4_,lineOfFire.m_Origin.x,lineOfFire.m_Origin.y,
                        lineOfFire.m_Origin.z,lineOfFire.m_Direction.x);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnHolstered() */

void Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_OnHolstered
               (PickupItemEditable *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).TriggerEnd.method)
            (this,(this->klass->vtable).OnStateChanged.methodPtr);
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
    if (unaff_ESI[0x35] == 0) {
      func_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    IVar2 = *(Int32Enum__Enum *)(unaff_ESI[0x35] + 0xc);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    IVar3 = Extensions::Extensions_GetValueOrDefault_2
                      (hashtable,StringLiteral_CubeModelId,0xffffffff,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    if (IVar2 == IVar3) {
      uStack4 = *(undefined4 *)(*unaff_ESI + 0x1ec);
      cVar5 = (**(code **)(*unaff_ESI + 0x1e8))();
      if (cVar5 != '\0') {
        return;
      }
    }
    uStack4 = *(undefined4 *)(*unaff_ESI + 0x234);
    (**(code **)(*unaff_ESI + 0x230))();
    (**(code **)(*unaff_ESI + 0x1f0))();
    (**(code **)(*unaff_ESI + 0x210))();
    (**(code **)(*unaff_ESI + 0x218))();
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
      coroutine = (this->fields).animatorRoutine;
      ppIVar3 = &(this->fields).animatorRoutine;
      if (coroutine != (IEnumerator *)0x0) {
        Coroutines::Coroutines_Stop(coroutine,(MethodInfo *)0x0);
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__PickupItemEditable___DisableAnimatorCoroutine_d__39;
      value = (Object *)func_?();
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?();
      *ppIVar3 = (IEnumerator *)value;
      func_?();
      Coroutines::Coroutines_Start(*ppIVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
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
  if (pPVar1 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
    fVar2 = (pPVar1->fields).attackCooldown;
    fVar3 = (pPVar1->fields).fireAnimationTime;
    if (fVar2 <= fVar3) {
      fVar2 = fVar3;
    }
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit((ObscuredFloat *)&stack0xffffffe8,fVar2,(MethodInfo *)0x0);
    AVar5 = pOVar4->hiddenValue;
    pBVar6 = pOVar4->hiddenValueOld;
    fVar2 = pOVar4->fakeValue;
    bVar7 = pOVar4->inited;
    uVar8 = *(undefined3 *)&pOVar4->field_0x11;
    (this->fields)._.fireInterval.currentCryptoKey = pOVar4->currentCryptoKey;
    (this->fields)._.fireInterval.hiddenValue = AVar5;
    (this->fields)._.fireInterval.hiddenValueOld = pBVar6;
    (this->fields)._.fireInterval.fakeValue = fVar2;
    (this->fields)._.fireInterval.inited = bVar7;
    *(undefined3 *)&(this->fields)._.fireInterval.field_0x11 = uVar8;
    func_?(&(this->fields)._.fireInterval.hiddenValueOld);
    return;
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
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


/* String get_Name() */

String * Assembly-CSharp.dll::PickupItemEditable::PickupItemEditable_get_Name
                   (PickupItemEditable *this,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  pPVar2 = (this->fields)._Configuration_k__BackingField;
  if (pPVar2 != (PickupItemEditable_EditableItemConfiguration *)0x0) {
    return (pPVar2->fields).name;
  }
  uVar3 = func_?(auStack_4);
  func_?(uVar3);
  pcVar5 = (code *)swi(3);
  pSVar6 = (String *)(*pcVar5)();
  return pSVar6;
}

