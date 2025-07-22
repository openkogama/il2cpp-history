
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
  pMStack_5 = (MethodInfo *)pVVar1->z;
  fStack_6 = (float)uVar3;
  fStack_7 = (float)uVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,torusRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar8 = torusCoreRadius + torusTubeRadius;
  uStack_9._0_4_ = (undefined *)pVVar1->x;
  uStack_9._4_4_ = (List_1_UnityEngine_Vector3_ *)pVVar1->y;
  fStack_10 = pVVar1->z;
  pLVar11 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar11,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  VStack_2.x = torusCenter.x - fStack_6 * fVar8;
  VStack_2.y = torusCenter.y - fStack_7 * fVar8;
  VStack_2.z = torusCenter.z - (float)pMStack_5 * fVar8;
  if (pLVar11 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_9._0_4_ = &UNK_?;
    fStack_10 = VStack_2.x;
    fStack_6 = VStack_2.y;
    fStack_7 = VStack_2.z;
    uStack_9._4_4_ = pLVar11;
    func_?();
    VStack_2.z = fStack_10 * fVar8;
    fStack_10 = torusCenter.x + (float)(undefined *)uStack_9 * fVar8;
    fStack_6 = torusCenter.y + (float)uStack_9._4_4_ * fVar8;
    VStack_2.z = torusCenter.z + VStack_2.z;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_9 = CONCAT44(pLVar11,&UNK_?);
    fStack_7 = VStack_2.z;
    func_?();
    VStack_2.z = torusCenter.z + (float)pMStack_5 * fVar8;
    fStack_10 = torusCenter.x + fStack_6 * fVar8;
    fStack_6 = torusCenter.y + fStack_7 * fVar8;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_9._0_4_ = &UNK_?;
    fStack_7 = VStack_2.z;
    uStack_9._4_4_ = pLVar11;
    func_?();
    VStack_2.z = fStack_10 * fVar8;
    fStack_10 = torusCenter.x - (float)(undefined *)uStack_9 * fVar8;
    fStack_6 = torusCenter.y - (float)uStack_9._4_4_ * fVar8;
    VStack_2.z = torusCenter.z - VStack_2.z;
    pMStack_5 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_9 = CONCAT44(pLVar11,&UNK_?);
    fStack_7 = VStack_2.z;
    func_?();
    return pLVar11;
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pLVar11 = (List_1_UnityEngine_Vector3_ *)(*pcVar12)();
  return pLVar11;
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
  RStack_1.m_Origin.x = 0.0;
  RStack_1.m_Origin.y = 0.0;
  RStack_1.m_Origin.z = 0.0;
  RStack_1.m_Direction.x = 0.0;
  RStack_1.m_Direction.y = 0.0;
  RStack_1.m_Direction.z = 0.0;
  fVar2 = epsilon._tubeRadiusEps + torusTubeRadius;
  *t = 0.0;
  cylinderRadius = torusCoreRadius + fVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffa8,torusRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar4 = pVVar3->x;
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  uVar7 = pVVar3->x;
  uVar8 = pVVar3->y;
  method_00 = (MethodInfo *)(torusCenter.x + (float)uVar7 * fVar2);
  fVar9 = torusCenter.y + (float)uVar8 * fVar2;
  fVar10 = torusCenter.z + fVar6 * fVar2;
  fVar11 = 0.0;
  fVar12 = 0.0;
  cylinderAxisPt1.y = fVar9;
  cylinderAxisPt1.x = (float)method_00;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  cylinderAxisPt0.y = torusCenter.y - fVar5 * fVar2;
  cylinderAxisPt0.x = torusCenter.x - fVar4 * fVar2;
  cylinderAxisPt0.z = torusCenter.z - fVar6 * fVar2;
  cylinderAxisPt1.z = fVar10;
  bVar13 = CylinderMath::CylinderMath_Raycast
                     (ray_00,t,cylinderAxisPt0,cylinderAxisPt1,cylinderRadius,(CylinderEpsilon)0x0,
                      method_00);
  if (bVar13 == 0) {
    return 0;
  }
  uStack_14._4_4_ = (float)&UNK_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffa8,&ray,*t,(MethodInfo *)0x0);
  uVar15 = pVVar3->y;
  fVar16 = pVVar3->z;
  uStack_14._0_4_ = 0.0;
  uStack_14._4_4_ = 0.0;
  value.y = fVar5;
  value.x = fVar4;
  value.z = fVar6;
  pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffa8,value,(MethodInfo *)0x0);
  uStack_14._0_4_ = pVVar17->x;
  uStack_14._4_4_ = pVVar17->y;
  fVar4 = pVVar17->z;
  pVVar3 = (Vector3 *)&stack0xffffffa8;
  plane.m_Distance =
       (float)((uint)(torusCenter.y * uStack_14._4_4_ + torusCenter.x * (float)uStack_14 +
                     torusCenter.z * fVar4) ^
              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  plane.m_Normal = *pVVar17;
  auVar18._4_4_ = fVar16;
  auVar18._0_4_ = uVar15;
  auVar18._8_4_ = 0;
  PlaneEx::PlaneEx_ProjectPoint(pVVar3,plane,(Vector3)(auVar18 << 0x20),(MethodInfo *)0x0);
  uVar19 = 0;
  fVar20 = (float10)func_?();
  if ((float)fVar20 < torusCoreRadius - fVar2) {
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = ray.m_Origin.z;
    ray_01.m_Direction.x = ray.m_Direction.x;
    ray_01.m_Direction.y = ray.m_Direction.y;
    ray_01.m_Direction.z = ray.m_Direction.z;
    mirrorPoint.y = (float)uVar15;
    mirrorPoint.x = (float)uVar19;
    mirrorPoint.z = fVar16;
    pRVar21 = RayEx::RayEx_Mirror((Ray *)&stack0xffffff78,ray_01,mirrorPoint,(MethodInfo *)0x0);
    ray.m_Origin.x = fVar12;
    ray.m_Origin.y = 0.0;
    RStack_1.m_Origin.x = (pRVar21->m_Origin).x;
    RStack_1.m_Origin.y = (pRVar21->m_Origin).y;
    RStack_1.m_Origin.z = (pRVar21->m_Origin).z;
    RStack_1.m_Direction.x = (pRVar21->m_Direction).x;
    RStack_1.m_Direction.y = (pRVar21->m_Direction).y;
    RStack_1.m_Direction.z = (pRVar21->m_Direction).z;
    uVar22 = (pRVar21->m_Direction).z;
    uVar23 = (pRVar21->m_Origin).x;
    uVar24 = (pRVar21->m_Origin).y;
    uVar25 = (pRVar21->m_Origin).z;
    ray_02.m_Origin.z = (float)uVar25;
    ray_02.m_Origin.y = (float)uVar24;
    ray_02.m_Origin.x = (float)uVar23;
    uVar26 = (pRVar21->m_Direction).x;
    uVar27 = (pRVar21->m_Direction).y;
    ray_02.m_Direction.y = (float)uVar27;
    ray_02.m_Direction.x = (float)uVar26;
    ray_02.m_Direction.z = (float)uVar22;
    cylinderAxisPt0_00.y = cylinderRadius;
    cylinderAxisPt0_00.x = fVar10;
    cylinderAxisPt0_00.z = (float)pVVar3;
    cylinderAxisPt1_00.y = fVar9;
    cylinderAxisPt1_00.x = (float)method_00;
    cylinderAxisPt1_00.z = fVar4;
    epsilon_00._vertEps = ray.m_Origin.x;
    epsilon_00._hrzEps = fVar11;
    bVar13 = CylinderMath::CylinderMath_RaycastNoCaps
                       (ray_02,t,cylinderAxisPt0_00,cylinderAxisPt1_00,torusCoreRadius - fVar2,
                        epsilon_00,(MethodInfo *)0x0);
    if (bVar13 == 0) {
      return 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
              ((Vector3 *)&stack0xffffffa8,&RStack_1,*t,(MethodInfo *)0x0);
    fVar20 = (float10)func_?();
    *t = (float)fVar20;
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
  fVar1 = epsilon._cylVertRadius + torusVertRadius;
  RStack_2.m_Origin.x = 0.0;
  RStack_2.m_Origin.y = 0.0;
  RStack_2.m_Origin.z = 0.0;
  RStack_2.m_Direction.x = 0.0;
  RStack_2.m_Direction.y = 0.0;
  RStack_2.m_Direction.z = 0.0;
  fVar3 = epsilon._cylHrzRadius + torusHrzRadius;
  *t = 0.0;
  cylinderRadius = torusCoreRadius + fVar3;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffff88,torusRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  fVar5 = pVVar4->x;
  fVar6 = pVVar4->y;
  fVar7 = pVVar4->z;
  uVar8 = pVVar4->x;
  uVar9 = pVVar4->y;
  method_00 = (MethodInfo *)(torusCenter.x + (float)uVar8 * fVar1);
  fVar10 = torusCenter.y + (float)uVar9 * fVar1;
  fVar11 = torusCenter.z + fVar7 * fVar1;
  fVar12 = 0.0;
  fVar13 = 0.0;
  cylinderAxisPt1.y = fVar10;
  cylinderAxisPt1.x = (float)method_00;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Direction.z = ray.m_Direction.z;
  cylinderAxisPt0.y = torusCenter.y - fVar6 * fVar1;
  cylinderAxisPt0.x = torusCenter.x - fVar5 * fVar1;
  cylinderAxisPt0.z = torusCenter.z - fVar7 * fVar1;
  cylinderAxisPt1.z = fVar11;
  bVar14 = CylinderMath::CylinderMath_Raycast
                     (ray_00,t,cylinderAxisPt0,cylinderAxisPt1,cylinderRadius,(CylinderEpsilon)0x0,
                      method_00);
  if (bVar14 == 0) {
    return 0;
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                      ((Vector3 *)&stack0xffffffe0,&ray,*t,(MethodInfo *)0x0);
  uVar15 = pVVar4->x;
  uVar16 = pVVar4->y;
  fVar17 = pVVar4->z;
  value.y = fVar6;
  value.x = fVar5;
  value.z = fVar7;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                      ((Vector3 *)&stack0xffffffb0,value,(MethodInfo *)0x0);
  uVar18 = pVVar4->x;
  fVar1 = pVVar4->y;
  plane.m_Distance =
       (float)((uint)(torusCenter.y * fVar1 + torusCenter.x * (float)uVar18 +
                     torusCenter.z * pVVar4->z) ^
              __074CDE7ED9B4DD51ACEEEE1729962EC36F0ADC004BF728B1521333CB241590DE_Field);
  plane.m_Normal = *pVVar4;
  pt.y = (float)uVar16;
  pt.x = (float)uVar15;
  pt.z = fVar17;
  PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xffffffb0,plane,pt,(MethodInfo *)0x0);
  fVar19 = (float10)func_?();
  if ((float)fVar19 < torusCoreRadius - fVar3) {
    puVar20 = &UNK_?;
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = ray.m_Origin.z;
    ray_01.m_Direction.x = ray.m_Direction.x;
    ray_01.m_Direction.y = ray.m_Direction.y;
    ray_01.m_Direction.z = ray.m_Direction.z;
    mirrorPoint.y = (float)uVar16;
    mirrorPoint.x = (float)uVar15;
    mirrorPoint.z = fVar17;
    pRVar21 = RayEx::RayEx_Mirror((Ray *)&stack0xffffff70,ray_01,mirrorPoint,(MethodInfo *)0x0);
    RStack_2.m_Origin.x = (pRVar21->m_Origin).x;
    RStack_2.m_Origin.y = (pRVar21->m_Origin).y;
    RStack_2.m_Origin.z = (pRVar21->m_Origin).z;
    RStack_2.m_Direction.x = (pRVar21->m_Direction).x;
    RStack_2.m_Direction.y = (pRVar21->m_Direction).y;
    RStack_2.m_Direction.z = (pRVar21->m_Direction).z;
    uVar22 = (pRVar21->m_Direction).z;
    uVar23 = (pRVar21->m_Origin).x;
    uVar24 = (pRVar21->m_Origin).y;
    uVar25 = (pRVar21->m_Origin).z;
    ray_02.m_Origin.z = (float)uVar25;
    ray_02.m_Origin.y = (float)uVar24;
    ray_02.m_Origin.x = (float)uVar23;
    uVar26 = (pRVar21->m_Direction).x;
    uVar27 = (pRVar21->m_Direction).y;
    ray_02.m_Direction.y = (float)uVar27;
    ray_02.m_Direction.x = (float)uVar26;
    ray_02.m_Direction.z = (float)uVar22;
    cylinderAxisPt0_00.y = cylinderRadius;
    cylinderAxisPt0_00.x = fVar11;
    cylinderAxisPt0_00.z = (float)puVar20;
    cylinderAxisPt1_00.y = fVar10;
    cylinderAxisPt1_00.x = (float)method_00;
    cylinderAxisPt1_00.z = fVar1;
    epsilon_00._vertEps = fVar13;
    epsilon_00._hrzEps = fVar12;
    bVar14 = CylinderMath::CylinderMath_RaycastNoCaps
                       (ray_02,t,cylinderAxisPt0_00,cylinderAxisPt1_00,torusCoreRadius - fVar3,
                        epsilon_00,(MethodInfo *)0x0);
    if (bVar14 == 0) {
      return 0;
    }
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
              ((Vector3 *)&stack0xffffff98,&RStack_2,*t,(MethodInfo *)0x0);
    fVar19 = (float10)func_?();
    *t = (float)fVar19;
  }
  return 1;
}

