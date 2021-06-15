
/* Void Destroy() */

void Assembly-CSharp.dll::PoisonModifier::PoisonModifier_Destroy
               (PoisonModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                  ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* IEnumerator DoFadeAndDestroy() */

IEnumerator *
Assembly-CSharp.dll::PoisonModifier::PoisonModifier_DoFadeAndDestroy
          (PoisonModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PoisonModifier___DoFadeAndDestroy_c__Iterator0;
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

void Assembly-CSharp.dll::PoisonModifier::PoisonModifier_OnActivated
               (PoisonModifier *this,Avatar_1 *target,MethodInfo *method)

{
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if ((target != (Avatar_1 *)0x0) &&
     (this_00 = (target->fields).mvAvatar, this_00 != (MVAvatar *)0x0)) {
    this_03 = MVAvatar::MVAvatar_get_Body(this_00,(MethodInfo *)0x0);
    if (this_03 != (MVBody *)0x0) {
      this_04 = MVBody::MVBody_get_BodyData(this_03,(MethodInfo *)0x0);
      if (this_04 != (BodyData *)0x0) {
        parent = BodyData::BodyData_GetPartBone
                           (this_04,BodyData_PartIndex__Enum_Head,(MethodInfo *)0x0);
        if (this_02 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                    (this_02,parent,0,(MethodInfo *)0x0);
          this_05 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                              ((Component_1 *)this,(MethodInfo *)0x0);
          if (this_05 != (GameObject *)0x0) {
            bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                    GameObject_get_activeInHierarchy(this_05,(MethodInfo *)0x0);
            if (bVar1 == 0) {
              this_01 = (this->fields).poisonParticles;
              if (this_01 == (ParticleSystem *)0x0) goto code_?;
              UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
              ParticleSystem_Stop_2(this_01,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::PoisonModifier::PoisonModifier_OnDeactivated
               (PoisonModifier *this,Avatar_1 *target,MethodInfo *method)

{
  (this->fields).isDeactivating = 1;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                      ((Component_1 *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = (this->fields).poisonParticles;
      if (this_00 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (this_00,(MethodInfo *)0x0);
        PoisonModifier_Destroy(this,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                          ((Component_1 *)this,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_02,(Transform *)0x0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        this_03 = (ScaleAnimationBase *)func_?();
        ScaleAnimationBase::ScaleAnimationBase_Play(this_03,0.0,method_00);
        if (this_03 != (ScaleAnimationBase *)0x0) {
          (this_03->fields)._._._._.m_CachedPtr = this;
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,(IEnumerator *)this_03,(MethodInfo *)0x0);
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


/* Void OnDisable() */

void Assembly-CSharp.dll::PoisonModifier::PoisonModifier_OnDisable
               (PoisonModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((this->fields).isDeactivating != 0) {
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

