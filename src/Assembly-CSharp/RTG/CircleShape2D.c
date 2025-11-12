
/* Void CalcModelBorderPoints() */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_CalcModelBorderPoints
               (CircleShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = PrimitiveFactory::PrimitiveFactory_Generate2DCircleBorderPointsCW
                     (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector,_UNK_?,
                      (this->fields)._numBorderPoints,(MethodInfo *)0x0);
  bVar2 = iRam_? != 0;
  (this->fields)._modelBorderPoints = pLVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._modelBorderPoints >> 0xc);
    uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
      puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
      LOCK();
      bVar2 = uVar5 == *puVar6;
      if (bVar2) {
        *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar2);
  }
  (this->fields)._areModelBorderPointsDirty = 0;
  return;
}


/* Boolean ContainsPoint(Vector2) */

bool Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_ContainsPoint
               (CircleShape2D *this,Vector2 point,MethodInfo *method)

{
  fStack_1 = point.x;
  fStack_2 = point.y;
  fVar3 = (this->fields)._radius;
  auStackX_8[0] =
       CONCAT44(fStack_2 - (this->fields)._center.y,fStack_1 - (this->fields)._center.x);
  if ((this->fields)._ptContainMode == 0) {
    fVar4 = (this->fields)._epsilon._radiusEps;
    fVar5 = (float)FUN_?(auStackX_8);
    return fVar5 <= fVar3 + fVar4;
  }
  fVar4 = (this->fields)._epsilon._wireEps;
  fVar5 = (float)FUN_?(auStackX_8);
  if (fVar5 < fVar3 - fVar4) {
    return 0;
  }
  return fVar5 <= fVar4 + fVar3;
}


/* Rect GetEncapsulatingRect() */

Rect * Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_GetEncapsulatingRect
                 (Rect *__return_storage_ptr__,CircleShape2D *this,MethodInfo *method)

{
  points = CircleMath::CircleMath_Calc2DExtentPoints
                     ((this->fields)._center,(this->fields)._radius,(this->fields)._rotationDegrees,
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

Vector2 Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_GetExtentPoint
                  (CircleShape2D *this,Shape2DExtentPoint__Enum extentPt,MethodInfo *method)

{
  if (extentPt == Shape2DExtentPoint__Enum_Left) {
    fVar1 = (this->fields)._center.x;
    fVar2 = (this->fields)._center.y;
    VVar3 = CircleShape2D_get_Right(this,(MethodInfo *)0x0);
code_?:
    fVar4 = (this->fields)._radius;
    fStackX_24 = VVar3.y;
    fStackX_20 = VVar3.x;
    VVar5.y = fVar2 - fVar4 * fStackX_24;
    VVar5.x = fVar1 - fVar4 * fStackX_20;
    return VVar5;
  }
  if (extentPt == Shape2DExtentPoint__Enum_Top) {
    fVar1 = (this->fields)._center.x;
    fVar2 = (this->fields)._center.y;
    VVar3 = CircleShape2D_get_Up(this,(MethodInfo *)0x0);
  }
  else {
    if (extentPt != Shape2DExtentPoint__Enum_Right) {
      if (extentPt != Shape2DExtentPoint__Enum_Bottom) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector2);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        return TypeInfo__UnityEngine__Vector2->static_fields->zeroVector;
      }
      fVar1 = (this->fields)._center.x;
      fVar2 = (this->fields)._center.y;
      VVar3 = CircleShape2D_get_Up(this,(MethodInfo *)0x0);
      goto code_?;
    }
    fVar1 = (this->fields)._center.x;
    fVar2 = (this->fields)._center.y;
    VVar3 = CircleShape2D_get_Right(this,(MethodInfo *)0x0);
  }
  fVar4 = (this->fields)._radius;
  fStackX_24 = VVar3.y;
  fStackX_20 = VVar3.x;
  VVar3.y = fVar4 * fStackX_24 + fVar2;
  VVar3.x = fVar4 * fStackX_20 + fVar1;
  return VVar3;
}


/* List`1[UnityEngine.Vector2] GetExtentPoints() */

List_1_UnityEngine_Vector2_ *
Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_GetExtentPoints
          (CircleShape2D *this,MethodInfo *method)

