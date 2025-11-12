
/* Void Update() */

void Assembly-CSharp.dll::RotateWorld::RotateWorld_Update(RotateWorld *this,MethodInfo *method)

{
  obj = (this->fields).rotateTarget;
  this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if (this_00 != (Transform *)0x0) {
    pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_up
                       (aVStack_2,this_00,(MethodInfo *)0x0);
    fVar3 = (this->fields).rotateSpeed;
    uVar4._0_4_ = pVVar1->x;
    uVar4._4_4_ = pVVar1->y;
    fVar5 = pVVar1->z;
    pcVar6 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pcRam_? = pcVar6;
    fVar7 = (float)(*pcRam_?)();
    if (obj != (Transform *)0x0) {
      fVar3 = fVar7 * fVar3 * _UNK_?;
      aVStack_2[0]._0_8_ = uVar4;
      aVStack_2[0].z = fVar5;
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
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcVar6 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar6 = (code *)FUN_?(&UNK_?), pcVar6 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pcRam_? = pcVar6;
      (*pcRam_?)(pvVar8,aVStack_2,fVar3);
      return;
    }
  }
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

