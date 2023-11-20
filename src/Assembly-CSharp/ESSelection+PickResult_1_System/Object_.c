
/* ESSelection+PickResult`1[System.Object](Vector3, VoxelHit, Object) */

void Assembly-CSharp.dll::ESSelection+PickResult`1[System::Object]::
     ESSelection_PickResult_1_System_Object___ctor
               (ESSelection_PickResult_1_System_Object_ *this,Vector3 mousePosition,VoxelHit hit,
               Object *data,MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_55
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields).mousePosition.x = mousePosition.x;
  (this->fields).mousePosition.y = mousePosition.y;
  (this->fields).mousePosition.z = mousePosition.z;
  (this->fields).hit.point.x = hit.point.x;
  (this->fields).hit.point.y = hit.point.y;
  (this->fields).hit.point.z = hit.point.z;
  (this->fields).hit.normal.x = hit.normal.x;
  (this->fields).hit.normal.y = hit.normal.y;
  (this->fields).hit.normal.z = hit.normal.z;
  (this->fields).hit.cubePos.x = hit.cubePos.x;
  (this->fields).hit.cubePos.y = hit.cubePos.y;
  *(undefined4 *)&(this->fields).hit.cubePos.z = hit._28_4_;
  (this->fields).hit.face = hit.face;
  (this->fields).hit.isCubeHit = hit.isCubeHit;
  *(undefined3 *)&(this->fields).hit.field_0x25 = hit._37_3_;
  (this->fields).hit.woId = hit.woId;
  (this->fields).hit.cube = hit.cube;
  (this->fields).hit.distance = hit.distance;
  (this->fields).hit.collider = hit.collider;
  (this->fields).hit.transform = hit.transform;
  *(undefined4 *)&(this->fields).hit.field_0x3c = hit._60_4_;
  (this->fields).hit.interactionFlags = hit.interactionFlags;
  func_?(&(this->fields).hit.cube,0);
  (this->fields).data = data;
  func_?(&(this->fields).data,data);
  return;
}

