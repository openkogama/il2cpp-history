
/* Void Awake() */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_Awake
               (NinjaRunModifier *this,MethodInfo *method)

{
  this_00 = (this->fields).soundEffect;
  if (this_00 != (AudioSource *)0x0) {
    fVar1 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_volume
                      (this_00,(MethodInfo *)0x0);
    (this->fields).initialVolume = fVar1;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* IEnumerator DoFadeAndDestroy() */

IEnumerator *
Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_DoFadeAndDestroy
          (NinjaRunModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__NinjaRunModifier___DoFadeAndDestroy_c__Iterator0;
  this_00 = (ScaleAnimationBase *)func_?();
  ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,(MethodInfo *)method_00);
  if (this_00 != (ScaleAnimationBase *)0x0) {
    (this_00->fields)._._._._.m_CachedPtr = this;
    return (IEnumerator *)this_00;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pIVar2 = (IEnumerator *)(*pcVar1)();
  return pIVar2;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnActivated
               (NinjaRunModifier *this,Avatar_1 *target,MethodInfo *method)

{
  (this->fields)._.owner = target;
  if (target != (Avatar_1 *)0x0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                        ((Component_1 *)target,(MethodInfo *)0x0);
    (this->fields).ownerTransform = pTVar1;
    pAVar2 = (this->fields)._.owner;
    if ((pAVar2 != (Avatar_1 *)0x0) &&
       (this_00 = (PrefabPool *)(pAVar2->fields).mvAvatar, this_00 != (PrefabPool *)0x0)) {
      this_01 = PrefabPool::PrefabPool_get_MVPointLightPrefab(this_00,(MethodInfo *)0x0);
      if (this_01 != (MVPointLightObject *)0x0) {
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                            ((Vector3 *)&stack0xffffffe4,(Transform *)this_01,(MethodInfo *)0x0);
        pTVar4 = (this->fields).trailRenderer;
        fVar5 = pVVar3->y;
        fVar6 = pVVar3->z;
        (this->fields).oldScale.x = pVVar3->x;
        (this->fields).oldScale.y = fVar5;
        fVar5 = (this->fields).startWidth;
        (this->fields).oldScale.z = fVar6;
        pTVar1 = (this->fields).ownerTransform;
        if (pTVar1 != (Transform *)0x0) {
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                              ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
          uVar7 = pVVar3->x;
          if (pTVar4 != (TrailRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_startWidth
                      (pTVar4,(float)uVar7 * fVar5,(MethodInfo *)0x0);
            fVar5 = (this->fields).endWidth;
            pTVar1 = (this->fields).ownerTransform;
            pTVar4 = (this->fields).trailRenderer;
            if (pTVar1 != (Transform *)0x0) {
              pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                                  ((Vector3 *)&stack0xffffffe4,pTVar1,(MethodInfo *)0x0);
              uVar8 = pVVar3->x;
              if (pTVar4 != (TrailRenderer *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_endWidth
                          (pTVar4,(float)uVar8 * fVar5,(MethodInfo *)0x0);
                pTVar4 = (this->fields).trailRenderer;
                if (pTVar4 != (TrailRenderer *)0x0) {
                  pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                            Component_1_get_transform((Component_1 *)pTVar4,(MethodInfo *)0x0);
                  if (pTVar1 != (Transform *)0x0) {
                    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                              Transform_get_localPosition
                                        ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
                    fVar6 = pVVar3->x;
                    fVar9 = pVVar3->z;
                    pTVar1 = (this->fields).ownerTransform;
                    fVar5 = (this->fields).trailHeight;
                    if (pTVar1 != (Transform *)0x0) {
                      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                Transform_get_localScale
                                          ((Vector3 *)&stack0xffffffd8,pTVar1,(MethodInfo *)0x0);
                      uVar10 = pVVar3->x;
                      pTVar4 = (this->fields).trailRenderer;
                      uVar11._4_4_ = (float)uVar10 * fVar5;
                      uVar11._0_4_ = fVar6;
                      if (pTVar4 != (TrailRenderer *)0x0) {
                        pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                  Component_1_get_transform((Component_1 *)pTVar4,(MethodInfo *)0x0)
                        ;
                        if (pTVar1 != (Transform *)0x0) {
                          value.z = fVar9;
                          value.x = (float)uVar11;
                          value.y = SUB84(uVar11,4);
                          UnityEngine.CoreModule.dll::UnityEngine::Transform::
                          Transform_set_localPosition(pTVar1,value,(MethodInfo *)0x0);
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
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnDeactivated
               (NinjaRunModifier *this,Avatar_1 *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isDestroying = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)this,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar1,(MethodInfo *)0x0);
      return;
    }
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    this_00 = (ScaleAnimationBase *)func_?();
    ScaleAnimationBase::ScaleAnimationBase_Play(this_00,0.0,method_00);
    if (this_00 != (ScaleAnimationBase *)0x0) {
      (this_00->fields)._._._._.m_CachedPtr = this;
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?(0);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnDisable
               (NinjaRunModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isDestroying != 0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                    ((Component_1 *)this,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)obj,(MethodInfo *)0x0);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_Update
               (NinjaRunModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields)._.owner;
  pTVar2 = (this->fields).trailRenderer;
  if (pAVar1 == (Avatar_1 *)0x0) goto code_?;
  bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
           CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                     ((CrossPlatformInputManager_VirtualAxis *)pAVar1,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    value = true;
  }
  else {
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      func_?(TypeInfo__MVGameControllerBase);
    }
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_00 == (MainCameraManager *)0x0) ||
       (pMVar4 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0),
       pMVar4 == (MVCameraBase *)0x0)) goto code_?;
    iVar5 = (*(code *)(pMVar4->klass->vtable).__unknown.method)
                       (pMVar4,(pMVar4->klass->vtable).Awake.methodPtr);
    value = iVar5 != 0x10;
  }
  if (pTVar2 == (TrailRenderer *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
            ((Renderer *)pTVar2,value,(MethodInfo *)0x0);
  pTVar6 = (this->fields).ownerTransform;
  VVar7 = (this->fields).oldPosition;
  if (pTVar6 == (Transform *)0x0) goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
  VVar9 = *pVVar8;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?();
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                     (VVar7,VVar9,(MethodInfo *)0x0);
  if (bVar3 == 0) {
    return;
  }
  if ((this->fields).isDestroying != 0) {
    return;
  }
  pTVar6 = (this->fields).ownerTransform;
  if (pTVar6 == (Transform *)0x0) goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
  VVar7 = (this->fields).oldPosition;
  VVar9 = *pVVar8;
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
            ((Vector3 *)&stack0xffffffd0,VVar9,VVar7,(MethodInfo *)0x0);
  fVar10 = (float10)func_?(&stack0xffffffdc,0);
  pTVar6 = (this->fields).ownerTransform;
  if (pTVar6 == (Transform *)0x0) goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Inequality
                     (*pVVar8,(this->fields).oldScale,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar6 = (this->fields).ownerTransform;
    if (pTVar6 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
    pTVar2 = (this->fields).trailRenderer;
    fVar11 = pVVar8->y;
    fVar12 = pVVar8->z;
    (this->fields).oldScale.x = pVVar8->x;
    (this->fields).oldScale.y = fVar11;
    fVar11 = (this->fields).startWidth;
    (this->fields).oldScale.z = fVar12;
    pTVar6 = (this->fields).ownerTransform;
    if (pTVar6 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
    uVar13 = pVVar8->x;
    if (pTVar2 == (TrailRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_startWidth
              (pTVar2,(float)uVar13 * fVar11,(MethodInfo *)0x0);
    fVar11 = (this->fields).endWidth;
    pTVar6 = (this->fields).ownerTransform;
    pTVar2 = (this->fields).trailRenderer;
    if (pTVar6 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
    uVar14 = pVVar8->x;
    if (pTVar2 == (TrailRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_endWidth
              (pTVar2,(float)uVar14 * fVar11,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields)._.owner;
  if (pAVar1 == (Avatar_1 *)0x0) goto code_?;
  bVar3 = UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualAxis::
           CrossPlatformInputManager_VirtualAxis_get_matchWithInputManager
                     ((CrossPlatformInputManager_VirtualAxis *)pAVar1,(MethodInfo *)0x0);
  pAVar15 = (this->fields).soundEffect;
  if (bVar3 == 0) {
    fVar11 = _UNK_?;
    if (_UNK_? < (float)fVar10) goto joined_?;
    if (pAVar15 == (AudioSource *)0x0) goto code_?;
    fVar11 = 0.0;
  }
  else {
    if ((((uint)(TypeInfo__UnityEngine__Mathf->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Mathf->_1).cctor_started == 0)) {
      func_?(TypeInfo__UnityEngine__Mathf);
    }
    fVar11 = UnityEngine.CoreModule.dll::UnityEngine::Mathf::Mathf_Clamp
                       ((float)fVar10,0.0,1.0,(MethodInfo *)0x0);
joined_?:
    if (pAVar15 == (AudioSource *)0x0) goto code_?;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
            (pAVar15,fVar11,(MethodInfo *)0x0);
  pAVar15 = (this->fields).soundEffect;
  if (pAVar15 != (AudioSource *)0x0) {
    fVar11 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_volume
                       (pAVar15,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (pAVar15,(this->fields).initialVolume * fVar11,(MethodInfo *)0x0);
    pTVar6 = (this->fields).ownerTransform;
    if (pTVar6 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd0,pTVar6,(MethodInfo *)0x0);
      fVar12 = pVVar8->y;
      fVar11 = pVVar8->z;
      (this->fields).oldPosition.x = pVVar8->x;
      (this->fields).oldPosition.y = fVar12;
      (this->fields).oldPosition.z = fVar11;
      return;
    }
  }
code_?:
  func_?(0);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* AvatarModifierPackageType get_ModifierType() */

AvatarModifierPackageType__Enum
Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_get_ModifierType
          (NinjaRunModifier *this,MethodInfo *method)

{
  return AvatarModifierPackageType__Enum_NinjaRun;
}

