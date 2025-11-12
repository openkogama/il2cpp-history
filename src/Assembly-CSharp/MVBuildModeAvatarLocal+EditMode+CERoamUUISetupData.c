
/* MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData(Vector3, Vector3) */

void Assembly-CSharp.dll::MVBuildModeAvatarLocal+EditMode+CERoamUUISetupData::
     MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData__ctor
               (MVBuildModeAvatarLocal_EditMode_CERoamUUISetupData *this,Vector3 *centerPos,
               Vector3 *lookAtPosition,MethodInfo *method)

{
  fVar1 = centerPos->y;
  fVar2 = centerPos->z;
  (this->fields).centerPos.x = centerPos->x;
  (this->fields).centerPos.y = fVar1;
  fVar1 = lookAtPosition->x;
  fVar3 = lookAtPosition->y;
  (this->fields).centerPos.z = fVar2;
  fVar2 = lookAtPosition->z;
  (this->fields).lookAtPosition.x = fVar1;
  (this->fields).lookAtPosition.y = fVar3;
  (this->fields).lookAtPosition.z = fVar2;
  return;
}

