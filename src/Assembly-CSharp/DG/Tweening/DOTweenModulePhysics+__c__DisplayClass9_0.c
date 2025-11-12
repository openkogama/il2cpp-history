
/* Vector3 <DOPath>b__0() */

Vector3 * Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics+<>c__DisplayClass9_0::
          DOTweenModulePhysics_c_DisplayClass9_0__DOPath_b__0
                    (Vector3 *__return_storage_ptr__,DOTweenModulePhysics_c_DisplayClass9_0 *this,
                    MethodInfo *method)

{
  obj = (this->fields).target;
  if (obj == (Rigidbody *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody>_UnityEngine__Rigidbody_
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
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar1 = (code *)swi(3);
    pVVar2 = (Vector3 *)(*pcVar1)();
    return pVVar2;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar5,&uStack_3);
  __return_storage_ptr__->x = (float)(undefined4)uStack_3;
  __return_storage_ptr__->y = (float)uStack_3._4_4_;
  __return_storage_ptr__->z = fStack_4;
  return __return_storage_ptr__;
}

