
/* Vector3 <DOPath>b__0() */

Vector3 * Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D+<>c__DisplayClass7_0::
          DOTweenModulePhysics2D_c_DisplayClass7_0__DOPath_b__0
                    (Vector3 *__return_storage_ptr__,DOTweenModulePhysics2D_c_DisplayClass7_0 *this,
                    MethodInfo *method)

{
  this_00 = (this->fields).target;
  if (this_00 != (Rigidbody2D *)0x0) {
    VVar1 = UnityEngine.Physics2DModule.dll::UnityEngine::Rigidbody2D::Rigidbody2D_get_position
                      (this_00,(MethodInfo *)0x0);
    __return_storage_ptr__->x = VVar1.x;
    __return_storage_ptr__->y = VVar1.y;
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar2)();
  return pVVar3;
}


/* Void <DOPath>b__1(Vector3) */

void Assembly-CSharp.dll::DG::Tweening::DOTweenModulePhysics2D+<>c__DisplayClass7_0::
     DOTweenModulePhysics2D_c_DisplayClass7_0__DOPath_b__1
               (DOTweenModulePhysics2D_c_DisplayClass7_0 *this,Vector3 *x,MethodInfo *method)

{
  auStack_1[0]._0_4_ = x->x;
  auStack_1[0]._4_4_ = x->y;
  obj = (this->fields).target;
  if (obj == (Rigidbody2D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Rigidbody2D>_UnityEngine__Rigidbody2D_
                  ,auStack_1[0],0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (Rigidbody2D *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar3,auStack_1);
  return;
}

