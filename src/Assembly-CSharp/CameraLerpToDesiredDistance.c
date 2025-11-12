
/* Vector3 Update(Vector3, Vector3) */

Vector3 * Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance_Update
                    (Vector3 *__return_storage_ptr__,CameraLerpToDesiredDistance *this,
                    Vector3 *targetPosition,Vector3 *cameraPosition,MethodInfo *method)

{
  uVar1 = targetPosition->x;
  uVar2 = targetPosition->y;
  uVar3 = cameraPosition->x;
  uVar4 = cameraPosition->y;
  fStack_5 = targetPosition->z - cameraPosition->z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fVar7 = (float)FUN_?(&uStack_6);
  fVar8 = fVar7;
  if ((this->fields).newDistance <= fVar7 && fVar7 != (this->fields).newDistance) {
    fVar8 = (this->fields).newDistance;
    pcVar9 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
      uVar10 = func_?(&UNK_?);
      FUN_?(uVar10,0);
      pcVar9 = (code *)swi(3);
      pVVar11 = (Vector3 *)(*pcVar9)();
      return pVVar11;
    }
    pcRam_? = pcVar9;
    fVar12 = (float)(*pcRam_?)();
    fVar8 = fVar12 * _UNK_? + fVar8;
    if (fVar7 <= fVar8) {
      fVar8 = fVar7;
    }
  }
  (this->fields).newDistance = fVar8;
  uVar13 = cameraPosition->x;
  uVar14 = cameraPosition->y;
  uVar15 = targetPosition->x;
  uVar16 = targetPosition->y;
  fVar8 = cameraPosition->z - targetPosition->z;
  uStack_6 = CONCAT44((float)uVar14 - (float)uVar16,(float)uVar13 - (float)uVar15);
  fStack_5 = fVar8;
  fVar7 = (float)FUN_?(&uStack_6);
  if (_UNK_? < fVar7) {
    fVar8 = fVar8 / fVar7;
    uStack_6 = CONCAT44(((float)uVar14 - (float)uVar16) / fVar7,
                         ((float)uVar13 - (float)uVar15) / fVar7);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar17 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar17->zeroVector).x;
    uStack_6._4_4_ = (pVVar17->zeroVector).y;
    fVar8 = (pVVar17->zeroVector).z;
  }
  fVar7 = (this->fields).newDistance;
  uVar18 = targetPosition->x;
  uVar19 = targetPosition->y;
  fVar12 = targetPosition->z;
  __return_storage_ptr__->x = fVar7 * (float)uStack_6 + (float)uVar18;
  __return_storage_ptr__->y = fVar7 * uStack_6._4_4_ + (float)uVar19;
  __return_storage_ptr__->z = fVar7 * fVar8 + fVar12;
  return __return_storage_ptr__;
}


/* CameraLerpToDesiredDistance() */

void Assembly-CSharp.dll::CameraLerpToDesiredDistance::CameraLerpToDesiredDistance__ctor
               (CameraLerpToDesiredDistance *this,MethodInfo *method)

{
  (this->fields).newDistance = INFINITY;
  return;
}

