
/* List`1[UnityEngine.Vector3] Calc3DHrzExtentPoints(Vector3, Single, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::TorusMath::TorusMath_Calc3DHrzExtentPoints
          (Vector3 torusCenter,float torusCoreRadius,float torusTubeRadius,Quaternion torusRotation,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,torusRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fStack_5 = pVVar1->z;
  pLStack_6 = (List_1_UnityEngine_Vector3_ *)uVar3;
  fStack_7 = (float)uVar4;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffa0,torusRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar8 = torusCoreRadius + torusTubeRadius;
  VStack_2.x = pVVar1->x;
  VStack_2.y = pVVar1->y;
  VStack_2.z = pVVar1->z;
  pLVar9 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  fStack_10 = (float)pLStack_6 * fVar8;
  fStack_11 = fStack_7 * fVar8;
  fStack_12 = fStack_5 * fVar8;
  pLStack_6 = (List_1_UnityEngine_Vector3_ *)(torusCenter.x - fStack_10);
  fStack_7 = torusCenter.y - fStack_11;
  fStack_5 = torusCenter.z - fStack_12;
  if (pLVar9 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_13 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    fVar14 = (float)pLStack_6;
    pLStack_6 = pLVar9;
    fVar15 = fStack_7;
    fStack_7 = fVar14;
    fStack_16 = fStack_5;
    fStack_5 = fVar15;
    func_?();
    fStack_17 = VStack_2.x * fVar8;
    fStack_7 = torusCenter.x + fStack_17;
    fStack_5 = torusCenter.y + VStack_2.y * fVar8;
    VStack_2.z = torusCenter.z + VStack_2.z * fVar8;
    pMStack_13 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar9;
    fStack_16 = VStack_2.z;
    func_?();
    VStack_2.z = torusCenter.z + fStack_12;
    fStack_7 = torusCenter.x + fStack_10;
    fStack_5 = torusCenter.y + fStack_11;
    pMStack_13 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar9;
    fStack_16 = VStack_2.z;
    func_?();
    VStack_2.z = torusCenter.z - fStack_16;
    fStack_7 = torusCenter.x - fStack_17;
    fStack_5 = torusCenter.y - (float)pMStack_13;
    pMStack_13 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    pLStack_6 = pLVar9;
    fStack_16 = VStack_2.z;
    func_?();
    return pLVar9;
  }
  func_?();
  pcVar18 = (code *)swi(3);
  pLVar9 = (List_1_UnityEngine_Vector3_ *)(*pcVar18)();
  return pLVar9;
}


/* AABB CalcCylAABB(Vector3, Single, Single, Single, Quaternion) */

AABB * Assembly-CSharp.dll::RTG::TorusMath::TorusMath_CalcCylAABB
                 (AABB *__return_storage_ptr__,Vector3 torusCenter,float torusCoreRadius,
                 float torusHrzRadius,float torusVertRadius,Quaternion torusRotation,
                 MethodInfo *method)

