
/* Boolean ContainsPoint(Vector3) */

bool Assembly-CSharp.dll::RTG::Sphere::Sphere_ContainsPoint
               (Sphere *this,Vector3 point,MethodInfo *method)

{
  uVar1 = (this->_center).x;
  uVar2 = (this->_center).y;
  fVar3 = (this->_center).z - point.z;
  return ((float)uVar1 - point.x) * ((float)uVar1 - point.x) +
         ((float)uVar2 - point.y) * ((float)uVar2 - point.y) + fVar3 * fVar3 <=
         this->_radius * this->_radius;
}


/* Void Encapsulate(Sphere) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere_Encapsulate
               (Sphere *this,Sphere sphere,MethodInfo *method)

{
  uVar1 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uStack_4._0_4_ = (this->_center).x;
  uStack_4._4_4_ = (this->_center).y;
  fStack_5 = (this->_center).z;
  fStack_6 = sphere._center.z - fStack_5;
  value.y = sphere._center.y - (float)uStack_4._4_4_;
  value.x = sphere._center.x - (float)(undefined4)uStack_4;
  value.z = fStack_6;
  pVVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                     (&VStack_8,value,(MethodInfo *)0x0);
  uStack_9._0_4_ = pVVar7->x;
  uStack_9._4_4_ = pVVar7->y;
  fStack_6 = pVVar7->z;
  fVar10 = sphere._center.x + sphere._radius * (float)uStack_9;
  fStack_11 = sphere._center.y + sphere._radius * uStack_9._4_4_;
  fStack_12 = sphere._center.z + sphere._radius * fStack_6;
  uVar13 = (this->_center).x;
  uVar14 = (this->_center).y;
  fVar15 = (this->_center).z;
  fVar16 = (float)uVar13 - fVar10;
  fVar17 = fVar15 - fStack_12;
  if (this->_radius * this->_radius <
      fVar16 * fVar16 + ((float)uVar14 - fStack_11) * ((float)uVar14 - fStack_11) + fVar17 * fVar17) {
    uVar18 = (this->_center).x;
    uVar19 = (this->_center).y;
    uStack_4._0_4_ = pVVar7->x;
    uStack_4._4_4_ = pVVar7->y;
    fVar17 = this->_radius;
    fStack_20 = fStack_12 - (fVar15 - fStack_6 * fVar17);
    fVar16 = 0.0;
    uStack_21 = CONCAT44(fStack_11 - ((float)uVar19 - (float)uStack_4._4_4_ * fVar17),
                         fVar10 - ((float)uVar18 - (float)(undefined4)uStack_4 * fVar17));
    fStack_5 = fStack_20;
    fVar22 = (float10)func_?(&uStack_21,0,uVar1,uVar2,uVar3);
    fVar15 = 0.0;
    if (0.0 <= (float)(fVar22 * (float10)_UNK_?)) {
      fVar15 = (float)(fVar22 * (float10)_UNK_?);
    }
    this->_radius = fVar15;
    (this->_center).x = fVar16 - (float)uStack_9 * fVar15;
    (this->_center).y = fStack_11 - uStack_9._4_4_ * fVar15;
    (this->_center).z = fStack_12 - fStack_6 * fVar15;
  }
  return;
}


/* List`1[UnityEngine.Vector3] GetRightUpExtents(Vector3, Vector3) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::Sphere::Sphere_GetRightUpExtents
          (Sphere *this,Vector3 right,Vector3 up,MethodInfo *method)

{
  pLVar1 = SphereMath::SphereMath_CalcRightUpExtents
                     (this->_center,this->_radius,right,up,(MethodInfo *)0x0);
  return pLVar1;
}


/* Sphere(Vector3, Single) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere__ctor
               (Sphere *this,Vector3 center,float radius,MethodInfo *method)

{
  (this->_center).x = center.x;
  (this->_center).y = center.y;
  (this->_center).z = center.z;
  fVar1 = 0.0;
  if (0.0 <= radius) {
    fVar1 = radius;
  }
  this->_radius = fVar1;
  return;
}


/* Sphere(AABB) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere__ctor_1(Sphere *this,AABB aabb,MethodInfo *method)

{
  (this->_center).x = aabb._center.x;
  (this->_center).y = aabb._center.y;
  (this->_center).z = aabb._center.z;
  pVVar1 = OBB::OBB_get_Extents(&VStack_2,(OBB *)&aabb,(MethodInfo *)0x0);
  uStack_3._0_4_ = pVVar1->x;
  uStack_3._4_4_ = pVVar1->y;
  fStack_4 = pVVar1->z;
  fVar5 = (float10)func_?(&uStack_3,0);
  this->_radius = (float)fVar5;
  return;
}


/* Sphere(IEnumerable`1[UnityEngine.Vector3]) */

