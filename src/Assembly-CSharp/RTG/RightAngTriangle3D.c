
/* Void AlignNormal(Vector3) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_AlignNormal
               (RightAngTriangle3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = RightAngTriangle3D_get_Right(&VStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  VStack_2._0_8_ = uVar3;
  VStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,&VStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  (this->fields)._rotation.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  (this->fields)._rotation.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  (this->fields)._rotation.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  (this->fields)._rotation.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  return;
}


/* Void AlignRight(Vector3) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_AlignRight
               (RightAngTriangle3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Right(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = RightAngTriangle3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  VStack_2._0_8_ = uVar3;
  VStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,&VStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  (this->fields)._rotation.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  (this->fields)._rotation.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  (this->fields)._rotation.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  (this->fields)._rotation.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  return;
}


/* Void AlignUp(Vector3) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_AlignUp
               (RightAngTriangle3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = RightAngTriangle3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  VStack_5.x = pVVar1->x;
  VStack_5.y = pVVar1->y;
  VStack_5.z = pVVar1->z;
  VStack_6.x = axis->x;
  VStack_6.y = axis->y;
  VStack_6.z = axis->z;
  VStack_2._0_8_ = uVar3;
  VStack_2.z = fVar4;
  pQVar7 = QuaternionEx::QuaternionEx_FromToRotation3D
                      (aQStack_8,&VStack_2,&VStack_6,&VStack_5,(MethodInfo *)0x0);
  fVar4 = (this->fields)._rotation.x;
  fVar9 = (this->fields)._rotation.y;
  fVar10 = (this->fields)._rotation.z;
  fVar11 = (this->fields)._rotation.w;
  fVar12 = pQVar7->x;
  fVar13 = pQVar7->y;
  fVar14 = pQVar7->z;
  fVar15 = pQVar7->w;
  (this->fields)._rotation.x = (fVar15 * fVar4 + fVar12 * fVar11 + fVar13 * fVar10) - fVar14 * fVar9;
  (this->fields)._rotation.y = (fVar15 * fVar9 + fVar13 * fVar11 + fVar14 * fVar4) - fVar12 * fVar10;
  (this->fields)._rotation.z = (fVar15 * fVar10 + fVar14 * fVar11 + fVar12 * fVar9) - fVar13 * fVar4;
  (this->fields)._rotation.w = ((fVar15 * fVar11 - fVar12 * fVar4) - fVar13 * fVar9) - fVar14 * fVar10;
  return;
}


/* Boolean ContainsPoint(Vector3, Boolean) */

