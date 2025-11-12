
/* Void Update(Vector3) */

void Assembly-CSharp.dll::RTG::InputDeviceDeltaCapture::InputDeviceDeltaCapture_Update
               (InputDeviceDeltaCapture *this,Vector3 *devicePosition,MethodInfo *method)

{
  uVar1 = (this->fields)._origin.x;
  uVar2 = (this->fields)._origin.y;
  uVar3 = devicePosition->x;
  fVar4 = devicePosition->y;
  fVar5 = devicePosition->z;
  fVar6 = (this->fields)._origin.z;
  (this->fields)._delta.x = (float)uVar3 - (float)uVar1;
  (this->fields)._delta.y = fVar4 - (float)uVar2;
  (this->fields)._delta.z = fVar5 - fVar6;
  return;
}


/* InputDeviceDeltaCapture(Int32, Vector3) */

void Assembly-CSharp.dll::RTG::InputDeviceDeltaCapture::InputDeviceDeltaCapture__ctor
               (InputDeviceDeltaCapture *this,int32_t id,Vector3 *origin,MethodInfo *method)

{
  fVar1 = origin->y;
  fVar2 = origin->z;
  (this->fields)._origin.x = origin->x;
  (this->fields)._origin.y = fVar1;
  (this->fields)._origin.z = fVar2;
  (this->fields)._id = id;
  return;
}