void Assembly-CSharp.dll::RTG::Sphere::Sphere__ctor_2
               (Sphere *this,IEnumerable_1_UnityEngine_Vector3_ *pointCloud,MethodInfo *method)

{
  puStack_1 = &stack0xfffffffc;
  uStack_2 = 0xffffffff;
  puStack_3 = &DAT_?;
  uStack_4 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_4;
  puStack_5 = &stack0xffffff30;
  puVar6 = &stack0xfffffffc;
  puVar7 = &stack0xffffff30;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__IDisposable);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__IEnumerator);
    cRam_? = '\x01';
    puVar6 = puStack_1;
    puVar7 = puStack_5;
  }
  puStack_5 = puVar7;
  puStack_1 = puVar6;
  fStack_8 = _UNK_?;
  fStack_9 = _UNK_?;
  fStack_10 = _UNK_?;
  fStack_11 = _UNK_?;
  fStack_12 = _UNK_?;
  fStack_13 = _UNK_?;
  fStack_14 = _UNK_?;
  fStack_15 = _UNK_?;
  fStack_16 = _UNK_?;
  fStack_17 = _UNK_?;
  fStack_18 = _UNK_?;
  fStack_19 = _UNK_?;
  if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    piStack_20 = (int *)func_?(0,
                                        TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                                        ,pointCloud);
    ppiStack_21 = &piStack_20;
    uStack_22 = 0;
    uStack_2 = 1;
    fVar23 = fStack_18;
    while (fStack_18 = fVar23, piStack_20 != (int *)0x0) {
      cVar24 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_20);
      if (cVar24 == '\0') {
        uStack_2 = 0xffffffff;
        if (piStack_20 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piStack_20);
        }
        uStack_2 = 0xffffffff;
        fVar23 = (fStack_12 + fStack_18) * _UNK_?;
        fVar25 = (fStack_10 + fStack_16) * _UNK_?;
        fStack_26 = fStack_18 - fStack_12;
        (this->_center).x = (fStack_8 + fStack_14) * _UNK_?;
        (this->_center).y = fVar25;
        (this->_center).z = fVar23;
        uStack_27 = CONCAT44(fStack_16 - fStack_10,fStack_14 - fStack_8);
        ppiStack_21 = (int **)fStack_26;
        fVar28 = (float10)func_?(&uStack_27,0);
        this->_radius = (float)(fVar28 * (float10)_UNK_?);
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      piStack_29 = piStack_20;
      if (piStack_20 == (int *)0x0) break;
      iStack_30 = *piStack_20;
      uVar31 = 0;
      uStack_32 = 0;
      uVar33 = *(ushort *)(iStack_30 + 0xb6);
      uStack_34 = (uint)uVar33;
      if (uVar33 != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
               (*(int *)(iStack_30 + 0x58) + (uint)uVar31 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar35 = (undefined4 *)
                     (iStack_30 +
                     (*(int *)(*(int *)(iStack_30 + 0x58) + 4 + (uint)uVar31 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar31 = uVar31 + 1;
        } while (uVar31 < uVar33);
      }
      puVar35 = (undefined4 *)
               func_?(piStack_20,
                               TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                               ,0);
code_?:
      puVar36 = (undefined8 *)(*(code *)*puVar35)(auStack_37,piStack_29,puVar35[1]);
      uVar38 = *puVar36;
      fStack_26 = *(float *)(puVar36 + 1);
      uStack_27._0_4_ = (float)uVar38;
      if ((float)uStack_27 < fStack_8) {
        fStack_8 = (float)uStack_27;
      }
      uStack_27._4_4_ = (float)((ulonglong)uVar38 >> 0x20);
      if (uStack_27._4_4_ < fStack_10) {
        fStack_10 = uStack_27._4_4_;
      }
      if (fStack_26 < fStack_12) {
        fStack_12 = fStack_26;
      }
      if (fStack_14 < (float)uStack_27) {
        fStack_14 = (float)uStack_27;
      }
      if (fStack_16 < uStack_27._4_4_) {
        fStack_16 = uStack_27._4_4_;
      }
      uStack_27 = uVar38;
      fStack_9 = fStack_8;
      fStack_11 = fStack_10;
      fStack_13 = fStack_12;
      fStack_15 = fStack_14;
      fStack_17 = fStack_16;
      fStack_19 = fStack_26;
      fVar23 = fStack_26;
      if (fStack_26 <= fStack_18) {
        fStack_19 = fStack_18;
        fVar23 = fStack_18;
      }
    }
  }
  uVar39 = func_?();
  func_?(uVar39);
  pcVar40 = (code *)swi(3);
  (*pcVar40)();
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

