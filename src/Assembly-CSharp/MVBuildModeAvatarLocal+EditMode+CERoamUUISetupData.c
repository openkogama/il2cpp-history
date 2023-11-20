
/* MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData(Vector3, Vector3) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData::
     MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData__ctor
               (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *this,Vector3 centerPos,
               Vector3 lookAtPosition,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).centerPos.x = centerPos.x;
  (this->fields).centerPos.y = centerPos.y;
  (this->fields).centerPos.z = centerPos.z;
  (this->fields).lookAtPosition.x = lookAtPosition.x;
  (this->fields).lookAtPosition.y = lookAtPosition.y;
  (this->fields).lookAtPosition.z = lookAtPosition.z;
  return;
}

