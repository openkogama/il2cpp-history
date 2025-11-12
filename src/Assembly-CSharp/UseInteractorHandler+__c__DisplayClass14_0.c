
/* Single <SortByDistance>b__0(UseInteractor) */

float Assembly-CSharp.dll::UseInteractorHandler+<>c__DisplayClass14_0::
      UseInteractorHandler_c_DisplayClass14_0__SortByDistance_b__0
                (UseInteractorHandler_c_DisplayClass14_0 *this,UseInteractor *a,MethodInfo *method)

{
  if (((a == (UseInteractor *)0x0) ||
      (this_00 = (a->fields).triggerCollider, this_00 == (Collider *)0x0)) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this_00,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_3 = 0;
  fStack_4 = 0.0;
  pvVar5 = (obj->fields)._._.m_CachedPtr;
  if (pvVar5 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    fVar2 = (float)(*pcVar1)();
    return fVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  uVar7 = (this->fields).triggingColliderPosition.x;
  uVar8 = (this->fields).triggingColliderPosition.y;
  fStack_4 = fStack_4 - (this->fields).triggingColliderPosition.z;
  uStack_3 = CONCAT44(uStack_3._4_4_ - (float)uVar8,(float)uStack_3 - (float)uVar7);
  fVar2 = (float)FUN_?(&uStack_3);
  return fVar2;
}

