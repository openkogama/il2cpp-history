
/* Vector3 <GetBoundsCornersWorld>b__0(Vector3) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient+<>c__DisplayClass164_0::
          MVWorldObjectClient_c_DisplayClass164_0__GetBoundsCornersWorld_b__0
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient_c_DisplayClass164_0 *this,
                    Vector3 localCorner,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&localCorner,&(this->fields).localToWorld,localCorner,(MethodInfo *)0x0);
  fVar2 = pVVar1->y;
  fVar3 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar2;
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}

