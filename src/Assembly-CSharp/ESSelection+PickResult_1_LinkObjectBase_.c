
/* ESSelection+PickResult`1[LinkObjectBase](Vector3, VoxelHit, LinkObjectBase) */

void Assembly-CSharp.dll::ESSelection+PickResult`1[LinkObjectBase]::
     ESSelection_PickResult_1_LinkObjectBase___ctor
               (ESSelection_PickResult_1_LinkObjectBase_ *this,Vector3 mousePosition,VoxelHit hit,
               LinkObjectBase *data,MethodInfo *method)

{
  if (this != (ESSelection_PickResult_1_LinkObjectBase_ *)0x0) {
    ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
    (this->fields).mousePosition.x = mousePosition.x;
    (this->fields).mousePosition.y = mousePosition.y;
    (this->fields).mousePosition.z = mousePosition.z;
    (this->fields).hit.point.x = hit.point.x;
    (this->fields).hit.point.y = hit.point.y;
    (this->fields).hit.point.z = hit.point.z;
    (this->fields).hit.normal.x = hit.normal.x;
    (this->fields).data = data;
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
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

