
/* Ray InverseTransform(Ray, Matrix4x4) */

Ray * Assembly-CSharp.dll::RTG::RayEx::RayEx_InverseTransform
                (Ray *__return_storage_ptr__,Ray ray,Matrix4x4 transformMatrix,MethodInfo *method)

{
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffff68,&transformMatrix,(MethodInfo *)0x0);
  MStack_2.m00 = pMVar1->m00;
  MStack_2.m10 = pMVar1->m10;
  MStack_2.m20 = pMVar1->m20;
  MStack_2.m30 = pMVar1->m30;
  MStack_2.m01 = pMVar1->m01;
  MStack_2.m11 = pMVar1->m11;
  MStack_2.m21 = pMVar1->m21;
  MStack_2.m31 = pMVar1->m31;
  MStack_2.m02 = pMVar1->m02;
  MStack_2.m12 = pMVar1->m12;
  MStack_2.m22 = pMVar1->m22;
  MStack_2.m32 = pMVar1->m32;
  MStack_2.m03 = pMVar1->m03;
  MStack_2.m13 = pMVar1->m13;
  MStack_2.m23 = pMVar1->m23;
  MStack_2.m33 = pMVar1->m33;
  VVar3.z = ray.m_Origin.z;
  VVar3.x = ray.m_Origin.x;
  VVar3.y = ray.m_Origin.y;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     ((Vector3 *)&stack0xffffffa8,&MStack_2,VVar3,(MethodInfo *)0x0);
  uStack_5._0_4_ = pVVar4->x;
  uStack_5._4_4_ = pVVar4->y;
  fVar6 = pVVar4->z;
  vector.z = ray.m_Direction.z;
  vector.x = ray.m_Direction.x;
  vector.y = ray.m_Direction.y;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     (&ray.m_Direction,&MStack_2,vector,(MethodInfo *)0x0);
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&ray.m_Direction,*pVVar4,(MethodInfo *)0x0);
  (__return_storage_ptr__->m_Direction).x = 0.0;
  (__return_storage_ptr__->m_Direction).y = 0.0;
  (__return_storage_ptr__->m_Direction).z = 0.0;
  (__return_storage_ptr__->m_Origin).x = (float)(undefined4)uStack_5;
  (__return_storage_ptr__->m_Origin).y = (float)uStack_5._4_4_;
  VVar3 = *pVVar4;
  (__return_storage_ptr__->m_Origin).z = fVar6;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&ray.m_Direction,VVar3,(MethodInfo *)0x0);
  fVar7 = pVVar4->y;
  fVar6 = pVVar4->z;
  (__return_storage_ptr__->m_Direction).x = pVVar4->x;
  (__return_storage_ptr__->m_Direction).y = fVar7;
  (__return_storage_ptr__->m_Direction).z = fVar6;
  return __return_storage_ptr__;
}


/* Ray Mirror(Ray, Vector3) */

Ray * Assembly-CSharp.dll::RTG::RayEx::RayEx_Mirror
                (Ray *__return_storage_ptr__,Ray ray,Vector3 mirrorPoint,MethodInfo *method)

{
  (__return_storage_ptr__->m_Origin).x = ray.m_Origin.x;
  (__return_storage_ptr__->m_Origin).y = ray.m_Origin.y;
  (__return_storage_ptr__->m_Origin).z = ray.m_Origin.z;
  (__return_storage_ptr__->m_Direction).x = ray.m_Direction.x;
  (__return_storage_ptr__->m_Direction).y = (float)(int)ray.m_Direction._4_8_;
  (__return_storage_ptr__->m_Direction).z = (float)(int)((ulonglong)ray.m_Direction._4_8_ >> 0x20);
  fStack_1 = mirrorPoint.x;
  uStack_2 = 0;
  uStack_3 = 0;
  uStack_4 = 0;
  VStack_5.x = ray.m_Origin.y - mirrorPoint.y;
  fStack_6 = ray.m_Origin.z - mirrorPoint.z;
  VStack_5.y = ray.m_Origin.y;
  VStack_5.z = ray.m_Origin.y;
  fStack_7 = ray.m_Origin.y;
  fStack_8 = ray.m_Origin.z;
  fStack_9 = ray.m_Origin.z;
  fStack_10 = ray.m_Origin.z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar11 = (double)((ray.m_Origin.x - mirrorPoint.x) * (ray.m_Origin.x - mirrorPoint.x) +
                   VStack_5.x * VStack_5.x + fStack_6 * fStack_6);
  if (dVar11 < 0.0) {
    func_?();
  }
  else {
    dVar11 = SQRT(dVar11);
  }
  fVar12 = (float)dVar11;
  (__return_storage_ptr__->m_Origin).x = fStack_1 + ray.m_Direction.x * fVar12;
  (__return_storage_ptr__->m_Origin).y = mirrorPoint.y + ray.m_Direction.y * fVar12;
  (__return_storage_ptr__->m_Origin).z = mirrorPoint.z + ray.m_Direction.z * fVar12;
  VStack_5.z = (float)((uint)ray.m_Direction.z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.y = (float)((uint)ray.m_Direction.y ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.x = (float)((uint)ray.m_Direction.x ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.z = VStack_5.z;
  pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_5,value,(MethodInfo *)0x0);
  fVar14 = pVVar13->y;
  fVar12 = pVVar13->z;
  (__return_storage_ptr__->m_Direction).x = pVVar13->x;
  (__return_storage_ptr__->m_Direction).y = fVar14;
  (__return_storage_ptr__->m_Direction).z = fVar12;
  return __return_storage_ptr__;
}

