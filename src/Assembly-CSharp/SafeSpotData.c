
/* SafeSpotData(Vector3, Quaternion, Vector3, Quaternion) */

void Assembly-CSharp.dll::SafeSpotData::SafeSpotData__ctor
               (SafeSpotData *this,Vector3 pos,Quaternion rot,Vector3 camPos,Quaternion camRot,
               MethodInfo *method)

{
  (this->Position).x = pos.x;
  (this->Position).y = pos.y;
  (this->Position).z = pos.z;
  (this->Rotation).x = rot.x;
  (this->Rotation).y = rot.y;
  (this->Rotation).z = rot.z;
  (this->Rotation).w = rot.w;
  (this->CameraPosition).x = camPos.x;
  (this->CameraPosition).y = camPos.y;
  (this->CameraPosition).z = camPos.z;
  (this->CameraRotation).x = camRot.x;
  (this->CameraRotation).y = camRot.y;
  (this->CameraRotation).z = camRot.z;
  (this->CameraRotation).w = camRot.w;
  return;
}

