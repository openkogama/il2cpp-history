
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
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  pVVar2 = TypeInfo__RTG__BoxMath->static_fields->A;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = rotation0.y;
  rotation.x = rotation0.x;
  rotation.z = rotation0.z;
  rotation.w = rotation0.w;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (&VStack_4,rotation,
                       TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0)
  ;
  if (pVVar2 != (Vector3__Array *)0x0) {
    fVar5 = pVVar3->y;
    fVar6 = pVVar3->z;
    pBVar7 = (BoxMath__StaticFields *)rotation0.w;
    if (pVVar2->max_length == 0) goto code_?;
    pVVar2->vector[0].x = pVVar3->x;
    pVVar2->vector[0].y = fVar5;
    pVVar2->vector[0].z = fVar6;
    pVVar2 = TypeInfo__RTG__BoxMath->static_fields->A;
    if (cRam_? == '\0') {
      func_?();
      cRam_? = '\x01';
    }
    rotation_01.y = rotation0.y;
    rotation_01.x = rotation0.x;
    rotation_01.z = rotation0.z;
    rotation_01.w = rotation0.w;
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        (&VStack_4,rotation_01,
                         TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0);
    if (pVVar2 != (Vector3__Array *)0x0) {
      fVar5 = pVVar3->y;
      fVar6 = pVVar3->z;
      pBVar7 = (BoxMath__StaticFields *)rotation0.w;
      if (pVVar2->max_length < 2) goto code_?;
      pVVar2->vector[1].x = pVVar3->x;
      pVVar2->vector[1].y = fVar5;
      pVVar2->vector[1].z = fVar6;
      pVVar2 = TypeInfo__RTG__BoxMath->static_fields->A;
      if (cRam_? == '\0') {
        uStack_8 = CONCAT44(uStack_8._4_4_,&TypeInfo__UnityEngine__Vector3);
        VStack_4.z = (float)&UNK_?;
        func_?();
        cRam_? = '\x01';
      }
      rotation_00.y = rotation0.y;
      rotation_00.x = rotation0.x;
      rotation_00.z = rotation0.z;
      rotation_00.w = rotation0.w;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          ((Vector3 *)&rotation0.y,rotation_00,
                           TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                           (MethodInfo *)0x0);
      if (pVVar2 != (Vector3__Array *)0x0) {
        fVar5 = pVVar3->y;
        fVar6 = pVVar3->z;
        pBVar7 = (BoxMath__StaticFields *)rotation0.w;
        if (pVVar2->max_length < 3) goto code_?;
        pVVar2->vector[2].x = pVVar3->x;
        pVVar2->vector[2].y = fVar5;
        pVVar2->vector[2].z = fVar6;
        pVVar2 = TypeInfo__RTG__BoxMath->static_fields->B;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                            ((Vector3 *)&rotation0.y,rotation1,
                             TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                             (MethodInfo *)0x0);
        if (pVVar2 != (Vector3__Array *)0x0) {
          fVar5 = pVVar3->y;
          fVar6 = pVVar3->z;
          pBVar7 = (BoxMath__StaticFields *)rotation0.w;
          if (pVVar2->max_length == 0) goto code_?;
          pVVar2->vector[0].x = pVVar3->x;
          pVVar2->vector[0].y = fVar5;
          pVVar2->vector[0].z = fVar6;
          pVVar2 = TypeInfo__RTG__BoxMath->static_fields->B;
          if (cRam_? == '\0') {
            func_?();
            cRam_? = '\x01';
          }
          pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              ((Vector3 *)&rotation0.y,rotation1,
                               TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                               (MethodInfo *)0x0);
          if (pVVar2 != (Vector3__Array *)0x0) {
            fVar5 = pVVar3->y;
            fVar6 = pVVar3->z;
            pBVar7 = (BoxMath__StaticFields *)rotation0.w;
            if (pVVar2->max_length < 2) goto code_?;
            pVVar2->vector[1].x = pVVar3->x;
            pVVar2->vector[1].y = fVar5;
            pVVar2->vector[1].z = fVar6;
            pVVar2 = TypeInfo__RTG__BoxMath->static_fields->B;
            if (cRam_? == '\0') {
              func_?();
              cRam_? = '\x01';
            }
            pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                                ((Vector3 *)&rotation0.y,rotation1,
                                 TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                                 (MethodInfo *)0x0);
            if (pVVar2 != (Vector3__Array *)0x0) {
              fVar5 = pVVar3->y;
              fVar6 = pVVar3->z;
              pBVar7 = (BoxMath__StaticFields *)rotation0.w;
              if (pVVar2->max_length < 3) goto code_?;
              pVVar2->vector[2].x = pVVar3->x;
              pVVar2->vector[2].y = fVar5;
              pVVar2->vector[2].z = fVar6;
              rotation0.w = 0.0;
              do {
                iVar9 = 0;
                do {
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pSVar10 = TypeInfo__RTG__BoxMath->static_fields->R;
                  if (((TypeInfo__RTG__BoxMath->static_fields->A == (Vector3__Array *)0x0) ||
                      (func_?(),
                      TypeInfo__RTG__BoxMath->static_fields->B == (Vector3__Array *)0x0)) ||
                     (func_?(), pSVar10 == (Single__Array_1 *)0x0)) goto code_?;
                  func_?();
                  iVar9 = iVar9 + 1;
                } while (iVar9 < 3);
                rotation0.w = (float)((int)rotation0.w + 1);
              } while ((int)rotation0.w < 3);
              fStack_11 = size0.z * _UNK_?;
              fStack_12 = size0.x * _UNK_?;
              fStack_13 = size0.y * _UNK_?;
              uStack_14 = CONCAT44(fStack_13,fStack_12);
              fStack_15 = size1.z * _UNK_?;
              fStack_16 = size1.x * _UNK_?;
              fStack_17 = size1.y * _UNK_?;
              uStack_8 = CONCAT44(fStack_17,fStack_16);
              rotation0.w = 0.0;
              fStack_18 = fStack_15;
              fStack_19 = fStack_11;
              do {
                iVar9 = 0;
                do {
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pSVar10 = TypeInfo__RTG__BoxMath->static_fields->absR;
                  if (TypeInfo__RTG__BoxMath->static_fields->R == (Single__Array_1 *)0x0)
                  goto code_?;
                  fVar20 = (float10)func_?();
                  fStack_21 = (float)fVar20;
                  if (pSVar10 == (Single__Array_1 *)0x0) goto code_?;
                  func_?();
                  iVar9 = iVar9 + 1;
                } while (iVar9 < 3);
                rotation0.w = (float)((int)rotation0.w + 1);
              } while ((int)rotation0.w < 3);
              rotation0.w = center1.x - center0.x;
              fStack_21 = center1.y - center0.y;
              fStack_22 = center1.z - center0.z;
              if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                func_?();
              }
              pVVar2 = TypeInfo__RTG__BoxMath->static_fields->A;
              if (pVVar2 != (Vector3__Array *)0x0) {
                pBVar7 = (BoxMath__StaticFields *)rotation0.w;
                if (pVVar2->max_length == 0) goto code_?;
                uVar23 = pVVar2->vector[0].x;
                uVar24 = pVVar2->vector[0].y;
                pBVar7 = (BoxMath__StaticFields *)pVVar2->vector[0].z;
                rotation0.y = (float)uVar23;
                rotation0.z = (float)uVar24;
                if (pVVar2->max_length < 2) goto code_?;
                uVar25 = pVVar2->vector[1].x;
                uVar26 = pVVar2->vector[1].y;
                if (pVVar2->max_length < 3) goto code_?;
                VStack_4.x = pVVar2->vector[2].x;
                VStack_4.y = pVVar2->vector[2].y;
                VStack_4.z = pVVar2->vector[2].z;
                uVar27 = 0;
                VStack_1.x = (float)uVar24 * fStack_21 + (float)uVar23 * rotation0.w +
                              (float)pBVar7 * fStack_22;
                VStack_1.y = (float)uVar26 * fStack_21 + (float)uVar25 * rotation0.w +
                              pVVar2->vector[1].z * fStack_22;
                VStack_1.z = VStack_4.y * fStack_21 + VStack_4.x * rotation0.w +
                              VStack_4.z * fStack_22;
                rotation0.w = (float)pBVar7;
                fStack_28 = VStack_1.z;
                fStack_22 = VStack_1.x;
                fStack_21 = VStack_1.y;
                do {
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  pSVar10 = TypeInfo__RTG__BoxMath->static_fields->absR;
                  if (pSVar10 == (Single__Array_1 *)0x0) goto code_?;
                  pBVar7 = (BoxMath__StaticFields *)rotation0.w;
                  if ((pSVar10->bounds->length <= uVar27) ||
                     (iVar29 = pSVar10->bounds[1].length, iVar29 == 0)) goto code_?;
                  fVar6 = pSVar10->vector[iVar29 * uVar27];
                  uVar30 = pSVar10->bounds[1].length;
                  if (uVar30 < 2) goto code_?;
                  fVar5 = pSVar10->vector[uVar30 * uVar27 + 1];
                  uVar30 = pSVar10->bounds[1].length;
                  if (uVar30 < 3) goto code_?;
                  rotation0.w = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                          (&VStack_1,uVar27,
                                           (MethodInfo *)
                                           (fStack_18 * pSVar10->vector[uVar30 * uVar27 + 2]));
                  fStack_31 = (float)((uint)rotation0.w & _UNK_?);
                  fVar32 = 0.0;
                  fVar33 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                     ((Vector3 *)&stack0xffffff80,uVar27,(MethodInfo *)0x0);
                  rotation0.w = fVar33 + fStack_17 * fVar5 + fStack_16 * fVar6 + fVar32;
                  if (rotation0.w < fStack_31) {
                    return 0;
                  }
                  uVar27 = uVar27 + 1;
                } while ((int)uVar27 < 3);
                uVar27 = 0;
                iVar9 = 0x10;
                do {
                  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                    func_?();
                  }
                  rotation0.w = (float)TypeInfo__RTG__BoxMath->static_fields;
                  pSVar10 = ((BoxMath__StaticFields *)rotation0.w)->absR;
                  if (pSVar10 == (Single__Array_1 *)0x0) goto code_?;
                  pIVar34 = pSVar10->bounds;
                  pBVar7 = (BoxMath__StaticFields *)rotation0.w;
                  if (((pIVar34->length == 0) || (pIVar34[1].length <= uVar27)) ||
                     (pIVar34->length < 2)) goto code_?;
                  if (pSVar10->bounds->length < 3) goto code_?;
                  fStack_31 = fStack_13 * pSVar10->vector[pIVar34[1].length + uVar27] +
                              fStack_12 * *(float *)((int)pSVar10->vector + iVar9 + -0x10) +
                              fStack_19 * pSVar10->vector[uVar27 + pSVar10->bounds[1].length * 2];
                  pSVar10 = ((BoxMath__StaticFields *)rotation0.w)->R;
                  if (pSVar10 == (Single__Array_1 *)0x0) goto code_?;
                  pIVar34 = pSVar10->bounds;
                  if ((((pIVar34->length == 0) || (pIVar34[1].length <= uVar27)) ||
                      (pIVar34->length < 2)) || (pIVar34->length < 3)) goto code_?;
                  rotation0.w = (float)((uint)(fStack_22 *
                                               *(float *)((int)pSVar10->vector + iVar9 + -0x10) +
                                               fStack_21 *
                                               pSVar10->vector[pIVar34[1].length + uVar27] +
                                              fStack_28 *
                                              pSVar10->vector[uVar27 + pIVar34[1].length * 2]) &
                                       _UNK_?);
                  fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                     ((Vector3 *)&stack0xffffff74,uVar27,(MethodInfo *)0x0);
                  fStack_31 = fVar6 + fStack_31;
                  if (fStack_31 < rotation0.w) {
                    return 0;
                  }
                  iVar9 = iVar9 + 4;
                  uVar27 = uVar27 + 1;
                } while (iVar9 < 0x1c);
                if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                  func_?();
                }
                if (TypeInfo__RTG__BoxMath->static_fields->absR != (Single__Array_1 *)0x0) {
                  fVar20 = (float10)func_?();
                  rotation0.w = (float)fVar20;
                  if (TypeInfo__RTG__BoxMath->static_fields->absR != (Single__Array_1 *)0x0) {
                    fVar20 = (float10)func_?();
                    rotation0.w = rotation0.w * fStack_13;
                    fStack_18 = (float)(fVar20 * (float10)fStack_11 + (float10)rotation0.w);
                    if (TypeInfo__RTG__BoxMath->static_fields->absR != (Single__Array_1 *)0x0) {
                      fVar20 = (float10)func_?();
                      rotation0.w = (float)fVar20;
                      if (TypeInfo__RTG__BoxMath->static_fields->absR != (Single__Array_1 *)0x0) {
                        fVar20 = (float10)func_?();
                        rotation0.w = (float)(fVar20 * (float10)fStack_15 +
                                             (float10)(fStack_17 * rotation0.w));
                        if (TypeInfo__RTG__BoxMath->static_fields->R != (Single__Array_1 *)0x0) {
                          fVar20 = (float10)func_?();
                          fStack_19 = (float)fVar20;
                          if (TypeInfo__RTG__BoxMath->static_fields->R != (Single__Array_1 *)0x0) {
                            fStack_19 = fStack_28 * fStack_19;
                            fVar20 = (float10)func_?();
                            fStack_19 = (float)((float10)fStack_19 - fVar20 * (float10)VStack_1.y);
                            if (rotation0.w + fStack_18 < (float)((uint)fStack_19 & _UNK_?)) {
                              return 0;
                            }
                            if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
                              func_?();
                            }
                            if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                (Single__Array_1 *)0x0) {
                              fVar20 = (float10)func_?();
                              rotation0.w = (float)fVar20;
                              if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                  (Single__Array_1 *)0x0) {
                                fVar20 = (float10)func_?();
                                rotation0.w = rotation0.w * fStack_13;
                                fStack_18 = (float)(fVar20 * (float10)fStack_11 +
                                                  (float10)rotation0.w);
                                if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                    (Single__Array_1 *)0x0) {
                                  fVar20 = (float10)func_?();
                                  rotation0.w = (float)fVar20;
                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                      (Single__Array_1 *)0x0) {
                                    fVar20 = (float10)func_?();
                                    rotation0.w = (float)(fVar20 * (float10)fStack_15 +
                                                         (float10)(rotation0.w * fStack_16));
                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                        (Single__Array_1 *)0x0) {
                                      fVar20 = (float10)func_?();
                                      fStack_19 = (float)fVar20;
                                      if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                          (Single__Array_1 *)0x0) {
                                        fStack_19 = fStack_19 * fStack_28;
                                        fVar20 = (float10)func_?();
                                        fStack_19 = (float)((float10)fStack_19 -
                                                          fVar20 * (float10)VStack_1.y);
                                        if (rotation0.w + fStack_18 <
                                            (float)((uint)fStack_19 & _UNK_?)) {
                                          return 0;
                                        }
                                        if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor
                                            == 0) {
                                          func_?();
                                        }
                                        if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                            (Single__Array_1 *)0x0) {
                                          fVar20 = (float10)func_?();
                                          rotation0.w = (float)fVar20;
                                          if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                              (Single__Array_1 *)0x0) {
                                            fVar20 = (float10)func_?();
                                            rotation0.w = rotation0.w * fStack_13;
                                            fStack_18 = (float)(fVar20 * (float10)fStack_11 +
                                                              (float10)rotation0.w);
                                            if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                (Single__Array_1 *)0x0) {
                                              fVar20 = (float10)func_?();
                                              rotation0.w = (float)fVar20;
                                              if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                  (Single__Array_1 *)0x0) {
                                                fVar20 = (float10)func_?();
                                                rotation0.w = (float)(fVar20 * (float10)uStack_8.
                                                                                        _4_4_ +
                                                                     (float10)(rotation0.w *
                                                                              fStack_16));
                                                if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                    (Single__Array_1 *)0x0) {
                                                  fVar20 = (float10)func_?();
                                                  fStack_19 = (float)fVar20;
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fStack_19 = fStack_19 * fStack_28;
                                                    fVar20 = (float10)func_?();
                                                    fStack_19 = (float)((float10)fStack_19 -
                                                                      fVar20 * (float10)VStack_1.y)
                                                    ;
                                                    if (rotation0.w + fStack_18 <
                                                        (float)((uint)fStack_19 & _UNK_?)) {
                                                      return 0;
                                                    }
                                                    if ((TypeInfo__RTG__BoxMath->_1).
                                                        cctor_finished_or_no_cctor == 0) {
                                                      func_?();
                                                    }
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float10)func_?();
                                                      rotation0.w = (float)fVar20;
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar20 = (float10)func_?();
                                                        rotation0.w = rotation0.w * fStack_12;
                                                        fStack_18 = (float)(fVar20 * (float10)
                                                  fStack_11 + (float10)rotation0.w);
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    rotation0.w = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float10)func_?();
                                                      rotation0.w = (float)(fVar20 * (float10)
                                                  fStack_15 + (float10)(rotation0.w * fStack_17));
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    fStack_19 = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      fStack_19 = fStack_19 * fStack_22;
                                                      fVar20 = (float10)func_?();
                                                      fStack_19 = (float)((float10)fStack_19 -
                                                                        fVar20 * (float10)VStack_1.
                                                                                          z);
                                                      if (rotation0.w + fStack_18 <
                                                          (float)((uint)fStack_19 & _UNK_?)) {
                                                        return 0;
                                                      }
                                                      if ((TypeInfo__RTG__BoxMath->_1).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar20 = (float10)func_?();
                                                        rotation0.w = (float)fVar20;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar20 = (float10)func_?();
                                                          rotation0.w = rotation0.w * fStack_12;
                                                          fStack_18 = (float)(fVar20 * (float10)
                                                  fStack_11 + (float10)rotation0.w);
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    rotation0.w = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float10)func_?();
                                                      rotation0.w = (float)(fVar20 * (float10)
                                                  fStack_15 + (float10)(rotation0.w * fStack_16));
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    fStack_19 = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      fStack_19 = fStack_19 * fStack_22;
                                                      fVar20 = (float10)func_?();
                                                      fStack_19 = (float)((float10)fStack_19 -
                                                                        fVar20 * (float10)VStack_1.
                                                                                          z);
                                                      if (rotation0.w + fStack_18 <
                                                          (float)((uint)fStack_19 & _UNK_?)) {
                                                        return 0;
                                                      }
                                                      if ((TypeInfo__RTG__BoxMath->_1).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar20 = (float10)func_?();
                                                        rotation0.w = (float)fVar20;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar20 = (float10)func_?();
                                                          rotation0.w = rotation0.w * fStack_12;
                                                          fStack_18 = (float)(fVar20 * (float10)
                                                  fStack_11 + (float10)rotation0.w);
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    rotation0.w = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float10)func_?();
                                                      rotation0.w = (float)(fVar20 * (float10)
                                                  uStack_8._4_4_ +
                                                  (float10)(rotation0.w * fStack_16));
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    fStack_19 = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      fStack_19 = fStack_19 * fStack_22;
                                                      fVar20 = (float10)func_?();
                                                      fStack_19 = (float)((float10)fStack_19 -
                                                                        fVar20 * (float10)VStack_1.
                                                                                          z);
                                                      if (rotation0.w + fStack_18 <
                                                          (float)((uint)fStack_19 & _UNK_?)) {
                                                        return 0;
                                                      }
                                                      if ((TypeInfo__RTG__BoxMath->_1).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar20 = (float10)func_?();
                                                        rotation0.w = (float)fVar20;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar20 = (float10)func_?();
                                                          rotation0.w = rotation0.w * fStack_12;
                                                          fStack_18 = (float)(fVar20 * (float10)
                                                  uStack_14._4_4_ + (float10)rotation0.w);
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    rotation0.w = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float10)func_?();
                                                      rotation0.w = (float)(fVar20 * (float10)
                                                  fStack_15 + (float10)(rotation0.w * fStack_17));
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    fStack_19 = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      fStack_19 = fStack_19 * fStack_21;
                                                      fVar20 = (float10)func_?();
                                                      fStack_19 = (float)((float10)fStack_19 -
                                                                        fVar20 * (float10)VStack_1.
                                                                                          x);
                                                      if (rotation0.w + fStack_18 <
                                                          (float)((uint)fStack_19 & _UNK_?)) {
                                                        return 0;
                                                      }
                                                      if ((TypeInfo__RTG__BoxMath->_1).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar20 = (float10)func_?();
                                                        rotation0.w = (float)fVar20;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar20 = (float10)func_?();
                                                          rotation0.w = rotation0.w * fStack_12;
                                                          fStack_18 = (float)(fVar20 * (float10)
                                                  uStack_14._4_4_ + (float10)rotation0.w);
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    rotation0.w = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float10)func_?();
                                                      rotation0.w = (float)(fVar20 * (float10)
                                                  fStack_15 + (float10)(rotation0.w * fStack_16));
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    fStack_19 = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      fStack_19 = fStack_19 * fStack_21;
                                                      fVar20 = (float10)func_?();
                                                      fStack_19 = (float)((float10)fStack_19 -
                                                                        fVar20 * (float10)VStack_1.
                                                                                          x);
                                                      if (rotation0.w + fStack_18 <
                                                          (float)((uint)fStack_19 & _UNK_?)) {
                                                        return 0;
                                                      }
                                                      if ((TypeInfo__RTG__BoxMath->_1).
                                                          cctor_finished_or_no_cctor == 0) {
                                                        func_?();
                                                      }
                                                      if (TypeInfo__RTG__BoxMath->static_fields->
                                                          absR != (Single__Array_1 *)0x0) {
                                                        fVar20 = (float10)func_?();
                                                        rotation0.w = (float)fVar20;
                                                        if (TypeInfo__RTG__BoxMath->static_fields->
                                                            absR != (Single__Array_1 *)0x0) {
                                                          fVar20 = (float10)func_?();
                                                          rotation0.w = rotation0.w * fStack_12;
                                                          fStack_18 = (float)(fVar20 * (float10)
                                                  uStack_14._4_4_ + (float10)rotation0.w);
                                                  if (TypeInfo__RTG__BoxMath->static_fields->absR !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    rotation0.w = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->absR
                                                        != (Single__Array_1 *)0x0) {
                                                      fVar20 = (float10)func_?();
                                                      rotation0.w = (float)(fVar20 * (float10)
                                                  uStack_8._4_4_ +
                                                  (float10)(rotation0.w * fStack_16));
                                                  if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                      (Single__Array_1 *)0x0) {
                                                    fVar20 = (float10)func_?();
                                                    fStack_19 = (float)fVar20;
                                                    if (TypeInfo__RTG__BoxMath->static_fields->R !=
                                                        (Single__Array_1 *)0x0) {
                                                      fStack_19 = fStack_19 * fStack_21;
                                                      fVar20 = (float10)func_?();
                                                      if (rotation0.w + fStack_18 <
                                                          (float)((uint)(float)((float10)fStack_19 -
                                                                               fVar20 * (float10)
                                                  VStack_1.x) & _UNK_?)) {
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
code_?:
  func_?();
  pBVar7 = (BoxMath__StaticFields *)rotation0.w;
code_?:
  rotation0.w = (float)pBVar7;
  func_?();
  pcVar35 = (code *)swi(3);
  bVar36 = (*pcVar35)();
  return bVar36;
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
  fVar1 = boxSize.x * _UNK_?;
  fVar2 = boxSize.z * _UNK_?;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = boxRotation.y;
  rotation.x = boxRotation.x;
  rotation.z = boxRotation.z;
  rotation.w = boxRotation.w;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (&boxSize,rotation,TypeInfo__UnityEngine__Vector3->static_fields->rightVector,
                       (MethodInfo *)0x0);
  uVar4 = pVVar3->y;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3,uVar4,pVVar3->z,fVar1,fVar2);
    cRam_? = '\x01';
  }
  rotation_00.y = boxRotation.y;
  rotation_00.x = boxRotation.x;
  rotation_00.z = boxRotation.z;
  rotation_00.w = boxRotation.w;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      (&boxSize,rotation_00,TypeInfo__UnityEngine__Vector3->static_fields->upVector,
                       (MethodInfo *)0x0);
  fVar1 = pVVar3->x;
  fVar2 = pVVar3->y;
  fVar5 = pVVar3->z;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  __return_storage_ptr__ = &boxRotation.y;
  puVar6 = &UNK_?;
  rotation_01.y = boxRotation.y;
  rotation_01.x = boxRotation.x;
  rotation_01.z = boxRotation.z;
  rotation_01.w = boxRotation.w;
  fVar7 = boxRotation.x;
  fVar8 = boxRotation.y;
  fVar9 = boxRotation.z;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                      ((Vector3 *)__return_storage_ptr__,rotation_01,
                       TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                       (MethodInfo *)0x0);
  fVar10 = pVVar3->x;
  fVar11 = pVVar3->y;
  boxSize.z = pVVar3->z;
  fVar12 = boxCenter.x - fVar9 * fVar10;
  fVar13 = boxCenter.y - fVar9 * fVar11;
  boxRotation.w = boxCenter.z - fVar9 * boxSize.z;
  puVar14 = &UNK_?;
  boxSize.x = fVar10;
  boxSize.y = fVar11;
  fVar15 = boxSize.z;
  collection = (IEnumerable_1_UnityEngine_Vector3_ *)func_?(TypeInfo__UnityEngine__Vector3)
  ;
  fVar16 = (float)puVar6 * fVar8;
  fVar17 = (float)__return_storage_ptr__ * fVar8;
  fVar7 = fVar7 * fVar8;
  boxSize.z = fVar2 * (float)puVar14;
  fVar1 = fVar1 * (float)puVar14;
  fVar5 = fVar5 * (float)puVar14;
  if (collection == (IEnumerable_1_UnityEngine_Vector3_ *)0x0) {
    boxRotation.z = (float)&UNK_?;
    func_?();
  }
  else if (collection[1].monitor != (MonitorData *)0x0) {
    IVar18.monitor = (MonitorData *)(boxSize.z + (fVar13 - fVar17));
    IVar18.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar1 + (fVar12 - fVar16));
    collection[2] = IVar18;
    collection[3].klass =
         (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar5 + (boxRotation.w - fVar7));
    if ((MonitorData *)0x1 < collection[1].monitor) {
      *(ulonglong *)&collection[3].monitor =
           CONCAT44(boxSize.z + fVar17 + fVar13,fVar1 + fVar16 + fVar12);
      collection[4].monitor = (MonitorData *)(fVar5 + fVar7 + boxRotation.w);
      if ((MonitorData *)0x2 < collection[1].monitor) {
        IVar19.monitor = (MonitorData *)((fVar17 + fVar13) - boxSize.z);
        IVar19.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)((fVar16 + fVar12) - fVar1);
        collection[5] = IVar19;
        collection[6].klass =
             (IEnumerable_1_UnityEngine_Vector3___Class *)((fVar7 + boxRotation.w) - fVar5);
        if ((MonitorData *)0x3 < collection[1].monitor) {
          *(ulonglong *)&collection[6].monitor =
               CONCAT44((fVar13 - fVar17) - boxSize.z,(fVar12 - fVar16) - fVar1);
          collection[7].monitor = (MonitorData *)((boxRotation.w - fVar7) - fVar5);
          boxRotation.w = boxCenter.x + fVar10 * fVar9;
          fVar2 = boxCenter.y + fVar11 * fVar9;
          fVar10 = boxCenter.z + fVar15 * fVar9;
          if ((MonitorData *)0x4 < collection[1].monitor) {
            IVar20.monitor = (MonitorData *)(boxSize.z + fVar17 + fVar2);
            IVar20.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)
                          (fVar1 + fVar16 + boxRotation.w);
            collection[8] = IVar20;
            collection[9].klass =
                 (IEnumerable_1_UnityEngine_Vector3___Class *)(fVar5 + fVar7 + fVar10);
            if ((MonitorData *)0x5 < collection[1].monitor) {
              *(ulonglong *)&collection[9].monitor =
                   CONCAT44(boxSize.z + (fVar2 - fVar17),fVar1 + (boxRotation.w - fVar16));
              collection[10].monitor = (MonitorData *)(fVar5 + (fVar10 - fVar7));
              if ((MonitorData *)0x6 < collection[1].monitor) {
                IVar21.monitor = (MonitorData *)((fVar2 - fVar17) - boxSize.z);
                IVar21.klass = (IEnumerable_1_UnityEngine_Vector3___Class *)
                              ((boxRotation.w - fVar16) - fVar1);
                collection[0xb] = IVar21;
                collection[0xc].klass =
                     (IEnumerable_1_UnityEngine_Vector3___Class *)((fVar10 - fVar7) - fVar5);
                if ((MonitorData *)0x7 < collection[1].monitor) {
                  *(ulonglong *)&collection[0xc].monitor =
                       CONCAT44((fVar17 + fVar2) - boxSize.z,(fVar16 + boxRotation.w) - fVar1);
                  collection[0xd].monitor = (MonitorData *)((fVar7 + fVar10) - fVar5);
                  boxRotation.z =
                       (float)TypeInfo__System__Collections__Generic__List<UnityEngine::Vector3>;
                  boxRotation.y = (float)&UNK_?;
                  pLVar22 = (List_1_UnityEngine_Vector3_ *)func_?();
                  boxRotation.y =
                       (float)
                       MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                  ;
                  boxSize.y = (float)&UNK_?;
                  boxSize.z = (float)pLVar22;
                  boxRotation.x = (float)collection;
                  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector3]::
                  List_1_UnityEngine_Vector3___ctor_1
                            (pLVar22,collection,
                             MethodInfo__System__Collections__Generic__List<UnityEngine::Vector3>__List_System__Collections__Generic__IEnumerable<UnityEngine::Vector3>_
                            );
                  return pLVar22;
                }
              }
            }
          }
        }
      }
    }
  }
  boxRotation.z = (float)&UNK_?;
  func_?();
  pcVar23 = (code *)swi(3);
  pLVar22 = (List_1_UnityEngine_Vector3_ *)(*pcVar23)();
  return pLVar22;
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
    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_Normalize
                        ((Vector3 *)&stack0xffffffbc,VVar20,(MethodInfo *)0x0);
    uVar21 = pVVar4->x;
    uVar22 = pVVar4->y;
    fVar1 = pVVar4->z;
    (__return_storage_ptr__->m_Normal).x = (float)uVar21;
    (__return_storage_ptr__->m_Normal).y = (float)uVar22;
    (__return_storage_ptr__->m_Normal).z = fVar1;
    __return_storage_ptr__->m_Distance =
         (float)((uint)((float)uVar22 * (boxCenter.y + (float)pVVar2 * fVar10) + (float)uVar21 * 0.0
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
  __return_storage_ptr__->z = 0.0;
  fVar1 = point.z - boxCenter.z;
  iVar2 = func_?(TypeInfo__UnityEngine__Vector3,3);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  rotation.y = boxRotation.y;
  rotation.x = boxRotation.x;
  rotation.z = boxRotation.z;
  rotation.w = boxRotation.w;
  pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                     ((Vector3 *)&stack0xffffffac,rotation,
                      TypeInfo__UnityEngine__Vector3->static_fields->rightVector,(MethodInfo *)0x0);
  if (iVar2 == 0) {
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
    fVar4 = pVVar3->z;
    if (*(int *)(iVar2 + 0xc) != 0) {
      *(undefined8 *)(iVar2 + 0x10) = *(undefined8 *)pVVar3;
      *(float *)(iVar2 + 0x18) = fVar4;
      if (cRam_? == '\0') {
        func_?();
        cRam_? = '\x01';
      }
      rotation_01.y = boxRotation.y;
      rotation_01.x = boxRotation.x;
      rotation_01.z = boxRotation.z;
      rotation_01.w = boxRotation.w;
      pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffac,rotation_01,
                          TypeInfo__UnityEngine__Vector3->static_fields->upVector,(MethodInfo *)0x0)
      ;
      fVar4 = pVVar3->z;
      if (1 < *(uint *)(iVar2 + 0xc)) {
        *(undefined8 *)(iVar2 + 0x1c) = *(undefined8 *)pVVar3;
        *(float *)(iVar2 + 0x24) = fVar4;
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        rotation_00.y = boxRotation.y;
        rotation_00.x = boxRotation.x;
        rotation_00.z = boxRotation.z;
        rotation_00.w = boxRotation.w;
        pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                           ((Vector3 *)&boxRotation.y,rotation_00,
                            TypeInfo__UnityEngine__Vector3->static_fields->forwardVector,
                            (MethodInfo *)0x0);
        fVar4 = pVVar3->z;
        if (2 < *(uint *)(iVar2 + 0xc)) {
          *(undefined8 *)(iVar2 + 0x28) = *(undefined8 *)pVVar3;
          fVar5 = _UNK_?;
          fVar6 = boxSize.z * _UNK_?;
          *(float *)(iVar2 + 0x30) = fVar4;
          __return_storage_ptr__->x = (float)(int)boxCenter._0_8_;
          __return_storage_ptr__->y = (float)(int)((ulonglong)boxCenter._0_8_ >> 0x20);
          __return_storage_ptr__->z = boxCenter.z;
          fVar4 = 0.0;
          boxRotation.w = fVar6;
          while ((uint)fVar4 < (uint)*(float *)(iVar2 + 0xc)) {
            uVar7 = *(undefined8 *)(iVar2 + 0x10 + (int)fVar4 * 0xc);
            fStack_8 = (float)((ulonglong)uVar7 >> 0x20);
            fStack_9 = (float)uVar7;
            boxCenter.z = fStack_9 * (point.x - boxCenter.x) + fStack_8 * (point.y - boxCenter.y)
                          + *(float *)(iVar2 + 0x18 + (int)fVar4 * 0xc) * fVar1;
            fVar10 = boxSize.x * fVar5;
            if (((fVar4 != 0.0) && (fVar10 = boxSize.y * fVar5, fVar4 != 1.4013e-45)) &&
               (fVar10 = fVar6, fVar4 != 2.8026e-45)) goto code_?;
            pVVar3 = (Vector3 *)&stack0xffffffd0;
            fVar11 = fVar4;
            if (fVar10 < boxCenter.z) {
              puVar12 = &UNK_?;
              boxCenter.z = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                      (pVVar3,(int32_t)fVar4,(MethodInfo *)0x0);
            }
            else {
              puVar12 = &UNK_?;
              boxRotation.w =
                   UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                             (pVVar3,(int32_t)fVar4,(MethodInfo *)0x0);
              if (boxCenter.z <
                  (float)((uint)boxRotation.w ^
                         __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field))
              {
                fVar10 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                                  ((Vector3 *)&stack0xffffffd0,(int32_t)fVar4,(MethodInfo *)0x0);
                boxCenter.z = (float)((uint)fVar10 ^
                                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field
                                     );
              }
            }
            fVar10 = __return_storage_ptr__->x;
            puVar13 = &stack0xffffffb8;
            puVar14 = &UNK_?;
            func_?();
            fVar4 = (float)((int)fVar4 + 1);
            __return_storage_ptr__->x = fVar10 + (float)puVar12 * boxCenter.z;
            __return_storage_ptr__->y = (float)puVar14 + (float)pVVar3 * boxCenter.z;
            __return_storage_ptr__->z = (float)puVar13 + fVar11 * boxCenter.z;
            if (2 < (int)fVar4) {
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar15 = (code *)swi(3);
  pVVar3 = (Vector3 *)(*pcVar15)();
  return pVVar3;
}


/* Boolean ContainsPoint(Vector3, Vector3, Vector3, Quaternion, BoxEpsilon) */

bool Assembly-CSharp.dll::RTG::BoxMath::BoxMath_ContainsPoint
               (Vector3 point,Vector3 boxCenter,Vector3 boxSize,Quaternion boxRotation,
               BoxEpsilon epsilon,MethodInfo *method)

{
  boxSize.z = boxSize.z + epsilon._sizeEps.z;
  s.y = epsilon._sizeEps.y + boxSize.y;
  s.x = boxSize.x + epsilon._sizeEps.x;
  s.z = boxSize.z;
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                     ((Matrix4x4 *)&stack0xffffff3c,boxCenter,boxRotation,s,(MethodInfo *)0x0);
  MStack_2.m00 = pMVar1->m00;
  MStack_2.m10 = pMVar1->m10;
  MStack_2.m20 = pMVar1->m20;
  MStack_2.m30 = pMVar1->m30;
  MStack_2.m01 = pMVar1->m01;
  MStack_2.m11 = pMVar1->m11;
  MStack_2.m21 = pMVar1->m21;
  MStack_2.m31 = pMVar1->m31;
  MStack_2.m02 = pMVar1->m02;
  MStack_2.m12 = pMVar1->m12;
  MStack_2.m22 = pMVar1->m22;
  MStack_2.m32 = pMVar1->m32;
  MStack_2.m03 = pMVar1->m03;
  MStack_2.m13 = pMVar1->m13;
  MStack_2.m23 = pMVar1->m23;
  MStack_2.m33 = pMVar1->m33;
  pMVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_get_inverse
                     ((Matrix4x4 *)&stack0xffffff3c,&MStack_2,(MethodInfo *)0x0);
  MStack_3.m00 = pMVar1->m00;
  MStack_3.m10 = pMVar1->m10;
  MStack_3.m20 = pMVar1->m20;
  MStack_3.m30 = pMVar1->m30;
  MStack_3.m01 = pMVar1->m01;
  MStack_3.m11 = pMVar1->m11;
  MStack_3.m21 = pMVar1->m21;
  MStack_3.m31 = pMVar1->m31;
  MStack_3.m02 = pMVar1->m02;
  MStack_3.m12 = pMVar1->m12;
  MStack_3.m22 = pMVar1->m22;
  MStack_3.m32 = pMVar1->m32;
  MStack_3.m03 = pMVar1->m03;
  MStack_3.m13 = pMVar1->m13;
  MStack_3.m23 = pMVar1->m23;
  MStack_3.m33 = pMVar1->m33;
  pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&boxSize,&MStack_3,point,(MethodInfo *)0x0);
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
    return 1;
  }
  if ((face != BoxFace__Enum_Left) && (face != BoxFace__Enum_Right)) {
    if ((face != BoxFace__Enum_Back) && (face != BoxFace__Enum_Front)) {
      return -1;
    }
    return 2;
  }
  return 0;
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
  boxFace.First = 0;
  boxFace.Last = 0;
  RStack_6.First = 0;
  RStack_6.Last = 0;
  __return_storage_ptr__->Face = 0;
  (__return_storage_ptr__->Plane).m_Normal.x = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.y = 0.0;
  (__return_storage_ptr__->Plane).m_Normal.z = 0.0;
  (__return_storage_ptr__->Plane).m_Distance = 0.0;
  (__return_storage_ptr__->Center).x = 0.0;
  (__return_storage_ptr__->Center).y = 0.0;
  (__return_storage_ptr__->Center).z = 0.0;
  fStack_7 = _UNK_?;
  pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0;
  fVar9 = 0.0;
  fVar10 = 0.0;
  puVar11 = (undefined *)0x0;
  if ((TypeInfo__RTG__BoxMath->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__RTG__BoxMath);
  }
  pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           BoxMath_get_AllBoxFaces((MethodInfo *)0x0);
  if (pLVar12 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    pLVar13 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
             RegexCharClass+SingleRange]::
             List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                       ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                         *)&stack0xffffff64,pLVar12,
                        MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__GetEnumerator__
                       );
    uStack_14 = 0;
    LStack_15._list = pLVar13->_list;
    LStack_15._index = pLVar13->_index;
    LStack_15._version = pLVar13->_version;
    LStack_15._current = pLVar13->_current;
    fStack_16 = boxSize.z;
    VStack_17.x = boxSize.x;
    VStack_17.y = boxSize.y;
    uStack_1 = 1;
    fStack_18 = boxCenter.z;
    auStack_19._4_4_ = boxCenter.x;
    auStack_19._8_4_ = boxCenter.y;
    pLStack_20 = &LStack_15;
    while( true ) {
      bVar21 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        (&LStack_15,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                        );
      if (bVar21 == 0) break;
      RStack_22 = LStack_15._current;
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
      puVar11 = (undefined *)0x0;
      pLVar12 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pPVar23->m_Normal).x;
      fVar24 = (pPVar23->m_Normal).y;
      fVar25 = (pPVar23->m_Normal).z;
      pLVar8 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)point.x;
      fVar9 = point.y;
      fVar10 = point.z;
      VStack_17.z = PlaneEx::PlaneEx_GetAbsDistanceToPoint(*pPVar23,point,(MethodInfo *)0x0);
      if (VStack_17.z < fStack_7) {
        puVar11 = &UNK_?;
        RStack_6 = RStack_22;
        boxFace = RStack_22;
        pLVar8 = pLVar12;
        fVar9 = fVar24;
        fVar10 = fVar25;
        fStack_7 = VStack_17.z;
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_15,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
               ,in_stack_26);
    uStack_1 = 0xffffffff;
    (__return_storage_ptr__->Center).x = 0.0;
    (__return_storage_ptr__->Center).y = 0.0;
    (__return_storage_ptr__->Center).z = 0.0;
    pBVar27 = TypeInfo__RTG__BoxMath;
    __return_storage_ptr__->Face = (int32_t)boxFace;
    (__return_storage_ptr__->Plane).m_Normal.x = (float)pLVar8;
    (__return_storage_ptr__->Plane).m_Normal.y = fVar9;
    (__return_storage_ptr__->Plane).m_Normal.z = fVar10;
    (__return_storage_ptr__->Plane).m_Distance = (float)puVar11;
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
    fVar10 = pVVar28->y;
    fVar9 = pVVar28->z;
    (__return_storage_ptr__->Center).x = pVVar28->x;
    (__return_storage_ptr__->Center).y = fVar10;
    (__return_storage_ptr__->Center).z = fVar9;
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
  if ((pBVar6->_1).cctor_finished_or_no_cctor == 0) {
    func_?(pBVar6);
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
    LStack_16._list = pLVar14->_list;
    LStack_16._index = pLVar14->_index;
    LStack_16._version = pLVar14->_version;
    LStack_16._current = pLVar14->_current;
    fStack_17 = boxSize.z;
    VStack_18.x = boxSize.x;
    VStack_18.y = boxSize.y;
    uStack_1 = 1;
    fStack_19 = boxCenter.z;
    auStack_20._4_4_ = boxCenter.x;
    auStack_20._8_4_ = boxCenter.y;
    pLStack_21 = &LStack_16;
    while( true ) {
      bVar22 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Text::
              RegularExpressions::RegexCharClass+SingleRange]::
              List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange__MoveNext
                        (&LStack_16,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__MoveNext__
                        );
      if (bVar22 == 0) break;
      RStack_23 = LStack_16._current;
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
      pLVar13 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               (pPVar24->m_Normal).x;
      fVar25 = (pPVar24->m_Normal).y;
      fVar26 = (pPVar24->m_Normal).z;
      if (viewVector.y * fVar25 + viewVector.x * (float)pLVar13 + viewVector.z * fVar26 < 0.0) {
        puVar12 = (undefined *)0x0;
        pLVar9 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)point.x;
        fVar10 = point.y;
        fVar11 = point.z;
        VStack_18.z = PlaneEx::PlaneEx_GetAbsDistanceToPoint(*pPVar24,point,(MethodInfo *)0x0);
        if (VStack_18.z < fStack_8) {
          puVar12 = &UNK_?;
          RStack_7 = RStack_23;
          pLVar9 = pLVar13;
          fVar10 = fVar25;
          fVar11 = fVar26;
          fStack_8 = VStack_18.z;
        }
      }
    }
    uStack_1 = 0xffffffff;
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
              ((Object *)&LStack_16,
               (ExceptionArgument__Enum)
               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<RTG::BoxFace>__Dispose__
               ,in_stack_27);
    boxFace = RStack_7;
    uStack_1 = 0xffffffff;
    (__return_storage_ptr__->Center).x = 0.0;
    (__return_storage_ptr__->Center).y = 0.0;
    (__return_storage_ptr__->Center).z = 0.0;
    pBVar6 = TypeInfo__RTG__BoxMath;
    __return_storage_ptr__->Face = (int32_t)RStack_7;
    (__return_storage_ptr__->Plane).m_Normal.x = (float)pLVar9;
    (__return_storage_ptr__->Plane).m_Normal.y = fVar10;
    (__return_storage_ptr__->Plane).m_Normal.z = fVar11;
    (__return_storage_ptr__->Plane).m_Distance = (float)puVar12;
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
  fVar1 = epsilon._sizeEps.x + boxSize.x;
  RStack_2.m_Direction.y = epsilon._sizeEps.y + boxSize.y;
  epsilon._sizeEps.z = epsilon._sizeEps.z + boxSize.z;
  *t = 0.0;
  bVar3 = (fVar1 < _UNK_?) + 1;
  if (_UNK_? <= RStack_2.m_Direction.y) {
    bVar3 = fVar1 < _UNK_?;
  }
  bVar4 = bVar3 + 1;
  if (_UNK_? <= epsilon._sizeEps.z) {
    bVar4 = bVar3;
  }
  if (bVar4 < 2) {
    RStack_2.m_Direction.x = fVar1;
    RStack_2.m_Direction.z = epsilon._sizeEps.z;
    fStack_5 = RStack_2.m_Direction.y;
    if (bVar4 == 1) {
      if (_UNK_? <= fVar1) {
        if (RStack_2.m_Direction.y < _UNK_?) {
          pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                              (&boxSize,(MethodInfo *)0x0);
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              (&RStack_2.m_Direction,boxRotation,*pVVar6,(MethodInfo *)0x0);
          uVar7 = pVVar6->x;
          uVar8 = pVVar6->y;
          fVar9 = pVVar6->z;
          boxSize.y = (float)uVar7;
          boxSize.z = (float)uVar8;
          pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook
                              (&RStack_2.m_Direction,(MethodInfo *)0x0);
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              (&RStack_2.m_Direction,boxRotation,*pVVar6,(MethodInfo *)0x0);
          uVar10._0_4_ = pVVar6->x;
          uVar10._4_4_ = pVVar6->y;
          fVar11 = pVVar6->z;
          quadHeight = epsilon._sizeEps.z;
          fVar12 = boxSize.y;
          fVar13 = boxSize.z;
        }
        else {
          pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelRight
                              (&epsilon._sizeEps,(MethodInfo *)0x0);
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              (&boxSize,boxRotation,*pVVar6,(MethodInfo *)0x0);
          uVar14 = pVVar6->x;
          uVar15 = pVVar6->y;
          fVar9 = pVVar6->z;
          epsilon._sizeEps.y = (float)uVar14;
          epsilon._sizeEps.z = (float)uVar15;
          pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp(&boxSize,(MethodInfo *)0x0);
          pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                              (&boxSize,boxRotation,*pVVar6,(MethodInfo *)0x0);
          uVar10._0_4_ = pVVar6->x;
          uVar10._4_4_ = pVVar6->y;
          fVar11 = pVVar6->z;
          quadHeight = fStack_5;
          fVar12 = epsilon._sizeEps.y;
          fVar13 = epsilon._sizeEps.z;
        }
        quadRight.y = fVar13;
        quadRight.x = fVar12;
        quadRight.z = fVar9;
        quadUp.z = fVar11;
        quadUp.x = (float)uVar10;
        quadUp.y = SUB84(uVar10,4);
        bVar16 = QuadMath::QuadMath_Raycast
                           (ray,t,boxCenter,fVar1,quadHeight,quadRight,quadUp,
                            (QuadEpsilon)ZEXT816(0),(MethodInfo *)0x0);
        return bVar16;
      }
      pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelLook(&boxSize,(MethodInfo *)0x0);
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (&RStack_2.m_Direction,boxRotation,*pVVar6,(MethodInfo *)0x0);
      uVar17 = pVVar6->x;
      uVar18 = pVVar6->y;
      fVar1 = pVVar6->z;
      boxSize.y = (float)uVar17;
      boxSize.z = (float)uVar18;
      pVVar6 = TriangPrismShape3D::TriangPrismShape3D_get_ModelUp
                          (&RStack_2.m_Direction,(MethodInfo *)0x0);
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (&RStack_2.m_Direction,boxRotation,*pVVar6,(MethodInfo *)0x0);
      quadRight_00.y = boxSize.z;
      quadRight_00.x = boxSize.y;
      quadRight_00.z = fVar1;
      bVar16 = QuadMath::QuadMath_Raycast
                         (ray,t,boxCenter,epsilon._sizeEps.z,fStack_5,quadRight_00,*pVVar6,
                          (QuadEpsilon)ZEXT816(0),(MethodInfo *)0x0);
      return bVar16;
    }
    s.y = RStack_2.m_Direction.y;
    s.x = fVar1;
    s.z = epsilon._sizeEps.z;
    pMVar19 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_TRS
                        ((Matrix4x4 *)&stack0xffffff48,boxCenter,boxRotation,s,(MethodInfo *)0x0);
    pRVar20 = RayEx::RayEx_InverseTransform(&RStack_2,ray,*pMVar19,(MethodInfo *)0x0);
    fVar1 = (pRVar20->m_Direction).x;
    uVar21 = (pRVar20->m_Direction).y;
    uVar22 = (pRVar20->m_Direction).z;
    if ((float)uVar21 * (float)uVar21 + fVar1 * fVar1 + (float)uVar22 * (float)uVar22 != 0.0) {
      pVVar6 = MVWorldObject.dll::MV::WorldObject::MVWorldObject::MVWorldObject_get_WorldPosition
                          (&epsilon._sizeEps,(MVWorldObject *)0x0,
                           (MethodInfo *)(pRVar20->m_Origin).z);
      RStack_2.m_Origin.x = pVVar6->x;
      RStack_2.m_Origin.y = pVVar6->y;
      RStack_2.m_Origin.z = pVVar6->z;
      puVar23 = (undefined8 *)func_?();
      epsilon._sizeEps.x = (float)*puVar23;
      epsilon._sizeEps.y = (float)((ulonglong)*puVar23 >> 0x20);
      epsilon._sizeEps.z = *(float *)(puVar23 + 1) * _UNK_?;
      RStack_2.m_Direction.x = epsilon._sizeEps.x * _UNK_?;
      RStack_2.m_Direction.y = epsilon._sizeEps.y * _UNK_?;
      ray_00.m_Origin.y = RStack_2.m_Direction.y;
      ray_00.m_Origin.x = RStack_2.m_Direction.x;
      ray_00.m_Origin.z = epsilon._sizeEps.z;
      ray_00.m_Direction.x = (float)t;
      ray_00.m_Direction.y = 0.0;
      ray_00.m_Direction.z = (float)uVar22;
      bounds.m_Center.z = RStack_2.m_Origin.z;
      bounds.m_Center.x = RStack_2.m_Origin.x;
      bounds.m_Center.y = RStack_2.m_Origin.y;
      bounds.m_Extents.x = RStack_2.m_Direction.x;
      bounds.m_Extents.y = RStack_2.m_Direction.y;
      bounds.m_Extents.z = epsilon._sizeEps.z;
      RStack_2.m_Direction.z = epsilon._sizeEps.z;
      bVar16 = UnityEngine.CoreModule.dll::UnityEngine::Bounds::Bounds_IntersectRayAABB
                         (ray_00,bounds,t,(MethodInfo *)0x0);
      if (bVar16 != 0) {
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Ray::Ray_GetPoint
                            (&epsilon._sizeEps,(Ray *)&stack0xffffffc8,*t,(MethodInfo *)0x0);
        pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                            (&boxSize,(Matrix4x4 *)&stack0xffffff88,*pVVar6,(MethodInfo *)0x0);
        uVar24 = pVVar6->x;
        uVar25 = pVVar6->y;
        boxSize.z = pVVar6->z - (float)&boxSize;
        epsilon._sizeEps.x = (float)uVar24 - (float)&epsilon._sizeEps;
        epsilon._sizeEps.y = (float)uVar25 - 4.3595254e-29;
        epsilon._sizeEps.z = boxSize.z;
        fVar26 = (float10)func_?();
        *t = (float)fVar26;
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
  fVar4 = pVVar1->y;
  fVar5 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     (&VStack_2,&transformMatrix,1,(MethodInfo *)0x0);
  fVar6 = pVVar1->x;
  fVar7 = pVVar1->z;
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_GetColumn
                     (&VStack_2,&transformMatrix,2,(MethodInfo *)0x0);
  fVar8 = pVVar1->y;
  VStack_2.y = pVVar1->z;
  fVar9 = boxSize.x * _UNK_?;
  fVar10 = boxSize.y * _UNK_?;
  fVar11 = boxSize.z * _UNK_?;
  fStack_12 = fVar3 * fVar9;
  fStack_13 = pVVar1->x * fVar11;
  VStack_2.x = VStack_2.y * fVar11;
  fVar14 = boxCenter.x;
  VStack_2.z = VStack_2.y;
  VStack_2.w = VStack_2.y;
  pVVar15 = UnityEngine.CoreModule.dll::UnityEngine::Matrix4x4::Matrix4x4_MultiplyPoint
                     (&VStack_16,&transformMatrix,boxCenter,(MethodInfo *)0x0);
  fVar17 = pVVar15->y;
  fVar3 = pVVar15->z;
  newBoxCenter->x = pVVar15->x;
  uVar18 = _UNK_?;
  newBoxCenter->y = fVar17;
  fStack_12 = (float)((uint)fStack_12 & _UNK_?);
  newBoxCenter->z = fVar3;
  fVar6 = (float)((uint)(fVar6 * fVar10) & uVar18) + fStack_12 + (float)((uint)fStack_13 & uVar18);
  fVar3 = (float)((uint)fVar14 & uVar18) + (float)((uint)(fVar4 * fVar9) & uVar18) +
           (float)((uint)(fVar8 * fVar11) & uVar18);
  fVar8 = (float)((uint)(fVar7 * fVar10) & uVar18) + (float)((uint)(fVar5 * fVar9) & uVar18) +
           (float)((uint)VStack_2.x & uVar18);
  newBoxSize->x = fVar6 + fVar6;
  newBoxSize->y = fVar3 + fVar3;
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
  pSVar2 = (Single__Array_1 *)func_?(TypeInfo__System__Single);
  TypeInfo__RTG__BoxMath->static_fields->absR = pSVar2;
  func_?(&TypeInfo__RTG__BoxMath->static_fields->absR,pSVar2);
  pMVar3 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
  pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
           TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
  if (pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    piVar5 = &(pLVar4->fields)._version;
    *piVar5 = *piVar5 + 1;
    pRVar6 = (pLVar4->fields)._items;
    if (pRVar6 != (RegexCharClass_SingleRange__Array *)0x0) {
      uVar7 = (pLVar4->fields)._size;
      if (uVar7 < pRVar6->max_length) {
        (pLVar4->fields)._size = uVar7 + 1;
        if (pRVar6->max_length <= uVar7) goto code_?;
        pRVar6->vector[uVar7].First = 0;
        pRVar6->vector[uVar7].Last = 0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                  (pLVar4,(RegexCharClass_SingleRange)0x0,pMVar3->klass->rgctx_data[0xe].method);
      }
      pMVar3 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
               TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
      if (pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        piVar5 = &(pLVar4->fields)._version;
        *piVar5 = *piVar5 + 1;
        pRVar6 = (pLVar4->fields)._items;
        if (pRVar6 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar7 = (pLVar4->fields)._size;
          if (uVar7 < pRVar6->max_length) {
            (pLVar4->fields)._size = uVar7 + 1;
            if (pRVar6->max_length <= uVar7) goto code_?;
            pRVar6->vector[uVar7].First = 1;
            pRVar6->vector[uVar7].Last = 0;
          }
          else {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (pLVar4,(RegexCharClass_SingleRange)0x1,pMVar3->klass->rgctx_data[0xe].method)
            ;
          }
          pMVar3 = MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
          pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                   TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
          if (pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
            piVar5 = &(pLVar4->fields)._version;
            *piVar5 = *piVar5 + 1;
            pRVar6 = (pLVar4->fields)._items;
            if (pRVar6 != (RegexCharClass_SingleRange__Array *)0x0) {
              uVar7 = (pLVar4->fields)._size;
              if (uVar7 < pRVar6->max_length) {
                (pLVar4->fields)._size = uVar7 + 1;
                if (pRVar6->max_length <= uVar7) goto code_?;
                pRVar6->vector[uVar7].First = 2;
                pRVar6->vector[uVar7].Last = 0;
              }
              else {
                mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                          (pLVar4,(RegexCharClass_SingleRange)0x2,
                           pMVar3->klass->rgctx_data[0xe].method);
              }
              pMVar3 = 
              MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
              pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                       TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
              if (pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0
                 ) {
                piVar5 = &(pLVar4->fields)._version;
                *piVar5 = *piVar5 + 1;
                pRVar6 = (pLVar4->fields)._items;
                if (pRVar6 != (RegexCharClass_SingleRange__Array *)0x0) {
                  uVar7 = (pLVar4->fields)._size;
                  if (uVar7 < pRVar6->max_length) {
                    (pLVar4->fields)._size = uVar7 + 1;
                    if (pRVar6->max_length <= uVar7) goto code_?;
                    pRVar6->vector[uVar7].First = 3;
                    pRVar6->vector[uVar7].Last = 0;
                  }
                  else {
                    mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                              (pLVar4,(RegexCharClass_SingleRange)0x3,
                               pMVar3->klass->rgctx_data[0xe].method);
                  }
                  pMVar3 = 
                  MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_;
                  pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
                  if (pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *
                                )0x0) {
                    piVar5 = &(pLVar4->fields)._version;
                    *piVar5 = *piVar5 + 1;
                    pRVar6 = (pLVar4->fields)._items;
                    if (pRVar6 != (RegexCharClass_SingleRange__Array *)0x0) {
                      uVar7 = (pLVar4->fields)._size;
                      if (uVar7 < pRVar6->max_length) {
                        (pLVar4->fields)._size = uVar7 + 1;
                        if (pRVar6->max_length <= uVar7) goto code_?;
                        pRVar6->vector[uVar7].First = 4;
                        pRVar6->vector[uVar7].Last = 0;
                      }
                      else {
                        mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                        RegularExpressions::RegexCharClass+SingleRange]::
                        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                  (pLVar4,(RegexCharClass_SingleRange)0x4,
                                   pMVar3->klass->rgctx_data[0xe].method);
                      }
                      pMVar3 = 
                      MethodInfo__System__Collections__Generic__List<RTG::BoxFace>__Add_RTG__BoxFace_
                      ;
                      pLVar4 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               TypeInfo__RTG__BoxMath->static_fields->_allBoxFaces;
                      if (pLVar4 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                                     *)0x0) {
                        piVar5 = &(pLVar4->fields)._version;
                        *piVar5 = *piVar5 + 1;
                        pRVar6 = (pLVar4->fields)._items;
                        if (pRVar6 != (RegexCharClass_SingleRange__Array *)0x0) {
                          uVar7 = (pLVar4->fields)._size;
                          if (pRVar6->max_length <= uVar7) {
                            mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                            RegularExpressions::RegexCharClass+SingleRange]::
                            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                                      (pLVar4,(RegexCharClass_SingleRange)0x5,
                                       pMVar3->klass->rgctx_data[0xe].method);
                            return;
                          }
                          (pLVar4->fields)._size = uVar7 + 1;
                          if (uVar7 < pRVar6->max_length) {
                            pRVar6->vector[uVar7].First = 5;
                            pRVar6->vector[uVar7].Last = 0;
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
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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

