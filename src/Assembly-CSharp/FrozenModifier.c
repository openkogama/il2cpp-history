
/* IEnumerator DoFadeAndDestroy() */

IEnumerator *
Assembly-CSharp.dll::FrozenModifier::FrozenModifier_DoFadeAndDestroy
          (FrozenModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__FrozenModifier___DoFadeAndDestroy_d__7);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FrozenModifier___DoFadeAndDestroy_d__7;
  value = (Object *)func_?();
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            (value,ExceptionArgument__Enum_obj,(MethodInfo *)method_00);
  value[2].klass = (Object__Class *)this;
  value[1].klass = (Object__Class *)0x0;
  func_?(value + 2,this);
  return (IEnumerator *)value;
}


/* Void OnActivated(Avatar) */

void Assembly-CSharp.dll::FrozenModifier::FrozenModifier_OnActivated
               (FrozenModifier *this,Avatar *target,MethodInfo *method)

{
  if (((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0))
     && (this_00 = (pMVar1->fields).body, this_00 != (MVBody *)0x0)) {
    MVBody::MVBody_StartBlinking(this_00,BlinkType__Enum_Frozen,INFINITY,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::FrozenModifier::FrozenModifier_OnDeactivated
               (FrozenModifier *this,Avatar *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (this->fields).isDeactivating = 1;
  if (((target != (Avatar *)0x0) && (pMVar1 = (target->fields).mvAvatar, pMVar1 != (MVAvatar *)0x0))
     && (this_00 = (pMVar1->fields).body, this_00 != (MVBody *)0x0)) {
    MVBody::MVBody_StopBlinking(this_00,BlinkType__Enum_Frozen,(MethodInfo *)0x0);
    pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this,(MethodInfo *)0x0);
    if (pGVar2 != (GameObject *)0x0) {
      bVar3 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_activeInHierarchy
                        (pGVar2,(MethodInfo *)0x0);
      if (bVar3 == 0) {
        pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                           ((Component *)this,(MethodInfo *)0x0);
        if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar2,(MethodInfo *)0x0);
        return;
      }
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      method_00 = TypeInfo__FrozenModifier___DoFadeAndDestroy_d__7;
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
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::FrozenModifier::FrozenModifier_OnDisable
               (FrozenModifier *this,MethodInfo *method)

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

