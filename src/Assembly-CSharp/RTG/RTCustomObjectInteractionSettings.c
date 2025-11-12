
/* RTCustomObjectInteractionSettings() */

void Assembly-CSharp.dll::RTG::RTCustomObjectInteractionSettings::
     RTCustomObjectInteractionSettings__ctor
               (RTCustomObjectInteractionSettings *this,MethodInfo *method)

{
  fVar1 = _UNK_?;
  (this->fields)._noVolumeObjectSize.x = _UNK_?;
  (this->fields)._noVolumeObjectSize.y = fVar1;
  (this->fields)._noVolumeObjectSize.z = fVar1;
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_Settings,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar2 = iRam_? != 0;
  (this->fields)._._canBeDisplayed = 1;
  (this->fields)._._isExpanded = 1;
  (this->fields)._._foldoutLabel = StringLiteral_Settings;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._._foldoutLabel >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void set_NoVolumeObjectSize(Vector3) */

void Assembly-CSharp.dll::RTG::RTCustomObjectInteractionSettings::
     RTCustomObjectInteractionSettings_set_NoVolumeObjectSize
               (RTCustomObjectInteractionSettings *this,Vector3 *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Application);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Application->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  cVar3 = (*pcRam_?)();
  if (cVar3 == '\0') {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    uVar4 = value->x;
    uVar5 = value->y;
    pVVar6 = TypeInfo__UnityEngine__Vector3->static_fields;
    fVar7 = (pVVar6->zeroVector).x;
    fVar8 = (pVVar6->zeroVector).y;
    if (fVar7 <= (float)uVar4) {
      fVar7 = (float)uVar4;
    }
    fVar9 = (pVVar6->zeroVector).z;
    if (fVar9 <= value->z) {
      fVar9 = value->z;
    }
    if (fVar8 <= (float)uVar5) {
      fVar8 = (float)uVar5;
    }
    (this->fields)._noVolumeObjectSize.x = fVar7;
    (this->fields)._noVolumeObjectSize.y = fVar8;
    (this->fields)._noVolumeObjectSize.z = fVar9;
  }
  return;
}

