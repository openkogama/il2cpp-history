
/* SafeSpotData(Vector3, Quaternion, Vector3, Quaternion) */

void Assembly-CSharp.dll::SafeSpotData::SafeSpotData__ctor
               (SafeSpotData *this,Vector3 pos,Quaternion rot,Vector3 camPos,Quaternion camRot,
               MethodInfo *method)

{
  *(undefined8 *)&(this->Position).z = pos._0_8_;
  (this->Rotation).y = pos.z;
  (this->Rotation).z = rot.x;
  (this->Rotation).w = rot.y;
  (this->CameraPosition).x = rot.z;
  (this->CameraPosition).y = rot.w;
  *(undefined8 *)&(this->CameraPosition).z = camPos._0_8_;
  (this->CameraRotation).y = camPos.z;
  (this->CameraRotation).z = camRot.x;
  (this->CameraRotation).w = camRot.y;
  this[1].Position.x = camRot.z;
  this[1].Position.y = camRot.w;
  return;
}