{
  VVar1 = (this->fields)._center;
  fVar2 = (this->fields)._rotationDegrees;
  fVar3 = (this->fields)._radius;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
                  ,fVar3,fVar2,0);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar4 = TypeInfo__UnityEngine__Vector3->static_fields;
  uStack_5._0_4_ = (pVVar4->forwardVector).x;
  uStack_5._4_4_ = (pVVar4->forwardVector).y;
  fStack_6 = (pVVar4->forwardVector).z;
  uStack_7 = 0;
  uStack_8 = 0;
  pcVar9 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
    uVar10 = func_?(&UNK_?);
    FUN_?(uVar10,0);
    pcVar9 = (code *)swi(3);
    pLVar11 = (List_1_UnityEngine_Vector2_ *)(*pcVar9)();
    return pLVar11;
  }
  pcRam_? = pcVar9;
  (*pcRam_?)(fVar2,&uStack_5,&uStack_7);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  pVVar12 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar13 = uStack_7._4_4_ + uStack_7._4_4_;
  fVar14 = (float)uStack_8 + (float)uStack_8;
  fVar15 = (_UNK_? - (uStack_7._4_4_ * fVar13 + (float)uStack_8 * fVar14)) *
           (pVVar12->rightVector).x +
           ((float)uStack_7 * fVar13 - uStack_8._4_4_ * fVar14) * (pVVar12->rightVector).y +
           ((float)uStack_7 * fVar14 + uStack_8._4_4_ * fVar13) * 0.0;
  fVar13 = (_UNK_? -
          ((float)uStack_7 * ((float)uStack_7 + (float)uStack_7) + (float)uStack_8 * fVar14)) *
          (pVVar12->rightVector).y +
          (uStack_8._4_4_ * fVar14 + (float)uStack_7 * fVar13) * (pVVar12->rightVector).x +
          (uStack_7._4_4_ * fVar14 - uStack_8._4_4_ * ((float)uStack_7 + (float)uStack_7)) * 0.0
  ;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar12 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar16 = uStack_7._4_4_ + uStack_7._4_4_;
  fVar17 = (float)uStack_8 + (float)uStack_8;
  fVar14 = (fVar2 - (uStack_7._4_4_ * fVar16 + (float)uStack_8 * fVar17)) * (pVVar12->upVector).x +
           ((float)uStack_7 * fVar16 - uStack_8._4_4_ * fVar17) * (pVVar12->upVector).y +
           ((float)uStack_7 * fVar17 + uStack_8._4_4_ * fVar16) * 0.0;
  fVar16 = (fVar2 - ((float)uStack_7 * ((float)uStack_7 + (float)uStack_7) +
                    (float)uStack_8 * fVar17)) * (pVVar12->upVector).y +
           (uStack_8._4_4_ * fVar17 + (float)uStack_7 * fVar16) * (pVVar12->upVector).x +
           (uStack_7._4_4_ * fVar17 - uStack_8._4_4_ * ((float)uStack_7 + (float)uStack_7)) *
           0.0;
  pLVar11 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar11,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__)
  ;
  fStack_18 = VVar1.x;
  fStack_19 = VVar1.y;
  fVar2 = fVar14 * fVar3 + fStack_18;
  if (pLVar11 == (List_1_UnityEngine_Vector2_ *)0x0) {
    FUN_?(fVar2);
    pcVar9 = (code *)swi(3);
    pLVar11 = (List_1_UnityEngine_Vector2_ *)(*pcVar9)();
    return pLVar11;
  }
  FUN_?(pLVar11,CONCAT44(fVar16 * fVar3 + fStack_19,fVar2),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  FUN_?(pLVar11,CONCAT44(fVar13 * fVar3 + fStack_19,fVar15 * fVar3 + fStack_18),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  FUN_?(pLVar11,CONCAT44(fStack_19 - fVar16 * fVar3,fStack_18 - fVar14 * fVar3),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  FUN_?(pLVar11,CONCAT44(fStack_19 - fVar13 * fVar3,fStack_18 - fVar15 * fVar3),
                MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__Add_UnityEngine__Vector2_
               );
  return pLVar11;
}


/* Void RenderArea(Camera) */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_RenderArea
               (CircleShape2D *this,Camera *camera,MethodInfo *method)

{
  if ((this->fields)._areModelBorderPointsDirty != 0) {
    CircleShape2D_CalcModelBorderPoints(this,(MethodInfo *)0x0);
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields)._radius;
  scale.y = fVar1;
  scale.x = fVar1;
  GLRenderer::GLRenderer_DrawTriangleFan2D
            (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector,
             (this->fields)._modelBorderPoints,(this->fields)._center,scale,camera,(MethodInfo *)0x0
            );
  return;
}


/* Void RenderBorder(Camera) */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_RenderBorder
               (CircleShape2D *this,Camera *camera,MethodInfo *method)

{
  if ((this->fields)._areModelBorderPointsDirty != 0) {
    CircleShape2D_CalcModelBorderPoints(this,(MethodInfo *)0x0);
  }
  fVar1 = (this->fields)._radius;
  scale.y = fVar1;
  scale.x = fVar1;
  GLRenderer::GLRenderer_DrawLines2D_1
            ((this->fields)._modelBorderPoints,(this->fields)._center,scale,camera,(MethodInfo *)0x0
            );
  return;
}


/* CircleShape2D() */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D__ctor
               (CircleShape2D *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).y;
  (this->fields)._center.x = (TypeInfo__UnityEngine__Vector2->static_fields->zeroVector).x;
  (this->fields)._center.y = fVar1;
  (this->fields)._radius = 1.0;
  (this->fields)._numBorderPoints = 100;
  pLVar2 = (List_1_UnityEngine_Vector2_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector2>);
  FUN_?(pLVar2,MethodInfo__System__Collections__Generic__List<UnityEngine::Vector2>__List__)
  ;
  bVar3 = iRam_? != 0;
  (this->fields)._modelBorderPoints = pLVar2;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields)._modelBorderPoints >> 0xc);
    uVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  (this->fields)._areModelBorderPointsDirty = 1;
  return;
}


