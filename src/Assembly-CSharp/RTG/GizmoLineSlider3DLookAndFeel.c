
/* GizmoLineSlider3DLookAndFeel() */

void Assembly-CSharp.dll::RTG::GizmoLineSlider3DLookAndFeel::GizmoLineSlider3DLookAndFeel__ctor(GizmoLineSlider3DLookAndFeel *this,MethodInfo *method)

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
  pGVar1 = (GizmoRotationArc3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoRotationArc3DLookAndFeel);
  bVar2 = iRam_? != 0;
  (pGVar1->fields)._useShortestRotation = 1;
  (pGVar1->fields)._fillFlags = 3;
  (pGVar1->fields)._color.r = 0.5;
  (pGVar1->fields)._color.g = 0.5;
  (pGVar1->fields)._color.b = 0.5;
  (pGVar1->fields)._color.a = 0.1;
  (pGVar1->fields)._borderColor.r = 0.8;
  (pGVar1->fields)._borderColor.g = 0.8;
  (pGVar1->fields)._borderColor.b = 0.8;
  (pGVar1->fields)._borderColor.a = 0.8;
  (this->fields)._rotationArcLookAndFeel = pGVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._rotationArcLookAndFeel >> 0xc);
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
  (this->fields)._color.r = 0.8588236;
  (this->fields)._color.g = 0.24313727;
  (this->fields)._color.b = 0.1137255;
  (this->fields)._color.a = 1.0;
  (this->fields)._hoveredColor.r = 0.96470594;
  (this->fields)._hoveredColor.g = 0.9490197;
  (this->fields)._hoveredColor.b = 0.19607845;
  (this->fields)._hoveredColor.a = 1.0;
  pGVar7 = (GizmoCap3DLookAndFeel *)FUN_?(TypeInfo__RTG__GizmoCap3DLookAndFeel);
  bVar2 = iRam_? != 0;
  (pGVar7->fields)._sphereBorderColor.r = 1.0;
  (pGVar7->fields)._sphereBorderColor.g = 1.0;
  (pGVar7->fields)._sphereBorderColor.b = 1.0;
  (pGVar7->fields)._sphereBorderColor.a = 1.0;
  (pGVar7->fields)._scale = 1.0;
  (pGVar7->fields)._hoveredColor.r = 0.96470594;
  (pGVar7->fields)._hoveredColor.g = 0.9490197;
  (pGVar7->fields)._hoveredColor.b = 0.19607845;
  (pGVar7->fields)._hoveredColor.a = 1.0;
  (pGVar7->fields)._useZoomFactor = 1;
  (pGVar7->fields)._coneHeight = 1.65;
  (pGVar7->fields)._coneRadius = 0.5;
  (pGVar7->fields)._pyramidHeight = 1.65;
  (pGVar7->fields)._pyramidWidth = 0.8;
  (pGVar7->fields)._pyramidDepth = 0.8;
  (pGVar7->fields)._boxWidth = 0.7;
  (pGVar7->fields)._boxHeight = 0.7;
  (pGVar7->fields)._boxDepth = 0.7;
  (pGVar7->fields)._sphereRadius = 0.45;
  (pGVar7->fields)._trPrismWidth = 1.0;
  (pGVar7->fields)._trPrismHeight = 1.0;
  (pGVar7->fields)._trPrismDepth = 1.0;
  (pGVar7->fields)._numSphereBorderPoints = 100;
  (pGVar7->fields)._color.r = 0.8588236;
  (pGVar7->fields)._color.g = 0.24313727;
  (pGVar7->fields)._color.b = 0.1137255;
  (pGVar7->fields)._color.a = 1.0;
  (this->fields)._capLookAndFeel = pGVar7;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields)._capLookAndFeel >> 0xc);
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
  return;
}

