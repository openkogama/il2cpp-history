
/* Boolean UpdatePositions(Vector3, Vector3) */

bool Assembly-CSharp.dll::LinkObjectBase::LinkObjectBase_UpdatePositions
               (LinkObjectBase *this,Vector3 *newStartPos,Vector3 *newEndPos,MethodInfo *method)

{
  uVar1 = newStartPos->x;
  uVar2 = newStartPos->y;
  uVar3 = (this->fields).startPos.x;
  uVar4 = (this->fields).startPos.y;
  fVar5 = (this->fields).startPos.z - newStartPos->z;
  uVar6 = CONCAT44(uVar4,((float)uVar4 - (float)uVar2) * ((float)uVar4 - (float)uVar2) +
                         ((float)uVar3 - (float)uVar1) * ((float)uVar3 - (float)uVar1) +
                         fVar5 * fVar5);
  cVar7 = FUN_?(uVar6,0);
  if (cVar7 == '\0') {
    fVar8 = newStartPos->y;
    fVar5 = newStartPos->z;
    (this->fields).startPos.x = newStartPos->x;
    (this->fields).startPos.y = fVar8;
    (this->fields).startPos.z = fVar5;
  }
  uVar9 = newEndPos->x;
  uVar10 = newEndPos->y;
  uVar11 = (this->fields).endPos.y;
  uVar12 = (this->fields).endPos.x;
  fVar5 = (this->fields).endPos.z - newEndPos->z;
  uVar6 = CONCAT44(uVar11,((float)uVar11 - (float)uVar10) * ((float)uVar11 - (float)uVar10) +
                         ((float)uVar12 - (float)uVar9) * ((float)uVar12 - (float)uVar9) +
                         fVar5 * fVar5);
  cVar13 = FUN_?(uVar6,0);
  if (cVar13 == '\0') {
    fVar5 = newEndPos->z;
    fVar8 = newEndPos->y;
    (this->fields).endPos.x = newEndPos->x;
    (this->fields).endPos.y = fVar8;
    (this->fields).endPos.z = fVar5;
  }
  return cVar13 == '\0' || cVar7 == '\0';
}