/* Vector2 get_Right() */

Vector2 Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_get_Right
                  (CircleShape2D *this,MethodInfo *method)

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
    VVar9 = (Vector2)(*pcVar7)();
    return VVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar1,&uStack_3,&uStack_5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar11 = (float)uStack_6 + (float)uStack_6;
  fVar1 = uStack_5._4_4_ + uStack_5._4_4_;
  VVar9.y = (_UNK_? -
            ((float)uStack_5 * ((float)uStack_5 + (float)uStack_5) + (float)uStack_6 * fVar11)) *
            (pVVar10->rightVector).y +
            (uStack_6._4_4_ * fVar11 + (float)uStack_5 * fVar1) * (pVVar10->rightVector).x +
            (uStack_5._4_4_ * fVar11 - uStack_6._4_4_ * ((float)uStack_5 + (float)uStack_5)) *
            0.0;
  VVar9.x = (_UNK_? - (uStack_5._4_4_ * fVar1 + (float)uStack_6 * fVar11)) *
            (pVVar10->rightVector).x +
            ((float)uStack_5 * fVar1 - uStack_6._4_4_ * fVar11) * (pVVar10->rightVector).y +
            ((float)uStack_5 * fVar11 + uStack_6._4_4_ * fVar1) * 0.0;
  return VVar9;
}


/* Vector2 get_Up() */

Vector2 Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_get_Up
                  (CircleShape2D *this,MethodInfo *method)

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
    VVar9 = (Vector2)(*pcVar7)();
    return VVar9;
  }
  pcRam_? = pcVar7;
  (*pcRam_?)(fVar1,&uStack_3,&uStack_5);
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector2);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar10 = TypeInfo__UnityEngine__Vector2->static_fields;
  fVar11 = (float)uStack_6 + (float)uStack_6;
  fVar1 = uStack_5._4_4_ + uStack_5._4_4_;
  VVar9.y = (_UNK_? -
            ((float)uStack_5 * ((float)uStack_5 + (float)uStack_5) + (float)uStack_6 * fVar11)) *
            (pVVar10->upVector).y +
            (uStack_6._4_4_ * fVar11 + (float)uStack_5 * fVar1) * (pVVar10->upVector).x +
            (uStack_5._4_4_ * fVar11 - uStack_6._4_4_ * ((float)uStack_5 + (float)uStack_5)) *
            0.0;
  VVar9.x = (_UNK_? - (uStack_5._4_4_ * fVar1 + (float)uStack_6 * fVar11)) *
            (pVVar10->upVector).x +
            ((float)uStack_5 * fVar1 - uStack_6._4_4_ * fVar11) * (pVVar10->upVector).y +
            ((float)uStack_5 * fVar11 + uStack_6._4_4_ * fVar1) * 0.0;
  return VVar9;
}


/* Void set_NumBorderPoints(Int32) */

void Assembly-CSharp.dll::RTG::CircleShape2D::CircleShape2D_set_NumBorderPoints
               (CircleShape2D *this,int32_t value,MethodInfo *method)

{
  (this->fields)._areModelBorderPointsDirty = 1;
  if (value < 5) {
    value = 4;
  }
  (this->fields)._numBorderPoints = value;
  return;
}

