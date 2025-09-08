
/* Void Destroy() */

void Assembly-CSharp.dll::PoisonModifier::PoisonModifier_Destroy
               (PoisonModifier *this,MethodInfo *method)

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
Assembly-CSharp.dll::PoisonModifier::PoisonModifier_DoFadeAndDestroy
          (PoisonModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PoisonModifier___DoFadeAndDestroy_d__7);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__PoisonModifier___DoFadeAndDestroy_d__7;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::PoisonModifier::PoisonModifier_OnActivated
               (PoisonModifier *this,Avatar *target,MethodInfo *method)

{
  this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0))
     && (this_00 = (pMVar1->fields).body, this_00 != (MVBody *)0x0)) {
    this_03 = (MethodCall *)MVBody::MVBody_get_BodyData(this_00,(MethodInfo *)0x0);
    if (this_03 != (MethodCall *)0x0) {
      parent = (Transform *)
               mscorlib.dll::System::Runtime::Remoting::Messaging::MethodCall::MethodCall_GetArg
                         (this_03,0,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
                  (this_02,parent,0,(MethodInfo *)0x0);
        this_04 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this,(MethodInfo *)0x0);
        if (this_04 != (GameObject *)0x0) {
          bVar2 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                  GameObject_get_activeInHierarchy(this_04,(MethodInfo *)0x0);
          if (bVar2 == 0) {
            this_01 = (this->fields).poisonParticles;
            if (this_01 == (ParticleSystem *)0x0) goto code_?;
            UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                      (this_01,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::PoisonModifier::PoisonModifier_OnDeactivated
               (PoisonModifier *this,Avatar *target,MethodInfo *method)

{
  (this->fields).isDeactivating = 1;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
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
      this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                          ((Component *)this,(MethodInfo *)0x0);
      if (this_02 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_parent
                  (this_02,(Transform *)0x0,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        method_00 = TypeInfo__PoisonModifier___DoFadeAndDestroy_d__7;
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
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::PoisonModifier::PoisonModifier_OnDisable
               (PoisonModifier *this,MethodInfo *method)

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

