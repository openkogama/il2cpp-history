
/* Void CopyMaterial() */

void Assembly-CSharp.dll::SphereVolumeIndicator::SphereVolumeIndicator_CopyMaterial
               (SphereVolumeIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  source = (this->fields).lineDotMaterial;
  this_00 = (Material *)func_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
            (this_00,source,(MethodInfo *)0x0);
  (this->fields).materialCopy = this_00;
  func_?(&(this->fields).materialCopy,this_00);
  pLVar1 = (this->fields).rangeIndicatorXY;
  if (pLVar1 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pLVar1,(this->fields).materialCopy,(MethodInfo *)0x0);
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
  if (cRam_? == '\0') {
    func_?();
    func_?();
    cRam_? = '\x01';
  }
  uVar1 = 0;
  fVar2 = 0.0;
  pQVar3 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                     ((Quaternion *)&stack0xffffffa0,
                      _UNK_? / (float)(this->fields).circleSergmentCount,
                      (Vector3)(ZEXT412(0x3f800000) << 0x40),(MethodInfo *)0x0);
  fVar4 = pQVar3->x;
  fVar5 = pQVar3->y;
  fVar6 = pQVar3->z;
  fVar7 = pQVar3->w;
  iVar8 = (this->fields).circleSergmentCount + 1;
  positions = (Vector3__Array *)func_?();
  uVar9 = 0;
  if (0 < iVar8) {
    pVVar10 = positions->vector;
    uVar11 = CONCAT44(radius,uVar1);
    do {
      fVar12 = 0.0;
      rotation.y = fVar5;
      rotation.x = fVar4;
      rotation.z = fVar6;
      rotation.w = fVar7;
      point.z = fVar2;
      point.x = (float)(int)uVar11;
      point.y = (float)(int)((ulonglong)uVar11 >> 0x20);
      fVar4 = fVar2;
      pVVar13 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                         ((Vector3 *)&puStack_14,rotation,point,(MethodInfo *)0x0);
      fVar2 = pVVar13->z;
      uVar11._0_4_ = pVVar13->x;
      uVar11._4_4_ = pVVar13->y;
      if (positions == (Vector3__Array *)0x0) goto code_?;
      if (positions->max_length <= uVar9) goto code_?;
      uVar9 = uVar9 + 1;
      pVVar10->x = (float)(undefined4)uVar11;
      pVVar10->y = (float)uVar11._4_4_;
      pVVar10->z = fVar2;
      pVVar10 = pVVar10 + 1;
      fVar5 = fVar12;
    } while ((int)uVar9 < iVar8);
  }
  pLVar15 = (this->fields).rangeIndicatorXY;
  if (pLVar15 != (LineRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
              (pLVar15,iVar8,(MethodInfo *)0x0);
    pLVar15 = (this->fields).rangeIndicatorXY;
    if (pLVar15 != (LineRenderer *)0x0) {
      uVar1 = 0;
      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                (pLVar15,positions,(MethodInfo *)0x0);
      axis.y = (float)uVar1;
      axis.x = (float)_UNK_?;
      axis.z = 0.0;
      uVar1 = _UNK_?;
      UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                ((Quaternion *)&stack0xffffffa0,
                 _UNK_? / (float)(this->fields).circleSergmentCount,axis,(MethodInfo *)0x0);
      if (0 < iVar8) {
        pVVar10 = positions->vector;
        uVar9 = 0;
        if (positions == (Vector3__Array *)0x0) goto code_?;
        do {
          if ((positions->max_length <= uVar9) ||
             (pVVar10->z = pVVar10->x, positions->max_length <= uVar9)) goto code_?;
          uVar9 = uVar9 + 1;
          pVVar10->x = 0.0;
          pVVar10 = pVVar10 + 1;
        } while ((int)uVar9 < iVar8);
      }
      pLVar15 = (this->fields).rangeIndicatorYZ;
      if (pLVar15 != (LineRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                  (pLVar15,iVar8,(MethodInfo *)0x0);
        pLVar15 = (this->fields).rangeIndicatorYZ;
        if (pLVar15 != (LineRenderer *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                    (pLVar15,positions,(MethodInfo *)0x0);
          iVar8 = 0;
          axis_00.y = (float)_UNK_?;
          axis_00.x = (float)uVar1;
          axis_00.z = 0.0;
          UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                    ((Quaternion *)&stack0xffffffa0,
                     _UNK_? / (float)(this->fields).circleSergmentCount,axis_00,
                     (MethodInfo *)0x0);
          if (0 < iVar8) {
            pfVar16 = &positions->vector[0].y;
            uVar9 = 0;
            if (positions == (Vector3__Array *)0x0) goto code_?;
            do {
              if ((positions->max_length <= uVar9) ||
                 (((Vector3 *)(pfVar16 + -1))->x = *pfVar16, positions->max_length <= uVar9))
              goto code_?;
              uVar9 = uVar9 + 1;
              *pfVar16 = 0.0;
              pfVar16 = pfVar16 + 3;
            } while ((int)uVar9 < iVar8);
          }
          pLVar15 = (this->fields).rangeIndicatorZX;
          if (pLVar15 != (LineRenderer *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_positionCount
                      (pLVar15,iVar8,(MethodInfo *)0x0);
            pLVar15 = (this->fields).rangeIndicatorZX;
            if (pLVar15 != (LineRenderer *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_SetPositions
                        (pLVar15,positions,(MethodInfo *)0x0);
              this_00 = (this->fields).materialCopy;
              if (this_00 != (Material *)0x0) {
                value.y = 1.0;
                value.x = (float)pLVar15 * (this->fields).lineDotDensity;
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetTextureScale
                          (this_00,StringLiteral__MainTex,value,(MethodInfo *)0x0);
                pLVar15 = (this->fields).rangeIndicatorXY;
                if (pLVar15 != (LineRenderer *)0x0) {
                  fVar2 = (this->fields).lineWidth;
                  UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_startWidth
                            (pLVar15,fVar2,(MethodInfo *)0x0);
                  pLVar15 = (this->fields).rangeIndicatorXY;
                  if (pLVar15 != (LineRenderer *)0x0) {
                    UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::LineRenderer_set_endWidth
                              (pLVar15,fVar2,(MethodInfo *)0x0);
                    pLVar15 = (this->fields).rangeIndicatorYZ;
                    if (pLVar15 != (LineRenderer *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                      LineRenderer_set_startWidth(pLVar15,fVar2,(MethodInfo *)0x0);
                      pLVar15 = (this->fields).rangeIndicatorYZ;
                      if (pLVar15 != (LineRenderer *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                        LineRenderer_set_endWidth(pLVar15,fVar2,(MethodInfo *)0x0);
                        pLVar15 = (this->fields).rangeIndicatorZX;
                        if (pLVar15 != (LineRenderer *)0x0) {
                          UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                          LineRenderer_set_startWidth(pLVar15,fVar2,(MethodInfo *)0x0);
                          pLVar15 = (this->fields).rangeIndicatorZX;
                          if (pLVar15 != (LineRenderer *)0x0) {
                            UnityEngine.CoreModule.dll::UnityEngine::LineRenderer::
                            LineRenderer_set_endWidth(pLVar15,fVar2,(MethodInfo *)0x0);
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
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
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
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

