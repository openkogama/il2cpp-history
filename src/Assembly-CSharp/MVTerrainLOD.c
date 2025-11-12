
/* MVTerrainLOD(IntVector, Vector3) */

void Assembly-CSharp.dll::MVTerrainLOD::MVTerrainLOD__ctor
               (MVTerrainLOD *this,IntVector *localPos,Vector3 *worldPos,MethodInfo *method)

{
  iVar1 = localPos->y;
  fVar2 = worldPos->x;
  fVar3 = worldPos->y;
  (this->localPos).x = localPos->x;
  (this->localPos).y = iVar1;
  (this->localPos).z = localPos->z;
  fVar4 = worldPos->z;
  (this->worldPos).x = fVar2;
  (this->worldPos).y = fVar3;
  (this->worldPos).z = fVar4;
  return;
}

