
/* Boolean UpdatePositions(Vector3, Vector3) */

bool Assembly-CSharp.dll::LinkObjectBase::LinkObjectBase_UpdatePositions(LinkObjectBase *this,Vector3 newStartPos,Vector3 newEndPos,MethodInfo *method)

{
  uVar1 = (this->fields).startPos.x;
  uVar2 = (this->fields).startPos.y;
  fVar3 = (this->fields).startPos.z - newStartPos.z;
  fVar3 = ((float)uVar1 - newStartPos.x) * ((float)uVar1 - newStartPos.x) + ((float)uVar2 - newStartPos.y) * ((float)uVar2 - newStartPos.y) + fVar3 * fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar4 = ABS(fVar3);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * 8.0;
  fVar6 = fVar4 * 1e-06;
  if (fVar4 * 1e-06 <= fVar5) {
    fVar6 = fVar5;
  }
  bVar7 = fVar6 <= ABS(0.0 - fVar3);
  if (bVar7) {
    (this->fields).startPos.x = (float)(int)newStartPos._0_8_;
    (this->fields).startPos.y = (float)(int)((ulonglong)newStartPos._0_8_ >> 0x20);
    (this->fields).startPos.z = newStartPos.z;
  }
  uVar8 = (this->fields).endPos.x;
  uVar9 = (this->fields).endPos.y;
  fVar3 = (this->fields).endPos.z - newEndPos.z;
  fVar3 = ((float)uVar8 - newEndPos.x) * ((float)uVar8 - newEndPos.x) + ((float)uVar9 - newEndPos.y) * ((float)uVar9 - newEndPos.y) + fVar3 * fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar4 = ABS(fVar3);
  if (fVar4 <= 0.0) {
    fVar4 = 0.0;
  }
  fVar5 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * 8.0;
  fVar6 = fVar4 * 1e-06;
  if (fVar4 * 1e-06 <= fVar5) {
    fVar6 = fVar5;
  }
  if (fVar6 <= ABS(0.0 - fVar3)) {
    (this->fields).endPos.x = (float)(int)newEndPos._0_8_;
    (this->fields).endPos.y = (float)(int)((ulonglong)newEndPos._0_8_ >> 0x20);
    (this->fields).endPos.z = newEndPos.z;
    return 1;
  }
  return bVar7;
}

