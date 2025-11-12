
/* ObjectSurfaceSnap+SnapResult(Plane, Vector3) */

void Assembly-CSharp.dll::RTG::ObjectSurfaceSnap+SnapResult::ObjectSurfaceSnap_SnapResult__ctor
               (ObjectSurfaceSnap_SnapResult *this,Plane *sittingPlane,Vector3 *sittingPoint,
               MethodInfo *method)

{
  fVar1 = (sittingPlane->m_Normal).x;
  fVar2 = (sittingPlane->m_Normal).y;
  uVar3 = *(undefined8 *)&(sittingPlane->m_Normal).z;
  fVar4 = sittingPoint->z;
  this->Success = 1;
  (this->SittingPlane).m_Normal.x = fVar1;
  (this->SittingPlane).m_Normal.y = fVar2;
  *(undefined8 *)&(this->SittingPlane).m_Normal.z = uVar3;
  fVar1 = sittingPoint->y;
  (this->SittingPoint).x = sittingPoint->x;
  (this->SittingPoint).y = fVar1;
  (this->SittingPoint).z = fVar4;
  return;
}

