
/* CameraFocus+Data(Vector3, Vector3) */

void Assembly-CSharp.dll::RTG::CameraFocus+Data::CameraFocus_Data__ctor
               (CameraFocus_Data *this,Vector3 *cameraWorldPosition,Vector3 *focusPoint,
               MethodInfo *method)

{
  fVar1 = cameraWorldPosition->y;
  fVar2 = cameraWorldPosition->z;
  (this->fields)._cameraWorldPosition.x = cameraWorldPosition->x;
  (this->fields)._cameraWorldPosition.y = fVar1;
  uVar3 = focusPoint->x;
  uVar4 = focusPoint->y;
  (this->fields)._focusPoint.x = (float)uVar3;
  (this->fields)._focusPoint.y = (float)uVar4;
  uVar5 = cameraWorldPosition->x;
  uVar6 = cameraWorldPosition->y;
  (this->fields)._cameraWorldPosition.z = fVar2;
  fStack_7 = cameraWorldPosition->z - focusPoint->z;
  (this->fields)._focusPoint.z = focusPoint->z;
  uStack_8 = CONCAT44((float)uVar6 - (float)uVar4,(float)uVar5 - (float)uVar3);
  fVar2 = (float)FUN_?(&uStack_8);
  (this->fields)._focusPointOffset = fVar2;
  return;
}

