
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
    func_?(&TypeInfo__NinjaRunModifier___DoFadeAndDestroy_d__17);
    cRam_? = '\x01';
  }
  value = (Object *)func_?(TypeInfo__NinjaRunModifier___DoFadeAndDestroy_d__17);
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


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnActivated
               (NinjaRunModifier *this,Avatar *target,MethodInfo *method)

{
  (this->fields)._.owner = target;
  func_?(&(this->fields)._.owner,target);
  pAVar1 = (this->fields)._.owner;
  if (pAVar1 != (Avatar *)0x0) {
    pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)pAVar1,(MethodInfo *)0x0);
    (this->fields).ownerTransform = pTVar2;
    func_?(&(this->fields).ownerTransform,pTVar2);
    pAVar1 = (this->fields)._.owner;
    if (((pAVar1 != (Avatar *)0x0) &&
        (pMVar3 = (pAVar1->fields).mvAvatar, pMVar3 != (MVAvatar *)0x0)) &&
       (pTVar2 = (pMVar3->fields)._._.transform, pTVar2 != (Transform *)0x0)) {
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                         (&VStack_5,pTVar2,(MethodInfo *)0x0);
      pTVar6 = (this->fields).trailRenderer;
      fVar7 = pVVar4->y;
      fVar8 = pVVar4->z;
      (this->fields).oldScale.x = pVVar4->x;
      (this->fields).oldScale.y = fVar7;
      fVar7 = (this->fields).startWidth;
      (this->fields).oldScale.z = fVar8;
      pTVar2 = (this->fields).ownerTransform;
      if (pTVar2 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                           (&VStack_5,pTVar2,(MethodInfo *)0x0);
        if (pTVar6 != (TrailRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_startWidth
                    (pTVar6,pVVar4->x * fVar7,(MethodInfo *)0x0);
          fVar7 = (this->fields).endWidth;
          pTVar2 = (this->fields).ownerTransform;
          pTVar6 = (this->fields).trailRenderer;
          if (pTVar2 != (Transform *)0x0) {
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                               (&VStack_5,pTVar2,(MethodInfo *)0x0);
            if (pTVar6 != (TrailRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_endWidth
                        (pTVar6,pVVar4->x * fVar7,(MethodInfo *)0x0);
              pTVar6 = (this->fields).trailRenderer;
              if (pTVar6 != (TrailRenderer *)0x0) {
                pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pTVar6,(MethodInfo *)0x0);
                if (pTVar2 != (Transform *)0x0) {
                  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_localPosition(&VStack_9,pTVar2,(MethodInfo *)0x0);
                  VStack_5.x = pVVar4->x;
                  VStack_5.y = pVVar4->y;
                  fVar8 = pVVar4->z;
                  pTVar2 = (this->fields).ownerTransform;
                  fVar7 = (this->fields).trailHeight;
                  if (pTVar2 != (Transform *)0x0) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_localScale(&VStack_9,pTVar2,(MethodInfo *)0x0);
                    pTVar6 = (this->fields).trailRenderer;
                    VStack_5.y = fVar7 * pVVar4->x;
                    if (pTVar6 != (TrailRenderer *)0x0) {
                      pTVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pTVar6,(MethodInfo *)0x0);
                      if (pTVar2 != (Transform *)0x0) {
                        value.z = fVar8;
                        value.x = VStack_5.x;
                        value.y = VStack_5.y;
                        UnityEngine.CoreModule.dll::UnityEngine::Transform::
                        Transform_set_localPosition(pTVar2,value,(MethodInfo *)0x0);
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
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnDeactivated
               (NinjaRunModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).isDestroying = 1;
  pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                     ((Component *)this,(MethodInfo *)0x0);
  if (pGVar1 != (GameObject *)0x0) {
    bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (pGVar1,(MethodInfo *)0x0);
    if (bVar2 == 0) {
      pGVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this,(MethodInfo *)0x0);
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
    method_00 = (MethodInfo *)&UNK_?;
    value = (Object *)func_?();
    if (value != (Object *)0x0) {
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                (value,ExceptionArgument__Enum_obj,method_00);
      value[1].klass = (Object__Class *)0x0;
      value[2].klass = (Object__Class *)this;
      func_?(value + 2,this);
      UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::NinjaRunModifier::NinjaRunModifier_OnDisable
               (NinjaRunModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).isDestroying != 0) {
    obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                    ((Component *)this,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
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
  pAVar1 = (this->fields)._.owner;
  pTVar2 = (this->fields).trailRenderer;
  if (pAVar1 == (Avatar *)0x0) goto code_?;
  if ((pAVar1->fields).isLocal == 0) {
    value = true;
  }
  else {
    this_00 = MVGameControllerBase::MVGameControllerBase_get_MainCameraManager((MethodInfo *)0x0);
    if ((this_00 == (MainCameraManager *)0x0) ||
       (pMVar3 = MainCameraManager::MainCameraManager_get_CurrentCamera(this_00,(MethodInfo *)0x0),
       pMVar3 == (MVCameraBase *)0x0)) goto code_?;
    iVar4 = (*(pMVar3->klass->vtable).__unknown.methodPtr)(pMVar3);
    value = iVar4 != 0x10;
  }
  if (pTVar2 == (TrailRenderer *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
            ((Renderer *)pTVar2,value,(MethodInfo *)0x0);
  pTVar5 = (this->fields).ownerTransform;
  if (pTVar5 == (Transform *)0x0) goto code_?;
  fVar6 = (this->fields).oldPosition.z;
  uVar7._0_4_ = (this->fields).oldPosition.x;
  uVar7._4_4_ = (this->fields).oldPosition.y;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                      ((Vector3 *)&stack0xffffffd4,pTVar5,(MethodInfo *)0x0);
  uVar9 = pVVar8->x;
  uVar10 = pVVar8->y;
  fVar11 = (float)uVar7 - (float)uVar9;
  fVar12 = (float)((ulonglong)uVar7 >> 0x20) - (float)uVar10;
  fVar6 = fVar6 - pVVar8->z;
  if (fVar12 * fVar12 + fVar11 * fVar11 + fVar6 * fVar6 < _UNK_?) {
    return;
  }
  if ((this->fields).isDestroying != 0) {
    return;
  }
  pTVar5 = (this->fields).ownerTransform;
  if (pTVar5 == (Transform *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
            ((Vector3 *)&stack0xffffffd4,pTVar5,(MethodInfo *)0x0);
  fVar13 = (float10)func_?();
  pTVar5 = (this->fields).ownerTransform;
  fVar6 = (float)fVar13;
  if (pTVar5 == (Transform *)0x0) goto code_?;
  pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                      ((Vector3 *)&stack0xffffffd4,pTVar5,(MethodInfo *)0x0);
  uVar14 = pVVar8->x;
  uVar15 = pVVar8->y;
  uVar16 = (this->fields).oldScale.x;
  uVar17 = (this->fields).oldScale.y;
  fVar11 = pVVar8->z - (this->fields).oldScale.z;
  if (_UNK_? <=
      ((float)uVar15 - (float)uVar17) * ((float)uVar15 - (float)uVar17) +
      ((float)uVar14 - (float)uVar16) * ((float)uVar14 - (float)uVar16) + fVar11 * fVar11) {
    pTVar5 = (this->fields).ownerTransform;
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffd4,pTVar5,(MethodInfo *)0x0);
    pTVar2 = (this->fields).trailRenderer;
    fVar11 = pVVar8->y;
    fVar12 = pVVar8->z;
    (this->fields).oldScale.x = pVVar8->x;
    (this->fields).oldScale.y = fVar11;
    fVar11 = (this->fields).startWidth;
    (this->fields).oldScale.z = fVar12;
    pTVar5 = (this->fields).ownerTransform;
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffd4,pTVar5,(MethodInfo *)0x0);
    if (pTVar2 == (TrailRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_startWidth
              (pTVar2,pVVar8->x * fVar11,(MethodInfo *)0x0);
    fVar11 = (this->fields).endWidth;
    pTVar5 = (this->fields).ownerTransform;
    pTVar2 = (this->fields).trailRenderer;
    if (pTVar5 == (Transform *)0x0) goto code_?;
    pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localScale
                        ((Vector3 *)&stack0xffffffd4,pTVar5,(MethodInfo *)0x0);
    if (pTVar2 == (TrailRenderer *)0x0) goto code_?;
    UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_set_endWidth
              (pTVar2,pVVar8->x * fVar11,(MethodInfo *)0x0);
  }
  pAVar1 = (this->fields)._.owner;
  if (pAVar1 == (Avatar *)0x0) goto code_?;
  pAVar18 = (this->fields).soundEffect;
  if ((pAVar1->fields).isLocal == 0) {
    fVar11 = _UNK_?;
    if (_UNK_? < fVar6) goto joined_?;
    if (pAVar18 == (AudioSource *)0x0) goto code_?;
    fVar11 = 0.0;
  }
  else {
    if (fVar6 < 0.0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = fVar6;
      if (_UNK_? < fVar6) {
        fVar11 = _UNK_?;
      }
    }
joined_?:
    if (pAVar18 == (AudioSource *)0x0) goto code_?;
  }
  UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
            (pAVar18,fVar11,(MethodInfo *)0x0);
  pAVar18 = (this->fields).soundEffect;
  if (pAVar18 != (AudioSource *)0x0) {
    fVar6 = UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_get_volume
                       (pAVar18,(MethodInfo *)0x0);
    UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
              (pAVar18,fVar6 * (this->fields).initialVolume,(MethodInfo *)0x0);
    pTVar5 = (this->fields).ownerTransform;
    if (pTVar5 != (Transform *)0x0) {
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                          ((Vector3 *)&stack0xffffffd4,pTVar5,(MethodInfo *)0x0);
      fVar11 = pVVar8->y;
      fVar6 = pVVar8->z;
      (this->fields).oldPosition.x = pVVar8->x;
      (this->fields).oldPosition.y = fVar11;
      (this->fields).oldPosition.z = fVar6;
      return;
    }
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  (*pcVar19)();
  return;
}

