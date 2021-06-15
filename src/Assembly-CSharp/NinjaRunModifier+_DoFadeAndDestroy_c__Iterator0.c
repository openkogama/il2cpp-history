
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::NinjaRunModifier+<DoFadeAndDestroy>c__Iterator0::
     NinjaRunModifier_DoFadeAndDestroy_c_Iterator0_MoveNext
               (NinjaRunModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields)._PC;
  (this->fields)._PC = -1;
  if (iVar1 == 0) {
    pNVar2 = (this->fields)._this;
    if (pNVar2 != (NinjaRunModifier *)0x0) {
      (pNVar2->fields).isDestroying = 1;
      pNVar2 = (this->fields)._this;
      if ((pNVar2 != (NinjaRunModifier *)0x0) &&
         (this_00 = (pNVar2->fields).soundEffect, this_00 != (AudioSource *)0x0)) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_00,0.0,(MethodInfo *)0x0);
        pNVar2 = (this->fields)._this;
        if ((pNVar2 != (NinjaRunModifier *)0x0) &&
           (((pTVar3 = (pNVar2->fields).trailRenderer, pTVar3 != (TrailRenderer *)0x0 &&
             (pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                       Component_1_get_gameObject((Component_1 *)pTVar3,(MethodInfo *)0x0),
             pGVar4 != (GameObject *)0x0)) &&
            (this_01 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar4,(MethodInfo *)0x0), this_01 != (Transform *)0x0)))) {
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                    (this_01,(Transform *)0x0,(MethodInfo *)0x0);
          pNVar2 = (this->fields)._this;
          if ((pNVar2 != (NinjaRunModifier *)0x0) &&
             (pTVar3 = (pNVar2->fields).trailRenderer, pTVar3 != (TrailRenderer *)0x0)) {
            seconds = UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::TrailRenderer_get_time
                                (pTVar3,(MethodInfo *)0x0);
            this_02 = (WaitForSeconds *)func_?();
            UnityEngine.CoreModule.dll::UnityEngine::WaitForSeconds::WaitForSeconds__ctor
                      (this_02,seconds,(MethodInfo *)0x0);
            (this->fields)._current = (Object *)this_02;
            if ((this->fields)._disposing == 0) {
              (this->fields)._PC = 1;
            }
            return 1;
          }
        }
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return 0;
    }
    pNVar2 = (this->fields)._this;
    if ((pNVar2 != (NinjaRunModifier *)0x0) &&
       (pTVar3 = (pNVar2->fields).trailRenderer, pTVar3 != (TrailRenderer *)0x0)) {
      pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pTVar3,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                ((Object_1 *)pGVar4,(MethodInfo *)0x0);
      pNVar2 = (this->fields)._this;
      if (pNVar2 != (NinjaRunModifier *)0x0) {
        pGVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                           ((Component_1 *)pNVar2,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
                  ((Object_1 *)pGVar4,(MethodInfo *)0x0);
        (this->fields)._PC = -1;
        return 0;
      }
    }
  }
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Reset() */

void Assembly-CSharp.dll::NinjaRunModifier+<DoFadeAndDestroy>c__Iterator0::
     NinjaRunModifier_DoFadeAndDestroy_c_Iterator0_Reset
               (NinjaRunModifier_DoFadeAndDestroy_c_Iterator0 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (NotSupportedException *)func_?(TypeInfo__System__NotSupportedException);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(this_00,0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

