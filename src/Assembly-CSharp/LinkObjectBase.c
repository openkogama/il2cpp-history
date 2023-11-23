
/* Boolean UpdatePositions(Vector3, Vector3) */

bool Assembly-CSharp.dll::LinkObjectBase::LinkObjectBase_UpdatePositions
               (LinkObjectBase *this,Vector3 newStartPos,Vector3 newEndPos,MethodInfo *method)

{
  uVar1 = (this->fields).startPos.x;
  uVar2 = (this->fields).startPos.y;
  fVar3 = (this->fields).startPos.z - newStartPos.z;
  fVar3 = ((float)uVar1 - newStartPos.x) * ((float)uVar1 - newStartPos.x) +
          ((float)uVar2 - newStartPos.y) * ((float)uVar2 - newStartPos.y) + fVar3 * fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
  }
  fVar4 = _UNK_?;
  uVar5 = _UNK_?;
  fVar6 = (float)((uint)fVar3 & _UNK_?);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar7 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
  fVar8 = fVar6 * _UNK_?;
  if (fVar6 * _UNK_? <= fVar7) {
    fVar8 = fVar7;
  }
  bVar9 = fVar8 <= (float)((uint)(0.0 - fVar3) & _UNK_?);
  if (bVar9) {
    (this->fields).startPos.x = (float)(int)newStartPos._0_8_;
    (this->fields).startPos.y = (float)(int)((ulonglong)newStartPos._0_8_ >> 0x20);
    (this->fields).startPos.z = newStartPos.z;
  }
  uVar10 = (this->fields).endPos.x;
  uVar11 = (this->fields).endPos.y;
  fVar3 = (this->fields).endPos.z - newEndPos.z;
  fVar3 = ((float)uVar10 - newEndPos.x) * ((float)uVar10 - newEndPos.x) +
          ((float)uVar11 - newEndPos.y) * ((float)uVar11 - newEndPos.y) + fVar3 * fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Mathf);
    cRam_? = '\x01';
    uVar5 = _UNK_?;
    fVar4 = _UNK_?;
  }
  fVar6 = (float)((uint)fVar3 & uVar5);
  if (fVar6 <= 0.0) {
    fVar6 = 0.0;
  }
  fVar4 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * fVar4;
  fVar8 = fVar6 * _UNK_?;
  if (fVar6 * _UNK_? <= fVar4) {
    fVar8 = fVar4;
  }
  if (fVar8 <= (float)((uint)(0.0 - fVar3) & uVar5)) {
    (this->fields).endPos.x = (float)(int)newEndPos._0_8_;
    (this->fields).endPos.y = (float)(int)((ulonglong)newEndPos._0_8_ >> 0x20);
    (this->fields).endPos.z = newEndPos.z;
    return 1;
  }
  return bVar9;
}