{
  fVar1 = torusCoreRadius + torusHrzRadius + torusCoreRadius + torusHrzRadius;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  fVar2 = 0.0;
  fVar3 = 0.0;
  fVar4 = 0.0;
  size.y = torusVertRadius + torusVertRadius;
  size.x = fVar1;
  size.z = fVar1;
  AABB::AABB__ctor((AABB *)&stack0xffffffd4,
                   TypeInfo__UnityEngine__Vector3->static_fields->zeroVector,size,(MethodInfo *)0x0)
  ;
  (__return_storage_ptr__->_size).x = fVar2;
  (__return_storage_ptr__->_size).y = fVar3;
  (__return_storage_ptr__->_size).z = fVar4;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pMVar5 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff94,torusCenter,torusRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->oneVector,(MethodInfo *)0x0);
  AABB::AABB_Transform(__return_storage_ptr__,*pMVar5,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* AABB CalcCylModelAABB(Single, Single, Single) */

AABB * Assembly-CSharp.dll::RTG::TorusMath::TorusMath_CalcCylModelAABB
                 (AABB *__return_storage_ptr__,float torusCoreRadius,float torusHrzRadius,
                 float torusVertRadius,MethodInfo *method)

{
  fVar1 = torusCoreRadius + torusHrzRadius + torusCoreRadius + torusHrzRadius;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  center = TypeInfo__UnityEngine__Vector3->static_fields->zeroVector;
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  (__return_storage_ptr__->_size).z = 0.0;
  (__return_storage_ptr__->_center).x = 0.0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  size.y = torusVertRadius + torusVertRadius;
  size.x = fVar1;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  size.z = fVar1;
  AABB::AABB__ctor(__return_storage_ptr__,center,size,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Single CalcSphereRadius(Single, Single) */

float Assembly-CSharp.dll::RTG::TorusMath::TorusMath_CalcSphereRadius
                (float torusCoreRadius,float torusTubeRadius,MethodInfo *method)

{
  return torusCoreRadius + torusTubeRadius;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Single, Quaternion, TorusEpsilon) */

bool Assembly-CSharp.dll::RTG::TorusMath::TorusMath_Raycast
               (Ray ray,float *t,Vector3 torusCenter,float torusCoreRadius,float torusTubeRadius,
               Quaternion torusRotation,TorusEpsilon epsilon,MethodInfo *method)

{
  fVar1 = epsilon._tubeRadiusEps + torusTubeRadius;
  fVar2 = torusCoreRadius + fVar1;
  *t = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffb8,torusRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar4 = pVVar3->x;
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  method_00 = (MethodInfo *)(torusCenter.x - fVar4 * fVar1);
  fVar7 = torusCenter.y - fVar5 * fVar1;
  uVar8 = pVVar3->x;
  uVar9 = pVVar3->y;
  fVar10 = torusCenter.x + (float)uVar8 * fVar1;
  fVar11 = torusCenter.y + (float)uVar9 * fVar1;
  ray_00.m_Direction.z = ray.m_Direction.z;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  cylinderAxisPt0.y = fVar7;
  cylinderAxisPt0.x = (float)method_00;
  cylinderAxisPt0.z = torusCenter.z - fVar6 * fVar1;
  cylinderAxisPt1_00.y = fVar11;
  cylinderAxisPt1_00.x = fVar10;
  cylinderAxisPt1_00.z = torusCenter.z + fVar6 * fVar1;
  bVar12 = CylinderMath::CylinderMath_Raycast
                     (ray_00,t,cylinderAxisPt0,cylinderAxisPt1_00,fVar2,(CylinderEpsilon)0x0,
                      method_00);
  if (bVar12 == 0) {
    return 0;
  }
  fVar1 = torusCoreRadius - fVar1;
  RStack_13.m_Direction.z = (float)&UNK_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffb8,&ray,*t,(MethodInfo *)0x0);
  uVar14 = pVVar3->x;
  uVar15 = pVVar3->y;
  fVar2 = pVVar3->z;
  value.y = fVar5;
  value.x = fVar4;
  value.z = fVar6;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffb8,value,(MethodInfo *)0x0);
  RStack_13.m_Origin.z = pVVar3->x;
  RStack_13.m_Direction.x = pVVar3->y;
  RStack_13.m_Direction.y = pVVar3->z;
  RStack_13.m_Direction.z =
       (float)((uint)(torusCenter.y * RStack_13.m_Direction.x + torusCenter.x * RStack_13.m_Origin.z
                     + torusCenter.z * RStack_13.m_Direction.y) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  puVar16 = &UNK_?;
  plane.m_Distance = RStack_13.m_Direction.z;
  plane.m_Normal = *pVVar3;
  pt.y = (float)uVar15;
  pt.x = (float)uVar14;
  pt.z = fVar2;
  fVar4 = RStack_13.m_Direction.y;
  PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xffffffb8,plane,pt,(MethodInfo *)0x0);
  fVar17 = (float10)func_?();
  if ((float)fVar17 < fVar1) {
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = ray.m_Origin.z;
    ray_01.m_Direction.x = ray.m_Direction.x;
    ray_01.m_Direction.y = ray.m_Direction.y;
    ray_01.m_Direction.z = ray.m_Direction.z;
    mirrorPoint.y = (float)uVar15;
    mirrorPoint.x = (float)uVar14;
    mirrorPoint.z = fVar2;
    pRVar18 = RayEx::RayEx_Mirror(&RStack_13,ray_01,mirrorPoint,(MethodInfo *)0x0);
    ray.m_Origin.y = fVar4;
    ray.m_Direction.z = 0.0;
    ray.m_Direction.x = 0.0;
    ray.m_Direction.y = 0.0;
    uVar19 = (pRVar18->m_Direction).z;
    uVar20 = (pRVar18->m_Origin).x;
    uVar21 = (pRVar18->m_Origin).y;
    uVar22 = (pRVar18->m_Origin).z;
    ray_02.m_Origin.z = (float)uVar22;
    ray_02.m_Origin.y = (float)uVar21;
    ray_02.m_Origin.x = (float)uVar20;
    uVar23 = (pRVar18->m_Direction).x;
    uVar24 = (pRVar18->m_Direction).y;
    ray_02.m_Direction.y = (float)uVar24;
    ray_02.m_Direction.x = (float)uVar23;
    ray_02.m_Direction.z = (float)uVar19;
    cylinderAxisPt0_00.y = fVar7;
    cylinderAxisPt0_00.x = (float)method_00;
    cylinderAxisPt0_00.z = (float)puVar16;
    cylinderAxisPt1.y = fVar11;
    cylinderAxisPt1.x = fVar10;
    cylinderAxisPt1.z = ray.m_Origin.y;
    ray.m_Origin.x = fVar11;
    ray.m_Origin.z = fVar1;
    bVar12 = CylinderMath::CylinderMath_RaycastNoCaps
                       (ray_02,t,cylinderAxisPt0_00,cylinderAxisPt1,fVar1,(CylinderEpsilon)0x0,
                        (MethodInfo *)0x0);
    if (bVar12 == 0) {
      return 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
              ((Vector3 *)&stack0xffffffb8,(Ray *)&stack0xffffff48,*t,(MethodInfo *)0x0);
    fVar17 = (float10)func_?();
    *t = (float)fVar17;
  }
  return 1;
}


/* Boolean RaycastCylindrical(Ray, Single ByRef, Vector3, Single, Single, Single, Quaternion,
   TorusEpsilon) */

bool Assembly-CSharp.dll::RTG::TorusMath::TorusMath_RaycastCylindrical
               (Ray ray,float *t,Vector3 torusCenter,float torusCoreRadius,float torusHrzRadius,
               float torusVertRadius,Quaternion torusRotation,TorusEpsilon epsilon,
               MethodInfo *method)

{
  uStack_1._4_4_ = epsilon._cylVertRadius + torusVertRadius;
  fVar2 = epsilon._cylHrzRadius + torusHrzRadius;
  fVar3 = torusCoreRadius + fVar2;
  *t = 0.0;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (&VStack_5,torusRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar6 = pVVar4->x;
  fVar7 = pVVar4->y;
  fVar8 = pVVar4->z;
  fVar9 = fVar8 * uStack_1._4_4_;
  method_01 = (MethodInfo *)(torusCenter.x - fVar6 * uStack_1._4_4_);
  fVar10 = torusCenter.y - fVar7 * uStack_1._4_4_;
  uVar11 = pVVar4->x;
  uVar12 = pVVar4->y;
  fStack_13 = torusCenter.x + (float)uVar11 * uStack_1._4_4_;
  VStack_5.z = torusCenter.z + fVar8 * uStack_1._4_4_;
  fStack_14 = torusCenter.y + (float)uVar12 * uStack_1._4_4_;
  uStack_1 = 0;
  ray_00.m_Direction.z = ray.m_Direction.z;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  cylinderAxisPt0.y = fVar10;
  cylinderAxisPt0.x = (float)method_01;
  cylinderAxisPt0.z = torusCenter.z - fVar9;
  cylinderAxisPt1_00.y = fStack_14;
  cylinderAxisPt1_00.x = fStack_13;
  cylinderAxisPt1_00.z = VStack_5.z;
  bVar15 = CylinderMath::CylinderMath_Raycast
                     (ray_00,t,cylinderAxisPt0,cylinderAxisPt1_00,fVar3,(CylinderEpsilon)0x0,
                      method_01);
  if (bVar15 == 0) {
    return 0;
  }
  fVar2 = torusCoreRadius - fVar2;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffe0,&ray,*t,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)pVVar4->y;
  fVar9 = pVVar4->z;
  puVar16 = &UNK_?;
  value.y = fVar7;
  value.x = fVar6;
  value.z = fVar8;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffb8,value,method_00);
  uVar17 = pVVar4->x;
  fVar3 = pVVar4->y;
  fVar6 = pVVar4->z;
  auVar18._4_4_ = fVar6;
  auVar18._0_4_ = fVar3;
  auVar18._8_4_ =
       (uint)(torusCenter.y * fVar3 + torusCenter.x * (float)uVar17 + torusCenter.z * fVar6) ^
       __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  auVar18._12_4_ = 0;
  pt.y = (float)method_00;
  pt.x = fVar8;
  pt.z = fVar9;
  PlaneEx::PlaneEx_ProjectPoint
            ((Vector3 *)&stack0xffffffb8,(Plane)(auVar18 << 0x20),pt,(MethodInfo *)0x0);
  fVar19 = (float10)func_?();
  if ((float)fVar19 < fVar2) {
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = ray.m_Origin.z;
    ray_01.m_Direction.x = ray.m_Direction.x;
    ray_01.m_Direction.y = ray.m_Direction.y;
    ray_01.m_Direction.z = ray.m_Direction.z;
    mirrorPoint.y = fVar6;
    mirrorPoint.x = fVar3;
    mirrorPoint.z = fVar9;
    pRVar20 = RayEx::RayEx_Mirror((Ray *)&stack0xffffffd8,ray_01,mirrorPoint,(MethodInfo *)0x0);
    ray.m_Direction.z = 0.0;
    ray.m_Direction.x = 0.0;
    ray.m_Direction.y = 0.0;
    ray.m_Origin.x = fStack_14;
    ray.m_Origin.y = VStack_5.z;
    uVar21 = (pRVar20->m_Direction).z;
    uVar22 = (pRVar20->m_Origin).x;
    uVar23 = (pRVar20->m_Origin).y;
    uVar24 = (pRVar20->m_Origin).z;
    ray_02.m_Origin.z = (float)uVar24;
    ray_02.m_Origin.y = (float)uVar23;
    ray_02.m_Origin.x = (float)uVar22;
    uVar25 = (pRVar20->m_Direction).x;
    uVar26 = (pRVar20->m_Direction).y;
    ray_02.m_Direction.y = (float)uVar26;
    ray_02.m_Direction.x = (float)uVar25;
    ray_02.m_Direction.z = (float)uVar21;
    cylinderAxisPt0_00.y = fVar10;
    cylinderAxisPt0_00.x = (float)method_01;
    cylinderAxisPt0_00.z = (float)puVar16;
    cylinderAxisPt1.y = fStack_14;
    cylinderAxisPt1.x = fStack_13;
    cylinderAxisPt1.z = VStack_5.z;
    ray.m_Origin.z = fVar2;
    bVar15 = CylinderMath::CylinderMath_RaycastNoCaps
                       (ray_02,t,cylinderAxisPt0_00,cylinderAxisPt1,fVar2,(CylinderEpsilon)0x0,
                        (MethodInfo *)0x0);
    if (bVar15 == 0) {
      return 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
              ((Vector3 *)&stack0xffffff98,(Ray *)&stack0xffffff48,*t,(MethodInfo *)0x0);
    fVar19 = (float10)func_?();
    *t = (float)fVar19;
  }
  return 1;
}

