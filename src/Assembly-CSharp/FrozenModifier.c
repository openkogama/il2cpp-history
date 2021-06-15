
/* IEnumerator DoFadeAndDestroy() */

IEnumerator *
Assembly-CSharp.dll::FrozenModifier::FrozenModifier_DoFadeAndDestroy
          (FrozenModifier *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  method_00 = TypeInfo__FrozenModifier___DoFadeAndDestroy_c__Iterator0;
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

void Assembly-CSharp.dll::FrozenModifier::FrozenModifier_OnActivated
               (FrozenModifier *this,Avatar_1 *target,MethodInfo *method)

{
  if (target != (Avatar_1 *)0x0) {
    Avatar::Avatar_1_StartBlinking(target,BlinkType__Enum_Frozen,INFINITY,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void OnDeactivated(Avatar) */

void Assembly-CSharp.dll::FrozenModifier::FrozenModifier_OnDeactivated
               (FrozenModifier *this,Avatar_1 *target,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isDeactivating = 1;
  if (target != (Avatar_1 *)0x0) {
    Avatar::Avatar_1_StopBlinking(target,BlinkType__Enum_Frozen,(MethodInfo *)0x0);
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
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void OnDisable() */

void Assembly-CSharp.dll::FrozenModifier::FrozenModifier_OnDisable
               (FrozenModifier *this,MethodInfo *method)

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

