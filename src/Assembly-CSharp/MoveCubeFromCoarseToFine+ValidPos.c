
/* MoveCubeFromCoarseToFine+ValidPos(Boolean, Vector3) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine+ValidPos::MoveCubeFromCoarseToFine_ValidPos__ctor
               (MoveCubeFromCoarseToFine_ValidPos *this,bool valid,Vector3 pos,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).valid = valid;
  (this->fields).pos.x = pos.x;
  (this->fields).pos.y = pos.y;
  (this->fields).pos.z = pos.z;
  return;
}

