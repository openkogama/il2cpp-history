
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
  fVar18 = this->_radius;
  if (fVar18 * fVar18 <
      ((float)uVar14 - fStack_11) * ((float)uVar14 - fStack_11) + fVar16 * fVar16 + fVar17 * fVar17) {
    uVar19 = (this->_center).x;
    uVar20 = (this->_center).y;
    uStack_4._0_4_ = pVVar7->x;
    uStack_4._4_4_ = pVVar7->y;
    fStack_21 = fStack_12 - (fVar15 - fStack_6 * fVar18);
    fVar15 = 0.0;
    uStack_22 = CONCAT44(fStack_11 - ((float)uVar20 - (float)uStack_4._4_4_ * fVar18),
                         fVar10 - ((float)uVar19 - (float)(undefined4)uStack_4 * fVar18));
    fStack_5 = fStack_21;
    fVar23 = (float10)func_?(&uStack_22,0,uVar1,uVar2,uVar3);
    fVar18 = 0.0;
    if (0.0 <= (float)(fVar23 * (float10)_UNK_?)) {
      fVar18 = (float)(fVar23 * (float10)_UNK_?);
    }
    this->_radius = fVar18;
    (this->_center).x = fVar15 - (float)uStack_9 * fVar18;
    (this->_center).y = fStack_11 - uStack_9._4_4_ * fVar18;
    (this->_center).z = fStack_12 - fStack_6 * fVar18;
  }
  return;
}


