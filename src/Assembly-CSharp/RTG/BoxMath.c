
/* Boolean BoxIntersectsBox(Vector3, Vector3, Quaternion, Vector3, Vector3, Quaternion) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_BoxIntersectsBox
               (Vector3 center0,Vector3 size0,Quaternion rotation0,Vector3 center1,Vector3 size1,
               Quaternion rotation1,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  VStack_1.x = 0.0;
  VStack_1.y = 0.0;
  VStack_1.z = 0.0;
  VStack_2.x = 0.0;
  VStack_2.y = 0.0;
  VStack_2.z = 0.0;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  pVVar3 = TypeInfo__RTG__BoxMath->static_fields->A;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = rotation0.y;
  rotation.x = rotation0.x;
  rotation.z = rotation0.z;
  rotation.w = rotation0.w;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffff8c,rotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0)
  ;
  fVar5 = rotation0.w;
  if (pVVar3 != (Vector3__Array *)0x0) {
    fVar6 = pVVar4->y;
    fVar7 = pVVar4->z;
    if (pVVar3->max_length == 0) goto code_?;
    pVVar3->vector[0].x = pVVar4->x;
    pVVar3->vector[0].y = fVar6;
    pVVar3->vector[0].z = fVar7;
    pVVar3 = TypeInfo__RTG__BoxMath->static_fields->A;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation_01.y = rotation0.y;
    rotation_01.x = rotation0.x;
    rotation_01.z = rotation0.z;
    rotation_01.w = rotation0.w;
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffff8c,rotation_01,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    fVar5 = rotation0.w;
    if (pVVar3 != (Vector3__Array *)0x0) {
      fVar6 = pVVar4->y;
      fVar7 = pVVar4->z;
      if (pVVar3->max_length < 2) goto code_?;
      pVVar3->vector[1].x = pVVar4->x;
      pVVar3->vector[1].y = fVar6;
      pVVar3->vector[1].z = fVar7;
      pVVar3 = TypeInfo__RTG__BoxMath->static_fields->A;
      if (cRam_? == '\0') {
        pSStack_8 = (Single__Array_1 *)&TypeInfo__UnityEngine__Vector3;
        VStack_2.z = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      rotation_00.y = rotation0.y;
      rotation_00.x = rotation0.x;
      rotation_00.z = rotation0.z;
      rotation_00.w = rotation0.w;
      pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&rotation0.y,rotation_00,
                           TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                           (MethodInfo *)0x0);
      fVar5 = rotation0.w;
      if (pVVar3 != (Vector3__Array *)0x0) {
        fVar6 = pVVar4->y;
        fVar7 = pVVar4->z;
        if (pVVar3->max_length < 3) goto code_?;
        pVVar3->vector[2].x = pVVar4->x;
        pVVar3->vector[2].y = fVar6;
        pVVar3->vector[2].z = fVar7;
        pVVar3 = TypeInfo__RTG__BoxMath->static_fields->B;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&rotation0.y,rotation1,
                             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                             (MethodInfo *)0x0);
        fVar5 = rotation0.w;
        if (pVVar3 != (Vector3__Array *)0x0) {
          fVar6 = pVVar4->y;
          fVar7 = pVVar4->z;
          if (pVVar3->max_length == 0) goto code_?;
          pVVar3->vector[0].x = pVVar4->x;
          pVVar3->vector[0].y = fVar6;
          pVVar3->vector[0].z = fVar7;
          pVVar3 = TypeInfo__RTG__BoxMath->static_fields->B;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&rotation0.y,rotation1,
                               TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                               (MethodInfo *)0x0);
          fVar5 = rotation0.w;
          if (pVVar3 != (Vector3__Array *)0x0) {
            fVar6 = pVVar4->y;
            fVar7 = pVVar4->z;
            if (pVVar3->max_length < 2) goto code_?;
            pVVar3->vector[1].x = pVVar4->x;
            pVVar3->vector[1].y = fVar6;
            pVVar3->vector[1].z = fVar7;
            pVVar3 = TypeInfo__RTG__BoxMath->static_fields->B;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&rotation0.y,rotation1,
                                 TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                                 (MethodInfo *)0x0);
            fVar5 = rotation0.w;
            if (pVVar3 != (Vector3__Array *)0x0) {
              fVar6 = pVVar4->y;
              fVar7 = pVVar4->z;
              if (pVVar3->max_length < 3) goto code_?;
              pVVar3->vector[2].x = pVVar4->x;
              pVVar3->vector[2].y = fVar6;
              pVVar3->vector[2].z = fVar7;
              rotation0.w = 0.0;
              do {
                iVar9 = 0;
                do {
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pSVar10 = TypeInfo__RTG__BoxMath->static_fields->R;
                  fVar5 = rotation0.w;
                  if (((TypeInfo__RTG__BoxMath->static_fields->A == (Vector3__Array *)0x0) ||
                      (func_?(), fVar5 = rotation0.w,
                      TypeInfo__RTG__BoxMath->static_fields->B == (Vector3__Array *)0x0)) ||
                     (func_?(), fVar5 = rotation0.w, pSVar10 == (Single__Array_1 *)0x0))
                  goto code_?;
                  func_?();
                  iVar9 = iVar9 + 1;
                } while (iVar9 < 3);
                rotation0.w = (float)((int)rotation0.w + 1);
              } while ((int)rotation0.w < 3);
              fStack_11 = size0.x * _UNK_?;
              fStack_12 = size0.y * _UNK_?;
              VStack_1.z = size0.z * _UNK_?;
              VStack_1.y = fStack_12;
              VStack_1.x = fStack_11;
              fStack_13 = size1.x * _UNK_?;
              fStack_14 = size1.y * _UNK_?;
              fStack_15 = size1.z * _UNK_?;
              rotation0.w = 0.0;
              fStack_16 = VStack_1.z;
              do {
                iVar9 = 0;
                do {
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pSVar10 = TypeInfo__RTG__BoxMath->static_fields->absR;
                  fVar5 = rotation0.w;
                  if (TypeInfo__RTG__BoxMath->static_fields->R == (Single__Array_1 *)0x0)
                  goto code_?;
                  fVar17 = (float10)func_?();
                  fStack_18 = (float)fVar17;
                  fVar5 = rotation0.w;
                  if (pSVar10 == (Single__Array_1 *)0x0) goto code_?;
                  func_?();
                  iVar9 = iVar9 + 1;
                } while (iVar9 < 3);
                rotation0.w = (float)((int)rotation0.w + 1);
              } while ((int)rotation0.w < 3);
              puStack_19 = (undefined *)(center1.x - center0.x);
              rotation0.w = center1.y - center0.y;
              fStack_18 = center1.z - center0.z;
              if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar3 = TypeInfo__RTG__BoxMath->static_fields->A;
              fVar5 = rotation0.w;
              if (pVVar3 != (Vector3__Array *)0x0) {
                if (pVVar3->max_length == 0) goto code_?;
                uVar20 = pVVar3->vector[0].x;
                uVar21 = pVVar3->vector[0].y;
                fVar5 = pVVar3->vector[0].z;
                pVVar3 = TypeInfo__RTG__BoxMath->static_fields->A;
                rotation0.y = (float)uVar20;
                rotation0.z = (float)uVar21;
                if (pVVar3 != (Vector3__Array *)0x0) {
                  if (pVVar3->max_length < 2) goto code_?;
                  uVar22 = pVVar3->vector[1].x;
                  uVar23 = pVVar3->vector[1].y;
                  pVVar24 = TypeInfo__RTG__BoxMath->static_fields->A;
                  if (pVVar24 != (Vector3__Array *)0x0) {
                    if (pVVar24->max_length < 3) goto code_?;
                    uVar25 = pVVar24->vector[2].x;
                    uVar26 = pVVar24->vector[2].y;
                    uVar27 = 0;
                    fStack_28 = (float)puStack_19 * (float)uVar20 + rotation0.w * (float)uVar21 +
                                fStack_18 * fVar5;
                    fVar7 = fStack_18 * pVVar24->vector[2].z;
                    fStack_18 = (float)puStack_19 * (float)uVar22 + rotation0.w * (float)uVar23 +
                                fStack_18 * pVVar3->vector[1].z;
                    VStack_2.z = (float)puStack_19 * (float)uVar25 + rotation0.w * (float)uVar26 +
                                  fVar7;
                    VStack_2.y = fStack_18;
                    VStack_2.x = fStack_28;
                    rotation0.w = fVar5;
                    puStack_19 = (undefined *)VStack_2.z;
                    do {
                      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      pSVar10 = TypeInfo__RTG__BoxMath->static_fields->absR;
                      fVar5 = rotation0.w;
                      if (pSVar10 == (Single__Array_1 *)0x0) goto code_?;
                      if ((pSVar10->bounds->length <= uVar27) ||
                         (iVar29 = pSVar10->bounds[1].length, iVar29 == 0)) goto code_?;
                      pSStack_30 = (Single__Array_1 *)pSVar10->vector[iVar29 * uVar27];
                      pSVar10 = TypeInfo__RTG__BoxMath->static_fields->absR;
                      uVar31 = pSVar10->bounds[1].length;
                      if (uVar31 < 2) goto code_?;
                      fStack_32 = pSVar10->vector[uVar31 * uVar27 + 1];
                      pSVar10 = TypeInfo__RTG__BoxMath->static_fields->absR;
                      uVar31 = pSVar10->bounds[1].length;
                      if (uVar31 < 3) goto code_?;
                      pSStack_33 = (Single__Array_1 *)
                                   (fStack_15 * pSVar10->vector[uVar31 * uVar27 + 2]);
                      rotation0.w = UnityEngine.CoreModule.dll::UnityEngine::Vector3::
                                    Vector3_get_Item(&VStack_2,uVar27,(MethodInfo *)0x0);
                      pSStack_8 = (Single__Array_1 *)((uint)rotation0.w & _UNK_?);
                      fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         (&VStack_1,uVar27,(MethodInfo *)0x0);
                      rotation0.w = fVar5 + fStack_14 * fStack_32 + fStack_13 * (float)pSStack_30 +
                                             (float)pSStack_33;
                      if (rotation0.w < (float)pSStack_8) {
                        return 0;
                      }
                      uVar27 = uVar27 + 1;
                    } while ((int)uVar27 < 3);
                    uVar27 = 0;
                    rotation0.w = 2.24208e-44;
                    do {
                      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                        func_?();
                      }
                      fVar5 = rotation0.w;
                      pSVar10 = TypeInfo__RTG__BoxMath->static_fields->absR;
                      if (pSVar10 == (Single__Array_1 *)0x0) goto code_?;
                      if ((pSVar10->bounds->length == 0) || (pSVar10->bounds[1].length <= uVar27))
                      goto code_?;
                      pSStack_33 = TypeInfo__RTG__BoxMath->static_fields->absR;
                      if (pSStack_33->bounds->length < 2) goto code_?;
                      pSStack_8 = (Single__Array_1 *)pSStack_33->bounds[1].length;
                      pSStack_30 = TypeInfo__RTG__BoxMath->static_fields->absR;
                      if (pSStack_30->bounds->length < 3) goto code_?;
                      pSStack_33 = (Single__Array_1 *)
                                   (fStack_12 *
                                    pSStack_33->vector[(int)pSStack_8->vector + (uVar27 - 0x10)] +
                                    fStack_11 *
                                    *(float *)((int)pSVar10->vector + (int)rotation0.w + -0x10) +
                                   fStack_16 *
                                   pSStack_30->vector[uVar27 + pSStack_30->bounds[1].length * 2]);
                      pSVar10 = TypeInfo__RTG__BoxMath->static_fields->R;
                      if (pSVar10 == (Single__Array_1 *)0x0) goto code_?;
                      if ((pSVar10->bounds->length == 0) || (pSVar10->bounds[1].length <= uVar27))
                      goto code_?;
                      pSStack_8 = TypeInfo__RTG__BoxMath->static_fields->R;
                      if (pSStack_8->bounds->length < 2) goto code_?;
                      pSVar34 = TypeInfo__RTG__BoxMath->static_fields->R;
                      pIVar35 = pSVar34->bounds;
                      if (pIVar35->length < 3) goto code_?;
                      rotation0.w = (float)((uint)(fStack_28 *
                                                   *(float *)((int)pSVar10->vector +
                                                             (int)rotation0.w + -0x10) +
                                                   fStack_18 *
                                                   pSStack_8->vector
                                                   [pSStack_8->bounds[1].length + uVar27] +
                                                  (float)puStack_19 *
                                                  pSVar34->vector[uVar27 + pIVar35[1].length * 2]) &
                                           _UNK_?);
                      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                         ((Vector3 *)&stack0xffffffa4,uVar27,(MethodInfo *)0x0);
                      pSStack_8 = (Single__Array_1 *)(fVar7 + (float)pSStack_33);
                      if ((float)pSStack_8 < rotation0.w) {
                        return 0;
                      }
                      rotation0.w = (float)((int)fVar5 + 4);
                      uVar27 = uVar27 + 1;
                    } while ((int)rotation0.w < 0x1c);
                    if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                      VStack_1.x = (float)TypeInfo__RTG__BoxMath;
                      func_?();
                    }
                    fVar5 = rotation0.w;
                    if (TypeInfo__RTG__BoxMath->static_fields->absR != (Single__Array_1 *)0x0) {
                      VStack_1._0_8_ = VStack_1._0_8_ & 0xffffffff00000000;
                      fVar17 = (float10)func_?();
                      rotation0.w = (float)fVar17;
                      fVar5 = rotation0.w;
                      if (TypeInfo__RTG__BoxMath->static_fields->absR != (Single__Array_1 *)0x0) {
                        fVar17 = (float10)func_?();
                        rotation0.w = fStack_12 * rotation0.w;
                        fStack_32 = (float)(fVar17 * (float10)fStack_16 + (float10)rotation0.w);
                        fVar5 = rotation0.w;
                        if (TypeInfo__RTG__BoxMath->static_fields->absR != (Single__Array_1 *)0x0) {
                          fVar17 = (float10)func_?();
                          rotation0.w = (float)fVar17;
                          fVar5 = rotation0.w;
                          if (TypeInfo__RTG__BoxMath->static_fields->absR != (Single__Array_1 *)0x0)
                          {
                            fVar17 = (float10)func_?();
                            rotation0.w = (float)(fVar17 * (float10)fStack_15 +
                                                 (float10)(fStack_14 * rotation0.w));
                            fVar5 = rotation0.w;
                            if (TypeInfo__RTG__BoxMath->static_fields->R != (Single__Array_1 *)0x0)
                            {
                              fVar17 = (float10)func_?();
                              pSStack_8 = (Single__Array_1 *)(float)fVar17;
                              fVar5 = rotation0.w;
                              if (TypeInfo__RTG__BoxMath->static_fields->R != (Single__Array_1 *)0x0
                                 ) {
                                pSStack_8 = (Single__Array_1 *)
                                             ((float)puStack_19 * (float)pSStack_8);
                                fVar17 = (float10)func_?();
                                pSStack_8 = (Single__Array_1 *)
                                             (float)((float10)(float)pSStack_8 -
                                                    fVar17 * (float10)VStack_2.y);
                                if (rotation0.w + fStack_32 <
                                    (float)((uint)pSStack_8 & _UNK_?)) {
                                  return 0;
                                }
                                if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                                  func_?();
                                }
                                fVar5 = rotation0.w;
                                if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                    (Single__Array_1 *)0x0) {
                                  fVar17 = (float10)func_?();
                                  rotation0.w = (float)fVar17;
                                  fVar5 = rotation0.w;
                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                      (Single__Array_1 *)0x0) {
                                    fVar17 = (float10)func_?();
                                    rotation0.w = fStack_12 * rotation0.w;
                                    fStack_32 = (float)(fVar17 * (float10)fStack_16 +
                                                      (float10)rotation0.w);
                                    fVar5 = rotation0.w;
                                    if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                        (Single__Array_1 *)0x0) {
                                      fVar17 = (float10)func_?();
                                      rotation0.w = (float)fVar17;
                                      fVar5 = rotation0.w;
                                      if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                          (Single__Array_1 *)0x0) {
                                        fVar17 = (float10)func_?();
                                        rotation0.w = (float)(fVar17 * (float10)fStack_15 +
                                                             (float10)(fStack_13 * rotation0.w));
                                        fVar5 = rotation0.w;
                                        if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                            (Single__Array_1 *)0x0) {
                                          fVar17 = (float10)func_?();
                                          pSStack_8 = (Single__Array_1 *)(float)fVar17;
                                          fVar5 = rotation0.w;
                                          if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                              (Single__Array_1 *)0x0) {
                                            pSStack_8 = (Single__Array_1 *)
                                                         ((float)pSStack_8 * (float)puStack_19);
                                            fVar17 = (float10)func_?();
                                            pSStack_8 = (Single__Array_1 *)
                                                         (float)((float10)(float)pSStack_8 -
                                                                fVar17 * (float10)VStack_2.y);
                                            if (rotation0.w + fStack_32 <
                                                (float)((uint)pSStack_8 & _UNK_?)) {
                                              return 0;
                                            }
                                            if ((TypeInfo__RTG__BoxMath->_1).
                                                cctor_finished_or_no_cctor == 0) {
                                              func_?();
                                            }
                                            fVar5 = rotation0.w;
                                            if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                (Single__Array_1 *)0x0) {
                                              fVar17 = (float10)func_?();
                                              rotation0.w = (float)fVar17;
                                              fVar5 = rotation0.w;
                                              if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                  (Single__Array_1 *)0x0) {
                                                fVar17 = (float10)func_?();
                                                rotation0.w = fStack_12 * rotation0.w;
                                                fStack_32 = (float)(fVar17 * (float10)fStack_16 +
                                                                  (float10)rotation0.w);
                                                fVar5 = rotation0.w;
                                                if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                    (Single__Array_1 *)0x0) {
                                                  fVar17 = (float10)func_?();
                                                  rotation0.w = (float)fVar17;
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    rotation0.w = (float)(fVar17 * (float10)
                                                  fStack_14 + (float10)(fStack_13 * rotation0.w));
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    pSStack_8 = (Single__Array_1 *)(float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   ((float)pSStack_8 *
                                                                   (float)puStack_19);
                                                      fVar17 = (float10)func_?();
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   (float)((float10)(float)
                                                  pSStack_8 - fVar17 * (float10)VStack_2.y);
                                                  if (rotation0.w + fStack_32 <
                                                      (float)((uint)pSStack_8 & _UNK_?)) {
                                                    return 0;
                                                  }
                                                  if ((TypeInfo__RTG__BoxMath->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    rotation0.w = (float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar17 = (float10)func_?();
                                                      rotation0.w = rotation0.w * fStack_11;
                                                      fStack_32 = (float)(fVar17 * (float10)fStack_16
                                                                        + (float10)rotation0.w);
                                                      fVar5 = rotation0.w;
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar17 = (float10)func_?();
                                                        rotation0.w = (float)fVar17;
                                                        fVar5 = rotation0.w;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar17 = (float10)func_?();
                                                          rotation0.w = (float)(fVar17 * (float10)
                                                  fStack_15 + (float10)(rotation0.w * fStack_14));
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    pSStack_8 = (Single__Array_1 *)(float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   ((float)pSStack_8 * fStack_28);
                                                      fVar17 = (float10)func_?();
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   (float)((float10)(float)
                                                  pSStack_8 - fVar17 * (float10)VStack_2.z);
                                                  if (rotation0.w + fStack_32 <
                                                      (float)((uint)pSStack_8 & _UNK_?)) {
                                                    return 0;
                                                  }
                                                  if ((TypeInfo__RTG__BoxMath->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    rotation0.w = (float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar17 = (float10)func_?();
                                                      rotation0.w = rotation0.w * fStack_11;
                                                      fStack_32 = (float)(fVar17 * (float10)fStack_16
                                                                        + (float10)rotation0.w);
                                                      fVar5 = rotation0.w;
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar17 = (float10)func_?();
                                                        rotation0.w = (float)fVar17;
                                                        fVar5 = rotation0.w;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar17 = (float10)func_?();
                                                          rotation0.w = (float)(fVar17 * (float10)
                                                  fStack_15 + (float10)(rotation0.w * fStack_13));
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    pSStack_8 = (Single__Array_1 *)(float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   ((float)pSStack_8 * fStack_28);
                                                      fVar17 = (float10)func_?();
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   (float)((float10)(float)
                                                  pSStack_8 - fVar17 * (float10)VStack_2.z);
                                                  if (rotation0.w + fStack_32 <
                                                      (float)((uint)pSStack_8 & _UNK_?)) {
                                                    return 0;
                                                  }
                                                  if ((TypeInfo__RTG__BoxMath->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    rotation0.w = (float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar17 = (float10)func_?();
                                                      rotation0.w = rotation0.w * fStack_11;
                                                      fStack_32 = (float)(fVar17 * (float10)fStack_16
                                                                        + (float10)rotation0.w);
                                                      fVar5 = rotation0.w;
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar17 = (float10)func_?();
                                                        rotation0.w = (float)fVar17;
                                                        fVar5 = rotation0.w;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar17 = (float10)func_?();
                                                          rotation0.w = (float)(fVar17 * (float10)
                                                  fStack_14 + (float10)(rotation0.w * fStack_13));
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    pSStack_8 = (Single__Array_1 *)(float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   ((float)pSStack_8 * fStack_28);
                                                      fVar17 = (float10)func_?();
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   (float)((float10)(float)
                                                  pSStack_8 - fVar17 * (float10)VStack_2.z);
                                                  if (rotation0.w + fStack_32 <
                                                      (float)((uint)pSStack_8 & _UNK_?)) {
                                                    return 0;
                                                  }
                                                  if ((TypeInfo__RTG__BoxMath->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    rotation0.w = (float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar17 = (float10)func_?();
                                                      rotation0.w = rotation0.w * fStack_11;
                                                      fStack_32 = (float)(fVar17 * (float10)fStack_12
                                                                        + (float10)rotation0.w);
                                                      fVar5 = rotation0.w;
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar17 = (float10)func_?();
                                                        rotation0.w = (float)fVar17;
                                                        fVar5 = rotation0.w;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar17 = (float10)func_?();
                                                          rotation0.w = (float)(fVar17 * (float10)
                                                  fStack_15 + (float10)(rotation0.w * fStack_14));
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    pSStack_8 = (Single__Array_1 *)(float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   ((float)pSStack_8 * fStack_18);
                                                      fVar17 = (float10)func_?();
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   (float)((float10)(float)
                                                  pSStack_8 - fVar17 * (float10)VStack_2.x);
                                                  if (rotation0.w + fStack_32 <
                                                      (float)((uint)pSStack_8 & _UNK_?)) {
                                                    return 0;
                                                  }
                                                  if ((TypeInfo__RTG__BoxMath->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    rotation0.w = (float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar17 = (float10)func_?();
                                                      rotation0.w = rotation0.w * fStack_11;
                                                      fStack_32 = (float)(fVar17 * (float10)fStack_12
                                                                        + (float10)rotation0.w);
                                                      fVar5 = rotation0.w;
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar17 = (float10)func_?();
                                                        rotation0.w = (float)fVar17;
                                                        fVar5 = rotation0.w;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar17 = (float10)func_?();
                                                          rotation0.w = (float)(fVar17 * (float10)
                                                  fStack_15 + (float10)(rotation0.w * fStack_13));
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    pSStack_8 = (Single__Array_1 *)(float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   ((float)pSStack_8 * fStack_18);
                                                      fVar17 = (float10)func_?();
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   (float)((float10)(float)
                                                  pSStack_8 - fVar17 * (float10)VStack_2.x);
                                                  if (rotation0.w + fStack_32 <
                                                      (float)((uint)pSStack_8 & _UNK_?)) {
                                                    return 0;
                                                  }
                                                  if ((TypeInfo__RTG__BoxMath->_1).
                                                      cctor_finished_or_no_cctor == 0) {
                                                    func_?();
                                                  }
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    rotation0.w = (float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar17 = (float10)func_?();
                                                      rotation0.w = rotation0.w * fStack_11;
                                                      fStack_32 = (float)(fVar17 * (float10)fStack_12
                                                                        + (float10)rotation0.w);
                                                      fVar5 = rotation0.w;
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar17 = (float10)func_?();
                                                        rotation0.w = (float)fVar17;
                                                        fVar5 = rotation0.w;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar17 = (float10)func_?();
                                                          rotation0.w = (float)(fVar17 * (float10)
                                                  fStack_14 + (float10)(rotation0.w * fStack_13));
                                                  fVar5 = rotation0.w;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar17 = (float10)func_?();
                                                    pSStack_8 = (Single__Array_1 *)(float)fVar17;
                                                    fVar5 = rotation0.w;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      pSStack_8 = (Single__Array_1 *)
                                                                   ((float)pSStack_8 * fStack_18);
                                                      fVar17 = (float10)func_?();
                                                      if (rotation0.w + fStack_32 <
                                                          (float)((uint)(float)((float10)(float)
                                                  pSStack_8 - fVar17 * (float10)VStack_2.x) &
                                                  _UNK_?)) {
                                                    return 0;
                                                  }
                                                  return 1;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  rotation0.w = fVar5;
  func_?();
  fVar5 = rotation0.w;
code_?:
  rotation0.w = fVar5;
  func_?();
  pcVar36 = (code *)swi(3);
  bVar37 = (*pcVar36)();
  return bVar37;
}


/* List`1[UnityEngine.Vector3] CalcBoxCornerPoints(Vector3, Vector3, Quaternion) */

