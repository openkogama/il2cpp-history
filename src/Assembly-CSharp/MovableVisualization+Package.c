
/* MovableVisualization+Package(Vector3, Quaternion) */

void Assembly-CSharp.dll::MovableVisualization+Package::MovableVisualization_Package__ctor
               (MovableVisualization_Package *this,Vector3 *position,Quaternion *rotation,
               MethodInfo *method)

{
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar2 = func_?(&UNK_?);
    FUN_?(uVar2,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  fVar3 = (float)(*pcRam_?)();
  fVar4 = position->z;
  (this->fields).time = fVar3;
  fVar3 = position->y;
  (this->fields).position.x = position->x;
  (this->fields).position.y = fVar3;
  fVar3 = rotation->x;
  fVar5 = rotation->y;
  fVar6 = rotation->z;
  fVar7 = rotation->w;
  (this->fields).position.z = fVar4;
  (this->fields).rotation.x = fVar3;
  (this->fields).rotation.y = fVar5;
  (this->fields).rotation.z = fVar6;
  (this->fields).rotation.w = fVar7;
  return;
}

