
/* Vector3 <GetBoundsCornersWorld>b__0(Vector3) */

Vector3 * Assembly-CSharp.dll::MVWorldObjectClient+<>c__DisplayClass166_0::
          MVWorldObjectClient_c_DisplayClass166_0__GetBoundsCornersWorld_b__0
                    (Vector3 *__return_storage_ptr__,MVWorldObjectClient_c_DisplayClass166_0 *this,
                    Vector3 *localCorner,MethodInfo *method)

{
  fVar1 = localCorner->z;
  uVar2 = localCorner->x;
  uVar3 = localCorner->y;
  fVar4 = (this->fields).localToWorld.m11;
  fVar5 = (this->fields).localToWorld.m21;
  fVar6 = (this->fields).localToWorld.m10;
  fVar7 = (this->fields).localToWorld.m12;
  fVar8 = (this->fields).localToWorld.m20;
  fVar9 = (this->fields).localToWorld.m22;
  fVar10 = (this->fields).localToWorld.m13;
  fVar11 = (this->fields).localToWorld.m23;
  fVar12 = _UNK_? /
           ((float)uVar3 * (this->fields).localToWorld.m31 +
            (float)uVar2 * (this->fields).localToWorld.m30 +
            fVar1 * (this->fields).localToWorld.m32 + (this->fields).localToWorld.m33);
  __return_storage_ptr__->x =
       fVar12 * ((float)uVar3 * (this->fields).localToWorld.m01 +
                 (float)uVar2 * (this->fields).localToWorld.m00 +
                 fVar1 * (this->fields).localToWorld.m02 + (this->fields).localToWorld.m03);
  __return_storage_ptr__->y =
       fVar12 * ((float)uVar3 * fVar4 + (float)uVar2 * fVar6 + fVar1 * fVar7 + fVar10);
  __return_storage_ptr__->z =
       fVar12 * ((float)uVar3 * fVar5 + (float)uVar2 * fVar8 + fVar1 * fVar9 + fVar11);
  return __return_storage_ptr__;
}

