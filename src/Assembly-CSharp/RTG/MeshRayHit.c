
/* MeshRayHit(Ray, Int32, Single, Vector3) */

void Assembly-CSharp.dll::RTG::MeshRayHit::MeshRayHit__ctor
               (MeshRayHit *this,Ray ray,int32_t hitTriangleIndex,float hitEnter,Vector3 hitNormal,
               MethodInfo *method)

{
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,unaff_ESI);
  (this->fields)._hitTriangleIndex = hitTriangleIndex;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                     ((Vector3 *)&stack0xfffffff0,&ray,hitEnter,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields)._hitPoint.x = pVVar1->x;
  (this->fields)._hitPoint.y = fVar2;
  (this->fields)._hitEnter = hitEnter;
  (this->fields)._hitPoint.z = fVar3;
  value.z = hitNormal.z;
  value.x = hitNormal.x;
  value.y = hitNormal.y;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&hitNormal,value,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  (this->fields)._hitNormal.x = pVVar1->x;
  (this->fields)._hitNormal.y = fVar2;
  (this->fields)._hitNormal.z = fVar3;
  return;
}