/* List`1[UnityEngine.Vector3] GetRightUpExtents(Vector3, Vector3) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::Sphere::Sphere_GetRightUpExtents
          (Sphere *this,Vector3 right,Vector3 up,MethodInfo *method)

{
  uVar1 = (this->_center).x;
  uVar2 = (this->_center).y;
  fVar3 = this->_radius;
  fVar4 = (this->_center).z;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_00,4,
             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_int_);
  if (this_00 !=
      (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_ *)
      0x0) {
    func_?(this_00,CONCAT44((float)uVar2 - right.y * fVar3,(float)uVar1 - right.x * fVar3),
                    fVar4 - right.z * fVar3,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this_00,CONCAT44((float)uVar2 + up.y * fVar3,(float)uVar1 + up.x * fVar3),
                    fVar4 + up.z * fVar3,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this_00,CONCAT44((float)uVar2 + right.y * fVar3,(float)uVar1 + right.x * fVar3),
                    fVar4 + right.z * fVar3,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    func_?(this_00,CONCAT44((float)uVar2 - up.y * fVar3,(float)uVar1 - up.x * fVar3),
                    fVar4 - up.z * fVar3,
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__Add_UnityEngine__Vector3_
                   );
    return (List_1_UnityEngine_Vector3_ *)this_00;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_UnityEngine_Vector3_ *)(*pcVar5)();
  return pLVar6;
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
  VStack_2.x = pVVar1->x;
  VStack_2.y = pVVar1->y;
  VStack_2.z = pVVar1->z;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  dVar3 = (double)(VStack_2.y * VStack_2.y + VStack_2.x * VStack_2.x + VStack_2.z * VStack_2.z
                  );
  if (0.0 <= dVar3) {
    this->_radius = (float)SQRT(dVar3);
    return;
  }
  func_?();
  this->_radius = (float)dVar3;
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
  uStack_10 = 0;
  uStack_11 = 0;
  uStack_12 = 0;
  fStack_13 = _UNK_?;
  uStack_14 = CONCAT44(_UNK_?,_UNK_?);
  fStack_15 = _UNK_?;
  fStack_16 = _UNK_?;
  fStack_17 = _UNK_?;
  uStack_18 = CONCAT44(_UNK_?,_UNK_?);
  fStack_19 = _UNK_?;
  fStack_20 = _UNK_?;
  if (pointCloud != (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    piStack_21 = (int *)func_?(0,
                                        TypeInfo__System__Collections__Generic__IEnumerable<UnityEngine::Vector3>
                                        ,pointCloud);
    ppiStack_22 = &piStack_21;
    uStack_23 = 0;
    uStack_2 = 1;
    uVar24 = uStack_25;
    while (uStack_25 = uVar24, piStack_21 != (int *)0x0) {
      cVar26 = func_?(0,TypeInfo__System__Collections__IEnumerator,piStack_21);
      if (cVar26 == '\0') {
        uStack_2 = 0xffffffff;
        if (piStack_21 != (int *)0x0) {
          func_?(0,TypeInfo__System__IDisposable,piStack_21);
        }
        uStack_2 = 0xffffffff;
        fVar27 = fStack_16 + fStack_9;
        fStack_28 = (fStack_19 + fStack_15) * _UNK_?;
        fVar29 = (fStack_17 + fStack_13) * _UNK_?;
        fStack_16 = fStack_16 - fStack_9;
        fStack_19 = fStack_19 - fStack_15;
        fStack_17 = fStack_17 - fStack_13;
        (this->_center).x = fVar27 * _UNK_?;
        (this->_center).y = fVar29;
        (this->_center).z = fStack_28;
        if (cRam_? == '\0') {
          func_?(&TypeInfo__System__Math);
          cRam_? = '\x01';
        }
        if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__System__Math);
        }
        dVar30 = (double)(fStack_17 * fStack_17 + fStack_16 * fStack_16 + fStack_19 * fStack_19);
        if (dVar30 < 0.0) {
          func_?();
        }
        else {
          dVar30 = SQRT(dVar30);
        }
        this->_radius = (float)dVar30 * _UNK_?;
        *unaff_FS_OFFSET = uStack_4;
        return;
      }
      piStack_31 = piStack_21;
      if (piStack_21 == (int *)0x0) break;
      iStack_32 = *piStack_21;
      uVar33 = 0;
      uStack_34 = 0;
      if (*(ushort *)(iStack_32 + 0xb6) != 0) {
        do {
          if (*(IEnumerator_1_UnityEngine_Vector3___Class **)
               (*(int *)(iStack_32 + 0x58) + (uint)uVar33 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>) {
            puVar35 = (undefined4 *)
                     (iStack_32 + 0xc0 +
                     *(int *)(*(int *)(iStack_32 + 0x58) + 4 + (uint)uVar33 * 8) * 8);
            goto code_?;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 < *(ushort *)(iStack_32 + 0xb6));
      }
      puVar35 = (undefined4 *)
               func_?(piStack_21,
                               TypeInfo__System__Collections__Generic__IEnumerator<UnityEngine::Vector3>
                               ,0);
code_?:
      puVar36 = (undefined8 *)(*(code *)*puVar35)(auStack_37,piStack_31,puVar35[1]);
      uVar24 = *puVar36;
      fStack_38 = *(float *)(puVar36 + 1);
      uStack_25._0_4_ = (float)uVar24;
      if ((float)uStack_25 < fStack_9) {
        fStack_9 = (float)uStack_25;
      }
      uStack_25._4_4_ = (float)((ulonglong)uVar24 >> 0x20);
      if (uStack_25._4_4_ < fStack_13) {
        fStack_13 = uStack_25._4_4_;
      }
      fStack_39 = fStack_15;
      if (fStack_38 < fStack_15) {
        fStack_39 = fStack_38;
      }
      uStack_14 = CONCAT44(fStack_13,fStack_9);
      if ((float)uStack_25 <= fStack_16) {
        uStack_25._0_4_ = fStack_16;
      }
      if (uStack_25._4_4_ <= fStack_17) {
        uStack_25._4_4_ = fStack_17;
      }
      fStack_28 = fStack_38;
      if (fStack_38 <= fStack_19) {
        fStack_28 = fStack_19;
      }
      uStack_18 = CONCAT44(uStack_25._4_4_,(float)uStack_25);
      uStack_10 = 0;
      uStack_11 = 0;
      uStack_12 = 0;
      fStack_20 = fStack_28;
      fStack_8 = fStack_39;
      fStack_19 = fStack_28;
      fStack_16 = (float)uStack_25;
      fStack_17 = uStack_25._4_4_;
      fStack_15 = fStack_39;
    }
  }
  uVar40 = func_?();
  func_?(uVar40);
  pcVar41 = (code *)swi(3);
  (*pcVar41)();
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

