
/* Void Destroy() */

void Assembly-CSharp.dll::HealingMatModifier::HealingMatModifier_Destroy
               (HealingMatModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopAllCoroutines
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                  ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
            ((Object_1 *)obj,(MethodInfo *)0x0);
  return;
}


/* IEnumerator DoFadeAndDestroy() */

IEnumerator *
Assembly-CSharp.dll::HealingMatModifier::HealingMatModifier_DoFadeAndDestroy
          (HealingMatModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__HealingMatModifier___DoFadeAndDestroy_d__7);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__HealingMatModifier___DoFadeAndDestroy_d__7;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::HealingMatModifier::HealingMatModifier_OnActivated
               (HealingMatModifier *this,Avatar *target,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if ((((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0)
       ) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0)) &&
     ((pBVar3 = MVBody::MVBody_get_BodyData(pMVar2,(MethodInfo *)0x0), pBVar3 != (BodyData *)0x0 &&
      (pTVar4 = (pBVar3->fields).PartBones, pTVar4 != (Transform__Array *)0x0)))) {
    if (pTVar4->max_length == 0) goto code_?;
    if (this_01 != (Transform *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                (this_01,pTVar4->vector[0],0,(MethodInfo *)0x0);
      pMVar1 = (target->fields).mvAvatar;
      if ((pMVar1 != (MVAvatar *)0x0) && (pMVar2 = (pMVar1->fields).body, pMVar2 != (MVBody *)0x0))
      {
        MVBody::MVBody_StartBlinking(pMVar2,BlinkType__Enum_HealingMat,INFINITY,(MethodInfo *)0x0);
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(this_02,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            return;
          }
          this_00 = (this->fields).healingParticles;
          if (this_00 != (ParticleSystem *)0x0) {
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                      (this_00,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::HealingMatModifier::HealingMatModifier_OnDeactivated
               (HealingMatModifier *this,Avatar *target,MethodInfo *method)

{
  if (((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0))
     && (this_00 = (pMVar1->fields).body, this_00 != (MVBody *)0x0)) {
    MVBody::MVBody_StopBlinking(this_00,BlinkType__Enum_HealingMat,(MethodInfo *)0x0);
    (this->fields).isDeactivating = 1;
    this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)this,(MethodInfo *)0x0);
    if (this_02 != (GameObject *)0x0) {
      bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (this_02,(MethodInfo *)0x0);
      if (bVar2 == 0) {
        this_01 = (this->fields).healingParticles;
        if (this_01 != (ParticleSystem *)0x0) {
          UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                    (this_01,(MethodInfo *)0x0);
          HealingMatModifier_Destroy(this,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        this_03 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_03 != (Transform *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                    (this_03,(Transform *)0x0,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          method_00 = TypeInfo__HealingMatModifier___DoFadeAndDestroy_d__7;
          value = (Object *)func_?();
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                    (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
          value[1].klass = (Object__Class *)0x0;
          value[2].klass = (Object__Class *)this;
          func_?();
          UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_Auto
                    ((MonoBehaviour *)this,(IEnumerator *)value,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::HealingMatModifier::HealingMatModifier_OnDisable
               (HealingMatModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((this->fields).isDeactivating != 0) {
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

