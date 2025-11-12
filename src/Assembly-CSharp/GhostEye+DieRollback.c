
/* Quaternion Update(GhostEye) */

Quaternion *
Assembly-CSharp.dll::GhostEye+DieRollback::GhostEye_DieRollback_Update
          (Quaternion *__return_storage_ptr__,GhostEye_DieRollback *this,GhostEye *ghostEye,
          MethodInfo *method)

{
  fVar1 = (this->fields).currentRollbackTime;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pQVar4 = (Quaternion *)(*pcVar2)();
    return pQVar4;
  }
  pcRam_? = pcVar2;
  fVar5 = (float)(*pcRam_?)();
  (this->fields).currentRollbackTime = fVar5 + fVar1;
  if ((ghostEye == (GhostEye *)0x0) ||
     (obj = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)ghostEye,(MethodInfo *)0x0), obj == (Transform *)0x0)) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pQVar4 = (Quaternion *)(*pcVar2)();
    return pQVar4;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_6 = 0;
  uStack_7 = 0;
  pvVar8 = (obj->fields)._._.m_CachedPtr;
  if (pvVar8 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    pQVar4 = (Quaternion *)(*pcVar2)();
    return pQVar4;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pQVar4 = (Quaternion *)(*pcVar2)();
    return pQVar4;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar8,&uStack_6);
  uStack_9._0_4_ = (this->fields).rollbackRotation.x;
  uStack_9._4_4_ = (this->fields).rollbackRotation.y;
  uStack_10._0_4_ = (this->fields).rollbackRotation.z;
  uStack_10._4_4_ = (this->fields).rollbackRotation.w;
  fVar1 = (this->fields).currentRollbackTime;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = (undefined4)uStack_6;
  uStack_14 = uStack_6._4_4_;
  uStack_15 = (undefined4)uStack_7;
  uStack_16 = uStack_7._4_4_;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
    pcVar2 = (code *)swi(3);
    pQVar4 = (Quaternion *)(*pcVar2)();
    return pQVar4;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&uStack_13,&uStack_9,fVar1,&uStack_11);
  __return_storage_ptr__->x = (float)(undefined4)uStack_11;
  __return_storage_ptr__->y = (float)uStack_11._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_12;
  __return_storage_ptr__->w = (float)uStack_12._4_4_;
  return __return_storage_ptr__;
}


/* GhostEye+DieRollback() */

void Assembly-CSharp.dll::GhostEye+DieRollback::GhostEye_DieRollback__ctor
               (GhostEye_DieRollback *this,MethodInfo *method)

{
  uStack_1 = (ulonglong)_UNK_?;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  pcVar5 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
    uVar6 = func_?(&UNK_?);
    FUN_?(uVar6,0);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pcRam_? = pcVar5;
  (*pcRam_?)(&uStack_1,&uStack_3);
  (this->fields).rollbackRotation.x = (float)(undefined4)uStack_3;
  (this->fields).rollbackRotation.y = (float)uStack_3._4_4_;
  (this->fields).rollbackRotation.z = (float)(undefined4)uStack_4;
  (this->fields).rollbackRotation.w = (float)uStack_4._4_4_;
  return;
}

