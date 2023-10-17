
/* MVTerrainLOD(IntVector, Vector3) */

void Assembly-CSharp.dll::MVTerrainLOD::MVTerrainLOD__ctor
               (MVTerrainLOD *this,IntVector localPos,Vector3 worldPos,MethodInfo *method)

{
  (this->localPos).x = localPos.x;
  (this->localPos).y = localPos.y;
  (this->localPos).z = localPos.z;
  (this->worldPos).x = worldPos.x;
  (this->worldPos).y = worldPos.y;
  (this->worldPos).z = worldPos.z;
  return;
}

