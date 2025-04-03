
/* List`1[UnityEngine.Vector2] Calc2DExtentPoints(Vector2, Single, Single) */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Calc2DExtentPoints
          (Vector2 circleCenter,float circleRadius,float degreeCircleRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pQVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffcc,degreeCircleRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,(MethodInfo *)0x0
                     );
  fVar2 = pQVar1->x;
  fVar3 = pQVar1->y;
  fVar4 = pQVar1->z;
  fVar5 = pQVar1->w;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation.y = fVar3;
  rotation.x = fVar2;
  rotation.z = fVar4;
  rotation.w = fVar5;
  point.z = 0.0;
  point.x = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).x;
  point.y = (TypeInfo__UnityEngine__Vector2->static_fields->rightVector).y;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffdc,rotation,point,(MethodInfo *)0x0);
  fVar7 = pVVar6->x;
  fVar8 = pVVar6->y;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  rotation_00.y = fVar3;
  rotation_00.x = fVar2;
  rotation_00.z = fVar4;
  rotation_00.w = fVar5;
  point_00.z = 0.0;
  point_00.x = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).x;
  point_00.y = (TypeInfo__UnityEngine__Vector2->static_fields->upVector).y;
  pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffec,rotation_00,point_00,(MethodInfo *)0x0);
  uVar9._0_4_ = pVVar6->x;
  uVar9._4_4_ = pVVar6->y;
  pLVar10 = (List_1_UnityEngine_Vector2_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar11 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fVar2 = (float)uVar9 * circleRadius;
  fVar4 = SUB84(uVar9,4) * circleRadius;
  fVar3 = circleCenter.x + fVar2;
  if (pLVar10 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar12 = &(pLVar10->fields)._version;
    *piVar12 = *piVar12 + 1;
    pVVar13 = (pLVar10->fields)._items;
    if (pVVar13 != (Vector2__Array *)0x0) {
      uVar14 = (pLVar10->fields)._size;
      if (uVar14 < pVVar13->max_length) {
        (pLVar10->fields)._size = uVar14 + 1;
        if (pVVar13->max_length <= uVar14) goto code_?;
        pVVar13->vector[uVar14].x = fVar3;
        pVVar13->vector[uVar14].y = circleCenter.y + fVar4;
      }
      else {
        item.y = circleCenter.y + fVar4;
        item.x = fVar3;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  (pLVar10,item,pMVar11->klass->rgctx_data[0xe].method);
      }
      pMVar11 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar8 = fVar8 * circleRadius;
      fVar3 = circleCenter.x + fVar7 * circleRadius;
      piVar12 = &(pLVar10->fields)._version;
      *piVar12 = *piVar12 + 1;
      pVVar13 = (pLVar10->fields)._items;
      if (pVVar13 != (Vector2__Array *)0x0) {
        uVar14 = (pLVar10->fields)._size;
        if (uVar14 < pVVar13->max_length) {
          (pLVar10->fields)._size = uVar14 + 1;
          if (pVVar13->max_length <= uVar14) goto code_?;
          pVVar13->vector[uVar14].x = fVar3;
          pVVar13->vector[uVar14].y = circleCenter.y + fVar8;
        }
        else {
          item_00.y = circleCenter.y + fVar8;
          item_00.x = fVar3;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (pLVar10,item_00,pMVar11->klass->rgctx_data[0xe].method);
        }
        pMVar11 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar2 = circleCenter.x - fVar2;
        piVar12 = &(pLVar10->fields)._version;
        *piVar12 = *piVar12 + 1;
        pVVar13 = (pLVar10->fields)._items;
        if (pVVar13 != (Vector2__Array *)0x0) {
          uVar14 = (pLVar10->fields)._size;
          if (uVar14 < pVVar13->max_length) {
            (pLVar10->fields)._size = uVar14 + 1;
            if (pVVar13->max_length <= uVar14) goto code_?;
            pVVar13->vector[uVar14].x = fVar2;
            pVVar13->vector[uVar14].y = circleCenter.y - fVar4;
          }
          else {
            item_01.y = circleCenter.y - fVar4;
            item_01.x = fVar2;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar10,item_01,pMVar11->klass->rgctx_data[0xe].method);
          }
          pMVar11 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          fVar2 = circleCenter.x - fVar7 * circleRadius;
          piVar12 = &(pLVar10->fields)._version;
          *piVar12 = *piVar12 + 1;
          pVVar13 = (pLVar10->fields)._items;
          if (pVVar13 != (Vector2__Array *)0x0) {
            uVar14 = (pLVar10->fields)._size;
            if (pVVar13->max_length <= uVar14) {
              item_02.y = circleCenter.y - fVar8;
              item_02.x = fVar2;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        (pLVar10,item_02,pMVar11->klass->rgctx_data[0xe].method);
              return pLVar10;
            }
            (pLVar10->fields)._size = uVar14 + 1;
            if (uVar14 < pVVar13->max_length) {
              pVVar13->vector[uVar14].x = fVar2;
              pVVar13->vector[uVar14].y = circleCenter.y - fVar8;
              return pLVar10;
            }
            goto code_?;
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector2_ *)(*pcVar15)();
  return pLVar10;
}


/* List`1[UnityEngine.Vector3] Calc3DExtentPoints(Vector3, Single, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Calc3DExtentPoints
          (Vector3 circleCenter,float circleRadius,Quaternion circleRotation,MethodInfo *method)

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
                     ((Vector3 *)auStack_2,circleRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  uVar3 = pVVar1->x;
  uVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffa0,circleRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  auStack_2._0_4_ = pVVar1->x;
  auStack_2._4_4_ = pVVar1->y;
  VStack_6.x = pVVar1->z;
  pLVar7 = (List_1_UnityEngine_Vector3_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar7,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  fStack_8 = (float)auStack_2._0_4_ * circleRadius;
  fStack_9 = (float)auStack_2._4_4_ * circleRadius;
  fStack_10 = VStack_6.x * circleRadius;
  auStack_2._4_4_ = circleCenter.y + fStack_9;
  auStack_2._0_4_ = circleCenter.x + fStack_8;
  VStack_6.z = circleCenter.z + fStack_10;
  VStack_6.x = VStack_6.z;
  if (pLVar7 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_11 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    VStack_6.x = circleCenter.x + fStack_8;
    VStack_6.y = circleCenter.y + fStack_9;
    auStack_2._4_4_ = pLVar7;
    auStack_2._0_4_ = &UNK_?;
    func_?();
    fStack_12 = (float)uVar3 * circleRadius;
    VStack_6.z = circleCenter.z + fVar5 * circleRadius;
    pMStack_11 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    VStack_6._0_8_ =
         CONCAT44(circleCenter.y + (float)uVar4 * circleRadius,circleCenter.x + fStack_12);
    auStack_2._0_4_ = &UNK_?;
    func_?();
    VStack_6.z = circleCenter.z - fStack_10;
    pMStack_11 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    VStack_6._0_8_ = CONCAT44(circleCenter.y - fStack_9,circleCenter.x - fStack_8);
    auStack_2._0_4_ = &UNK_?;
    func_?();
    VStack_6.z = circleCenter.z - VStack_6.z;
    fVar5 = circleCenter.y - (float)pMStack_11;
    pMStack_11 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    VStack_6._0_8_ = CONCAT44(fVar5,circleCenter.x - fStack_12);
    auStack_2._0_4_ = &UNK_?;
    func_?();
    return pLVar7;
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_Vector3_ *)(*pcVar13)();
  return pLVar7;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Single, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Contains2DPoint
               (Vector2 point,Vector2 circleCenter,float circleRadius,CircleEpsilon epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = (double)((point.x - circleCenter.x) * (point.x - circleCenter.x) +
                  (point.y - circleCenter.y) * (point.y - circleCenter.y));
  if (0.0 <= dVar1) {
    return (float)SQRT(dVar1) <= epsilon._radiusEps + circleRadius;
  }
  func_?();
  return (float)dVar1 <= epsilon._radiusEps + circleRadius;
}


/* Boolean Contains3DPoint(Vector3, Boolean, Vector3, Single, Vector3, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Contains3DPoint
               (Vector3 point,bool checkOnPlane,Vector3 circleCenter,float circleRadius,
               Vector3 circleNormal,CircleEpsilon epsilon,MethodInfo *method)

{
  fVar1 = point.x;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xfffffff0,circleNormal,(MethodInfo *)0x0);
  fVar3 = pVVar2->x;
  fVar4 = pVVar2->y;
  fVar5 = pVVar2->z;
  fVar6 = (float)((uint)(circleCenter.x * fVar3 + circleCenter.y * fVar4 + circleCenter.z * fVar5) ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  if (checkOnPlane != 0) {
    fVar4 = point.y;
    plane.m_Distance = fVar6;
    plane.m_Normal = *pVVar2;
    fVar5 = point.z;
    fVar7 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0);
    fVar3 = point.x;
    if (epsilon._extrudeEps < fVar7) {
      return 0;
    }
  }
  plane_00.m_Normal.y = fVar4;
  plane_00.m_Normal.x = fVar3;
  plane_00.m_Normal.z = fVar5;
  plane_00.m_Distance = fVar6;
  fVar8 = (float)(int)((ulonglong)(uint)point.z << 0x20);
  point.x = (float)(int)(((ulonglong)(uint)point.z << 0x20) >> 0x20);
  PlaneEx::PlaneEx_ProjectPoint
            ((Vector3 *)&stack0xfffffff0,plane_00,(Vector3)CONCAT84(CONCAT44(point.x,fVar8),fVar1),
             (MethodInfo *)0x0);
  fVar9 = (float10)func_?();
  return (float)fVar9 <= epsilon._radiusEps + circleRadius;
}


/* Boolean Is2DPointOnBorder(Vector2, Vector2, Single, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Is2DPointOnBorder
               (Vector2 point,Vector2 circleCenter,float circleRadius,CircleEpsilon epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar1 = (double)((point.x - circleCenter.x) * (point.x - circleCenter.x) +
                  (point.y - circleCenter.y) * (point.y - circleCenter.y));
  if (dVar1 < 0.0) {
    func_?();
  }
  else {
    dVar1 = SQRT(dVar1);
  }
  if ((float)dVar1 < circleRadius - epsilon._wireEps) {
    return 0;
  }
  return (float)dVar1 <= epsilon._wireEps + circleRadius;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Vector3, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Raycast
               (Ray ray,float *t,Vector3 circleCenter,float circleRadius,Vector3 circleNormal,
               CircleEpsilon epsilon,MethodInfo *method)

{
  fStack_1 = epsilon._radiusEps + circleRadius;
  fStack_2 = 0.0;
  *t = 0.0;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffb8,circleNormal,(MethodInfo *)0x0);
  PStack_4.m_Normal.x = pVVar3->x;
  PStack_4.m_Normal.y = pVVar3->y;
  PStack_4.m_Normal.z = pVVar3->z;
  ray_00.m_Direction.z = ray.m_Direction.z;
  ray_00.m_Direction.y = ray.m_Direction.y;
  PStack_4.m_Distance =
       (float)((uint)(circleCenter.y * PStack_4.m_Normal.y + circleCenter.x * PStack_4.m_Normal.x
                     + circleCenter.z * PStack_4.m_Normal.z) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  fStack_5 = PStack_4.m_Normal.x;
  fStack_6 = PStack_4.m_Normal.y;
  fStack_7 = PStack_4.m_Normal.z;
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    (&PStack_4,ray_00,&fStack_2,(MethodInfo *)circleCenter.x);
  if (bVar8 != 0) {
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffb8,&ray,fStack_2,(MethodInfo *)0x0);
    uVar9 = pVVar3->x;
    uVar10 = pVVar3->y;
    fStack_5 = (float)uVar9 - circleCenter.x;
    fStack_6 = (float)uVar10 - circleCenter.y;
    PStack_4.m_Distance = pVVar3->z - circleCenter.z;
    fStack_7 = PStack_4.m_Distance;
    fVar11 = (float10)func_?();
    if ((float)fVar11 <= fStack_1) {
      *t = fStack_2;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * circleNormal.x + ray.m_Direction.y * circleNormal.y +
                    ray.m_Direction.z * circleNormal.z) & _UNK_?) < _UNK_?)) {
    PStack_4.m_Distance = circleCenter.z + circleNormal.z * epsilon._extrudeEps;
    fStack_6 = 0.0;
    fStack_7 = 0.0;
    ray_01.m_Direction.z = ray.m_Direction.z;
    ray_01.m_Direction.y = ray.m_Direction.y;
    ray_01.m_Origin.y = ray.m_Origin.y;
    ray_01.m_Origin.x = ray.m_Origin.x;
    ray_01.m_Origin.z = ray.m_Origin.z;
    ray_01.m_Direction.x = ray.m_Direction.x;
    cylinderAxisPt0.y = circleCenter.y - circleNormal.y * epsilon._extrudeEps;
    cylinderAxisPt0.x = circleCenter.x - circleNormal.x * epsilon._extrudeEps;
    cylinderAxisPt0.z = 0.0;
    cylinderAxisPt1.y = circleCenter.y + circleNormal.y * epsilon._extrudeEps;
    cylinderAxisPt1.x = circleCenter.x + circleNormal.x * epsilon._extrudeEps;
    cylinderAxisPt1.z = PStack_4.m_Distance;
    cylinderRadius = fStack_1;
    fStack_1 = circleNormal.z * epsilon._extrudeEps;
    bVar8 = CylinderMath::CylinderMath_Raycast
                      (ray_01,t,cylinderAxisPt0,cylinderAxisPt1,cylinderRadius,(CylinderEpsilon)0x0,
                       (MethodInfo *)0x0);
    return bVar8;
  }
  return 0;
}


/* Boolean RaycastWire(Ray, Single ByRef, Vector3, Single, Vector3, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_RaycastWire
               (Ray ray,float *t,Vector3 circleCenter,float circleRadius,Vector3 circleNormal,
               CircleEpsilon epsilon,MethodInfo *method)

{
  fStack_1 = 0.0;
  *t = 0.0;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffb8,circleNormal,(MethodInfo *)0x0);
  PStack_3.m_Normal.x = pVVar2->x;
  PStack_3.m_Normal.y = pVVar2->y;
  PStack_3.m_Normal.z = pVVar2->z;
  ray_00.m_Direction.z = ray.m_Direction.z;
  ray_00.m_Direction.y = ray.m_Direction.y;
  PStack_3.m_Distance =
       (float)((uint)(circleCenter.y * PStack_3.m_Normal.y + circleCenter.x * PStack_3.m_Normal.x
                     + circleCenter.z * PStack_3.m_Normal.z) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  fStack_4 = PStack_3.m_Normal.x;
  fStack_5 = PStack_3.m_Normal.y;
  fStack_6 = PStack_3.m_Normal.z;
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    (&PStack_3,ray_00,&fStack_1,(MethodInfo *)circleCenter.x);
  if (bVar7 != 0) {
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffb8,&ray,fStack_1,(MethodInfo *)0x0);
    uVar8 = pVVar2->x;
    uVar9 = pVVar2->y;
    fStack_4 = circleCenter.x - (float)uVar8;
    fStack_5 = circleCenter.y - (float)uVar9;
    PStack_3.m_Distance = circleCenter.z - pVVar2->z;
    fStack_6 = PStack_3.m_Distance;
    fVar10 = (float10)func_?();
    if ((circleRadius - epsilon._wireEps <= (float)fVar10) &&
       ((float)fVar10 <= epsilon._wireEps + circleRadius)) {
      *t = fStack_1;
      return 1;
    }
  }
  if (epsilon._extrudeEps != 0.0) {
    if ((float)((uint)(ray.m_Direction.x * circleNormal.x + ray.m_Direction.y * circleNormal.y +
                      ray.m_Direction.z * circleNormal.z) & _UNK_?) < _UNK_?) {
      fStack_1 = circleNormal.y * epsilon._extrudeEps;
      fStack_11 = circleNormal.z * epsilon._extrudeEps;
      PStack_3.m_Distance = circleCenter.z + fStack_11;
      fStack_5 = 0.0;
      fStack_6 = 0.0;
      ray_01.m_Direction.z = ray.m_Direction.z;
      ray_01.m_Direction.y = ray.m_Direction.y;
      ray_01.m_Origin.y = ray.m_Origin.y;
      ray_01.m_Origin.x = ray.m_Origin.x;
      ray_01.m_Origin.z = ray.m_Origin.z;
      ray_01.m_Direction.x = ray.m_Direction.x;
      cylinderAxisPt0.y = circleCenter.y - fStack_1;
      cylinderAxisPt0.x = circleCenter.x - circleNormal.x * epsilon._extrudeEps;
      cylinderAxisPt0.z = 0.0;
      cylinderAxisPt1.y = circleCenter.y + fStack_1;
      cylinderAxisPt1.x = circleCenter.x + circleNormal.x * epsilon._extrudeEps;
      cylinderAxisPt1.z = PStack_3.m_Distance;
      bVar7 = CylinderMath::CylinderMath_Raycast
                        (ray_01,t,cylinderAxisPt0,cylinderAxisPt1,epsilon._wireEps + circleRadius,
                         (CylinderEpsilon)0x0,(MethodInfo *)0x0);
      return bVar7;
    }
  }
  return 0;
}

