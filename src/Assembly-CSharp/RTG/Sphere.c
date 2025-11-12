
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::Sphere::Sphere_ContainsPoint
               (Sphere *this,Vector3 *point,MethodInfo *method)

{
  uVar1 = point->x;
  uVar2 = point->y;
  uVar3 = (this->_center).x;
  fVar4 = (this->_center).z - point->z;
  fVar5 = (this->_center).y - (float)uVar2;
  return fVar5 * fVar5 + ((float)uVar3 - (float)uVar1) * ((float)uVar3 - (float)uVar1) +
         fVar4 * fVar4 <= this->_radius * this->_radius;
}


/* Void Encapsulate(Sphere) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere_Encapsulate
               (Sphere *this,Sphere *sphere,MethodInfo *method)

{
  uVar1 = (sphere->_center).x;
  uVar2 = (sphere->_center).y;
  uVar3 = (this->_center).x;
  uVar4 = (this->_center).y;
  fVar5 = (sphere->_center).z - (this->_center).z;
  uStack_6 = CONCAT44((float)uVar2 - (float)uVar4,(float)uVar1 - (float)uVar3);
  fStack_7 = fVar5;
  fVar8 = (float)FUN_?(&uStack_6);
  if (_UNK_? < fVar8) {
    fVar5 = fVar5 / fVar8;
    uStack_6 = CONCAT44(((float)uVar2 - (float)uVar4) / fVar8,
                         ((float)uVar1 - (float)uVar3) / fVar8);
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
    uStack_6._0_4_ = (pVVar9->zeroVector).x;
    uStack_6._4_4_ = (pVVar9->zeroVector).y;
    fVar5 = (pVVar9->zeroVector).z;
  }
  fVar8 = sphere->_radius;
  uVar10 = (sphere->_center).x;
  uVar11 = (sphere->_center).y;
  fVar12 = (float)uStack_6;
  fVar13 = uStack_6._4_4_;
  fVar14 = (float)uStack_6 * fVar8 + (float)uVar10;
  fVar15 = uStack_6._4_4_ * fVar8 + (float)uVar11;
  fVar16 = fVar5 * fVar8 + (sphere->_center).z;
  uVar17 = (this->_center).x;
  uVar18 = (this->_center).y;
  fVar8 = (this->_center).z - fVar16;
  if (this->_radius * this->_radius <
      ((float)uVar18 - fVar15) * ((float)uVar18 - fVar15) +
      ((float)uVar17 - fVar14) * ((float)uVar17 - fVar14) + fVar8 * fVar8) {
    fVar8 = this->_radius;
    uVar19 = (this->_center).x;
    uVar20 = (this->_center).y;
    fStack_7 = fVar16 - ((this->_center).z - fVar5 * fVar8);
    uStack_6 = CONCAT44(fVar15 - ((float)uVar20 - uStack_6._4_4_ * fVar8),
                         fVar14 - ((float)uVar19 - (float)uStack_6 * fVar8));
    fVar21 = (float)FUN_?(&uStack_6);
    fVar8 = 0.0;
    if (0.0 <= fVar21 * _UNK_?) {
      fVar8 = fVar21 * _UNK_?;
    }
    this->_radius = fVar8;
    (this->_center).x = fVar14 - fVar12 * fVar8;
    (this->_center).y = fVar15 - fVar13 * fVar8;
    (this->_center).z = fVar16 - fVar5 * fVar8;
  }
  return;
}


/* List`1[UnityEngine.Vector3] GetRightUpExtents(Vector3, Vector3) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::Sphere::Sphere_GetRightUpExtents
          (Sphere *this,Vector3 *right,Vector3 *up,MethodInfo *method)

{
  VStack_1.x = up->x;
  VStack_1.y = up->y;
  VStack_1.z = up->z;
  VStack_2.x = right->x;
  VStack_2.y = right->y;
  VStack_2.z = right->z;
  aVStack_3[0].x = (this->_center).x;
  aVStack_3[0].y = (this->_center).y;
  aVStack_3[0].z = (this->_center).z;
  pLVar4 = SphereMath::SphereMath_CalcRightUpExtents
                     (aVStack_3,this->_radius,&VStack_2,&VStack_1,(MethodInfo *)0x0);
  return pLVar4;
}


/* Sphere(Vector3, Single) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere__ctor
               (Sphere *this,Vector3 *center,float radius,MethodInfo *method)

{
  fVar1 = center->y;
  fVar2 = center->z;
  (this->_center).x = center->x;
  (this->_center).y = fVar1;
  (this->_center).z = fVar2;
  fVar2 = 0.0;
  if (0.0 <= radius) {
    fVar2 = radius;
  }
  this->_radius = fVar2;
  return;
}


/* Sphere(AABB) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere__ctor_1(Sphere *this,AABB *aabb,MethodInfo *method)

{
  fVar1 = _UNK_?;
  fVar2 = (aabb->_center).y;
  fStack_3 = (aabb->_size).z;
  fVar4 = (aabb->_center).z;
  (this->_center).x = (aabb->_center).x;
  (this->_center).y = fVar2;
  uVar5 = (aabb->_size).x;
  uVar6 = (aabb->_size).y;
  (this->_center).z = fVar4;
  fStack_3 = fStack_3 * fVar1;
  uStack_7 = CONCAT44((float)uVar6 * fVar1,(float)uVar5 * fVar1);
  fVar4 = (float)FUN_?(&uStack_7);
  this->_radius = fVar4;
  return;
}


/* Sphere(IEnumerable`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere__ctor_2
               (Sphere *this,IEnumerable_1_UnityEngine_Vector3_ *pointCloud,MethodInfo *method)

{
  pSStack_1 = this;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar2 = _UNK_?;
  fVar3 = _UNK_?;
  if (pointCloud == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    fVar4 = _UNK_?;
    fVar5 = _UNK_?;
    plStack_6 = (longlong *)
                  FUN_?(0,
                                TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                                ,pointCloud);
    uStack_7 = 0;
    pplStack_8 = &plStack_6;
    fVar9 = fVar2;
    fVar10 = fVar2;
    fVar11 = fVar3;
    fVar12 = fVar3;
    while (plStack_6 != (longlong *)0x0) {
      cVar13 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      plVar14 = plStack_6;
      if (cVar13 == '\0') {
        if (plStack_6 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plStack_6);
        }
        fVar4 = _UNK_?;
        fVar5 = (fVar10 + fVar12) * _UNK_?;
        fVar15 = (fVar9 + fVar11) * _UNK_?;
        (this->_center).x = (fVar2 + fVar3) * _UNK_?;
        (this->_center).y = fVar5;
        (this->_center).z = fVar15;
        fStack_16 = fVar9 - fVar11;
        pSStack_1 = (Sphere *)CONCAT44(fVar10 - fVar12,fVar2 - fVar3);
        fVar3 = (float)FUN_?(&pSStack_1);
        this->_radius = fVar3 * fVar4;
        return;
      }
      if (plStack_6 == (longlong *)0x0) goto code_?;
      lVar17 = *plStack_6;
      uVar18 = 0;
      if (*(ushort *)(lVar17 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
               (*(longlong *)(lVar17 + 0xb0) + (ulonglong)uVar18 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar19 = (undefined8 *)
                     ((longlong)*(int *)(*(longlong *)(lVar17 + 0xb0) + 8 + (ulonglong)uVar18 * 0x10)
                      * 0x10 + 0x138 + lVar17);
            goto code_?;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 < *(ushort *)(lVar17 + 0x12e));
      }
      puVar19 = (undefined8 *)
               FUN_?(plStack_6,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                             ,0,
                             TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                             ,fVar4,fVar5);
code_?:
      puVar19 = (undefined8 *)(*(code *)*puVar19)(auStack_20,plVar14,puVar19[1]);
      uVar21 = *puVar19;
      if ((float)uVar21 < fVar3) {
        fVar3 = (float)uVar21;
      }
      uStack_22._4_4_ = (float)((ulonglong)uVar21 >> 0x20);
      if (uStack_22._4_4_ < fVar12) {
        fVar12 = uStack_22._4_4_;
      }
      if (*(float *)(puVar19 + 1) < fVar11) {
        fVar11 = *(float *)(puVar19 + 1);
      }
      uVar23 = *puVar19;
      if (fVar2 < (float)uVar23) {
        fVar2 = (float)uVar23;
      }
      uStack_24._4_4_ = (float)((ulonglong)uVar23 >> 0x20);
      if (fVar10 < uStack_24._4_4_) {
        fVar10 = uStack_24._4_4_;
      }
      fVar4 = fVar11;
      fVar5 = fVar10;
      uStack_22 = uVar21;
      uStack_24 = uVar23;
      if (fVar9 < *(float *)(puVar19 + 1)) {
        fVar9 = *(float *)(puVar19 + 1);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar25 = (code *)swi(3);
  (*pcVar25)();
  return;
}


/* Void set_Radius(Single) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere_set_Radius
               (Sphere *this,float value,MethodInfo *method)

{
  fVar1 = 0.0;
  if (0.0 <= value) {
    fVar1 = value;
  }
  this->_radius = fVar1;
  return;
}

