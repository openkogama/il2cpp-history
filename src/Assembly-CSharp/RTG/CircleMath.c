
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
                      ((Quaternion *)&stack0xffffffd0,degreeCircleRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                       (MethodInfo *)0x0);
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
                      ((Vector3 *)&stack0xffffffe0,rotation,point,(MethodInfo *)0x0);
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
                      ((Vector3 *)&stack0xfffffff0,rotation_00,point_00,(MethodInfo *)0x0);
  fVar2 = pVVar6->x;
  fVar3 = pVVar6->y;
  pLVar9 = (List_1_UnityEngine_Vector2_ *)func_?();
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar9,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
  pMVar10 = 
  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_;
  fVar5 = circleCenter.x + fVar2 * circleRadius;
  fVar4 = circleCenter.y + fVar3 * circleRadius;
  if (pLVar9 != (List_1_UnityEngine_Vector2_ *)0x0) {
    piVar11 = &(pLVar9->fields)._version;
    *piVar11 = *piVar11 + 1;
    pVVar12 = (pLVar9->fields)._items;
    if (pVVar12 != (Vector2__Array *)0x0) {
      uVar13 = (pLVar9->fields)._size;
      if (uVar13 < pVVar12->max_length) {
        (pLVar9->fields)._size = uVar13 + 1;
        if (pVVar12->max_length <= uVar13) goto code_?;
        pVVar12->vector[uVar13].x = fVar5;
        pVVar12->vector[uVar13].y = fVar4;
      }
      else {
        item.y = fVar4;
        item.x = fVar5;
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
        List_1_UnityEngine_Vector2__AddWithResize
                  (pLVar9,item,pMVar10->klass->rgctx_data[0xe].method);
      }
      pMVar10 = 
      MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
      ;
      fVar5 = circleCenter.x + fVar7 * circleRadius;
      fVar4 = circleCenter.y + fVar8 * circleRadius;
      piVar11 = &(pLVar9->fields)._version;
      *piVar11 = *piVar11 + 1;
      pVVar12 = (pLVar9->fields)._items;
      if (pVVar12 != (Vector2__Array *)0x0) {
        uVar13 = (pLVar9->fields)._size;
        if (uVar13 < pVVar12->max_length) {
          (pLVar9->fields)._size = uVar13 + 1;
          if (pVVar12->max_length <= uVar13) goto code_?;
          pVVar12->vector[uVar13].x = fVar5;
          pVVar12->vector[uVar13].y = fVar4;
        }
        else {
          item_00.y = fVar4;
          item_00.x = fVar5;
          mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
          List_1_UnityEngine_Vector2__AddWithResize
                    (pLVar9,item_00,pMVar10->klass->rgctx_data[0xe].method);
        }
        pMVar10 = 
        MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
        ;
        fVar2 = circleCenter.x - fVar2 * circleRadius;
        fVar3 = circleCenter.y - fVar3 * circleRadius;
        piVar11 = &(pLVar9->fields)._version;
        *piVar11 = *piVar11 + 1;
        pVVar12 = (pLVar9->fields)._items;
        if (pVVar12 != (Vector2__Array *)0x0) {
          uVar13 = (pLVar9->fields)._size;
          if (uVar13 < pVVar12->max_length) {
            (pLVar9->fields)._size = uVar13 + 1;
            if (pVVar12->max_length <= uVar13) goto code_?;
            pVVar12->vector[uVar13].x = fVar2;
            pVVar12->vector[uVar13].y = fVar3;
          }
          else {
            item_01.y = fVar3;
            item_01.x = fVar2;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
            List_1_UnityEngine_Vector2__AddWithResize
                      (pLVar9,item_01,pMVar10->klass->rgctx_data[0xe].method);
          }
          pMVar10 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
          ;
          fVar2 = circleCenter.x - fVar7 * circleRadius;
          fVar3 = circleCenter.y - fVar8 * circleRadius;
          piVar11 = &(pLVar9->fields)._version;
          *piVar11 = *piVar11 + 1;
          pVVar12 = (pLVar9->fields)._items;
          if (pVVar12 != (Vector2__Array *)0x0) {
            uVar13 = (pLVar9->fields)._size;
            if (pVVar12->max_length <= uVar13) {
              item_02.y = fVar3;
              item_02.x = fVar2;
              mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector2]::
              List_1_UnityEngine_Vector2__AddWithResize
                        (pLVar9,item_02,pMVar10->klass->rgctx_data[0xe].method);
              return pLVar9;
            }
            (pLVar9->fields)._size = uVar13 + 1;
            if (uVar13 < pVVar12->max_length) {
              pVVar12->vector[uVar13].x = fVar2;
              pVVar12->vector[uVar13].y = fVar3;
              return pLVar9;
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
  pcVar14 = (code *)swi(3);
  pLVar9 = (List_1_UnityEngine_Vector2_ *)(*pcVar14)();
  return pLVar9;
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
                     (&VStack_2,circleRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  uStack_3._0_4_ = (undefined *)pVVar1->x;
  uStack_3._4_4_ = (List_1_UnityEngine_Vector3_ *)pVVar1->y;
  fStack_4 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (&VStack_2,circleRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  uVar5 = pVVar1->x;
  uVar6 = pVVar1->y;
  pMStack_7 = (MethodInfo *)pVVar1->z;
  fStack_8 = (float)uVar5;
  fStack_9 = (float)uVar6;
  pLVar10 = (List_1_UnityEngine_Vector3_ *)
           func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List__);
  VStack_2.x = circleCenter.x + fStack_8 * circleRadius;
  VStack_2.y = circleCenter.y + fStack_9 * circleRadius;
  VStack_2.z = circleCenter.z + (float)pMStack_7 * circleRadius;
  if (pLVar10 != (List_1_UnityEngine_Vector3_ *)0x0) {
    pMStack_7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_3._0_4_ = &UNK_?;
    fStack_4 = VStack_2.x;
    fStack_8 = VStack_2.y;
    fStack_9 = VStack_2.z;
    uStack_3._4_4_ = pLVar10;
    func_?();
    VStack_2.z = fStack_4 * circleRadius;
    fStack_4 = circleCenter.x + (float)(undefined *)uStack_3 * circleRadius;
    fStack_8 = circleCenter.y + (float)uStack_3._4_4_ * circleRadius;
    VStack_2.z = circleCenter.z + VStack_2.z;
    pMStack_7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_3 = CONCAT44(pLVar10,&UNK_?);
    fStack_9 = VStack_2.z;
    func_?();
    VStack_2.z = circleCenter.z - (float)pMStack_7 * circleRadius;
    fStack_4 = circleCenter.x - fStack_8 * circleRadius;
    fStack_8 = circleCenter.y - fStack_9 * circleRadius;
    pMStack_7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_3._0_4_ = &UNK_?;
    fStack_9 = VStack_2.z;
    uStack_3._4_4_ = pLVar10;
    func_?();
    VStack_2.z = fStack_4 * circleRadius;
    fStack_4 = circleCenter.x - (float)(undefined *)uStack_3 * circleRadius;
    fStack_8 = circleCenter.y - (float)uStack_3._4_4_ * circleRadius;
    VStack_2.z = circleCenter.z - VStack_2.z;
    pMStack_7 = 
    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_;
    uStack_3 = CONCAT44(pLVar10,&UNK_?);
    fStack_9 = VStack_2.z;
    func_?();
    return pLVar10;
  }
  func_?();
  pcVar11 = (code *)swi(3);
  pLVar10 = (List_1_UnityEngine_Vector3_ *)(*pcVar11)();
  return pLVar10;
}


/* Boolean Contains2DPoint(Vector2, Vector2, Single, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Contains2DPoint
               (Vector2 point,Vector2 circleCenter,float circleRadius,CircleEpsilon epsilon,
               MethodInfo *method)

{
  point.x = point.x - circleCenter.x;
  point.y = point.y - circleCenter.y;
  fVar1 = (float10)func_?(&point,0);
  return (float)fVar1 <= epsilon._radiusEps + circleRadius;
}


/* Boolean Contains3DPoint(Vector3, Boolean, Vector3, Single, Vector3, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Contains3DPoint
               (Vector3 point,bool checkOnPlane,Vector3 circleCenter,float circleRadius,
               Vector3 circleNormal,CircleEpsilon epsilon,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xfffffff0,circleNormal,(MethodInfo *)0x0);
  fVar2 = pVVar1->x;
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  fVar5 = (float)((uint)(circleCenter.x * fVar2 + circleCenter.y * fVar3 + circleCenter.z * fVar4) ^
                 __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  if (checkOnPlane != 0) {
    plane.m_Distance = fVar5;
    plane.m_Normal = *pVVar1;
    fVar2 = point.x;
    fVar3 = point.y;
    fVar4 = point.z;
    fVar5 = 0.0;
    fVar6 = PlaneEx::PlaneEx_GetAbsDistanceToPoint(plane,point,(MethodInfo *)0x0);
    if (epsilon._extrudeEps < fVar6) {
      return 0;
    }
  }
  plane_00.m_Normal.y = fVar3;
  plane_00.m_Normal.x = fVar2;
  plane_00.m_Normal.z = fVar4;
  plane_00.m_Distance = fVar5;
  PlaneEx::PlaneEx_ProjectPoint((Vector3 *)&stack0xfffffff0,plane_00,point,(MethodInfo *)0x0);
  fVar7 = (float10)func_?();
  return (float)fVar7 <= epsilon._radiusEps + circleRadius;
}


/* Boolean Is2DPointOnBorder(Vector2, Vector2, Single, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Is2DPointOnBorder
               (Vector2 point,Vector2 circleCenter,float circleRadius,CircleEpsilon epsilon,
               MethodInfo *method)

{
  point.x = point.x - circleCenter.x;
  point.y = point.y - circleCenter.y;
  fVar1 = (float10)func_?(&point,0);
  if ((float)fVar1 < circleRadius - epsilon._wireEps) {
    return 0;
  }
  return (float)fVar1 <= epsilon._wireEps + circleRadius;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Single, Vector3, CircleEpsilon) */

bool Assembly-CSharp.dll::RTG::CircleMath::CircleMath_Raycast
               (Ray ray,float *t,Vector3 circleCenter,float circleRadius,Vector3 circleNormal,
               CircleEpsilon epsilon,MethodInfo *method)

{
  PStack_1.m_Normal.x = 0.0;
  PStack_1.m_Normal.y = 0.0;
  PStack_1.m_Normal.z = 0.0;
  PStack_1.m_Distance = 0.0;
  fStack_2 = epsilon._radiusEps + circleRadius;
  fStack_3 = 0.0;
  *t = 0.0;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     ((Vector3 *)&stack0xffffffb8,circleNormal,(MethodInfo *)0x0);
  PStack_1.m_Normal.x = pVVar4->x;
  PStack_1.m_Normal.y = pVVar4->y;
  PStack_1.m_Normal.z = pVVar4->z;
  ray_00.m_Direction.z = ray.m_Direction.z;
  ray_00.m_Direction.y = ray.m_Direction.y;
  PStack_1.m_Distance =
       (float)((uint)(circleCenter.y * PStack_1.m_Normal.y + circleCenter.x * PStack_1.m_Normal.x
                     + circleCenter.z * PStack_1.m_Normal.z) ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  fStack_5 = PStack_1.m_Normal.x;
  fStack_6 = PStack_1.m_Normal.y;
  fStack_7 = PStack_1.m_Normal.z;
  bVar8 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    (&PStack_1,ray_00,&fStack_3,(MethodInfo *)circleCenter.x);
  if (bVar8 != 0) {
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                       ((Vector3 *)&stack0xffffffb8,&ray,fStack_3,(MethodInfo *)0x0);
    uVar9 = pVVar4->x;
    uVar10 = pVVar4->y;
    fStack_5 = (float)uVar9 - circleCenter.x;
    fStack_6 = (float)uVar10 - circleCenter.y;
    PStack_1.m_Normal.z = pVVar4->z - circleCenter.z;
    fStack_7 = PStack_1.m_Normal.z;
    fVar11 = (float10)func_?();
    if ((float)fVar11 <= fStack_2) {
      *t = fStack_3;
      return 1;
    }
  }
  if ((epsilon._extrudeEps != 0.0) &&
     ((float)((uint)(ray.m_Direction.x * circleNormal.x + ray.m_Direction.y * circleNormal.y +
                    ray.m_Direction.z * circleNormal.z) & _UNK_?) < _UNK_?)) {
    PStack_1.m_Distance = circleCenter.z + circleNormal.z * epsilon._extrudeEps;
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
    cylinderAxisPt1.z = PStack_1.m_Distance;
    cylinderRadius = fStack_2;
    fStack_2 = circleNormal.z * epsilon._extrudeEps;
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
  UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
            ((Vector3 *)&stack0xffffffc0,circleNormal,(MethodInfo *)0x0);
  ray_00.m_Direction.z = ray.m_Direction.z;
  ray_00.m_Direction.y = ray.m_Direction.y;
  ray_00.m_Origin.y = ray.m_Origin.y;
  ray_00.m_Origin.x = ray.m_Origin.x;
  ray_00.m_Origin.z = ray.m_Origin.z;
  ray_00.m_Direction.x = ray.m_Direction.x;
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_Raycast
                    ((Plane *)&stack0xffffffd0,ray_00,&fStack_1,(MethodInfo *)circleCenter.x);
  if (bVar2 != 0) {
    UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
              ((Vector3 *)&stack0xffffffc0,&ray,fStack_1,(MethodInfo *)0x0);
    fVar3 = (float10)func_?();
    if ((circleRadius - epsilon._wireEps <= (float)fVar3) &&
       ((float)fVar3 <= epsilon._wireEps + circleRadius)) {
      *t = fStack_1;
      return 1;
    }
  }
  if (epsilon._extrudeEps != 0.0) {
    if ((float)((uint)(ray.m_Direction.x * circleNormal.x + ray.m_Direction.y * circleNormal.y +
                      ray.m_Direction.z * circleNormal.z) & _UNK_?) < _UNK_?) {
      ray_01.m_Direction.z = ray.m_Direction.z;
      ray_01.m_Direction.y = ray.m_Direction.y;
      ray_01.m_Origin.y = ray.m_Origin.y;
      ray_01.m_Origin.x = ray.m_Origin.x;
      ray_01.m_Origin.z = ray.m_Origin.z;
      ray_01.m_Direction.x = ray.m_Direction.x;
      cylinderAxisPt0.y = circleCenter.y - circleNormal.y * epsilon._extrudeEps;
      cylinderAxisPt0.x = circleCenter.x - circleNormal.x * epsilon._extrudeEps;
      cylinderAxisPt0.z = epsilon._wireEps + circleRadius;
      cylinderAxisPt1.y = circleCenter.y + circleNormal.y * epsilon._extrudeEps;
      cylinderAxisPt1.x = circleCenter.x + circleNormal.x * epsilon._extrudeEps;
      cylinderAxisPt1.z = circleCenter.z + circleNormal.z * epsilon._extrudeEps;
      bVar2 = CylinderMath::CylinderMath_Raycast
                        (ray_01,t,cylinderAxisPt0,cylinderAxisPt1,epsilon._wireEps + circleRadius,
                         (CylinderEpsilon)0x0,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return 0;
}

