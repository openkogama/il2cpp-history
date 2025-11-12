
/* Void AlignWidth(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_AlignWidth
               (QuadShape2D *this,Vector2 axis,MethodInfo *method)

{
  from = RightAngTriangle2D::RightAngTriangle2D_get_Right
                   ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
  pQVar1 = QuaternionEx::QuaternionEx_FromToRotation2D(aQStack_2,from,axis,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  pQVar1 = QuadShape2D_get_Rotation(aQStack_2,this,(MethodInfo *)0x0);
  fVar7 = pQVar1->x;
  fVar8 = pQVar1->y;
  fVar9 = pQVar1->z;
  fVar10 = pQVar1->w;
  aQStack_2[0].x = (fVar6 * fVar7 + fVar3 * fVar10 + fVar4 * fVar9) - fVar5 * fVar8;
  aQStack_2[0].y = (fVar6 * fVar8 + fVar4 * fVar10 + fVar5 * fVar7) - fVar3 * fVar9;
  aQStack_2[0].w = ((fVar6 * fVar10 - fVar3 * fVar7) - fVar4 * fVar8) - fVar5 * fVar9;
  aQStack_2[0].z = (fVar6 * fVar9 + fVar5 * fVar10 + fVar3 * fVar8) - fVar4 * fVar7;
  fVar3 = QuaternionEx::QuaternionEx_ConvertTo2DRotation(aQStack_2,(MethodInfo *)0x0);
  fVar3 = (float)FUN_?(fVar3,_UNK_?);
  (this->fields)._rotationDegrees = fVar3;
  return;
}


/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_ContainsPoint
               (QuadShape2D *this,Vector2 point,MethodInfo *method)

{
  quadWidth = (this->fields)._size.x;
  if ((this->fields)._ptContainMode == 0) {
    fVar1 = (this->fields)._center.x;
    fVar2 = (this->fields)._center.y;
    fVar3 = (this->fields)._size.y;
    VVar4 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    fStack_6 = point.x;
    fStack_7 = point.y;
    fStack_6 = fStack_6 - fVar1;
    fStack_7 = fStack_7 - fVar2;
    fStackX_c = VVar4.y;
    fStackX_8 = VVar4.x;
    if ((quadWidth + (this->fields)._epsilon._sizeEps.x) * _UNK_? <
        (float)((uint)(fStack_7 * fStackX_c + fStack_6 * fStackX_8) & _UNK_?)) {
      bVar8 = 0;
    }
    else {
      fStackX_24 = VVar5.y;
      fStackX_20 = VVar5.x;
      bVar8 = (float)((uint)(fStackX_24 * fStack_7 + fStackX_20 * fStack_6) & _UNK_?) <=
              ((this->fields)._epsilon._sizeEps.y + fVar3) * _UNK_?;
    }
  }
  else {
    VVar4 = (this->fields)._center;
    fVar1 = (this->fields)._size.y;
    VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    quadUp = RightAngTriangle2D::RightAngTriangle2D_get_Up
                       ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    aQStack_9[0]._sizeEps = (this->fields)._epsilon._sizeEps;
    aQStack_9[0]._extrudeEps = (this->fields)._epsilon._extrudeEps;
    aQStack_9[0]._wireEps = (this->fields)._epsilon._wireEps;
    bVar8 = QuadMath::QuadMath_Is2DPointOnBorder_1
                      (point,VVar4,quadWidth,fVar1,VVar5,quadUp,aQStack_9,(MethodInfo *)0x0);
  }
  return bVar8;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,QuadShape2D *this,MethodInfo *method)

{
  points = QuadMath::QuadMath_Calc2DQuadCornerPoints
                     ((this->fields)._center,(this->fields)._size,(this->fields)._rotationDegrees,
                      (MethodInfo *)0x0);
  pRVar1 = RectEx::RectEx_FromPoints
                     (&RStack_2,(IEnumerable_1_UnityEngine_Vector2_ *)points,(MethodInfo *)0x0);
  fVar3 = pRVar1->m_YMin;
  fVar4 = pRVar1->m_Width;
  fVar5 = pRVar1->m_Height;
  __return_storage_ptr__->m_XMin = pRVar1->m_XMin;
  __return_storage_ptr__->m_YMin = fVar3;
  __return_storage_ptr__->m_Width = fVar4;
  __return_storage_ptr__->m_Height = fVar5;
  return __return_storage_ptr__;
}


/* Vector2 GetExtentPoint(Shape2DExtentPoint) */

