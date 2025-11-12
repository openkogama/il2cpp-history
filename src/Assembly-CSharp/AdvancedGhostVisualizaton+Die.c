
/* Void Exit(AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die_Exit
               (AdvancedGhostVisualizaton_Die *this,AdvancedGhostVisualizaton *ghost,
               MethodInfo *method)

{
  if ((ghost != (AdvancedGhostVisualizaton *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)ghost,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1);
    this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                        ((Component *)ghost,(MethodInfo *)0x0);
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,0,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateEffect(AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die_UpdateEffect
               (AdvancedGhostVisualizaton_Die *this,AdvancedGhostVisualizaton *ghostVisualizaton,
               MethodInfo *method)

{
  if (ghostVisualizaton == (AdvancedGhostVisualizaton *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  fVar2 = (ghostVisualizaton->fields).baseScale.z;
  uVar3 = (ghostVisualizaton->fields).baseScale.x;
  uVar4 = (ghostVisualizaton->fields).baseScale.y;
  fVar5 = (this->fields)._.timeLeft / (this->fields)._.duration;
  obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                  ((Component *)ghostVisualizaton,(MethodInfo *)0x0);
  fStack_6 = fVar5 * fVar2;
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  uStack_7 = CONCAT44(fVar5 * (float)uVar4,fVar5 * (float)uVar3);
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar9 = func_?(&UNK_?);
    FUN_?(uVar9,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar8,&uStack_7);
  return;
}


/* Vector3 UpdateScale(AdvancedGhostVisualizaton) */

Vector3 * Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::
          AdvancedGhostVisualizaton_Die_UpdateScale
                    (Vector3 *__return_storage_ptr__,AdvancedGhostVisualizaton_Die *this,
                    AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  if (ghostVisualizaton != (AdvancedGhostVisualizaton *)0x0) {
    fVar1 = (this->fields)._.timeLeft / (this->fields)._.duration;
    uVar2 = (ghostVisualizaton->fields).baseScale.x;
    uVar3 = (ghostVisualizaton->fields).baseScale.y;
    fVar4 = (ghostVisualizaton->fields).baseScale.z;
    __return_storage_ptr__->x = fVar1 * (float)uVar2;
    __return_storage_ptr__->y = fVar1 * (float)uVar3;
    __return_storage_ptr__->z = fVar1 * fVar4;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  pVVar6 = (Vector3 *)(*pcVar5)();
  return pVVar6;
}


/* AdvancedGhostVisualizaton+Die(Single, AdvancedGhostVisualizaton) */

void Assembly-CSharp.dll::AdvancedGhostVisualizaton+Die::AdvancedGhostVisualizaton_Die__ctor
               (AdvancedGhostVisualizaton_Die *this,float duration,
               AdvancedGhostVisualizaton *ghostVisualizaton,MethodInfo *method)

{
  (this->fields)._.duration = duration;
  (this->fields)._.timeLeft = duration;
  return;
}

