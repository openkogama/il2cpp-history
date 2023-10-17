
/* OverlapCubeData(IntVector, OverlapState) */

void MVWorldObject.dll::MV::WorldObject::OverlapCubeData::OverlapCubeData__ctor
               (OverlapCubeData *this,IntVector cubePos,OverlapState__Enum overlapState,
               MethodInfo *method)

{
  (this->cubePos).x = cubePos.x;
  (this->cubePos).y = cubePos.y;
  (this->cubePos).z = cubePos.z;
  this->overlapState = overlapState;
  return;
}

