
/* Void Destroy() */

void Assembly-CSharp.dll::CrumbleMatModifier::CrumbleMatModifier_Destroy
               (CrumbleMatModifier *this,MethodInfo *method)

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
Assembly-CSharp.dll::CrumbleMatModifier::CrumbleMatModifier_DoFadeAndDestroy
          (CrumbleMatModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__CrumbleMatModifier___DoFadeAndDestroy_d__9);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__CrumbleMatModifier___DoFadeAndDestroy_d__9;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::CrumbleMatModifier::CrumbleMatModifier_OnActivated
               (CrumbleMatModifier *this,Avatar *target,MethodInfo *method)

{
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = (this->fields).CrumbleParticles;
      if (this_00 == (ParticleSystem *)0x0) goto code_?;
      UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                (this_00,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::CrumbleMatModifier::CrumbleMatModifier_OnDeactivated
               (CrumbleMatModifier *this,Avatar *target,MethodInfo *method)

{
  (this->fields).isDeactivating = 1;
  this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_01 != (GameObject *)0x0) {
    bVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                      (this_01,(MethodInfo *)0x0);
    if (bVar1 == 0) {
      this_00 = (this->fields).CrumbleParticles;
      if (this_00 != (ParticleSystem *)0x0) {
        UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::ParticleSystem_Stop_2
                  (this_00,(MethodInfo *)0x0);
        CrumbleMatModifier_Destroy(this,(MethodInfo *)0x0);
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
        method_00 = TypeInfo__CrumbleMatModifier___DoFadeAndDestroy_d__9;
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

void Assembly-CSharp.dll::CrumbleMatModifier::CrumbleMatModifier_OnDisable
               (CrumbleMatModifier *this,MethodInfo *method)

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

