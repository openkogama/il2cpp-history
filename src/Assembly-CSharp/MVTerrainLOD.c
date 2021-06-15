
/* MVTerrainLOD(IntVector, Vector3) */

void Assembly-CSharp.dll::MVTerrainLOD::MVTerrainLOD__ctor
               (MVTerrainLOD *this,IntVector localPos,Vector3 worldPos,MethodInfo *method)

{
  (this->worldPos).x = (float)localPos._0_4_;
  *(int16_t *)&(this->worldPos).y = localPos.z;
  *(undefined8 *)&(this->worldPos).z = worldPos._0_8_;
  *(float *)&this[1].localPos.z = worldPos.z;
  return;
}

