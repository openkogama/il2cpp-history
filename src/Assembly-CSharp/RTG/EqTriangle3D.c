
/* Void AlignNormal(Vector3) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_AlignNormal
               (EqTriangle3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = EqTriangle3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = EqTriangle3D_get_Right(&VStack_2,this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_AlignRight
               (EqTriangle3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = EqTriangle3D_get_Right(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = EqTriangle3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
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

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_AlignUp
               (EqTriangle3D *this,Vector3 *axis,MethodInfo *method)

{
  pVVar1 = EqTriangle3D_get_Up(&VStack_2,this,(MethodInfo *)0x0);
  uVar3._0_4_ = pVVar1->x;
  uVar3._4_4_ = pVVar1->y;
  fVar4 = pVVar1->z;
  pVVar1 = EqTriangle3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
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


/* AABB GetAABB() */

AABB * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_GetAABB
                 (AABB *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pointCloud = (this->fields)._points;
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


/* Vector3 GetEdge(EqTriangleEdge) */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_GetEdge
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,EqTriangleEdge__Enum edge,
                    MethodInfo *method)

{
  bVar1 = (this->fields)._arePointsDirty;
  if (edge == EqTriangleEdge__Enum_LeftTop) {
    if (bVar1 != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector3__Array *)0x0) {
      if (1 < (uint)pVVar2->max_length) {
        uVar3 = pVVar2->vector[1].x;
        uVar4 = pVVar2->vector[1].y;
        fVar5 = pVVar2->vector[1].z;
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar2 = (this->fields)._points;
        if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar2->max_length != 0) {
          uVar6 = pVVar2->vector[0].x;
          uVar7 = pVVar2->vector[0].y;
          fVar8 = (float)uVar3 - (float)uVar6;
          fVar9 = (float)uVar4 - (float)uVar7;
          fVar5 = fVar5 - pVVar2->vector[0].z;
          goto code_?;
        }
      }
code_?:
      FUN_?();
      pcVar10 = (code *)swi(3);
      pVVar11 = (Vector3 *)(*pcVar10)();
      return pVVar11;
    }
  }
  else if (edge == EqTriangleEdge__Enum_TopRight) {
    if (bVar1 != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector3__Array *)0x0) {
      if (2 < (uint)pVVar2->max_length) {
        uVar12 = pVVar2->vector[2].x;
        uVar13 = pVVar2->vector[2].y;
        fVar5 = pVVar2->vector[2].z;
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar2 = (this->fields)._points;
        if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
        if (1 < (uint)pVVar2->max_length) {
          uVar14 = pVVar2->vector[1].x;
          uVar15 = pVVar2->vector[1].y;
          fVar8 = (float)uVar12 - (float)uVar14;
          fVar9 = (float)uVar13 - (float)uVar15;
          fVar5 = fVar5 - pVVar2->vector[1].z;
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  else {
    if (bVar1 != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 != (Vector3__Array *)0x0) {
      if ((int)pVVar2->max_length != 0) {
        uVar16 = pVVar2->vector[0].x;
        uVar17 = pVVar2->vector[0].y;
        fVar5 = pVVar2->vector[0].z;
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar2 = (this->fields)._points;
        if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
        if (2 < (uint)pVVar2->max_length) {
          uVar18 = pVVar2->vector[2].x;
          uVar19 = pVVar2->vector[2].y;
          fVar8 = (float)uVar16 - (float)uVar18;
          fVar9 = (float)uVar17 - (float)uVar19;
          fVar5 = fVar5 - pVVar2->vector[2].z;
code_?:
          __return_storage_ptr__->x = fVar8;
          __return_storage_ptr__->y = fVar9;
          __return_storage_ptr__->z = fVar5;
          return __return_storage_ptr__;
        }
      }
      goto code_?;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  pVVar11 = (Vector3 *)(*pcVar10)();
  return pVVar11;
}


/* Vector3 GetEdgeMidPoint(EqTriangleEdge) */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_GetEdgeMidPoint
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,EqTriangleEdge__Enum edge,
                    MethodInfo *method)

{
  bVar1 = (this->fields)._arePointsDirty;
  if (edge == EqTriangleEdge__Enum_LeftTop) {
    if (bVar1 != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    if ((int)pVVar2->max_length != 0) {
      VStack_3.x = pVVar2->vector[0].x;
      VStack_3.y = pVVar2->vector[0].y;
      fVar4 = pVVar2->vector[0].z;
      pVVar5 = EqTriangle3D_GetEdge(&VStack_6,this,EqTriangleEdge__Enum_LeftTop,(MethodInfo *)0x0);
      VStack_7.x = pVVar5->x;
      VStack_7.y = pVVar5->y;
      fVar8 = pVVar5->z;
      VStack_9._0_8_ = VStack_7._0_8_;
      VStack_9.z = fVar8;
      fVar10 = (float)FUN_?(&VStack_9);
      if (_UNK_? < fVar10) {
        fVar8 = fVar8 / fVar10;
        uVar11 = CONCAT44(VStack_7.y / fVar10,VStack_7.x / fVar10);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar11._0_4_ = (pVVar12->zeroVector).x;
        uVar11._4_4_ = (pVVar12->zeroVector).y;
        fVar8 = (pVVar12->zeroVector).z;
      }
      VStack_6.x = (float)uVar11;
      VStack_6.y = (float)((ulonglong)uVar11 >> 0x20);
      fVar10 = VStack_6.x * _UNK_? + VStack_3.x;
      VStack_9.y = VStack_6.y * _UNK_? + VStack_3.y;
code_?:
      fVar8 = fVar8 * _UNK_?;
      __return_storage_ptr__->x = fVar10;
      __return_storage_ptr__->y = VStack_9.y;
      __return_storage_ptr__->z = fVar8 + fVar4;
      return __return_storage_ptr__;
    }
  }
  else if (edge == EqTriangleEdge__Enum_TopRight) {
    if (bVar1 != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 == (Vector3__Array *)0x0) {
code_?:
      FUN_?();
      pcVar13 = (code *)swi(3);
      pVVar5 = (Vector3 *)(*pcVar13)();
      return pVVar5;
    }
    if (1 < (uint)pVVar2->max_length) {
      VStack_9.x = pVVar2->vector[1].x;
      VStack_9.y = pVVar2->vector[1].y;
      fVar4 = pVVar2->vector[1].z;
      pVVar5 = EqTriangle3D_GetEdge(&VStack_6,this,EqTriangleEdge__Enum_TopRight,(MethodInfo *)0x0)
      ;
      VStack_3.x = pVVar5->x;
      VStack_3.y = pVVar5->y;
      fVar8 = pVVar5->z;
      VStack_7._0_8_ = VStack_3._0_8_;
      VStack_7.z = fVar8;
      fVar10 = (float)FUN_?(&VStack_7);
      if (_UNK_? < fVar10) {
        fVar8 = fVar8 / fVar10;
        uVar14 = CONCAT44(VStack_3.y / fVar10,VStack_3.x / fVar10);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar14._0_4_ = (pVVar12->zeroVector).x;
        uVar14._4_4_ = (pVVar12->zeroVector).y;
        fVar8 = (pVVar12->zeroVector).z;
      }
      VStack_6.x = (float)uVar14;
      VStack_6.y = (float)((ulonglong)uVar14 >> 0x20);
      fVar10 = VStack_6.x * _UNK_? + VStack_9.x;
      VStack_9.y = VStack_6.y * _UNK_? + VStack_9.y;
      goto code_?;
    }
  }
  else {
    if (bVar1 != 0) {
      EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
    }
    pVVar2 = (this->fields)._points;
    if (pVVar2 == (Vector3__Array *)0x0) goto code_?;
    if (2 < (uint)pVVar2->max_length) {
      VStack_7.x = pVVar2->vector[2].x;
      VStack_7.y = pVVar2->vector[2].y;
      fVar4 = pVVar2->vector[2].z;
      pVVar5 = EqTriangle3D_GetEdge(&VStack_9,this,edge,(MethodInfo *)0x0);
      VStack_6.x = pVVar5->x;
      VStack_6.y = pVVar5->y;
      fVar8 = pVVar5->z;
      VStack_6.z = fVar8;
      VStack_3._0_8_ = VStack_6._0_8_;
      fVar10 = (float)FUN_?(&VStack_6);
      if (_UNK_? < fVar10) {
        fVar8 = fVar8 / fVar10;
        uVar15 = CONCAT44(VStack_3.y / fVar10,VStack_3.x / fVar10);
      }
      else {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar12 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar15._0_4_ = (pVVar12->zeroVector).x;
        uVar15._4_4_ = (pVVar12->zeroVector).y;
        fVar8 = (pVVar12->zeroVector).z;
      }
      VStack_6.x = (float)uVar15;
      VStack_6.y = (float)((ulonglong)uVar15 >> 0x20);
      VStack_6.y = VStack_6.y * _UNK_?;
      fVar8 = fVar8 * _UNK_?;
      __return_storage_ptr__->x = VStack_6.x * _UNK_? + VStack_7.x;
      __return_storage_ptr__->y = VStack_6.y + VStack_7.y;
      __return_storage_ptr__->z = fVar8 + fVar4;
      return __return_storage_ptr__;
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar13)();
  return pVVar5;
}


/* Vector3 GetPoint(EqTrianglePoint) */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_GetPoint
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,EqTrianglePoint__Enum point,
                    MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if (point < (EqTrianglePoint__Enum)pVVar1->max_length) {
      fVar2 = pVVar1->vector[(int)point].z;
      fVar3 = pVVar1->vector[(int)point].y;
      __return_storage_ptr__->x = pVVar1->vector[(int)point].x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar2;
      return __return_storage_ptr__;
    }
    FUN_?();
    pcVar4 = (code *)swi(3);
    pVVar5 = (Vector3 *)(*pcVar4)();
    return pVVar5;
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar4)();
  return pVVar5;
}


/* Void OnPointsFoundDirty() */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_OnPointsFoundDirty
               (EqTriangle3D *this,MethodInfo *method)

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
  uVar1._0_4_ = (this->fields)._centroid.x;
  uVar1._4_4_ = (this->fields)._centroid.y;
  fVar2 = (this->fields)._centroid.z;
  fVar3 = (this->fields)._sideLength;
  uVar4._0_4_ = (this->fields)._rotation.x;
  uVar4._4_4_ = (this->fields)._rotation.y;
  uVar5._0_4_ = (this->fields)._rotation.z;
  uVar5._4_4_ = (this->fields)._rotation.w;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_6._0_8_ = uVar1;
  VStack_6.z = fVar2;
  aQStack_7[0]._0_8_ = uVar4;
  aQStack_7[0]._8_8_ = uVar5;
  pLVar8 = TriangleMath::TriangleMath_CalcEqTriangle3DPoints
                     (&VStack_6,fVar3,aQStack_7,(MethodInfo *)0x0);
  pVVar9 = (this->fields)._points;
  if (pLVar8 != (List_1_UnityEngine_Vector3_ *)0x0) {
    if ((pLVar8->fields)._size == 0) {
code_?:
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowArgumentOutOfRange_IndexException
                ((MethodInfo *)0x0);
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    pVVar11 = (pLVar8->fields)._items;
    if (pVVar11 != (Vector3__Array *)0x0) {
      if ((int)pVVar11->max_length != 0) {
        if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
        if ((int)pVVar9->max_length != 0) {
          fVar3 = pVVar11->vector[0].y;
          pVVar9->vector[0].x = pVVar11->vector[0].x;
          pVVar9->vector[0].y = fVar3;
          pVVar9->vector[0].z = pVVar11->vector[0].z;
          pVVar9 = (this->fields)._points;
          if ((uint)(pLVar8->fields)._size < 2) goto code_?;
          pVVar11 = (pLVar8->fields)._items;
          if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
          if (1 < (uint)pVVar11->max_length) {
            if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
            if (1 < (uint)pVVar9->max_length) {
              fVar3 = pVVar11->vector[1].y;
              pVVar9->vector[1].x = pVVar11->vector[1].x;
              pVVar9->vector[1].y = fVar3;
              pVVar9->vector[1].z = pVVar11->vector[1].z;
              pVVar9 = (this->fields)._points;
              if ((uint)(pLVar8->fields)._size < 3) goto code_?;
              pVVar11 = (pLVar8->fields)._items;
              if (pVVar11 == (Vector3__Array *)0x0) goto code_?;
              if (2 < (uint)pVVar11->max_length) {
                if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
                if (2 < (uint)pVVar9->max_length) {
                  fVar3 = pVVar11->vector[2].y;
                  pVVar9->vector[2].x = pVVar11->vector[2].x;
                  pVVar9->vector[2].y = fVar3;
                  pVVar9->vector[2].z = pVVar11->vector[2].z;
                  (this->fields)._arePointsDirty = 0;
                  return;
                }
              }
            }
          }
        }
      }
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
  }
code_?:
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Boolean Raycast(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_Raycast
               (EqTriangle3D *this,Ray *ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((int)pVVar1->max_length != 0) {
      VStack_2.x = pVVar1->vector[0].x;
      VStack_2.y = pVVar1->vector[0].y;
      fVar3 = pVVar1->vector[0].z;
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar1 = (this->fields)._points;
      if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
      if (1 < (uint)pVVar1->max_length) {
        uVar4._0_4_ = pVVar1->vector[1].x;
        uVar4._4_4_ = pVVar1->vector[1].y;
        fVar5 = pVVar1->vector[1].z;
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar1 = (this->fields)._points;
        if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
        if (2 < (uint)pVVar1->max_length) {
          uVar6._0_4_ = (this->fields)._epsilon._areaEps;
          uVar6._4_4_ = (this->fields)._epsilon._extrudeEps;
          uVar7._0_4_ = pVVar1->vector[2].x;
          uVar7._4_4_ = pVVar1->vector[2].y;
          fVar8 = (this->fields)._epsilon._wireEps;
          fVar9 = pVVar1->vector[2].z;
          if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          RStack_10.m_Origin.x = (ray->m_Origin).x;
          RStack_10.m_Origin.y = (ray->m_Origin).y;
          RStack_10._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          RStack_10.m_Direction.y = (ray->m_Direction).y;
          RStack_10.m_Direction.z = (ray->m_Direction).z;
          VStack_2.z = fVar3;
          TStack_11._0_8_ = uVar6;
          TStack_11._wireEps = fVar8;
          VStack_12._0_8_ = uVar7;
          VStack_12.z = fVar9;
          VStack_13._0_8_ = uVar4;
          VStack_13.z = fVar5;
          bVar14 = TriangleMath::TriangleMath_Raycast
                             (&RStack_10,t,&VStack_2,&VStack_13,&VStack_12,&TStack_11,
                              (MethodInfo *)0x0);
          return bVar14;
        }
      }
    }
    FUN_?();
    pcVar15 = (code *)swi(3);
    bVar14 = (*pcVar15)();
    return bVar14;
  }
DAT_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
}


/* Boolean RaycastWire(Ray, Single ByRef) */

bool Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_RaycastWire
               (EqTriangle3D *this,Ray *ray,float *t,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if ((int)pVVar1->max_length != 0) {
      VStack_2.x = pVVar1->vector[0].x;
      VStack_2.y = pVVar1->vector[0].y;
      fVar3 = pVVar1->vector[0].z;
      if ((this->fields)._arePointsDirty != 0) {
        EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
      }
      pVVar1 = (this->fields)._points;
      if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
      if (1 < (uint)pVVar1->max_length) {
        uVar4._0_4_ = pVVar1->vector[1].x;
        uVar4._4_4_ = pVVar1->vector[1].y;
        fVar5 = pVVar1->vector[1].z;
        if ((this->fields)._arePointsDirty != 0) {
          EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
        }
        pVVar1 = (this->fields)._points;
        if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
        if (2 < (uint)pVVar1->max_length) {
          uVar6._0_4_ = (this->fields)._epsilon._areaEps;
          uVar6._4_4_ = (this->fields)._epsilon._extrudeEps;
          uVar7._0_4_ = pVVar1->vector[2].x;
          uVar7._4_4_ = pVVar1->vector[2].y;
          fVar8 = (this->fields)._epsilon._wireEps;
          fVar9 = pVVar1->vector[2].z;
          if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
            FUN_?();
          }
          RStack_10.m_Origin.x = (ray->m_Origin).x;
          RStack_10.m_Origin.y = (ray->m_Origin).y;
          RStack_10._8_8_ = *(undefined8 *)&(ray->m_Origin).z;
          RStack_10.m_Direction.y = (ray->m_Direction).y;
          RStack_10.m_Direction.z = (ray->m_Direction).z;
          VStack_2.z = fVar3;
          TStack_11._0_8_ = uVar6;
          TStack_11._wireEps = fVar8;
          VStack_12._0_8_ = uVar7;
          VStack_12.z = fVar9;
          VStack_13._0_8_ = uVar4;
          VStack_13.z = fVar5;
          bVar14 = TriangleMath::TriangleMath_RaycastWire
                             (&RStack_10,t,&VStack_2,&VStack_13,&VStack_12,&TStack_11,
                              (MethodInfo *)0x0);
          return bVar14;
        }
      }
    }
    FUN_?();
    pcVar15 = (code *)swi(3);
    bVar14 = (*pcVar15)();
    return bVar14;
  }
DAT_?:
  FUN_?();
  pcVar15 = (code *)swi(3);
  bVar14 = (*pcVar15)();
  return bVar14;
}


/* Void RenderSolid() */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_RenderSolid
               (EqTriangle3D *this,MethodInfo *method)

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
  pOVar3 = pOVar1[0xb].klass;
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
  sideLength = _UNK_?;
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
           TriangleMesh::TriangleMesh_CreateEqXY(&VStack_6,sideLength,&CStack_4,(MethodInfo *)0x0)
  ;
  bVar7 = iRam_? != 0;
  pOVar1[0xb].klass = pOVar3;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)(pOVar1 + 0xb) >> 0xc);
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
  fVar12 = (this->fields)._sideLength;
  pOVar3 = pOVar1[0xb].klass;
  VStack_6.y = fVar12;
  VStack_6.x = fVar12;
  CStack_4.r = (this->fields)._centroid.x;
  CStack_4.g = (this->fields)._centroid.y;
  uStack_13._0_4_ = (this->fields)._rotation.x;
  uStack_13._4_4_ = (this->fields)._rotation.y;
  uStack_14._0_4_ = (this->fields)._rotation.z;
  uStack_14._4_4_ = (this->fields)._rotation.w;
  CStack_4.b = (this->fields)._centroid.z;
  VStack_6.z = sideLength;
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

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_RenderWire
               (EqTriangle3D *this,MethodInfo *method)

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
  pMVar3 = pOVar1[0xb].monitor;
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
  sideLength = _UNK_?;
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
  pMVar7 = TriangleMesh::TriangleMesh_CreateWireEqXY
                     (&VStack_6,sideLength,&CStack_4,(MethodInfo *)0x0);
  bVar8 = iRam_? != 0;
  pOVar1[0xb].monitor = (MonitorData *)pMVar7;
  if (bVar8) {
    uVar9 = (uint)((ulonglong)&pOVar1[0xb].monitor >> 0xc);
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
  fVar13 = (this->fields)._sideLength;
  pMVar7 = (Mesh *)pOVar1[0xb].monitor;
  VStack_6.y = fVar13;
  VStack_6.x = fVar13;
  CStack_4.r = (this->fields)._centroid.x;
  CStack_4.g = (this->fields)._centroid.y;
  uStack_14._0_4_ = (this->fields)._rotation.x;
  uStack_14._4_4_ = (this->fields)._rotation.y;
  uStack_15._0_4_ = (this->fields)._rotation.z;
  uStack_15._4_4_ = (this->fields)._rotation.w;
  CStack_4.b = (this->fields)._centroid.z;
  VStack_6.z = sideLength;
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


/* Void SetPoint(EqTrianglePoint, Vector3) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_SetPoint
               (EqTriangle3D *this,EqTrianglePoint__Enum point,Vector3 *pointValue,
               MethodInfo *method)

{
  if ((this->fields)._arePointsDirty != 0) {
    EqTriangle3D_OnPointsFoundDirty(this,(MethodInfo *)0x0);
  }
  pVVar1 = (this->fields)._points;
  if (pVVar1 != (Vector3__Array *)0x0) {
    if (point < (EqTrianglePoint__Enum)pVVar1->max_length) {
      uVar2 = pointValue->y;
      uVar3 = pVVar1->vector[(int)point].x;
      uVar4 = pVVar1->vector[(int)point].y;
      uVar5 = pointValue->x;
      fVar6 = (float)uVar5 - (float)uVar3;
      fVar7 = pointValue->z - pVVar1->vector[(int)point].z;
      fVar8 = (float)uVar2 - (float)uVar4;
      if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
      if ((int)pVVar1->max_length != 0) {
        uVar9 = pVVar1->vector[0].x;
        uVar10 = pVVar1->vector[0].y;
        fVar11 = pVVar1->vector[0].z;
        pVVar1->vector[0].x = fVar6 + (float)uVar9;
        pVVar1->vector[0].y = fVar8 + (float)uVar10;
        pVVar1->vector[0].z = fVar7 + fVar11;
        pVVar1 = (this->fields)._points;
        if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
        if (1 < (uint)pVVar1->max_length) {
          uVar12 = pVVar1->vector[1].x;
          uVar13 = pVVar1->vector[1].y;
          fVar11 = pVVar1->vector[1].z;
          pVVar1->vector[1].x = fVar6 + (float)uVar12;
          pVVar1->vector[1].y = fVar8 + (float)uVar13;
          pVVar1->vector[1].z = fVar7 + fVar11;
          pVVar1 = (this->fields)._points;
          if (pVVar1 == (Vector3__Array *)0x0) goto DAT_?;
          if (2 < (uint)pVVar1->max_length) {
            uVar14 = pVVar1->vector[2].x;
            uVar15 = pVVar1->vector[2].y;
            fVar11 = pVVar1->vector[2].z;
            pVVar1->vector[2].x = fVar6 + (float)uVar14;
            pVVar1->vector[2].y = fVar8 + (float)uVar15;
            pVVar1->vector[2].z = fVar7 + fVar11;
            return;
          }
        }
      }
    }
    FUN_?();
    pcVar16 = (code *)swi(3);
    (*pcVar16)();
    return;
  }
DAT_?:
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* EqTriangle3D() */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D__ctor
               (EqTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  bVar1 = cRam_? == '\0';
  (this->fields)._sideLength = 1.0;
  if (bVar1) {
    FUN_?(&TypeInfo__UnityEngine__Quaternion);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pQVar2 = TypeInfo__UnityEngine__Quaternion->static_fields;
  fVar3 = (pQVar2->identityQuaternion).y;
  fVar4 = (pQVar2->identityQuaternion).z;
  fVar5 = (pQVar2->identityQuaternion).w;
  (this->fields)._rotation.x = (pQVar2->identityQuaternion).x;
  (this->fields)._rotation.y = fVar3;
  (this->fields)._rotation.z = fVar4;
  (this->fields)._rotation.w = fVar5;
  pVVar6 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,3);
  bVar1 = iRam_? != 0;
  (this->fields)._points = pVVar6;
  if (bVar1) {
    uVar7 = (uint)((ulonglong)&(this->fields)._points >> 0xc);
    uVar8 = (ulonglong)((uVar7 & 0x1fffff) >> 6);
    do {
      uVar9 = *(ulonglong *)(uVar8 * 8 + 0xADDR);
      puVar10 = (ulonglong *)(uVar8 * 8 + 0xADDR);
      LOCK();
      bVar1 = uVar9 == *puVar10;
      if (bVar1) {
        *puVar10 = uVar9 | 1L << (uVar7 & 0x3f);
      }
      UNLOCK();
    } while (!bVar1);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar11 = TypeInfo__UnityEngine__Vector3->static_fields;
  fVar4 = (pVVar11->zeroVector).y;
  fVar3 = (pVVar11->zeroVector).z;
  (this->fields)._centroid.x = (pVVar11->zeroVector).x;
  (this->fields)._centroid.y = fVar4;
  (this->fields)._centroid.z = fVar3;
  (this->fields)._arePointsDirty = 1;
  return;
}


/* Single get_Altitude() */

float Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Altitude
                (EqTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sideLength;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  return fVar1 * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor;
}


/* Single get_CentroidAltitude() */

float Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_CentroidAltitude
                (EqTriangle3D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._sideLength;
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__TriangleMath);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__TriangleMath->_1).field_0x1c == 0) {
    FUN_?();
  }
  return (fVar1 * TypeInfo__RTG__TriangleMath->static_fields->_eqTriangleAltFactor) / _UNK_?
  ;
}


