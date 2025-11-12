
/* SafeSpotData(Vector3, Quaternion, Vector3, Quaternion) */

void Assembly-CSharp.dll::SafeSpotData::SafeSpotData__ctor
               (SafeSpotData *this,Vector3 *pos,Quaternion *rot,Vector3 *camPos,Quaternion *camRot,
               MethodInfo *method)

{
  fVar1 = pos->z;
  fVar2 = pos->y;
  (this->Position).x = pos->x;
  (this->Position).y = fVar2;
  fVar2 = rot->x;
  fVar3 = rot->y;
  fVar4 = rot->z;
  fVar5 = rot->w;
  (this->Position).z = fVar1;
  fVar1 = camPos->z;
  (this->Rotation).x = fVar2;
  (this->Rotation).y = fVar3;
  (this->Rotation).z = fVar4;
  (this->Rotation).w = fVar5;
  fVar2 = camPos->y;
  (this->CameraPosition).x = camPos->x;
  (this->CameraPosition).y = fVar2;
  (this->CameraPosition).z = fVar1;
  fVar1 = camRot->y;
  fVar2 = camRot->z;
  fVar3 = camRot->w;
  (this->CameraRotation).x = camRot->x;
  (this->CameraRotation).y = fVar1;
  (this->CameraRotation).z = fVar2;
  (this->CameraRotation).w = fVar3;
  return;
}

