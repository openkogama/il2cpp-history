
/* GizmoLineSlider3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor
               (GizmoLineSlider3DLookAndFeel *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__RTG__GizmoCap3DLookAndFeel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  (this->fields)._length = 5.0;
  (this->fields)._scale = 1.0;
  (this->fields)._useZoomFactor = 1;
  (this->fields)._boxHeight = 0.18;
  (this->fields)._boxDepth = 0.18;
  (this->fields)._cylinderRadius = 0.15;
  (this->fields)._isRotationArcVisible = 1;
  pGVar1 = (GizmoRotationArc3DLookAndFeel *)
           FUN_?(TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
  uVar2 = _UNK_?;
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  bVar6 = iRam_? != 0;
  (pGVar1->fields)._useShortestRotation = 1;
  (pGVar1->fields)._fillFlags = 3;
  uVar7 = _UNK_?;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar8 = _UNK_?;
  (pGVar1->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar5 = _UNK_?;
  (pGVar1->fields)._color.g = (float)uVar8;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar8 = _UNK_?;
  (pGVar1->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (pGVar1->fields)._color.a = (float)uVar8;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar8 = _UNK_?;
  (pGVar1->fields)._borderColor.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (pGVar1->fields)._borderColor.g = (float)uVar8;
  _UNK_? = (undefined4)uVar2;
  _UNK_? = SUB84(uVar2,4);
  uVar8 = _UNK_?;
  (pGVar1->fields)._borderColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (pGVar1->fields)._borderColor.a = (float)uVar8;
  (this->fields)._rotationArcLookAndFeel = pGVar1;
  if (bVar6) {
    uVar9 = (uint)((ulonglong)&(this->fields)._rotationArcLookAndFeel >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar11 == *puVar12;
      if (bVar6) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  uVar3 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  uVar8 = _UNK_?;
  (this->fields)._color.r = (float)_UNK_?;
  uVar7 = _UNK_?;
  (this->fields)._color.g = (float)uVar8;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar8 = _UNK_?;
  (this->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar5 = _UNK_?;
  (this->fields)._color.a = (float)uVar8;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar8 = _UNK_?;
  (this->fields)._hoveredColor.r = (float)_UNK_?;
  _UNK_? = uVar5;
  uVar5 = _UNK_?;
  (this->fields)._hoveredColor.g = (float)uVar8;
  _UNK_? = (undefined4)uVar3;
  _UNK_? = SUB84(uVar3,4);
  uVar8 = _UNK_?;
  (this->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (this->fields)._hoveredColor.a = (float)uVar8;
  pGVar13 = (GizmoCap3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  uVar7 = _UNK_?;
  uVar4 = _UNK_?;
  uVar5 = _UNK_?;
  bVar6 = iRam_? != 0;
  uVar8 = _UNK_?;
  (pGVar13->fields)._sphereBorderColor.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (pGVar13->fields)._sphereBorderColor.g = (float)uVar8;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar8 = _UNK_?;
  (pGVar13->fields)._sphereBorderColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (pGVar13->fields)._sphereBorderColor.a = (float)uVar8;
  (pGVar13->fields)._scale = 1.0;
  uVar7 = _UNK_?;
  uVar8 = _UNK_?;
  (pGVar13->fields)._hoveredColor.r = (float)_UNK_?;
  uVar3 = _UNK_?;
  (pGVar13->fields)._hoveredColor.g = (float)uVar8;
  _UNK_? = (undefined4)uVar7;
  _UNK_? = SUB84(uVar7,4);
  uVar8 = _UNK_?;
  (pGVar13->fields)._hoveredColor.b = (float)_UNK_?;
  _UNK_? = uVar3;
  (pGVar13->fields)._hoveredColor.a = (float)uVar8;
  (pGVar13->fields)._useZoomFactor = 1;
  (pGVar13->fields)._coneHeight = 1.65;
  (pGVar13->fields)._coneRadius = 0.5;
  (pGVar13->fields)._pyramidHeight = 1.65;
  (pGVar13->fields)._pyramidWidth = 0.8;
  (pGVar13->fields)._pyramidDepth = 0.8;
  (pGVar13->fields)._boxWidth = 0.7;
  (pGVar13->fields)._boxHeight = 0.7;
  (pGVar13->fields)._boxDepth = 0.7;
  (pGVar13->fields)._sphereRadius = 0.45;
  (pGVar13->fields)._trPrismWidth = 1.0;
  (pGVar13->fields)._trPrismHeight = 1.0;
  (pGVar13->fields)._trPrismDepth = 1.0;
  (pGVar13->fields)._numSphereBorderPoints = 100;
  uVar7 = _UNK_?;
  _UNK_? = (undefined4)uVar5;
  _UNK_? = SUB84(uVar5,4);
  uVar8 = _UNK_?;
  (pGVar13->fields)._color.r = (float)_UNK_?;
  _UNK_? = uVar7;
  uVar5 = _UNK_?;
  (pGVar13->fields)._color.g = (float)uVar8;
  _UNK_? = (undefined4)uVar4;
  _UNK_? = SUB84(uVar4,4);
  uVar8 = _UNK_?;
  (pGVar13->fields)._color.b = (float)_UNK_?;
  _UNK_? = uVar5;
  (pGVar13->fields)._color.a = (float)uVar8;
  (this->fields)._capLookAndFeel = pGVar13;
  if (bVar6) {
    uVar9 = (uint)((ulonglong)&(this->fields)._capLookAndFeel >> 0xc);
    uVar10 = (ulonglong)((uVar9 & 0x1fffff) >> 6);
    do {
      uVar11 = *(ulonglong *)(uVar10 * 8 + 0xADDR);
      puVar12 = (ulonglong *)(uVar10 * 8 + 0xADDR);
      LOCK();
      bVar6 = uVar11 == *puVar12;
      if (bVar6) {
        *puVar12 = uVar11 | 1L << (uVar9 & 0x3f);
      }
      UNLOCK();
    } while (!bVar6);
  }
  return;
}

