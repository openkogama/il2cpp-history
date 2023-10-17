
/* Boolean MoveNext() */

bool Assembly-CSharp.dll::NinjaRunModifier+<DoFadeAndDestroy>d__17::
     NinjaRunModifier_DoFadeAndDestroy_d_17_MoveNext
               (NinjaRunModifier_DoFadeAndDestroy_d_17 *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__WaitForSeconds);
    cRam_? = '\x01';
  }
  iVar1 = (this->fields).__1__state;
  this_00 = (this->fields).__4__this;
  if (iVar1 == 0) {
    (this->fields).__1__state = -1;
    if (this_00 != (NinjaRunModifier *)0x0) {
      this_01 = (this_00->fields).soundEffect;
      (this_00->fields).isDestroying = 1;
      if (this_01 != (AudioSource *)0x0) {
        UnityEngine.AudioModule.dll::UnityEngine::AudioSource::AudioSource_set_volume
                  (this_01,0.0,(MethodInfo *)0x0);
        pTVar2 = (this_00->fields).trailRenderer;
        if (pTVar2 != (TrailRenderer *)0x0) {
          pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)pTVar2,(MethodInfo *)0x0);
          if (pGVar3 != (GameObject *)0x0) {
            this_02 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar3,(MethodInfo *)0x0);
            if (this_02 != (Transform *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent
                        (this_02,(Transform *)0x0,(MethodInfo *)0x0);
              pTVar2 = (this_00->fields).trailRenderer;
              if (pTVar2 != (TrailRenderer *)0x0) {
                value = UnityEngine.CoreModule.dll::UnityEngine::TrailRenderer::
                        TrailRenderer_get_time(pTVar2,(MethodInfo *)0x0);
                this_03 = (SubscribableVariableBase_1_System_Single_ *)func_?();
                if (this_03 != (SubscribableVariableBase_1_System_Single_ *)0x0) {
                  SubscribableVariableBase`1[System::Single]::
                  SubscribableVariableBase_1_System_Single___ctor(this_03,value,(MethodInfo *)0x0);
                  (this->fields).__2__current = (Object *)this_03;
                  func_?();
                  (this->fields).__1__state = 1;
                  return 1;
                }
              }
            }
          }
        }
      }
    }
code_?:
    func_?();
    pcVar4 = (code *)swi(3);
    bVar5 = (*pcVar4)();
    return bVar5;
  }
  if (iVar1 == 1) {
    (this->fields).__1__state = -1;
    if ((this_00 == (NinjaRunModifier *)0x0) ||
       (pTVar2 = (this_00->fields).trailRenderer, pTVar2 == (TrailRenderer *)0x0))
    goto code_?;
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)pTVar2,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__UnityEngine__Object);
    }
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
    pGVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                       ((Component *)this_00,(MethodInfo *)0x0);
    UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Destroy_1
              ((Object_1 *)pGVar3,(MethodInfo *)0x0);
  }
  return 0;
}


/* Void System.Collections.IEnumerator.Reset() */

void Assembly-CSharp.dll::NinjaRunModifier+<DoFadeAndDestroy>d__17::
     NinjaRunModifier_DoFadeAndDestroy_d_17_System_Collections_IEnumerator_Reset
               (NinjaRunModifier_DoFadeAndDestroy_d_17 *this,MethodInfo *method)

{
  uVar1 = func_?(&TypeInfo__System__NotSupportedException);
  this_00 = (NotSupportedException *)func_?(uVar1);
  func_?(this_00);
  mscorlib.dll::System::NotSupportedException::NotSupportedException__ctor
            (this_00,(MethodInfo *)0x0);
  func_?(&
                  MethodInfo__NinjaRunModifier___DoFadeAndDestroy_d__17__System_Collections_IEnumerator_Reset__
                 );
  func_?(this_00);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