Vector2 Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_GetExtentPoint
                  (QuadShape2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  fVar1 = (this->fields)._size.x * _UNK_?;
  fVar2 = (this->fields)._size.y * _UNK_?;
  if (extentPt == Shape2DExtentPoint__Enum_Left) {
    fVar3 = (this->fields)._center.x;
    fVar4 = (this->fields)._center.y;
    VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                      ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
    fStackX_8 = VVar5.x;
    fStackX_c = VVar5.y;
    fStackX_8 = fStackX_8 * fVar1;
    fStackX_c = fStackX_c * fVar1;
code_?:
    VVar5.y = fVar4 - fStackX_c;
    VVar5.x = fVar3 - fStackX_8;
  }
  else {
    if (extentPt == Shape2DExtentPoint__Enum_Top) {
      fVar3 = (this->fields)._center.x;
      fVar4 = (this->fields)._center.y;
      VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                        ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
      fStackX_8 = VVar5.x;
      fStackX_c = VVar5.y;
      fStackX_8 = fStackX_8 * fVar2;
      fStackX_c = fStackX_c * fVar2;
    }
    else {
      if (extentPt != Shape2DExtentPoint__Enum_Right) {
        if (extentPt != Shape2DExtentPoint__Enum_Bottom) {
          VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_ModelRightAngleCorner
                            ((MethodInfo *)this);
          return VVar5;
        }
        fVar3 = (this->fields)._center.x;
        fVar4 = (this->fields)._center.y;
        VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Up
                          ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
        fStackX_8 = VVar5.x;
        fStackX_c = VVar5.y;
        fStackX_8 = fStackX_8 * fVar2;
        fStackX_c = fStackX_c * fVar2;
        goto code_?;
      }
      fVar3 = (this->fields)._center.x;
      fVar4 = (this->fields)._center.y;
      VVar5 = RightAngTriangle2D::RightAngTriangle2D_get_Right
                        ((RightAngTriangle2D *)this,(MethodInfo *)0x0);
      fStackX_8 = VVar5.x;
      fStackX_c = VVar5.y;
      fStackX_8 = fStackX_8 * fVar1;
      fStackX_c = fStackX_c * fVar1;
    }
    VVar5.y = fStackX_c + fVar4;
    VVar5.x = fStackX_8 + fVar3;
  }
  return VVar5;
}


/* Single GetSizeAlongDirection(Vector2) */

float Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_GetSizeAlongDirection
                (QuadShape2D *this,Vector2 direction,MethodInfo *method)

