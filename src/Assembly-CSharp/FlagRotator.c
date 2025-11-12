
/* Void Update() */

void Assembly-CSharp.dll::FlagRotator::FlagRotator_Update(FlagRotator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).flag;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (MeshRenderer *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._._._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).flag;
      if (pMVar1 != (MeshRenderer *)0x0) {
        this_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                            ((Component *)pMVar1,(MethodInfo *)0x0);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar3._0_4_ = (pVVar2->upVector).x;
        uVar3._4_4_ = (pVVar2->upVector).y;
        fVar4 = (pVVar2->upVector).z;
        pcVar5 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
          uVar3 = func_?(&UNK_?);
          FUN_?(uVar3,0);
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        pcRam_? = pcVar5;
        fVar6 = (float)(*pcRam_?)();
        if (this_00 != (Transform *)0x0) {
          aVStack_7[0]._0_8_ = uVar3;
          aVStack_7[0].z = fVar4;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_Rotate_4
                    (this_00,aVStack_7,fVar6 * (this->fields).rotationSpeed * _UNK_?,
                     Space__Enum_Self,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  return;
}