List_1_UnityEngine_Vector3_ *
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxCornerPoints
          (Vector3 boxCenter,Vector3 boxSize,Quaternion boxRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = boxRotation.y;
  rotation.x = boxRotation.x;
  rotation.z = boxRotation.z;
  rotation.w = boxRotation.w;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            (&boxSize,rotation,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation_00.y = boxRotation.y;
  rotation_00.x = boxRotation.x;
  rotation_00.z = boxRotation.z;
  rotation_00.w = boxRotation.w;
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            (&boxSize,rotation_00,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
             (MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
  fVar2 = pVVar1->x;
  fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
  __return_storage_ptr__ = &boxRotation.y;
  puVar4 = &UNK_?;
  rotation_01.y = boxRotation.y;
  rotation_01.x = boxRotation.x;
  rotation_01.z = boxRotation.z;
  rotation_01.w = boxRotation.w;
  fVar5 = boxRotation.x;
  fVar6 = boxRotation.y;
  fVar7 = boxRotation.z;
  fVar8 = boxRotation.w;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)__return_storage_ptr__,rotation_01,*pVVar1,(MethodInfo *)0x0);
  fVar9 = pVVar1->x;
  fVar10 = pVVar1->y;
  fVar11 = pVVar1->z;
  boxSize.z = boxCenter.x - fVar9 * fVar3;
  boxRotation.w = boxCenter.y - fVar10 * fVar3;
  fVar3 = 1.12104e-44;
  puVar12 = &UNK_?;
  boxSize.x = fVar9;
  boxSize.y = fVar10;
  pVVar13 = TypeInfo__UnityEngine__Vector3;
  collection = (IEnumerable_1_UnityEngine_Vector3_ *)func_?();
  if (collection == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    boxRotation.x = (float)&UNK_?;
    func_?();
  }
  else if (collection[1].monitor != (MonitorData *)0x0) {
    IVar14.monitor =
         (MonitorData *)
         ((boxRotation.w - (float)puVar12 * fVar7) + (float)__return_storage_ptr__ * fVar2);
    IVar14.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)
                  ((boxSize.z - (float)puVar12 * fVar6) + (float)puVar4 * fVar2);
    collection[2] = IVar14;
    collection[3].klass =
         (IEnumerable_1_UnityEngine_Vector3___Class *)
         ((fVar3 - (float)puVar12 * fVar8) + fVar5 * fVar2);
    if ((MonitorData *)0x1 < collection[1].monitor) {
      *(ulonglong *)&collection[3].monitor =
           CONCAT44(boxRotation.w + (float)puVar12 * fVar7 + (float)__return_storage_ptr__ * fVar2,
                    boxSize.z + (float)puVar12 * fVar6 + (float)puVar4 * fVar2);
      collection[4].monitor = (MonitorData *)(fVar3 + (float)puVar12 * fVar8 + fVar5 * fVar2);
      if ((MonitorData *)0x2 < collection[1].monitor) {
        IVar15.monitor =
             (MonitorData *)
             ((boxRotation.w + (float)puVar12 * fVar7) - (float)__return_storage_ptr__ * fVar2);
        IVar15.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)
                      ((boxSize.z + (float)puVar12 * fVar6) - (float)puVar4 * fVar2);
        collection[5] = IVar15;
        collection[6].klass =
             (IEnumerable_1_UnityEngine_Vector3___Class *)
             ((fVar3 + (float)puVar12 * fVar8) - fVar5 * fVar2);
        boxSize.x = (boxSize.z - (float)puVar12 * fVar6) - (float)puVar4 * fVar2;
        boxSize.y = (boxRotation.w - (float)puVar12 * fVar7) -
                    (float)__return_storage_ptr__ * fVar2;
        boxSize.z = (fVar3 - (float)puVar12 * fVar8) - fVar5 * fVar2;
        if ((MonitorData *)0x3 < collection[1].monitor) {
          *(ulonglong *)&collection[6].monitor = CONCAT44(boxSize.y,boxSize.x);
          collection[7].monitor = (MonitorData *)boxSize.z;
          boxSize.z = boxCenter.x + (float)pVVar13 * fVar9;
          boxRotation.w = boxCenter.y + (float)pVVar13 * fVar10;
          fVar9 = boxCenter.z + (float)pVVar13 * fVar11;
          if ((MonitorData *)0x4 < collection[1].monitor) {
            IVar16.monitor =
                 (MonitorData *)
                 (boxRotation.w + (float)puVar12 * fVar7 + (float)__return_storage_ptr__ * fVar2);
            IVar16.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)
                          (boxSize.z + (float)puVar12 * fVar6 + (float)puVar4 * fVar2);
            collection[8] = IVar16;
            collection[9].klass =
                 (IEnumerable_1_UnityEngine_Vector3___Class *)
                 (fVar9 + (float)puVar12 * fVar8 + fVar5 * fVar2);
            if ((MonitorData *)0x5 < collection[1].monitor) {
              *(ulonglong *)&collection[9].monitor =
                   CONCAT44((boxRotation.w - (float)puVar12 * fVar7) +
                            (float)__return_storage_ptr__ * fVar2,
                            (boxSize.z - (float)puVar12 * fVar6) + (float)puVar4 * fVar2);
              collection[10].monitor =
                   (MonitorData *)((fVar9 - (float)puVar12 * fVar8) + fVar5 * fVar2);
              if ((MonitorData *)0x6 < collection[1].monitor) {
                IVar17.monitor =
                     (MonitorData *)
                     ((boxRotation.w - (float)puVar12 * fVar7) -
                     (float)__return_storage_ptr__ * fVar2);
                IVar17.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)
                              ((boxSize.z - (float)puVar12 * fVar6) - (float)puVar4 * fVar2);
                collection[0xb] = IVar17;
                collection[0xc].klass =
                     (IEnumerable_1_UnityEngine_Vector3___Class *)
                     ((fVar9 - (float)puVar12 * fVar8) - fVar5 * fVar2);
                if ((MonitorData *)0x7 < collection[1].monitor) {
                  *(ulonglong *)&collection[0xc].monitor =
                       CONCAT44((boxRotation.w + (float)puVar12 * fVar7) -
                                (float)__return_storage_ptr__ * fVar2,
                                (boxSize.z + (float)puVar12 * fVar6) - (float)puVar4 * fVar2);
                  collection[0xd].monitor =
                       (MonitorData *)((fVar9 + (float)puVar12 * fVar8) - fVar5 * fVar2);
                  boxRotation.x =
                       (float)TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>;
                  boxSize.z = (float)&UNK_?;
                  pLVar18 = (List_1_UnityEngine_Vector3_ *)func_?();
                  boxSize.z = (float)
                              MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  ;
                  boxSize.x = (float)pLVar18;
                  boxSize.y = (float)collection;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                  List_1_UnityEngine_Vector3___ctor_1
                            (pLVar18,collection,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                            );
                  return pLVar18;
                }
              }
            }
          }
        }
      }
    }
  }
  boxRotation.x = (float)&UNK_?;
  func_?();
  pcVar19 = (code *)swi(3);
  pLVar18 = (List_1_UnityEngine_Vector3_ *)(*pcVar19)();
  return pLVar18;
}


