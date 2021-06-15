
/* Void CopyMaterial() */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator_CopyMaterial
               (SphereVolumeIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).lineDotMaterial;
  this_00 = (Material *)func_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
            (this_00,source,(MethodInfo *)0x0);
  pLVar1 = (this->fields).rangeIndicatorXY;
  (this->fields).materialCopy = this_00;
  if (pLVar1 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pLVar1,this_00,(MethodInfo *)0x0);
    pLVar1 = (this->fields).rangeIndicatorYZ;
    if (pLVar1 != (LineRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pLVar1,(this->fields).materialCopy,(MethodInfo *)0x0);
      pLVar1 = (this->fields).rangeIndicatorZX;
      if (pLVar1 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)pLVar1,(this->fields).materialCopy,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetLineWidths(Single) */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator_SetLineWidths
               (SphereVolumeIndicator *this,float w,MethodInfo *method)

{
  pLVar1 = (this->fields).rangeIndicatorXY;
  if (pLVar1 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
              (pLVar1,w,(MethodInfo *)0x0);
    pLVar1 = (this->fields).rangeIndicatorXY;
    if (pLVar1 != (LineRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                (pLVar1,w,(MethodInfo *)0x0);
      pLVar1 = (this->fields).rangeIndicatorYZ;
      if (pLVar1 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                  (pLVar1,w,(MethodInfo *)0x0);
        pLVar1 = (this->fields).rangeIndicatorYZ;
        if (pLVar1 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                    (pLVar1,w,(MethodInfo *)0x0);
          pLVar1 = (this->fields).rangeIndicatorZX;
          if (pLVar1 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                      (pLVar1,w,(MethodInfo *)0x0);
            pLVar1 = (this->fields).rangeIndicatorZX;
            if (pLVar1 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                        (pLVar1,w,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRadius(Single) */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator_SetRadius
               (SphereVolumeIndicator *this,float radius,MethodInfo *method)

{
  pSVar1 = this;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  fStack_2 = 0.0;
  uStack_3 = 0;
  func_?();
  iVar4 = (this->fields).circleSergmentCount;
  func_?();
  if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
    func_?();
  }
  pQVar5 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffb4,_UNK_? / (float)iVar4,
                      (Vector3)ZEXT812(0),(MethodInfo *)0x0);
  iVar4 = (this->fields).circleSergmentCount + 1;
  fVar6 = pQVar5->x;
  puVar7 = (undefined *)pQVar5->y;
  pQVar8 = (Quaternion__Class *)pQVar5->z;
  fVar9 = pQVar5->w;
  positions = (Vector3__Array *)func_?();
  this = (SphereVolumeIndicator *)0x0;
  if (0 < iVar4) {
    do {
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        puVar7 = &UNK_?;
        pQVar8 = TypeInfo__UnityEngine__Quaternion;
        func_?();
      }
      rotation.y = (float)puVar7;
      rotation.x = fVar6;
      rotation.z = (float)pQVar8;
      rotation.w = fVar9;
      point.z = fStack_2;
      point.x = (float)(undefined4)uStack_3;
      point.y = (float)uStack_3._4_4_;
      pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&stack0xffffffc4,rotation,point,(MethodInfo *)0x0);
      uStack_3._0_4_ = pVVar10->x;
      uStack_3._4_4_ = pVVar10->y;
      fStack_2 = pVVar10->z;
      if (positions == (Vector3__Array *)0x0) goto code_?;
      uVar11 = *(undefined8 *)pVVar10;
      fVar12 = pVVar10->z;
      puVar7 = &UNK_?;
      pQVar8 = (Quaternion__Class *)this;
      puVar13 = (undefined8 *)func_?();
      this = (SphereVolumeIndicator *)((int)&this->klass + 1);
      *puVar13 = uVar11;
      *(float *)(puVar13 + 1) = fVar12;
    } while ((int)this < iVar4);
  }
  pLVar14 = (pSVar1->fields).rangeIndicatorXY;
  if (pLVar14 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
              (pLVar14,iVar4,(MethodInfo *)0x0);
    pLVar14 = (pSVar1->fields).rangeIndicatorXY;
    if (pLVar14 != (LineRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                (pLVar14,positions,(MethodInfo *)0x0);
      func_?();
      iVar15 = (pSVar1->fields).circleSergmentCount;
      func_?();
      if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                ((Quaternion *)&stack0xffffffb4,_UNK_? / (float)iVar15,(Vector3)ZEXT812(0),
                 (MethodInfo *)0x0);
      uVar16 = 0;
      if (0 < iVar4) {
        pVVar10 = positions->vector;
        do {
          if (positions == (Vector3__Array *)0x0) goto code_?;
          if ((positions->max_length <= uVar16) ||
             (pVVar10->z = pVVar10->x, positions->max_length <= uVar16)) goto code_?;
          pVVar10->x = 0.0;
          uVar16 = uVar16 + 1;
          pVVar10 = pVVar10 + 1;
        } while ((int)uVar16 < iVar4);
      }
      pLVar14 = (pSVar1->fields).rangeIndicatorYZ;
      if (pLVar14 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                  (pLVar14,iVar4,(MethodInfo *)0x0);
        pLVar14 = (pSVar1->fields).rangeIndicatorYZ;
        if (pLVar14 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                    (pLVar14,positions,(MethodInfo *)0x0);
          func_?();
          iVar15 = (pSVar1->fields).circleSergmentCount;
          func_?();
          if ((((uint)(TypeInfo__UnityEngine__Quaternion->vtable).Equals.methodPtr & 0x2000000) != 0
              ) && ((TypeInfo__UnityEngine__Quaternion->_1).cctor_started == 0)) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                    ((Quaternion *)&stack0xffffffb4,_UNK_? / (float)iVar15,(Vector3)ZEXT812(0)
                     ,(MethodInfo *)0x0);
          uVar16 = 0;
          if (0 < iVar4) {
            pfVar17 = &positions->vector[0].y;
            do {
              if (positions == (Vector3__Array *)0x0) goto code_?;
              if ((positions->max_length <= uVar16) ||
                 (((Vector3 *)(pfVar17 + -1))->x = *pfVar17, positions->max_length <= uVar16))
              goto code_?;
              *pfVar17 = 0.0;
              uVar16 = uVar16 + 1;
              pfVar17 = pfVar17 + 3;
            } while ((int)uVar16 < iVar4);
          }
          pLVar14 = (pSVar1->fields).rangeIndicatorZX;
          if (pLVar14 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                      (pLVar14,iVar4,(MethodInfo *)0x0);
            pLVar14 = (pSVar1->fields).rangeIndicatorZX;
            if (pLVar14 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                        (pLVar14,positions,(MethodInfo *)0x0);
              this_00 = (pSVar1->fields).materialCopy;
              func_?();
              if (this_00 != (Material *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                          (this_00,StringLiteral__MainTex,(Vector2)0x0,(MethodInfo *)0x0);
                pLVar14 = (pSVar1->fields).rangeIndicatorXY;
                if (pLVar14 != (LineRenderer *)0x0) {
                  fVar6 = (pSVar1->fields).lineWidth;
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                            (pLVar14,fVar6,(MethodInfo *)0x0);
                  pLVar14 = (pSVar1->fields).rangeIndicatorXY;
                  if (pLVar14 != (LineRenderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                              (pLVar14,fVar6,(MethodInfo *)0x0);
                    pLVar14 = (pSVar1->fields).rangeIndicatorYZ;
                    if (pLVar14 != (LineRenderer *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                      LineRenderer_set_startWidth(pLVar14,fVar6,(MethodInfo *)0x0);
                      pLVar14 = (pSVar1->fields).rangeIndicatorYZ;
                      if (pLVar14 != (LineRenderer *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                        LineRenderer_set_endWidth(pLVar14,fVar6,(MethodInfo *)0x0);
                        pLVar14 = (pSVar1->fields).rangeIndicatorZX;
                        if (pLVar14 != (LineRenderer *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                          LineRenderer_set_startWidth(pLVar14,fVar6,(MethodInfo *)0x0);
                          pLVar14 = (pSVar1->fields).rangeIndicatorZX;
                          if (pLVar14 != (LineRenderer *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                            LineRenderer_set_endWidth(pLVar14,fVar6,(MethodInfo *)0x0);
                            return;
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
code_?:
  func_?();
  func_?();
  pcVar18 = (code *)swi(3);
  (*pcVar18)();
  return;
}


/* SphereVolumeIndicator() */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator__ctor
               (SphereVolumeIndicator *this,MethodInfo *method)

{
  (this->fields).lineDotDensity = 22.0;
  (this->fields).circleSergmentCount = 8;
  (this->fields).lineWidth = 1.0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