bool Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_ContainsPoint
               (RightAngTriangle3D *this,Vector3 *point,bool checkOnPlane,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = RightAngTriangle3D_GetPoints(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((pLVar1->fields)._size == 0) goto code_?;
    pVVar2 = (pLVar1->fields)._items;
    if (pVVar2 != (Vector3__Array *)0x0) {
      if ((int)pVVar2->max_length != 0) {
        VStack_3.x = pVVar2->vector[0].x;
        VStack_3.y = pVVar2->vector[0].y;
        fVar4 = pVVar2->vector[0].z;
        if ((uint)(pLVar1->fields)._size < 2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        if (1 < (uint)pVVar2->max_length) {
          uVar7._0_4_ = pVVar2->vector[1].x;
          uVar7._4_4_ = pVVar2->vector[1].y;
          fVar8 = pVVar2->vector[1].z;
          if ((uint)(pLVar1->fields)._size < 3) goto code_?;
          if (2 < (uint)pVVar2->max_length) {
            VStack_9.x = pVVar2->vector[2].x;
            VStack_9.y = pVVar2->vector[2].y;
            TStack_10._areaEps = (this->fields)._epsilon._areaEps;
            TStack_10._extrudeEps = (this->fields)._epsilon._extrudeEps;
            fVar11 = (this->fields)._epsilon._wireEps;
            fVar12 = pVVar2->vector[2].z;
            if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
              FUN_?();
            }
            VStack_13.z = point->z;
            VStack_13.x = point->x;
            VStack_13.y = point->y;
            VStack_9.z = fVar12;
            TStack_10._wireEps = fVar11;
            VStack_3.z = fVar4;
            VStack_14._0_8_ = uVar7;
            VStack_14.z = fVar8;
            bVar6 = TriangleMath::TriangleMath_Contains3DPoint
                              (&VStack_13,checkOnPlane,&VStack_3,&VStack_14,&VStack_9,&TStack_10,
                               (MethodInfo *)0x0);
            return bVar6;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_GetAABB
                 (AABB *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  pointCloud = RightAngTriangle3D_GetPoints(this,(MethodInfo *)0x0);
  (__return_storage_ptr__->_size).x = 0.0;
  (__return_storage_ptr__->_size).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->_size).z = 0;
  (__return_storage_ptr__->_center).y = 0.0;
  (__return_storage_ptr__->_center).z = 0.0;
  *(undefined4 *)&__return_storage_ptr__->_isValid = 0;
  AABB::AABB__ctor_2(__return_storage_ptr__,(IEnumerable_1_UnityEngine_Vector3_ *)pointCloud,
                     (MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* List`1[UnityEngine.Vector3] GetPoints() */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_GetPoints
          (RightAngTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uVar1._0_4_ = (this->fields)._rightAngleCorner.x;
  uVar1._4_4_ = (this->fields)._rightAngleCorner.y;
  fVar2 = (this->fields)._rightAngleCorner.z;
  fVar3 = _UNK_?;
  if ((this->fields)._XLengthSign == 0) {
    fVar3 = _UNK_?;
  }
  fVar4 = (this->fields)._XLength;
  fVar5 = _UNK_?;
  if ((this->fields)._YLengthSign != 0) {
    fVar5 = _UNK_?;
  }
  fVar6 = (this->fields)._YLength;
  uVar7._0_4_ = (this->fields)._rotation.x;
  uVar7._4_4_ = (this->fields)._rotation.y;
  uVar8._0_4_ = (this->fields)._rotation.z;
  uVar8._4_4_ = (this->fields)._rotation.w;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_9._0_8_ = uVar1;
  VStack_9.z = fVar2;
  aQStack_10[0]._0_8_ = uVar7;
  aQStack_10[0]._8_8_ = uVar8;
  pLVar11 = TriangleMath::TriangleMath_CalcRATriangle3DPoints
                     (&VStack_9,fVar3 * fVar4,fVar5 * fVar6,aQStack_10,(MethodInfo *)0x0);
  return pLVar11;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_Raycast
               (RightAngTriangle3D *this,Ray *ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = RightAngTriangle3D_GetPoints(this,(MethodInfo *)0x0);
  if (pLVar1 == (List_1_UnityEngine_Vector3_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
  if ((this->fields)._raycastMode == 0) {
    if ((pLVar1->fields)._size != 0) {
      pVVar4 = (pLVar1->fields)._items;
      if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
      if ((int)pVVar4->max_length != 0) {
        VStack_5.x = pVVar4->vector[0].x;
        VStack_5.y = pVVar4->vector[0].y;
        fVar6 = pVVar4->vector[0].z;
        if ((uint)(pLVar1->fields)._size < 2) goto code_?;
        if (1 < (uint)pVVar4->max_length) {
          uVar7._0_4_ = pVVar4->vector[1].x;
          uVar7._4_4_ = pVVar4->vector[1].y;
          fVar8 = pVVar4->vector[1].z;
          if ((uint)(pLVar1->fields)._size < 3) goto code_?;
          if (2 < (uint)pVVar4->max_length) {
            VStack_9.x = pVVar4->vector[2].x;
            VStack_9.y = pVVar4->vector[2].y;
            TStack_10._areaEps = (this->fields)._epsilon._areaEps;
            TStack_10._extrudeEps = (this->fields)._epsilon._extrudeEps;
            fVar11 = pVVar4->vector[2].z;
            fVar12 = (this->fields)._epsilon._wireEps;
            if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
              FUN_?();
            }
            RStack_13.m_Origin.x = (ray->m_Origin).x;
            RStack_13.m_Origin.y = (ray->m_Origin).y;
            RStack_13._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
            RStack_13.m_Direction.y = (ray->m_Direction).y;
            RStack_13.m_Direction.z = (ray->m_Direction).z;
            VStack_5.z = fVar6;
            TStack_14._0_8_ = TStack_10._0_8_;
            TStack_10._0_8_ = uVar7;
            TStack_10._wireEps = fVar8;
            VStack_9.z = fVar11;
            TStack_14._wireEps = fVar12;
            bVar3 = TriangleMath::TriangleMath_Raycast
                              (&RStack_13,t,&VStack_5,(Vector3 *)&TStack_10,&VStack_9,&TStack_14,
                               (MethodInfo *)0x0);
            return bVar3;
          }
        }
      }
      goto code_?;
    }
  }
  else if ((pLVar1->fields)._size != 0) {
    pVVar4 = (pLVar1->fields)._items;
    if (pVVar4 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar4->max_length != 0) {
      VStack_9.x = pVVar4->vector[0].x;
      VStack_9.y = pVVar4->vector[0].y;
      fVar6 = pVVar4->vector[0].z;
      if ((uint)(pLVar1->fields)._size < 2) goto code_?;
      if (1 < (uint)pVVar4->max_length) {
        uVar15._0_4_ = pVVar4->vector[1].x;
        uVar15._4_4_ = pVVar4->vector[1].y;
        fVar8 = pVVar4->vector[1].z;
        if ((uint)(pLVar1->fields)._size < 3) goto code_?;
        if (2 < (uint)pVVar4->max_length) {
          VStack_5.x = pVVar4->vector[2].x;
          VStack_5.y = pVVar4->vector[2].y;
          TStack_10._areaEps = (this->fields)._epsilon._areaEps;
          TStack_10._extrudeEps = (this->fields)._epsilon._extrudeEps;
          fVar11 = pVVar4->vector[2].z;
          fVar12 = (this->fields)._epsilon._wireEps;
          if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          RStack_13.m_Origin.x = (ray->m_Origin).x;
          RStack_13.m_Origin.y = (ray->m_Origin).y;
          RStack_13._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          RStack_13.m_Direction.y = (ray->m_Direction).y;
          RStack_13.m_Direction.z = (ray->m_Direction).z;
          VStack_5.z = fVar11;
          TStack_10._wireEps = fVar12;
          VStack_9.z = fVar6;
          TStack_14._0_8_ = uVar15;
          TStack_14._wireEps = fVar8;
          bVar3 = TriangleMath::TriangleMath_RaycastWire
                            (&RStack_13,t,&VStack_9,(Vector3 *)&TStack_14,&VStack_5,&TStack_10,
                             (MethodInfo *)0x0);
          return bVar3;
        }
      }
    }
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    bVar3 = (*pcVar2)();
    return bVar3;
  }
code_?:
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
            ((MethodInfo *)0x0);
  pcVar2 = (code *)swi(3);
  bVar3 = (*pcVar2)();
  return bVar3;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_RaycastWire
               (RightAngTriangle3D *this,Ray *ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = RightAngTriangle3D_GetPoints(this,(MethodInfo *)0x0);
  if (pLVar1 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((pLVar1->fields)._size == 0) goto code_?;
    pVVar2 = (pLVar1->fields)._items;
    if (pVVar2 != (Vector3__Array *)0x0) {
      if ((int)pVVar2->max_length != 0) {
        VStack_3.x = pVVar2->vector[0].x;
        VStack_3.y = pVVar2->vector[0].y;
        fVar4 = pVVar2->vector[0].z;
        if ((uint)(pLVar1->fields)._size < 2) {
code_?:
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                    ((MethodInfo *)0x0);
          pcVar5 = (code *)swi(3);
          bVar6 = (*pcVar5)();
          return bVar6;
        }
        if (1 < (uint)pVVar2->max_length) {
          uVar7._0_4_ = pVVar2->vector[1].x;
          uVar7._4_4_ = pVVar2->vector[1].y;
          fVar8 = pVVar2->vector[1].z;
          if ((uint)(pLVar1->fields)._size < 3) goto code_?;
          if (2 < (uint)pVVar2->max_length) {
            uVar9._0_4_ = pVVar2->vector[2].x;
            uVar9._4_4_ = pVVar2->vector[2].y;
            TStack_10._areaEps = (this->fields)._epsilon._areaEps;
            TStack_10._extrudeEps = (this->fields)._epsilon._extrudeEps;
            fVar11 = (this->fields)._epsilon._wireEps;
            fVar12 = pVVar2->vector[2].z;
            if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
              FUN_?();
            }
            RStack_13.m_Origin.x = (ray->m_Origin).x;
            RStack_13.m_Origin.y = (ray->m_Origin).y;
            RStack_13._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
            RStack_13.m_Direction.y = (ray->m_Direction).y;
            RStack_13.m_Direction.z = (ray->m_Direction).z;
            TStack_10._wireEps = fVar11;
            VStack_3.z = fVar4;
            VStack_14._0_8_ = uVar9;
            VStack_14.z = fVar12;
            VStack_15._0_8_ = uVar7;
            VStack_15.z = fVar8;
            bVar6 = TriangleMath::TriangleMath_RaycastWire
                              (&RStack_13,t,&VStack_3,&VStack_15,&VStack_14,&TStack_10,
                               (MethodInfo *)0x0);
            return bVar6;
          }
        }
      }
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_RenderSolid
               (RightAngTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pOVar3 = pOVar1[10].klass;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  xLength = _UNK_?;
  if (pOVar3 != (Object__Class *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pOVar3->_0).name != (char *)0x0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_4.r = _UNK_?;
  CStack_4.g = _UNK_?;
  CStack_4.b = _UNK_?;
  CStack_4.a = _UNK_?;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_6.x = (pVVar5->zeroVector).x;
  VStack_6.y = (pVVar5->zeroVector).y;
  VStack_6.z = (pVVar5->zeroVector).z;
  pOVar3 = (Object__Class *)
           TriangleMesh::TriangleMesh_CreateRightAngledTriangleXY
                     (&VStack_6,xLength,xLength,&CStack_4,(MethodInfo *)0x0);
  bVar7 = iRam_? != 0;
  pOVar1[10].klass = pOVar3;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(pOVar1 + 10) >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
code_?:
  pOVar3 = pOVar1[10].klass;
  fVar12 = _UNK_?;
  if ((this->fields)._XLengthSign == 0) {
    fVar12 = xLength;
  }
  VStack_6.x = fVar12 * (this->fields)._XLength;
  fVar12 = _UNK_?;
  if ((this->fields)._YLengthSign == 0) {
    fVar12 = xLength;
  }
  CStack_4.b = (this->fields)._rightAngleCorner.z;
  VStack_6.y = fVar12 * (this->fields)._YLength;
  CStack_4.r = (this->fields)._rightAngleCorner.x;
  CStack_4.g = (this->fields)._rightAngleCorner.y;
  VStack_6.z = xLength;
  uStack_13._0_4_ = (this->fields)._rotation.x;
  uStack_13._4_4_ = (this->fields)._rotation.y;
  uStack_14._0_4_ = (this->fields)._rotation.z;
  uStack_14._4_4_ = (this->fields)._rotation.w;
  MStack_15.m00 = 0.0;
  MStack_15.m10 = 0.0;
  MStack_15.m20 = 0.0;
  MStack_15.m30 = 0.0;
  MStack_15.m01 = 0.0;
  MStack_15.m11 = 0.0;
  MStack_15.m21 = 0.0;
  MStack_15.m31 = 0.0;
  MStack_15.m02 = 0.0;
  MStack_15.m12 = 0.0;
  MStack_15.m22 = 0.0;
  MStack_15.m32 = 0.0;
  MStack_15.m03 = 0.0;
  MStack_15.m13 = 0.0;
  MStack_15.m23 = 0.0;
  MStack_15.m33 = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar16 = func_?(&UNK_?);
    FUN_?(uVar16,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&CStack_4,&uStack_13,&VStack_6);
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  MStack_17.m00 = MStack_15.m00;
  MStack_17.m10 = MStack_15.m10;
  MStack_17.m20 = MStack_15.m20;
  MStack_17.m30 = MStack_15.m30;
  MStack_17.m01 = MStack_15.m01;
  MStack_17.m11 = MStack_15.m11;
  MStack_17.m21 = MStack_15.m21;
  MStack_17.m31 = MStack_15.m31;
  MStack_17.m02 = MStack_15.m02;
  MStack_17.m12 = MStack_15.m12;
  MStack_17.m22 = MStack_15.m22;
  MStack_17.m32 = MStack_15.m32;
  MStack_17.m03 = MStack_15.m03;
  MStack_17.m13 = MStack_15.m13;
  MStack_17.m23 = MStack_15.m23;
  MStack_17.m33 = MStack_15.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
            ((Mesh *)pOVar3,&MStack_17,-1,(MethodInfo *)0x0);
  return;
}


/* Void RenderWire() */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_RenderWire
               (RightAngTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__Singleton<RTG::MeshPool>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__Singleton<RTG::MeshPool>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pOVar1 = Singleton`1[System::Object]::Singleton_1_System_Object__1_get_Get
                     (MethodInfo__RTG__Singleton<RTG::MeshPool>__get_Get__);
  if (pOVar1 == (Object *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar3 = pOVar1[10].monitor;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  xLength = _UNK_?;
  if (pMVar3 != (MonitorData *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if (*(longlong *)(pMVar3 + 0x10) != 0) goto code_?;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  CStack_4.r = _UNK_?;
  CStack_4.g = _UNK_?;
  CStack_4.b = _UNK_?;
  CStack_4.a = _UNK_?;
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  VStack_6.x = (pVVar5->zeroVector).x;
  VStack_6.y = (pVVar5->zeroVector).y;
  VStack_6.z = (pVVar5->zeroVector).z;
  pMVar7 = TriangleMesh::TriangleMesh_CreateWireRightAngledTriangleXY
                     (&VStack_6,xLength,xLength,&CStack_4,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  pOVar1[10].monitor = (MonitorData *)pMVar7;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&pOVar1[10].monitor >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar11 == *puVar12;
      if (bVar8) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
code_?:
  pMVar7 = (Mesh *)pOVar1[10].monitor;
  fVar13 = _UNK_?;
  if ((this->fields)._XLengthSign == 0) {
    fVar13 = xLength;
  }
  VStack_6.x = fVar13 * (this->fields)._XLength;
  fVar13 = _UNK_?;
  if ((this->fields)._YLengthSign == 0) {
    fVar13 = xLength;
  }
  CStack_4.b = (this->fields)._rightAngleCorner.z;
  VStack_6.y = fVar13 * (this->fields)._YLength;
  CStack_4.r = (this->fields)._rightAngleCorner.x;
  CStack_4.g = (this->fields)._rightAngleCorner.y;
  VStack_6.z = xLength;
  uStack_14._0_4_ = (this->fields)._rotation.x;
  uStack_14._4_4_ = (this->fields)._rotation.y;
  uStack_15._0_4_ = (this->fields)._rotation.z;
  uStack_15._4_4_ = (this->fields)._rotation.w;
  MStack_16.m00 = 0.0;
  MStack_16.m10 = 0.0;
  MStack_16.m20 = 0.0;
  MStack_16.m30 = 0.0;
  MStack_16.m01 = 0.0;
  MStack_16.m11 = 0.0;
  MStack_16.m21 = 0.0;
  MStack_16.m31 = 0.0;
  MStack_16.m02 = 0.0;
  MStack_16.m12 = 0.0;
  MStack_16.m22 = 0.0;
  MStack_16.m32 = 0.0;
  MStack_16.m03 = 0.0;
  MStack_16.m13 = 0.0;
  MStack_16.m23 = 0.0;
  MStack_16.m33 = 0.0;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar17 = func_?(&UNK_?);
    FUN_?(uVar17,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(&CStack_4,&uStack_14,&VStack_6);
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Graphics);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Graphics->_1).field_0x1c == 0) {
    FUN_?();
  }
  MStack_18.m00 = MStack_16.m00;
  MStack_18.m10 = MStack_16.m10;
  MStack_18.m20 = MStack_16.m20;
  MStack_18.m30 = MStack_16.m30;
  MStack_18.m01 = MStack_16.m01;
  MStack_18.m11 = MStack_16.m11;
  MStack_18.m21 = MStack_16.m21;
  MStack_18.m31 = MStack_16.m31;
  MStack_18.m02 = MStack_16.m02;
  MStack_18.m12 = MStack_16.m12;
  MStack_18.m22 = MStack_16.m22;
  MStack_18.m32 = MStack_16.m32;
  MStack_18.m03 = MStack_16.m03;
  MStack_18.m13 = MStack_16.m13;
  MStack_18.m23 = MStack_16.m23;
  MStack_18.m33 = MStack_16.m33;
  UnityEngine.CoreModule.dll::UnityEngine::Graphics::Graphics_DrawMeshNow_1
            (pMVar7,&MStack_18,-1,(MethodInfo *)0x0);
  return;
}


/* RightAngTriangle3D() */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D__ctor
               (RightAngTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar3 = (pVVar2->zeroVector).y;
  fVar4 = (pVVar2->zeroVector).z;
  (this->fields)._rightAngleCorner.x = (pVVar2->zeroVector).x;
  (this->fields)._rightAngleCorner.y = fVar3;
  (this->fields)._rightAngleCorner.z = fVar4;
  (this->fields)._XLength = 1.0;
  (this->fields)._YLength = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar5 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar4 = (pQVar5->identityQuaternion).y;
  fVar3 = (pQVar5->identityQuaternion).z;
  fVar6 = (pQVar5->identityQuaternion).w;
  (this->fields)._rotation.x = (pQVar5->identityQuaternion).x;
  (this->fields)._rotation.y = fVar4;
  (this->fields)._rotation.z = fVar3;
  (this->fields)._rotation.w = fVar6;
  return;
}


/* TriangleEpsilon get_Epsilon() */

TriangleEpsilon *
Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Epsilon
          (TriangleEpsilon *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._epsilon._wireEps;
  fVar2 = (this->fields)._epsilon._extrudeEps;
  __return_storage_ptr__->_areaEps = (this->fields)._epsilon._areaEps;
  __return_storage_ptr__->_extrudeEps = fVar2;
  __return_storage_ptr__->_wireEps = fVar1;
  return __return_storage_ptr__;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Look
                    (Vector3 *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->forwardVector).x;
  uVar10 = (pVVar5->forwardVector).y;
  fVar11 = (pVVar5->forwardVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}


/* Vector3 get_Normal() */

Vector3 * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Normal
                    (Vector3 *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Plane get_Plane() */

Plane * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Plane
                  (Plane *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  pVVar1 = RightAngTriangle3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  uStack_3._0_4_ = (this->fields)._rightAngleCorner.x;
  uStack_3._4_4_ = (this->fields)._rightAngleCorner.y;
  VStack_2.z = pVVar1->z;
  VStack_2.x = pVVar1->x;
  VStack_2.y = pVVar1->y;
  fStack_4 = (this->fields)._rightAngleCorner.z;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  *(undefined8 *)&(__return_storage_ptr__->m_Normal).z = 0;
  FUN_?(__return_storage_ptr__,&VStack_2,&uStack_3);
  return __return_storage_ptr__;
}


/* Single get_RealXLength() */

float Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_RealXLength
                (RightAngTriangle3D *this,MethodInfo *method)

{
  if ((this->fields)._XLengthSign == 0) {
    return _UNK_? * (this->fields)._XLength;
  }
  return _UNK_? * (this->fields)._XLength;
}


/* Single get_RealYLength() */

float Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_RealYLength
                (RightAngTriangle3D *this,MethodInfo *method)

{
  if ((this->fields)._YLengthSign == 0) {
    return _UNK_? * (this->fields)._YLength;
  }
  return _UNK_? * (this->fields)._YLength;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Right
                    (Vector3 *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->rightVector).x;
  uVar10 = (pVVar5->rightVector).y;
  fVar11 = (pVVar5->rightVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Rotation
          (Quaternion *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.y;
  fVar2 = (this->fields)._rotation.z;
  fVar3 = (this->fields)._rotation.w;
  __return_storage_ptr__->x = (this->fields)._rotation.x;
  __return_storage_ptr__->y = fVar1;
  __return_storage_ptr__->z = fVar2;
  __return_storage_ptr__->w = fVar3;
  return __return_storage_ptr__;
}


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_get_Up
                    (Vector3 *__return_storage_ptr__,RightAngTriangle3D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotation.x;
  fVar2 = (this->fields)._rotation.y;
  fVar3 = (this->fields)._rotation.z;
  fVar4 = (this->fields)._rotation.w;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar5 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar6 = fVar3 + fVar3;
  fVar7 = fVar2 + fVar2;
  fVar8 = (fVar1 + fVar1) * fVar1;
  uVar9 = (pVVar5->upVector).x;
  uVar10 = (pVVar5->upVector).y;
  fVar11 = (pVVar5->upVector).z;
  fVar12 = (fVar1 + fVar1) * fVar4;
  fVar13 = _UNK_? - (fVar6 * fVar3 + fVar8);
  fVar8 = _UNK_? - (fVar7 * fVar2 + fVar8);
  __return_storage_ptr__->x =
       (_UNK_? - (fVar6 * fVar3 + fVar7 * fVar2)) * (float)uVar9 +
       (fVar7 * fVar1 - fVar6 * fVar4) * (float)uVar10 + (fVar7 * fVar4 + fVar6 * fVar1) * fVar11;
  __return_storage_ptr__->y =
       fVar13 * (float)uVar10 + (fVar6 * fVar4 + fVar7 * fVar1) * (float)uVar9 +
       (fVar6 * fVar2 - fVar12) * fVar11;
  __return_storage_ptr__->z =
       (fVar6 * fVar1 - fVar7 * fVar4) * (float)uVar9 + (fVar12 + fVar6 * fVar2) * (float)uVar10 +
       fVar8 * fVar11;
  return __return_storage_ptr__;
}


/* Void set_Epsilon(TriangleEpsilon) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_set_Epsilon
               (RightAngTriangle3D *this,TriangleEpsilon *value,MethodInfo *method)

{
  fVar1 = value->_extrudeEps;
  fVar2 = value->_wireEps;
  (this->fields)._epsilon._areaEps = value->_areaEps;
  (this->fields)._epsilon._extrudeEps = fVar1;
  (this->fields)._epsilon._wireEps = fVar2;
  return;
}


/* Void set_ExtrudeEps(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_set_ExtrudeEps
               (RightAngTriangle3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._extrudeEps = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_set_Rotation
               (RightAngTriangle3D *this,Quaternion *value,MethodInfo *method)

{
  fVar1 = value->y;
  fVar2 = value->z;
  fVar3 = value->w;
  (this->fields)._rotation.x = value->x;
  (this->fields)._rotation.y = fVar1;
  (this->fields)._rotation.z = fVar2;
  (this->fields)._rotation.w = fVar3;
  return;
}


/* Void set_WireEps(Single) */

void Assembly-CSharp.dll::RTG::RightAngTriangle3D::RightAngTriangle3D_set_WireEps
               (RightAngTriangle3D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._wireEps = (float)((uint)value & _UNK_?);
  return;
}