/* Vector3 CalcBoxFaceCenter(Vector3, Vector3, Quaternion, BoxFace) */

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceCenter
                    (Vector3 *__return_storage_ptr__,Vector3 boxCenter,Vector3 boxSize,
                    Quaternion boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

{
  pVVar1 = (Vector3 *)(boxSize.z * _UNK_?);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
            ((Vector3 *)&stack0xffffffdc,boxRotation,
             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar2 = &TypeInfo__UnityEngine__Vector3->static_fields->upVector;
  fVar3 = pVVar2->y;
  fVar4 = (TypeInfo__UnityEngine__Vector3->static_fields->upVector).z;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffd0,boxRotation,*pVVar2,(MethodInfo *)0x0);
  fVar5 = pVVar2->x;
  fVar6 = pVVar2->y;
  puVar7 = (undefined *)pVVar2->z;
  fVar8 = fVar3;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
    fVar8 = fVar3;
  }
  pVVar2 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
  uVar9 = pVVar2->x;
  uVar10 = pVVar2->y;
  fVar3 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
  pVVar11 = (Vector3 *)boxRotation.x;
  __return_storage_ptr___00 = (Vector3 *)&stack0xffffffd0;
  puVar12 = &UNK_?;
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (__return_storage_ptr___00,boxRotation,*pVVar2,(MethodInfo *)0x0);
  switch(boxFace) {
  case BoxFace__Enum_Front:
    fVar8 = pVVar2->x;
    fVar4 = pVVar2->y;
    puVar12 = (undefined *)pVVar2->z;
    break;
  case BoxFace__Enum_Back:
    uVar13 = pVVar2->x;
    uVar14 = pVVar2->y;
    puVar7 = (undefined *)pVVar2->z;
    __return_storage_ptr___00 = pVVar1;
    fVar6 = (float)uVar14;
    fVar5 = (float)uVar13;
  default:
code_?:
    fVar8 = (float)uVar9 + fVar5 * (float)__return_storage_ptr___00;
    fVar3 = fVar3 + (float)puVar7 * (float)__return_storage_ptr___00;
    fVar5 = (float)uVar10 + fVar6 * (float)__return_storage_ptr___00;
    goto code_?;
  case BoxFace__Enum_Left:
    pVVar1 = pVVar11;
    break;
  case BoxFace__Enum_Right:
    __return_storage_ptr___00 = pVVar11;
    fVar6 = fVar4;
    puVar7 = puVar12;
    fVar5 = fVar8;
    goto code_?;
  case BoxFace__Enum_Bottom:
    pVVar1 = __return_storage_ptr___00;
    fVar4 = fVar6;
    puVar12 = puVar7;
    fVar8 = fVar5;
  }
  fVar8 = (float)uVar9 - fVar8 * (float)pVVar1;
  fVar5 = (float)uVar10 - fVar4 * (float)pVVar1;
  fVar3 = fVar3 - (float)puVar12 * (float)pVVar1;
code_?:
  *(ulonglong *)boxRotation.w = CONCAT44(fVar5,fVar8);
  *(float *)((int)boxRotation.w + 8) = fVar3;
  return (Vector3 *)boxRotation.w;
}


