
/* Void Update(Vector3) */

void Assembly-CSharp.dll::RTG::InputDeviceDeltaCapture::InputDeviceDeltaCapture_Update
               (InputDeviceDeltaCapture *this,Vector3 devicePosition,MethodInfo *method)

{
  uVar1 = (this->fields)._origin.x;
  uVar2 = (this->fields)._origin.y;
  fVar3 = (this->fields)._origin.z;
  (this->fields)._delta.x = devicePosition.x - (float)uVar1;
  (this->fields)._delta.y = devicePosition.y - (float)uVar2;
  (this->fields)._delta.z = devicePosition.z - fVar3;
  return;
}


/* InputDeviceDeltaCapture(Int32, Vector3) */

void Assembly-CSharp.dll::RTG::InputDeviceDeltaCapture::InputDeviceDeltaCapture__ctor
               (InputDeviceDeltaCapture *this,int32_t id,Vector3 origin,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._id = id;
  (this->fields)._origin.x = origin.x;
  (this->fields)._origin.y = origin.y;
  (this->fields)._origin.z = origin.z;
  return;
}