{
  pQVar1 = QuadShape2D_get_Rotation(aQStack_2,this,(MethodInfo *)0x0);
  fVar3 = pQVar1->x;
  fVar4 = pQVar1->y;
  fVar5 = pQVar1->z;
  fVar6 = pQVar1->w;
  fVar7 = fVar5 + fVar5;
  fVar8 = fVar4 + fVar4;
  fStackX_8 = direction.x;
  fStackX_c = direction.y;
  return (float)((uint)(((_UNK_? - (fVar8 * fVar4 + fVar7 * fVar5)) * (this->fields)._size.x
                         + (fVar8 * fVar3 - fVar7 * fVar6) * (this->fields)._size.y +
                        (fVar7 * fVar3 + fVar8 * fVar6) * 0.0) * fStackX_8 +
                       ((_UNK_? - ((fVar3 + fVar3) * fVar3 + fVar7 * fVar5)) *
                        (this->fields)._size.y +
                        (fVar7 * fVar6 + fVar8 * fVar3) * (this->fields)._size.x +
                       (fVar7 * fVar4 - (fVar3 + fVar3) * fVar6) * 0.0) * fStackX_c) &
                _UNK_?);
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_RenderArea
               (QuadShape2D *this,Camera *camera,MethodInfo *method)

{
  GraphicsEx::GraphicsEx_DrawQuad2D
            ((this->fields)._center,(this->fields)._size,(this->fields)._rotationDegrees,camera,
             (MethodInfo *)0x0);
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_RenderBorder
               (QuadShape2D *this,Camera *camera,MethodInfo *method)

{
  GraphicsEx::GraphicsEx_DrawQuadBorder2D
            ((this->fields)._center,(this->fields)._size,(this->fields)._rotationDegrees,camera,
             (MethodInfo *)0x0);
  return;
}


/* QuadShape2D() */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D__ctor(QuadShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  bVar2 = cRam_? == '\0';
  (this->fields)._center.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._center.y = fVar1;
  if (bVar2) {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).y;
  (this->fields)._size.x = (TypeInfo__UnityEngine__Vector2->static_fields->oneVector).x;
  (this->fields)._size.y = fVar1;
  return;
}


/* Vector2 get_Extents() */

Vector2 Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_get_Extents
                  (QuadShape2D *this,MethodInfo *method)

{
  VVar1.y = (this->fields)._size.y * _UNK_?;
  VVar1.x = (this->fields)._size.x * _UNK_?;
  return VVar1;
}


/* Quaternion get_Rotation() */

Quaternion *
Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_get_Rotation
          (Quaternion *__return_storage_ptr__,QuadShape2D *this,MethodInfo *method)

{
  fVar1 = (this->fields)._rotationDegrees;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_3._0_4_ = (pVVar2->forwardVector).x;
  uStack_3._4_4_ = (pVVar2->forwardVector).y;
  fStack_4 = (pVVar2->forwardVector).z;
  uStack_5 = 0;
  uStack_6 = 0;
  pcVar7 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
    uVar8 = func_?(&UNK_?);
    FUN_?(uVar8,0);
    pcVar7 = (code *)swi(3);
    pQVar9 = (Quaternion *)(*pcVar7)();
    return pQVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar1,&uStack_3,&uStack_5);
  __return_storage_ptr__->x = (float)(undefined4)uStack_5;
  __return_storage_ptr__->y = (float)uStack_5._4_4_;
  __return_storage_ptr__->z = (float)(undefined4)uStack_6;
  __return_storage_ptr__->w = (float)uStack_6._4_4_;
  return __return_storage_ptr__;
}


/* Void set_HeightEps(Single) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_HeightEps
               (QuadShape2D *this,float value,MethodInfo *method)

{
  (this->fields)._epsilon._sizeEps.y = (float)((uint)value & _UNK_?);
  return;
}


/* Void set_RotationDegrees(Single) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_RotationDegrees
               (QuadShape2D *this,float value,MethodInfo *method)

{
  fVar1 = (float)FUN_?(value,_UNK_?);
  (this->fields)._rotationDegrees = fVar1;
  return;
}


/* Void set_Size(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_Size
               (QuadShape2D *this,Vector2 value,MethodInfo *method)

{
  fStackX_8 = value.x;
  (this->fields)._size.x = (float)((uint)fStackX_8 & _UNK_?);
  fStackX_c = value.y;
  (this->fields)._size.y = (float)((uint)fStackX_c & _UNK_?);
  return;
}


/* Void set_SizeEps(Vector2) */

void Assembly-CSharp.dll::RTG::QuadShape2D::QuadShape2D_set_SizeEps
               (QuadShape2D *this,Vector2 value,MethodInfo *method)

{
  fStackX_8 = value.x;
  (this->fields)._epsilon._sizeEps.x = (float)((uint)fStackX_8 & _UNK_?);
  fStackX_c = value.y;
  (this->fields)._epsilon._sizeEps.y = (float)((uint)fStackX_c & _UNK_?);
  return;
}