/* Vector3 CalcBoxFaceNormal(Vector3, Vector3, Quaternion, BoxFace) */

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceNormal
                    (Vector3 *__return_storage_ptr__,Vector3 boxCenter,Vector3 boxSize,
                    Quaternion boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffd4,boxRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar2 = pVVar1->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffc8,boxRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  puVar4 = (undefined *)pVVar3->x;
  pVVar1 = (Vector3 *)pVVar3->y;
  fVar5 = pVVar3->z;
  fVar6 = fVar5;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar3 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
  uVar7 = pVVar3->x;
  __return_storage_ptr___00 = (Vector3 *)&stack0xffffffc8;
  puVar8 = &UNK_?;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     (__return_storage_ptr___00,boxRotation,*pVVar3,(MethodInfo *)0x0);
  switch(boxFace) {
  case BoxFace__Enum_Front:
    puVar8 = (undefined *)pVVar3->x;
    __return_storage_ptr___00 = (Vector3 *)pVVar3->y;
    boxRotation.x = pVVar3->z;
    break;
  case BoxFace__Enum_Back:
    uRam_?._0_4_ = pVVar3->x;
    uRam_?._4_4_ = pVVar3->y;
    fRam00000008 = pVVar3->z;
    return (Vector3 *)0x0;
  case BoxFace__Enum_Left:
    break;
  case BoxFace__Enum_Right:
    uRam_? = CONCAT44(uVar7,boxRotation.w);
    fRam00000008 = fVar2;
    return (Vector3 *)0x0;
  case BoxFace__Enum_Bottom:
    __return_storage_ptr___00 = pVVar1;
    puVar8 = puVar4;
    boxRotation.x = fVar6;
    break;
  default:
    uRam_? = CONCAT44(boxRotation.z,boxRotation.y);
    fRam00000008 = fVar5;
    return (Vector3 *)0x0;
  }
  uRam_? = CONCAT44((uint)__return_storage_ptr___00 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field,
                          (uint)puVar8 ^
                          __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  fRam00000008 = (float)((uint)boxRotation.x ^
                        __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  return (Vector3 *)0x0;
}


/* Plane CalcBoxFacePlane(Vector3, Vector3, Quaternion, BoxFace) */

Plane * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFacePlane
                  (Plane *__return_storage_ptr__,Vector3 boxCenter,Vector3 boxSize,
                  Quaternion boxRotation,BoxFace__Enum boxFace,MethodInfo *method)

{
  fVar1 = boxSize.z * _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffc8,boxRotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  fVar3 = pVVar2->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)&stack0xffffffbc,boxRotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
  puVar5 = (undefined *)pVVar4->x;
  pVVar2 = (Vector3 *)pVVar4->y;
  fVar6 = pVVar4->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fVar7 = 0.0;
  pVVar4 = &TypeInfo__UnityEngine__Vector3->static_fields->forwardVector;
  uVar8 = pVVar4->x;
  fVar9 = pVVar4->y;
  fVar10 = (TypeInfo__UnityEngine__Vector3->static_fields->forwardVector).z;
  __return_storage_ptr___00 = (Vector3 *)&stack0xffffffbc;
  puVar11 = &UNK_?;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (__return_storage_ptr___00,boxRotation,*pVVar4,(MethodInfo *)0x0);
  switch(boxFace) {
  case BoxFace__Enum_Front:
    uVar12 = pVVar4->x;
    uVar13 = pVVar4->y;
    fVar3 = pVVar4->z;
    uVar14 = uVar12 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    uVar15 = uVar13 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
    fVar6 = (float)((uint)fVar3 ^
                    __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    uVar16 = pVVar4->x;
    uVar17 = pVVar4->y;
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    (__return_storage_ptr__->m_Normal).z = 0.0;
    __return_storage_ptr__->m_Distance = 0.0;
    inNormal.y = (float)uVar15;
    inNormal.x = (float)uVar14;
    inNormal.z = fVar6;
    inPoint.y = boxCenter.y - (float)uVar17 * fVar1;
    inPoint.x = boxCenter.x - (float)uVar16 * fVar1;
    inPoint.z = boxCenter.z - fVar3 * fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
              (__return_storage_ptr__,inNormal,inPoint,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  case BoxFace__Enum_Back:
    uVar18 = pVVar4->x;
    uVar19 = pVVar4->y;
    fVar3 = pVVar4->z;
    VVar20 = *pVVar4;
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    (__return_storage_ptr__->m_Normal).z = 0.0;
    __return_storage_ptr__->m_Distance = 0.0;
    inPoint_00.y = boxCenter.y + (float)uVar19 * fVar1;
    inPoint_00.x = boxCenter.x + (float)uVar18 * fVar1;
    inPoint_00.z = boxCenter.z + fVar3 * fVar1;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
              (__return_storage_ptr__,VVar20,inPoint_00,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  case BoxFace__Enum_Left:
    break;
  case BoxFace__Enum_Right:
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    (__return_storage_ptr__->m_Normal).z = 0.0;
    __return_storage_ptr__->m_Distance = 0.0;
    inNormal_01.y = (float)uVar8;
    inNormal_01.x = boxRotation.w;
    inNormal_01.z = fVar3;
    inPoint_02.y = boxCenter.y + (float)__return_storage_ptr___00 * fVar7;
    inPoint_02.x = boxCenter.x + (float)puVar11 * fVar7;
    inPoint_02.z = boxCenter.z + boxRotation.x * fVar7;
    UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
              (__return_storage_ptr__,inNormal_01,inPoint_02,(MethodInfo *)0x0);
    return __return_storage_ptr__;
  case BoxFace__Enum_Bottom:
    boxRotation.x = fVar6;
    __return_storage_ptr___00 = pVVar2;
    fVar7 = fVar10;
    puVar11 = puVar5;
    break;
  default:
    (__return_storage_ptr__->m_Normal).x = 0.0;
    (__return_storage_ptr__->m_Normal).y = 0.0;
    (__return_storage_ptr__->m_Normal).z = 0.0;
    __return_storage_ptr__->m_Distance = 0.0;
    VVar20.y = boxRotation.z;
    VVar20.x = boxRotation.y;
    VVar20.z = fVar9;
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                       ((Vector3 *)&stack0xffffffbc,VVar20,(MethodInfo *)0x0);
    uVar21 = pVVar2->x;
    uVar22 = pVVar2->y;
    fVar1 = pVVar2->z;
    (__return_storage_ptr__->m_Normal).x = (float)uVar21;
    (__return_storage_ptr__->m_Normal).y = (float)uVar22;
    (__return_storage_ptr__->m_Normal).z = fVar1;
    __return_storage_ptr__->m_Distance =
         (float)((uint)((float)uVar21 * (boxCenter.x + (float)puVar5 * fVar10) + (float)uVar22 * 0.0
                       + fVar1 * (boxCenter.z + fVar6 * fVar10)) ^
                __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
    return __return_storage_ptr__;
  }
  boxRotation.w =
       (float)((uint)boxRotation.x ^
              __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field);
  uVar15 = (uint)__return_storage_ptr___00 ^
           __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  uVar14 = (uint)puVar11 ^ __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field;
  (__return_storage_ptr__->m_Normal).x = 0.0;
  (__return_storage_ptr__->m_Normal).y = 0.0;
  (__return_storage_ptr__->m_Normal).z = 0.0;
  __return_storage_ptr__->m_Distance = 0.0;
  inNormal_00.y = (float)uVar15;
  inNormal_00.x = (float)uVar14;
  inNormal_00.z = boxRotation.w;
  inPoint_01.y = boxCenter.y - (float)__return_storage_ptr___00 * fVar7;
  inPoint_01.x = boxCenter.x - (float)puVar11 * fVar7;
  inPoint_01.z = boxCenter.z - boxRotation.x * fVar7;
  UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_SetNormalAndPosition
            (__return_storage_ptr__,inNormal_00,inPoint_01,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


/* Vector3 CalcBoxFaceSize(Vector3, BoxFace) */

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxFaceSize
                    (Vector3 *__return_storage_ptr__,Vector3 boxSize,BoxFace__Enum boxFace,
                    MethodInfo *method)

{
  __return_storage_ptr__->x = boxSize.x;
  __return_storage_ptr__->y = boxSize.y;
  __return_storage_ptr__->z = boxSize.z;
  if ((boxFace == BoxFace__Enum_Front) || (boxFace == BoxFace__Enum_Back)) {
    __return_storage_ptr__->z = 0.0;
    return __return_storage_ptr__;
  }
  if ((boxFace != BoxFace__Enum_Left) && (boxFace != BoxFace__Enum_Right)) {
    __return_storage_ptr__->y = 0.0;
    return __return_storage_ptr__;
  }
  __return_storage_ptr__->x = 0.0;
  return __return_storage_ptr__;
}


/* Vector3 CalcBoxPtClosestToPt(Vector3, Vector3, Vector3, Quaternion) */

Vector3 * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_CalcBoxPtClosestToPt
                    (Vector3 *__return_storage_ptr__,Vector3 point,Vector3 boxCenter,Vector3 boxSize
                    ,Quaternion boxRotation,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  __return_storage_ptr__->x = 0.0;
  __return_storage_ptr__->y = 0.0;
  fStack_1 = point.x - boxCenter.x;
  __return_storage_ptr__->z = 0.0;
  fStack_2 = point.y - boxCenter.y;
  fVar3 = point.z - boxCenter.z;
  iVar4 = func_?(TypeInfo__UnityEngine__Vector3,3);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = boxRotation.y;
  rotation.x = boxRotation.x;
  rotation.z = boxRotation.z;
  rotation.w = boxRotation.w;
  pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffa4,rotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  if (iVar4 == 0) {
    func_?();
code_?:
    func_?();
    this = (IndexOutOfRangeException *)func_?();
    method_00 = (MethodInfo *)0x0;
    message = (String *)func_?();
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
              (this,message,method_00);
    func_?();
    func_?();
  }
  else {
    fVar6 = pVVar5->z;
    if (*(int *)(iVar4 + 0xc) != 0) {
      *(undefined8 *)(iVar4 + 0x10) = *(undefined8 *)pVVar5;
      *(float *)(iVar4 + 0x18) = fVar6;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation_01.y = boxRotation.y;
      rotation_01.x = boxRotation.x;
      rotation_01.z = boxRotation.z;
      rotation_01.w = boxRotation.w;
      pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffa4,rotation_01,
                          TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0)
      ;
      fVar6 = pVVar5->z;
      if (1 < *(uint *)(iVar4 + 0xc)) {
        *(undefined8 *)(iVar4 + 0x1c) = *(undefined8 *)pVVar5;
        *(float *)(iVar4 + 0x24) = fVar6;
        if (cRam_? == '\0') {
          uStack_7 = CONCAT44(uStack_7._4_4_,&TypeInfo__UnityEngine__Vector3);
          VStack_8.z = (float)&UNK_?;
          func_?();
          cRam_? = '\x01';
        }
        rotation_00.y = boxRotation.y;
        rotation_00.x = boxRotation.x;
        rotation_00.z = boxRotation.z;
        rotation_00.w = boxRotation.w;
        pVVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           ((Vector3 *)&boxRotation.y,rotation_00,
                            TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                            (MethodInfo *)0x0);
        fVar6 = pVVar5->z;
        if (2 < *(uint *)(iVar4 + 0xc)) {
          *(undefined8 *)(iVar4 + 0x28) = *(undefined8 *)pVVar5;
          fVar9 = _UNK_?;
          puStack_10 = (undefined *)(boxSize.x * _UNK_?);
          *(float *)(iVar4 + 0x30) = fVar6;
          puStack_11 = (undefined *)(boxSize.y * fVar9);
          puVar12 = (undefined *)(boxSize.z * fVar9);
          VStack_8.y = (float)puStack_11;
          VStack_8.x = (float)puStack_10;
          __return_storage_ptr__->x = (float)(int)boxCenter._0_8_;
          __return_storage_ptr__->y = (float)(int)((ulonglong)boxCenter._0_8_ >> 0x20);
          __return_storage_ptr__->z = boxCenter.z;
          index = (undefined *)0x0;
          VStack_8.z = (float)puVar12;
          while (index < *(undefined **)(iVar4 + 0xc)) {
            uVar13 = *(undefined8 *)(iVar4 + 0x10 + (int)index * 0xc);
            fStack_14 = *(float *)(iVar4 + 0x18 + (int)index * 0xc);
            uStack_7._4_4_ = (float)((ulonglong)uVar13 >> 0x20);
            uStack_7._0_4_ = (float)uVar13;
            boxCenter.z = (float)uStack_7 * fStack_1 + uStack_7._4_4_ * fStack_2 +
                          fStack_14 * fVar3;
            puVar15 = puStack_10;
            uStack_7 = uVar13;
            if (((index != (undefined *)0x0) && (puVar15 = puStack_11, index != (undefined *)0x1))
               && (puVar15 = puVar12, index != (undefined *)0x2)) goto code_?;
            puVar16 = (undefined *)0x0;
            puVar12 = index;
            if ((float)puVar15 < boxCenter.z) {
              boxCenter.z = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                      (&VStack_8,(int32_t)index,(MethodInfo *)0x0);
            }
            else {
              boxRotation.w =
                   UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (&VStack_8,(int32_t)index,(MethodInfo *)0x0);
              if (boxCenter.z <
                  (float)((uint)boxRotation.w ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field))
              {
                puVar16 = &UNK_?;
                fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                   (&VStack_8,(int32_t)index,(MethodInfo *)0x0);
                boxCenter.z = (float)((uint)fVar6 ^
                                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                     );
              }
            }
            uVar17 = __return_storage_ptr__->x;
            uVar18 = __return_storage_ptr__->y;
            fVar6 = __return_storage_ptr__->z;
            puVar19 = &stack0xffffffbc;
            puVar15 = &UNK_?;
            func_?();
            index = index + 1;
            __return_storage_ptr__->x = (float)uVar17 + (float)puVar16 * boxCenter.z;
            __return_storage_ptr__->y = (float)uVar18 + (float)puVar15 * boxCenter.z;
            __return_storage_ptr__->z = fVar6 + (float)puVar19 * boxCenter.z;
            if (2 < (int)index) {
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  pVVar5 = (Vector3 *)(*pcVar20)();
  return pVVar5;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_ContainsPoint
               (Vector3 point,Vector3 boxCenter,Vector3 boxSize,Quaternion boxRotation,
               BoxEpsilon epsilon,MethodInfo *method)

{
  func_?(&MStack_1,0,0x40);
  func_?(&MStack_2,0,0x40);
  epsilon._sizeEps.z = epsilon._sizeEps.z + boxSize.z;
  s.y = epsilon._sizeEps.y + boxSize.y;
  s.x = epsilon._sizeEps.x + boxSize.x;
  s.z = epsilon._sizeEps.z;
  pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff3c,boxCenter,boxRotation,s,(MethodInfo *)0x0);
  MStack_1.m00 = pMVar3->m00;
  MStack_1.m10 = pMVar3->m10;
  MStack_1.m20 = pMVar3->m20;
  MStack_1.m30 = pMVar3->m30;
  MStack_1.m01 = pMVar3->m01;
  MStack_1.m11 = pMVar3->m11;
  MStack_1.m21 = pMVar3->m21;
  MStack_1.m31 = pMVar3->m31;
  MStack_1.m02 = pMVar3->m02;
  MStack_1.m12 = pMVar3->m12;
  MStack_1.m22 = pMVar3->m22;
  MStack_1.m32 = pMVar3->m32;
  MStack_1.m03 = pMVar3->m03;
  MStack_1.m13 = pMVar3->m13;
  MStack_1.m23 = pMVar3->m23;
  MStack_1.m33 = pMVar3->m33;
  pMVar3 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffff3c,&MStack_1,(MethodInfo *)0x0);
  MStack_2.m00 = pMVar3->m00;
  MStack_2.m10 = pMVar3->m10;
  MStack_2.m20 = pMVar3->m20;
  MStack_2.m30 = pMVar3->m30;
  MStack_2.m01 = pMVar3->m01;
  MStack_2.m11 = pMVar3->m11;
  MStack_2.m21 = pMVar3->m21;
  MStack_2.m31 = pMVar3->m31;
  MStack_2.m02 = pMVar3->m02;
  MStack_2.m12 = pMVar3->m12;
  MStack_2.m22 = pMVar3->m22;
  MStack_2.m32 = pMVar3->m32;
  MStack_2.m03 = pMVar3->m03;
  MStack_2.m13 = pMVar3->m13;
  MStack_2.m23 = pMVar3->m23;
  MStack_2.m33 = pMVar3->m33;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&epsilon._sizeEps,&MStack_2,point,(MethodInfo *)0x0);
  uVar5 = pVVar4->x;
  uVar6 = pVVar4->y;
  if ((((_UNK_? <= (float)uVar5) && ((float)uVar5 <= _UNK_?)) &&
      (_UNK_? <= (float)uVar6)) &&
     (((float)uVar6 <= _UNK_? && (_UNK_? <= pVVar4->z)))) {
    return pVVar4->z <= _UNK_?;
  }
  return 0;
}


/* BoxFaceAreaDesc GetBoxFaceAreaDesc(Vector3, BoxFace) */

BoxFaceAreaDesc
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetBoxFaceAreaDesc
          (Vector3 boxSize,BoxFace__Enum boxFace,MethodInfo *method)

{
  if (((boxFace == BoxFace__Enum_Front) || (boxFace == BoxFace__Enum_Back)) ||
     ((fVar1 = boxSize.y, boxFace != BoxFace__Enum_Left &&
      (boxSize.y = boxSize.z, boxFace != BoxFace__Enum_Right)))) {
    fVar1 = boxSize.x;
    boxSize.z = boxSize.y;
  }
  if (boxSize.z * fVar1 < _UNK_?) {
    if (fVar1 <= boxSize.z) {
      fVar1 = boxSize.z;
    }
    BVar2.Area = fVar1;
    BVar2.AreaType = 2;
    return BVar2;
  }
  BVar3.Area = boxSize.z * fVar1;
  BVar3.AreaType = 1;
  return BVar3;
}


/* Int32 GetFaceAxisIndex(BoxFace) */

int32_t Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceAxisIndex
                  (BoxFace__Enum face,MethodInfo *method)

{
  if ((face == BoxFace__Enum_Top) || (face == BoxFace__Enum_Bottom)) {
    iVar1 = 1;
  }
  else {
    if ((face == BoxFace__Enum_Left) || (face == BoxFace__Enum_Right)) {
      return 0;
    }
    iVar1 = 2;
    if (face != BoxFace__Enum_Back) {
      if (face != BoxFace__Enum_Front) {
        iVar1 = -1;
      }
      return iVar1;
    }
  }
  return iVar1;
}


/* BoxFaceDesc GetFaceClosestToPoint(Vector3, Vector3, Vector3, Quaternion) */

BoxFaceDesc *
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceClosestToPoint
          (BoxFaceDesc *__return_storage_ptr__,Vector3 point,Vector3 boxCenter,Vector3 boxSize,
          Quaternion boxRotation,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff48;
  puVar5 = &stack0xffffff48;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.First = 0;
  LStack_6._current.Last = 0;
  boxFace.First = 0;
  boxFace.Last = 0;
  RStack_7.First = 0;
  RStack_7.Last = 0;
  __return_storage_ptr__->Face = 0;
  (__return_storage_ptr__->Plane).m_Normal.x = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.y = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.z = 0.0;
  (__return_storage_ptr__->Plane).m_Distance = 0.0;
  (__return_storage_ptr__->Center).x = 0.0;
  (__return_storage_ptr__->Center).y = 0.0;
  (__return_storage_ptr__->Center).z = 0.0;
  fStack_8 = _UNK_?;
  pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  fVar10 = 0.0;
  fVar11 = 0.0;
  puVar12 = (undefined *)0x0;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  pLVar13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLVar13 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff64,pLVar13,
                        MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__
                       );
    uStack_15 = 0;
    LStack_6._list = pLVar14->_list;
    LStack_6._index = pLVar14->_index;
    LStack_6._version = pLVar14->_version;
    LStack_6._current = pLVar14->_current;
    fStack_16 = boxSize.z;
    VStack_17.x = boxSize.x;
    VStack_17.y = boxSize.y;
    uStack_1 = 1;
    fStack_18 = boxCenter.z;
    auStack_19._4_4_ = boxCenter.x;
    auStack_19._8_4_ = boxCenter.y;
    pLStack_20 = &LStack_6;
    while( true ) {
      bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                        );
      if (bVar21 == 0) break;
      RStack_22 = LStack_6._current;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter_00.z = fStack_18;
      boxCenter_00.x = (float)auStack_19._4_4_;
      boxCenter_00.y = (float)auStack_19._8_4_;
      boxSize_00.z = fStack_16;
      boxSize_00.x = VStack_17.x;
      boxSize_00.y = VStack_17.y;
      pPVar23 = BoxMath_CalcBoxFacePlane
                         ((Plane *)&stack0xffffff54,boxCenter_00,boxSize_00,boxRotation,
                          (BoxFace__Enum)RStack_22,(MethodInfo *)0x0);
      puVar12 = (undefined *)0x0;
      pLVar13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pPVar23->m_Normal).x;
      fVar24 = (pPVar23->m_Normal).y;
      fVar25 = (pPVar23->m_Normal).z;
      pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)point.x;
      fVar10 = point.y;
      fVar11 = point.z;
      VStack_17.z = PlaneEx::PlaneEx_GetAbsDistanceToPoint(*pPVar23,point,(MethodInfo *)0x0);
      if (VStack_17.z < fStack_8) {
        puVar12 = &UNK_?;
        RStack_7 = RStack_22;
        boxFace = RStack_22;
        pLVar9 = pLVar13;
        fVar10 = fVar24;
        fVar11 = fVar25;
        fStack_8 = VStack_17.z;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_6,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
               ,in_stack_26);
    uStack_1 = 0xffffffff;
    (__return_storage_ptr__->Center).x = 0.0;
    (__return_storage_ptr__->Center).y = 0.0;
    (__return_storage_ptr__->Center).z = 0.0;
    pBVar27 = TypeInfo__RTG__BoxMath;
    __return_storage_ptr__->Face = (int32_t)boxFace;
    (__return_storage_ptr__->Plane).m_Normal.x = (float)pLVar9;
    (__return_storage_ptr__->Plane).m_Normal.y = fVar10;
    (__return_storage_ptr__->Plane).m_Normal.z = fVar11;
    (__return_storage_ptr__->Plane).m_Distance = (float)puVar12;
    if ((pBVar27->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    boxCenter_01.z = fStack_18;
    boxCenter_01.x = (float)auStack_19._4_4_;
    boxCenter_01.y = (float)auStack_19._8_4_;
    boxSize_01.z = fStack_16;
    boxSize_01.x = VStack_17.x;
    boxSize_01.y = VStack_17.y;
    pVVar28 = BoxMath_CalcBoxFaceCenter
                        ((Vector3 *)auStack_19,boxCenter_01,boxSize_01,boxRotation,
                         (BoxFace__Enum)boxFace,(MethodInfo *)0x0);
    fVar11 = pVVar28->y;
    fVar10 = pVVar28->z;
    (__return_storage_ptr__->Center).x = pVVar28->x;
    (__return_storage_ptr__->Center).y = fVar11;
    (__return_storage_ptr__->Center).z = fVar10;
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  func_?();
  func_?();
  pcVar29 = (code *)swi(3);
  pBVar30 = (BoxFaceDesc *)(*pcVar29)();
  return pBVar30;
}


/* BoxFaceDesc GetFaceClosestToPoint(Vector3, Vector3, Vector3, Quaternion, Vector3) */

BoxFaceDesc *
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetFaceClosestToPoint_1
          (BoxFaceDesc *__return_storage_ptr__,Vector3 point,Vector3 boxCenter,Vector3 boxSize,
          Quaternion boxRotation,Vector3 viewVector,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff48;
  puVar5 = &stack0xffffff48;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__get_Current__
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__);
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  pBVar6 = TypeInfo__RTG__BoxMath;
  LStack_7._list = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  LStack_7._index = 0;
  LStack_7._version = 0;
  LStack_7._current.First = 0;
  LStack_7._current.Last = 0;
  RStack_8.First = 0;
  RStack_8.Last = 0;
  __return_storage_ptr__->Face = 0;
  (__return_storage_ptr__->Plane).m_Normal.x = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.y = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.z = 0.0;
  (__return_storage_ptr__->Plane).m_Distance = 0.0;
  (__return_storage_ptr__->Center).x = 0.0;
  (__return_storage_ptr__->Center).y = 0.0;
  (__return_storage_ptr__->Center).z = 0.0;
  fStack_9 = _UNK_?;
  pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  fVar11 = 0.0;
  fVar12 = 0.0;
  puVar13 = (undefined *)0x0;
  if ((pBVar6->_1).cctor_finished_or_no_cctor == 0) {
    func_?(pBVar6);
  }
  pLVar14 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLVar14 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar15 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff64,pLVar14,
                        MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__
                       );
    uStack_16 = 0;
    LStack_7._list = pLVar15->_list;
    LStack_7._index = pLVar15->_index;
    LStack_7._version = pLVar15->_version;
    LStack_7._current = pLVar15->_current;
    fStack_17 = boxSize.z;
    VStack_18.x = boxSize.x;
    VStack_18.y = boxSize.y;
    uStack_1 = 1;
    fStack_19 = boxCenter.z;
    auStack_20._4_4_ = boxCenter.x;
    auStack_20._8_4_ = boxCenter.y;
    pLStack_21 = &LStack_7;
    while( true ) {
      bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        (&LStack_7,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                        );
      if (bVar22 == 0) break;
      RStack_23 = LStack_7._current;
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      boxCenter_00.z = fStack_19;
      boxCenter_00.x = (float)auStack_20._4_4_;
      boxCenter_00.y = (float)auStack_20._8_4_;
      boxSize_00.z = fStack_17;
      boxSize_00.x = VStack_18.x;
      boxSize_00.y = VStack_18.y;
      pPVar24 = BoxMath_CalcBoxFacePlane
                         ((Plane *)&stack0xffffff54,boxCenter_00,boxSize_00,boxRotation,
                          (BoxFace__Enum)RStack_23,(MethodInfo *)0x0);
      pLVar14 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pPVar24->m_Normal).x;
      fVar25 = (pPVar24->m_Normal).y;
      fVar26 = (pPVar24->m_Normal).z;
      if (viewVector.y * fVar25 + viewVector.x * (float)pLVar14 + viewVector.z * fVar26 < 0.0) {
        puVar13 = (undefined *)0x0;
        pLVar10 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)point.x;
        fVar11 = point.y;
        fVar12 = point.z;
        VStack_18.z = PlaneEx::PlaneEx_GetAbsDistanceToPoint(*pPVar24,point,(MethodInfo *)0x0);
        if (VStack_18.z < fStack_9) {
          puVar13 = &UNK_?;
          RStack_8 = RStack_23;
          pLVar10 = pLVar14;
          fVar11 = fVar25;
          fVar12 = fVar26;
          fStack_9 = VStack_18.z;
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_7,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
               ,in_stack_27);
    boxFace = RStack_8;
    uStack_1 = 0xffffffff;
    (__return_storage_ptr__->Center).x = 0.0;
    (__return_storage_ptr__->Center).y = 0.0;
    (__return_storage_ptr__->Center).z = 0.0;
    pBVar6 = TypeInfo__RTG__BoxMath;
    __return_storage_ptr__->Face = (int32_t)RStack_8;
    (__return_storage_ptr__->Plane).m_Normal.x = (float)pLVar10;
    (__return_storage_ptr__->Plane).m_Normal.y = fVar11;
    (__return_storage_ptr__->Plane).m_Normal.z = fVar12;
    (__return_storage_ptr__->Plane).m_Distance = (float)puVar13;
    if ((pBVar6->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    boxCenter_01.z = fStack_19;
    boxCenter_01.x = (float)auStack_20._4_4_;
    boxCenter_01.y = (float)auStack_20._8_4_;
    boxSize_01.z = fStack_17;
    boxSize_01.x = VStack_18.x;
    boxSize_01.y = VStack_18.y;
    pVVar28 = BoxMath_CalcBoxFaceCenter
                        ((Vector3 *)auStack_20,boxCenter_01,boxSize_01,boxRotation,
                         (BoxFace__Enum)boxFace,(MethodInfo *)0x0);
    fVar12 = pVVar28->y;
    fVar11 = pVVar28->z;
    (__return_storage_ptr__->Center).x = pVVar28->x;
    (__return_storage_ptr__->Center).y = fVar12;
    (__return_storage_ptr__->Center).z = fVar11;
    *unaff_FS_OFFSET = uStack_3;
    return __return_storage_ptr__;
  }
  func_?();
  func_?();
  pcVar29 = (code *)swi(3);
  pBVar30 = (BoxFaceDesc *)(*pcVar29)();
  return pBVar30;
}


/* BoxFace GetMostAlignedFace(Vector3, Vector3, Quaternion, Vector3) */

BoxFace__Enum
Assembly-CSharp.dll::RTG::BoxMath::BoxMath_GetMostAlignedFace
          (Vector3 boxCenter,Vector3 boxSize,Quaternion boxRotation,Vector3 direction,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Count__);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Item_int_);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  this = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
         BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (this != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this,0,
                       MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Item_int_);
    BoxMath_CalcBoxFaceNormal
              ((Vector3 *)&stack0xffffffd8,boxCenter,boxSize,boxRotation,(BoxFace__Enum)RVar1,
               (MethodInfo *)0x0);
    index = 0;
    for (index_00 = 1; index_00 < (this->fields)._size; index_00 = index_00 + 1) {
      RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                        (this,index_00,
                         MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Item_int_
                        );
      if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
        boxSize.z = (float)TypeInfo__RTG__BoxMath;
        func_?();
      }
      fVar2 = boxSize.z;
      boxSize.z = 0.0;
      boxSize_00.y = (float)RVar1;
      boxSize_00.x = boxRotation.w;
      boxSize_00.z = fVar2;
      fVar2 = boxRotation.y;
      pVVar3 = BoxMath_CalcBoxFaceNormal
                         ((Vector3 *)&stack0xffffffd8,boxRotation._0_12_,boxSize_00,boxRotation,
                          (BoxFace__Enum)RVar1,(MethodInfo *)0x0);
      uVar4 = pVVar3->x;
      uVar5 = pVVar3->y;
      iVar6 = index_00;
      if (direction.y * (float)uVar5 + direction.x * (float)uVar4 + direction.z * pVVar3->z <= fVar2
         ) {
        iVar6 = index;
      }
      index = iVar6;
    }
    RVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                      (this,index,
                       MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__get_Item_int_);
    return (BoxFace__Enum)RVar1;
  }
  func_?();
  pcVar7 = (code *)swi(3);
  BVar8 = (*pcVar7)();
  return BVar8;
}


/* Boolean Raycast(Ray, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_Raycast
               (Ray ray,Vector3 boxCenter,Vector3 boxSize,Quaternion boxRotation,BoxEpsilon epsilon,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  bVar2 = BoxMath_Raycast_1(ray,&fStack_1,boxCenter,boxSize,boxRotation,epsilon,(MethodInfo *)0x0);
  return bVar2;
}


/* Boolean Raycast(Ray, Single ByRef, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_Raycast_1
               (Ray ray,float *t,Vector3 boxCenter,Vector3 boxSize,Quaternion boxRotation,
               BoxEpsilon epsilon,MethodInfo *method)

{
  func_?(&puStack_1,0,0x40);
  fVar2 = epsilon._sizeEps.x + boxSize.x;
  boxSize.y = epsilon._sizeEps.y + boxSize.y;
  boxSize.z = epsilon._sizeEps.z + boxSize.z;
  RStack_3.m_Origin.x = 0.0;
  RStack_3.m_Origin.y = 0.0;
  RStack_3.m_Origin.z = 0.0;
  RStack_3.m_Direction.x = 0.0;
  puStack_4 = (undefined *)0x0;
  RStack_3.m_Direction.y = 0.0;
  RStack_3.m_Direction.z = 0.0;
  uStack_5 = 0;
  *t = 0.0;
  bVar6 = (fVar2 < _UNK_?) + 1;
  if (_UNK_? <= boxSize.y) {
    bVar6 = fVar2 < _UNK_?;
  }
  bVar7 = bVar6 + 1;
  if (_UNK_? <= boxSize.z) {
    bVar7 = bVar6;
  }
  if (bVar7 < 2) {
    boxSize.x = fVar2;
    epsilon._sizeEps.z = boxSize.z;
    if (bVar7 == 1) {
      if (_UNK_? <= fVar2) {
        if (boxSize.y < _UNK_?) {
          pVVar8 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                              (&boxSize,(MethodInfo *)0x0);
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffffec,boxRotation,*pVVar8,(MethodInfo *)0x0);
          uVar9 = pVVar8->x;
          uVar10 = pVVar8->y;
          fVar11 = pVVar8->z;
          boxSize.y = (float)uVar9;
          boxSize.z = (float)uVar10;
          pVVar8 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                              ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&stack0xffffffec,boxRotation,*pVVar8,(MethodInfo *)0x0);
          uVar12._0_4_ = pVVar8->x;
          uVar12._4_4_ = pVVar8->y;
          fVar13 = pVVar8->z;
          fVar14 = epsilon._sizeEps.z;
          fVar15 = boxSize.y;
          fVar16 = boxSize.z;
        }
        else {
          fVar14 = boxSize.y;
          pVVar8 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                              (&epsilon._sizeEps,(MethodInfo *)0x0);
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              (&boxSize,boxRotation,*pVVar8,(MethodInfo *)0x0);
          uVar17 = pVVar8->x;
          uVar18 = pVVar8->y;
          fVar11 = pVVar8->z;
          epsilon._sizeEps.y = (float)uVar17;
          epsilon._sizeEps.z = (float)uVar18;
          pVVar8 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&boxSize,(MethodInfo *)0x0);
          pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              (&boxSize,boxRotation,*pVVar8,(MethodInfo *)0x0);
          uVar12._0_4_ = pVVar8->x;
          uVar12._4_4_ = pVVar8->y;
          fVar13 = pVVar8->z;
          fVar15 = epsilon._sizeEps.y;
          fVar16 = epsilon._sizeEps.z;
        }
        quadRight.y = fVar16;
        quadRight.x = fVar15;
        quadRight.z = fVar11;
        quadUp.z = fVar13;
        quadUp.x = (float)uVar12;
        quadUp.y = SUB84(uVar12,4);
        bVar19 = QuadMath::QuadMath_Raycast
                           (ray,t,boxCenter,fVar2,fVar14,quadRight,quadUp,(QuadEpsilon)ZEXT816(0),
                            (MethodInfo *)0x0);
        return bVar19;
      }
      fVar14 = boxSize.y;
      pVVar8 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&boxSize,(MethodInfo *)0x0);
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffec,boxRotation,*pVVar8,(MethodInfo *)0x0);
      uVar20 = pVVar8->x;
      uVar21 = pVVar8->y;
      fVar2 = pVVar8->z;
      boxSize.y = (float)uVar20;
      boxSize.z = (float)uVar21;
      pVVar8 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          ((Vector3 *)&stack0xffffffec,(MethodInfo *)0x0);
      pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&stack0xffffffec,boxRotation,*pVVar8,(MethodInfo *)0x0);
      VVar22.y = boxSize.z;
      VVar22.x = boxSize.y;
      VVar22.z = fVar2;
      bVar19 = QuadMath::QuadMath_Raycast
                         (ray,t,boxCenter,epsilon._sizeEps.z,fVar14,VVar22,*pVVar8,
                          (QuadEpsilon)ZEXT816(0),(MethodInfo *)0x0);
      return bVar19;
    }
    s.y = boxSize.y;
    s.x = fVar2;
    s.z = boxSize.z;
    pMVar23 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff30,boxCenter,boxRotation,s,(MethodInfo *)0x0);
    puStack_1 = (undefined *)pMVar23->m00;
    method_00 = (MethodInfo *)pMVar23->m03;
    pRVar24 = RayEx::RayEx_InverseTransform((Ray *)&stack0xffffff70,ray,*pMVar23,(MethodInfo *)0x0);
    RStack_3.m_Origin.x = (pRVar24->m_Origin).x;
    RStack_3.m_Origin.y = (pRVar24->m_Origin).y;
    RStack_3.m_Origin.z = (pRVar24->m_Origin).z;
    RStack_3.m_Direction.x = (pRVar24->m_Direction).x;
    RStack_3.m_Direction.y = (pRVar24->m_Direction).y;
    RStack_3.m_Direction.z = (pRVar24->m_Direction).z;
    if (RStack_3.m_Direction.y * RStack_3.m_Direction.y +
        RStack_3.m_Direction.x * RStack_3.m_Direction.x +
        RStack_3.m_Direction.z * RStack_3.m_Direction.z != 0.0) {
      pVVar8 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                          (&epsilon._sizeEps,(MVWorldObject *)0x0,method_00);
      uStack_5._0_4_ = pVVar8->x;
      uStack_5._4_4_ = pVVar8->y;
      puStack_4 = (undefined *)pVVar8->z;
      puVar25 = (undefined8 *)func_?();
      epsilon._sizeEps.z = *(float *)(puVar25 + 1);
      epsilon._sizeEps.x = (float)*puVar25;
      epsilon._sizeEps.y = (float)((ulonglong)*puVar25 >> 0x20);
      ray_00.m_Origin.y = RStack_3.m_Origin.y;
      ray_00.m_Origin.x = RStack_3.m_Origin.x;
      ray_00.m_Origin.z = RStack_3.m_Origin.z;
      ray_00.m_Direction.x = RStack_3.m_Direction.x;
      ray_00.m_Direction.y = RStack_3.m_Direction.y;
      ray_00.m_Direction.z = RStack_3.m_Direction.z;
      bounds.m_Center.z = (float)puStack_4;
      bounds.m_Center.x = (float)(undefined4)uStack_5;
      bounds.m_Center.y = (float)uStack_5._4_4_;
      bounds.m_Extents.x = epsilon._sizeEps.x * _UNK_?;
      bounds.m_Extents.y = epsilon._sizeEps.y * _UNK_?;
      bounds.m_Extents.z = epsilon._sizeEps.z * _UNK_?;
      bVar19 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_IntersectRayAABB
                         (ray_00,bounds,t,(MethodInfo *)0x0);
      if (bVar19 != 0) {
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            (&epsilon._sizeEps,&RStack_3,*t,(MethodInfo *)0x0);
        uVar26 = pVVar8->x;
        uVar27 = pVVar8->y;
        ray.m_Origin.x = pVVar8->z;
        fVar28 = (float)uVar27;
        VVar22.x = (float)uVar26;
        VVar22 = (Vector3)CONCAT84(VVar22._0_8_,VVar22.x);
        pVVar8 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            (&boxSize,(Matrix4x4 *)&puStack_1,VVar22,(MethodInfo *)0x0);
        uVar29 = pVVar8->x;
        uVar30 = pVVar8->y;
        boxSize.z = pVVar8->z - ray.m_Origin.z;
        epsilon._sizeEps.x = (float)uVar29 - ray.m_Origin.x;
        epsilon._sizeEps.y = (float)uVar30 - 0.0;
        epsilon._sizeEps.z = boxSize.z;
        fVar31 = (float10)func_?();
        *t = (float)fVar31;
        return 1;
      }
    }
  }
  return 0;
}


/* Void TransformBox(Vector3, Vector3, Matrix4x4, Vector3 ByRef, Vector3 ByRef) */

void Assembly-CSharp.dll::RTG::BoxMath::BoxMath_TransformBox
               (Vector3 boxCenter,Vector3 boxSize,Matrix4x4 transformMatrix,Vector3 *newBoxCenter,
               Vector3 *newBoxSize,MethodInfo *method)

{
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     (&VStack_2,&transformMatrix,0,(MethodInfo *)0x0);
  fVar3 = pVVar1->x;
  fVar4 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     (&VStack_2,&transformMatrix,1,(MethodInfo *)0x0);
  fVar5 = pVVar1->x;
  fVar6 = pVVar1->y;
  fVar7 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     (&VStack_2,&transformMatrix,2,(MethodInfo *)0x0);
  fVar8 = pVVar1->y;
  VStack_2.y = pVVar1->z;
  fVar9 = boxSize.x * _UNK_?;
  fVar10 = boxSize.y * _UNK_?;
  fVar11 = boxSize.z * _UNK_?;
  fStack_12 = fVar5 * fVar10;
  fStack_13 = pVVar1->x * fVar11;
  VStack_2.x = VStack_2.y * fVar11;
  fVar14 = boxCenter.x;
  VStack_2.z = VStack_2.y;
  VStack_2.w = VStack_2.y;
  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&VStack_16,&transformMatrix,boxCenter,(MethodInfo *)0x0);
  fVar17 = pVVar15->y;
  fVar5 = pVVar15->z;
  newBoxCenter->x = pVVar15->x;
  uVar18 = _UNK_?;
  newBoxCenter->y = fVar17;
  fStack_12 = (float)((uint)fStack_12 & _UNK_?);
  newBoxCenter->z = fVar5;
  fVar3 = (float)((uint)(fVar3 * fVar9) & uVar18) + fStack_12 + (float)((uint)fStack_13 & uVar18);
  fVar5 = (float)((uint)fVar14 & uVar18) + (float)((uint)(fVar6 * fVar10) & uVar18) +
           (float)((uint)(fVar8 * fVar11) & uVar18);
  fVar8 = (float)((uint)(fVar4 * fVar9) & uVar18) + (float)((uint)(fVar7 * fVar10) & uVar18) +
           (float)((uint)VStack_2.x & uVar18);
  newBoxSize->x = fVar3 + fVar3;
  newBoxSize->y = fVar5 + fVar5;
  newBoxSize->z = fVar8 + fVar8;
  return;
}


/* BoxMath() */

void Assembly-CSharp.dll::RTG::BoxMath::BoxMath__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
    func_?(&TypeInfo__System__Single);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  this = (List_1_RTG_BoxFace_ *)
         func_?(TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this,
             MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List__);
  TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces = this;
  func_?(TypeInfo__RTG__BoxMath->static_fields,this);
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  TypeInfo__RTG__BoxMath->static_fields->A = pVVar1;
  func_?(&TypeInfo__RTG__BoxMath->static_fields->A,pVVar1);
  pVVar1 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,3);
  TypeInfo__RTG__BoxMath->static_fields->B = pVVar1;
  func_?(&TypeInfo__RTG__BoxMath->static_fields->B,pVVar1);
  pSVar2 = (Single__Array_1 *)func_?(TypeInfo__System__Single,&stack0xfffffff4);
  TypeInfo__RTG__BoxMath->static_fields->R = pSVar2;
  func_?(&TypeInfo__RTG__BoxMath->static_fields->R,pSVar2);
  puStack_3 = (undefined *)0x3;
  pSVar2 = (Single__Array_1 *)func_?(TypeInfo__System__Single,&puStack_3);
  TypeInfo__RTG__BoxMath->static_fields->absR = pSVar2;
  func_?(&TypeInfo__RTG__BoxMath->static_fields->absR,pSVar2);
  pMVar4 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
  if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    piVar6 = &(pLVar5->fields)._version;
    *piVar6 = *piVar6 + 1;
    pRVar7 = (pLVar5->fields)._items;
    if (pRVar7 != (RegexCharClass_SingleRange__Array *)0x0) {
      uVar8 = (pLVar5->fields)._size;
      if (uVar8 < pRVar7->max_length) {
        (pLVar5->fields)._size = uVar8 + 1;
        if (pRVar7->max_length <= uVar8) goto code_?;
        pRVar7->vector[uVar8].First = 0;
        pRVar7->vector[uVar8].Last = 0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                  (pLVar5,(RegexCharClass_SingleRange)0x0,pMVar4->klass->rgctx_data[0xe].method);
      }
      pMVar4 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
      if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        piVar6 = &(pLVar5->fields)._version;
        *piVar6 = *piVar6 + 1;
        pRVar7 = (pLVar5->fields)._items;
        if (pRVar7 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar8 = (pLVar5->fields)._size;
          if (uVar8 < pRVar7->max_length) {
            (pLVar5->fields)._size = uVar8 + 1;
            if (pRVar7->max_length <= uVar8) goto code_?;
            pRVar7->vector[uVar8].First = 1;
            pRVar7->vector[uVar8].Last = 0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (pLVar5,(RegexCharClass_SingleRange)0x1,pMVar4->klass->rgctx_data[0xe].method)
            ;
          }
          pMVar4 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
          pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
          if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            piVar6 = &(pLVar5->fields)._version;
            *piVar6 = *piVar6 + 1;
            pRVar7 = (pLVar5->fields)._items;
            if (pRVar7 != (RegexCharClass_SingleRange__Array *)0x0) {
              uVar8 = (pLVar5->fields)._size;
              if (uVar8 < pRVar7->max_length) {
                (pLVar5->fields)._size = uVar8 + 1;
                if (pRVar7->max_length <= uVar8) goto code_?;
                pRVar7->vector[uVar8].First = 2;
                pRVar7->vector[uVar8].Last = 0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                          (pLVar5,(RegexCharClass_SingleRange)0x2,
                           pMVar4->klass->rgctx_data[0xe].method);
              }
              pMVar4 = 
              MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
              pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
              if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                piVar6 = &(pLVar5->fields)._version;
                *piVar6 = *piVar6 + 1;
                pRVar7 = (pLVar5->fields)._items;
                if (pRVar7 != (RegexCharClass_SingleRange__Array *)0x0) {
                  uVar8 = (pLVar5->fields)._size;
                  if (uVar8 < pRVar7->max_length) {
                    (pLVar5->fields)._size = uVar8 + 1;
                    if (pRVar7->max_length <= uVar8) goto code_?;
                    pRVar7->vector[uVar8].First = 3;
                    pRVar7->vector[uVar8].Last = 0;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                              (pLVar5,(RegexCharClass_SingleRange)0x3,
                               pMVar4->klass->rgctx_data[0xe].method);
                  }
                  pMVar4 = 
                  MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
                  pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
                  if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                    piVar6 = &(pLVar5->fields)._version;
                    *piVar6 = *piVar6 + 1;
                    pRVar7 = (pLVar5->fields)._items;
                    if (pRVar7 != (RegexCharClass_SingleRange__Array *)0x0) {
                      uVar8 = (pLVar5->fields)._size;
                      if (uVar8 < pRVar7->max_length) {
                        (pLVar5->fields)._size = uVar8 + 1;
                        if (pRVar7->max_length <= uVar8) goto code_?;
                        pRVar7->vector[uVar8].First = 4;
                        pRVar7->vector[uVar8].Last = 0;
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                  (pLVar5,(RegexCharClass_SingleRange)0x4,
                                   pMVar4->klass->rgctx_data[0xe].method);
                      }
                      pMVar4 = 
                      MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_
                      ;
                      pLVar5 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
                      if (pLVar5 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)0x0) {
                        piVar6 = &(pLVar5->fields)._version;
                        *piVar6 = *piVar6 + 1;
                        pRVar7 = (pLVar5->fields)._items;
                        if (pRVar7 != (RegexCharClass_SingleRange__Array *)0x0) {
                          uVar8 = (pLVar5->fields)._size;
                          if (pRVar7->max_length <= uVar8) {
                            mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                      (pLVar5,(RegexCharClass_SingleRange)0x5,
                                       pMVar4->klass->rgctx_data[0xe].method);
                            return;
                          }
                          (pLVar5->fields)._size = uVar8 + 1;
                          if (uVar8 < pRVar7->max_length) {
                            pRVar7->vector[uVar8].First = 5;
                            pRVar7->vector[uVar8].Last = 0;
                            return;
                          }
                          goto code_?;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* List`1[RTG.BoxFace] get_AllBoxFaces() */

List_1_RTG_BoxFace_ * Assembly-CSharp.dll::RTG::BoxMath::BoxMath_get_AllBoxFaces(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__RTG__BoxMath);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List_System__Collections__Generic__IEnumerable<RTG::BoxFace>_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
    cRam_? = '\x01';
  }
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  collection = TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
  this = (List_1_System_Int32Enum_ *)
         func_?(TypeInfo__System__Collections__Generic__List<RTG::BoxFace>);
  mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
  List_1_System_Int32Enum___ctor_1
            (this,(IEnumerable_1_System_Int32Enum_ *)collection,
             MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__List_System__Collections__Generic__IEnumerable<RTG::BoxFace>_
            );
  return (List_1_RTG_BoxFace_ *)this;
}

