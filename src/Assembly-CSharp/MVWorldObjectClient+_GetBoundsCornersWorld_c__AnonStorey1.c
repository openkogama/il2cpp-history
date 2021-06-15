
/* Vector3 <>m__0(Vector3) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient+<GetBoundsCornersWorld>c__AnonStorey1::
          MVWorldObjectClient_GetBoundsCornersWorld_c_AnonStorey1___m__0
                    (Vector3 *__return_storage_ptr__,
                    MVWorldObjectClient_GetBoundsCornersWorld_c_AnonStorey1 *this,
                    Vector3 localCorner,MethodInfo *method)

{
  puVar1 = (undefined8 *)
           func_?(&localCorner,&this->fields,localCorner._0_8_,localCorner.z,0);
  uVar2 = *puVar1;
  fVar3 = *(float *)(puVar1 + 1);
  __return_storage_ptr__->x = (float)(int)uVar2;
  __return_storage_ptr__->y = (float)(int)((ulonglong)uVar2 >> 0x20);
  __return_storage_ptr__->z = fVar3;
  return __return_storage_ptr__;
}

