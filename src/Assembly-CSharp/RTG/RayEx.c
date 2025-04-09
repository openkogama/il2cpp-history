
/* Ray InverseTransform(Ray, Matrix4x4) */

Ray * Assembly-CSharp.dll::RTG::RayEx::RayEx_InverseTransform
                (Ray *__return_storage_ptr__,Ray ray,Matrix4x4 transformMatrix,MethodInfo *method)

{
  func_?(&MStack_1,0,0x40);
  pMVar2 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffff68,&transformMatrix,(MethodInfo *)0x0);
  MStack_1.m00 = pMVar2->m00;
  MStack_1.m10 = pMVar2->m10;
  MStack_1.m20 = pMVar2->m20;
  MStack_1.m30 = pMVar2->m30;
  MStack_1.m01 = pMVar2->m01;
  MStack_1.m11 = pMVar2->m11;
  MStack_1.m21 = pMVar2->m21;
  MStack_1.m31 = pMVar2->m31;
  MStack_1.m02 = pMVar2->m02;
  MStack_1.m12 = pMVar2->m12;
  MStack_1.m22 = pMVar2->m22;
  MStack_1.m32 = pMVar2->m32;
  MStack_1.m03 = pMVar2->m03;
  MStack_1.m13 = pMVar2->m13;
  MStack_1.m23 = pMVar2->m23;
  MStack_1.m33 = pMVar2->m33;
  VVar3.z = ray.m_Origin.z;
  VVar3.x = ray.m_Origin.x;
  VVar3.y = ray.m_Origin.y;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     ((Vector3 *)&stack0xffffffa8,&MStack_1,VVar3,(MethodInfo *)0x0);
  uStack_5._0_4_ = pVVar4->x;
  uStack_5._4_4_ = pVVar4->y;
  fVar6 = pVVar4->z;
  vector.z = ray.m_Direction.z;
  vector.x = ray.m_Direction.x;
  vector.y = ray.m_Direction.y;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyVector
                     (&ray.m_Direction,&MStack_1,vector,(MethodInfo *)0x0);
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
  VStack_1.z = ray.m_Origin.z - mirrorPoint.z;
  uStack_2 = CONCAT44(ray.m_Origin.y - mirrorPoint.y,ray.m_Origin.x - mirrorPoint.x);
  fStack_3 = VStack_1.z;
  fVar4 = (float10)func_?(&uStack_2,0);
  fStack_5 = (float)fVar4;
  (__return_storage_ptr__->m_Origin).x = mirrorPoint.x + ray.m_Direction.x * fStack_5;
  (__return_storage_ptr__->m_Origin).y = mirrorPoint.y + ray.m_Direction.y * fStack_5;
  (__return_storage_ptr__->m_Origin).z = mirrorPoint.z + ray.m_Direction.z * fStack_5;
  VStack_1.z = (float)((uint)ray.m_Direction.z ^
                       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.y = (float)((uint)ray.m_Direction.y ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.x = (float)((uint)ray.m_Direction.x ^
                   __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  value.z = VStack_1.z;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_1,value,(MethodInfo *)0x0);
  fVar7 = pVVar6->y;
  fVar8 = pVVar6->z;
  (__return_storage_ptr__->m_Direction).x = pVVar6->x;
  (__return_storage_ptr__->m_Direction).y = fVar7;
  (__return_storage_ptr__->m_Direction).z = fVar8;
  return __return_storage_ptr__;
}