/* Vector3 get_Look() */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Look
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

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

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Normal
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

{
  pVVar1 = EqTriangle3D_get_Look(&VStack_2,this,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Vector3 get_Right() */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Right
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

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


/* Vector3 get_Up() */

Vector3 * Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_get_Up
                    (Vector3 *__return_storage_ptr__,EqTriangle3D *this,MethodInfo *method)

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


/* Void set_Centroid(Vector3) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_set_Centroid
               (EqTriangle3D *this,Vector3 *value,MethodInfo *method)

{
  uVar1 = (this->fields)._centroid.x;
  uVar2 = (this->fields)._centroid.y;
  uVar3 = value->x;
  fVar4 = (float)uVar3 - (float)uVar1;
  fVar5 = value->z - (this->fields)._centroid.z;
  fVar6 = value->y - (float)uVar2;
  fVar7 = value->y;
  fVar8 = value->z;
  (this->fields)._centroid.x = value->x;
  (this->fields)._centroid.y = fVar7;
  (this->fields)._centroid.z = fVar8;
  pVVar9 = (this->fields)._points;
  if (pVVar9 != (Vector3__Array *)0x0) {
    if ((int)pVVar9->max_length != 0) {
      uVar10 = pVVar9->vector[0].x;
      fVar8 = pVVar9->vector[0].y;
      fVar7 = pVVar9->vector[0].z;
      pVVar9->vector[0].x = (float)uVar10 + fVar4;
      pVVar9->vector[0].y = fVar8 + fVar6;
      pVVar9->vector[0].z = fVar7 + fVar5;
      pVVar9 = (this->fields)._points;
      if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
      if (1 < (uint)pVVar9->max_length) {
        uVar11 = pVVar9->vector[1].x;
        fVar8 = pVVar9->vector[1].y;
        fVar7 = pVVar9->vector[1].z;
        pVVar9->vector[1].x = (float)uVar11 + fVar4;
        pVVar9->vector[1].y = fVar8 + fVar6;
        pVVar9->vector[1].z = fVar7 + fVar5;
        pVVar9 = (this->fields)._points;
        if (pVVar9 == (Vector3__Array *)0x0) goto code_?;
        if (2 < (uint)pVVar9->max_length) {
          uVar12 = pVVar9->vector[2].x;
          fVar8 = pVVar9->vector[2].y;
          fVar7 = pVVar9->vector[2].z;
          pVVar9->vector[2].x = (float)uVar12 + fVar4;
          pVVar9->vector[2].y = fVar8 + fVar6;
          pVVar9->vector[2].z = fVar7 + fVar5;
          return;
        }
      }
    }
    FUN_?();
    pcVar13 = (code *)swi(3);
    (*pcVar13)();
    return;
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void set_Rotation(Quaternion) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_set_Rotation
               (EqTriangle3D *this,Quaternion *value,MethodInfo *method)

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


/* Void set_SideLength(Single) */

void Assembly-CSharp.dll::RTG::EqTriangle3D::EqTriangle3D_set_SideLength
               (EqTriangle3D *this,float value,MethodInfo *method)

{
  (this->fields)._sideLength = (float)((uint)value & _UNK_?);
  (this->fields)._arePointsDirty = 1;
  return;
}

