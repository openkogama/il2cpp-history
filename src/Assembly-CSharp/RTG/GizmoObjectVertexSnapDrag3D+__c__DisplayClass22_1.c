
/* Boolean <GatherDestinationObjects>b__1(GameObject) */

bool Assembly-CSharp.dll::RTG::GizmoObjectVertexSnapDrag3D+<>c__DisplayClass22_1::
     GizmoObjectVertexSnapDrag3D_c_DisplayClass22_1__GatherDestinationObjects_b__1
               (GizmoObjectVertexSnapDrag3D_c_DisplayClass22_1 *this,GameObject *b,
               MethodInfo *method)

{
  this_00 = (this->fields).a;
  if (((this_00 == (GameObject *)0x0) ||
      (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                       (this_00,(MethodInfo *)0x0), b == (GameObject *)0x0)) ||
     (obj_00 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                         (b,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj_00 == (Transform *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException((Object *)0x0,StringLiteral_parent,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  if (obj == (Transform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pvVar3 = (obj->fields)._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pvVar4 = (obj_00->fields)._._.m_CachedPtr;
  if (pvVar4 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowArgumentNullException
              ((Object *)obj_00,StringLiteral_parent,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar5 = func_?(&UNK_?);
    FUN_?(uVar5,0);
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  pcRam_? = pcVar1;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  bVar2 = (*pcRam_?)(pvVar3,pvVar4);
  return bVar2;
}

